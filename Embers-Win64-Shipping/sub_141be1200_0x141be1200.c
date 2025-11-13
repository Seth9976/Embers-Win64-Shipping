// 函数: sub_141be1200
// 地址: 0x141be1200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x460) == 0)
    *(arg1 + 0x450) = arg2.d
    *(arg1 + 0x454) = 1
    return 

int64_t* rcx = *(arg1 + 0x458)

if (rcx != 0)
    (*(*rcx + 0x38))(rcx, 0)
    int64_t rcx_1 = *(arg1 + 0x458)
    
    if (rcx_1 != 0)
        *(arg1 + 0x458) = sub_140a84c80(rcx_1, 0, 0)
    
    *(arg1 + 0x460) = 0

*(arg1 + 0x450) = arg2.d
*(arg1 + 0x454) = 1
