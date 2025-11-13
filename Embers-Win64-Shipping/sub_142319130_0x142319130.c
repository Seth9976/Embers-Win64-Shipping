// 函数: sub_142319130
// 地址: 0x142319130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
int64_t rdi = 0
arg2[1] = 0
int64_t* rsi = *(arg1 + 0x168)
uint64_t r15_1 = sx.q(*(arg1 + 0x170)) << 3 u>> 3

if (rsi u> &rsi[sx.q(*(arg1 + 0x170))])
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t arg_8 = *(*rsi + 0x18)
        int64_t var_38
        int64_t* rax_3 = sub_140b63b70(&arg_8, &var_38)
        int64_t rbp_1 = sx.q(arg2[1].d)
        int32_t rcx_2 = (rbp_1 + 1).d
        arg2[1].d = rcx_2
        
        if (rcx_2 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t* rcx_6 = (rbp_1 << 4) + *arg2
        *rcx_6 = 0
        *rcx_6 = *rax_3
        *rax_3 = 0
        rcx_6[1].d = rax_3[1].d
        *(rcx_6 + 0xc) = *(rax_3 + 0xc)
        rax_3[1] = 0
        int64_t rcx_7 = var_38
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        rsi = &rsi[1]
        rdi += 1
    while (rdi != r15_1)

return arg2
