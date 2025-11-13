// 函数: sub_141cb9090
// 地址: 0x141cb9090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = arg4
int32_t result = arg4
int64_t* r12 = arg3
int64_t* r13 = arg2

if (arg4 != 0)
    int32_t i
    
    do
        int64_t* rbp_1 = r13
        r13 = &r13[2]
        
        if (rbp_1 != r12)
            int32_t j_2 = rbp_1[1].d
            
            if (j_2 != 0)
                int64_t* rbx_2 = *rbp_1 + 0x18
                int32_t j
                
                do
                    sub_1408464b0(rbx_2)
                    rbx_2 = &rbx_2[5]
                    j = j_2
                    j_2 -= 1
                while (j != 1)
                result = result_1
            
            int32_t j_3 = r12[1].d
            void* r14_1 = *r12
            int32_t r8 = *(rbp_1 + 0xc)
            rbp_1[1].d = j_3
            
            if (j_3 != 0 || r8 != 0)
                sub_1407751d0(rbp_1, j_3, r8)
                int128_t* rbp_2 = *rbp_1
                
                if (j_3 != 0)
                    void* r14_2 = r14_1 + 0x10
                    int32_t j_1
                    
                    do
                        *rbp_2 = *(r14_2 - 0x10)
                        rbp_2[1].q = *r14_2
                        *(rbp_2 + 0x18) = 0
                        int32_t k_1 = *(r14_2 + 0x10)
                        int64_t* rdi_1 = *(r14_2 + 8)
                        rbp_2[2].d = k_1
                        
                        if (k_1 != 0)
                            sub_140808f70(rbp_2 + 0x18, k_1, 0)
                            int64_t* rbx_3 = *(rbp_2 + 0x18)
                            int32_t k
                            
                            do
                                *rbx_3 = *rdi_1
                                sub_140596d10(&rbx_3[1], &rdi_1[1])
                                rbx_3 = &rbx_3[3]
                                rdi_1 = &rdi_1[3]
                                k = k_1
                                k_1 -= 1
                            while (k != 1)
                        else
                            *(rbp_2 + 0x24) = 0
                        
                        rbp_2 += 0x28
                        r14_2 += 0x28
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
                
                result = result_1
            else
                *(rbp_1 + 0xc) = 0
        
        r12 = &r12[2]
        i = result
        result -= 1
        result_1 = result
    while (i != 1)

result.b = 1
return result
