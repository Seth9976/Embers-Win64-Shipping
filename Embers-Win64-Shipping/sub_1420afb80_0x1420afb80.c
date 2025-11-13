// 函数: sub_1420afb80
// 地址: 0x1420afb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e90810(arg1, arg2)
*arg1 = &data_142d4a438
void var_98
int64_t* rax = _vfprintf_p_l(&var_98, u"Array read access out of bounds", u"UKismetArrayLibrary")
int64_t var_158 = data_143f47de0
int64_t var_150 = *rax
int64_t* rcx_3 = rax[1]

if (rcx_3 != 0)
    rcx_3[1].d += 1

int32_t var_140 = rax[2].d
int64_t* rdi_1 = rax[1]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rax_4 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rax_4 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

sub_140bb4a70(&var_158)

if (rcx_3 != 0)
    rcx_3[1].d -= 1
    
    if (rcx_3[1].d == 1)
        (**rcx_3)(rcx_3)
        int32_t rax_8 = *(rcx_3 + 0xc)
        *(rcx_3 + 0xc) -= 1
        
        if (rax_8 == 1)
            (*(*rcx_3 + 8))(rcx_3, 1)

void var_80
int64_t* rax_10 =
    _vfprintf_p_l(&var_80, Array assignment access out of bounds", UKismetArrayLibrary")
int64_t var_138 = data_143f47de8
int64_t var_130 = *rax_10
int64_t* rcx_12 = rax_10[1]

if (rcx_12 != 0)
    rcx_12[1].d += 1

int32_t var_120 = rax_10[2].d
int64_t* rdi_4 = rax_10[1]

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t rax_14 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (rax_14 == 1)
            (*(*rdi_4 + 8))(rdi_4, 1)

sub_140bb4a70(&var_138)

if (rcx_12 != 0)
    rcx_12[1].d -= 1
    
    if (rcx_12[1].d == 1)
        (**rcx_12)(rcx_12)
        int32_t rax_18 = *(rcx_12 + 0xc)
        *(rcx_12 + 0xc) -= 1
        
        if (rax_18 == 1)
            (*(*rcx_12 + 8))(rcx_12, 1)

void var_68
int64_t* rax_20 = _vfprintf_p_l(&var_68, u"Array insertion out of bounds", u"UKismetArrayLibrary")
int64_t var_118 = data_143f47df0
int64_t var_110 = *rax_20
int64_t* rcx_21 = rax_20[1]

if (rcx_21 != 0)
    rcx_21[1].d += 1

int32_t var_100 = rax_20[2].d
int64_t* rdi_7 = rax_20[1]

if (rdi_7 != 0)
    rdi_7[1].d -= 1
    
    if (rdi_7[1].d == 1)
        (**rdi_7)(rdi_7)
        int32_t rax_24 = *(rdi_7 + 0xc)
        *(rdi_7 + 0xc) -= 1
        
        if (rax_24 == 1)
            (*(*rdi_7 + 8))(rdi_7, 1)

sub_140bb4a70(&var_118)

if (rcx_21 != 0)
    rcx_21[1].d -= 1
    
    if (rcx_21[1].d == 1)
        (**rcx_21)(rcx_21)
        int32_t rax_28 = *(rcx_21 + 0xc)
        *(rcx_21 + 0xc) -= 1
        
        if (rax_28 == 1)
            (*(*rcx_21 + 8))(rcx_21, 1)

void var_50
int64_t* rax_30 = _vfprintf_p_l(&var_50, u"Array removal out of bounds", u"UKismetArrayLibrary")
int64_t var_f8 = data_143f47df8
int64_t var_f0 = *rax_30
int64_t* rcx_30 = rax_30[1]

if (rcx_30 != 0)
    rcx_30[1].d += 1

int32_t var_e0 = rax_30[2].d
int64_t* rdi_10 = rax_30[1]

if (rdi_10 != 0)
    rdi_10[1].d -= 1
    
    if (rdi_10[1].d == 1)
        (**rdi_10)(rdi_10)
        int32_t rax_34 = *(rdi_10 + 0xc)
        *(rdi_10 + 0xc) -= 1
        
        if (rax_34 == 1)
            (*(*rdi_10 + 8))(rdi_10, 1)

sub_140bb4a70(&var_f8)

if (rcx_30 != 0)
    rcx_30[1].d -= 1
    
    if (rcx_30[1].d == 1)
        (**rcx_30)(rcx_30)
        int32_t rax_38 = *(rcx_30 + 0xc)
        *(rcx_30 + 0xc) -= 1
        
        if (rax_38 == 1)
            (*(*rcx_30 + 8))(rcx_30, 1)

void var_38
int64_t* rax_40 = _vfprintf_p_l(&var_38, u"Array resized to negative size", u"UKismetArrayLibrary")
int64_t var_d8 = data_143f47e00
int64_t var_d0 = *rax_40
int64_t* rcx_39 = rax_40[1]

if (rcx_39 != 0)
    rcx_39[1].d += 1

int32_t var_c0 = rax_40[2].d
int64_t* rdi_13 = rax_40[1]

if (rdi_13 != 0)
    rdi_13[1].d -= 1
    
    if (rdi_13[1].d == 1)
        (**rdi_13)(rdi_13)
        int32_t rax_44 = *(rdi_13 + 0xc)
        *(rdi_13 + 0xc) -= 1
        
        if (rax_44 == 1)
            (*(*rdi_13 + 8))(rdi_13, 1)

sub_140bb4a70(&var_d8)

if (rcx_39 != 0)
    rcx_39[1].d -= 1
    
    if (rcx_39[1].d == 1)
        (**rcx_39)(rcx_39)
        int32_t rax_48 = *(rcx_39 + 0xc)
        *(rcx_39 + 0xc) -= 1
        
        if (rax_48 == 1)
            (*(*rcx_39 + 8))(rcx_39, 1)

void var_20
int64_t* rax_50 = _vfprintf_p_l(&var_20, u"Array swap access out of bounds", u"UKismetArrayLibrary")
int64_t var_b8 = data_143f47e08
int64_t var_b0 = *rax_50
int64_t* rcx_48 = rax_50[1]

if (rcx_48 != 0)
    rcx_48[1].d += 1

int32_t var_a0 = rax_50[2].d
int64_t* rdi_16 = rax_50[1]

if (rdi_16 != 0)
    rdi_16[1].d -= 1
    
    if (rdi_16[1].d == 1)
        (**rdi_16)(rdi_16)
        int32_t rax_54 = *(rdi_16 + 0xc)
        *(rdi_16 + 0xc) -= 1
        
        if (rax_54 == 1)
            (*(*rdi_16 + 8))(rdi_16, 1)

sub_140bb4a70(&var_b8)

if (rcx_48 != 0)
    rcx_48[1].d -= 1
    
    if (rcx_48[1].d == 1)
        (**rcx_48)(rcx_48)
        int32_t rbx_1 = *(rcx_48 + 0xc)
        *(rcx_48 + 0xc) -= 1
        
        if (rbx_1 == 1)
            (*(*rcx_48 + 8))(rcx_48, zx.q(rbx_1))

return arg1
