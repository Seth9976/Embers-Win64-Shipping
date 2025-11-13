// 函数: sub_142b770b0
// 地址: 0x142b770b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2

if (*arg4 s> 0)
    return 0

int32_t rdi = 0

while (true)
    int16_t rcx = *(arg1 + 0x18)
    int32_t rsi_1 = rax
    int32_t rcx_2
    
    if (rcx s< 0)
        rcx_2 = *(arg1 + 0x1c)
    else
        rcx_2 = sx.d(rcx) s>> 5
    
    if (rax s>= rcx_2)
        sub_142b77300(arg1, arg3, 0)
        *arg4 = 0x10109
        break
    
    int16_t rdx = *(arg1 + 0x18)
    int32_t rcx_4
    
    if (rdx s< 0)
        rcx_4 = *(arg1 + 0x1c)
    else
        rcx_4 = sx.d(rdx) s>> 5
    
    int16_t rdx_2
    
    if (rax u>= rcx_4)
        rdx_2 = -1
    else
        void* rdx_1 = arg1 + 0x1a
        
        if ((rdx.b & 2) == 0)
            rdx_1 = *(arg1 + 0x28)
        
        rdx_2 = *(rdx_1 + (sx.q(rax) << 1))
    
    rax += 1
    
    if (rdx_2 == 0x27)
        if (rax s>= 0)
            int16_t rcx_6 = *(arg1 + 0x18)
            int32_t rdx_4
            
            if (rcx_6 s< 0)
                rdx_4 = *(arg1 + 0x1c)
            else
                rdx_4 = sx.d(rcx_6) s>> 5
            
            if (rax s> rdx_4)
                if (rcx_6 s< 0)
                    rax = *(arg1 + 0x1c)
                else
                    rax = sx.d(rcx_6) s>> 5
        else
            rax = 0
        
        int16_t rcx_7 = *(arg1 + 0x18)
        int32_t r9_1
        
        if (rcx_7 s< 0)
            r9_1 = *(arg1 + 0x1c)
        else
            r9_1 = sx.d(rcx_7) s>> 5
        
        int32_t rax_3 = sub_142a491f0(arg1 + 0x10, 0x27, rax, r9_1 - rax)
        
        if (rax_3 s< 0)
            sub_142b77300(arg1, arg3, arg2)
            *arg4 = 0x10107
            break
        
        rax = rax_3 + 1
    else if (rdx_2 == 0x7b)
        rdi += 1
    else if (rdx_2 == 0x7d)
        if (rdi s<= 0)
            int32_t r9_4 = rsi_1 - arg2
            
            if (r9_4 s<= 0xffff)
                sub_142b74dc0(arg1, 0xa, arg2, r9_4.w, 0, arg4)
                return zx.q(rsi_1)
            
            sub_142b77300(arg1, arg3, arg2)
            *arg4 = 8
            break
        
        rdi -= 1

return 0
