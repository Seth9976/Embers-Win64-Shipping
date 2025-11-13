// 函数: sub_142b71f60
// 地址: 0x142b71f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *(arg1 + 0x1c)
int32_t rax = *(arg1 + 0x18)
int32_t rbp = rsi + arg2

if (rbp s> rax)
    int64_t rdi_1 = 0x20000
    
    if (rax s>= 0x20000)
        rdi_1 = 0x110000
    
    int64_t rax_1
    
    if (rax s< 0x20000 || rax s< 0x110000)
        rax_1 = sub_142a7dd00(zx.q((rdi_1 << 2).d))
    
    if ((rax s>= 0x20000 && rax s>= 0x110000) || rax_1 == 0)
        return 0xffffffff
    
    memcpy(rax_1, *(arg1 + 0x10), *(arg1 + 0x1c) << 2)
    sub_142a7dcd0(*(arg1 + 0x10))
    *(arg1 + 0x10) = rax_1
    *(arg1 + 0x18) = rdi_1.d

*(arg1 + 0x1c) = rbp
return zx.q(rsi)
