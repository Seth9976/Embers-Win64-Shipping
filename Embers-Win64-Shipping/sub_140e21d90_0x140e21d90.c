// 函数: sub_140e21d90
// 地址: 0x140e21d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(*(arg1 + 0x328))
int64_t rsi = sx.q(arg2)
int32_t result

if (r8.d u> 0x64)
    result = 4
    
    if (*(arg1 + 0x32c) != 0 || r8.d u> 4)
        result = ((r8 * 3) u>> 3).d + 0x10 + r8.d
    
    if (r8.d s> result)
        result = 0x7fffffff
else
    result = 0x64

*(arg1 + 0x32c) = result
int64_t rcx = *(arg1 + 0x320)

if (result u<= 0x64)
    if (rcx == 0)
        return result
    
    return memmove(arg1, rcx, (rsi << 3).d) __tailcall

if (rcx != 0)
    return sub_140839170(arg1 + 0x320, rsi.d, result, 8)

sub_140839170(arg1 + 0x320, 0, result, 8)
return memmove(*(arg1 + 0x320), arg1, (rsi << 3).d) __tailcall
