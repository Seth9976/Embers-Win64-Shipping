// 函数: sub_141b3e660
// 地址: 0x141b3e660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r12 = arg2

if (arg4 != 0)
    int64_t* r15_1 = arg3 + 0x18
    int32_t i
    
    do
        void* rbp_1 = r12
        r12 += 0x88
        sub_14086c240(rbp_1 + 8, &r15_1[-2])
        
        if (rbp_1 + 0x18 != r15_1)
            int32_t j_3 = *(rbp_1 + 0x20)
            
            if (j_3 != 0)
                int64_t* rbx_2 = *(rbp_1 + 0x18) + 0x18
                int32_t j
                
                do
                    int64_t rcx_1 = *rbx_2
                    
                    if (rcx_1 != 0)
                        sub_140a74f90(rcx_1)
                    
                    rbx_2 = &rbx_2[5]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = r15_1[1].d
            int64_t* rbx_3 = *r15_1
            int32_t r8 = *(rbp_1 + 0x24)
            *(rbp_1 + 0x20) = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_1407751d0(rbp_1 + 0x18, j_2, r8)
                int64_t* rdi_1 = *(rbp_1 + 0x18)
                
                if (j_2 != 0)
                    int32_t j_1
                    
                    do
                        sub_141af73b0(rdi_1, rbx_3)
                        rdi_1 = &rdi_1[5]
                        rbx_3 = &rbx_3[5]
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                *(rbp_1 + 0x24) = j_2
        
        sub_141f98dc0(rbp_1 + 0x28)
        r15_1 = &r15_1[0x11]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
