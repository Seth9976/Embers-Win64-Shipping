// 函数: sub_14236c400
// 地址: 0x14236c400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = arg2[1]
float zmm5 = *arg2
float result_1 = arg2[2]
float temp0 = _mm_sqrt_ss(0, zmm5 * zmm5 + zmm4 * zmm4 + result_1 * result_1)

if (temp0 == 0f)
    *arg2 = 0
    arg2[1] = 0
    arg2[2] = 0
    return (zx.o(0)).d

float result = 1f / temp0
result_1 = result
int32_t zmm3 = result f* arg2[2]
result = result * zmm5
*arg2 = result
arg2[1] = result_1 * zmm4
arg2[2] = zmm3
return result
