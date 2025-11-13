// 函数: sub_142a7e190
// 地址: 0x142a7e190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg2
int64_t rbp
rbp.b = 0
int32_t rsi_2 = neg.d(sbb.d(arg2.d, arg2.d, arg1 != 0)) - 1

while (true)
    int64_t* rax_1 = sub_142a7f0a0(arg4, rsi_2, arg9)
    
    if (*arg9 s<= 0 && rax_1 != 0)
        int64_t var_48
        int32_t* var_40
        int32_t* var_38
        int32_t arg_8
        void* rax_2 = (**rax_1)(rax_1, arg3, &arg_8, arg9, var_48, var_40, var_38)
        
        if (rax_2 != 0)
            var_38 = arg10
            var_40 = arg9
            var_48 = arg6
            void* result = sub_142a7e0f0(rax_2, arg7, arg8, arg5, var_48, var_40, var_38)
            
            if (*arg10 s> 0)
                break
            
            if (result != 0)
                *(result + 0x30) = arg_8
                return result
    
    if (*arg9 == 7)
        *arg10 = *arg9
        break
    
    if (arg1 == 0)
        break
    
    if (rax_1 == 0)
        if (rbp.b != 0)
            break
        
        if (sub_142a7ec40(arg9) == 0)
            break
        
        rbp.b = 1
    else
        rsi_2 += 1

return nullptr
