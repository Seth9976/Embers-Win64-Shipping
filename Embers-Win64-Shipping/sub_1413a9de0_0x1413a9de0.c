// 函数: sub_1413a9de0
// 地址: 0x1413a9de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg1 + 0x20))
void* const rdi = arg1

if (arg2 s> rbx.d)
    int32_t rsi_2 = arg2 - rbx.d
    *(arg1 + 0x20) = arg2
    
    if (arg2 s> *(arg1 + 0x24))
        sub_1413a87c0(arg1, rbx.d)
    
    void* const rax = *(rdi + 0x18)
    
    if (rax != 0)
        rdi = rax
    
    if (rsi_2 != 0)
        __builtin_memset(rdi + (rbx << 3), 0, zx.q(rsi_2) << 3)
else if (arg2 s< rbx.d)
    return sub_1413a3550(arg1, arg2, rbx.d - arg2, arg3) __tailcall
