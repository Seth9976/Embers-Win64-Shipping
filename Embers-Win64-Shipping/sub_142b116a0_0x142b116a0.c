// 函数: sub_142b116a0
// 地址: 0x142b116a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *(arg1 + 0x50)
int32_t i = arg4
int64_t rbx = sx.q(arg2)
int64_t r11 = rbx

do
    int16_t rcx = *(arg1 + 0x18)
    int32_t rdx_1 = arg3 + 1 + *(rsi + (r11 << 3))
    rbx = zx.q(rbx.d + 1)
    r11 += 1
    int32_t rax_3
    
    if (rcx s< 0)
        rax_3 = *(arg1 + 0x1c)
    else
        rax_3 = sx.d(rcx) s>> 5
    
    int16_t r9
    
    if (rdx_1 u>= rax_3)
        r9 = -1
    else
        void* rcx_1 = arg1 + 0x1a
        
        if ((rcx.b & 2) == 0)
            rcx_1 = *(arg1 + 0x28)
        
        r9 = *(rcx_1 + (sx.q(rdx_1) << 1))
    
    int16_t r8 = *(arg1 + 0x18)
    
    while (true)
        int32_t rdx_3 = arg3 + 1 + *(rsi + (r11 << 3))
        int32_t rax_6
        
        if (r8 s< 0)
            rax_6 = *(arg1 + 0x1c)
        else
            rax_6 = sx.d(r8) s>> 5
        
        int16_t rcx_3
        
        if (rdx_3 u>= rax_6)
            rcx_3 = -1
        else
            void* rcx_2 = arg1 + 0x1a
            
            if ((r8.b & 2) == 0)
                rcx_2 = *(arg1 + 0x28)
            
            rcx_3 = *(rcx_2 + (sx.q(rdx_3) << 1))
        
        if (r9 != rcx_3)
            break
        
        rbx = zx.q(rbx.d + 1)
        r11 += 1
    
    i -= 1
while (i s> 0)

return zx.q(rbx.d)
