// 函数: sub_142464c80
// 地址: 0x142464c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg2

if (arg1 != arg2)
    int32_t r8_1 = *(arg1 + 0x1c)
    void* rbp_1 = *(arg2 + 0x10)
    int64_t rsi_1 = sx.q(*(arg2 + 0x18))
    *(arg1 + 0x18) = rsi_1.d
    
    if (rsi_1.d != 0 || r8_1 != 0)
        sub_141e30770(arg1, rsi_1.d, r8_1)
        void* rax_1 = *(arg1 + 0x10)
        void* rcx = arg1
        
        if (rbp_1 != 0)
            rdi = rbp_1
        
        if (rax_1 != 0)
            rcx = rax_1
        
        memcpy(rcx, rdi, (rsi_1 << 2).d)
    else
        *(arg1 + 0x1c) = 3

return arg1
