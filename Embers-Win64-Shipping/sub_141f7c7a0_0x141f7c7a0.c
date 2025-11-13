// 函数: sub_141f7c7a0
// 地址: 0x141f7c7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (not(*(arg2 + 4) f!= *(arg1 + 4)) && not(*(arg2 + 8) f!= *(arg1 + 8)))
    char r8_1 = *arg1
    
    if (r8_1 == *arg2 && arg1[1] == arg2[1] && arg1[2] == arg2[2])
        if (r8_1 != 2)
            return 1
        
        if (not(*(arg2 + 0xc) f!= *(arg1 + 0xc)) && not(*(arg2 + 0x14) f!= *(arg1 + 0x14)))
            return 1

return 0
