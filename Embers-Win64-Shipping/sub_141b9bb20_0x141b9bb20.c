// 函数: sub_141b9bb20
// 地址: 0x141b9bb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5c8
int64_t rax_1 = __security_cookie ^ &var_5c8
*(arg1 + 0x2c) = *(arg2 + 0x95)
int32_t var_4f8 = 0
sub_1407473e0(arg1 + 0x5e0, arg2 + 0x1a0)
sub_1407473e0(arg1 + 0x610, arg2 + 0x1b0)
sub_1407473e0(arg1 + 0x620, arg2 + 0x1d0)
*(arg1 + 0x6e0) = *(arg2 + 0x1e0)
sub_1407473e0(arg1 + 0x470, arg2 + 0x230)
sub_1407473e0(arg1 + 0x720, arg2 + 0x240)
sub_1407473e0(arg1 + 0x730, arg2 + 0x250)
sub_1407473e0(arg1 + 0x700, arg2 + 0x260)
sub_1407473e0(arg1 + 0x710, arg2 + 0x270)
sub_140e99960(arg1 + 0x480, arg2 + 0x280)
*(arg1 + 0x75c) = *(arg2 + 0x298)
*(arg1 + 0x4e4) = *(arg2 + 0x2e1)
*(arg1 + 0x4e5) = *(arg2 + 0x2e2)
*(arg1 + 0x4d4) = *(arg2 + 0x2e4)
*(arg1 + 0x75d) = *(arg2 + 0x2e8)
*(arg1 + 0x75e) = *(arg2 + 0x2e9)
*(arg1 + 0x740) = *(arg2 + 0x2f0)
*(arg1 + 0x741) = *(arg2 + 0x2f1)
sub_140692f90(arg1 + 0x748, arg2 + 0x2f8)
*(arg1 + 0x3e0) = *(arg2 + 0x2b4)

if (arg2 + 0x2b8 != arg1 + 0x3d0)
    if (*(arg1 + 0x3d8) != 0)
        *(arg1 + 0x3d8) = 0
    
    if (*(arg2 + 0x2c0) != 0)
        *(arg1 + 0x3d0) = *(arg2 + 0x2b8)
        *(arg1 + 0x3d8) = 1

int64_t* var_580
int32_t var_578
int64_t* var_560
int64_t* rdx_11
int64_t* rbx_1
int32_t r14
int32_t r15

if (*(arg2 + 0x310) == 0)
label_141b9bd53:
    int64_t* rax_18 = sub_140a84c80(0, 0x20, 0)
    var_560 = rax_18
    r15 = 2
    int32_t var_558_1 = 2
    rbx_1 = rax_18
    
    if (rax_18 != 0)
        *rbx_1 = &data_143084c60
        rbx_1[1] = sub_141ba2a50
        rbx_1[3] = sub_140a387b0()
    
    rdx_11 = &var_560
    r14 = 2
else
    int64_t* rcx_11 = *(arg2 + 0x308)
    
    if (rcx_11 == 0)
        goto label_141b9bd53
    
    if ((*(*rcx_11 + 0x28))(rcx_11) == 0)
        goto label_141b9bd53
    
    var_580 = nullptr
    var_578 = 0
    
    if (arg2 + 0x308 != &var_580 && *(arg2 + 0x310) != 0)
        int64_t* rcx_12 = *(arg2 + 0x308)
        
        if (rcx_12 != 0)
            (*(*rcx_12 + 0x40))(rcx_12, &var_580)
    
    int32_t var_558
    r15 = var_558
    rdx_11 = &var_580
    rbx_1 = var_560
    r14 = 1

sub_1407473e0(arg1 + 0x5f0, rdx_11)

if ((r14.b & 2) != 0)
    r14 &= 0xfffffffd
    
    if (r15 == 0)
        goto label_141b9bdd6
    
    if (rbx_1 != 0)
        (*(*rbx_1 + 0x38))(rbx_1, 0)
        int64_t* rax_21 = sub_140a84c80(rbx_1, 0, 0)
        rbx_1 = rax_21
        var_560 = rax_21
    label_141b9bdd6:
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)

if ((r14.b & 1) != 0)
    int64_t* rax_23
    
    if (var_578 == 0)
        rax_23 = var_580
    label_141b9be2a:
        
        if (rax_23 != 0)
            sub_140a74f90(rax_23)
    else
        int64_t* rcx_17 = var_580
        
        if (rcx_17 != 0)
            (*(*rcx_17 + 0x38))(rcx_17, 0)
            rax_23 = var_580
            
            if (rax_23 != 0)
                rax_23 = sub_140a84c80(rax_23, 0, 0)
                var_580 = rax_23
            
            int32_t var_578_1 = 0
            goto label_141b9be2a

