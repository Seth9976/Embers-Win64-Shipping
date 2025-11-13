// 函数: sub_141bd00d0
// 地址: 0x141bd00d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_718
int64_t rax_1 = __security_cookie ^ &var_718
uint32_t rax_2 = zx.d(*(arg1 + 0x9f2))
char rax_3 = *(arg1 + 0x9f1)
char var_5d8 = rax_3
char rax_4 = *(arg1 + 0x9f0)
char var_5f0 = rax_4
uint64_t rax_5 = zx.q(*(arg1 + 0x9ee))
char var_6dc = 1
int64_t var_6d8 = 0
int32_t var_6d0 = 0
char var_5d7 = 1
int64_t var_5d0 = 0
int32_t var_5c8 = 0
char var_5ef = 1
int64_t var_5e8 = 0
int32_t var_5e0 = 0
int32_t rbx

if (rax_5.d u> 5)
    rbx = 0
else
    switch (rax_5)
        case 0
            rbx = 0
        case 1
            rbx = 1
        case 2
            rbx = 2
        case 3
            rbx = 3
        case 4
            rbx = 4
        case 5
            rbx = 5

char rax_6 = *(arg1 + 0x9ec)
char r12 = *(arg1 + 0x9ed)
char var_638 = rax_6
char rax_7 = *(arg1 + 0x9eb)
char var_650 = rax_7
char rax_8 = *(arg1 + 0x9ea)
char var_668 = rax_8
char rax_9 = *(arg1 + 0x9e9)
char var_680 = rax_9
char rax_10 = *(arg1 + 0x9e8)
char var_698 = rax_10
int32_t var_6b0 = (*(arg1 + 0x9d4)).d
int32_t var_608 = rbx
char var_604 = 1
int64_t var_600 = 0
int32_t var_5f8 = 0
char var_620 = r12
char var_61f = 1
int64_t var_618 = 0
int32_t var_610 = 0
char var_637 = 1
int64_t var_630 = 0
int32_t var_628 = 0
char var_64f = 1
int64_t var_648 = 0
int32_t var_640 = 0
char var_667 = 1
int64_t var_660 = 0
int32_t var_658 = 0
char var_67f = 1
int64_t var_678 = 0
int32_t var_670 = 0
char var_697 = 1
int64_t var_690 = 0
int32_t var_688 = 0
char var_6ac = 1
int64_t var_6a8 = 0
int32_t var_6a0 = 0
void*** rax_11 = sub_140a84c80(0, 0x30, 0)

if (rax_11 != 0)
    *rax_11 = &data_143083ba0
    sub_140d3a3a0(&rax_11[1], arg1)
    rax_11[2] = sub_141b8bb04
    rax_11[4] = sub_140a387b0()
    *rax_11 = &data_143083bf8

int64_t* rax_13 = sub_140a84c80(0, 0x30, 0)

if (rax_13 != 0)
    *rax_13 = &data_142dc0378
    sub_140d3a3a0(&rax_13[1], arg1)
    rax_13[2] = sub_141b8baf8
    rax_13[4] = sub_140a387b0()
    *rax_13 = &data_142dc03d0

void var_5a0
int64_t* rax_15
int32_t zmm6_1
rax_15, zmm6_1 = sub_140e94440(&var_5a0)
rax_15[0x34] = arg1 + 0x130
rax_15[0x86].d = zmm6_1
*(rax_15 + 0x434) = 1
sub_140692f90(&rax_15[0x87], &var_6a8)
rax_15[0x6a].b = rax_10
*(rax_15 + 0x351) = 1
sub_140692f90(&rax_15[0x6b], &var_690)
rax_15[0x6d].b = rax_9
*(rax_15 + 0x369) = 1
sub_140692f90(&rax_15[0x6e], &var_678)
rax_15[0x70].b = rax_8
*(rax_15 + 0x381) = 1
sub_140692f90(&rax_15[0x71], &var_660)
rax_15[0x73].b = rax_7
*(rax_15 + 0x399) = 1
sub_140692f90(&rax_15[0x74], &var_648)
rax_15[0x89].b = rax_6
*(rax_15 + 0x449) = 1
sub_140692f90(&rax_15[0x8a], &var_630)
rax_15[0x79].b = r12
*(rax_15 + 0x3c9) = 1
sub_140692f90(&rax_15[0x7a], &var_618)
void var_5c0

if (&var_5c0 != &rax_15[0x80])
    if (rax_13 != 0)
        (*(*rax_13 + 0x40))(rax_13, &rax_15[0x80])
    else if (rax_15[0x81].d != 0)
        int64_t* rcx_13 = rax_15[0x80]
        
        if (rcx_13 != 0)
            (*(*rcx_13 + 0x38))(rcx_13, 0)
            int64_t rcx_14 = rax_15[0x80]
            
            if (rcx_14 != 0)
                rax_15[0x80] = sub_140a84c80(rcx_14, 0, 0)
            
            rax_15[0x81].d = 0

