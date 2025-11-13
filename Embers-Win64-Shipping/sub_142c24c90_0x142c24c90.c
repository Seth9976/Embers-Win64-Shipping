// 函数: sub_142c24c90
// 地址: 0x142c24c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t i_3 = 0
char result = sub_142c267a0(arg1, arg2, &i_3)

if (result == 0)
    return result

int32_t i_2 = i_3

if (i_2 != 0)
    void* r8_3 = &arg1[((zx.q(arg1[0xe]) + (((zx.q(arg1[0xc]) << 8) + zx.q(arg1[0xd])) << 8)) << 8)
        + zx.q(arg1[0xf]) + 5]
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        uint16_t rdx = zx.w(*(r8_3 - 1))
        uint32_t r10_1 = zx.d(*r8_3)
        
        if (rdx * 0x100 + r10_1.w != 0xffff)
            int32_t rdx_2 = r10_1 + 1 + (zx.d(rdx.b) << 8)
            
            if (rbx u<= rdx_2)
                rbx = rdx_2
        
        uint16_t rdx_3 = zx.w(*(r8_3 + 1))
        uint32_t r10_2 = zx.d(*(r8_3 + 2))
        
        if (rdx_3 * 0x100 + r10_2.w != 0xffff)
            int32_t rdx_5 = r10_2 + 1 + (zx.d(rdx_3.b) << 8)
            
            if (rbx u<= rdx_5)
                rbx = rdx_5
        
        r8_3 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)

return sub_142c18000(&arg1[0x10], arg2, arg1, rbx) __tailcall
