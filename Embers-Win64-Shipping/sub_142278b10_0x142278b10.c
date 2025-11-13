// 函数: sub_142278b10
// 地址: 0x142278b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result
int64_t arg_10

if (arg2 == 0)
    sub_140d3a3a0(&arg_10, arg2)
    *(arg1 + 8) = arg_10
    sub_140d3a3a0(&arg_10, nullptr)
    *arg1 = arg_10
    result = 0
    arg_10 = 0
    *(arg1 + 0x14) = 0
    arg1[4] = 0xffffffff
else
    arg1[4] = *arg2
    int64_t rax_3
    
    if (sub_140d3e110(&arg2[0x40]) == 0)
        rax_3 = 0
        arg_10 = 0
    else
        rax_3 = *(sub_140d3c6e0(arg2 + 0x100) + 0x80)
    
    *(arg1 + 0x14) = rax_3
    result = sub_140d3e110(&arg2[0x3e])
    
    if (result != 0)
        *(arg1 + 8) = *(arg2 + 0xf8)
        return sub_140d3a3a0(arg1, *(sub_140d3c6e0(arg1 + 8) + 0xa0)) __tailcall
return result
