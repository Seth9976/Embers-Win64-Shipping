// 函数: sub_141bc4720
// 地址: 0x141bc4720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg1 + 0x120)

if (result == 0)
    return result

int64_t result_1 = result
void* rax = *(arg1 + 0x128)
void* var_10_1 = rax

if (rax != 0)
    *(rax + 8) += 1

return (*(*arg2 + 0x270))(arg2, &result_1)
