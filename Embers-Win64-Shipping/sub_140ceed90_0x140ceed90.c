// 函数: sub_140ceed90
// 地址: 0x140ceed90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rsi = *(arg1 + 0x10)
int64_t* result = sub_140cfaf40(*arg2, arg2[1].d, *(arg2 + 0xc))
int32_t i = *(arg2 + 0xc)
int32_t rbx = arg2[1].d

if ((not.b(*(arg1 + 0x30)) & 1) != 0)
    if (i != 0)
        int32_t r14_1 = rol.d(1, rbx.b)
        
        do
            if (rbx s>= 0 && rbx s< *(rsi + 0x28))
                void* rax_3 = *(rsi + 0x20)
                void* rcx_6 = &rsi[0x10]
                
                if (rax_3 != 0)
                    rcx_6 = rax_3
                
                int32_t rax_4 = rbx
                
                if (rbx s< 0)
                    rax_4 = rbx + 0x1f
                
                result = sx.q(rax_4 s>> 5)
                
                if ((*(rcx_6 + (result << 2)) & r14_1) != 0)
                    void* rdx_2 = *(rsi + 0x40)
                    void* r8_3 = &rsi[0x38]
                    void* r9_1 = *arg2
                    int64_t r11_1 = *rsi
                    int32_t r10_1 = *(r9_1 + 0x2c)
                    int64_t r15_2 = sx.q(r10_1 * rbx) + r11_1
                    int64_t rcx_8 = sx.q(*(sx.q(*(r9_1 + 0x20)) + r15_2)) & sx.q(*(rsi + 0x48) - 1)
                    
                    if (rdx_2 != 0)
                        r8_3 = rdx_2
                    
                    void* rdx_3 = r8_3 + (rcx_8 << 2)
                    
                    for (int32_t j = *(r8_3 + (rcx_8 << 2)); j != 0xffffffff; j = *rdx_3)
                        int64_t r8_4 = sx.q(*(r9_1 + 0x1c))
                        
                        if (j == rbx)
                            *rdx_3 = *(r8_4 + r15_2)
                            break
                        
                        rdx_3 = sx.q(r10_1 * j) + r11_1 + r8_4
                    
                    result = sub_140d0cb70(rsi, r9_1 + 0x28, rbx, 1)
                    i -= 1
            
            rbx += 1
            r14_1 = rol.d(r14_1, 1)
        while (i != 0)
else if (i != 0)
    int32_t rdi_1 = rol.d(1, rbx.b)
    
    do
        if (rbx s>= 0 && rbx s< *(rsi + 0x18))
            void* rcx_2 = *(rsi + 0x10)
            
            if ((rcx_2.b & 1) != 0)
                rcx_2 = &rsi[0x10 + (rcx_2 s>> 1)]
            
            int32_t rax_1 = rbx
            
            if (rbx s< 0)
                rax_1 = rbx + 0x1f
            
            result = sx.q(rax_1 s>> 5)
            
            if ((*(rcx_2 + (result << 2)) & rdi_1) != 0)
                result = sub_140d0c8f0(rsi, rbx, *arg2 + 0x1c)
                i -= 1
        
        rbx += 1
        rdi_1 = rol.d(rdi_1, 1)
    while (i != 0)

return result
