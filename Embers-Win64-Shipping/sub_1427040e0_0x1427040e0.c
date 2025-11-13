// 函数: sub_1427040e0
// 地址: 0x1427040e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x1d8))
int32_t rcx = *(arg1 + 0x1c4)

if (result.d != rcx || rcx s<= 0)
    result.b = 0
    return result

int32_t rbx = 0
int32_t i = 0
int128_t zmm6 = data_143dbb1f8
int128_t zmm7 = data_143dbb1fc
int128_t zmm8 = data_143dbb200
int128_t zmm9 = *(arg1 + 0x1bc)
zmm9.d = zmm9.d f* zmm9.d
int64_t var_58[0x2]

if (result.d s> 0)
    do
        int64_t* rax_1
        rax_1, zmm6, zmm7, zmm8 = sub_141e912d0(sx.q(i) * 0x38 + *(arg1 + 0x1d0), &var_58)
        i += 1
        zmm6.d = zmm6.d f+ *rax_1
        zmm7.d = zmm7.d f+ *(rax_1 + 4)
        zmm8.d = zmm8.d f+ rax_1[1].d
        result = zx.q(*(arg1 + 0x1d8))
    while (i s< result.d)

float zmm1 = 1f f/ _mm_cvtepi32_ps(zx.o(result.d)).d
zmm6.d = zmm6.d f* zmm1
zmm7.d = zmm7.d f* zmm1
zmm8.d = zmm8.d f* zmm1

if (result.d s<= 0)
label_142704205:
    result.b = 1
else
    while (true)
        float zmm6_1
        float zmm7_1
        float zmm8_1
        int32_t zmm9_1
        result, zmm6_1, zmm7_1, zmm8_1, zmm9_1 =
            sub_141e912d0(sx.q(rbx) * 0x38 + *(arg1 + 0x1d0), &var_58)
        float zmm2_1 = zmm7_1 f- *(result + 4)
        float zmm1_1 = zmm6_1 f- *result
        float zmm0_1 = zmm8_1 f- *(result + 8)
        
        if (zmm2_1 * zmm2_1 + zmm1_1 * zmm1_1 + zmm0_1 * zmm0_1 f> zmm9_1)
            result.b = 0
            break
        
        rbx += 1
        
        if (rbx s>= *(arg1 + 0x1d8))
            goto label_142704205

return result
