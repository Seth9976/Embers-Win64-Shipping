// 函数: sub_1420b03b0
// 地址: 0x1420b03b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e90810(arg1, arg2)
*arg1 = &data_142d4a438
void var_78
int64_t* rax = _vfprintf_p_l(&var_78, u"Property Get Failed", u"UKismetSystemLibrary")
int64_t var_48 = data_143f47fa8
int64_t var_40 = *rax
int64_t* rcx_2 = rax[1]

if (rcx_2 != 0)
    rcx_2[1].d += 1

int32_t var_30 = rax[2].d
int64_t* rdi_1 = rax[1]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rax_4 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rax_4 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

sub_140bb4a70(&var_48)

if (rcx_2 != 0)
    rcx_2[1].d -= 1
    
    if (rcx_2[1].d == 1)
        (**rcx_2)(rcx_2)
        int32_t rax_8 = *(rcx_2 + 0xc)
        *(rcx_2 + 0xc) -= 1
        
        if (rax_8 == 1)
            (*(*rcx_2 + 8))(rcx_2, 1)

void var_60
int64_t* rax_10 = _vfprintf_p_l(&var_60, u"Property Set Failed", u"UKismetSystemLibrary")
int64_t var_28 = data_143f47fb0
int64_t var_20 = *rax_10
int64_t* rcx_11 = rax_10[1]

if (rcx_11 != 0)
    rcx_11[1].d += 1

int32_t var_10 = rax_10[2].d
int64_t* rdi_4 = rax_10[1]

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t rax_14 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (rax_14 == 1)
            (*(*rdi_4 + 8))(rdi_4, 1)

sub_140bb4a70(&var_28)

if (rcx_11 != 0)
    rcx_11[1].d -= 1
    
    if (rcx_11[1].d == 1)
        (**rcx_11)(rcx_11)
        int32_t rbx_1 = *(rcx_11 + 0xc)
        *(rcx_11 + 0xc) -= 1
        
        if (rbx_1 == 1)
            (*(*rcx_11 + 8))(rcx_11, zx.q(rbx_1))

return arg1
