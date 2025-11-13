// 函数: sub_141b9c420
// 地址: 0x141b9c420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5c8
int64_t rax_1 = __security_cookie ^ &var_5c8
*(arg1 + 0x2c) = *(arg2 + 0x95)
int32_t var_510 = 0
sub_1407473e0(arg1 + 0x5e0, arg2 + 0x1a0)
sub_1407473e0(arg1 + 0x610, arg2 + 0x1b0)
sub_1407473e0(arg1 + 0x620, arg2 + 0x1d0)

if (arg2 + 0x1e0 != arg1 + 0x768)
    int64_t* rcx_4
    
    if (*(arg2 + 0x1e8) != 0)
        rcx_4 = *(arg2 + 0x1e0)
    
    if (*(arg2 + 0x1e8) != 0 && rcx_4 != 0)
        (*(*rcx_4 + 0x40))(rcx_4, arg1 + 0x768)
    else if (*(arg1 + 0x770) != 0)
        int64_t* rcx_5 = *(arg1 + 0x768)
        
        if (rcx_5 != 0)
            (*(*rcx_5 + 0x38))(rcx_5, 0)
            int64_t rcx_6 = *(arg1 + 0x768)
            
            if (rcx_6 != 0)
                *(arg1 + 0x768) = sub_140a84c80(rcx_6, 0, 0)
            
            *(arg1 + 0x770) = 0

sub_1407473e0(arg1 + 0x778, arg2 + 0x1f0)
*(arg1 + 0x788) = *(arg2 + 0x200)
sub_1407473e0(arg1 + 0x470, arg2 + 0x220)
sub_1407473e0(arg1 + 0x720, arg2 + 0x230)
sub_1407473e0(arg1 + 0x730, arg2 + 0x240)
sub_1407473e0(arg1 + 0x700, arg2 + 0x250)
sub_1407473e0(arg1 + 0x800, arg2 + 0x260)
sub_1407473e0(arg1 + 0x710, arg2 + 0x270)
sub_140e99960(arg1 + 0x480, arg2 + 0x280)
*(arg1 + 0x75c) = *(arg2 + 0x2a8)
*(arg1 + 0x4e5) = *(arg2 + 0x2d9)
*(arg1 + 0x4e4) = *(arg2 + 0x2da)
*(arg1 + 0x4d4) = *(arg2 + 0x2dc)
*(arg1 + 0x3e0) = *(arg2 + 0x2c0)

if (arg2 + 0x2c8 != arg1 + 0x3d0)
    if (*(arg1 + 0x3d8) != 0)
        *(arg1 + 0x3d8) = 0
    
    if (*(arg2 + 0x2d0) != 0)
        *(arg1 + 0x3d0) = *(arg2 + 0x2c8)
        *(arg1 + 0x3d8) = 1

int64_t* var_580
int32_t var_578
int64_t* var_560
int64_t* rdx_13
int64_t* rsi_1
int32_t r12
int32_t r15

if (*(arg2 + 0x2e8) == 0)
label_141b9c68d:
    int64_t* rax_17 = sub_140a84c80(0, 0x20, 0)
    var_560 = rax_17
    r12 = 2
    int32_t var_558_1 = 2
    rsi_1 = rax_17
    
    if (rax_17 != 0)
        *rsi_1 = &data_143084c60
        rsi_1[1] = sub_141ba2a50
        rsi_1[3] = sub_140a387b0()
    
    rdx_13 = &var_560
    r15 = 2
else
    int64_t* rcx_16 = *(arg2 + 0x2e0)
    
    if (rcx_16 == 0)
        goto label_141b9c68d
    
    if ((*(*rcx_16 + 0x28))(rcx_16) == 0)
        goto label_141b9c68d
    
    var_580 = nullptr
    var_578 = 0
    
    if (arg2 + 0x2e0 != &var_580 && *(arg2 + 0x2e8) != 0)
        int64_t* rcx_17 = *(arg2 + 0x2e0)
        
        if (rcx_17 != 0)
            (*(*rcx_17 + 0x40))(rcx_17, &var_580)
    
    int32_t var_558
    r12 = var_558
    rdx_13 = &var_580
    rsi_1 = var_560
    r15 = 1

sub_1407473e0(arg1 + 0x5f0, rdx_13)

if ((r15.b & 2) != 0)
    r15 &= 0xfffffffd
    
    if (r12 == 0)
        goto label_141b9c710
    
    if (rsi_1 != 0)
        (*(*rsi_1 + 0x38))(rsi_1, 0)
        int64_t* rax_20 = sub_140a84c80(rsi_1, 0, 0)
        rsi_1 = rax_20
        var_560 = rax_20
    label_141b9c710:
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)

