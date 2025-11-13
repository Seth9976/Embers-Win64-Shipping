// 函数: sub_142507de0
// 地址: 0x142507de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rax_2 = *(arg2 + 0x20)
int32_t var_34
float zmm7[0x4] = var_34
float zmm6[0x4] = var_38
int64_t rcx_1
rcx_1.b = rax_2 != 0
zmm7[0] = zmm7[0] * zmm7[0]
*(arg2 + 0x20) = rcx_1 + rax_2
zmm6[0] = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] + zmm6[0]

if (not(zmm7[0] == 1f))
    if (zmm7[0] >= 9.99999994e-09f)
        float temp0_1[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
        zmm7[0] = zmm7[0] * 0.5f
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        zmm7[0] = zmm7[0] * temp0_1[0]
        temp0_1[0] = temp0_1[0] * (0.5f - zmm7[0])
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        zmm7[0] = zmm7[0] * temp0_1[0]
        temp0_1[0] = temp0_1[0] * (0.5f - zmm7[0])
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        zmm6[0] = zmm6[0] * temp0_1[0]
        zmm7[0] = zmm7[0] * temp0_1[0]
    else
        zmm6 = data_143dbb1f8
        zmm7 = data_143dbb1fc

float zmm0[0x4] = 0xbf800000

if (not(zmm6[0] < -1f))
    zmm0 = __minss_xmmss_memss(zmm6[0], 0x3f800000)

int128_t result = acosf(zmm0[0])

if (not(zmm7[0] >= 0f))
    result ^= data_142d3f780

*arg3 = result.d
return result
