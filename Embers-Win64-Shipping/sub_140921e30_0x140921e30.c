// 函数: sub_140921e30
// 地址: 0x140921e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u> 3)
    return 

int64_t rbx_1 = *arg3
void* r15_1 = arg1 + sx.q(arg2) * 0x18

if (rbx_1 != 0)
    int32_t i = 0
    
    if (*(r15_1 + 0x118) s> 0)
        int64_t r14_1 = 0
        
        do
            int64_t* rdi_2 = *(r15_1 + 0x110) + r14_1
            
            if (rdi_2[1].d != 0)
                int64_t* rcx = *rdi_2
                void arg_20
                
                if (rcx != 0 && *(*(*rcx + 0x30))(rcx, &arg_20) == rbx_1)
                    if (rdi_2[1].d != 0)
                        int64_t* rcx_1 = *rdi_2
                        
                        if (rcx_1 != 0)
                            (*(*rcx_1 + 0x38))(rcx_1, 0)
                            int64_t rcx_2 = *rdi_2
                            
                            if (rcx_2 != 0)
                                *rdi_2 = sub_140a84c80(rcx_2, 0, 0)
                            
                            rdi_2[1].d = 0
                    
                    sub_140599630(r15_1 + 0x110, 0)
                    break
            
            i += 1
            r14_1 += 0x10
        while (i s< *(r15_1 + 0x118))

*arg3 = 0
