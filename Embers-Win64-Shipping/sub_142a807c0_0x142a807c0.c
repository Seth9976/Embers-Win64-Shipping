// 函数: sub_142a807c0
// 地址: 0x142a807c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(*(arg1 + 0x98))
int64_t rdi = 0
int64_t r15 = *(arg1 + 0x90)
uint64_t rsi
rsi.b = 0xa

if (rbp s> 0)
    do
        uint32_t rbx_3 = zx.d(*(r15 + (rdi << 1)))
        rdi += 1
        
        if ((rbx_3 & 0xfffffc00) == 0xd800 && rdi != rbp)
            uint32_t rcx = zx.d(*(r15 + (rdi << 1)))
            
            if ((rcx & 0xfffffc00) == 0xdc00)
                rdi += 1
                rbx_3 = ((rbx_3 - 0xd7f7) << 0xa) + rcx
        
        int64_t rax_5 = *(arg1 + 0x1c0)
        int32_t rax_6
        bool cond:1_1
        
        if (rax_5 != 0)
            rax_6 = rax_5(*(arg1 + 0x1c8), zx.q(rbx_3))
            cond:1_1 = rax_6 s>= 0x17
        
        if (rax_5 == 0 || rax_6 == 0x17)
            rax_6 = sub_142af5c70(rbx_3)
            cond:1_1 = rax_6 s>= 0x17
        
        if (cond:1_1)
            rax_6 = 0xa
        
        if (rsi.b != 0xa)
            rsi = zx.q(rsi.b)
            
            if (rax_6.b == 7)
                rsi = 0xa
        else if (rax_6.b u<= 1 || rax_6.b == 0xd)
            rsi = zx.q(rax_6.b)
    while (rdi s< rbp)

return zx.q(rsi.b)
