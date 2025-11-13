// 函数: sub_1428576f0
// 地址: 0x1428576f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg2 + 0x150)

if (r9 == 0)
    return 

int64_t rax = *(arg2 + 0x148)

if (rax == 0)
    return 

if (r9 == arg1 + 0x40)
    if (rax != arg1 + 0x38)
        *(arg1 + 0x40) = rax
        *(*(arg2 + 0x148) + 0x150) = arg1 + 0x40
        *(arg2 + 0x150) = 0
        *(arg2 + 0x148) = 0
        return 
    
    *(arg1 + 0x38) = 0
    *(arg1 + 0x40) = 0
    *(arg2 + 0x150) = 0
    *(arg2 + 0x148) = 0
    return 

if (rax == arg1 + 0x38)
    *(arg1 + 0x38) = r9
    *(*(arg2 + 0x150) + 0x148) = arg1 + 0x38
    *(arg2 + 0x150) = 0
    *(arg2 + 0x148) = 0
    return 

*(r9 + 0x148) = rax
*(*(arg2 + 0x148) + 0x150) = *(arg2 + 0x150)
*(arg2 + 0x150) = 0
*(arg2 + 0x148) = 0
