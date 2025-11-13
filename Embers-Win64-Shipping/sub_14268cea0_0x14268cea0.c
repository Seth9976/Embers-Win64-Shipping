// 函数: sub_14268cea0
// 地址: 0x14268cea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = *(arg1 + 0x4a8)

if (result != 0 && (*(arg1 + 0x474) & 0x80) != 0)
    int32_t arg_8 = arg2
    int32_t r8
    int32_t arg_c = r8
    void* rsi_1 = &result[4]
    result = sub_142681570(rsi_1, &arg_8, arg_8.q)
    
    if (*result == 0xffffffff)
        int32_t arg_20 = arg2
        int64_t var_28 = 0
        int64_t var_20_1 = 0
        int32_t arg_24 = r8
        int32_t* var_18 = &arg_20
        int64_t* var_10_1 = &var_28
        sub_14266ebd0(rsi_1, &arg_8, &var_18, nullptr)
        return sub_142671860(&var_28)

return result
