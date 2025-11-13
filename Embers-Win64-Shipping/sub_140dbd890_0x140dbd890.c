// 函数: sub_140dbd890
// 地址: 0x140dbd890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == arg1 + 0x38)
    goto label_140dbd8b1

if (*(arg1 + 0x3c) != 0)
    *(arg1 + 0x3c) = 0

if (arg2[1].b == 0)
    return 

*(arg1 + 0x38) = *arg2
*(arg1 + 0x3c) = 1
label_140dbd8b1:

if (arg2[1].b != 0)
    arg2[1].b = 0
