// 函数: sub_1405a89d0
// 地址: 0x1405a89d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10
sub_141a52640(arg1, &arg_10)
int64_t rdx_1 = arg_10
*arg2 = rdx_1

if (sub_1405a8c30(arg3, rdx_1) == 0)
    void** var_38
    sub_141a312f0(&var_38)
    void* var_48
    int64_t* rax_1 = sub_140596d10(&var_48, arg1 + 0x28)
    int64_t var_58_1 = *(arg1 + 0x40)
    sub_141a54490(&var_38, *(arg1 + 0x20), rax_1, *(arg1 + 0x38))
    void*** rax_3 = j_sub_140a82f30(0x60)
    void*** rbx_1 = rax_3
    int64_t* var_28
    
    if (rax_3 == 0)
        rbx_1 = nullptr
    else
        rax_3[1].d = 1
        *(rax_3 + 0xc) = 1
        *rbx_1 = &data_142d4cbc0
        __builtin_memset(&rbx_1[3], 0, 0x20)
        int64_t var_20
        rbx_1[7] = var_20
        rbx_1[2] = &data_142d4cab0
        rbx_1[8] = &data_142d4c6c0
        int64_t var_30
        rbx_1[9] = var_30
        rbx_1[0xa] = var_28
        
        if (var_28 != 0)
            var_28[1].d += 1
        
        rbx_1[0xb] = var_20
    
    int64_t* rdi_1 = &rbx_1[3]
    
    if (rbx_1 == -0x10)
        rdi_1 = nullptr
    
    if (rdi_1 != 0)
        void* rax_8
        
        if (*rdi_1 != 0)
            rax_8 = rdi_1[1]
        
        if (*rdi_1 == 0 || rax_8 == 0 || *(rax_8 + 8) s<= 0)
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            *rdi_1 = &rbx_1[2]
            int64_t* rcx_4 = rdi_1[1]
            
            if (rbx_1 != rcx_4)
                if (rbx_1 != 0)
                    *(rbx_1 + 0xc) += 1
                    rcx_4 = rdi_1[1]
                
                if (rcx_4 != 0)
                    int32_t temp8_1 = *(rcx_4 + 0xc)
                    *(rcx_4 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rcx_4 + 8))(rcx_4, 1)
                
                rdi_1[1] = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp7_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*rbx_1)[1](rbx_1, 1)
    
    var_48 = &rbx_1[2]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t arg_20 = *arg2
    sub_1405a72d0(arg3, &arg_20, &var_48)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp4_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
    
    if (var_28 != 0)
        var_28[1].d -= 1
        
        if (var_28[1].d == 1)
            (**var_28)(var_28)
            int32_t temp6_1 = *(var_28 + 0xc)
            *(var_28 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_28 + 8))(var_28, 1)

return arg2
