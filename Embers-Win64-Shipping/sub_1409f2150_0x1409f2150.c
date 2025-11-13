// 函数: sub_1409f2150
// 地址: 0x1409f2150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int32_t* r12 = arg2

if (arg4 != 0)
    int64_t* r15_1 = arg3 + 8
    int32_t i
    
    do
        int32_t* rbp_1 = r12
        r12 = &r12[8]
        *rbp_1 = r15_1[-1].d
        
        if (&rbp_1[2] != r15_1)
            int32_t j_3 = rbp_1[4]
            
            if (j_3 != 0)
                int64_t* rbx_2 = *(rbp_1 + 8) + 8
                int32_t j
                
                do
                    int64_t rcx = *rbx_2
                    
                    if (rcx != 0)
                        sub_140a74f90(rcx)
                    
                    rbx_2 = &rbx_2[3]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = r15_1[1].d
            void* rbx_3 = *r15_1
            int32_t r8 = rbp_1[5]
            rbp_1[4] = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_140808f70(&rbp_1[2], j_2, r8)
                int32_t* rdi_1 = *(rbp_1 + 8)
                
                if (j_2 != 0)
                    void* rbx_4 = rbx_3 + 8
                    int32_t j_1
                    
                    do
                        *rdi_1 = *(rbx_4 - 8)
                        rdi_1[1] = *(rbx_4 - 4)
                        sub_1409aa000(&rdi_1[2], rbx_4)
                        rbx_4 += 0x18
                        rdi_1 = &rdi_1[6]
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                rbp_1[5] = j_2
        
        rbp_1[6] = r15_1[2].d
        char rax = *(r15_1 + 0x14)
        r15_1 = &r15_1[4]
        rbp_1[7].b = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
