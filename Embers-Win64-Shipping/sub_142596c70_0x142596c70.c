// 函数: sub_142596c70
// 地址: 0x142596c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r12 = arg2

if (arg4 != 0)
    void** rbp_1 = arg3 + 0x10
    int32_t i
    
    do
        int64_t* r14_1 = r12
        void* r15_1 = &rbp_1[-2]
        r12 = &r12[4]
        
        if (r14_1 != r15_1)
            int32_t j_5 = r14_1[1].d
            void*** rbx_1 = *r14_1
            
            if (j_5 != 0)
                int32_t j
                
                do
                    *rbx_1 = &data_142da8048
                    sub_140a1d5c0(&rbx_1[3])
                    sub_140a1d5c0(&rbx_1[1])
                    rbx_1 = &rbx_1[9]
                    j = j_5
                    j_5 -= 1
                while (j != 1)
                r15_1 = &rbp_1[-2]
            
            int32_t j_3 = rbp_1[-1].d
            void* rdi_1 = *r15_1
            int32_t r8 = *(r14_1 + 0xc)
            r14_1[1].d = j_3
            
            if (j_3 != 0 || r8 != 0)
                sub_140809010(r14_1, j_3, r8)
                void*** rbx_2 = *r14_1
                
                if (j_3 != 0)
                    int32_t j_1
                    
                    do
                        sub_142596160(rbx_2, rdi_1)
                        rbx_2 = &rbx_2[9]
                        rdi_1 += 0x48
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
            else
                *(r14_1 + 0xc) = j_3
        
        void* r14_2 = &r14_1[2]
        
        if (r14_2 != rbp_1)
            int32_t j_4 = *(r14_2 + 8)
            void* rdi_2 = *r14_2
            
            if (j_4 != 0)
                void* rbx_3 = rdi_2 + 0x38
                int32_t j_2
                
                do
                    *(rbx_3 - 8) = &data_142da8048
                    sub_140a1d5c0(rbx_3 + 0x10)
                    sub_140a1d5c0(rbx_3)
                    int64_t rcx_6 = *(rbx_3 - 0x18)
                    
                    if (rcx_6 != 0)
                        sub_140a74f90(rcx_6)
                    
                    int64_t rcx_7 = *(rbx_3 - 0x28)
                    
                    if (rcx_7 != 0)
                        sub_140a74f90(rcx_7)
                    
                    int64_t rcx_8 = *rdi_2
                    
                    if (rcx_8 != 0)
                        sub_140a74f90(rcx_8)
                    
                    rdi_2 += 0x78
                    rbx_3 += 0x78
                    j_2 = j_4
                    j_4 -= 1
                while (j_2 != 1)
            
            sub_142595f60(r14_2, *rbp_1, rbp_1[1].d, *(r14_2 + 0xc), 0)
        
        rbp_1 = &rbp_1[4]
        i = i_1
        i_1 -= 1
    while (i != 1)

void*** result
result.b = 1
return result
