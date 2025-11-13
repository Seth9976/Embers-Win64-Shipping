// 函数: sub_14092c7f0
// 地址: 0x14092c7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (*(*arg2 + 0x28))(arg2) != 0
int64_t* var_18 = nullptr
int32_t var_10 = 0
int64_t* var_28
int32_t var_20
void* rsi_1
void*** rdi_1

if (cond:0)
    if (arg4 != &var_18 && arg4[1].d != 0)
        int64_t* rcx_3 = *arg4
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x40))(rcx_3, &var_18)
    
    rsi_1 = *(arg1 + 0x30)
    var_28 = nullptr
    int64_t* rax_8 = sub_140a84c80(0, 0x30, 0)
    var_28 = rax_8
    rdi_1 = rax_8
    var_20 = 3
    
    if (rax_8 != 0)
        *rdi_1 = &data_142e21be0
        rdi_1[1] = 0
        rdi_1[2].d = 0
        
        if (&var_18 != &rdi_1[1] && var_10 != 0)
            int64_t* rcx_4 = var_18
            
            if (rcx_4 != 0)
                (*(*rcx_4 + 0x40))(rcx_4)
        
        rdi_1[4] = sub_140a387b0()
        *rdi_1 = &data_142e21c38
else
    if (arg4 != &var_18 && arg4[1].d != 0)
        int64_t* rcx_1 = *arg4
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x40))(rcx_1, &var_18)
    
    rsi_1 = *(arg1 + 0x30)
    var_28 = nullptr
    int64_t* rax_3 = sub_140a84c80(0, 0x30, 0)
    var_28 = rax_3
    rdi_1 = rax_3
    var_20 = 3
    
    if (rax_3 != 0)
        *rdi_1 = &data_142e21b30
        rdi_1[1] = 0
        rdi_1[2].d = 0
        
        if (&var_18 != &rdi_1[1] && var_10 != 0)
            int64_t* rcx_2 = var_18
            
            if (rcx_2 != 0)
                (*(*rcx_2 + 0x40))(rcx_2)
        
        rdi_1[4] = sub_140a387b0()
        *rdi_1 = &data_142e21b88
sub_14093f370(rsi_1, &var_28)
int64_t* rax_12

if (var_20 == 0)
    rax_12 = var_28
label_14092c988:
    
    if (rax_12 != 0)
        sub_140a74f90(rax_12)
else
    int64_t* rcx_6 = var_28
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x38))(rcx_6, 0)
        rax_12 = var_28
        
        if (rax_12 != 0)
            rax_12 = sub_140a84c80(rax_12, 0, 0)
            var_28 = rax_12
        
        int32_t var_20_1 = 0
        goto label_14092c988
return sub_140745b20(&var_18)
