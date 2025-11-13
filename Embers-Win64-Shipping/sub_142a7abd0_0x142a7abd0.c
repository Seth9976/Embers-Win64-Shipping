// 函数: sub_142a7abd0
// 地址: 0x142a7abd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s<= 0)
    int32_t rax_1 = *(arg1 + 0x13c)
    
    if (rax_1 s<= 0)
        if (arg2 == 0)
            return sub_142aea410(0, *(arg1 + 0x20), 0, 1, arg4, arg3)
        
        void* rsi = *(arg1 + 0x20)
        int64_t rcx
        
        if (*(rsi + 0x20) == 0)
            rcx = *(arg1 + 0x30)
        
        int64_t var_28
        
        if (*(rsi + 0x20) != 0 || rcx != *(rsi + 0x10) || rcx != sx.q(*(rsi + 0x1c)))
            int32_t rsi_1
            
            if (*(*(rsi + 0x38) + 0x48) != 0)
                int64_t r8_1 = *(arg1 + 0x30)
                var_28.d = 0
                int32_t arg_18 = 0
                rsi_1 = sub_142aea690(rsi, 0, r8_1, 0, 0, &arg_18)
            else
                rsi_1 = *(arg1 + 0x30)
            
            int64_t rax_8 = sub_142a7dd00(sx.q(rsi_1) * 2)
            
            if (rax_8 != 0)
                *arg3 = 0
                var_28.d = rsi_1
                sub_142aea690(*(arg1 + 0x20), 0, *(arg1 + 0x30), rax_8, var_28, arg3)
                *arg3 = 0
                var_28.d = rsi_1
                sub_142aeaca0(arg2, nullptr, sub_142aea860(arg2), rax_8, var_28, arg3)
                sub_142a7dcd0(rax_8)
        else
            int64_t rax_4 = sub_142aea860(arg2)
            var_28.d = *(arg1 + 0x30)
            sub_142aeaca0(arg2, nullptr, rax_4, *(rsi + 0x30), var_28, arg3)
        return arg2
    
    *arg3 = rax_1

return arg2
