// 函数: sub_1408bc4b0
// 地址: 0x1408bc4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t j = 0
int32_t i = 0

if (*(arg1 + 0x18) s<= 0)
    return 

void* r15_1 = nullptr

do
    int64_t rbx_1 = *(arg1 + 0x10)
    int64_t* rdi_1 = r15_1 + rbx_1
    int32_t arg_8
    sub_1408be510(rdi_1, &arg_8, arg2)
    int64_t rax = sx.q(arg_8)
    
    if (rax.d != 0xffffffff)
        int64_t rcx_1 = *rdi_1 + rax * 0x18
        int64_t* r14_1 = rcx_1 + 8
        
        if (rcx_1 == 0)
            r14_1 = nullptr
        
        if (r14_1 != 0)
            int64_t* r14_2 = *r14_1
            sub_1408c2380(sx.q(i) * 0x50 + rbx_1, arg2)
            
            if (r14_2 != 0)
                if (r14_2[1].d s> 0)
                    int64_t* rdi_2 = nullptr
                    
                    do
                        int64_t* rbx_2 = *(rdi_2 + *r14_2)
                        
                        if (rbx_2 != 0)
                            int64_t* rcx_5 = *rbx_2
                            
                            if (rcx_5 != 0)
                                if (rcx_5[-1] == 0)
                                    j_sub_140a74f90(&rcx_5[-1])
                                else
                                    (**rcx_5)(rcx_5, 3)
                            
                            j_sub_140a74f90(rbx_2)
                        
                        j += 1
                        rdi_2 = &rdi_2[1]
                    while (j s< r14_2[1].d)
                
                int64_t rcx_8 = *r14_2
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                j_sub_140a74f90(r14_2)
                j = 0
    
    i += 1
    r15_1 += 0x50
while (i s< *(arg1 + 0x18))
