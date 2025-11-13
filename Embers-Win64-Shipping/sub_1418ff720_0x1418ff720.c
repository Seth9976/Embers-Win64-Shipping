// 函数: sub_1418ff720
// 地址: 0x1418ff720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax_1

if (arg3 != 0)
    int32_t rsi_1 = 0x20
    
    if (*(arg3 + 0x18) == 4)
        rsi_1 = 0x1c
    
    void*** rax_2 = j_sub_140a82f30(0xa0)
    
    if (rax_2 == 0)
        rax_1 = nullptr
    else
        rax_1 = sub_1418f1fd0(rax_2, *(arg1 + 0x58), arg3, arg3 + 0x28, *(arg3 + 0x1c), rsi_1, 0)
else
    void*** rax = j_sub_140a82f30(0xa0)
    
    if (rax == 0)
        rax_1 = nullptr
    else
        rax_1 = sub_1418f1fd0(rax, *(arg1 + 0x58), nullptr, 0, 0, 0x20, 0)

*arg2 = rax_1

if (rax_1 != 0)
    rax_1[1].d += 1

return arg2
