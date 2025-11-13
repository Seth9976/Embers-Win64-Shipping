// 函数: sub_1425b03b0
// 地址: 0x1425b03b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r12 = arg2

if (arg4 != 0)
    int64_t* r15_1 = arg3 + 0x78
    int32_t i
    
    do
        void* rbx_1 = r12
        r12 += 0x88
        sub_140597df0(rbx_1 + 0x68, &r15_1[-2])
        
        if (rbx_1 + 0x78 != r15_1)
            int32_t j_3 = *(rbx_1 + 0x80)
            
            if (j_3 != 0)
                int64_t* rbx_3 = *(rbx_1 + 0x78) + 8
                int32_t j
                
                do
                    int64_t rcx_1 = *rbx_3
                    
                    if (rcx_1 != 0)
                        sub_140a74f90(rcx_1)
                    
                    rbx_3 = &rbx_3[3]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t j_2 = r15_1[1].d
            void* rbx_4 = *r15_1
            int32_t r8 = *(rbx_1 + 0x84)
            *(rbx_1 + 0x80) = j_2
            
            if (j_2 != 0 || r8 != 0)
                sub_140808f70(rbx_1 + 0x78, j_2, r8)
                void* rdi_1 = *(rbx_1 + 0x78)
                
                if (j_2 != 0)
                    int32_t j_1
                    
                    do
                        *rdi_1 = *rbx_4
                        sub_140596d10(rdi_1 + 8, rbx_4 + 8)
                        rdi_1 += 0x18
                        rbx_4 += 0x18
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            else
                *(rbx_1 + 0x84) = 0
        
        r15_1 = &r15_1[0x11]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
