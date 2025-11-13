// 函数: sub_140f68510
// 地址: 0x140f68510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != arg1)
    if (arg1[1].b != 0)
        arg1[1].b = 0
    
    if (arg2[1].b != 0)
        *arg1 = *arg2
        arg1[1].b = 1

return arg1
