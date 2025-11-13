// 函数: sub_141f35e00
// 地址: 0x141f35e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = arg1[0x15]

if (rdi != 0)
label_141f35e26:
    
    if (*(rdi + 0x1b0) != 0)
        int64_t rdx_1 = *arg1
        
        if ((*(rdx_1 + 0x448))(arg1, rdx_1).b != 0)
            sub_1420ec790(rdi)
            (*(*arg1 + 0x528))(arg1, *(rdi + 0x1b0))
else
    uint64_t rax = sub_141ee69e0(arg1)
    rdi = rax
    
    if (rax != 0)
        goto label_141f35e26

if ((*(arg1 + 0x1f2) & 1) == 0)
    return 

void arg_8
sub_140b58170(&arg_8, "Blueprint", 1)
void var_48
int64_t* rax_2 = _vfprintf_p_l(&var_48, 
    CaptureScene: Scene capture with bCaptureEveryFrame enabled was told to update - major inefficiency.", 
    SceneCaptureComponent")
void var_58
void var_30
sub_140ae44d0(sub_140accdf0(&var_30, &arg_8), &var_58, rax_2)
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

if (var_40 == 0)
    return 

var_40[1].d -= 1

if (var_40[1].d != 1)
    return 

(**var_40)(var_40)
int32_t rdi_1 = *(var_40 + 0xc)
*(var_40 + 0xc) -= 1

if (rdi_1 == 1)
    (*(*var_40 + 8))(var_40, zx.q(rdi_1))
