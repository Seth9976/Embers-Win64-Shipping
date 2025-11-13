// 函数: sub_1405ad1e0
// 地址: 0x1405ad1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
sub_141a31a40(arg1, arg2)
int64_t i_2 = 2
*arg1 = &data_142d4c3c8
void* r8 = &arg1[0x1c]
int64_t i_3 = 2
void* rdx = &arg1[0x29]
int64_t i

do
    *r8 = &data_142d4c350
    void* rcx = rdx - 0x10
    *(rdx - 0x60) = 0x404
    r8 += 0xa0
    __builtin_memset(rdx - 0x58, 0, 0x25)
    __builtin_memset(rdx - 0x30, 0, 0x20)
    *rdx = 0
    *(rdx + 8) = 0
    *(rdx + 0xc) = 0x80
    void* rax_2 = *rdx
    rdx += 0xa0
    
    if (rax_2 != 0)
        rcx = rax_2
    
    *rcx = 0
    *(rcx + 8) = 0
    *(rdx - 0x90) = 0xffffffff
    *(rdx - 0x8c) = 0
    *(rdx - 0x80) = 0
    *(rdx - 0x78) = 0
    *(rdx - 0x70) = 0xea60
    *(rdx - 0x6c) = 1
    i = i_3
    i_3 -= 1
while (i != 1)
void* r8_1 = &arg1[0x44]
void* rdx_1 = &arg1[0x51]
int64_t i_1

do
    *r8_1 = &data_142d4c350
    void* rcx_1 = rdx_1 - 0x10
    *(rdx_1 - 0x60) = 0x404
    r8_1 += 0xa0
    __builtin_memset(rdx_1 - 0x58, 0, 0x25)
    __builtin_memset(rdx_1 - 0x30, 0, 0x20)
    *rdx_1 = 0
    *(rdx_1 + 8) = 0
    *(rdx_1 + 0xc) = 0x80
    void* rax_3 = *rdx_1
    rdx_1 += 0xa0
    
    if (rax_3 != 0)
        rcx_1 = rax_3
    
    *rcx_1 = 0
    *(rcx_1 + 8) = 0
    *(rdx_1 - 0x90) = 0xffffffff
    *(rdx_1 - 0x8c) = 0
    *(rdx_1 - 0x80) = 0
    *(rdx_1 - 0x78) = 0
    *(rdx_1 - 0x70) = 0xea60
    *(rdx_1 - 0x6c) = 1
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
arg1[0x6c] = &data_142d4c350
arg1[0x6d].w = 0x404
void* rcx_2 = &arg1[0x77]
__builtin_memset(&arg1[0x6e], 0, 0x25)
__builtin_memset(&arg1[0x73], 0, 0x20)
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_4 = *(rcx_2 + 0x10)

if (rax_4 != 0)
    rcx_2 = rax_4

*rcx_2 = 0
*(rcx_2 + 8) = 0
void* rcx_3 = &arg1[0x8b]
arg1[0x7b].d = 0xffffffff
*(arg1 + 0x3dc) = 0
arg1[0x7d] = 0
arg1[0x7e].d = 0
arg1[0x7f].d = 0xea60
*(arg1 + 0x3fc) = 1
arg1[0x80] = &data_142d4c350
arg1[0x81].w = 0x404
__builtin_memset(&arg1[0x82], 0, 0x25)
__builtin_memset(&arg1[0x87], 0, 0x20)
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_5 = *(rcx_3 + 0x10)

if (rax_5 != 0)
    rcx_3 = rax_5