if ((r15.b & 1) != 0)
    int64_t* rax_22
    
    if (var_578 == 0)
        rax_22 = var_580
    label_141b9c767:
        
        if (rax_22 != 0)
            sub_140a74f90(rax_22)
    else
        int64_t* rcx_22 = var_580
        
        if (rcx_22 != 0)
            (*(*rcx_22 + 0x38))(rcx_22, 0)
            rax_22 = var_580
            
            if (rax_22 != 0)
                rax_22 = sub_140a84c80(rax_22, 0, 0)
                var_580 = rax_22
            
            int32_t var_578_1 = 0
            goto label_141b9c767

sub_1407473e0(arg1 + 0x600, arg2 + 0x2f0)
*(arg1 + 0x75d) = *(arg2 + 0x300)
*(arg1 + 0x75e) = *(arg2 + 0x301)
*(arg1 + 0x811) = *(arg2 + 0x302)
*(arg1 + 0x812) = *(arg2 + 0x303)
*(arg1 + 0x75f) = *(arg2 + 0x304)
int64_t var_570 = 0
int32_t var_568 = 0

if (*(arg1 + 0x5e8) == 0)
    sub_140a20ba0(&var_570, u"Please specify an OnGenerateRow. \n", 0x22)
else
    int64_t* rcx_26 = *(arg1 + 0x5e0)
    
    if (rcx_26 == 0)
        sub_140a20ba0(&var_570, u"Please specify an OnGenerateRow. \n", 0x22)
    else if ((*(*rcx_26 + 0x28))(rcx_26) == 0)
        sub_140a20ba0(&var_570, u"Please specify an OnGenerateRow. \n", 0x22)

if (*(arg1 + 0x788) == 0)
    sub_140a20ba0(&var_570, u"Please specify a TreeItemsSource. \n", 0x23)

if (*(arg1 + 0x770) == 0)
    sub_140a20ba0(&var_570, u"Please specify an OnGetChildren. \n", 0x22)
else
    int64_t* rcx_29 = *(arg1 + 0x768)
    
    if (rcx_29 == 0)
        sub_140a20ba0(&var_570, u"Please specify an OnGetChildren. \n", 0x22)
    else if ((*(*rcx_29 + 0x28))(rcx_29) == 0)
        sub_140a20ba0(&var_570, u"Please specify an OnGetChildren. \n", 0x22)

uint64_t result
int64_t* rbx_6
bool cond:1_1

if (var_568 == 0 || var_568 - 1 s<= 0)
    int16_t var_4d8 = 0x103
    int32_t var_598_1 = 1
    int64_t* var_5a0_1 = arg2 + 0x2b0
    int64_t* var_5a8_1 = arg2 + 0x298
    int64_t var_4d0 = 0
    int32_t var_4f0 = (zx.o(0)).d
    int32_t var_4c8_1 = 0
    char var_4ec_1 = 1
    int64_t var_4e8 = 0
    int32_t var_4e0_1 = 0
    sub_140f72690(arg1, &var_4f0, arg2 + 0x208, &var_4d8, var_5a8_1, var_5a0_1, var_598_1, 
        arg2 + 0x1c0)
    sub_140745b20(&var_4e8)
    sub_140745b20(&var_4d0)
    void* rcx_60 = *(arg1 + 0x3b0)
    
    if (rcx_60 != 0)
        sub_140f5dd50(rcx_60, *(arg2 + 0x2d8))
    
    rbx_6 = *(arg1 + 0x10)
    int64_t r14_2 = 0
    
    if (rbx_6 != 0)
        int32_t rax_49 = rbx_6[1].d
        
        if (rax_49 != 0)
            rbx_6[1].d = rax_49 + 1
            rax_49.b = 1
        
        if (rax_49.b == 0)
            rbx_6 = nullptr
        
        if (rbx_6 != 0)
            int32_t rax_50 = rbx_6[1].d
            r14_2 = *(arg1 + 8)
            rbx_6[1].d = rax_50
            
            if (rax_50 == 0)
                (**rbx_6)(rbx_6)
                int32_t temp2_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
    
    int64_t* rax_53 = j_sub_140a82f30(0x28)
    int64_t* rsi_3 = rax_53
    
    if (rax_53 == 0)
        rsi_3 = nullptr
    else
        rax_53[1].d = 1
        *(rax_53 + 0xc) = 1
        *rsi_3 = &data_142edf080
        int64_t rax_54 = r14_2 + 0x4f8
        
        if (r14_2 == 0)
            rax_54 = 0
        
        if (rbx_6 != 0)
            rbx_6[1].d += 1
        
        rsi_3[2] = &data_143084c28
        rsi_3[3] = rax_54
        rsi_3[4] = rbx_6
        
        if (rbx_6 != 0)
            *(rbx_6 + 0xc) += 1
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**rbx_6)(rbx_6)
                int32_t temp4_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
    
    if (rsi_3 != 0)
        rsi_3[1].d += 1
    
    int64_t r15_1 = sx.q(*(arg1 + 0x230))
    int32_t rax_57 = (r15_1 + 1).d
    *(arg1 + 0x230) = rax_57
    
    if (rax_57 s> *(arg1 + 0x234))
        sub_1405a4f90(arg1 + 0x228)
    
    result = (r15_1 << 4) + *(arg1 + 0x228)
    *result = &rsi_3[2]
    *(result + 8) = rsi_3
    
    if (rsi_3 != 0)
        rsi_3[1].d += 1
    
    if (rsi_3 != 0)
        rsi_3[1].d -= 1
        
        if (rsi_3[1].d == 1)
            result = (**rsi_3)(rsi_3)
            int32_t temp11_1 = *(rsi_3 + 0xc)
            *(rsi_3 + 0xc) -= 1
            
            if (temp11_1 == 1)
                result = (*(*rsi_3 + 8))(rsi_3, 1)
    
    if (rsi_3 != 0)
        rsi_3[1].d -= 1
        
        if (rsi_3[1].d == 1)
            result = (**rsi_3)(rsi_3)
            int32_t temp14_1 = *(rsi_3 + 0xc)
            *(rsi_3 + 0xc) -= 1
            
            if (temp14_1 == 1)
                result = (*(*rsi_3 + 8))(rsi_3, 1)
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            result = (**rbx_6)(rbx_6)
            int32_t temp15_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            cond:1_1 = temp15_1 != 1
            goto label_141b9ccf3
