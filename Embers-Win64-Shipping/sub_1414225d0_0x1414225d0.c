// 函数: sub_1414225d0
// 地址: 0x1414225d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = 1f f<= *(arg3 + 0x6ec)
float zmm0[0x4] = 0x3f800000
zmm0[0] = 1f f/ *(arg3 + 0x6b0)
float zmm8[0x4] = zmm0
zmm8[0] = zmm8[0] f* *(arg3 + 0x6c4)
int128_t zmm11 = *(arg4 + 0x3d0)
float zmm13[0x4] = *(arg3 + 0x778)
int128_t zmm14 = *(arg3 + 0x788)
float zmm15[0x4] = *(arg3 + 0x798)

if (cond:0)
    zmm0 = 0x3f490fdb
else
    zmm0 = atanf(zmm0[0])

float zmm0_1[0x4] = tanf(zmm0[0])
uint64_t rax = zx.q(*arg1)
zmm0_1[0] = zmm0_1[0] f* zmm11.d
zmm13[0] = zmm13[0] f* zmm11.d
uint64_t rcx = rax * 3
zmm15[0] = zmm15[0] f* zmm11.d
int64_t zmm3
zmm3.d = zmm0_1[0].q.d f* *(arg3 + 0x770)
zmm0_1[0] = zmm0_1[0] f* *(arg3 + 0x780)
zmm0_1[0] = zmm0_1[0] f* *(arg3 + 0x790)
zmm14.d = zmm14.d f* zmm11.d
zmm0_1[0] = zmm0_1[0] / zmm8[0]
zmm13[0] = zmm13[0] f- zmm3.d
zmm13[0] = zmm13[0] f+ zmm3.d
zmm0_1[0] = zmm0_1[0] f* *(arg3 + 0x774)
zmm15[0] = zmm15[0] + zmm0_1[0]
zmm15[0] = zmm15[0] - zmm0_1[0]
zmm0_1[0] = zmm0_1[0] f* *(arg3 + 0x794)
zmm11.d = zmm14.d f+ zmm0_1[0]
zmm0_1[0] = zmm0_1[0] f* *(arg3 + 0x784)
zmm14.d = zmm14.d f- zmm0_1[0]
zmm15[0] = zmm15[0] + zmm0_1[0]
int64_t zmm2
zmm2.d = zmm11.q.d f+ zmm0_1[0]
zmm3 = zmm14.q
zmm13[0] = zmm13[0] + zmm0_1[0]
zmm13[0] = zmm13[0] + zmm0_1[0]
zmm14.d = zmm14.d f+ zmm0_1[0]
float var_d0 = zmm15[0]
zmm13[0] = zmm13[0] - zmm0_1[0]
zmm3.d = zmm3.d f- zmm0_1[0]
zmm15[0] = zmm15[0] - zmm0_1[0]
zmm15[0] = zmm15[0] - zmm0_1[0]
zmm15[0] = zmm15[0] + zmm0_1[0]
zmm13[0] = zmm13[0] - zmm0_1[0]
zmm11.d = zmm11.d f- zmm0_1[0]
float result = zmm15[0]
float var_b8 = zmm15[0]
float temp0[0x4] = _mm_unpacklo_ps(zmm13, zmm2)
*(arg2 + (rcx << 2)) = temp0.q
zmm2 = temp0[0].q
*(arg2 + (rcx << 2) + 8) = var_d0
uint64_t rax_2 = zx.q(*arg1 + 1)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm13, zmm14.q)
float var_ac = zmm15[0]
uint64_t rcx_1 = rax_2 * 3
*(arg2 + (rcx_1 << 2)) = temp0_1.q
*(arg2 + (rcx_1 << 2) + 8) = var_ac
uint64_t rax_5 = zx.q(*arg1 + 2)
float temp0_2[0x4] = _mm_unpacklo_ps(zmm13, zmm3)
uint64_t rcx_2 = rax_5 * 3
*(arg2 + (rcx_2 << 2)) = temp0_2.q
*(arg2 + (rcx_2 << 2) + 8) = var_b8
uint64_t rcx_3 = zx.q(*arg1 + 3) * 3
*(arg2 + (rcx_3 << 2)) = zmm2
*(arg2 + (rcx_3 << 2) + 8) = var_d0
uint64_t rcx_4 = zx.q(*arg1 + 4) * 3
*(arg2 + (rcx_4 << 2)) = temp0_2.q
*(arg2 + (rcx_4 << 2) + 8) = var_b8
uint64_t rcx_5 = zx.q(*arg1 + 5) * 3
*(arg2 + (rcx_5 << 2)) = (_mm_unpacklo_ps(zmm13, zmm11.q)).q
*(arg2 + (rcx_5 << 2) + 8) = result
*arg1 += 6
return result
