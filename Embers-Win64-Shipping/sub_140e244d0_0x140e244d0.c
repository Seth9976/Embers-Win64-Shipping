// 函数: sub_140e244d0
// 地址: 0x140e244d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax = sub_140e11270(arg2, arg3)
uint32_t r8 = zx.d(rax[1].b)

if (r8 != 0)
    if (r8 == 1)
        rax = *(rax + 0x18)
    else if (r8 == 3)
        rax = arg1 + 0x20
    else
        rax = arg1 + 0x10

*(arg1 + 0x10) = *rax
float zmm0[0x4] = *rax
float temp0_2[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xff)
temp0_2[0] = temp0_2[0] * 0.600000024f
*(arg1 + 0x20) = zmm0
*(arg1 + 0x2c) = temp0_2[0]
return arg1
