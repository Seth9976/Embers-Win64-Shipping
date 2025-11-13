// 函数: sub_141e80840
// 地址: 0x141e80840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0_1

if (sub_140a80ea0() != 0)
    char rax = *(arg1 + 0x358)
    
    if ((rax & 0x40) != 0 || data_143f39ff0 == 1)
        cond:0_1 = (rax & 2) == 0
        goto label_141e80883
else if (*(arg1 + 0x350) != 0 || data_143f39ff0 == 1)
    cond:0_1 = (*(arg1 + 0x358) & 2) == 0
label_141e80883:
    
    if (not(cond:0_1))
        return 1
return 0