*rcx_3 = 0
*(rcx_3 + 8) = 0
arg1[0x8f].d = 0xffffffff
*(arg1 + 0x47c) = 0
arg1[0x91] = 0
arg1[0x92].d = 0
arg1[0x93].d = 0xea60
*(arg1 + 0x49c) = 1
int128_t var_68 = data_1439a9488
bool cond:0 = sub_140cdd5d0(arg1, &var_68) s>= 6
arg1[0xa].b = 1
int64_t var_40 = 0
int32_t rax_6
rax_6.b = cond:0
int32_t var_38 = 0
rax_6.b += 1
int32_t var_34 = 1
*(arg1 + 0x51) = rax_6.b
*(arg1 + 0xc9) = 0x101
void var_58
sub_1405a6cb0(&var_58, &arg1[0x1c])
sub_1405a6cb0(&var_58, &arg1[0x30])
sub_1405a6cb0(&var_58, &arg1[0x44])
sub_1405a6cb0(&var_58, &arg1[0x58])
sub_1405a6cb0(&var_58, &arg1[0x6c])
sub_1405a6cb0(&var_58, &arg1[0x80])
void*** rax_7 = j_sub_140a82f30(0x48)
void*** rbx_1 = rax_7

if (rax_7 == 0)
    rbx_1 = nullptr
else
    rax_7[1].d = 1
    *(rax_7 + 0xc) = 1
    *rbx_1 = &data_142d4caa0
    rbx_1[2] = 0
    rbx_1[3] = 0
    rbx_1[7] = 0
    
    if (var_40 == 0)
        memmove(&rbx_1[4], &var_58, 0x18)
    
    int64_t rcx_12 = rbx_1[7]
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    rbx_1[7] = var_40
    int64_t var_40_1 = 0
    rbx_1[8].d = var_38
    *(rbx_1 + 0x44) = var_34
    int32_t var_38_1 = 0
    int32_t var_34_1 = 1

if (rbx_1 == -0x10)
label_1405ad626:
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
else
    void* rax_11
    
    if (rbx_1[2] != 0)
        rax_11 = rbx_1[3]
    
    if (rbx_1[2] != 0 && rax_11 != 0 && *(rax_11 + 8) s> 0)
        goto label_1405ad626
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    rbx_1[2] = &rbx_1[2]
    int64_t* rcx_13 = rbx_1[3]
    
    if (rbx_1 != rcx_13)
        if (rbx_1 != 0)
            *(rbx_1 + 0xc) += 1
            rcx_13 = rbx_1[3]
        
        if (rcx_13 != 0)
            int32_t temp9_1 = *(rcx_13 + 0xc)
            *(rcx_13 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rcx_13 + 8))(rcx_13, 1)
        
        rbx_1[3] = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp8_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
        
        goto label_1405ad626

void** rax_17
void*** rcx_17

if (&arg1[0x1a] != &var_68)
    arg1[0x1a] = &rbx_1[2]
    void*** rdi_2 = arg1[0x1b]
    
    if (rbx_1 == rdi_2)
        goto label_1405ad670
    
    arg1[0x1b] = rbx_1
    
    if (rdi_2 == 0)
        goto label_1405ad697
    
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d != 1)
        goto label_1405ad697
    
    (**rdi_2)(rdi_2)
    int32_t temp7_1 = *(rdi_2 + 0xc)
    *(rdi_2 + 0xc) -= 1
    
    if (temp7_1 != 1)
        goto label_1405ad697
    
    rax_17 = *rdi_2
    rcx_17 = rdi_2
    goto label_1405ad694

label_1405ad670:

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d != 1)
        goto label_1405ad697
    
    (**rbx_1)(rbx_1)
    int32_t temp3_1 = *(rbx_1 + 0xc)
    *(rbx_1 + 0xc) -= 1
    
    if (temp3_1 != 1)
        goto label_1405ad697
    
    rax_17 = *rbx_1
    rcx_17 = rbx_1
label_1405ad694:
    rax_17[1](rcx_17, 1)
label_1405ad697:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp10_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp10_1 == 1)
                void** r8_3 = *rbx_1
                r8_3[1](rbx_1, 1, r8_3)

sub_1405ade00(&var_58)
__security_check_cookie(rax_1 ^ &var_88)
return arg1
