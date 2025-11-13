// 函数: sub_140d97020
// 地址: 0x140d97020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int32_t result = arg2[1].d - 1

if (result s> 0)
    void* r14_1 = nullptr
    int64_t rdi
    int64_t var_20_1 = rdi
    
    do
        int64_t rcx = *arg2
        char* rax_1 = r14_1 + rcx
        r14_1 += 0x20
        char* r8_1 = r14_1 + rcx
        
        if (*(rax_1 + 0x10) == *(r14_1 + rcx + 0x10))
            char rbx_1 = *rax_1
            uint64_t rcx_1
            int32_t rdx_2
            
            if (rbx_1 == 2)
            label_140d970a0:
                bool r9_2 = *r8_1
                
                if (r9_2 != 2)
                    rcx_1 = zx.q(r8_1[8])
                    
                    if (rcx_1.b != 2)
                        int32_t r10_1 = *(r8_1 + 0xc)
                        int32_t temp1_1 = *(r8_1 + 4)
                        
                        if (temp1_1 s> r10_1 || (temp1_1 == r10_1 && (r9_2 == 0 || rcx_1.b == 0)))
                            goto label_140d9717c
                
                char rsi_1 = rax_1[8]
                
                if (rsi_1 == 2 || r9_2 == 2)
                    rcx_1.b = 1
                else
                    rcx_1.b = 0
                
                if (rbx_1 == 2 || r8_1[8] == 2)
                    rdi.b = 1
                else
                    rdi.b = 0
                
                bool r11 = true
                bool r10_2 = true
                
                if (rcx_1.b == 0)
                    int32_t rcx_2 = *(r8_1 + 4)
                    int32_t rdx = *(rax_1 + 0xc)
                    r11 = rdx s> rcx_2
                    rcx_2.b = rdx s>= rcx_2
                    
                    if (rsi_1 != 1 || r9_2 != 1)
                        rdx.b = 0
                    else
                        rdx = 1
                    
                    if (rdx.b != 0)
                        r11 = rcx_2.b
                
                if (rdi.b == 0)
                    int32_t rcx_4 = *(r8_1 + 0xc)
                    uint32_t rdx_1 = *(rax_1 + 4)
                    r9_2 = rdx_1 s< rcx_4
                    rcx_4.b = rdx_1 s<= rcx_4
                    
                    if (rbx_1 != 1 || r8_1[8] != rbx_1)
                        rdx_1.b = 0
                    else
                        rdx_1 = zx.d(rbx_1)
                    
                    r10_2 = r9_2
                    
                    if (rdx_1.b != 0)
                        r10_2 = rcx_4.b
                
                if (r11 == 0 || r10_2 == 0)
                    goto label_140d9717c
                
                rdx_2 = *(rax_1 + 0xc)
            label_140d97188:
                int32_t rcx_7 = *(r8_1 + 0xc)
                
                if (rdx_2 s>= rcx_7)
                    rcx_7 = rdx_2
                
                int32_t arg_1c = rcx_7
                int32_t arg_14 = *(rax_1 + 4)
                int64_t var_30_1 = 1.q
                *rax_1 = 1.q.o
                sub_140dbab60(arg2, rbp + 1, 1, 0)
            else
                rcx_1 = zx.q(rax_1[8])
                
                if (rcx_1.b == 2)
                    goto label_140d970a0
                
                int32_t r9_1 = *(rax_1 + 0xc)
                int32_t temp0_1 = *(rax_1 + 4)
                
                if (temp0_1 s<= r9_1 && (temp0_1 != r9_1 || (rbx_1 != 0 && rcx_1.b != 0)))
                    goto label_140d970a0
                
            label_140d9717c:
                rdx_2 = *(rax_1 + 0xc)
                
                if (rdx_2 + 1 == *(r8_1 + 4))
                    goto label_140d97188
        
        rbp += 1
        result = arg2[1].d - 1
    while (rbp s< result)

return result
