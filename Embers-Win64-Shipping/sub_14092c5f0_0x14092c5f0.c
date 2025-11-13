// 函数: sub_14092c5f0
// 地址: 0x14092c5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_28
int32_t var_20_1
int64_t* var_18
void* rsi_1
void*** rdi_1

if ((*(*arg2 + 0x28))(arg2) != 0)
    if (*(arg3 + 8) s>= 1)
        return sub_14092c270(arg1, arg2, arg3, arg4)
    
    var_18 = nullptr
    int32_t var_10_2 = 0
    
    if (arg4 != &var_18 && arg4[1].d != 0)
        int64_t* rcx_8 = *arg4
        
        if (rcx_8 != 0)
            (*(*rcx_8 + 0x40))(rcx_8, &var_18)
    
    rsi_1 = *(arg1 + 0x30)
    var_28 = nullptr
    int64_t* rax_11 = sub_140a84c80(0, 0x30, 0)
    var_28 = rax_11
    rdi_1 = rax_11
    var_20_1 = 3
    
    if (rax_11 != 0)
        *rdi_1 = &data_142e21df0
        rdi_1[1] = 0
        rdi_1[2].d = 0
        
        if (&var_18 != &rdi_1[1] && var_10_2 != 0)
            int64_t* rcx_9 = var_18
            
            if (rcx_9 != 0)
                (*(*rcx_9 + 0x40))(rcx_9)
        
        rdi_1[4] = sub_140a387b0()
        *rdi_1 = &data_142e21e48
else
    var_18 = nullptr
    int32_t var_10_1 = 0
    
    if (arg4 != &var_18 && arg4[1].d != 0)
        int64_t* rcx_1 = *arg4
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x40))(rcx_1, &var_18)
    
    rsi_1 = *(arg1 + 0x30)
    var_28 = nullptr
    int64_t* rax_3 = sub_140a84c80(0, 0x30, 0)
    var_28 = rax_3
    rdi_1 = rax_3
    var_20_1 = 3
    
    if (rax_3 != 0)
        *rdi_1 = &data_142e21d40
        rdi_1[1] = 0
        rdi_1[2].d = 0
        
        if (&var_18 != &rdi_1[1] && var_10_1 != 0)
            int64_t* rcx_2 = var_18
            
            if (rcx_2 != 0)
                (*(*rcx_2 + 0x40))(rcx_2)
        
        rdi_1[4] = sub_140a387b0()
        *rdi_1 = &data_142e21d98
sub_14093f370(rsi_1, &var_28)
int64_t* rax_8

if (var_20_1 == 0)
    rax_8 = var_28
label_14092c704:
    
    if (rax_8 != 0)
        sub_140a74f90(rax_8)
else
    int64_t* rcx_4 = var_28
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x38))(rcx_4, 0)
        rax_8 = var_28
        
        if (rax_8 != 0)
            rax_8 = sub_140a84c80(rax_8, 0, 0)
            var_28 = rax_8
        
        int32_t var_20_2 = 0
        goto label_14092c704
return sub_140745b20(&var_18)
