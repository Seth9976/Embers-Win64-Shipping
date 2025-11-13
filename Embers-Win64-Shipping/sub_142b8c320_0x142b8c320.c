// 函数: sub_142b8c320
// 地址: 0x142b8c320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x2331c))
int64_t r15 = sx.q(arg2)

if (rdi.d == 0)
    rdi = zx.q(*(arg1 + 0x23318))
    int32_t rax_2 = *(arg1 + 0x23314)
    int32_t rbp_1 = (rdi + 0x20).d
    
    if (rbp_1 s> rax_2)
        int64_t rsi_1 = 0x20000
        
        if (rax_2 s>= 0x20000)
            rsi_1 = 0x110480
        
        int64_t rax_3
        
        if (rax_2 s< 0x20000 || rax_2 s< 0x110480)
            rax_3 = sub_142a7dd00(zx.q((rsi_1 << 2).d))
        
        if ((rax_2 s>= 0x20000 && rax_2 s>= 0x110480) || rax_3 == 0)
            return 0xffffffff
        
        memcpy(rax_3, *(arg1 + 0x23300), *(arg1 + 0x23318) << 2)
        sub_142a7dcd0(*(arg1 + 0x23300))
        *(arg1 + 0x23300) = rax_3
        *(arg1 + 0x23314) = rsi_1.d
    
    *(arg1 + 0x23318) = rbp_1
else
    *(arg1 + 0x2331c) = neg.d(*(arg1 + (rdi s>> 5 << 2) + 0x23330))

int64_t rcx_3 = *(arg1 + 0x23300)
int64_t rdx_1 = sx.q(rdi.d)
*(rcx_3 + (rdx_1 << 2)) = *(rcx_3 + (r15 << 2))
*(rcx_3 + (rdx_1 << 2) + 0x10) = *(rcx_3 + (r15 << 2) + 0x10)
*(rcx_3 + (rdx_1 << 2) + 0x20) = *(rcx_3 + (r15 << 2) + 0x20)
*(rcx_3 + (rdx_1 << 2) + 0x30) = *(rcx_3 + (r15 << 2) + 0x30)
*(rcx_3 + (rdx_1 << 2) + 0x40) = *(rcx_3 + (r15 << 2) + 0x40)
*(rcx_3 + (rdx_1 << 2) + 0x50) = *(rcx_3 + (r15 << 2) + 0x50)
*(rcx_3 + (rdx_1 << 2) + 0x60) = *(rcx_3 + (r15 << 2) + 0x60)
*(rcx_3 + (rdx_1 << 2) + 0x70) = *(rcx_3 + (r15 << 2) + 0x70)
*(arg1 + (rdx_1 s>> 5 << 2) + 0x23330) = 0
return zx.q(rdi.d)
