// 函数: sub_1422f00e0
// 地址: 0x1422f00e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xf8)

if (result != 0)
    void* arg_8 = arg1 + 0xf0
    int64_t (* var_18)(int64_t* arg1, int32_t* arg2) = sub_1422df1e0
    void** var_10_1 = &arg_8
    result = sub_14077b750(result, &var_18, 0)
    bool cond:0_1 = *(arg1 + 0xfc) == 0
    *(arg1 + 0xf8) = 0
    
    if (not(cond:0_1))
        return sub_1410b3aa0(arg1 + 0xf0, 0)

return result
