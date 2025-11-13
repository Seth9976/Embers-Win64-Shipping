// 函数: sub_141b9ac30
// 地址: 0x141b9ac30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5e8
int64_t rax_1 = __security_cookie ^ &var_5e8
*(arg1 + 0x2c) = *(arg2 + 0x95)
int32_t var_518 = 0
sub_1407473e0(arg1 + 0x5e0, arg2 + 0x1a0)
sub_1407473e0(arg1 + 0x5d0, arg2 + 0x1b0)
sub_1407473e0(arg1 + 0x610, arg2 + 0x1c0)
sub_1407473e0(arg1 + 0x620, arg2 + 0x1e0)
*(arg1 + 0x6e0) = *(arg2 + 0x1f0)
sub_1407473e0(arg1 + 0x470, arg2 + 0x210)
sub_1407473e0(arg1 + 0x720, arg2 + 0x220)
sub_1407473e0(arg1 + 0x730, arg2 + 0x230)
sub_1407473e0(arg1 + 0x700, arg2 + 0x240)
sub_1407473e0(arg1 + 0x710, arg2 + 0x250)
sub_140e99960(arg1 + 0x480, arg2 + 0x260)
*(arg1 + 0x75c) = *(arg2 + 0x288)
*(arg1 + 0x4e4) = *(arg2 + 0x2d1)
*(arg1 + 0x4e5) = *(arg2 + 0x2d2)
*(arg1 + 0x4d4) = *(arg2 + 0x2d4)
*(arg1 + 0x758) = *(arg2 + 0x2d8)
*(arg1 + 0x75d) = *(arg2 + 0x2dc)
*(arg1 + 0x75e) = *(arg2 + 0x2dd)
*(arg1 + 0x740) = *(arg2 + 0x2e0)
*(arg1 + 0x741) = *(arg2 + 0x2e1)
sub_140692f90(arg1 + 0x748, arg2 + 0x2e8)
*(arg1 + 0x75f) = *(arg2 + 0x2f8)
*(arg1 + 0x3e0) = *(arg2 + 0x2a4)

if (arg2 + 0x2a8 != arg1 + 0x3d0)
    if (*(arg1 + 0x3d8) != 0)
        *(arg1 + 0x3d8) = 0
    
    if (*(arg2 + 0x2b0) != 0)
        *(arg1 + 0x3d0) = *(arg2 + 0x2a8)
        *(arg1 + 0x3d8) = 1

int64_t* var_5a0
int32_t var_598
int64_t* var_580
int64_t* rdx_12
int64_t* rbx_1
int32_t r14
int32_t r15

if (*(arg2 + 0x308) == 0)
label_141b9ae8f:
    int64_t* rax_20 = sub_140a84c80(0, 0x20, 0)
    var_580 = rax_20
    r15 = 2
    int32_t var_578_1 = 2
    rbx_1 = rax_20
    
    if (rax_20 != 0)
        *rbx_1 = &data_143084c60
        rbx_1[1] = sub_141ba2a50
        rbx_1[3] = sub_140a387b0()
    
    rdx_12 = &var_580
    r14 = 2
else
    int64_t* rcx_12 = *(arg2 + 0x300)
    
    if (rcx_12 == 0)
        goto label_141b9ae8f
    
    if ((*(*rcx_12 + 0x28))(rcx_12) == 0)
        goto label_141b9ae8f
    
    var_5a0 = nullptr
    var_598 = 0
    
    if (arg2 + 0x300 != &var_5a0 && *(arg2 + 0x308) != 0)
        int64_t* rcx_13 = *(arg2 + 0x300)
        
        if (rcx_13 != 0)
            (*(*rcx_13 + 0x40))(rcx_13, &var_5a0)
    
    int32_t var_578
    r15 = var_578
    rdx_12 = &var_5a0
    rbx_1 = var_580
    r14 = 1

sub_1407473e0(arg1 + 0x5f0, rdx_12)

if ((r14.b & 2) != 0)
    r14 &= 0xfffffffd
    
    if (r15 == 0)
        goto label_141b9af12
    
    if (rbx_1 != 0)
        (*(*rbx_1 + 0x38))(rbx_1, 0)
        int64_t* rax_23 = sub_140a84c80(rbx_1, 0, 0)
        rbx_1 = rax_23
        var_580 = rax_23
    label_141b9af12:
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)

