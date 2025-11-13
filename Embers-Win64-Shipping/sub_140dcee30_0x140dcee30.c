// 函数: sub_140dcee30
// 地址: 0x140dcee30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a84c80(0, 0x30, 0)
void*** var_18 = rax
int32_t var_10 = 3

if (rax != 0)
    rax[1] = arg3
    *rax = &data_142d3fe58
    rax[2] = arg4
    rax[4] = sub_140a387b0()
    *rax = &data_142d3feb0

sub_140a3dfa0(arg1, arg2, &var_18)
void*** rax_3

if (var_10 == 0)
    rax_3 = var_18
label_140dceede:
    
    if (rax_3 != 0)
        sub_140a74f90(rax_3)
else
    void*** rdi_1 = var_18
    
    if (rdi_1 != 0)
        (*rdi_1)[7](rdi_1, 0)
        rax_3 = sub_140a84c80(rdi_1, 0, 0)
        goto label_140dceede
return arg2
