// 函数: sub_1426dfe90
// 地址: 0x1426dfe90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int64_t* rcx = *(arg1 + 0x38)

if (rcx != 0)
    if (*(arg1 + 0x34) != 3)
        void var_18
        int64_t* rax_1 = sub_1426df780(rcx, &var_18, 0)
        int64_t rdi = sx.q(arg2[1].d)
        int32_t rcx_1 = (rdi + 1).d
        arg2[1].d = rcx_1
        
        if (rcx_1 s> *(arg2 + 0xc))
            sub_140638a00(arg2)
        
        int64_t rax_2 = *arg2
        int64_t rdx_2 = rdi * 3
        *(rax_2 + (rdx_2 << 2)) = *rax_1
        *(rax_2 + (rdx_2 << 2) + 8) = rax_1[1].d
        return arg2
    
    sub_1426da930(rcx, arg2)

return arg2
