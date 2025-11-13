// 函数: sub_141ba85e0
// 地址: 0x141ba85e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x28)

if (result == 0)
    return result

int64_t rcx = *(arg2 + 8)
void* result_1 = result
(*arg2)(rcx, &result_1)
void* rcx_1 = *(arg1 + 0x28)
void** var_10_1 = &result_1
result_1 = arg2
int64_t (* var_18)(int64_t* arg1, int64_t* arg2, void* arg3) = sub_141b97300
return sub_141ba8640(rcx_1, &var_18)
