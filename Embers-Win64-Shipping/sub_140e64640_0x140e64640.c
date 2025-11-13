// 函数: sub_140e64640
// 地址: 0x140e64640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int32_t rax = arg2[1].d

if (rax s> 0)
    sub_1405c5570(arg1, rax)
    rax = arg2[1].d

int64_t* i = *arg2
void* r14_2 = &i[sx.q(rax) * 2]

if (i != r14_2)
    do
        int64_t rsi_1 = sx.q(arg1[1].d)
        int64_t rbp_1 = *i
        int32_t rax_1 = (rsi_1 + 1).d
        arg1[1].d = rax_1
        
        if (rax_1 s> *(arg1 + 0xc))
            sub_1405a4d70(arg1)
        
        i = &i[2]
        *(*arg1 + (rsi_1 << 3)) = rbp_1
    while (i != r14_2)
    
    rax = arg2[1].d
    i = *arg2

for (; i != &i[sx.q(rax) * 2]; i = &i[2])
    int64_t var_28
    int64_t* rax_4 = sub_140e64640(&var_28, sub_140e12730(*i))
    int64_t rsi_2 = sx.q(rax_4[1].d)
    
    if (rsi_2.d != 0)
        int32_t rcx_3 = arg1[1].d
        int32_t rdx_3 = rcx_3 + rsi_2.d
        
        if (rdx_3 s> *(arg1 + 0xc))
            sub_1405c5570(arg1, rdx_3)
            rcx_3 = arg1[1].d
        
        memmove(*arg1 + (sx.q(rcx_3) << 3), *rax_4, (rsi_2 << 3).d)
        rax_4[1].d = 0
        arg1[1].d += rsi_2.d
    
    int64_t rcx_7 = var_28
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

return arg1
