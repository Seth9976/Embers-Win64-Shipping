// 函数: sub_141e97be0
// 地址: 0x141e97be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x250)

if (i_1 != 0)
    int64_t* rbx_1 = *(arg1 + 0x248) + 0x530
    int32_t i
    
    do
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx_1 = &rbx_1[0xa8]
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x250) = 0

if (*(arg1 + 0x254) != 0)
    sub_141eabac0(arg1 + 0x248, 0)

*(arg1 + 0x260) = 0

if (*(arg1 + 0x264) != 0)
    sub_1405dadb0(arg1 + 0x258, 0)
