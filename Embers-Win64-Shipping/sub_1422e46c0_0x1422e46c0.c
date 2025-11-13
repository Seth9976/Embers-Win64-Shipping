// 函数: sub_1422e46c0
// 地址: 0x1422e46c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 1
sub_1405a4d70(arg2)
int32_t i = 0
**arg2 = arg1

if (*(arg1 + 0xa8) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t var_28
        int64_t* rax_2 = sub_1422e46c0(*(rsi_1 + *(arg1 + 0xa0)), &var_28)
        int64_t rbp_1 = sx.q(rax_2[1].d)
        
        if (rbp_1.d != 0)
            int32_t rcx_2 = arg2[1].d
            int32_t rdx_2 = rcx_2 + rbp_1.d
            
            if (rdx_2 s> *(arg2 + 0xc))
                sub_1405c5570(arg2, rdx_2)
                rcx_2 = arg2[1].d
            
            memmove(*arg2 + (sx.q(rcx_2) << 3), *rax_2, (rbp_1 << 3).d)
            rax_2[1].d = 0
            arg2[1].d += rbp_1.d
        
        int64_t rcx_6 = var_28
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(arg1 + 0xa8))

return arg2
