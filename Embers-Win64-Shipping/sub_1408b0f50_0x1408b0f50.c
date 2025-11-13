// 函数: sub_1408b0f50
// 地址: 0x1408b0f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(*arg4)
uint128_t zmm4
zmm4.d = (*arg5).d f* *arg3
uint128_t zmm5
zmm5.d = (*(arg5 + 4)).d f* *arg3
uint128_t zmm0
zmm0.d = zmm4.d f+ zmm4.d
zmm0.d = zmm0.d f- 0.5f
int32_t r8_1 = int.d(zmm0.d) s>> 1
zmm0.d = zmm5.d f+ zmm5.d
zmm0.d = zmm0.d f- 0.5f
int32_t rdx_1 = int.d(zmm0.d) s>> 1
uint128_t zmm6
uint128_t zmm7

if (rcx == 0)
    zmm7.d = zmm4.d f- _mm_cvtepi32_ps(zx.o(r8_1)).d
    zmm6.d = zmm5.d f- _mm_cvtepi32_ps(zx.o(rdx_1)).d
else if (rcx == 1)
    zmm0.d = float.s(r8_1)
    zmm4.d = zmm4.d f- zmm0.d
    zmm0.d = zmm4.d f+ zmm4.d
    zmm4.d = zmm4.d f* zmm4.d
    zmm7.d = 3f f- zmm0.d
    zmm0.d = float.s(rdx_1)
    zmm7.d = zmm7.d f* zmm4.d
    zmm5.d = zmm5.d f- zmm0.d
    zmm0.d = zmm5.d f+ zmm5.d
    zmm5.d = zmm5.d f* zmm5.d
    zmm6.d = 3f f- zmm0.d
    zmm6.d = zmm6.d f* zmm5.d
else if (rcx != 2)
    zmm7.d = zmm4.d f- _mm_cvtepi32_ps(zx.o(r8_1)).d
    zmm6.d = zmm5.d f- _mm_cvtepi32_ps(zx.o(rdx_1)).d
else
    zmm0.d = float.s(r8_1)
    zmm4.d = zmm4.d f- zmm0.d
    zmm0.d = float.s(rdx_1)
    zmm7.d = zmm4.d f* 6f
    zmm5.d = zmm5.d f- zmm0.d
    zmm7.d = zmm7.d f- 15f
    zmm6.d = zmm5.d f* 6f
    zmm7.d = zmm7.d f* zmm4.d
    zmm6.d = zmm6.d f- 15f
    zmm7.d = zmm7.d f+ 10f
    zmm6.d = zmm6.d f* zmm5.d
    zmm7.d = zmm7.d f* zmm4.d
    zmm6.d = zmm6.d f+ 10f
    zmm4.d = zmm4.d f* zmm4.d
    zmm6.d = zmm6.d f* zmm5.d
    zmm5.d = zmm5.d f* zmm5.d
    zmm7.d = zmm7.d f* zmm4.d
    zmm6.d = zmm6.d f* zmm5.d

int32_t r10_1 = *arg1
int32_t rdx_2 = rdx_1 * 0x7a69
int32_t r9 = r8_1 * 0x653
int32_t r8_2 = (r8_1 + 1) * 0x653
int32_t rcx_4 = r10_1 ^ r9 ^ rdx_2
int64_t rcx_5 = sx.q(rcx_4 * rcx_4 * rcx_4 * 0xec4d)
uint64_t rcx_6 = zx.q((rcx_5 s>> 0xd).b) ^ zx.q(rcx_5.b)
zmm0 = *(&data_143980ca0 + (rcx_6 << 3))
uint128_t zmm1 = *((rcx_6 << 3) + 0x143980ca4)
int32_t rcx_9 = r8_2 ^ r10_1 ^ rdx_2
int32_t rdx_3 = (rdx_1 + 1) * 0x7a69
int64_t rcx_10 = sx.q(rcx_9 * rcx_9 * rcx_9 * 0xec4d)
uint64_t rcx_11 = zx.q((rcx_10 s>> 0xd).b) ^ zx.q(rcx_10.b)
zmm4.d = (*(&data_143980ca0 + (rcx_11 << 3))).d f- zmm0.d
zmm5.d = (*((rcx_11 << 3) + 0x143980ca4)).d f- zmm1.d
int32_t rcx_14 = rdx_3 ^ r10_1 ^ r9
int32_t rdx_5 = rdx_3 ^ r8_2 ^ r10_1
zmm5.d = zmm5.d f* zmm7.d
zmm4.d = zmm4.d f* zmm7.d
zmm5.d = zmm5.d f+ zmm1.d
zmm4.d = zmm4.d f+ zmm0.d
int64_t rcx_15 = sx.q(rcx_14 * rcx_14 * rcx_14 * 0xec4d)
uint64_t rcx_16 = zx.q((rcx_15 s>> 0xd).b) ^ zx.q(rcx_15.b)
zmm1 = *(&data_143980ca0 + (rcx_16 << 3))
float zmm3 = *((rcx_16 << 3) + 0x143980ca4)
int64_t rcx_17 = sx.q(rdx_5 * rdx_5 * rdx_5 * 0xec4d)
char result = (rcx_17 s>> 0xd).b ^ rcx_17.b
uint64_t result_1 = zx.q(result)
zmm0.d = (*(&data_143980ca0 + (result_1 << 3))).d f- zmm1.d
zmm0.d = zmm0.d f* zmm7.d
zmm0.d = zmm0.d f+ zmm1.d
zmm0.d = zmm0.d f- zmm4.d
zmm0.d = zmm0.d f* zmm6.d
float zmm2 = ((*((result_1 << 3) + 0x143980ca4) - zmm3) f* zmm7.d + zmm3 f- zmm5.d) f* zmm6.d
zmm0.d = zmm0.d f+ zmm4.d
zmm0.d = zmm0.d f* *arg2
zmm0.d = zmm0.d f+ *arg5
*arg5 = zmm0.d
*(arg5 + 4) = (zmm2 f+ zmm5.d) * *arg2 f+ *(arg5 + 4)
return result
