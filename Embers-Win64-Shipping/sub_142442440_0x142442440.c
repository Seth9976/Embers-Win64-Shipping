// 函数: sub_142442440
// 地址: 0x142442440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xa].b == 0)
    return 

arg1[0xa].b = 0
int64_t rbx_1 = arg1[9]

if (rbx_1 != 0)
    int32_t i = 0
    void* r15_1 = *arg1
    
    if (*(r15_1 + 0x2f0) s> 0)
        int64_t r14_1 = 0
        
        do
            int64_t* rdi_2 = *(r15_1 + 0x2e8) + r14_1
            
            if (rdi_2[1].d != 0)
                int64_t* rcx = *rdi_2
                void arg_8
                
                if (rcx != 0 && *(*(*rcx + 0x30))(rcx, &arg_8) == rbx_1)
                    if (rdi_2[1].d != 0)
                        int64_t* rcx_1 = *rdi_2
                        
                        if (rcx_1 != 0)
                            (*(*rcx_1 + 0x38))(rcx_1, 0)
                            int64_t rcx_2 = *rdi_2
                            
                            if (rcx_2 != 0)
                                *rdi_2 = sub_140a84c80(rcx_2, 0, 0)
                            
                            rdi_2[1].d = 0
                    
                    sub_140599630(r15_1 + 0x2e8, 0)
                    break
            
            i += 1
            r14_1 += 0x10
        while (i s< *(r15_1 + 0x2f0))

int64_t rcx_4 = arg1[6]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[1]

if (rcx_5 != 0)
    return sub_140a74f90(rcx_5) __tailcall
