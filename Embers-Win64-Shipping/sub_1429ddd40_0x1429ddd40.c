// 函数: sub_1429ddd40
// 地址: 0x1429ddd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_2 = *(arg1 + 0x2220)

if (rdx_2 != 0)
    if (rdx_2 == 1)
        *(arg1 + 0xc00) = 1
        *(arg1 + 0xbc4) = 0
        *(arg1 + 0xbc8) = 1
        return 
    
    if (rdx_2 == 2)
        *(arg1 + 0xbc4) = 1
        *(arg1 + 0xc00) = 0
        *(arg1 + 0xbc8) = 1
        return 
    
    if (rdx_2 == 3)
        *(arg1 + 0xbc4) = rdx_2 - 2
        *(arg1 + 0xc00) = rdx_2 - 2
        *(arg1 + 0xbc8) = rdx_2 - 2
        *(arg1 + 0xbcc) = rdx_2 - 2
        return 

*(arg1 + 0xbcc) = 0
*(arg1 + 0xbc4) = 0
*(arg1 + 0xc00) = 0
