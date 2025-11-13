// 函数: sub_1424ce980
// 地址: 0x1424ce980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg4
int32_t i_1 = arg4
uint64_t* result = arg2

if (arg4 != 0)
    int64_t* r15_1 = arg3 + 0x10
    int32_t i
    
    do
        sub_140597df0(result, &r15_1[-2])
        
        if (&result[2] != r15_1)
            int32_t j_3 = result[3].d
            
            if (j_3 != 0)
                int64_t* rbx_2 = result[2] + 0x10
                int32_t j
                
                do
                    int64_t rcx_1 = *rbx_2
                    
                    if (rcx_1 != 0)
                        sub_140a74f90(rcx_1)
                    
                    rbx_2 = &rbx_2[7]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = r15_1[1].d
            void* rdi_1 = *r15_1
            int32_t r8 = *(result + 0x1c)
            result[3].d = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_140874c00(&result[2], j_2, r8)
                int64_t* rbx_3 = result[2]
                
                if (j_2 != 0)
                    void* rdi_2 = rdi_1 + 8
                    int32_t j_1
                    
                    do
                        *rbx_3 = *(rdi_2 - 8)
                        rbx_3[1].d = *rdi_2
                        rbx_3[2] = 0
                        int32_t rsi_2 = *(rdi_2 + 0x10)
                        int64_t r12_1 = *(rdi_2 + 8)
                        rbx_3[3].d = rsi_2
                        
                        if (rsi_2 != 0)
                            sub_1405a4c70(&rbx_3[2], rsi_2, 0)
                            memcpy(rbx_3[2], r12_1, rsi_2 * 2)
                        else
                            *(rbx_3 + 0x1c) = 0
                        
                        rbx_3[4].d = *(rdi_2 + 0x18)
                        *(rbx_3 + 0x24) = *(rdi_2 + 0x1c)
                        rbx_3[5].d = *(rdi_2 + 0x20)
                        *(rbx_3 + 0x2c) = *(rdi_2 + 0x24)
                        rbx_3[6].d = *(rdi_2 + 0x28)
                        int32_t rax_8 = *(rdi_2 + 0x2c)
                        rdi_2 += 0x38
                        *(rbx_3 + 0x34) = rax_8
                        rbx_3 = &rbx_3[7]
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
                    i_1 = i_2
            else
                *(result + 0x1c) = 0
        
        result[4].d = r15_1[2].d
        *(result + 0x24) = *(r15_1 + 0x14)
        result[5].d = r15_1[3].d
        int32_t rax_12 = *(r15_1 + 0x1c)
        r15_1 = &r15_1[6]
        i = i_1
        i_1 -= 1
        *(result + 0x2c) = rax_12
        result = &result[6]
        i_2 = i_1
    while (i != 1)

result.b = 1
return result
