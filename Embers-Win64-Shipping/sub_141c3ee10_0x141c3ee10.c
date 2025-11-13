// 函数: sub_141c3ee10
// 地址: 0x141c3ee10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg2[1].d
float zmm1 = arg4 f/ *(arg1 + 0x10)
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(r11))
zmm1 = zmm1 f* zmm2.d
uint128_t zmm0

if (not(arg4 >= 0f))
    zmm0.d = zmm2.d f- zmm1
    zmm1 = zmm0.d

uint128_t zmm5 = 0x3c23d70a
zmm2.d = zmm2.d f- 1.00999999f

if (not(zmm1 < 0.00999999978f))
    zmm5 = _mm_min_ss(zmm2.d, zmm1)

uint32_t rcx = zx.d(arg3)

if (rcx == 0)
    zmm5.d = zmm5.d f+ zmm5.d
    zmm5.d = zmm5.d f+ 0.5f
    int64_t rdx_4 = sx.q(int.d(zmm5.d)) s>> 1
    *arg5 = *(*arg2 + (rdx_4 << 2))
    *arg6 = *(arg2[2] + (rdx_4 << 2))
    return 

if (rcx == 1)
    zmm0.d = zmm5.d f+ zmm5.d
    zmm1 = -0.5f f- zmm0.d
    int32_t r9_2 = int.d(zmm5.d f+ zmm5.d - 0.5f) s>> 1
    int64_t rdx_2 = sx.q(r9_2)
    int32_t rcx_4 = *(*arg2 + (rdx_2 << 2))
    zmm0 = _mm_cvtepi32_ps(zx.o(r9_2))
    *arg5 = rcx_4
    int64_t r8_1 = arg2[2]
    arg4 = *(r8_1 + (rdx_2 << 2))
    zmm5.d = zmm5.d f- zmm0.d
    *arg6 = (*(r8_1 - (sx.q(int.d(zmm1)) s>> 1 << 2)) - arg4) f* zmm5.d + arg4
    return 

if (rcx != 2)
    return 

zmm5.d = zmm5.d f+ zmm5.d
zmm5.d = zmm5.d f+ 0.5f
int32_t rdx_1 = int.d(zmm5.d) s>> 1
int32_t rax_1 = rdx_1 - 1
int32_t rcx_2 = rdx_1 + 1

if (rax_1 s<= 0)
    rax_1 = 0

int64_t r9 = sx.q(rax_1)
int64_t rax_2 = *arg2

if (r11 s<= rcx_2)
    rcx_2 = r11

int64_t r8 = sx.q(rcx_2)
int64_t rcx_3 = sx.q(rdx_1)
zmm2 = *(rax_2 + (r8 << 2))
zmm1 = *(rax_2 + (rcx_3 << 2))
zmm1 = zmm1 + zmm1 f- *(rax_2 + (r9 << 2)) f- zmm2.d
zmm2.d = zmm2.d f- *(rax_2 + (r9 << 2))
zmm0.d = 0.5f / zmm1
zmm0.d = zmm0.d f* zmm2.d
*arg5 = zmm0.d
int64_t rax_4 = arg2[2]
zmm2 = *(rax_4 + (r8 << 2))
zmm0 = *(rax_4 + (rcx_3 << 2))
zmm0.d = zmm0.d f+ zmm0.d
zmm0.d = zmm0.d f- *(rax_4 + (r9 << 2))
zmm0.d = zmm0.d f- zmm2.d
zmm2.d = zmm2.d f- *(rax_4 + (r9 << 2))
*arg6 = 0.5f f/ zmm0.d f* zmm2.d
