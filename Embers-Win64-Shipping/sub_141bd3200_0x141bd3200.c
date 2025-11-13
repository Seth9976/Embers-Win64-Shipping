// 函数: sub_141bd3200
// 地址: 0x141bd3200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_788
int64_t rax_1 = __security_cookie ^ &var_788
char rbx = *(arg1 + 0xbc3)
char var_708 = rbx
char var_707 = 1
int64_t var_700 = 0
char rax_2 = *(arg1 + 0xbc1)
char r13 = *(arg1 + 0xbc0)
char var_720 = r13
char var_738 = rax_2
int32_t var_6f8 = 0
char var_71f = 1
int64_t var_718 = 0
int32_t var_710 = 0
char var_737 = 1
int64_t var_730 = 0
int32_t var_728 = 0
void*** rax_3 = sub_140a84c80(0, 0x30, 0)

if (rax_3 != 0)
    *rax_3 = &data_143083ba0
    sub_140d3a3a0(&rax_3[1], arg1)
    rax_3[2] = sub_141bb5080
    rax_3[4] = sub_140a387b0()
    *rax_3 = &data_143083bf8

int64_t* rax_5 = sub_140a84c80(0, 0x30, 0)

if (rax_5 != 0)
    *rax_5 = &data_142dc0378
    sub_140d3a3a0(&rax_5[1], arg1)
    rax_5[2] = sub_141bb4e40
    rax_5[4] = sub_140a387b0()
    *rax_5 = &data_142dc03d0

void var_6d0
int64_t* rax_7 = sub_140f1f1e0(&var_6d0)
rax_7[0x34] = arg1 + 0x168
rax_7[0x35] = arg1 + 0x958
rax_7[0x82].b = rax_2
*(rax_7 + 0x411) = 1
sub_140692f90(&rax_7[0x83], &var_730)
rax_7[0x6d].b = r13
*(rax_7 + 0x369) = 1
sub_140692f90(&rax_7[0x6e], &var_718)
*(rax_7 + 0x651) = *(arg1 + 0xbc2)
rax_7[0xce].b = rbx
*(rax_7 + 0x671) = 1
sub_1407473e0(&rax_7[0xcf], &var_700)
void var_6f0

if (&var_6f0 != &rax_7[0x98])
    if (rax_5 != 0)
        (*(*rax_5 + 0x40))(rax_5, &rax_7[0x98])
    else if (rax_7[0x99].d != 0)
        int64_t* rcx_7 = rax_7[0x98]
        
        if (rcx_7 != 0)
            (*(*rcx_7 + 0x38))(rcx_7, 0)
            int64_t rcx_8 = rax_7[0x98]
            
            if (rcx_8 != 0)
                rax_7[0x98] = sub_140a84c80(rcx_8, 0, 0)
            
            rax_7[0x99].d = 0

if (&var_6f0 != &rax_7[0x9a])
    if (rax_3 != 0)
        (*rax_3)[8](rax_3, &rax_7[0x9a])
    else if (rax_7[0x9b].d != 0)
        int64_t* rcx_10 = rax_7[0x9a]
        
        if (rcx_10 != 0)
            (*(*rcx_10 + 0x38))(rcx_10, 0)
            int64_t rcx_11 = rax_7[0x9a]
            
            if (rcx_11 != 0)
                rax_7[0x9a] = sub_140a84c80(rcx_11, 0, 0)
            
            rax_7[0x9b].d = 0

void*** rax_18 = sub_140f64030()
int64_t* var_750 = &rax_18[2]
sub_140918950(&var_750, &rax_18[2])
int64_t var_768 = 0x718
void var_757
void* var_740 = &var_757
int64_t* var_6e0
int64_t** rax_19 =
    sub_140f68fb0(&var_750, &var_6e0, rax_7, sub_140e23ed0(&rax_18[2], "SMultiLineEditableTextBox"))
int64_t* rcx_15 = rax_19[1]

if (rcx_15 != 0)
    rcx_15[1].d += 1

if (arg1 + 0xc70 == &var_6f0)
label_141bd3509:
    
    if (rcx_15 != 0)
        rcx_15[1].d -= 1
        
        if (rcx_15[1].d == 1)
            (**rcx_15)(rcx_15)
            int32_t temp2_1 = *(rcx_15 + 0xc)
            *(rcx_15 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_15 + 8))(rcx_15, 1)
else
    *(arg1 + 0xc70) = *rax_19
    int64_t* rbx_4 = *(arg1 + 0xc78)
    
    if (rcx_15 == rbx_4)
        goto label_141bd3509
    
    *(arg1 + 0xc78) = rcx_15
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp6_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)

int64_t* var_6d8

if (var_6d8 != 0)
    var_6d8[1].d -= 1
    
    if (var_6d8[1].d == 1)
        (**var_6d8)(var_6d8)
        int32_t temp5_1 = *(var_6d8 + 0xc)
        *(var_6d8 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_6d8 + 8))(var_6d8, 1)

if (rax_18 != 0)
    rax_18[1].d -= 1
    
    if (rax_18[1].d == 1)
        (**rax_18)(rax_18)
        int32_t temp7_1 = *(rax_18 + 0xc)
        *(rax_18 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*rax_18)[1](rax_18, 1)

sub_140f24700(&var_6d0)

if (rax_5 != 0)
    (*(*rax_5 + 0x38))(rax_5, 0)
    int64_t rax_28 = sub_140a84c80(rax_5, 0, 0)
    
    if (rax_28 != 0)
        sub_140a74f90(rax_28)

if (rax_3 != 0)
    (*rax_3)[7](rax_3, 0)
    int64_t rax_30 = sub_140a84c80(rax_3, 0, 0)
    
    if (rax_30 != 0)
        sub_140a74f90(rax_30)

sub_140745b20(&var_730)
sub_140745b20(&var_718)
sub_140745b20(&var_700)
int64_t* rbx_7 = *(arg1 + 0xc78)

if (rbx_7 != 0)
    rbx_7[1].d += 1

*arg2 = *(arg1 + 0xc70)
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

__security_check_cookie(rax_1 ^ &var_788)
return arg2
