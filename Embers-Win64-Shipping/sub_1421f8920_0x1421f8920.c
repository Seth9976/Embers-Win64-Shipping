// 函数: sub_1421f8920
// 地址: 0x1421f8920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 0xffffffff

int32_t i = 0

if (*(arg1 + 0x38) s> 0)
    int64_t r9_1 = 0
    
    do
        uint32_t rcx = zx.d(*(*(arg1 + 0x30) + r9_1))
        
        if (rcx == 1)
            *arg3 |= 1
        else if (rcx == 2)
            *arg3 |= 2
        else if (rcx == 3)
            *arg3 |= 4
        else if (rcx == 4)
            *arg3 |= 8
        
        i += 1
        r9_1 += 0x28
    while (i s< *(arg1 + 0x38))

return 0
