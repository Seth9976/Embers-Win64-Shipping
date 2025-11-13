// 函数: sub_141bc4240
// 地址: 0x141bc4240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg1 + 0x418)

if (result == 0)
    return result

int64_t result_1 = result
void* rax = *(arg1 + 0x420)
void* var_10_1 = rax

if (rax != 0)
    *(rax + 8) += 1

return sub_141b94330(arg2, &result_1)
