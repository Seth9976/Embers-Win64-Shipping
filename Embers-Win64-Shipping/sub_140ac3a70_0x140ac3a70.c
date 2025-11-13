// 函数: sub_140ac3a70
// 地址: 0x140ac3a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(*arg2 + 8)
uint32_t result = zx.d(*(r14 + 0x28))
int64_t rcx_27

if ((result.b & 1) != 0)
    *(arg1 + 8) = 0
    void* rcx = *arg2
    int64_t var_88 = 0
    int32_t var_80_1 = 0
    int64_t var_98 = 0
    int32_t var_90_1 = 0
    int512_t zmm1 = sub_140a1d9d0(*(rcx + 8), &var_88, arg4)
    int512_t zmm1_1 = sub_140a1d9d0(*(*arg2 + 8), &var_98, zmm1)
    sub_140a1d9d0(*(*arg2 + 8), arg1 + 0x10, zmm1_1)
    int16_t* const var_58
    int32_t var_50
    
    if (var_90_1 s> 1)
        sub_140aab440(sub_140ab2000(), &var_98, &var_58, &var_50)
    else
        var_58 = &data_142d40450
        var_50 = 0
    int16_t* const var_48
    int32_t var_40
    
    if (var_80_1 s> 1)
        sub_140aab440(sub_140ab2000(), &var_88, &var_48, &var_40)
    else
        var_48 = &data_142d40450
        var_40 = 0
    void var_28
    int64_t* rax_4 = sub_140aaef90(sub_140aae970(), &var_28, &var_48, &var_58, arg1 + 0x10)
    int64_t* rcx_9 = rax_4[1]
    int64_t rdx_6 = *rax_4
    int64_t var_a8 = rdx_6
    int64_t* var_a0 = rcx_9
    
    if (rcx_9 != 0)
        rcx_9[1].d += 1
        rcx_9 = var_a0
    
    result = &var_a8
    
    if (arg3 != &var_a8)
        *arg3 = rdx_6
        var_a8 = 0
        result = sub_1405aeff0(&arg3[1], &var_a0)
        rcx_9 = var_a0
    
    if (rcx_9 != 0)
        result = rcx_9[1].d
        rcx_9[1].d -= 1
        
        if (result == 1)
            int64_t* rbx_1 = var_a0
            (**rbx_1)(rbx_1)
            result = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (result == 1)
                int64_t* rcx_12 = var_a0
                result = (*(*rcx_12 + 8))(rcx_12, 1)
    
    int64_t* var_20
    
    if (var_20 != 0)
        result = var_20[1].d
        var_20[1].d -= 1
        
        if (result == 1)
            result = (**var_20)(var_20)
            int32_t rdi_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (rdi_1 == 1)
                result = (*(*var_20 + 8))(var_20, zx.q(rdi_1))
    
    int64_t rcx_15 = var_98
    
    if (rcx_15 != 0)
        result = sub_140a74f90(rcx_15)
    
    rcx_27 = var_88
label_140ac3cfc:
    
    if (rcx_27 != 0)
        return sub_140a74f90(rcx_27)
else if ((result.b & 2) != 0)
    int64_t* rsi_1 = arg3[1]
    int64_t rax_9 = *arg3
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x20)
    int64_t var_38 = rax_9
    int64_t* var_30_1 = rsi_1
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    void* rax_10
    int512_t zmm1_2
    rax_10, zmm1_2 = sub_140aae970()
    int64_t var_68
    sub_140aab2a0(rax_10, &var_38, &var_78, &var_68)
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t rdi_2 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*rsi_1 + 8))(rsi_1, zx.q(rdi_2))
    
    if (*(r14 + 0x70) != 0)
        sub_140ac5b60(&var_78)
    
    int512_t zmm1_3 = sub_140a1d9d0(*(*arg2 + 8), &var_78, zmm1_2)
    int512_t zmm1_4 = sub_140a1d9d0(*(*arg2 + 8), &var_68, zmm1_3)
    result = sub_140a1d9d0(*(*arg2 + 8), arg1 + 0x10, zmm1_4)
    int64_t rcx_26 = var_68
    
    if (rcx_26 != 0)
        result = sub_140a74f90(rcx_26)
    
    rcx_27 = var_78
    goto label_140ac3cfc
return result
