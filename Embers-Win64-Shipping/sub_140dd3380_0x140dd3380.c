// 函数: sub_140dd3380
// 地址: 0x140dd3380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x228)
void* rbp_2 = &rbx[sx.q(*(arg1 + 0x230)) * 2]

if (rbx == rbp_2)
label_140dd33e3:
    *arg2 = 0
    arg2[1] = 0
else
    while (true)
        int64_t* rdi_1 = *rbx
        int64_t rsi_1 = *rdi_1
        sub_140e17a40()
        
        if ((*(rsi_1 + 8))(rdi_1, &data_143e29110) != 0)
            int64_t* rbx_1 = rbx[1]
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            *arg2 = *rbx
            arg2[1] = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp1_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
            
            break
        
        rbx = &rbx[2]
        
        if (rbx == rbp_2)
            goto label_140dd33e3

return arg2