if ((r14.b & 1) != 0)
    int64_t* rax_25
    
    if (var_598 == 0)
        rax_25 = var_5a0
    label_141b9af66:
        
        if (rax_25 != 0)
            sub_140a74f90(rax_25)
    else
        int64_t* rcx_18 = var_5a0
        
        if (rcx_18 != 0)
            (*(*rcx_18 + 0x38))(rcx_18, 0)
            rax_25 = var_5a0
            
            if (rax_25 != 0)
                rax_25 = sub_140a84c80(rax_25, 0, 0)
                var_5a0 = rax_25
            
            int32_t var_598_1 = 0
            goto label_141b9af66

sub_1407473e0(arg1 + 0x600, arg2 + 0x310)
int64_t var_590 = 0
int32_t var_588 = 0

if (*(arg1 + 0x5e8) == 0)
    sub_140a20ba0(&var_590, u"Please specify an OnGenerateRow. \n", 0x22)
else
    int64_t* rcx_22 = *(arg1 + 0x5e0)
    
    if (rcx_22 == 0)
        sub_140a20ba0(&var_590, u"Please specify an OnGenerateRow. \n", 0x22)
    else if ((*(*rcx_22 + 0x28))(rcx_22) == 0)
        sub_140a20ba0(&var_590, u"Please specify an OnGenerateRow. \n", 0x22)

if (*(arg1 + 0x6e0) == 0)
    sub_140a20ba0(&var_590, u"Please specify a ListItemsSource. \n", 0x23)

uint64_t result
int64_t* rbx_7
bool cond:1_1

if (var_588 == 0 || var_588 - 1 s<= 0)
    int16_t var_4e0 = 0x103
    int32_t rax_45 = *(arg2 + 0x2a0)
    int32_t var_4f8 = (zx.o(0)).d
    int64_t var_4d8 = 0
    int32_t var_4d0_1 = 0
    char var_4f4_1 = 1
    int64_t var_4f0 = 0
    int32_t var_4e8_1 = 0
    sub_140f72690(arg1, &var_4f8, arg2 + 0x1f8, &var_4e0, arg2 + 0x278, arg2 + 0x290, rax_45, 
        arg2 + 0x1d0)
    sub_140745b20(&var_4f0)
    sub_140745b20(&var_4d8)
    void* rcx_54 = *(arg1 + 0x3b0)
    
    if (rcx_54 != 0)
        sub_140f5dd50(rcx_54, *(arg2 + 0x2d0))
        char rax_46 = *(arg2 + 0x2b8)
        char rax_47 = *(arg2 + 0x2b9)
        int64_t var_558 = 0
        int32_t var_550_1 = 0
        sub_1407473e0(&var_558, arg2 + 0x2c0)
        void* rcx_56 = *(arg1 + 0x3b0)
        *(rcx_56 + 0x4b8) = rax_46
        *(rcx_56 + 0x4b9) = rax_47
        sub_1407473e0(rcx_56 + 0x4c0, &var_558)
        sub_140745b20(&var_558)
    
    rbx_7 = *(arg1 + 0x10)
    int64_t r14_2 = 0
    
    if (rbx_7 != 0)
        int32_t rax_50 = rbx_7[1].d
        
        if (rax_50 != 0)
            rbx_7[1].d = rax_50 + 1
            rax_50.b = 1
        
        if (rax_50.b == 0)
            rbx_7 = nullptr
        
        if (rbx_7 != 0)
            int32_t rax_51 = rbx_7[1].d
            r14_2 = *(arg1 + 8)
            rbx_7[1].d = rax_51
            
            if (rax_51 == 0)
                (**rbx_7)(rbx_7)
                int32_t temp2_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_7 + 8))(rbx_7, 1)
    
    int64_t* rax_54 = j_sub_140a82f30(0x28)
    int64_t* rsi_2 = rax_54
    
    if (rax_54 == 0)
        rsi_2 = nullptr
    else
        rax_54[1].d = 1
        *(rax_54 + 0xc) = 1
        *rsi_2 = &data_142edf080
        int64_t rax_55 = r14_2 + 0x4f8
        
        if (r14_2 == 0)
            rax_55 = 0
        
        if (rbx_7 != 0)
            rbx_7[1].d += 1
        
        rsi_2[2] = &data_143084c28
        rsi_2[3] = rax_55
        rsi_2[4] = rbx_7
        
        if (rbx_7 != 0)
            *(rbx_7 + 0xc) += 1
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                (**rbx_7)(rbx_7)
                int32_t temp4_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_7 + 8))(rbx_7, 1)
    
    if (rsi_2 != 0)
        rsi_2[1].d += 1
    
    int64_t r15_1 = sx.q(*(arg1 + 0x230))
    int32_t rax_58 = (r15_1 + 1).d
    *(arg1 + 0x230) = rax_58
    
    if (rax_58 s> *(arg1 + 0x234))
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
            int32_t temp11_1 = *(rsi_2 + 0xc)
            *(rsi_2 + 0xc) -= 1
            
            if (temp11_1 == 1)
                result = (*(*rsi_2 + 8))(rsi_2, 1)
    
    if (rsi_2 != 0)
        rsi_2[1].d -= 1
        
        if (rsi_2[1].d == 1)
            result = (**rsi_2)(rsi_2)
            int32_t temp14_1 = *(rsi_2 + 0xc)
            *(rsi_2 + 0xc) -= 1
            
            if (temp14_1 == 1)
                result = (*(*rsi_2 + 8))(rsi_2, 1)
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            result = (**rbx_7)(rbx_7)
            int32_t temp15_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            cond:1_1 = temp15_1 != 1
            goto label_141b9b4d9
