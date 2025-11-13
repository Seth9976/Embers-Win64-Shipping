// 函数: sub_14083cd00
// 地址: 0x14083cd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x108))
void* rbx = arg1

if (arg2 s> rsi.d)
    int32_t i_1 = arg2 - rsi.d
    *(arg1 + 0x108) = arg2
    
    if (arg2 s> *(arg1 + 0x10c))
        sub_14083a870(arg1, rsi.d)
    
    void* rax_1 = *(rbx + 0x100)
    
    if (rax_1 != 0)
        rbx = rax_1
    
    void* rbx_1 = rbx + (rsi << 4)
    
    if (i_1 != 0)
        int32_t i
        
        do
            *rbx_1 = -1
            *(rbx_1 + 8) = 0
            *(rbx_1 + 0xc) = 1
            rbx_1 += 0x10
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (arg2 s< rsi.d)
    return sub_1408384e0(arg1, arg2, rsi.d - arg2, arg3) __tailcall