sub_1407473e0(arg1 + 0x600, arg2 + 0x318)
*(arg1 + 0x768) = *(arg2 + 0x328)
int64_t var_570 = 0
int32_t var_568 = 0

if (*(arg1 + 0x5e8) == 0)
    sub_140a20ba0(&var_570, u"Please specify an OnGenerateTile. \n", 0x23)
else
    int64_t* rcx_21 = *(arg1 + 0x5e0)
    
    if (rcx_21 == 0)
        sub_140a20ba0(&var_570, u"Please specify an OnGenerateTile. \n", 0x23)
    else if ((*(*rcx_21 + 0x28))(rcx_21) == 0)
        sub_140a20ba0(&var_570, u"Please specify an OnGenerateTile. \n", 0x23)

if (*(arg1 + 0x6e0) == 0)
    sub_140a20ba0(&var_570, u"Please specify a ListItemsSource. \n", 0x23)

uint64_t result
int64_t* rbx_8
bool cond:1_1

if (var_568 == 0 || var_568 - 1 s<= 0)
    int32_t rax_44 = *(arg2 + 0x2b0)
    int128_t var_4c8
    int64_t* var_5a8_1 = &var_4c8
    var_4c8 = zx.o(0)
    sub_140f72690(arg1, arg2 + 0x200, arg2 + 0x1e8, arg2 + 0x218, var_5a8_1, arg2 + 0x2a0, rax_44, 
        arg2 + 0x1c0)
    int64_t* rbx_7 = var_4c8:8.q
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t temp2_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_7 + 8))(rbx_7, 1)
    
    void* rcx_53 = *(arg1 + 0x3b0)
    
    if (rcx_53 != 0)
        sub_140f5dd50(rcx_53, *(arg2 + 0x2e0))
        char rax_47 = *(arg2 + 0x2c8)
        char rax_48 = *(arg2 + 0x2c9)
        int64_t var_538 = 0
        int32_t var_530_1 = 0
        sub_1407473e0(&var_538, arg2 + 0x2d0)
        void* rcx_55 = *(arg1 + 0x3b0)
        *(rcx_55 + 0x4b8) = rax_47
        *(rcx_55 + 0x4b9) = rax_48
        sub_1407473e0(rcx_55 + 0x4c0, &var_538)
        sub_140745b20(&var_538)
    
    rbx_8 = *(arg1 + 0x10)
    int64_t r14_2 = 0
    
    if (rbx_8 != 0)
        int32_t rax_51 = rbx_8[1].d
        
        if (rax_51 != 0)
            rbx_8[1].d = rax_51 + 1
            rax_51.b = 1
        
        if (rax_51.b == 0)
            rbx_8 = nullptr
        
        if (rbx_8 != 0)
            int32_t rax_52 = rbx_8[1].d
            r14_2 = *(arg1 + 8)
            rbx_8[1].d = rax_52
            
            if (rax_52 == 0)
                (**rbx_8)(rbx_8)
                int32_t temp5_1 = *(rbx_8 + 0xc)
                *(rbx_8 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_8 + 8))(rbx_8, 1)
    
    int64_t* rax_55 = j_sub_140a82f30(0x28)
    int64_t* rsi_2 = rax_55
    
    if (rax_55 == 0)
        rsi_2 = nullptr
    else
        rax_55[1].d = 1
        *(rax_55 + 0xc) = 1
        *rsi_2 = &data_142edf080
        int64_t rax_56 = r14_2 + 0x4f8
        
        if (r14_2 == 0)
            rax_56 = 0
        
        if (rbx_8 != 0)
            rbx_8[1].d += 1
        
        rsi_2[2] = &data_143084c28
        rsi_2[3] = rax_56
        rsi_2[4] = rbx_8
        
        if (rbx_8 != 0)
            *(rbx_8 + 0xc) += 1
            rbx_8[1].d -= 1
            
            if (rbx_8[1].d == 1)
                (**rbx_8)(rbx_8)
                int32_t temp8_1 = *(rbx_8 + 0xc)
                *(rbx_8 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rbx_8 + 8))(rbx_8, 1)
    
    if (rsi_2 != 0)
        rsi_2[1].d += 1
    
    int64_t r15_1 = sx.q(*(arg1 + 0x230))
    int32_t rax_59 = (r15_1 + 1).d
    *(arg1 + 0x230) = rax_59
    
    if (rax_59 s> *(arg1 + 0x234))
        sub_1405a4f90(arg1 + 0x228)
    
    result = (r15_1 << 4) + *(arg1 + 0x228)
    *result = &rsi_2[2]
    *(result + 8) = rsi_2
    
    if (rsi_2 != 0)
        rsi_2[1].d += 1
    
    if (rsi_2 != 0)
        rsi_2[1].d -= 1
        
        if (rsi_2[1].d == 1)
            result = (**rsi_2)(rsi_2)
            int32_t temp14_1 = *(rsi_2 + 0xc)
            *(rsi_2 + 0xc) -= 1
            
            if (temp14_1 == 1)
                result = (*(*rsi_2 + 8))(rsi_2, 1)
    
    if (rsi_2 != 0)
        rsi_2[1].d -= 1
        
        if (rsi_2[1].d == 1)
            result = (**rsi_2)(rsi_2)
            int32_t temp16_1 = *(rsi_2 + 0xc)
            *(rsi_2 + 0xc) -= 1
            
            if (temp16_1 == 1)
                result = (*(*rsi_2 + 8))(rsi_2, 1)
    
    if (rbx_8 != 0)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            result = (**rbx_8)(rbx_8)
            int32_t temp17_1 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            cond:1_1 = temp17_1 != 1
            goto label_141b9c3ac
