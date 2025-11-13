// 函数: sub_141f539a0
// 地址: 0x141f539a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = arg2[1].d
int32_t rdx_1 = arg1[0x82].d + result_1

if (rdx_1 s> *(arg1 + 0x414))
    sub_141846c50(&arg1[0x81], rdx_1)
    result_1 = arg2[1].d

int64_t* i = *arg2
int64_t* result = sx.q(result_1)

for (void* rsi_1 = result * 0x44 + i; i != rsi_1; i += 0x44)
    result = sub_141f536b0(arg1, i, 0)

if (arg3 == 0)
    return result

float zmm1[0x4] = *(arg1 + 0x1e0)
int32_t r9_1 = *(arg1 + 0x4d4)
char r8 = *(arg1 + 0x4dc)
char rdx_3 = *(arg1 + 0x4e1)
float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
char rax = *(arg1 + 0x4e2)
float var_14_1 = temp0_1[0]
float zmm0[0x4] = *(arg1 + 0x4e4)
float var_18 = zmm1[0]
float var_10_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
return sub_141f771f0(&arg1[0x81], rdx_3, r8, r9_1, rax, zmm0[0], &var_18)
