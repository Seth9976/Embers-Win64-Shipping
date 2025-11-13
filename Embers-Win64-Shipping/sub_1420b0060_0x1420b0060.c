// 函数: sub_1420b0060
// 地址: 0x1420b0060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e90810(arg1, arg2)
*arg1 = &data_142d4a438
void var_68
int64_t* rax = _vfprintf_p_l(&var_68, u"Divide by zero", u"UKismetMathLibrary")
int64_t var_e8 = data_143f47f20
int64_t var_e0 = *rax
int64_t* rcx_3 = rax[1]

if (rcx_3 != 0)
    rcx_3[1].d += 1

int32_t var_d0 = rax[2].d
int64_t* rdi_1 = rax[1]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rax_4 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rax_4 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

sub_140bb4a70(&var_e8)

if (rcx_3 != 0)
    rcx_3[1].d -= 1
    
    if (rcx_3[1].d == 1)
        (**rcx_3)(rcx_3)
        int32_t rax_8 = *(rcx_3 + 0xc)
        *(rcx_3 + 0xc) -= 1
        
        if (rax_8 == 1)
            (*(*rcx_3 + 8))(rcx_3, 1)

void var_50
int64_t* rax_10 = _vfprintf_p_l(&var_50, u"Square root of negative number", u"UKismetMathLibrary")
int64_t var_c8 = data_143f47f28
int64_t var_c0 = *rax_10
int64_t* rcx_12 = rax_10[1]

if (rcx_12 != 0)
    rcx_12[1].d += 1

int32_t var_b0 = rax_10[2].d
int64_t* rdi_4 = rax_10[1]

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t rax_14 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (rax_14 == 1)
            (*(*rdi_4 + 8))(rdi_4, 1)

sub_140bb4a70(&var_c8)

if (rcx_12 != 0)
    rcx_12[1].d -= 1
    
    if (rcx_12[1].d == 1)
        (**rcx_12)(rcx_12)
        int32_t rax_18 = *(rcx_12 + 0xc)
        *(rcx_12 + 0xc) -= 1
        
        if (rax_18 == 1)
            (*(*rcx_12 + 8))(rcx_12, 1)

void var_38
int64_t* rax_20 = _vfprintf_p_l(&var_38, Projection onto vector of zero length", UKismetMathLibrary"
    )
int64_t var_a8 = data_143f47f30
int64_t var_a0 = *rax_20
int64_t* rcx_21 = rax_20[1]

if (rcx_21 != 0)
    rcx_21[1].d += 1

int32_t var_90 = rax_20[2].d
int64_t* rdi_7 = rax_20[1]

if (rdi_7 != 0)
    rdi_7[1].d -= 1
    
    if (rdi_7[1].d == 1)
        (**rdi_7)(rdi_7)
        int32_t rax_24 = *(rdi_7 + 0xc)
        *(rdi_7 + 0xc) -= 1
        
        if (rax_24 == 1)
            (*(*rdi_7 + 8))(rdi_7, 1)

sub_140bb4a70(&var_a8)

if (rcx_21 != 0)
    rcx_21[1].d -= 1
    
    if (rcx_21[1].d == 1)
        (**rcx_21)(rcx_21)
        int32_t rax_28 = *(rcx_21 + 0xc)
        *(rcx_21 + 0xc) -= 1
        
        if (rax_28 == 1)
            (*(*rcx_21 + 8))(rcx_21, 1)

void var_20
int64_t* rax_30 = _vfprintf_p_l(&var_20, u"Invalid date warning", u"UKismetMathLibrary")
int64_t var_88 = data_143f47f38
int64_t var_80 = *rax_30
int64_t* rcx_30 = rax_30[1]

if (rcx_30 != 0)
    rcx_30[1].d += 1

int32_t var_70 = rax_30[2].d
int64_t* rdi_10 = rax_30[1]

if (rdi_10 != 0)
    rdi_10[1].d -= 1
    
    if (rdi_10[1].d == 1)
        (**rdi_10)(rdi_10)
        int32_t rax_34 = *(rdi_10 + 0xc)
        *(rdi_10 + 0xc) -= 1
        
        if (rax_34 == 1)
            (*(*rdi_10 + 8))(rdi_10, 1)

sub_140bb4a70(&var_88)

if (rcx_30 != 0)
    rcx_30[1].d -= 1
    
    if (rcx_30[1].d == 1)
        (**rcx_30)(rcx_30)
        int32_t rbx_1 = *(rcx_30 + 0xc)
        *(rcx_30 + 0xc) -= 1
        
        if (rbx_1 == 1)
            (*(*rcx_30 + 8))(rcx_30, zx.q(rbx_1))

return arg1
