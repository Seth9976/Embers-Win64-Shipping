// 函数: sub_14092c480
// 地址: 0x14092c480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18

if ((*(*arg2 + 0x28))(arg2) != 0)
    return sub_14092c270(arg1, arg2, &var_18, arg4) __tailcall

var_18 = nullptr
int32_t var_10 = 0

if (arg4 != &var_18 && arg4[1].d != 0)
    int64_t* rcx_1 = *arg4
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x40))(rcx_1, &var_18)

void* rdi_1 = *(arg1 + 0x30)
void*** var_28 = nullptr
void*** rax_3 = sub_140a84c80(0, 0x30, 0)
var_28 = rax_3
int32_t var_20 = 3

if (rax_3 != 0)
    *rax_3 = &data_142e21d40
    rax_3[1] = 0
    rax_3[2].d = 0
    
    if (&var_18 != &rax_3[1] && var_10 != 0)
        int64_t* rcx_2 = var_18
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x40))(rcx_2)
    
    rax_3[4] = sub_140a387b0()
    *rax_3 = &data_142e21d98

sub_14093f370(rdi_1, &var_28)
void*** rax_7

if (var_20 == 0)
    rax_7 = var_28
label_14092c59a:
    
    if (rax_7 != 0)
        sub_140a74f90(rax_7)
else
    void*** rcx_4 = var_28
    
    if (rcx_4 != 0)
        (*rcx_4)[7](rcx_4, 0)
        rax_7 = var_28
        
        if (rax_7 != 0)
            rax_7 = sub_140a84c80(rax_7, 0, 0)
            var_28 = rax_7
        
        int32_t var_20_1 = 0
        goto label_14092c59a
return sub_140745b20(&var_18)
