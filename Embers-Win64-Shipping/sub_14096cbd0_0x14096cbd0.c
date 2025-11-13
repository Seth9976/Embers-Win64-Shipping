// 函数: sub_14096cbd0
// 地址: 0x14096cbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x71c)
int64_t rsi = sx.q(arg3)

if (rax s> 0)
    *(arg1 + 0x71c) = rax - rsi.d
else if (*(arg1 + 0x6e8) != 0)
    EnterCriticalSection(arg1 + 0x6f0)
    
    if (data_143989b08 != 0)
        sub_140960430(arg1)
    
    sub_14096fd40(*(arg1 + 0x6e8), arg2, rsi.d)
    
    if (arg1 != -0x6f0)
        LeaveCriticalSection(arg1 + 0x6f0)

if (sub_141c3c790(arg1 + 0x6d0) != 0)
    sub_141c43910(arg1 + 0x6d0, arg2, rsi.d)

if (data_143ced0a8 != 0)
    memset(arg2, 0, rsi << 2)

return zx.q(rsi.d)
