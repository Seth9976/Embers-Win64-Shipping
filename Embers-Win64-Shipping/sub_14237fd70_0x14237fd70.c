// 函数: sub_14237fd70
// 地址: 0x14237fd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)

if (arg5 != 0)
    arg1[1] = &data_1433363a0
    arg1[0x31] = &data_142d5a028
    arg1[0x32].d = 0

TEB* gsbase

if (data_143f59c70 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f59c70)
    
    if (data_143f59c70 == 0xffffffff)
        data_143f59c60 = 0
        data_143f59c68 = 0
        _Init_thread_footer(&data_143f59c70)

float zmm6[0x4] = arg2[0x20].d
float zmm3[0x4] = arg2[0x21].d
int32_t zmm1 = *(arg2 + 0x114)
int32_t zmm4 = *(arg2 + 0x10c)
zmm3[0] = zmm3[0] f+ zmm1
int128_t zmm5 = *(arg2 + 0x104)
zmm6[0] = zmm6[0] f- zmm4
int32_t zmm2 = arg2[0x22].d
zmm3[0] = zmm3[0] f- zmm1
uint8_t r15 = *(arg2 + 0x20c)
zmm6[0] = zmm6[0] f+ zmm4
char var_140 = 1
int128_t zmm7 = zmm5
zmm5.d = zmm5.d f- zmm2
r15 = r15 u>> 2 | *(arg2 + 0x20b)
zmm7.d = zmm7.d f+ zmm2
float var_150 = zmm3[0]
float var_144 = zmm3[0]
void* rax_4 = arg2[0x88]
int64_t var_158 = (_mm_unpacklo_ps(zmm6, zmm5.q)).q
int64_t var_14c = (_mm_unpacklo_ps(zmm6, zmm7.q)).q
void* rsi = *(**(rax_4 + 0x50) + (rdi << 3))
int32_t rax_6 = sub_142366560(rsi)
int32_t rax_7 = sub_142366560(rsi)
int32_t rax_8 = sub_1423664d0(rsi)
int32_t var_1b8 = 0
sub_1420d88c0(arg1, sub_1423664d0(rsi), rax_8, rax_7, rax_6, 0, r15 u>> 3 & 1, 0, arg4, arg2, 
    &var_158, &data_143f59c60)
