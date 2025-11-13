// 函数: sub_14092c140
// 地址: 0x14092c140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18 = nullptr
int32_t var_10 = 0

if (arg3 != &var_18 && arg3[1].d != 0)
    int64_t* rcx = *arg3
    
    if (rcx != 0)
        (*(*rcx + 0x40))(rcx, &var_18)

void* rdi_1 = *(arg1 + 0x30)
void*** var_28 = nullptr
void*** rax_2 = sub_140a84c80(0, 0x30, 0)
var_28 = rax_2
int32_t var_20 = 3

if (rax_2 != 0)
    *rax_2 = &data_142e21c90
    rax_2[1] = 0
    rax_2[2].d = 0
    
    if (&var_18 != &rax_2[1] && var_10 != 0)
        int64_t* rcx_1 = var_18
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x40))(rcx_1)
    
    rax_2[4] = sub_140a387b0()
    *rax_2 = &data_142e21ce8

sub_14093f370(rdi_1, &var_28)
void*** rax_6

if (var_20 == 0)
    rax_6 = var_28
label_14092c23f:
    
    if (rax_6 != 0)
        sub_140a74f90(rax_6)
else
    void*** rcx_3 = var_28
    
    if (rcx_3 != 0)
        (*rcx_3)[7](rcx_3, 0)
        rax_6 = var_28
        
        if (rax_6 != 0)
            rax_6 = sub_140a84c80(rax_6, 0, 0)
            var_28 = rax_6
        
        int32_t var_20_1 = 0
        goto label_14092c23f
return sub_140745b20(&var_18)
