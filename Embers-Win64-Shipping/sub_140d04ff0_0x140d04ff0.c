// 函数: sub_140d04ff0
// 地址: 0x140d04ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *arg2
int32_t* result = nullptr
int64_t var_28 = rdx
int32_t var_20 = 0
int64_t var_1c = 0
int64_t arg_8 = 0

if (rdx != 0)
    int64_t* rbx_1 = *(*(arg1 + 0x18) + 8)
    result = sub_1405e21c0(rbx_1, &arg_8, &var_28)
    
    if (*result == 0xffffffff)
        return sub_140cec5e0(rbx_1, &arg_8, &var_28, nullptr)

return result
