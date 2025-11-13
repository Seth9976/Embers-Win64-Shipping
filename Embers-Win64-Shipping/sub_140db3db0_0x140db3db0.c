// 函数: sub_140db3db0
// 地址: 0x140db3db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t result = sub_140d9bab0(arg3)
void* r10 = *arg4

if (*(r10 + 8) != 0 && not(0f f== *(arg3 + 0x14)) && not(0f f== arg3[3].d))
    char rax_1
    rax_1, result = sub_140dbe040(arg1)
    
    if (rax_1 == 0)
        if (0f f!= *(arg6 + 0xc))
        label_140db3e4d:
            void* rax_2 = sub_140d99610(arg1)
            void*** rbx_1
            
            if ((*(rax_2 + 0x50) & 1) == 0)
                rbx_1 = (*(arg1 + 0x18) + 7) & 0xfffffffffffffff8
                void* rax_4 = &rbx_1[7]
                
                if (rax_4 u> *(arg1 + 0x20))
                    sub_140b0e3d0(arg1 + 0x18, 0x40)
                    rbx_1 = (*(arg1 + 0x18) + 7) & 0xfffffffffffffff8
                    rax_4 = &rbx_1[7]
                
                *(arg1 + 0x18) = rax_4
                rbx_1[1] = 0
                rbx_1[2] = 0
                rbx_1[5] = 0
                rbx_1[6] = 0
                *rbx_1 = &data_142ec2828
                rbx_1[3] = 0
                rbx_1[4] = 0
            else
                void*** rax_3 = j_sub_140a82f30(0x38)
                rbx_1 = rax_3
                
                if (rax_3 == 0)
                    rbx_1 = rax_3
                else
                    *rax_3 = &data_142ec2828
                    rbx_1[3] = 0
                    rbx_1[4] = 0
            
            *rax_2 = rbx_1
            *(rbx_1 + 8) = *arg6
            int64_t* rdi_1 = arg4[1]
            
            if (rdi_1 != 0)
                rdi_1[1].d += 1
            
            int64_t var_50 = *arg4
            int64_t* rsi_2 = rdi_1
            
            if (rdi_1 != 0)
                rdi_1[1].d += 1
            
            if (&var_50 != &rbx_1[3])
                var_50.o = *(rbx_1 + 0x18)
                rsi_2 = rdi_1
                *(rbx_1 + 0x18) = var_50.o
            
            if (rsi_2 != 0)
                rsi_2[1].d -= 1
                
                if (rsi_2[1].d == 1)
                    (**rsi_2)(rsi_2)
                    int32_t temp2_1 = *(rsi_2 + 0xc)
                    *(rsi_2 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rsi_2 + 8))(rsi_2, 1)
            
            *(rbx_1 + 0x28) = *arg7
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp3_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            return sub_140db26f0(rax_2, arg1, 3, arg2, arg3, arg5)
        
        if (*(r10 + 0x20) != 0 && not(0f f== *(arg7 + 0xc)))
            goto label_140db3e4d

return result
