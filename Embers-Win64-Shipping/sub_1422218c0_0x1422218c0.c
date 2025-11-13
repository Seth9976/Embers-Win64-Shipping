// 函数: sub_1422218c0
// 地址: 0x1422218c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t r8 = *(arg1 + 0xc)
uint8_t result = r8 u>> 6 & 1

if (result != arg2)
    void* arg_8
    int64_t* var_10_1 = &arg_8
    arg_8 = arg1
    *(arg1 + 0xc) = (r8 & 0xbf) | arg2 << 6
    int64_t (* var_18)(int64_t* arg1, int64_t* arg2) = sub_1422122e0
    result = sub_14226a4e0(arg1 + 0xf0, &var_18)
    
    if ((*(arg1 + 0xc) & 0x40) != 0)
        char arg_10 = 0
        char* var_10_2 = &arg_10
        var_18 = sub_1422120b0
        return sub_14226a4e0(arg1 + 0xf0, &var_18)

return result
