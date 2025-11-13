// 函数: sub_1420d0a80
// 地址: 0x1420d0a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_10
sub_140b58170(&arg_10, "Blueprint", 1)
void var_48
int64_t* rax = _vfprintf_p_l(&var_48, 
    RenderTargetCreateStaticTexture2DEditorOnly: Can't create Texture2D at run time. ", 
    KismetRenderingLibrary")
void var_58
void var_30
sub_140ad3d20(sub_140accdf0(&var_30, &arg_10), &var_58, rax)
int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t temp2_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_50 + 8))(var_50, 1)

sub_140acd9c0(&var_30)
int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t rdi_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_40 + 8))(var_40, zx.q(rdi_1))

int64_t rcx_9 = *arg2

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

return 0
