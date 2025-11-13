// 函数: sub_14209b5b0
// 地址: 0x14209b5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1
uint64_t result = sub_140ce3290(arg1)
int32_t i = 0

if (rbx[6].d s> 0)
    int64_t rcx = 0
    int64_t arg_10 = 0
    
    do
        void* r14_2 = rbx[5] + rcx
        int32_t rsi_1 = *(r14_2 + 0x18)
        int32_t rsi_2 = rsi_1 - 1
        
        if (rsi_1 - 1 s>= 0)
            int64_t r12_1 = sx.q(rsi_2) * 0x38
            int64_t r15_1 = r12_1
            int64_t rbp_1 = sx.q(rsi_2 + 1) * 0x38
            int32_t temp3_1
            
            do
                int64_t* rdi_1 = *(r14_2 + 0x10)
                void* rbx_1 = *(rdi_1 + r12_1)
                
                if (rbx_1 == 0)
                label_14209b6c6:
                    int64_t rcx_5 = *(r15_1 + *(r14_2 + 0x10) + 0x10)
                    
                    if (rcx_5 != 0)
                        sub_140a74f90(rcx_5)
                    
                    int32_t rcx_8 = *(r14_2 + 0x18)
                    int32_t rax_10 = rcx_8 - rsi_2
                    
                    if (rax_10 != 1)
                        int64_t rcx_6 = *(r14_2 + 0x10)
                        memmove(rcx_6 + r15_1, rcx_6 + rbp_1, (rax_10 - 1) * 0x38)
                        rcx_8 = *(r14_2 + 0x18)
                    
                    *(r14_2 + 0x18) = rcx_8 - 1
                    result = sub_1407c4070(r14_2 + 0x10)
                else
                    void* rax_2 = sub_1424a0040()
                    void* rdx_1 = *(rbx_1 + 0x10)
                    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
                    
                    if (rax_3.d s<= *(rdx_1 + 0x38))
                        result = *(rdx_1 + 0x30)
                    
                    if (rax_3.d s<= *(rdx_1 + 0x38) && *(result + (rax_3 << 3)) == rax_2 + 0x30)
                    label_14209b6bc:
                        
                        if (rbx_1 == -0x28)
                            goto label_14209b6c6
                    else
                        rbx_1 = *(rdi_1 + r12_1)
                        
                        if (rbx_1 == 0)
                            goto label_14209b6c6
                        
                        void* rax_4 = sub_14249ef40()
                        void* rdx_2 = *(rbx_1 + 0x10)
                        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                        
                        if (rax_5.d s<= *(rdx_2 + 0x38))
                            result = *(rdx_2 + 0x30)
                        
                        if (rax_5.d s<= *(rdx_2 + 0x38) && *(result + (rax_5 << 3)) == rax_4 + 0x30)
                            goto label_14209b6bc
                        
                        rbx_1 = *(rdi_1 + r12_1)
                        
                        if (rbx_1 == 0)
                            goto label_14209b6c6
                        
                        void* rax_6 = sub_1424cde60()
                        void* rdx_3 = *(rbx_1 + 0x10)
                        int64_t rax_7 = sx.q(*(rax_6 + 0x38))
                        
                        if (rax_7.d s> *(rdx_3 + 0x38))
                            goto label_14209b6c6
                        
                        result = *(rdx_3 + 0x30)
                        
                        if (*(result + (rax_7 << 3)) != rax_6 + 0x30 || rbx_1 == -0x28)
                            goto label_14209b6c6
                
                rbp_1 -= 0x38
                r15_1 -= 0x38
                r12_1 -= 0x38
                temp3_1 = rsi_2
                rsi_2 -= 1
            while (temp3_1 - 1 s>= 0)
            rcx = arg_10
            rbx = arg1
        
        rcx += 0x30
        i += 1
        arg_10 = rcx
    while (i s< rbx[6].d)

return result
