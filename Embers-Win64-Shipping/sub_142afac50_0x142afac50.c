// 函数: sub_142afac50
// 地址: 0x142afac50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t rax = sx.q(arg3)
int64_t r9 = arg1
int32_t rbp = 0xff
char* rax_1 = rax + arg2
int64_t r8_2 = (rax << 0xa) + arg1
int32_t rsi = 0
int64_t var_28 = r8_2
int64_t i = 0
*rax_1 = 0
char* rcx_1
int64_t rsi_2

while (true)
    int32_t rdi_1 = *(r8_2 + (i << 2))
    uint64_t rax_4 = zx.q(rdi_1 u>> 0x18) & 0x7f
    
    if (*(rax_4 + arg2) == 0xff)
        sub_142afac50(r9, arg4, zx.q(rax_4.d))
        arg2 = arg_10
        r8_2 = var_28
        r9 = arg1
    
    if (rdi_1 s< 0)
        if ((rdi_1 & 0xf00000) u< 0x600000)
        label_142afacd0:
            rcx_1 = rax_1
            *rcx_1 |= (rsi s>> 2).b & 0xf8
            rsi_2 = 0xff
            break
    else if (*(rax_4 + arg2) s>= 0)
        goto label_142afacd0
    
    if (i == 0xff)
        *rax_1 = 0xc0
        char* result
        result.b = 0xc0
        return result
    
    rsi += 1
    i += 1

if (i s< 0xff)
    do
        int32_t rdi_2 = *(r8_2 + (rsi_2 << 2))
        uint64_t rax_7 = zx.q(rdi_2 u>> 0x18) & 0x7f
        
        if (*(rax_7 + arg2) == 0xff)
            sub_142afac50(r9, arg4, zx.q(rax_7.d))
            arg2 = arg_10
            r8_2 = var_28
        
        if (rdi_2 s< 0)
            if ((rdi_2 & 0xf00000) u< 0x600000)
                break
        else if (*(rax_7 + arg2) s>= 0)
            break
        
        r9 = arg1
        rbp -= 1
        rsi_2 -= 1
    while (i s< rsi_2)
    
    rcx_1 = rax_1

*rcx_1 |= (rbp s>> 5).b

for (; i s<= sx.q(rbp); i += 1)
    int32_t rdi_5 = *(r8_2 + (i << 2))
    uint64_t rax_12 = zx.q(rdi_5 u>> 0x18) & 0x7f
    uint64_t rsi_3 = zx.q(rax_12.d)
    
    if (*(rax_12 + arg2) == 0xff)
        sub_142afac50(arg1, arg4, zx.q(rsi_3.d))
        arg2 = arg_10
        rcx_1 = rax_1
        r8_2 = var_28
    
    if (rdi_5 s< 0)
        *(rsi_3 + arg2) |= 0x40
        
        if ((rdi_5 & 0xf00000) u<= 0x300000)
            *rcx_1 |= 0x40

return zx.q(*rcx_1)
