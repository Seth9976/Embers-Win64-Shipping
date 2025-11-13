// 函数: sub_142b539d0
// 地址: 0x142b539d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    if (arg1 == 0 || arg2 == 0)
        return 0
    
    if (*arg1 != *arg2 || arg1[1] != arg2[1] || arg1[2].b != arg2[2].b)
        return 0

return 1
