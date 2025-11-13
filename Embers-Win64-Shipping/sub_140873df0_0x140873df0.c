// 函数: sub_140873df0
// 地址: 0x140873df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r12 = arg2

if (arg4 != 0)
    int64_t* rbp_1 = arg3 + 0x10
    int32_t i
    
    do
        int64_t* r15_1 = r12
        r12 = &r12[8]
        
        if (r15_1 != &rbp_1[-2])
            int32_t j_4 = r15_1[1].d
            
            if (j_4 != 0)
                int64_t* rbx_2 = *r15_1 + 0x18
                int32_t j
                
                do
                    int64_t rcx = *rbx_2
                    
                    if (rcx != 0)
                        sub_140a74f90(rcx)
                    
                    rbx_2 = &rbx_2[5]
                    j = j_4
                    j_4 -= 1
                while (j != 1)
            
            sub_1406f3c20(r15_1, rbp_1[-2], rbp_1[-1].d, *(r15_1 + 0xc), 0)
        
        if (&r15_1[2] != rbp_1)
            int32_t j_5 = r15_1[3].d
            
            if (j_5 != 0)
                void* rbx_4 = r15_1[2] + 0x28
                int32_t j_1
                
                do
                    int64_t rcx_2 = *(rbx_4 + 0x10)
                    
                    if (rcx_2 != 0)
                        sub_140a74f90(rcx_2)
                    
                    int64_t rcx_3 = *rbx_4
                    
                    if (rcx_3 != 0)
                        sub_140a74f90(rcx_3)
                    
                    int64_t rcx_4 = *(rbx_4 - 0x10)
                    
                    if (rcx_4 != 0)
                        sub_140a74f90(rcx_4)
                    
                    int64_t rcx_5 = *(rbx_4 - 0x20)
                    
                    if (rcx_5 != 0)
                        sub_140a74f90(rcx_5)
                    
                    rbx_4 += 0x48
                    j_1 = j_5
                    j_5 -= 1
                while (j_1 != 1)
            
            int32_t j_3 = rbp_1[1].d
            void* rbx_5 = *rbp_1
            int32_t r8_1 = *(r15_1 + 0x1c)
            r15_1[3].d = j_3
            
            if (j_3 != 0 || r8_1 != 0)
                sub_140809010(&r15_1[2], j_3, r8_1)
                int32_t* rdi_1 = r15_1[2]
                
                if (j_3 != 0)
                    void* rbx_6 = rbx_5 + 8
                    int32_t j_2
                    
                    do
                        *rdi_1 = *(rbx_6 - 8)
                        rdi_1[1] = *(rbx_6 - 4)
                        sub_1407e35b0(&rdi_1[2], rbx_6)
                        rbx_6 += 0x48
                        rdi_1 = &rdi_1[0x12]
                        j_2 = j_3
                        j_3 -= 1
                    while (j_2 != 1)
            else
                *(r15_1 + 0x1c) = j_3
        
        r15_1[4].d = rbp_1[2].d
        *(r15_1 + 0x24) = *(rbp_1 + 0x14)
        r15_1[5].d ^= (rbp_1[3].d ^ r15_1[5].d) & 1
        *(r15_1 + 0x2c) = *(rbp_1 + 0x1c)
        *(r15_1 + 0x34) = *(rbp_1 + 0x24)
        char rax = rbp_1[5].b
        rbp_1 = &rbp_1[8]
        r15_1[7].b = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
