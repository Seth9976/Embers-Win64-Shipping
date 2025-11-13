// 函数: sub_140d9c7e0
// 地址: 0x140d9c7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
int64_t result = (*(*arg1 + 0x28))(arg1, &var_38)

if (var_38 != 0)
    uint128_t var_28
    int64_t** rax_1 = sub_140e1bd30(&var_28)
    int64_t* rbx_1 = rax_1[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    void var_18
    
    if (&arg1[4] == &var_18)
    label_140d9c862:
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    else
        arg1[4] = *rax_1
        int64_t* rdi_1 = arg1[5]
        
        if (rbx_1 == rdi_1)
            goto label_140d9c862
        
        arg1[5] = rbx_1
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp7_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp6_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_20 + 8))(var_20, 1)
    
    uint128_t zmm0_1 = var_38.o
    var_28 = zmm0_1
    void* rax_7 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_7 != 0)
        *(rax_7 + 8) += 1
    
    sub_140e23de0(arg1[4], &var_28)
    int64_t* rcx_8 = data_143e20d08
    var_28.q = arg1[4]
    void* rax_9 = arg1[5]
    void* var_20_1 = rax_9
    
    if (rax_9 != 0)
        *(rax_9 + 8) += 1
    
    int64_t r9_1
    r9_1.b = 1
    result = (*(*rcx_8 + 0x10))(rcx_8, &var_18, &var_28, r9_1)
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            result = (**var_10)(var_10)
            int32_t temp9_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp9_1 == 1)
                result = (*(*var_10 + 8))(var_10, 1)

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        result = (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_30 + 8))(var_30, 1)

return result
