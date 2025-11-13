// 函数: sub_1418a13c0
// 地址: 0x1418a13c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x108)
void*** result = nullptr

if (rax != 0)
    int64_t r10_1 = *arg6
    *arg6 = 0
    int32_t var_30_1 = arg6[1].d
    int32_t rcx_1 = *(arg6 + 0xc)
    arg6[1] = 0
    int64_t var_28 = *arg5
    *arg5 = 0
    int32_t var_20_1 = arg5[1].d
    int32_t var_1c_1 = *(arg5 + 0xc)
    int32_t var_2c_1 = rcx_1
    int64_t var_38 = r10_1
    arg5[1] = 0
    result = sub_14189db30(rax, arg1, arg2, arg3, arg4, &var_28, &var_38)

int64_t rcx_3 = *arg5

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *arg6

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return result
