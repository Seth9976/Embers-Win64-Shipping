// 函数: sub_1411e9d70
// 地址: 0x1411e9d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int64_t r10 = arg2

if (arg5 == 0)
    return arg1

int32_t i = 0

if (*(arg3 + 8) s<= 0)
    return arg1

do
    int64_t i_1 = sx.q(i)
    int64_t* var_38
    int64_t* rax_1 = sub_1411e9eb0(&var_38, r10, i_1 * 0x5240 + *arg3, arg4, 
        i_1 * 0x130 + *(arg5 + 0x10), i_1 * 0xe8 + *arg5, arg6)
    
    if (arg1 != rax_1)
        int64_t* rcx_3 = *arg1
        *arg1 = *rax_1
        *rax_1 = 0
        
        if (rcx_3 != 0)
            sub_1411e8d60(rcx_3)
    
    sub_1405d1600(&arg1[1], &rax_1[1])
    void var_30
    sub_1405ec8a0(&var_30)
    int64_t* rcx_6 = var_38
    
    if (rcx_6 != 0)
        sub_1411e8d60(rcx_6)
    
    r10 = arg2
    i += 1
while (i s< *(arg3 + 8))

return arg1
