// 函数: sub_14154a2a0
// 地址: 0x14154a2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t rdi = 0
int32_t var_124 = 1
int32_t var_128 = 0
int64_t var_114 = var_128.q
int64_t rax_3 = sx.q(*arg3)
int32_t i_2 = 3
int64_t var_10c = 2
int64_t r8 = rax_3 * 3
uint128_t zmm4 = zx.o(*(arg1 + (r8 << 2)))
uint128_t zmm2 = zx.o(*(arg2 + (r8 << 2)))
uint128_t zmm0
zmm0.d = zmm4.d f- zmm2.d
int32_t var_f8 = *(arg1 + (r8 << 2) + 8)
int64_t rax_5 = sx.q(arg3[1])
int64_t var_d0 = zmm2.q
uint128_t zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
int32_t var_a0 = zmm0.d
zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
int64_t rdx = rax_5 * 3
uint128_t zmm5 = zx.o(*(arg1 + (rdx << 2)))
zmm1.d = zmm1.d f- zmm0.d
int32_t rax_6 = *(arg1 + (rdx << 2) + 8)
zmm0 = var_f8
uint128_t zmm3 = zx.o(*(arg2 + (rdx << 2)))
int64_t rax_7 = sx.q(arg3[2])
zmm2 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
int32_t var_9c = zmm1.d
zmm1.d = zmm5.d f- zmm3.d
int64_t var_100 = zmm4.q
int64_t rcx = rax_7 * 3
uint64_t var_f4 = zmm5.q
int32_t rax_8 = *(arg1 + (rcx << 2) + 8)
uint128_t zmm7 = zx.o(*(arg1 + (rcx << 2)))
uint128_t zmm6 = zx.o(*(arg2 + (rcx << 2)))
int32_t var_c8 = *(arg2 + (r8 << 2) + 8)
zmm0.d = zmm0.d f- var_c8
int32_t rax_10 = *(arg2 + (rdx << 2) + 8)
int32_t rax_11 = *(arg2 + (rcx << 2) + 8)
int32_t var_94 = zmm1.d
int32_t var_98 = zmm0.d
zmm1.d = zmm7.d f- zmm6.d
zmm2.d = zmm2.d f- _mm_shuffle_ps(zmm3, zmm3, 0x55).d
uint64_t var_c4 = zmm3.q
zmm0.d = rax_6.d f- rax_10
int32_t var_88 = zmm1.d
uint64_t var_e8 = zmm7.q
int32_t var_90 = zmm2.d
int32_t var_8c = zmm0.d
zmm2.d = _mm_shuffle_ps(zmm7, zmm7, 0x55).d f- _mm_shuffle_ps(zmm6, zmm6, 0x55).d
uint64_t var_b8 = zmm6.q
zmm0.d = rax_8.d f- rax_11
int32_t var_84 = zmm2.d
int32_t var_80 = zmm0.d
void var_70
int64_t* rax_12 = sub_1416f4530(&var_128, &var_a0, &i_2, &var_70, &var_100, &var_d0)
*arg5 = *rax_12
arg5[1].d = rax_12[1].d
uint128_t zmm0_1 = *(arg5 + 4)
uint128_t zmm2_1 = *arg5
float zmm1_1[0x4] = arg5[1].d
zmm2_1.d = zmm2_1.d f* zmm2_1.d
zmm0_1.d = zmm0_1.d f* zmm0_1.d
zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm2_1.d = zmm2_1.d f+ zmm1_1[0]
float temp0_6[0x4] = _mm_sqrt_ss(0, zmm2_1.d)
zmm0_1 = _mm_cvtps_pd(temp0_6[0].q)
*arg4 = temp0_6[0]

if (zmm0_1.q f>= 0.0001)
    zmm2_1.d = 1f / temp0_6[0]
    zmm1_1 = zmm2_1
    zmm0_1.d = zmm2_1.d f* *arg5
    zmm1_1[0] = zmm1_1[0] f* *(arg5 + 4)
    zmm2_1.d = zmm2_1.d f* arg5[1].d
    *arg5 = zmm0_1.d
    *(arg5 + 4) = zmm1_1[0]
    arg5[1].d = zmm2_1.d
else
    *arg5 = *(arg3 + 0xc)
    arg5[1].d = arg3[5]

if (not(0f f<= arg3[6]))
    int32_t var_120_1 = (arg5[1].d ^ 0x80000000).d
    *arg5 = (_mm_unpacklo_ps(*arg5 ^ 0x80000000, (*(arg5 + 4) ^ 0x80000000).q)).q
    arg5[1].d = var_120_1

uint64_t i_1 = zx.q(i_2)
void* result = nullptr
*arg6 = (_mm_unpacklo_ps(zx.o(0), 0)).q
arg6[2] = 0
*arg7 = (_mm_unpacklo_ps(zx.o(0), 0)).q
int32_t var_120_2 = 0
arg7[2] = 0
int32_t var_120_3 = 0

if (i_1.d s> 0)
    result = &var_70
    uint64_t i
    
    do
        zmm2_1 = *result
        result += 4
        zmm1_1 = zmm2_1
        zmm0_1.d = zmm2_1.d f* *(&var_100 + rdi)
        zmm1_1[0] = zmm1_1[0] f* *(&var_100:4 + rdi)
        zmm0_1.d = zmm0_1.d f+ *arg6
        zmm1_1[0] = zmm1_1[0] f+ arg6[1]
        *arg6 = zmm0_1.d
        zmm0_1.d = zmm2_1.d f* *(&var_f8 + rdi)
        arg6[1] = zmm1_1[0]
        zmm1_1 = zmm2_1
        zmm1_1[0] = zmm1_1[0] f* *(&var_d0 + rdi)
        zmm0_1.d = zmm0_1.d f+ arg6[2]
        arg6[2] = zmm0_1.d
        zmm0_1.d = zmm2_1.d f* *(&var_d0:4 + rdi)
        zmm2_1.d = zmm2_1.d f* *(&var_c8 + rdi)
        rdi += 0xc
        zmm0_1.d = zmm0_1.d f+ arg7[1]
        zmm1_1[0] = zmm1_1[0] f+ *arg7
        zmm2_1.d = zmm2_1.d f+ arg7[2]
        arg7[1] = zmm0_1.d
        *arg7 = zmm1_1[0]
        arg7[2] = zmm2_1.d
        i = i_1
        i_1 -= 1
    while (i != 1)

__security_check_cookie(rax_1 ^ &var_158)
return result
