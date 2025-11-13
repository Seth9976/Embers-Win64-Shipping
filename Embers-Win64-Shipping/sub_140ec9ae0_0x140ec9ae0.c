// 函数: sub_140ec9ae0
// 地址: 0x140ec9ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg4 + 0x70)

if (rdi == 0)
label_140ec9cc3:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int64_t rbx_1 = *rdi
    sub_140ec00f0()
    
    if ((*(rbx_1 + 0x58))(rdi, &data_143e29fe0) == 0)
        goto label_140ec9cc3
    
    int64_t* rbx_2 = *(arg4 + 0x78)
    int64_t rdi_1 = *(arg4 + 0x70)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp1_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (rdi_1 == 0)
        goto label_140ec9cc3
    
    int64_t* rbx_3 = *(arg1 + 0x2b0)
    int64_t var_48 = 0
    int64_t* var_40_1 = rbx_3
    
    if (rbx_3 != 0)
        int32_t rax_4 = rbx_3[1].d
        
        if (rax_4 != 0)
            rbx_3[1].d = rax_4 + 1
            rax_4.b = 1
        
        if (rax_4.b == 0)
            int64_t var_40_2 = 0
            rbx_3 = nullptr
        
        if (rbx_3 != 0)
            var_48 = *(arg1 + 0x2a8)
    
    int64_t* var_38
    sub_140ebe6a0(&var_38, &var_48, arg3, arg4)
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    int64_t* var_30
    int64_t* rbx_4 = var_30
    
    if (var_30 != 0)
        int32_t rax_8 = var_30[1].d
        
        if (rax_8 != 0)
            var_30[1].d = rax_8 + 1
            rax_8.b = 1
        
        if (rax_8.b == 0)
            rbx_4 = nullptr
    
    int64_t* rcx_6 = nullptr
    
    if (rbx_4 != 0)
        rcx_6 = var_38
    
    if (rcx_6 == 0)
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp7_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
        if (var_30 != 0)
            int32_t temp6_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_30 + 8))(var_30, 1)
        
        goto label_140ec9cc3
    
    int32_t var_28
    (*(*rcx_6 + 0x268))(rcx_6, arg2, zx.q(var_28), arg4)
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp9_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    if (var_30 != 0)
        int32_t temp8_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

return arg2
