// 函数: sub_14095ae30
// 地址: 0x14095ae30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = 0
int32_t arg_8 = 0
int64_t* result

if (arg1[0x49] != 0)
    int64_t rax_1 = (*(*arg1 + 0x150))()
    int64_t* rcx = arg1[0x49]
    int64_t r8_1 = *rcx
    int64_t arg_18
    (*(r8_1 + 0x2a8))(rcx, &arg_18, r8_1)
    arg_8.q = 0
    int64_t* var_38
    sub_1409633d0(&var_38, rax_1, 0)
    int64_t* rcx_2 = var_38
    int64_t var_28
    int64_t rbx_1
    
    if (rcx_2 == 0)
        rbx_1.b = 0
    else
        result = (*(*rcx_2 + 0x20))(rcx_2, arg_18)
        
        if (result == 0)
            rbx_1.b = 0
        else
            int64_t* rcx_3 = result[0x13]
            
            if (rcx_3 == 0 || arg2[1].d s<= 1)
                rbx_1.b = 0
            else
                int64_t* rax_4 = (*(*rcx_3 + 0x38))(rcx_3)
                int64_t r8_2 = *rax_4
                int16_t** rax_5 = (*(r8_2 + 0x30))(rax_4, &var_28, r8_2)
                int16_t* const rcx_5 = &data_142d40450
                int16_t* rdx_4
                
                if (arg2[1].d == 0)
                    rdx_4 = &data_142d40450
                else
                    rdx_4 = *arg2
                
                if (rax_5[1].d != 0)
                    rcx_5 = *rax_5
                
                rdi = 1
                
                if (sub_140a54510(rcx_5, rdx_4).d != 0)
                    rbx_1.b = 0
                else
                    rbx_1 = 1
    
    if ((rdi & 1) != 0)
        int64_t rcx_6 = var_28
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
    
    int64_t* var_30
    
    if (rbx_1.b != 0)
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t rdi_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*var_30 + 8))(var_30, zx.q(rdi_1))
        
        result.b = 1
        return result
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t rdi_2 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*var_30 + 8))(var_30, zx.q(rdi_2))

result.b = 0
return result
