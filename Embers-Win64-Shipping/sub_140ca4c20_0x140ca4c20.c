// 函数: sub_140ca4c20
// 地址: 0x140ca4c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140cea0a0(arg1, *(*arg2 + 8))

if (result != 0)
    result = 0
    int32_t i = arg4
    
    if (arg4 s< 0)
        i = 0
    
    int32_t rbp_1
    
    if (arg4 s>= 0)
        rbp_1 = arg4 + 1
    else
        rbp_1 = arg1[7].d
    
    for (; i s< rbp_1; i += 1)
        int64_t var_18 = *(*arg2 + 8)
        sub_140bb37e0(&var_18)
        (*(*arg1 + 0x88))(arg1, arg2, sx.q(*(arg1 + 0x4c)) + sx.q(*(arg1 + 0x3c) * i) + arg3, 0, 
            var_18, arg1)
        result = sub_140bafac0(&var_18)

return result
