// 函数: sub_142a947b0
// 地址: 0x142a947b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int32_t arg_10 = arg2
int32_t r10 = arg4
int32_t r11 = arg3
int64_t rsi = arg1
int32_t result

while (true)
    if (arg2 + 9 s>= r11)
        return sub_142a94470(sx.q(arg2 * r10) + rsi, r11 - arg2, r10, arg5, arg6, arg7)
    
    int32_t var_38_1 = arg2
    int32_t rbx_1 = arg2
    int64_t rcx = sx.q(r10)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg2 + r11)
    int32_t var_34_1 = r11
    int32_t rbp_1 = r11
    memcpy(arg7, sx.q((temp1_1 - temp0_1) s>> 1) * rcx + rsi, rcx.d)
    
    do
        int32_t rdi_2 = rbx_1 * arg4
        
        if (arg5(arg6, sx.q(rdi_2) + rsi, arg7) s< 0)
            int32_t i
            
            do
                rdi_2 += arg4
                rbx_1 += 1
                i = arg5(arg6, sx.q(rdi_2) + rsi, arg7)
            while (i s< 0)
            rbp_1 = var_34_1
            var_38_1 = rbx_1
        
        int32_t rdi_4 = (rbp_1 - 1) * arg4
        
        if (arg5(arg6, arg7, sx.q(rdi_4) + rsi) s< 0)
            int32_t rax_9 = neg.d(arg4)
            int32_t var_34_2 = rax_9
            bool cond:0_1
            
            do
                rdi_4 += rax_9
                rbp_1 -= 1
                cond:0_1 = arg5(arg6, arg7, sx.q(rdi_4) + rsi) s< 0
                rax_9 = var_34_2
            while (cond:0_1)
            rbx_1 = var_38_1
        
        if (rbx_1 s>= rbp_1)
            break
        
        rbp_1 -= 1
        var_34_1 = rbp_1
        
        if (rbx_1 s< rbp_1)
            int64_t rsi_1 = rsi + sx.q(rbx_1) * rcx
            memcpy(arg8, rsi_1, rcx.d)
            int64_t rdi_7 = rcx * sx.q(rbp_1) + arg1
            memcpy(rsi_1, rdi_7, rcx.d)
            memcpy(rdi_7, arg8, rcx.d)
            rsi = arg1
        
        rbx_1 += 1
        var_38_1 = rbx_1
    while (rbx_1 s< rbp_1)
    
    r11 = arg_18
    arg2 = arg_10
    
    if (rbp_1 - arg2 s>= r11 - rbx_1)
        if (rbx_1 s< r11 - 1)
            sub_142a947b0(rsi, zx.q(rbx_1), zx.q(r11), zx.q(arg4), arg5, arg6, arg7, arg8, 
                var_38_1, rcx)
            arg2 = arg_10
        
        r11 = rbp_1
        arg_18 = rbp_1
    else
        if (arg2 s< rbp_1 - 1)
            sub_142a947b0(rsi, arg2, zx.q(rbp_1), zx.q(arg4), arg5, arg6, arg7, arg8, var_38_1, rcx)
            r11 = arg_18
        
        arg2 = rbx_1
        arg_10 = rbx_1
    
    result = r11 - 1
    
    if (arg2 s>= result)
        break
    
    r10 = arg4

return result
