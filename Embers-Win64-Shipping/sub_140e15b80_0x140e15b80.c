// 函数: sub_140e15b80
// 地址: 0x140e15b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 8))(arg1, arg3)
*arg2 = 0
arg2[1] = 0

if (rax_1 != 0)
    int64_t* var_38
    
    if (*(rax_1 + 0x20) == 0)
        int64_t* rax_2 = j_sub_140a82f30(8)
        int64_t* rdi_1 = rax_2
        
        if (rax_2 == 0)
            rdi_1 = nullptr
        else
            *rax_2 = rax_1
        
        void*** rax_3 = j_sub_140a82f30(0x18)
        void*** rbx_1 = rax_3
        
        if (rax_3 == 0)
            rbx_1 = nullptr
        else
            rax_3[1].d = 1
            *(rax_3 + 0xc) = 1
            *rbx_1 = &data_142ecd2e8
            rbx_1[2] = rdi_1
        
        var_38 = rdi_1
        void*** var_30_1 = rbx_1
        
        if (rax_1 + 0x20 == &var_38)
        label_140e15c76:
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*rbx_1)[1](rbx_1, 1)
        else
            *(rax_1 + 0x20) = rdi_1
            int64_t* rdi_2 = *(rax_1 + 0x28)
            var_38 = nullptr
            
            if (rbx_1 == rdi_2)
                goto label_140e15c76
            
            void*** var_30_2 = nullptr
            *(rax_1 + 0x28) = rbx_1
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp5_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
                
                rbx_1 = var_30_2
                goto label_140e15c76
    
    int64_t* rbx_2 = *(rax_1 + 0x28)
    var_38 = *(rax_1 + 0x20)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    if (&var_38 != arg2)
        arg4 = var_38.o
        var_38.o = *arg2
        *arg2 = arg4
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            int64_t r8 = *rbx_2
            (*r8)(rbx_2, arg4, r8)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                int64_t r8_1 = *rbx_2
                (*(r8_1 + 8))(rbx_2, 1, r8_1)

return arg2
