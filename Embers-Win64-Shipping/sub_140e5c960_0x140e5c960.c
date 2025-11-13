// 函数: sub_140e5c960
// 地址: 0x140e5c960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm7
uint128_t var_38 = zmm7
uint128_t zmm8
uint128_t var_48 = zmm8
uint128_t zmm9
uint128_t var_58 = zmm9
void var_118
int64_t rax_1 = __security_cookie ^ &var_118
sub_140d4a9f0()
sub_140e219b0()
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1

int64_t* rdi = data_143e20d20
data_143e20d18 = *arg2

if (rbx_1 != rdi)
    data_143e20d20 = rbx_1
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp3_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi + 8))(rdi, 1)
else if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

void*** rax_6 = j_sub_140a82f30(0x610)
void*** rdi_1

if (rax_6 == 0)
    rdi_1 = nullptr
else
    rdi_1 = sub_140e51770(rax_6)

int64_t* rax_8 = j_sub_140a82f30(0x18)
int64_t* rbx_2 = rax_8

if (rax_8 == 0)
    rbx_2 = nullptr
else
    rax_8[1].d = 1
    *(rax_8 + 0xc) = 1
    *rbx_2 = &data_142d42ea8
    rbx_2[2] = rdi_1

int64_t* var_f0 = rbx_2
data_143e29f28 = rdi_1
int64_t* rdi_2 = data_143e29f30
int64_t (* var_f8)(void* arg1, int32_t* arg2) = nullptr

if (rbx_2 == rdi_2)
label_140e5cad5:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp6_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
else
    int64_t* var_f0_1 = nullptr
    data_143e29f30 = rbx_2
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp7_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
        
        rbx_2 = var_f0_1
        goto label_140e5cad5

int64_t* rbx_3 = data_143e29f30

if (rbx_3 != 0)
    rbx_3[1].d += 1

int64_t* rdi_3 = data_143e20d10
data_143e20d08 = data_143e29f28

if (rbx_3 != rdi_3)
    data_143e20d10 = rbx_3
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp11_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
else if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp10_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* rbx_4 = data_143e29f30
void* rax_17 = data_143e29f28

if (rbx_4 != 0)
    rbx_4[1].d += 1

if (rax_17 == 0)
    var_f8 = nullptr
else
    var_f8 = rax_17 + 0x118

if (rbx_4 != 0)
    rbx_4[1].d += 1

int64_t* rcx_11 = data_143e20d18
(*(*rcx_11 + 8))(rcx_11, &var_f8)

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp14_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp15_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

void* rax_24 = data_143e29f28
int64_t* rbx_5 = *(rax_24 + 0xb0)

if (rbx_5 != 0)
    rbx_5[1].d += 1

var_f8 = *(rax_24 + 0xa8)

if (rbx_5 != 0)
    rbx_5[1].d += 1

int64_t* rcx_17 = data_143e20d18
(*(*rcx_17 + 0x10))(rcx_17, &var_f8)

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp18_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp19_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp19_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

void* rcx_22 = data_143e20d08
int64_t var_c0 = 0
int128_t var_88
__builtin_memset(&var_88, 0, 0x20)
int64_t var_b8 = 0
void*** (* var_c8)()
sub_140da60a0(rcx_22, &var_c8)
int32_t var_a0
zmm9 = _mm_cvtepi32_ps(zx.o(var_a0))
int32_t var_9c
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(var_9c))
int32_t var_98
zmm7 = _mm_cvtepi32_ps(zx.o(var_98))
int32_t var_94
zmm8 = _mm_cvtepi32_ps(zx.o(var_94))
sub_140d72800(&var_c0)
void* rax_30 = data_143e29f28
_mm_shuffle_ps(zmm9, zmm9, 0xe1)
zmm9.d = zmm6.d
_mm_shuffle_ps(zmm9, zmm9, 0xc6)
zmm9.d = zmm7.d
_mm_shuffle_ps(zmm9, zmm9, 0x27)
zmm9.d = zmm8.d
zmm9 = _mm_shuffle_ps(zmm9, zmm9, 0x39)
*(rax_30 + 0x488) = zmm9
int64_t* rbx_6 = data_143e29f30
int64_t* var_e0 = rbx_6
var_f8.o = zmm9
var_f8 = sub_140e77b20
int64_t rax_31 = data_143e29f28
int64_t* var_f0_3
var_f0_3.d = 0
int128_t var_d8 = var_f8.o
int64_t var_e8 = rax_31

if (rbx_6 != 0)
    rbx_6[1].d += 1

sub_140e45210(data_143e20d18 + 0x38, &var_f8, &var_e8, &var_d8)

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp21_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp21_1 == 1)
            (*(*rbx_6 + 8))(rbx_6, 1)

void*** var_b8_1 = nullptr
void** const var_a8 = &data_142d42d18
var_c8 = sub_140e5a410
int64_t* rax_34 = sub_140b58260(&var_f8, u"Slate", 1)
sub_140af2a70()
sub_140afd730(&data_143de5cb0, *rax_34, &var_c8)

if (var_c8 != 0)
    void** const* rcx_29 = &var_a8
    
    if (var_b8_1 != 0)
        rcx_29 = var_b8_1
    
    void** const rdx_5 = *rcx_29
    rdx_5[2](rcx_29, rdx_5)

*arg1 = data_143e29f28
void* rcx_31 = data_143e29f30
arg1[1] = rcx_31

if (rcx_31 != 0)
    *(rcx_31 + 8) += 1

__security_check_cookie(rax_1 ^ &var_118)
return arg1
