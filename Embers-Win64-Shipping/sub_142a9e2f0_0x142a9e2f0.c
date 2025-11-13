// 函数: sub_142a9e2f0
// 地址: 0x142a9e2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x40) == 0)
    return sub_142a9e060(arg1, arg2, arg3) __tailcall

int32_t r9 = *(arg1 + 0x48)
int32_t rbx = 0
int32_t rsi = 0

if (r9 s> 0)
    int64_t rbp_1 = 0
    
    do
        void* rcx = *(arg1 + 0x40)
        rsi += 1
        uint32_t rdi_1 = zx.d(*(rcx + rbp_1))
        rbp_1 += 2
        
        if ((rdi_1 & 0xfffffc00) == 0xd800 && rsi != r9)
            uint32_t rdx = zx.d(*(rcx + rbp_1))
            
            if ((rdx & 0xfffffc00) == 0xdc00)
                rsi += 1
                rbp_1 += 2
                rdi_1 = ((rdi_1 - 0xd7f7) << 0xa) + rdx
        
        char rax_5
        
        if (arg3 != 0)
            rax_5 = sub_142b13c60(rdi_1)
        
        if (arg3 == 0 || rax_5 == 0)
            sub_142a48580(arg2, rdi_1)
            int32_t rax_7 = rbx + 1
            rbx = 0
            
            if (rdi_1 == 0x5c)
                rbx = rax_7
        else
            int32_t rbx_1 = rbx & 0x80000001
            
            if (rbx_1 s< 0)
                rbx_1 = ((rbx_1 - 1) | 0xfffffffe) + 1
            
            if (rbx_1 == 1)
                sub_142aa0fc0(arg2, sub_142a4a1f0(arg2) - 1)
            
            sub_142b13a70(arg2, rdi_1)
            rbx = 0
        
        r9 = *(arg1 + 0x48)
    while (rsi s< r9)

return arg2
