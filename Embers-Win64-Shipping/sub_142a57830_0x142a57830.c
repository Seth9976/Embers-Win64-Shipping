// 函数: sub_142a57830
// 地址: 0x142a57830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg6 s<= 0)
    if (arg2 != 0 || arg3 == 0)
        uint64_t rcx = zx.q(arg5)
        
        if (arg4 != 0 || rcx.d == 0)
            uint64_t rax_1 = -1
            
            if (rcx.d s< 0)
                rcx = -1
                
                do
                    rcx += 1
                while (*(arg4 + rcx) != 0)
            
            if (arg3 s>= 0)
                rax_1 = zx.q(arg3)
            else
                do
                    rax_1 += 1
                while (arg2[rax_1] != 0)
            
            int32_t var_10 = rax_1.d
            int64_t rax_2 = *arg1
            int64_t var_28 = arg4
            int32_t var_20 = rcx.d
            char* var_18 = arg2
            return (*(rax_2 + 0x60))(arg1, &var_18, &var_28, arg6, var_28, var_20, var_18, var_10)
    
    *arg6 = 1

return 0
