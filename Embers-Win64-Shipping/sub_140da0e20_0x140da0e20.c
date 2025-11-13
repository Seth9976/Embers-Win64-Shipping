// 函数: sub_140da0e20
// 地址: 0x140da0e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x1e8)
void* rbp_2 = &result[sx.q(*(arg1 + 0x1f0)) * 2]

if (result != rbp_2)
    char r14_1 = arg2[7].b
    
    do
        int64_t* rbx_1 = *result
        
        if (rbx_1[7].b == r14_1)
            char rax_1 = *(rbx_1 + 0x34)
            
            if (rax_1 == *(arg2 + 0x34))
                char rax_2
                
                if (rax_1 != 0)
                    rax_2 = sub_140d96830(&rbx_1[2], &arg2[2])
                
                if (rax_1 == 0 || rax_2 != 0)
                    int32_t r11_1 = rbx_1[1].d
                    
                    if (r11_1 == arg2[1].d)
                        int32_t* r10_1 = *arg2
                        
                        if (r11_1 == 0)
                            return result
                        
                        void* rdx_1 = &r10_1[5]
                        void* rcx_2 = *rbx_1 + 0x14
                        
                        while (true)
                            char r8_1 = *(rdx_1 + 0xc)
                            char r9_1 = *(rcx_2 + 0xc)
                            
                            if (((r8_1 ^ r9_1) & 1) != 0)
                                break
                            
                            if (((r8_1 ^ r9_1) & 2) != 0)
                                break
                            
                            if (((r8_1 ^ r9_1) & 4) != 0)
                                break
                            
                            if (*r10_1 f!= *(rcx_2 - 0x14))
                                break
                            
                            if (*(rdx_1 - 0x10) f!= *(rcx_2 - 0x10))
                                break
                            
                            if (*(rdx_1 - 0xc) f!= *(rcx_2 - 0xc))
                                break
                            
                            if (*(rdx_1 - 8) f!= *(rcx_2 - 8))
                                break
                            
                            if (*(rdx_1 - 4) f!= *(rcx_2 - 4))
                                break
                            
                            if (*rdx_1 f!= *rcx_2)
                                break
                            
                            if (*(rdx_1 + 4) f!= *(rcx_2 + 4))
                                break
                            
                            if (*(rdx_1 + 8) f!= *(rcx_2 + 8))
                                break
                            
                            r10_1 = &r10_1[9]
                            rdx_1 += 0x24
                            rcx_2 += 0x24
                            int32_t temp1_1 = r11_1
                            r11_1 -= 1
                            
                            if (temp1_1 == 1)
                                return result
        
        result = &result[2]
    while (result != rbp_2)

void*** rax_5 = j_sub_140a82f30(0x50)
void*** rbx_2 = rax_5

if (rax_5 == 0)
    rbx_2 = nullptr
else
    rax_5[1].d = 1
    *(rax_5 + 0xc) = 1
    *rbx_2 = &data_142ec7a68
    sub_140d92d60(&rbx_2[2], arg2)

int64_t rbx_3 = sx.q(*(arg1 + 0x1f0))
int32_t rax_6 = (rbx_3 + 1).d
*(arg1 + 0x1f0) = rax_6

if (rax_6 s> *(arg1 + 0x1f4))
    sub_1405a4f90(arg1 + 0x1e8)

result = (rbx_3 << 4) + *(arg1 + 0x1e8)
*result = &rbx_2[2]
result[1] = rbx_2

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rsi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            void** r8_4 = *rbx_2
            r8_4[1](rbx_2, zx.q(rsi_1), r8_4)

return result
