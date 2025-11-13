// 函数: sub_140e18420
// 地址: 0x140e18420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const r14 = arg2

if (arg2 == 0)
label_140e18519:
    *arg1 = 0
    arg1[1] = 0
else
    while (true)
        int64_t* rbx_1 = *(r14 + 0x228)
        void* rbp_3 = &rbx_1[sx.q(*(r14 + 0x230)) * 2]
        int64_t* rbx_2
        
        if (rbx_1 == rbp_3)
        label_140e18495:
            rbx_2 = nullptr
        else
            while (true)
                int64_t* rdi_1 = *rbx_1
                int64_t rsi_1 = *rdi_1
                sub_140e17a40()
                
                if ((*(rsi_1 + 8))(rdi_1, &data_143e29110) != 0)
                    break
                
                rbx_1 = &rbx_1[2]
                
                if (rbx_1 == rbp_3)
                    goto label_140e18495
            
            void* rdi_3 = *rbx_1
            rbx_2 = rbx_1[1]
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
                
                if (rbx_2 != 0)
                    int32_t rax_9 = rbx_2[1].d
                    rbx_2[1].d = rax_9
                    
                    if (rax_9 == 0)
                        (**rbx_2)(rbx_2)
                        int32_t temp3_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
            
            if (rdi_3 != 0 && sub_140d3c6e0(rdi_3 + 0x20) != 0)
                *arg1 = rdi_3
                arg1[1] = rbx_2
                break
        
        void* rcx_1 = r14 + 0x268
        r14 = nullptr
        int64_t* rdi_2 = *(rcx_1 + 8)
        
        if (rdi_2 != 0)
            int32_t rax_2 = rdi_2[1].d
            
            if (rax_2 == 0)
                rdi_2 = nullptr
            label_140e184c2:
                
                if (rdi_2 != 0)
                    rdi_2[1].d -= 1
                    
                    if (rdi_2[1].d == 1)
                        (**rdi_2)(rdi_2)
                        int32_t temp4_1 = *(rdi_2 + 0xc)
                        *(rdi_2 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rdi_2 + 8))(rdi_2, 1)
            else
                rdi_2[1].d = rax_2 + 1
                
                if (rdi_2 != 0)
                    r14 = *rcx_1
                    goto label_140e184c2
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp1_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        if (r14 == 0)
            goto label_140e18519

return arg1
