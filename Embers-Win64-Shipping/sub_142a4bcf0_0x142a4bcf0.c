// 函数: sub_142a4bcf0
// 地址: 0x142a4bcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    char rdx_1 = *arg1
    
    if (rdx_1 != 0)
        if (rdx_1 == 0x5c || rdx_1 == 0x2f)
            return 1
        
        if ((rdx_1 - 0x41 u<= 0x19 || rdx_1 - 0x61 u<= 0x19) && arg1[1] == 0x3a)
            return 1

return 0
