// 函数: sub_142c841e0
// 地址: 0x142c841e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg1
int64_t r10 = sx.q(arg2)
int64_t r9 = *(result + 0x250)
int32_t r8 = *(r9 + (r10 << 2) + 8)

if (r8 == 1)
    *(r9 + (r10 << 2) + 8) = 0
    return sub_142c84400(arg1, 0xfc, arg2, arg3) __tailcall

if (r8 == 2)
    int32_t rcx_3 = *(r9 + (r10 << 2) + 0x408)
    
    if (rcx_3 == 0)
        *(r9 + (r10 << 2) + 8) = 0
        return 0
    
    if (rcx_3 == 1)
        *(r9 + (r10 << 2) + 8) = 0
        *(r9 + (r10 << 2) + 0x408) = 0
        return 0
else if (r8 == 3)
    int32_t rcx = *(r9 + (r10 << 2) + 0x408)
    
    if (rcx == 0)
        *(r9 + (r10 << 2) + 8) = 0
        return 0
    
    if (rcx == r8 - 2)
        *(r9 + (r10 << 2) + 8) = 2
        *(r9 + (r10 << 2) + 0x408) = 0
        return sub_142c84400(arg1, 0xfb, arg2, arg3) __tailcall

return result
