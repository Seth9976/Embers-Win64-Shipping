// 函数: sub_142b11040
// 地址: 0x142b11040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = *(arg1 + 0x50)
int64_t rdi = sx.q(arg3)
int64_t r8 = sx.q(arg2)
int32_t rbp = 0

do
    int16_t rcx = *(arg1 + 0x18)
    int32_t rdx_1 = arg4 + 1 + *(r14 + (r8 << 3))
    r8 += 1
    int32_t rax_3
    
    if (rcx s< 0)
        rax_3 = *(arg1 + 0x1c)
    else
        rax_3 = sx.d(rcx) s>> 5
    
    int16_t rbx_1
    
    if (rdx_1 u>= rax_3)
        rbx_1 = -1
    else
        void* rcx_1 = arg1 + 0x1a
        
        if ((rcx.b & 2) == 0)
            rcx_1 = *(arg1 + 0x28)
        
        rbx_1 = *(rcx_1 + (sx.q(rdx_1) << 1))
    
    if (r8 s< rdi)
        int16_t r11_1 = *(arg1 + 0x18)
        int64_t rdx_2 = r14 + (r8 << 3)
        
        do
            int32_t r9_1 = arg4 + 1 + *rdx_2
            int32_t rax_6
            
            if (r11_1 s< 0)
                rax_6 = *(arg1 + 0x1c)
            else
                rax_6 = sx.d(r11_1) s>> 5
            
            int16_t rcx_3
            
            if (r9_1 u>= rax_6)
                rcx_3 = -1
            else
                void* rcx_2 = arg1 + 0x1a
                
                if ((r11_1.b & 2) == 0)
                    rcx_2 = *(arg1 + 0x28)
                
                rcx_3 = *(rcx_2 + (sx.q(r9_1) << 1))
            
            if (rbx_1 != rcx_3)
                break
            
            r8 += 1
            rdx_2 += 8
        while (r8 s< rdi)
    
    rbp += 1
while (r8 s< rdi)

return zx.q(rbp)
