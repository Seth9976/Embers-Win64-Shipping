// 函数: sub_140e11ac0
// 地址: 0x140e11ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 9) == 0)
    *arg2 = 0
    arg2[1] = 0
else
    int64_t* rcx = data_143e20d08
    void* var_38
    uint128_t var_28
    sub_140da2300(&var_28, (*(*rcx + 0x38))(rcx, &var_38), arg3)
    int32_t i_2
    int32_t i_1 = i_2
    
    if (i_1 != 0)
        int64_t* rdi_2 = var_38 + 8
        int32_t i
        
        do
            int64_t* rbx_1 = *rdi_2
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            rdi_2 = &rdi_2[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    void* rcx_4 = var_38
    
    if (rcx_4 != 0)
        arg4 = sub_140a74f90(rcx_4)
    
    uint128_t zmm0_1 = var_28
    var_38.o = zmm0_1
    void* rax_5 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_5 != 0)
        *(rax_5 + 8) += 1
    
    void var_18
    int64_t* rax_6 = sub_140e118d0(&var_18, &var_38, arg4)
    *arg2 = *rax_6
    void* rcx_7 = rax_6[1]
    arg2[1] = rcx_7
    
    if (rcx_7 != 0)
        *(rcx_7 + 8) += 1
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp5_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_10 + 8))(var_10, 1)
    
    int64_t* rbx_3 = i_2.q
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp7_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    int64_t* rbx_4 = var_28:8.q
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp8_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)

return arg2
