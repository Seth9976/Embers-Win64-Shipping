// 函数: sub_142a85400
// 地址: 0x142a85400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*(arg1 + 0x38))

if (r9.d s>= *(arg1 + 0x3c))
    return 0

char* result = *(*(arg1 + 8) + (r9 << 3))
*(arg1 + 0x38) = (r9 + 1).d

if (arg2 != 0)
    int64_t rcx = -1
    
    do
        rcx += 1
    while (result[rcx] != 0)
    
    *arg2 = rcx.d

return result
