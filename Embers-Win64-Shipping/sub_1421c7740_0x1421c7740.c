// 函数: sub_1421c7740
// 地址: 0x1421c7740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_1421b7cc0(arg2, arg1)
int64_t rbx = rax

if (rax == 0)
    rbx = arg2[3] + 0x610

void* result = (*(*arg2 + 0x150))(arg2)

if (result.d != 0)
    int64_t var_20_1 = rbx
    float var_18
    sub_141fe56b0(arg1 + 0x30, &var_18, *(arg2 + 0x12c), arg3, (arg2[3]).d, nullptr)
    result = sx.q(result.d) + arg4
    float var_14
    float zmm3_1 = var_14 * 360f
    float zmm2_1 = var_18 * 360f
    float var_10
    float zmm4_1 = var_10 * 360f
    float zmm0_1 = zmm2_1 f+ *(result + 0x3c)
    *(result + 0x40) = zmm3_1 f+ *(result + 0x40)
    *(result + 0x3c) = zmm0_1
    *(result + 0x44) = zmm4_1 f+ *(result + 0x44)
    zmm3_1 = zmm3_1 f+ *(result + 0x34)
    zmm4_1 = zmm4_1 f+ *(result + 0x38)
    *(result + 0x30) = zmm2_1 f+ *(result + 0x30)
    *(result + 0x34) = zmm3_1
    *(result + 0x38) = zmm4_1

return result