else
    void var_4a8
    int64_t* rax_29 = sub_140aae420(&var_4a8, &var_570)
    int64_t var_528 = *rax_29
    int64_t* rcx_26 = rax_29[1]
    
    if (rcx_26 != 0)
        rcx_26[1].d += 1
    
    int32_t var_518_1 = rax_29[2].d
    char var_510_1 = 1
    int64_t var_508 = 0
    int32_t var_500_1 = 0
    void var_490
    int64_t* rax_31 = sub_14068d9d0(&var_490)
    sub_14065da90(&rax_31[0x34], &var_528)
    rax_31[0x37].b = var_510_1
    sub_140692f90(&rax_31[0x38], &var_508)
    void*** rax_32 = j_sub_140a82f30(0x7a8)
    void*** rsi_1 = rax_32
    
    if (rax_32 == 0)
        rsi_1 = nullptr
    else
        rax_32[1].d = 1
        *(rax_32 + 0xc) = 1
        *rsi_1 = &data_142d8b060
        
        if (rsi_1 != -0x10)
            sub_140f66da0(&rsi_1[2])
    
    void* var_4f0 = &rsi_1[2]
    sub_14065fa30(&var_4f0, &rsi_1[2])
    int64_t var_5a8 = 0x798
    void var_588
    void* var_4e0_1 = &var_588
    void* var_4b8
    void** rax_33 =
        sub_140697520(&var_4f0, &var_4b8, rax_31, sub_140e23ed0(&rsi_1[2], "STextBlock"))
    int64_t* rbx_3 = rax_33[1]
    void* var_4d8 = *rax_33
    int64_t* var_4d0_1 = rbx_3
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    *(arg1 + 0x2d8) = 2
    *(arg1 + 0x2dc) = 2
    sub_140de1b90(arg1 + 0x2b8, &var_4d8)
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp7_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    int64_t* var_4b0
    
    if (var_4b0 != 0)
        var_4b0[1].d -= 1
        
        if (var_4b0[1].d == 1)
            (**var_4b0)(var_4b0)
            int32_t temp10_1 = *(var_4b0 + 0xc)
            *(var_4b0 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*var_4b0 + 8))(var_4b0, 1)
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp12_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*rsi_1)[1](rsi_1, 1)
    
    sub_1406913d0(&var_490)
    result = sub_140745b20(&var_508)
    
    if (rcx_26 != 0)
        result = zx.q(rcx_26[1].d)
        rcx_26[1].d -= 1
        
        if (result.d == 1)
            (**rcx_26)(rcx_26)
            result = zx.q(*(rcx_26 + 0xc))
            *(rcx_26 + 0xc) -= 1
            
            if (result.d == 1)
                result = (*(*rcx_26 + 8))(rcx_26, 1)
    
    int64_t* var_4a0
    rbx_8 = var_4a0
    
    if (rbx_8 != 0)
        result = zx.q(rbx_8[1].d)
        rbx_8[1].d -= 1
        
        if (result.d == 1)
            result = (**rbx_8)(rbx_8)
            int32_t rdi_1 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            cond:1_1 = rdi_1 != 1
        label_141b9c3ac:
            
            if (not(cond:1_1))
                result = (*(*rbx_8 + 8))(rbx_8, 1)
int64_t rcx_69 = var_570

if (rcx_69 != 0)
    result = sub_140a74f90(rcx_69)

__security_check_cookie(rax_1 ^ &var_5c8)
return result
