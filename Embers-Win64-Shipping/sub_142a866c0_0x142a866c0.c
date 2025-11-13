// 函数: sub_142a866c0
// 地址: 0x142a866c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t arg_10 = arg2

if (*arg5 s<= 0)
    if ((arg4 & 2) != 0 && arg3 == 0)
        return sub_142a868c0(arg1, arg2)
    
    if (arg1[6].d s> arg1[7].d)
        sub_142a867f0(arg1, arg5)
        arg2 = arg_10
    
    if (arg1[6].d s<= arg1[7].d || *arg5 s<= 0)
        int32_t rax_6 = arg1[1](arg2, arg2)
        int32_t* rax_7 = sub_142a86530(arg1, arg_10, rax_6)
        int32_t rdx_2
        
        if (*rax_7 s< 0)
            rdx_2 = arg1[6].d
            arg1[6].d = rdx_2 + 1
        
        if (*rax_7 s>= 0 || rdx_2 + 1 != *(arg1 + 0x34))
            char var_20 = arg4
            return sub_142a86950(arg1, rax_7, rax_6 & 0x7fffffff, arg_10, arg_18)
        
        arg3 = arg_18
        arg1[6].d = rdx_2
        arg2 = arg_10
        *arg5 = 7
    else
        arg3 = arg_18

int64_t rax_3 = arg1[4]

if (rax_3 != 0 && arg2 != 0)
    rax_3(arg2, arg2)
    arg3 = arg_18

int64_t rax_4 = arg1[5]

if (rax_4 != 0 && arg3 != 0)
    rax_4(arg3)

return 0