if (&var_5c0 != &rax_15[0x82])
    if (rax_11 != 0)
        (*rax_11)[8](rax_11, &rax_15[0x82])
    else if (rax_15[0x83].d != 0)
        int64_t* rcx_16 = rax_15[0x82]
        
        if (rcx_16 != 0)
            (*(*rcx_16 + 0x38))(rcx_16, 0)
            int64_t rcx_17 = rax_15[0x82]
            
            if (rcx_17 != 0)
                rax_15[0x82] = sub_140a84c80(rcx_17, 0, 0)
            
            rax_15[0x83].d = 0

rax_15[0x9f].d = rbx
*(rax_15 + 0x4fc) = 1
sub_1407473e0(&rax_15[0xa0], &var_600)
rax_15[0xa2].b = *(arg1 + 0x9ef)
rax_15[0xa3].b = rax_4
*(rax_15 + 0x519) = 1
sub_1407473e0(&rax_15[0xa4], &var_5e8)
rax_15[0xa6].b = rax_3
*(rax_15 + 0x531) = 1
sub_1407473e0(&rax_15[0xa7], &var_5d0)
rax_15[0x76].d = rax_2
*(rax_15 + 0x3b4) = 1
sub_140692f90(&rax_15[0x77], &var_6d8)
void*** rax_32 = j_sub_140a82f30(0x6b0)
void*** r12_3 = rax_32

if (rax_32 == 0)
    r12_3 = nullptr
else
    rax_32[1].d = 1
    *(rax_32 + 0xc) = 1
    *r12_3 = &data_142edf1b0
    
    if (r12_3 != -0x10)
        sub_140ee3660(&r12_3[2])

void* var_6c8 = &r12_3[2]
sub_140918950(&var_6c8, &r12_3[2])
int64_t var_6f8 = 0x6a0
void var_6e1
void* var_6b8 = &var_6e1
void* var_5b0
void** rax_33 =
    sub_140e9ce60(&var_6c8, &var_5b0, rax_15, sub_140e23ed0(&r12_3[2], "SEditableTextBox"))
int64_t* rcx_26 = rax_33[1]

if (rcx_26 != 0)
    rcx_26[1].d += 1

if (arg1 + 0xa18 == &var_5c0)
label_141bd0634:
    
    if (rcx_26 != 0)
        rcx_26[1].d -= 1
        
        if (rcx_26[1].d == 1)
            (**rcx_26)(rcx_26)
            int32_t temp2_1 = *(rcx_26 + 0xc)
            *(rcx_26 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_26 + 8))(rcx_26, 1)
else
    *(arg1 + 0xa18) = *rax_33
    int64_t* rbx_2 = *(arg1 + 0xa20)
    
    if (rcx_26 == rbx_2)
        goto label_141bd0634
    
    *(arg1 + 0xa20) = rcx_26
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp6_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* var_5a8

if (var_5a8 != 0)
    var_5a8[1].d -= 1
    
    if (var_5a8[1].d == 1)
        (**var_5a8)(var_5a8)
        int32_t temp5_1 = *(var_5a8 + 0xc)
        *(var_5a8 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_5a8 + 8))(var_5a8, 1)

if (r12_3 != 0)
    r12_3[1].d -= 1
    
    if (r12_3[1].d == 1)
        (**r12_3)(r12_3)
        int32_t temp7_1 = *(r12_3 + 0xc)
        *(r12_3 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*r12_3)[1](r12_3, 1)

sub_140e97d60(&var_5a0)

if (rax_13 != 0)
    (*(*rax_13 + 0x38))(rax_13, 0)
    int64_t rax_42 = sub_140a84c80(rax_13, 0, 0)
    
    if (rax_42 != 0)
        sub_140a74f90(rax_42)

if (rax_11 != 0)
    (*rax_11)[7](rax_11, 0)
    int64_t rax_44 = sub_140a84c80(rax_11, 0, 0)
    
    if (rax_44 != 0)
        sub_140a74f90(rax_44)

sub_140745b20(&var_6a8)
sub_140745b20(&var_690)
sub_140745b20(&var_678)
sub_140745b20(&var_660)
sub_140745b20(&var_648)
sub_140745b20(&var_630)
sub_140745b20(&var_618)
sub_140745b20(&var_600)
sub_140745b20(&var_5e8)
sub_140745b20(&var_5d0)
sub_140745b20(&var_6d8)
int64_t* rbx_5 = *(arg1 + 0xa20)

if (rbx_5 != 0)
    rbx_5[1].d += 1

*arg2 = *(arg1 + 0xa18)
arg2[1] = rbx_5

if (rbx_5 != 0)
    rbx_5[1].d += 1
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp9_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp9_1 == 1)
                int64_t r8_3 = *rbx_5
                (*(r8_3 + 8))(rbx_5, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_718)
return arg2
