// 函数: sub_14085b630
// 地址: 0x14085b630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x88))
void* rbx = arg1

if (arg2 s> rsi.d)
    int32_t i_1 = arg2 - rsi.d
    *(arg1 + 0x88) = arg2
    
    if (arg2 s> *(arg1 + 0x8c))
        sub_14085a3e0(arg1, rsi.d)
    
    void* rax_1 = *(rbx + 0x80)
    
    if (rax_1 != 0)
        rbx = rax_1
    
    void* rbx_1 = rbx + (rsi << 5)
    
    if (i_1 != 0)
        int32_t i
        
        do
            __builtin_memset(rbx_1, 0, 0x18)
            *(rbx_1 + 0x18) = 0xffffffff
            *(rbx_1 + 0x1c) = 0
            rbx_1 += 0x20
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (arg2 s< rsi.d)
    return sub_140858920(arg1, arg2, rsi.d - arg2, arg3) __tailcall
