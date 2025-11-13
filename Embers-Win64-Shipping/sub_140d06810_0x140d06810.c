// 函数: sub_140d06810
// 地址: 0x140d06810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140cec0e0(arg1, arg4, arg6) != 0)
    int128_t var_28
    sub_140d3a3a0(&var_28, nullptr)
    int64_t var_20_1 = 0
    int16_t* result_1 = sub_140d06020(&var_28, arg1[0xf], arg2, arg5, arg6)
    int16_t* result = result_1
    
    if (result_1 != 0)
        int64_t rax_1 = *arg1
        int128_t var_18 = var_28
        (*(rax_1 + 0x140))(arg1, &var_18, arg5, arg3)
        
        if (iswspace(*result) != 0)
            int32_t i
            
            do
                wint_t _C = result[1]
                result = &result[1]
                i = iswspace(_C)
            while (i != 0)
        
        return result

return nullptr
