// 函数: sub_1408d4af0
// 地址: 0x1408d4af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* result = arg2

if (arg4 != 0)
    void* r12_1 = arg3 + 0x10
    int32_t i
    
    do
        *result = *(r12_1 - 0x10)
        result[1] = *(r12_1 - 8)
        result[2] = *r12_1
        result[3] = *(r12_1 + 8)
        result[4] = *(r12_1 + 0x10)
        
        if (&result[5] != r12_1 + 0x18)
            int32_t j_3 = result[6].d
            
            if (j_3 != 0)
                int64_t* rbx_2 = result[5] + 8
                int32_t j
                
                do
                    int64_t rcx_1 = *rbx_2
                    
                    if (rcx_1 != 0)
                        sub_140a74f90(rcx_1)
                    
                    rbx_2 = &rbx_2[6]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = *(r12_1 + 0x20)
            void* rdi_1 = *(r12_1 + 0x18)
            int32_t r8 = *(result + 0x34)
            result[6].d = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_1405a4b40(&result[5], j_2, r8)
                char* rbx_3 = result[5]
                
                if (j_2 != 0)
                    void* rdi_2 = rdi_1 + 8
                    int32_t j_1
                    
                    do
                        *rbx_3 = *(rdi_2 - 8)
                        *(rbx_3 + 8) = 0
                        int64_t rsi_2 = sx.q(*(rdi_2 + 8))
                        int64_t r15_1 = *rdi_2
                        *(rbx_3 + 0x10) = rsi_2.d
                        
                        if (rsi_2.d != 0)
                            sub_140808f70(&rbx_3[8], rsi_2.d, 0)
                            memcpy(*(rbx_3 + 8), r15_1, (rsi_2 * 0x18).d)
                        else
                            *(rbx_3 + 0x14) = 0
                        
                        rbx_3[0x18] = *(rdi_2 + 0x10)
                        rbx_3[0x19] = *(rdi_2 + 0x11)
                        *(rbx_3 + 0x1c) = *(rdi_2 + 0x14)
                        rbx_3[0x20] = *(rdi_2 + 0x18)
                        rbx_3[0x21] = *(rdi_2 + 0x19)
                        rbx_3[0x22] = *(rdi_2 + 0x1a)
                        *(rbx_3 + 0x24) = *(rdi_2 + 0x1c)
                        *(rbx_3 + 0x28) = *(rdi_2 + 0x20)
                        char rax_15 = *(rdi_2 + 0x24)
                        rdi_2 += 0x30
                        rbx_3[0x2c] = rax_15
                        rbx_3 = &rbx_3[0x30]
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                *(result + 0x34) = 0
        
        result = &result[7]
        r12_1 += 0x38
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
