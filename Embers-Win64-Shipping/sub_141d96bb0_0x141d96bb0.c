// 函数: sub_141d96bb0
// 地址: 0x141d96bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b0
sub_141d9ef80(*arg1, &var_b0, &arg1[1])
char result
int512_t zmm0
result, zmm0 = sub_140b16090(&var_b0)

if (result != 0)
    int64_t* rcx_2 = *arg1
    zmm0.o = zx.o(0)
    int32_t var_c8 = 6
    int32_t var_50_1 = 0xffffffff
    int64_t var_c0_1 = 0
    int64_t var_b8_1 = 0
    int64_t var_98 = 0
    int32_t var_90_1 = 0
    uint64_t var_88 = 0
    int64_t var_80
    __builtin_memset(&var_80, 0, 0x1c)
    int64_t var_60_1 = 0
    int64_t var_58_1 = 0
    int64_t var_48
    __builtin_memset(&var_48, 0, 0x40)
    int64_t* var_d8
    (*(*rcx_2 + 0x1d8))(zmm0, &var_d8, &var_b0)
    int64_t* rcx_3 = var_d8
    int64_t* var_d0
    
    if (rcx_3 == 0)
    label_141d96d6a:
        
        if (var_d0 != 0)
            var_d0[1].d -= 1
            
            if (var_d0[1].d == 1)
                (**var_d0)(var_d0)
                int32_t temp1_1 = *(var_d0 + 0xc)
                *(var_d0 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_d0 + 8))(var_d0, 1)
    else
        if ((*(*rcx_3 + 0x28))(rcx_3) s<= 0)
            goto label_141d96d6a
        
        char rax_3
        int512_t zmm1_1
        rax_3, zmm1_1 = sub_141da1270(*arg1, var_d8, &var_98, &var_c8, 0)
        
        if (rax_3 == 0 || var_c8 u< 1)
            goto label_141d96d6a
        
        if (var_d0 != 0)
            var_d0[1].d -= 1
            
            if (var_d0[1].d == 1)
                (**var_d0)(var_d0)
                int32_t temp3_1 = *(var_d0 + 0xc)
                *(var_d0 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_d0 + 8))(var_d0, 1)
        
        sub_140597df0(&var_88, &arg1[3])
        int64_t* rcx_8 = *arg1
        (*(*rcx_8 + 0x1e0))(rcx_8, &var_d8, &var_b0)
        int64_t* rcx_9 = var_d8
        
        if (rcx_9 == 0)
            goto label_141d96d6a
        
        if ((*(*rcx_9 + 0x28))(rcx_9) s<= 0)
            goto label_141d96d6a
        
        if (sub_141da3b50(*arg1, var_d8, &var_98, &var_c8, zmm1_1) == 0)
            goto label_141d96d6a
        
        if (var_d0 != 0)
            var_d0[1].d -= 1
            
            if (var_d0[1].d == 1)
                (**var_d0)(var_d0)
                int32_t temp5_1 = *(var_d0 + 0xc)
                *(var_d0 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_d0 + 8))(var_d0, 1)
        
        *(arg2 + 8) = 0
    int64_t var_18
    
    if (var_18 != 0)
        sub_140a74f90(var_18)
    
    int64_t var_28
    sub_141d94e70(&var_28)
    int64_t var_38
    result = sub_141d94e70(&var_38)
    int64_t rcx_18 = var_48
    
    if (rcx_18 != 0)
        result = sub_140a74f90(rcx_18)
    
    if (var_60_1 != 0)
        result = sub_140a74f90(var_60_1)
    
    uint64_t rcx_20 = var_88
    
    if (rcx_20 != 0)
        result = sub_140a74f90(rcx_20)
    
    if (var_c0_1 != 0)
        result = sub_140a74f90(var_c0_1)
else
    *(arg2 + 8) = 2

int64_t rcx_22 = var_b0

if (rcx_22 == 0)
    return result

return sub_140a74f90(rcx_22)
