// 函数: sub_142307650
// 地址: 0x142307650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
int64_t* r14 = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rdi_1 = *r14
        
        if (rdi_1 != 0)
            sub_140bc0410(&rdi_1[0x7d])
            int64_t rcx_1 = rdi_1[0x7a]
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            int64_t rcx_2 = rdi_1[0x78]
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            sub_141e38b40(&rdi_1[0x60])
            sub_142307870(&rdi_1[0x41])
            sub_1422b54d0(&rdi_1[0x38])
            sub_1422b5540(&rdi_1[0x27])
            sub_142289b70(&rdi_1[0x1f])
            sub_142289c80(&rdi_1[0x17])
            sub_1422b5620(&rdi_1[6])
            sub_142289bd0(&rdi_1[4])
            sub_142289bd0(&rdi_1[2])
            int32_t j_1 = rdi_1[1].d
            void* rcx_12 = *rdi_1
            
            if (j_1 != 0)
                int64_t* rbx_1 = rcx_12 + 0x28
                int32_t j
                
                do
                    sub_1423077e0(&rbx_1[6])
                    int64_t rcx_14 = *rbx_1
                    
                    if (rcx_14 != 0)
                        sub_140a74f90(rcx_14)
                    
                    int64_t rcx_15 = rbx_1[-2]
                    
                    if (rcx_15 != 0)
                        sub_140a74f90(rcx_15)
                    
                    rbx_1 = &rbx_1[0x1d]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                rcx_12 = *rdi_1
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            j_sub_140a74f90(rdi_1)
        
        r14 = &r14[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_140638c50(arg1, 0)

int64_t rcx_18 = *arg1

if (rcx_18 == 0)
    return 

return sub_140a74f90(rcx_18) __tailcall
