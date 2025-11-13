// 函数: sub_140d36490
// 地址: 0x140d36490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    *arg3 = arg1
    return 

void var_48
int64_t* rax =
    _vfprintf_p_l(&var_48, Attempted to reference 'self' as an addressable property.", ScriptCore")
int32_t var_30 = 3
int64_t var_28 = *rax
int64_t* rcx_2 = rax[1]

if (rcx_2 != 0)
    rcx_2[1].d += 1

int32_t var_18 = rax[2].d
int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t rax_4 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (rax_4 == 1)
            (*(*var_40 + 8))(var_40, 1)

sub_140d30680(arg1, arg2, &var_30)

if (rcx_2 == 0)
    return 

rcx_2[1].d -= 1

if (rcx_2[1].d != 1)
    return 

(**rcx_2)(rcx_2)
int32_t rdi_1 = *(rcx_2 + 0xc)
*(rcx_2 + 0xc) -= 1

if (rdi_1 == 1)
    (*(*rcx_2 + 8))(rcx_2, zx.q(rdi_1))
