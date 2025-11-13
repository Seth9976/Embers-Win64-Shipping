// 函数: sub_142a38740
// 地址: 0x142a38740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t arg_20

if (arg1 != 0 && arg2 s>= 0 && (*(*arg1 + 8))(arg1, &var_18, &arg_20) s>= 0)
    int64_t rcx = var_18
    int64_t rax_3 = arg_20
    
    if (rcx s< 0 || rax_3 s<= rcx)
        *arg3 = 1
        
        if (arg2 s>= rax_3)
            return arg2
        
        char arg_8
        int32_t rax_6 = (**arg1)(arg1, arg2, 1, &arg_8)
        
        if (rax_6 != 0)
            return sx.q(rax_6)
        
        char rcx_2 = arg_8
        
        if (rcx_2 != 0)
            rax_6.b = 0x80
            
            if (rcx_2 s>= 0)
                do
                    *arg3 += 1
                    rax_6.b u>>= 1
                while ((rcx_2 & rax_6.b) == 0)
            
            return 0

return -2
