// 函数: sub_1408b1220
// 地址: 0x1408b1220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *arg3
uint32_t rcx = zx.d(*arg4)
uint128_t zmm4
zmm4.d = (*arg5).d f* zmm0.d
uint128_t zmm5
zmm5.d = (*(arg5 + 4)).d f* zmm0.d
uint128_t zmm6
zmm6.d = (*(arg5 + 8)).d f* zmm0.d
zmm0.d = zmm4.d f+ zmm4.d
zmm0.d = zmm0.d f- 0.5f
int32_t r8 = int.d(zmm0.d)
zmm0.d = zmm5.d f+ zmm5.d
int32_t r8_1 = r8 s>> 1
zmm0.d = zmm0.d f- 0.5f
int32_t rdx = int.d(zmm0.d)
zmm0.d = zmm6.d f+ zmm6.d
int32_t rdx_1 = rdx s>> 1
zmm0.d = zmm0.d f- 0.5f
int32_t r11_1 = int.d(zmm0.d) s>> 1
uint128_t zmm9
uint128_t zmm10
uint128_t zmm11

if (rcx == 0)
label_1408b1423:
    zmm10.d = zmm4.d f- _mm_cvtepi32_ps(zx.o(r8_1)).d
    zmm9.d = zmm6.d f- _mm_cvtepi32_ps(zx.o(r11_1)).d
    zmm11.d = zmm5.d f- _mm_cvtepi32_ps(zx.o(rdx_1)).d
else if (rcx == 1)
    zmm0.d = float.s(r8_1)
    zmm4.d = zmm4.d f- zmm0.d
    zmm0.d = zmm4.d f+ zmm4.d
    zmm4.d = zmm4.d f* zmm4.d
    zmm10.d = 3f f- zmm0.d
    zmm0.d = float.s(rdx_1)
    zmm10.d = zmm10.d f* zmm4.d
    zmm5.d = zmm5.d f- zmm0.d
    zmm0.d = zmm5.d f+ zmm5.d
    zmm5.d = zmm5.d f* zmm5.d
    zmm11.d = 3f f- zmm0.d
    zmm0.d = float.s(r11_1)
    zmm11.d = zmm11.d f* zmm5.d
    zmm6.d = zmm6.d f- zmm0.d
    zmm0.d = zmm6.d f+ zmm6.d
    zmm6.d = zmm6.d f* zmm6.d
    zmm9.d = 3f f- zmm0.d
    zmm9.d = zmm9.d f* zmm6.d
else
    if (rcx != 2)
        goto label_1408b1423
    
    zmm0.d = float.s(r8_1)
    zmm4.d = zmm4.d f- zmm0.d
    zmm0.d = float.s(rdx_1)
    zmm5.d = zmm5.d f- zmm0.d
    zmm10.d = zmm4.d f* 6f
    zmm0.d = float.s(r11_1)
    zmm10.d = zmm10.d f- 15f
    zmm11.d = zmm5.d f* 6f
    zmm6.d = zmm6.d f- zmm0.d
    zmm11.d = zmm11.d f- 15f
    zmm10.d = zmm10.d f* zmm4.d
    zmm9.d = zmm6.d f* 6f
    zmm11.d = zmm11.d f* zmm5.d
    zmm10.d = zmm10.d f+ 10f
    zmm9.d = zmm9.d f- 15f
    zmm11.d = zmm11.d f+ 10f
    zmm10.d = zmm10.d f* zmm4.d
    zmm9.d = zmm9.d f* zmm6.d
    zmm11.d = zmm11.d f* zmm5.d
    zmm9.d = zmm9.d f+ 10f
    zmm4.d = zmm4.d f* zmm4.d
    zmm5.d = zmm5.d f* zmm5.d
    zmm10.d = zmm10.d f* zmm4.d
    zmm9.d = zmm9.d f* zmm6.d
    zmm6.d = zmm6.d f* zmm6.d
    zmm11.d = zmm11.d f* zmm5.d
    zmm9.d = zmm9.d f* zmm6.d

