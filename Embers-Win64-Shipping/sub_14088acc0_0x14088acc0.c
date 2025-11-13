// 函数: sub_14088acc0
// 地址: 0x14088acc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
uint64_t* result = arg2

if (arg4 != 0)
    int64_t* r12_1 = arg3 + 0x20
    int32_t i
    
    do
        sub_140597df0(result, &r12_1[-4])
        sub_140597df0(&result[2], &r12_1[-2])
        
        if (&result[4] != r12_1)
            int32_t j_3 = result[5].d
            
            if (j_3 != 0)
                void* rbx_3 = result[4] + 8
                int32_t j
                
                do
                    int64_t rcx_2 = *(rbx_3 + 0x10)
                    
                    if (rcx_2 != 0)
                        sub_140a74f90(rcx_2)
                    
                    int64_t rcx_3 = *rbx_3
                    
                    if (rcx_3 != 0)
                        sub_140a74f90(rcx_3)
                    
                    rbx_3 += 0x28
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = r12_1[1].d
            void* rdi_1 = *r12_1
            int32_t r8 = *(result + 0x2c)
            result[5].d = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_1407751d0(&result[4], j_2, r8)
                int64_t* rbx_4 = result[4]
                
                if (j_2 != 0)
                    void* rdi_2 = rdi_1 + 8
                    int32_t j_1
                    
                    do
                        *rbx_4 = *(rdi_2 - 8)
                        sub_140596d10(&rbx_4[1], rdi_2)
                        rbx_4[3] = 0
                        int64_t rbp_1 = sx.q(*(rdi_2 + 0x18))
                        int64_t r15_1 = *(rdi_2 + 0x10)
                        rbx_4[4].d = rbp_1.d
                        
                        if (rbp_1.d != 0)
                            sub_1405a4be0(&rbx_4[3], rbp_1.d, 0)
                            memcpy(rbx_4[3], r15_1, (rbp_1 << 4).d)
                        else
                            *(rbx_4 + 0x24) = 0
                        
                        rbx_4 = &rbx_4[5]
                        rdi_2 += 0x28
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                *(result + 0x2c) = 0
        
        result = &result[6]
        r12_1 = &r12_1[6]
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
