// 函数: sub_14268e310
// 地址: 0x14268e310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = arg1[0x26]
float result_1 = data_143dbb200
int64_t zmm3 = data_143dbb1f8.q
int64_t var_28
float result
float zmm1[0x4]

if (rdx == 0)
    var_28 = zmm3
    result = result_1
else
    zmm1 = *(rdx + 0x1d0)
    var_28.d = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    result = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_28:4.d = temp0_1[0]

float zmm0[0x4] = zx.o(var_28)

if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] > 9.99999975e-05f)
        && not(_mm_and_ps(zmm0.q:4.d, 0x7fffffff)[0] > 9.99999975e-05f)
        && _mm_and_ps(result, 0x7fffffff)[0] <= 9.99999975e-05f)
    return result

int64_t var_28_1
float result_2

if (rdx == 0)
    var_28_1 = zmm3
    result_2 = result_1
else
    zmm1 = *(rdx + 0x1d0)
    var_28_1.d = zmm1[0]
    float temp0_6[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    result_2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_28_1:4.d = temp0_6[0]

float result_3 = result_2
int64_t rax_2 = *arg1
int64_t var_1c = var_28_1
return (*(rax_2 + 0x3b0))(arg1, &var_1c, 0)
