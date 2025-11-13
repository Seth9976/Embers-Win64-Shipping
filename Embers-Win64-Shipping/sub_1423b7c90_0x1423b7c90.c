// 函数: sub_1423b7c90
// 地址: 0x1423b7c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0x11].d
arg1[0x13].d = 0
int32_t r8

if (*(arg1 + 0x5c) s< rax)
    r8 = *(arg1 + 0x94)

if (*(arg1 + 0x5c) s>= rax || rax s>= r8 || r8 s< arg2 || (*(arg1 + 0xb4) & 2) != 0)
    rax = *(arg1 + 0x94)

*(arg1 + 0x9c) = rax
int32_t rdx = *(arg1 + 0xb4)

if ((rdx.b & 4) == 0 || *arg1 == 0 || rax == arg1[0xc].d)
    rax.b = 0
    return rax

int32_t r8_1 = *(arg1 + 0x5c)
int32_t r11 = arg1[0x11].d

if (r8_1 s< r11)
    arg1[0x13].d += 0x400

if ((rdx & 0x83) != 0)
    arg1[0x13].d += 0x200

if (rax - r8_1 s> sbb.d(arg4, arg4, (rdx & 0x200) != 0) + 2)
    arg1[0x13].d += 0x100

if (r8_1 s>= r11)
    int32_t rdx_3 = 0xff
    int32_t r8_2 = 0xff - int.d(fconvert.t(arg1[0xe].d))
    
    if (r8_2 s< 1)
        arg1[0x13].d += 1
        return 1
    
    if (r8_2 s< 0xff)
        rdx_3 = r8_2
    
    arg1[0x13].d += rdx_3

int32_t rax_1
rax_1.b = 1
return rax_1
