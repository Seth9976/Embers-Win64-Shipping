// 函数: sub_141d58760
// 地址: 0x141d58760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x30)

if (rax == 0)
    *arg2 = 0xffffffff
    return 0

int32_t rcx

if (rax - 1 s<= 0)
    rcx = 0
else
    int32_t rax_2 = rand()
    rcx = rax - 2
    uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rax - 1))
    uint128_t zmm2
    zmm2.d = _mm_cvtepi32_ps(zx.o(rax_2)).d f* 3.05185094e-05f
    zmm2.d = zmm2.d f* zmm0.d
    int32_t rax_3 = int.d(zmm2.d)
    
    if (rax_3 s<= rcx)
        rcx = rax_3

*arg2 = rcx
return *(*(arg1 + 0x28) + (sx.q(rcx) << 3))