else
    void var_4a0
    int64_t* rax_34 = sub_140aae420(&var_4a0, &var_570)
    int64_t var_540 = *rax_34
    int64_t* rcx_33 = rax_34[1]
    
    if (rcx_33 != 0)
        rcx_33[1].d += 1
    
    int32_t var_530_1 = rax_34[2].d
    char var_528_1 = 1
    int64_t var_520 = 0
    int32_t var_518_1 = 0
    void var_488
    int64_t* rax_36 = sub_14068d9d0(&var_488)
    sub_14065da90(&rax_36[0x34], &var_540)
    rax_36[0x37].b = var_528_1
    sub_140692f90(&rax_36[0x38], &var_520)
    void*** rax_37 = j_sub_140a82f30(0x7a8)
    void*** rsi_2 = rax_37
    
    if (rax_37 == 0)
        rsi_2 = nullptr
    else
        rax_37[1].d = 1
        *(rax_37 + 0xc) = 1
        *rsi_2 = &data_142d8b060
        
        if (rsi_2 != -0x10)
            sub_140f66da0(&rsi_2[2])
    
    void* var_508 = &rsi_2[2]
    sub_14065fa30(&var_508, &rsi_2[2])
    int64_t var_5a8 = 0x798
    void var_588
    void* var_4f8_1 = &var_588
    void* var_4b0
    void** rax_38 =
        sub_140697520(&var_508, &var_4b0, rax_36, sub_140e23ed0(&rsi_2[2], "STextBlock"))
    int64_t* rbx_2 = rax_38[1]
    void* var_4c0 = *rax_38
    int64_t* var_4b8_1 = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    *(arg1 + 0x2d8) = 2
    *(arg1 + 0x2dc) = 2
    sub_140de1b90(arg1 + 0x2b8, &var_4c0)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp6_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    int64_t* var_4a8
    
    if (var_4a8 != 0)
        var_4a8[1].d -= 1
        
        if (var_4a8[1].d == 1)
            (**var_4a8)(var_4a8)
            int32_t temp9_1 = *(var_4a8 + 0xc)
            *(var_4a8 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_4a8 + 8))(var_4a8, 1)
    
    if (rsi_2 != 0)
        rsi_2[1].d -= 1
        
        if (rsi_2[1].d == 1)
            (**rsi_2)(rsi_2)
            int32_t temp12_1 = *(rsi_2 + 0xc)
            *(rsi_2 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*rsi_2)[1](rsi_2, 1)
    
    sub_1406913d0(&var_488)
    result = sub_140745b20(&var_520)
    
    if (rcx_33 != 0)
        result = zx.q(rcx_33[1].d)
        rcx_33[1].d -= 1
        
        if (result.d == 1)
            (**rcx_33)(rcx_33)
            result = zx.q(*(rcx_33 + 0xc))
            *(rcx_33 + 0xc) -= 1
            
            if (result.d == 1)
                result = (*(*rcx_33 + 8))(rcx_33, 1)
    
    int64_t* var_498
    rbx_6 = var_498
    
    if (rbx_6 != 0)
        result = zx.q(rbx_6[1].d)
        rbx_6[1].d -= 1
        
        if (result.d == 1)
            result = (**rbx_6)(rbx_6)
            int32_t rdi_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            cond:1_1 = rdi_1 != 1
        label_141b9ccf3:
            
            if (not(cond:1_1))
                result = (*(*rbx_6 + 8))(rbx_6, 1)
int64_t rcx_72 = var_570

if (rcx_72 != 0)
    result = sub_140a74f90(rcx_72)

__security_check_cookie(rax_1 ^ &var_5c8)
return result
