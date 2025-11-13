// 函数: sub_141bdf080
// 地址: 0x141bdf080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x598) == 0)
    *(arg1 + 0x588) = arg2
    *(arg1 + 0x589) = 1
    return 

int64_t* rcx = *(arg1 + 0x590)

if (rcx != 0)
    (*(*rcx + 0x38))(rcx, 0)
    int64_t rcx_1 = *(arg1 + 0x590)
    
    if (rcx_1 != 0)
        *(arg1 + 0x590) = sub_140a84c80(rcx_1, 0, 0)
    
    *(arg1 + 0x598) = 0

*(arg1 + 0x588) = arg2
*(arg1 + 0x589) = 1
