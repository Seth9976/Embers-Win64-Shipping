// 函数: sub_141c966c0
// 地址: 0x141c966c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
int64_t* r15 = *arg2
int64_t** result = &r15[arg2[1]]
uint64_t r12_1 = sx.q(arg2[1].d) << 3 u>> 3

if (r15 u> result)
    r12_1 = 0

if (r12_1 != 0)
    do
        int64_t* r14_1 = *arg1
        int64_t* rsi_1 = *r15
        int64_t* rdi_1 = *r14_1
        int64_t rbx_1 = *rsi_1
        
        if (rdi_1[1].d == *(rdi_1 + 0x34))
        label_141c96777:
            void* rdi_2 = r14_1[2]
            int64_t rbx_2 = *rsi_1
            result = zx.q(*(rdi_2 + 0x58))
            
            if (result.d != *(rdi_2 + 0x84))
                int32_t rax_7 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
                void* r8_3 = rdi_2 + 0x88
                void* rcx_4 = *(r8_3 + 8)
                
                if (rcx_4 != 0)
                    r8_3 = rcx_4
                
                result = zx.q(*(r8_3 + (((sx.q(*(rdi_2 + 0x98)) - 1) & sx.q(rax_7)) << 2)))
                
                if (result.d != 0xffffffff)
                    int64_t rdx_7 = *(rdi_2 + 0x50)
                    
                    while (true)
                        int64_t rcx_6 = sx.q(result.d) << 5
                        
                        if (*(rcx_6 + rdx_7) == rbx_2)
                            break
                        
                        result = zx.q(*(rcx_6 + rdx_7 + 0x18))
                        
                        if (result.d == 0xffffffff)
                            goto label_141c967ff
                    
                    if (result.d != 0xffffffff)
                        result = r14_1[3]
                        *result = rsi_1
        else
            int32_t rax_3 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
            void* r8_1 = &rdi_1[7]
            void* rcx_1 = *(r8_1 + 8)
            
            if (rcx_1 != 0)
                r8_1 = rcx_1
            
            int32_t rax_5 = *(r8_1 + (((sx.q(rdi_1[9].d) - 1) & sx.q(rax_3)) << 2))
            
            if (rax_5 == 0xffffffff)
                goto label_141c96777
            
            int64_t r8_2 = *rdi_1
            
            while (true)
                int64_t rdx_3 = sx.q(rax_5) * 3
                
                if (*(r8_2 + (rdx_3 << 3)) == rbx_1)
                    break
                
                rax_5 = *(r8_2 + (rdx_3 << 3) + 0x10)
                
                if (rax_5 == 0xffffffff)
                    goto label_141c96777
            
            if (rax_5 == 0xffffffff)
                goto label_141c96777
            
            result = r14_1[1]
            *result = rsi_1
        
    label_141c967ff:
        r15 = &r15[1]
        rbp += 1
    while (rbp != r12_1)

return result
