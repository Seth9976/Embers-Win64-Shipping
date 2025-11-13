// 函数: sub_140ec2aa0
// 地址: 0x140ec2aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = 1
int64_t* i = *(arg1 + 0x140)
void* rcx_2 = &i[sx.q(*(arg1 + 0x148)) * 2]
char arg_8 = 1

for (; i != rcx_2; i = &i[2])
    if (i[1].d != 0 && *i != 0)
        *(arg1 + 0x154) += 1
        int32_t rax_1 = *(arg1 + 0x148)
        int32_t rcx_3 = *(arg1 + 0x154)
        int64_t rbp
        rbp.b = 0
        int64_t rdi_1 = sx.q(rax_1 - 1)
        
        if (rax_1 - 1 s>= 0)
            int64_t rbx_2 = rdi_1 << 4
            int64_t temp1_1
            
            do
                int64_t rax_3 = *(arg1 + 0x140)
                
                if (*(rbx_2 + rax_3 + 8) == 0)
                    rbp.b = 1
                else
                    int64_t* rcx_4 = *(rbx_2 + rax_3)
                    
                    if (rcx_4 == 0)
                        rbp.b = 1
                    else
                        int64_t zmm0 = *arg2
                        int32_t var_20_1 = arg2[1].d
                        int64_t rax_5 = *rcx_4
                        int64_t var_28 = zmm0
                        
                        if ((*(rax_5 + 0x50))(zmm0, &var_28, &arg_8) == 0)
                            rbp.b = 1
                
                rbx_2 -= 0x10
                temp1_1 = rdi_1
                rdi_1 -= 1
            while (temp1_1 - 1 s>= 0)
            rcx_3 = *(arg1 + 0x154)
            r8 = arg_8
        
        *(arg1 + 0x154) = rcx_3 - 1
        
        if (rbp.b == 0)
            break
        
        sub_140599630(arg1 + 0x140, 0)
        return zx.q(arg_8)

return zx.q(r8)