*arg1 = &data_14327fc58
*(sx.q(*(arg1[1] + 4)) + arg1 + 8) = &data_143336398
arg1[0x17] = 0
arg1[0x18] = 0
arg1[0x19].d = arg3
arg1[0x1a] = arg2[0x88]
arg1[0x1b] = arg2
void* rax_14 = arg2[0x88]
int64_t var_1a8 = 0
int32_t var_1a0_1 = 0
arg1[0x1c] = *(**(rax_14 + 0x50) + (rdi << 3))
arg1[0x1d] = 0
arg1[0x1e].d = 0
*(arg1 + 0xf4) = 0
float zmm1_1[0x4] = *(arg2 + 0x1e0)
*(arg1 + 0x184) &= 0xfffffffe
void* rcx_11 = arg1[0x1c]
float temp0_2[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
temp0_2[0] = temp0_2[0] * zmm1_1[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
temp0_2[0] = temp0_2[0] * temp0_3[0]
temp0_2[0] - 0f
int32_t r13
r13.b = temp0_2[0] < 0f
*(arg1 + 0x184) |= r13
*(arg1 + 0xe8) = *sub_14229e7e0(rcx_11 + 0x178, &var_1a8)
void var_198
float (* rax_18)[0x4] = (*(*arg2 + 0x698))(arg2, &var_198, (zx.o(0)).d)
*(arg1 + 0x100) = *rax_18
*(arg1 + 0x110) = rax_18[1]
*(arg1 + 0x120) = rax_18[2]
*(arg1 + 0x130) = rax_18[3]
float var_128[0x4]
float (* rax_19)[0x4] = sub_1408041d0(&arg1[0x20], &var_128)
float zmm4_1[0x4] = *rax_19
float zmm8_1[0x4] = (*rax_19)[1]
float zmm0_2 = rax_19[1][0]
float zmm3_1 = (*rax_19)[5]
float zmm12[0x4] = (*rax_19)[2]
float zmm1_2 = rax_19[2][0]
float zmm5_1 = (*rax_19)[9]
float zmm7_1[0x4] = (*rax_19)[6]
float zmm2_1 = rax_19[3][0]
float zmm6_1[0x4] = (*rax_19)[0xd]
float zmm9 = (*rax_19)[0xa]
float zmm10 = (*rax_19)[0xe]
float zmm15[0x4] = (*rax_19)[3]
float zmm11[0x4] = (*rax_19)[7]
float zmm13 = (*rax_19)[0xb]
float zmm14 = (*rax_19)[0xf]
float temp0_4[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
float temp0_5[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xe1)
temp0_4[0] = zmm0_2
temp0_5[0] = zmm3_1
float temp0_6[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xe1)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
temp0_6[0] = zmm7_1[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
temp0_7[0] = zmm1_2
temp0_8[0] = zmm5_1
float temp0_9[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x27)
temp0_9[0] = zmm9
float temp0_11[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x27)
temp0_10[0] = zmm2_1
temp0_11[0] = zmm6_1[0]
float temp0_12[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x39)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x39)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x27)
*(arg1 + 0x140) = temp0_12
*(arg1 + 0x150) = temp0_13
temp0_14[0] = zmm10
float temp0_15[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xe1)
temp0_15[0] = zmm11[0]
*(arg1 + 0x160) = _mm_shuffle_ps(temp0_14, temp0_14, 0x39)
float temp0_17[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc6)
temp0_17[0] = zmm13
float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0x27)
temp0_18[0] = zmm14
*(arg1 + 0x170) = _mm_shuffle_ps(temp0_18, temp0_18, 0x39)
zmm2_1 = *(arg1 + 0x13c)
zmm3_1 = arg1[0x27].d
zmm4_1 = *(arg1 + 0x11c)
zmm11 = arg1[0x21].d
zmm1_2 = *(arg1 + 0x10c)
zmm7_1 = arg1[0x25].d
zmm5_1 = *(arg1 + 0x12c)
zmm6_1 = arg1[0x23].d
zmm14 = *(arg1 + 0x124)
zmm9 = *(arg1 + 0x134)
zmm10 = *(arg1 + 0x104)
zmm13 = zmm6_1[0] * zmm2_1
zmm7_1[0] = zmm7_1[0] * zmm2_1
zmm11[0] = zmm11[0] * zmm2_1
zmm7_1[0] = zmm7_1[0] - zmm5_1 * zmm3_1
zmm6_1[0] = zmm6_1[0] * zmm5_1
zmm0_2 = zmm4_1[0] * zmm3_1
zmm2_1 = zmm7_1[0]
zmm7_1[0] = zmm7_1[0] * zmm10
zmm13 = zmm13 - zmm0_2
zmm6_1[0] = zmm6_1[0] - zmm4_1[0] * zmm7_1[0]
zmm0_2 = zmm1_2 * zmm3_1
zmm3_1 = zmm11[0]
zmm11[0] = zmm11[0] * zmm4_1[0]
zmm4_1 = *(arg1 + 0x114)
zmm11[0] = zmm11[0] - zmm0_2
zmm2_1 = zmm2_1 * zmm4_1[0]
zmm0_2 = zmm1_2 * zmm7_1[0]
zmm11[0] = zmm11[0] - zmm1_2 * zmm6_1[0]
zmm1_2 = zmm6_1[0] * zmm9
zmm3_1 = zmm3_1 * zmm5_1 - zmm0_2
zmm6_1[0] = zmm6_1[0] * zmm10
zmm0_2 = zmm11[0] * zmm14
zmm11[0] = zmm11[0] * zmm4_1[0]
zmm2_1 = zmm2_1 - zmm13 * zmm14 + zmm1_2
zmm7_1[0] = zmm7_1[0] - zmm0_2
zmm1_2 = zmm3_1 * zmm9
zmm3_1 = zmm3_1 * zmm4_1[0]
zmm13 = zmm13 * zmm10 - zmm11[0]
zmm0_2 = zmm11[0] * zmm9
zmm2_1 = zmm2_1 f* arg1[0x20].d
zmm7_1[0] = zmm7_1[0] + zmm1_2
zmm6_1[0] = zmm6_1[0] - zmm3_1
zmm11[0] = zmm11[0] * zmm14
zmm7_1[0] = zmm7_1[0] f* arg1[0x22].d
zmm6_1[0] = zmm6_1[0] + zmm11[0]
zmm2_1 = zmm2_1 - zmm7_1[0] + (zmm13 + zmm0_2) f* arg1[0x24].d
zmm6_1[0] = zmm6_1[0] f* arg1[0x26].d
arg1[0x30].d = zmm2_1 - zmm6_1[0]
return arg1
