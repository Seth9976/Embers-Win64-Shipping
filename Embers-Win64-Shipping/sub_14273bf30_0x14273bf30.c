// 函数: sub_14273bf30
// 地址: 0x14273bf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* result = arg2

if (arg4 != 0)
    int64_t* r13_1 = arg3 + 8
    int32_t i
    
    do
        int64_t* result_1 = result
        *result_1 = r13_1[-1]
        
        if (&result_1[1] != r13_1)
            int32_t j_3 = result_1[2].d
            
            if (j_3 != 0)
                int64_t* rbx_2 = result_1[1] + 0x10
                int32_t j
                
                do
                    int64_t rcx = *rbx_2
                    
                    if (rcx != 0)
                        sub_140a74f90(rcx)
                    
                    rbx_2 = &rbx_2[7]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = r13_1[1].d
            void* rdi_1 = *r13_1
            int32_t r8 = *(result_1 + 0x14)
            result_1[2].d = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_140874c00(&result_1[1], j_2, r8)
                int64_t* r15_1 = result_1[1]
                
                if (j_2 != 0)
                    void* rdi_2 = rdi_1 + 0x20
                    void* rbx_3 = r15_1 + 0x1c
                    int32_t j_1
                    
                    do
                        *r15_1 = *(rdi_2 - 0x20)
                        *(rbx_3 - 0x14) = *(rdi_2 - 0x18)
                        *(rbx_3 - 0x10) = *(rdi_2 - 0x14)
                        *(rbx_3 - 0xc) = 0
                        int64_t rsi_2 = sx.q(*(rdi_2 - 8))
                        int64_t r12_1 = *(rdi_2 - 0x10)
                        *(rbx_3 - 4) = rsi_2.d
                        
                        if (rsi_2.d != 0)
                            sub_1405c4a00(rbx_3 - 0xc, rsi_2.d, 0)
                            memcpy(*(rbx_3 - 0xc), r12_1, (rsi_2 << 3).d)
                        else
                            *rbx_3 = 0
                        
                        r15_1 = &r15_1[7]
                        *(rbx_3 + 4) = *rdi_2
                        *(rbx_3 + 0xc) = *(rdi_2 + 8)
                        *(rbx_3 + 0x14) = *(rdi_2 + 0x10)
                        int32_t rax_8 = *(rdi_2 + 0x14)
                        rdi_2 += 0x38
                        *(rbx_3 + 0x18) ^= (rax_8 ^ *(rbx_3 + 0x18)) & 1
                        rbx_3 += 0x38
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                *(result_1 + 0x14) = 0
        
        sub_14273bcb0(&result_1[3], &r13_1[2])
        result_1[8].b = r13_1[7].b
        *(result_1 + 0x44) ^= (*(r13_1 + 0x3c) ^ *(result_1 + 0x44)) & 1
        int32_t rcx_5 = *(r13_1 + 0x3c)
        r13_1 = &r13_1[9]
        result = &result[9]
        *(result_1 + 0x44) ^= (rcx_5 ^ *(result_1 + 0x44)) & 2
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
