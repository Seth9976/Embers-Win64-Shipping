// 函数: sub_141296630
// 地址: 0x141296630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0xa28))
void* rbx = arg1

if (arg2 s> rsi.d)
    int32_t i_1 = arg2 - rsi.d
    *(arg1 + 0xa28) = arg2
    
    if (arg2 s> *(arg1 + 0xa2c))
        sub_141295690(arg1, rsi.d)
    
    void* rax = *(rbx + 0xa20)
    
    if (rax != 0)
        rbx = rax
    
    void* rbx_1 = rbx + rsi * 0x288
    
    if (i_1 != 0)
        rax = rbx_1 + 0x184
        int32_t i
        
        do
            *rbx_1 = 0
            __builtin_memset(rax - 0x17c, 0, 0x180)
            __builtin_memset(rax + 4, 0, 0x100)
            rbx_1 += 0x288
            rax += 0x288
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (arg2 s< rsi.d)
    return sub_14128e540(arg1, arg2, rsi.d - arg2, arg3) __tailcall
