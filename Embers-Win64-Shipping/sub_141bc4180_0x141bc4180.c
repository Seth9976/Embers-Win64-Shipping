// 函数: sub_141bc4180
// 地址: 0x141bc4180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = *(arg1 + 0x120)
*(arg2 + 0x48) = *(arg1 + 0x130)
*(arg2 + 0x49) = *(arg1 + 0x131)
int64_t result = *(arg1 + 0x1c8)

if (result == 0)
    return result

int64_t result_1 = result
void* rax_2 = *(arg1 + 0x1d0)
void* var_10_1 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

return sub_141b93df0(arg2, &result_1)
