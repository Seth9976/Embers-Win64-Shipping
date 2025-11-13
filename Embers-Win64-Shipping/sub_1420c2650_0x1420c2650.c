// 函数: sub_1420c2650
// 地址: 0x1420c2650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
int32_t rcx

if (arg4 s>= 0)
    rcx = arg1[2] - 1
    
    if (arg4 s< rcx)
        rcx = arg4
else
    rcx = 0

int32_t rdx = *arg1
int32_t r8 = arg1[1]
int32_t rax_4 = (r8 - 1) s>> rcx.b
uint128_t zmm15
zmm15.d = _mm_cvtepi32_ps(zx.o(rax_4)).d f* arg3:4.d
uint128_t zmm14
zmm14.d = _mm_cvtepi32_ps(zx.o((rdx - 1) s>> rcx.b)).d f* arg3.d
int32_t rcx_3 = int.d(zmm15.d f+ zmm15.d - 0.5f) s>> 1

if (rcx_3 s< 0)
    rax_4 = 0
else if (rcx_3 s< rax_4)
    rax_4 = rcx_3

int32_t rcx_5 = int.d(zmm14.d f+ zmm14.d - 0.5f) s>> 1

if (rcx_5 s>= 0)
    r10 = (rdx - 1) s>> rcx.b
    
    if (rcx_5 s< (rdx - 1) s>> rcx.b)
        r10 = rcx_5

int32_t arg_20 = _mm_cvtepi32_ps(zx.o(rax_4)).d
int64_t rax_6 = *(arg1 + 0x30)
int32_t r14_1 = r10 + rax_4 * (((rdx - 1) s>> rcx.b) + 1)
    + ((r8 * rdx - (((r8 - 1) s>> rcx.b) + 1) * (((rdx - 1) s>> rcx.b) + 1)) << 2) s/ 3
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(r10))
int128_t var_c8
sub_140acc920(&var_c8, rax_6 + (sx.q(r14_1) << 2))

if ((rdx - 1) s>> rcx.b == 0 || (r8 - 1) s>> rcx.b == 0)
    *arg2 = var_c8
else
    int32_t rbx_3 = ((rdx - 1) s>> rcx.b) + 1 + r14_1
    float var_d8
    sub_140acc920(&var_d8, *(arg1 + 0x30) + (sx.q(rbx_3) << 2))
    float var_b8
    sub_140acc920(&var_b8, *(arg1 + 0x30) + (sx.q(r14_1 + 1) << 2))
    float var_a8
    sub_140acc920(&var_a8, *(arg1 + 0x30) + (sx.q(rbx_3 + 1) << 2))
    zmm15.d = zmm15.d f- arg_20
    zmm14.d = zmm14.d f- zmm6.d
    int32_t var_d4
    int32_t var_a4
    int128_t zmm11
    zmm11.d = var_a4.d f- var_d4
    int32_t var_d0
    int32_t var_a0
    int128_t zmm12
    zmm12.d = var_a0.d f- var_d0
    int32_t var_cc
    int32_t var_9c
    int128_t zmm13
    zmm13.d = var_9c.d f- var_cc
    int32_t var_ac
    int128_t zmm7
    zmm7.d = var_ac.d f- var_c8:0xc.d
    int32_t var_b0
    zmm6.d = var_b0.d f- var_c8:8.d
    zmm11.d = zmm11.d f* zmm14.d
    zmm12.d = zmm12.d f* zmm14.d
    zmm11.d = zmm11.d f+ var_d4
    zmm13.d = zmm13.d f* zmm14.d
    zmm12.d = zmm12.d f+ var_d0
    zmm13.d = zmm13.d f+ var_cc
    zmm7.d = zmm7.d f* zmm14.d
    zmm7.d = zmm7.d f+ var_c8:0xc.d
    float zmm4 = (var_b8 f- var_c8.d) f* zmm14.d f+ var_c8.d
    zmm6.d = zmm6.d f* zmm14.d
    float var_b4
    float zmm5 = (var_b4 f- var_c8:4.d) f* zmm14.d f+ var_c8:4.d
    zmm13.d = zmm13.d f- zmm7.d
    zmm6.d = zmm6.d f+ var_c8:8.d
    zmm11.d = zmm11.d f- zmm5
    zmm13.d = zmm13.d f* zmm15.d
    zmm12.d = zmm12.d f- zmm6.d
    zmm13.d = zmm13.d f+ zmm7.d
    zmm11.d = zmm11.d f* zmm15.d
    zmm12.d = zmm12.d f* zmm15.d
    zmm11.d = zmm11.d f+ zmm5
    *arg2 = ((var_a8 - var_d8) f* zmm14.d + var_d8 - zmm4) f* zmm15.d + zmm4
    zmm12.d = zmm12.d f+ zmm6.d
    arg2[1] = zmm11.d
    arg2[2] = zmm12.d
    arg2[3] = zmm13.d

return arg2
