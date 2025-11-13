// 函数: sub_142930fe0
// 地址: 0x142930fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    char r9_1 = *arg2
    
    if (r9_1 u> 0x7f)
        return arg2
    
    char r10_1 = (*(*(arg1 + 8) + (zx.q(r9_1) << 1))).b
    
    if ((r10_1 & 0x10) == 0)
        return arg2
    
    if (r9_1 u<= 0x7f && (r10_1 & 8) != 0)
        return arg2
    
    arg2 = &arg2[1]
