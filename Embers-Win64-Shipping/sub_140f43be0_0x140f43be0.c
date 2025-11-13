// 函数: sub_140f43be0
// 地址: 0x140f43be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = arg1
int32_t rcx = arg4 - arg3
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
void* i_2

if (arg3 s< arg4 && rcx u>= 0x10)
    int64_t i = sx.q(arg3)
    int32_t rcx_1 = rcx & 0x8000000f
    
    if (rcx_1 s< 0)
        rcx_1 = ((rcx_1 - 1) | 0xfffffff0) + 1
    
    i_2 = *arg2 + ((i + 8) << 2)
    
    do
        arg1 = *(i_2 - 0x20)
        i_2 += 0x40
        arg3 += 0x10
        i += 0x10
        *(i_2 - 0x60) = _mm_max_ps(temp0, arg1)
        *(i_2 - 0x50) = _mm_max_ps(temp0, *(i_2 - 0x50))
        *(i_2 - 0x40) = _mm_max_ps(temp0, *(i_2 - 0x40))
        *(i_2 - 0x30) = _mm_max_ps(temp0, *(i_2 - 0x30))
    while (i s< sx.q(arg4 - rcx_1))

int64_t rdx = sx.q(arg3)
int64_t r8 = sx.q(arg4)

if (rdx s>= r8)
    return 

if (r8 - rdx s>= 4)
    i_2 = ((r8 - rdx - 4) u>> 2) + 1
    void* rcx_7 = *arg2 + 8 + (rdx << 2)
    rdx += i_2 << 2
    void* i_1
    
    do
        rcx_7 += 0x10
        *(rcx_7 - 0x18) = __maxss_xmmss_memss(zmm2[0], *(rcx_7 - 0x18))[0]
        *(rcx_7 - 0x14) = _mm_max_ss((*(rcx_7 - 0x14))[0], zmm2[0])[0]
        *(rcx_7 - 0x10) = _mm_max_ss((*(rcx_7 - 0x10))[0], zmm2[0])[0]
        *(rcx_7 - 0xc) = _mm_max_ss((*(rcx_7 - 0xc))[0], zmm2[0])[0]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (rdx s>= r8)
    return 

i_2 = *arg2

do
    *(i_2 + (rdx << 2)) = _mm_max_ss((*(i_2 + (rdx << 2)))[0], zmm2[0])[0]
    rdx += 1
while (rdx s< r8)
