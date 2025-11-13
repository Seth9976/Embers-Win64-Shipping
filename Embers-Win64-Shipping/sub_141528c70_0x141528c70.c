// 函数: sub_141528c70
// 地址: 0x141528c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
double arg_18 = arg3
int32_t var_18
double arg_28
int32_t result = sub_141528d20(arg1, &var_18, &arg_18, &arg_20, &arg_28)

if (result.b != 0)
    int64_t r10_1 = sx.q(var_18)
    double zmm0_1 = arg_18
    int64_t zmm1_1 = arg_20
    *(*(*(arg1 + 0xa8) + (r10_1 << 3)) + (sx.q(*(*(arg1 + 0xb8) + (r10_1 << 2))) << 2)) = arg2
    int64_t r9_1 = *(arg1 + 0xb8)
    uint64_t r8_1 = zx.q(*(r9_1 + (r10_1 << 2)))
    double* rdx_3 = *(*(arg1 + 0xb0) + (r10_1 << 3)) + (sx.q((r8_1 * 3).d) << 3)
    result = (r8_1 + 1).d
    *(r9_1 + (r10_1 << 2)) = result
    *rdx_3 = zmm0_1
    zmm0_1 = arg_28
    rdx_3[1] = zmm1_1
    rdx_3[2] = zmm0_1

return result
