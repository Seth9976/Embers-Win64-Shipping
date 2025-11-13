// 函数: sub_141bd2c30
// 地址: 0x141bd2c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_668
int64_t rax_1 = __security_cookie ^ &var_668
char rbx = *(arg1 + 0x42e)
char var_588 = rbx
char var_587 = 1
int64_t var_580 = 0
char rax_2 = *(arg1 + 0x42a)
char rdi = *(arg1 + 0x42b)
char var_5b8 = rax_2
char rax_3 = *(arg1 + 0x429)
char var_5d0 = rax_3
char rax_4 = *(arg1 + 0x428)
char var_5e8 = rax_4
char rax_5 = *(arg1 + 0x3d0)
char var_600 = rax_5
char rax_6 = *(arg1 + 0x42c)
char var_618 = rax_6
int32_t var_578 = 0
char var_5a0 = rdi
char var_59f = 1
int64_t var_598 = 0
int32_t var_590 = 0
char var_5b7 = 1
int64_t var_5b0 = 0
int32_t var_5a8 = 0
char var_5cf = 1
int64_t var_5c8 = 0
int32_t var_5c0 = 0
char var_5e7 = 1
int64_t var_5e0 = 0
int32_t var_5d8 = 0
char var_5ff = 1
int64_t var_5f8 = 0
int32_t var_5f0 = 0
char var_617 = 1
int64_t var_610 = 0
int32_t var_608 = 0
void*** rax_7 = sub_140a84c80(0, 0x30, 0)

if (rax_7 != 0)
    *rax_7 = &data_143083ba0
    sub_140d3a3a0(&rax_7[1], arg1)
    rax_7[2] = sub_141bb4ff0
    rax_7[4] = sub_140a387b0()
    *rax_7 = &data_143083bf8

int64_t* rax_9 = sub_140a84c80(0, 0x30, 0)

if (rax_9 != 0)
    *rax_9 = &data_142dc0378
    sub_140d3a3a0(&rax_9[1], arg1)
    rax_9[2] = sub_141bb4dc0
    rax_9[4] = sub_140a387b0()
    *rax_9 = &data_142dc03d0

void var_550
int64_t* rax_11 = sub_140f1edc0(&var_550)
rax_11[0x51] = arg1 + 0x168
rax_11[0x86].b = rax_6
*(rax_11 + 0x431) = 1
sub_140692f90(&rax_11[0x87], &var_610)
rax_11[0x6a].b = rax_5
*(rax_11 + 0x351) = 1
sub_140692f90(&rax_11[0x6b], &var_5f8)
rax_11[0x7a].b = rax_4
*(rax_11 + 0x3d1) = 1
sub_140692f90(&rax_11[0x7b], &var_5e0)
rax_11[0x7d].b = rax_3
*(rax_11 + 0x3e9) = 1
sub_140692f90(&rax_11[0x7e], &var_5c8)
rax_11[0x80].b = rax_2
*(rax_11 + 0x401) = 1
sub_140692f90(&rax_11[0x81], &var_5b0)
rax_11[0x83].b = rdi
*(rax_11 + 0x419) = 1
sub_140692f90(&rax_11[0x84], &var_598)
*(rax_11 + 0x4c9) = *(arg1 + 0x42d)
rax_11[0x9d].b = rbx
*(rax_11 + 0x4e9) = 1
sub_1407473e0(&rax_11[0x9e], &var_580)
void var_570

if (&var_570 != &rax_11[0x73])
    if (rax_9 != 0)
        (*(*rax_9 + 0x40))(rax_9, &rax_11[0x73])
    else if (rax_11[0x74].d != 0)
        int64_t* rcx_11 = rax_11[0x73]
        
        if (rcx_11 != 0)
            (*(*rcx_11 + 0x38))(rcx_11, 0)
            int64_t rcx_12 = rax_11[0x73]
            
            if (rcx_12 != 0)
                rax_11[0x73] = sub_140a84c80(rcx_12, 0, 0)
            
            rax_11[0x74].d = 0

if (&var_570 != &rax_11[0x75])
    if (rax_7 != 0)
        (*rax_7)[8](rax_7, &rax_11[0x75])
    else if (rax_11[0x76].d != 0)
        int64_t* rcx_14 = rax_11[0x75]
        
        if (rcx_14 != 0)
            (*(*rcx_14 + 0x38))(rcx_14, 0)
            int64_t rcx_15 = rax_11[0x75]
            
            if (rcx_15 != 0)
                rax_11[0x75] = sub_140a84c80(rcx_15, 0, 0)
            
            rax_11[0x76].d = 0

void*** rax_25 = j_sub_140a82f30(0x490)
void*** rdi_1 = rax_25

if (rax_25 == 0)
    rdi_1 = nullptr
else
    rax_25[1].d = 1
    *(rax_25 + 0xc) = 1
    *rdi_1 = &data_142ee7498
    
    if (rdi_1 != -0x10)
        sub_140f666e0(&rdi_1[2])

void* var_630 = &rdi_1[2]
sub_140918950(&var_630, &rdi_1[2])
int64_t var_648 = 0x480
void var_633
void* var_620 = &var_633
void* var_560
void** rax_26 =
    sub_140f275a0(&var_630, &var_560, rax_11, sub_140e23ed0(&rdi_1[2], "SMultiLineEditableText"))
int64_t* rcx_20 = rax_26[1]

if (rcx_20 != 0)
    rcx_20[1].d += 1

if (arg1 + 0x450 == &var_570)
label_141bd3060:
    
    if (rcx_20 != 0)
        rcx_20[1].d -= 1
        
        if (rcx_20[1].d == 1)
            (**rcx_20)(rcx_20)
            int32_t temp2_1 = *(rcx_20 + 0xc)
            *(rcx_20 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_20 + 8))(rcx_20, 1)
else
    *(arg1 + 0x450) = *rax_26
    int64_t* rbx_4 = *(arg1 + 0x458)
    
    if (rcx_20 == rbx_4)
        goto label_141bd3060
    
    *(arg1 + 0x458) = rcx_20
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp6_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)

int64_t* var_558

if (var_558 != 0)
    var_558[1].d -= 1
    
    if (var_558[1].d == 1)
        (**var_558)(var_558)
        int32_t temp5_1 = *(var_558 + 0xc)
        *(var_558 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_558 + 8))(var_558, 1)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp7_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*rdi_1)[1](rdi_1, 1)

sub_140f243e0(&var_550)

if (rax_9 != 0)
    (*(*rax_9 + 0x38))(rax_9, 0)
    int64_t rax_35 = sub_140a84c80(rax_9, 0, 0)
    
    if (rax_35 != 0)
        sub_140a74f90(rax_35)

if (rax_7 != 0)
    (*rax_7)[7](rax_7, 0)
    int64_t rax_37 = sub_140a84c80(rax_7, 0, 0)
    
    if (rax_37 != 0)
        sub_140a74f90(rax_37)

sub_140745b20(&var_610)
sub_140745b20(&var_5f8)
sub_140745b20(&var_5e0)
sub_140745b20(&var_5c8)
sub_140745b20(&var_5b0)
sub_140745b20(&var_598)
sub_140745b20(&var_580)
int64_t* rbx_7 = *(arg1 + 0x458)

if (rbx_7 != 0)
    rbx_7[1].d += 1

*arg2 = *(arg1 + 0x450)
arg2[1] = rbx_7

if (rbx_7 != 0)
    rbx_7[1].d += 1
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t temp9_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp9_1 == 1)
                int64_t r8_3 = *rbx_7
                (*(r8_3 + 8))(rbx_7, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_668)
return arg2
