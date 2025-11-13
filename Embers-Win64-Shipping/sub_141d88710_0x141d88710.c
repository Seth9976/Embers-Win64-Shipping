// 函数: sub_141d88710
// 地址: 0x141d88710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_2
bool z_1

if (*(arg1 + 0x30) s> 0 && *(arg1 + 0xc8) s> 0 && *(arg1 + 0x38) != 0)
    if (0 == *(arg1 + 0xa0))
        *(arg1 + 0xa0) = 0
        z_1 = true
    else
        *(arg1 + 0xa0)
        z_1 = false
    
    rax_2 = data_1439ae51c

if (*(arg1 + 0x30) s<= 0 || *(arg1 + 0xc8) s<= 0 || *(arg1 + 0x38) == 0 || not(z_1))
    rax_2 = data_1439ae51d

*arg2 = rax_2
return arg2
