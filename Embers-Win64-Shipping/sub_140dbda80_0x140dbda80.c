// 函数: sub_140dbda80
// 地址: 0x140dbda80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != arg1 + 0x18)
    if (*(arg1 + 0x20) != 0)
        *(arg1 + 0x20) = 0
    
    *(arg1 + 0x18) = *arg2
    *(arg1 + 0x20) = 1

return arg1
