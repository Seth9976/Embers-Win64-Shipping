// 函数: sub_141a900d0
// 地址: 0x141a900d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e90810(arg1, arg2)
*arg1 = &data_142d4a438
void var_48
int64_t* rax = _vfprintf_p_l(&var_48, u"Animation Library Warning", u"UKismetAnimationLibrary")
int64_t var_30 = data_143f2bac0
int64_t var_28 = *rax
int64_t* rcx_2 = rax[1]

if (rcx_2 != 0)
    rcx_2[1].d += 1

int32_t var_18 = rax[2].d
int64_t* rbx_1 = rax[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rax_4 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_4 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_140bb4a70(&var_30)

if (rcx_2 != 0)
    rcx_2[1].d -= 1
    
    if (rcx_2[1].d == 1)
        (**rcx_2)(rcx_2)
        int32_t rdi_1 = *(rcx_2 + 0xc)
        *(rcx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rcx_2 + 8))(rcx_2, zx.q(rdi_1))

return arg1
