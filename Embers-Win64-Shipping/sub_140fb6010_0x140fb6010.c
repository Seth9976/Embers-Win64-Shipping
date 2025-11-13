// 函数: sub_140fb6010
// 地址: 0x140fb6010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x4a8)

if (rbx == 0)
    return 

int64_t* rax = sub_140fb2490(rbx + 0x310)
int64_t rbx_1 = *(rbx + 0x358)

if (rbx_1 != 0)
    int32_t i = 0
    void* r15_1 = *rax
    
    if (*(r15_1 + 0x28) s> 0)
        int64_t r14_1 = 0
        
        do
            int64_t* rdi_2 = *(r15_1 + 0x20) + r14_1
            
            if (rdi_2[1].d != 0)
                int64_t* rcx_1 = *rdi_2
                void arg_8
                
                if (rcx_1 != 0 && *(*(*rcx_1 + 0x30))(rcx_1, &arg_8) == rbx_1)
                    if (rdi_2[1].d != 0)
                        int64_t* rcx_2 = *rdi_2
                        
                        if (rcx_2 != 0)
                            (*(*rcx_2 + 0x38))(rcx_2, 0)
                            int64_t rcx_3 = *rdi_2
                            
                            if (rcx_3 != 0)
                                *rdi_2 = sub_140a84c80(rcx_3, 0, 0)
                            
                            rdi_2[1].d = 0
                    
                    sub_140599630(r15_1 + 0x20, 0)
                    break
            
            i += 1
            r14_1 += 0x10
        while (i s< *(r15_1 + 0x28))

sub_140f9f800(*(arg1 + 0x4a8))
return sub_140fc1c90(*(arg1 + 0x4a8)) __tailcall
