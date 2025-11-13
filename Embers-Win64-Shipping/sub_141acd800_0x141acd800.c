// 函数: sub_141acd800
// 地址: 0x141acd800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0xc8))
void* rsi = arg1

if (arg2 s> rdi.d)
    int32_t i_1 = arg2 - rdi.d
    *(arg1 + 0xc8) = arg2
    
    if (arg2 s> *(arg1 + 0xcc))
        sub_141a63ee0(arg1, rdi.d)
    
    void* rax_1 = *(rsi + 0xc0)
    
    if (rax_1 != 0)
        rsi = rax_1
    
    void* rax = rsi + rdi * 0x18
    
    if (i_1 != 0)
        int32_t i
        
        do
            __builtin_memset(rax, 0, 0x18)
            rax += 0x18
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (arg2 s< rdi.d)
    return sub_141acb150(arg1, arg2, rdi.d - arg2, arg3) __tailcall
