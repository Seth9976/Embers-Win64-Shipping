// 函数: sub_142c840b0
// 地址: 0x142c840b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg1
int64_t rsi = sx.q(arg2)
int64_t rbx = *(result + 0x250)
int32_t rcx = *(rbx + (rsi << 2) + 8)

if (rcx == 0)
    if (*(rbx + (rsi << 2) + 0x808) != 1)
        if (*(rbx + (rsi << 2) + 0x1808) != 1)
            return sub_142c84400(arg1, 0xfc, rsi.d, arg3)
        
        *(rbx + (rsi << 2) + 8) = 1
        return sub_142c84610(arg1, rsi.d, sub_142c84400(arg1, 0xfb, rsi.d, arg3))
    
    *(rbx + (rsi << 2) + 8) = 1
    result, arg3 = sub_142c84400(arg1, 0xfb, rsi.d, arg3)
label_142c8418b:
    
    if (*(rbx + (rsi << 2) + 0x1808) == 1)
        return sub_142c84610(arg1, rsi.d, arg3)
else if (rcx == 2)
    int32_t rcx_3 = *(rbx + (rsi << 2) + 0x408)
    
    if (rcx_3 == 0)
        *(rbx + (rsi << 2) + 8) = 1
        goto label_142c8418b
    
    if (rcx_3 == 1)
        *(rbx + (rsi << 2) + 8) = 3
        *(rbx + (rsi << 2) + 0x1008) = 0
        return sub_142c84400(arg1, 0xfc, rsi.d, arg3)
else if (rcx == 3)
    int32_t rcx_2 = *(rbx + (rsi << 2) + 0x408)
    
    if (rcx_2 == 0)
        *(rbx + (rsi << 2) + 8) = 0
    else if (rcx_2 == 1)
        *(rbx + (rsi << 2) + 8) = rcx_2
        *(rbx + (rsi << 2) + 0x408) = 0

return result