int32_t rdi = *arg1
int32_t r10 = rdx_1 * 0x7a69
int32_t r9 = r11_1 * 0x1b3b
int32_t r11_2 = r8_1 * 0x653
int32_t rbx_1 = (r8_1 + 1) * 0x653
int32_t rdx_3 = r9 ^ r10
int32_t rcx_4 = rdi ^ r11_2 ^ rdx_3
int64_t rcx_5 = sx.q(rcx_4 * rcx_4 * rcx_4 * 0xec4d)
uint64_t rcx_6 = (zx.q((rcx_5 s>> 0xd).b) ^ zx.q(rcx_5.b)) * 3
uint128_t zmm1 = zx.o(*(&data_1439814a0 + (rcx_6 << 2)))
int32_t rax_8 = *((rcx_6 << 2) + 0x1439814a8)
int32_t rcx_9 = rbx_1 ^ rdi ^ rdx_3
uint64_t var_98 = zmm1.q
int32_t rdx_5 = r9 ^ (r10 + 0x7a69)
int64_t rcx_10 = sx.q(rcx_9 * rcx_9 * rcx_9 * 0xec4d)
uint64_t rcx_11 = (zx.q((rcx_10 s>> 0xd).b) ^ zx.q(rcx_10.b)) * 3
uint128_t zmm2
zmm2.d = (*(&data_1439814a0 + (rcx_11 << 2))).d f- zmm1.d
zmm4.d = (*((rcx_11 << 2) + 0x1439814a8)).d f- rax_8
int32_t rcx_14 = rdi ^ r11_2 ^ rdx_5
zmm2.d = zmm2.d f* zmm10.d
zmm2.d = zmm2.d f+ zmm1.d
zmm4.d = zmm4.d f* zmm10.d
float zmm3 = (*((rcx_11 << 2) + 0x1439814a4) f- var_98:4.d) f* zmm10.d f+ var_98:4.d
zmm4.d = zmm4.d f+ rax_8
int64_t rcx_15 = sx.q(rcx_14 * rcx_14 * rcx_14 * 0xec4d)
uint64_t rcx_16 = (zx.q((rcx_15 s>> 0xd).b) ^ zx.q(rcx_15.b)) * 3
int32_t rax_26 = *((rcx_16 << 2) + 0x1439814a8)
zmm1 = zx.o(*(&data_1439814a0 + (rcx_16 << 2)))
int32_t rcx_19 = rbx_1 ^ rdi ^ rdx_5
int64_t rcx_20 = sx.q(rcx_19 * rcx_19 * rcx_19 * 0xec4d)
uint64_t var_98_1 = zmm1.q
int32_t r10_1 = r10 ^ (r9 + 0x1b3b)
int32_t rdx_7 = (r9 + 0x1b3b) ^ (r10 + 0x7a69)
uint64_t rcx_21 = (zx.q((rcx_20 s>> 0xd).b) ^ zx.q(rcx_20.b)) * 3
zmm6.d = (*(&data_1439814a0 + (rcx_21 << 2))).d f- zmm1.d
int128_t zmm7
zmm7.d = (*((rcx_21 << 2) + 0x1439814a4)).d f- var_98_1:4.d
int128_t zmm8
zmm8.d = (*((rcx_21 << 2) + 0x1439814a8)).d f- rax_26
int32_t rcx_24 = rdi ^ r11_2 ^ r10_1
zmm6.d = zmm6.d f* zmm10.d
zmm7.d = zmm7.d f* zmm10.d
zmm6.d = zmm6.d f+ zmm1.d
zmm8.d = zmm8.d f* zmm10.d
zmm7.d = zmm7.d f+ var_98_1:4.d
zmm8.d = zmm8.d f+ rax_26
zmm6.d = zmm6.d f- zmm2.d
zmm7.d = zmm7.d f- zmm3
zmm8.d = zmm8.d f- zmm4.d
zmm6.d = zmm6.d f* zmm11.d
zmm7.d = zmm7.d f* zmm11.d
int64_t rcx_25 = sx.q(rcx_24 * rcx_24 * rcx_24 * 0xec4d)
zmm6.d = zmm6.d f+ zmm2.d
zmm8.d = zmm8.d f* zmm11.d
zmm7.d = zmm7.d f+ zmm3
zmm8.d = zmm8.d f+ zmm4.d
uint64_t rcx_26 = (zx.q((rcx_25 s>> 0xd).b) ^ zx.q(rcx_25.b)) * 3
zmm1 = zx.o(*(&data_1439814a0 + (rcx_26 << 2)))
int32_t rax_44 = *((rcx_26 << 2) + 0x1439814a8)
int32_t rcx_29 = rbx_1 ^ rdi ^ r10_1
uint64_t var_98_2 = zmm1.q
int64_t rcx_30 = sx.q(rcx_29 * rcx_29 * rcx_29 * 0xec4d)
uint64_t rcx_31 = (zx.q((rcx_30 s>> 0xd).b) ^ zx.q(rcx_30.b)) * 3
zmm4.d = (*((rcx_31 << 2) + 0x1439814a4)).d f- var_98_2:4.d
zmm5.d = (*((rcx_31 << 2) + 0x1439814a8)).d f- rax_44
int32_t rcx_34 = rdi ^ r11_2 ^ rdx_7
zmm4.d = zmm4.d f* zmm10.d
zmm3 = ((*(&data_1439814a0 + (rcx_31 << 2))).d f- zmm1.d) f* zmm10.d f+ zmm1.d
zmm5.d = zmm5.d f* zmm10.d
zmm4.d = zmm4.d f+ var_98_2:4.d
zmm5.d = zmm5.d f+ rax_44
int64_t rcx_35 = sx.q(rcx_34 * rcx_34 * rcx_34 * 0xec4d)
int32_t rbx_3 = rbx_1 ^ rdi ^ rdx_7
uint64_t rcx_36 = (zx.q((rcx_35 s>> 0xd).b) ^ zx.q(rcx_35.b)) * 3
zmm1 = zx.o(*(&data_1439814a0 + (rcx_36 << 2)))
int32_t rax_62 = *((rcx_36 << 2) + 0x1439814a8)
uint64_t var_98_3 = zmm1.q
int64_t rcx_37 = sx.q(rbx_3 * rbx_3 * rbx_3 * 0xec4d)
uint64_t rcx_38 = (zx.q((rcx_37 s>> 0xd).b) ^ zx.q(rcx_37.b)) * 3
zmm2 = zx.o(*(&data_1439814a0 + (rcx_38 << 2)))
int32_t result = *((rcx_38 << 2) + 0x1439814a8)
zmm0.d = zmm2.d f- zmm1.d
zmm0.d = zmm0.d f* zmm10.d
zmm0.d = zmm0.d f+ zmm1.d
zmm1.d = _mm_shuffle_ps(zmm2, zmm2, 0x55).d f- var_98_3:4.d
zmm0.d = zmm0.d f- zmm3
zmm1.d = zmm1.d f* zmm10.d
zmm0.d = zmm0.d f* zmm11.d
zmm1.d = zmm1.d f+ var_98_3:4.d
zmm0.d = zmm0.d f+ zmm3
zmm1.d = zmm1.d f- zmm4.d
zmm0.d = zmm0.d f- zmm6.d
zmm1.d = zmm1.d f* zmm11.d
zmm0.d = zmm0.d f* zmm9.d
zmm1.d = zmm1.d f+ zmm4.d
zmm0.d = zmm0.d f+ zmm6.d
zmm1.d = zmm1.d f- zmm7.d
zmm0.d = zmm0.d f* *arg2
zmm1.d = zmm1.d f* zmm9.d
zmm0.d = zmm0.d f+ *arg5
zmm1.d = zmm1.d f+ zmm7.d
*arg5 = zmm0.d
zmm1.d = zmm1.d f* *arg2
zmm1.d = zmm1.d f+ *(arg5 + 4)
*(arg5 + 4) = zmm1.d
zmm1.d = result.d f- rax_62
zmm1.d = zmm1.d f* zmm10.d
zmm1.d = zmm1.d f+ rax_62
zmm1.d = zmm1.d f- zmm5.d
zmm1.d = zmm1.d f* zmm11.d
zmm1.d = zmm1.d f+ zmm5.d
zmm1.d = zmm1.d f- zmm8.d
zmm1.d = zmm1.d f* zmm9.d
zmm1.d = zmm1.d f+ zmm8.d
zmm1.d = zmm1.d f* *arg2
zmm1.d = zmm1.d f+ *(arg5 + 8)
*(arg5 + 8) = zmm1.d
return result
