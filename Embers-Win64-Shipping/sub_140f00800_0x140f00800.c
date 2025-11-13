// 函数: sub_140f00800
// 地址: 0x140f00800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140a4aa30()

if (rax == 0)
    if (*(arg1 + 0x3d8) != rax && *(arg1 + 0x472) == 2)
        *arg2 = data_1439ae51c
        return arg2
    
    if (*(arg1 + 0x3f8) != 0 && *(arg1 + 0x472) == 3)
        *arg2 = data_1439ae51c
        return arg2

*arg2 = data_1439ae51d
return arg2
