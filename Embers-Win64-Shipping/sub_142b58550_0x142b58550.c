// 函数: sub_142b58550
// 地址: 0x142b58550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
uint32_t result

if (arg1 == arg2)
    result.b = 1
    return result

if (arg3 s> 0)
    char* rbx_2 = arg1 + 8 + (rdi << 6)
    char* rsi_1 = arg2 - arg1
    
    do
        rbx_2 -= 0x40
        rdi = zx.q(rdi.d - 1)
        bool cond:0_1
        
        if ((*rbx_2 & 1) == 0)
            int16_t rax_2 = *rbx_2
            int32_t r8_1
            
            if (rax_2 s< 0)
                r8_1 = *(rbx_2 + 4)
            else
                r8_1 = sx.d(rax_2) s>> 5
            
            int16_t rax_3 = *(rsi_1 + rbx_2)
            
            if (rax_3 s< 0)
                result = *(rsi_1 + rbx_2 + 4)
            else
                result = sx.d(rax_3) s>> 5
            
            if ((*(rsi_1 + rbx_2) & 1) != 0 || r8_1 != result)
                result.b = 0
                return result
            
            cond:0_1 = sub_142a490e0(&rbx_2[-8], &rsi_1[-8] + rbx_2, r8_1).b == 0
        else
            result.b = *(rsi_1 + rbx_2) & 1
            cond:0_1 = result.b == 0
        
        if (cond:0_1)
            result.b = 0
            return result
    while (rdi.d s> 0)

result.b = 1
return result
