// 函数: sub_142312c10
// 地址: 0x142312c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0
void* rsi = arg1

if (*(arg2 + 0xc) s<= 0xffffffff)
    sub_1405c5570(arg2, 0)

uint64_t result = *(rsi + 0x58)

if (result != 0)
    uint64_t* i = *result
    result = sx.q(*(result + 8))
    void* rdi_1 = &i[result]
    void* arg_18 = rdi_1
    
    for (; i != rdi_1; i = &i[1])
        result = *i
        int64_t j_1 = sx.q(*(result + 8))
        
        if (j_1 s> 0)
            int64_t r12_1 = 0
            uint64_t result_1 = result
            int64_t j
            
            do
                int64_t rax = *result_1
                int32_t r9_1 = *(rax + r12_1 + 0x50)
                int32_t r10_1 = *(rax + r12_1 + 0x4c)
                int32_t r11_1 = *(rax + r12_1 + 0x48)
                int32_t rbp_1 = *(rax + r12_1 + 0x44)
                result = zx.q(rbp_1) | zx.q(r11_1) | zx.q(r10_1) | zx.q(r9_1)
                
                if (result.d != 0)
                    int64_t* rdx = *(rsi + 0x2f8)
                    result = sx.q(*(rsi + 0x300))
                    void* r8_1 = &rdx[result]
                    
                    if (rdx != r8_1)
                        do
                            void* k = *rdx
                            
                            if (k != 0)
                                result = zx.q(rbp_1) ^ zx.q(*(k + 0x38))
                                
                                if (((*(k + 0x3c) ^ r11_1) | (*(k + 0x40) ^ r10_1)
                                        | (*(k + 0x44) ^ r9_1) | result.d) == 0)
                                    if (k != 0)
                                        int64_t* rdx_1 = *arg2
                                        int64_t r8_2 = sx.q(arg2[1].d)
                                        int64_t* rax_9 = rdx_1
                                        void* rcx_6 = &rdx_1[r8_2]
                                        
                                        if (rdx_1 != rcx_6)
                                            while (*rax_9 != k)
                                                rax_9 = &rax_9[1]
                                                
                                                if (rax_9 == rcx_6)
                                                    goto label_142312d51
                                            
                                            result = (rax_9 - rdx_1) s>> 3
                                        
                                        if (rdx_1 == rcx_6 || result.d == 0xffffffff)
                                        label_142312d51:
                                            int32_t rax_11 = (r8_2 + 1).d
                                            arg2[1].d = rax_11
                                            
                                            if (rax_11 s> *(arg2 + 0xc))
                                                sub_1405a4d70(arg2)
                                            
                                            result = *arg2
                                            *((r8_2 << 3) + result) = k
                                    
                                    break
                            
                            rdx = &rdx[1]
                        while (rdx != r8_1)
                        
                        rsi = arg1
                
                r12_1 += 0xe8
                j = j_1
                j_1 -= 1
            while (j != 1)
            rdi_1 = arg_18

return result
