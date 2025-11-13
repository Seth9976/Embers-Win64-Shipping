// 函数: sub_1420b96a0
// 地址: 0x1420b96a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_20
sub_140b58170(&arg_20, "Blueprint", 1)
void var_48
int64_t* rax = _vfprintf_p_l(&var_48, 
    ConvertRenderTarget: Can't convert render target to texture2d at run time. ", 
    KismetRenderingLibrary")
void var_58
void var_30
sub_140ad3d20(sub_140accdf0(&var_30, &arg_20), &var_58, rax)
int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t temp2_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_50 + 8))(var_50, 1)

int32_t result = sub_140acd9c0(&var_30)
int64_t* var_40

if (var_40 != 0)
    result = var_40[1].d
    var_40[1].d -= 1
    
    if (result == 1)
        result = (**var_40)(var_40)
        int32_t rdi_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_40 + 8))(var_40, zx.q(rdi_1))

return result
