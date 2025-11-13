// 函数: sub_141eda1b0
// 地址: 0x141eda1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1[0x1e].b & 2) != 0 && (*(arg1 + 0x125) & 2) != 0 && (arg1[0x71].b & 0x10) == 0)
    if ((*(*arg1 + 0x550))() != 0)
        return 1
    
    if ((*(*arg1 + 0x548))(arg1) != 0)
        return 1

return 0
