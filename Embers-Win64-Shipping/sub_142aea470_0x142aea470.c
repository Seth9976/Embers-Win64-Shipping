// 函数: sub_142aea470
// 地址: 0x142aea470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0 && *arg1 == 0x345ad82c && (arg1[1].b & 4) != 0)
    int64_t rdx_1 = *(*(arg1 + 0x38) + 0x50)
    
    if (rdx_1 != 0)
        rdx_1()
    
    arg1[1] &= 0xfffffffb
    
    if ((arg1[1].b & 2) != 0)
        sub_142a7dcd0(*(arg1 + 0x40))
        arg1[1] &= 0xfffffffd
        *(arg1 + 0x40) = 0
        arg1[6] = 0
    
    bool cond:0_1 = (arg1[1].b & 1) == 0
    *(arg1 + 0x38) = 0
    
    if (not(cond:0_1))
        *arg1 = 0
        sub_142a7dcd0(arg1)
        return nullptr

return arg1
