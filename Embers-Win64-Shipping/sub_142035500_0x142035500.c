// 函数: sub_142035500
// 地址: 0x142035500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int64_t var_18 = 0
int64_t var_10 = 0
uint64_t var_38 = 0
int64_t var_30
__builtin_memset(&var_30, 0, 0x14)

if (sub_14202c090(arg2, &var_18) != 0)
    uint64_t var_28
    
    while (true)
        sub_142029c40(&var_18, &var_28, &var_38)
        int16_t* const rdx_2 = &data_142d40450
        int32_t var_20
        
        if (var_20 != 0)
            rdx_2 = var_28
        
        int16_t* const rcx_2
        
        if (arg3[1].d == 0)
            rcx_2 = &data_142d40450
        else
            rcx_2 = *arg3
        
        if (sub_140a54510(rcx_2, rdx_2) != 0)
            if (sub_14202c090(arg2, &var_18) != 0)
                continue
        else if (arg1 != &var_38)
            int64_t rcx_8 = *arg1
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            *arg1 = var_38
            arg1[1].d = var_30.d
            *(arg1 + 0xc) = var_30:4.d
            break
        
        uint64_t rcx_4 = var_38
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        break
    
    if (var_28 != 0)
        sub_140a74f90(var_28)

int64_t rcx_6 = var_18

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = *arg2

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return arg1