else
    void var_4a8
    int64_t* rax_30 = sub_140aae420(&var_4a8, &var_590)
    int64_t var_548 = *rax_30
    int64_t* rcx_27 = rax_30[1]
    
    if (rcx_27 != 0)
        rcx_27[1].d += 1
    
    int32_t var_538_1 = rax_30[2].d
    char var_530_1 = 1
    int64_t var_528 = 0
    int32_t var_520_1 = 0
    void var_490
    int64_t* rax_32 = sub_14068d9d0(&var_490)
    sub_14065da90(&rax_32[0x34], &var_548)
    rax_32[0x37].b = var_530_1
    sub_140692f90(&rax_32[0x38], &var_528)
    void*** rax_33 = j_sub_140a82f30(0x7a8)
    void*** rsi_1 = rax_33
    
    if (rax_33 == 0)
        rsi_1 = nullptr
    else
        rax_33[1].d = 1
        *(rax_33 + 0xc) = 1
        *rsi_1 = &data_142d8b060
        
        if (rsi_1 != -0x10)
            sub_140f66da0(&rsi_1[2])
    
    void* var_510 = &rsi_1[2]
    sub_14065fa30(&var_510, &rsi_1[2])
    int64_t var_5c8 = 0x798
    void var_5a8
    void* var_500_1 = &var_5a8
    void* var_4b8
    void** rax_34 =
        sub_140697520(&var_510, &var_4b8, rax_32, sub_140e23ed0(&rsi_1[2], "STextBlock"))
    int64_t* rbx_3 = rax_34[1]
    void* var_4c8 = *rax_34
    int64_t* var_4c0_1 = rbx_3
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    *(arg1 + 0x2d8) = 2
    *(arg1 + 0x2dc) = 2
    sub_140de1b90(arg1 + 0x2b8, &var_4c8)
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp6_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    int64_t* var_4b0
    
    if (var_4b0 != 0)
        var_4b0[1].d -= 1
        
        if (var_4b0[1].d == 1)
            (**var_4b0)(var_4b0)
            int32_t temp9_1 = *(var_4b0 + 0xc)
            *(var_4b0 + 0xc) -= 1
            
            if (temp9_1 == 1)
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
    result = sub_140745b20(&var_528)
    
    if (rcx_27 != 0)
        result = zx.q(rcx_27[1].d)
        rcx_27[1].d -= 1
        
        if (result.d == 1)
            (**rcx_27)(rcx_27)
            result = zx.q(*(rcx_27 + 0xc))
            *(rcx_27 + 0xc) -= 1
            
            if (result.d == 1)
                result = (*(*rcx_27 + 8))(rcx_27, 1)
    
    int64_t* var_4a0
    rbx_7 = var_4a0
    
    if (rbx_7 != 0)
        result = zx.q(rbx_7[1].d)
        rbx_7[1].d -= 1
        
        if (result.d == 1)
            result = (**rbx_7)(rbx_7)
            int32_t rdi_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            cond:1_1 = rdi_1 != 1
        label_141b9b4d9:
            
            if (not(cond:1_1))
                result = (*(*rbx_7 + 8))(rbx_7, 1)
int64_t rcx_70 = var_590

if (rcx_70 != 0)
    result = sub_140a74f90(rcx_70)

__security_check_cookie(rax_1 ^ &var_5e8)
return result
