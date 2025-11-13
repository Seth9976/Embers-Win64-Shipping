// 函数: sub_140ae5330
// 地址: 0x140ae5330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg2
char* r10 = arg1
uint16_t* r9 = arg3

if (arg2 u>= 3)
    uint64_t i_1 = zx.q(r11 u/ 3)
    uint64_t i
    
    do
        uint32_t rcx = zx.d(r10[1])
        r11 -= 3
        uint32_t r8 = zx.d(*r10)
        uint32_t rdx_2 = zx.d(r10[2])
        r10 = &r10[3]
        uint32_t r8_4 = (r8 << 8 | rcx) << 8 | rdx_2
        uint32_t r8_5 = r8_4 u>> 6
        uint64_t rcx_2 = zx.q(r8_5) u>> 6
        r9[3] = zx.w(*((zx.q(r8_4) & 0x3f)
            + "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"))
        r9[2] = zx.w(*((zx.q(r8_5) & 0x3f)
            + "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"))
        r9[1] = zx.w(*((zx.q(rcx_2.d) & 0x3f)
            + "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"))
        *r9 =
            zx.w((*"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[rcx_2 u>> 6])
        r9 = &r9[4]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r11 != 0)
    uint16_t rax
    rax.b = 0
    
    if (r11 == 2)
        rax = zx.w(r10[1])
    
    uint16_t r8_6 = 0x3d
    uint32_t rdx_5 = zx.d(*r10) << 8 | zx.d(rax.b)
    r9[3] = 0x3d
    uint64_t rdx_7 = zx.q(rdx_5 << 8) u>> 6
    
    if (r11 != 1)
        r8_6 = zx.w(*((zx.q(rdx_7.d) & 0x3f)
            + "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"))
    
    r9[2] = r8_6
    uint64_t rdx_8 = rdx_7 u>> 6
    r9[1] = zx.w(*((zx.q(rdx_8.d) & 0x3f)
        + "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"))
    *r9 = zx.w((*"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")[rdx_8 u>> 6])
    r9 = &r9[4]

*r9 = 0
return zx.q(((r9 - arg3) s>> 1).d)
