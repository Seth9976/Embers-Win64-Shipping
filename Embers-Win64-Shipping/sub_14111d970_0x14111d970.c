// 函数: sub_14111d970
// 地址: 0x14111d970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = *(arg1 + 0xc)
float zmm2[0x4] = *arg1
zmm2[0] = zmm2[0] - zmm4[0]
float zmm6[0x4] = arg4
int128_t zmm7
zmm7.d = 1f / zmm6[0]
char var_80 = 0
zmm2[0] = zmm2[0] - arg2[0]
zmm2[0] = zmm2[0] f* zmm7.d
int32_t rcx = int.d(zmm2[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm2[0]))
    zmm2 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))

arg4 = *(arg1 + 4)
arg4[0] = arg4[0] - zmm4[0]
zmm2[0] = zmm2[0] * zmm6[0]
float temp0_5[0x4] = __maxss_xmmss_memss(zmm2[0], *arg3)
arg4[0] = arg4[0] - arg2[0]
float var_98 = temp0_5[0]
arg4[0] = arg4[0] f* zmm7.d
int32_t rcx_2 = int.d(arg4[0])

if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== arg4[0]))
    arg4 = _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(arg4, arg4[0].q)) & 1)))

float zmm5[0x4] = *(arg1 + 8)
zmm5[0] = zmm5[0] - zmm4[0]
arg4[0] = arg4[0] * zmm6[0]
float temp0_10[0x4] = __maxss_xmmss_memss(arg4[0], (*arg3)[1])
zmm5[0] = zmm5[0] - arg2[0]
float var_94 = temp0_10[0]
zmm5[0] = zmm5[0] f* zmm7.d
int32_t rcx_4 = int.d(zmm5[0])

if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== zmm5[0]))
    zmm5 = _mm_cvtepi32_ps(zx.o(rcx_4 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm5, zmm5[0].q)) & 1)))

zmm4[0] = zmm4[0] + zmm4[0]
zmm5[0] = zmm5[0] * zmm6[0]
arg2[0] = arg2[0] + arg2[0]
float temp0_15[0x4] = __maxss_xmmss_memss(zmm5[0], (*arg3)[2])
zmm4[0] = zmm4[0] + arg2[0]
float var_90 = temp0_15[0]
zmm4[0] = zmm4[0] f* zmm7.d
int32_t rcx_6 = int.d(zmm4[0])

if (rcx_6 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_6)).d f== zmm4[0]))
    zmm4 =
        _mm_cvtepi32_ps(zx.o(rcx_6 + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm4, zmm4[0].q)) & 1) ^ 1)))

uint128_t zmm0 = (*arg3)[3]
zmm4[0] = zmm4[0] * zmm6[0]
temp0_5[0] = temp0_5[0] + zmm4[0]
temp0_10[0] = temp0_10[0] + zmm4[0]
temp0_15[0] = temp0_15[0] + zmm4[0]
float var_8c = temp0_5[0]
float var_88 = temp0_10[0]
float var_84 = temp0_15[0]

if (not(temp0_5[0] f<= zmm0.d))
    int32_t var_8c_1 = zmm0.d

int128_t zmm9 = arg3[1][0]
bool cond:1 = temp0_10[0] f<= zmm9.d
float temp0_20[0x4] = _mm_min_ss(zmm0[0], temp0_5[0])
uint128_t zmm10 = _mm_min_ss(zmm0.d, temp0_5[0])
zmm4 = _mm_min_ss(zmm0[0], temp0_5[0])
zmm0 = _mm_min_ss(zmm0.d, temp0_5[0])

if (not(cond:1))
    var_88 = zmm9.d
    zmm4 = zmm10
    zmm0 = temp0_20

float zmm8[0x4] = (*arg3)[5]
bool cond:2 = temp0_15[0] <= zmm8[0]
float temp0_24[0x4] = _mm_min_ss(temp0_10[0], zmm9.d)
zmm6 = _mm_min_ss(temp0_10[0], zmm9.d)

if (not(cond:2))
    float var_84_1 = zmm8[0]
    zmm4 = zmm0
    zmm6 = temp0_24

float temp0_26[0x4] = _mm_min_ss(zmm8[0], temp0_15[0])
zmm6[0] = zmm6[0] - temp0_10[0]
zmm4[0] = zmm4[0] - temp0_5[0]
temp0_26[0] = temp0_26[0] - temp0_15[0]
zmm6[0] = zmm6[0] f* zmm7.d
zmm4[0] = zmm4[0] f* zmm7.d
temp0_26[0] = temp0_26[0] f* zmm7.d
zmm6[0] = zmm6[0] + 0.5f
zmm4[0] = zmm4[0] + 0.5f
temp0_26[0] = temp0_26[0] + 0.5f
int32_t rdx_1 = int.d(zmm6[0])
uint64_t result = zx.q(int.d(zmm4[0]))
int32_t rcx_8 = int.d(temp0_26[0])
int32_t var_7c = result.d
int32_t var_74 = rcx_8

if (result.d s> 0 && rdx_1 s> 0 && rcx_8 s> 0)
    uint64_t result_1 = arg5
    int64_t rdi_1 = sx.q(*(result_1 + 0x90))
    int32_t rax_10 = (rdi_1 + 1).d
    *(result_1 + 0x90) = rax_10
    
    if (rax_10 s> *(result_1 + 0x94))
        sub_14113b760(result_1, rdi_1.d)
    
    result = *(result_1 + 0x88)
    
    if (result != 0)
        result_1 = result
    
    int64_t rcx_10 = rdi_1 * 0x2c
    *(result_1 + rcx_10) = var_98.o
    *(result_1 + rcx_10 + 0x10) = var_88.o
    *(result_1 + rcx_10 + 0x20) = rdx_1.q
    *(result_1 + rcx_10 + 0x28) = 3

return result
