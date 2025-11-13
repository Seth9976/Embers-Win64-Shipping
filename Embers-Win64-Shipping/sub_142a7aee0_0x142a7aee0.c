// 函数: sub_142a7aee0
// 地址: 0x142a7aee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int64_t* rsi = arg4
*arg4 = 0

if (*arg6 s<= 0)
    int32_t rax_1 = *(arg1 + 0x13c)
    
    if (rax_1 s<= 0)
        if (*(arg1 + 0x82) == 0)
            *arg6 = 0x10302
            return arg3
        
        if (arg2 s>= 0 && arg2 s<= *(*(*(arg1 + 8) + 0x88) + 8))
            goto label_142a7af50
        
        *arg6 = 8
    else
        *arg6 = rax_1
    label_142a7af50:
        
        if (*arg6 s<= 0)
            int64_t rax_4
            int64_t rdi
            
            if (arg2 != 0)
                arg4 = *(*(arg1 + 8) + 0x88)
                
                if (arg2 - 1 s>= 0)
                    int32_t rax_6 = arg4[1].d
                    
                    if (rax_6 s> 0 && rax_6 - (arg2 - 1) s> 0)
                        r8 = *(arg4[3] + (sx.q(arg2 - 1) << 2))
                
                int64_t rdx_1 = *(arg1 + 0xb8)
                rdi = *(rdx_1 + (sx.q(r8) << 3) + 0x10)
                rax_4 = *(rdx_1 + (sx.q(r8 + 1) << 3) + 0x10)
            else
                rdi = *(arg1 + 0x88)
                rax_4 = *(arg1 + 0x90)
            
            arg4.b = 1
            
            if (rdi s< 0)
                return sub_142aea410(arg3, *(arg1 + 0x20), 0, arg4.b, arg5, arg6)
            
            *rsi = rax_4 - rdi
            void* rax_13 = sub_142aea410(arg3, *(arg1 + 0x20), 0, arg4.b, arg5, arg6)
            
            if (rax_13 != 0)
                int64_t rax_15 = rdi - *(rax_13 + 0x20)
                
                if (rdi - *(rax_13 + 0x20) s>= 0 && rax_15 s< sx.q(*(rax_13 + 0x1c))
                        && *(*(rax_13 + 0x30) + (rax_15 << 1)) u< 0xdc00)
                    *(rax_13 + 0x28) = rax_15.d
                    return rax_13
                
                sub_142aeacd0(rax_13, rdi)
            
            return rax_13

return arg3
