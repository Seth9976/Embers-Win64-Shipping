// 函数: sub_140eb1660
// 地址: 0x140eb1660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2980)
void var_29b8
int64_t rax_1 = __security_cookie ^ &var_29b8
sub_140ea4270(arg1)
int64_t* rax_3 = *arg3 + 0x20

if (arg1 + 0x3a8 != rax_3)
    int64_t rdi_1 = sx.q(rax_3[1].d)
    int64_t r14_1 = *rax_3
    int32_t r8 = *(arg1 + 0x3b4)
    *(arg1 + 0x3b0) = rdi_1.d
    
    if (rdi_1.d != 0 || r8 != 0)
        sub_1405a4be0(arg1 + 0x3a8, rdi_1.d, r8)
        memcpy(*(arg1 + 0x3a8), r14_1, (rdi_1 << 4).d)
    else
        *(arg1 + 0x3b4) = 0

*(arg1 + 0x3a0) = *(*arg3 + 0x18)
*(arg1 + 0x458) = *(arg2 + 0x1a0)
__builtin_memset(arg1 + 0x400, 0, 0x20)
void var_2090
sub_140d96150(arg1 + 0x3b8, sub_140d921c0(&var_2090))
void var_2100
sub_140de1590(arg1 + 0x460, sub_140d91e10(&var_2100, (zx.o(0)).d, 0.150000006f, 0))
double zmm0 = sub_140d952d0(&var_2100)

if (*(*arg3 + 0x30) == 0)
    sub_140db3540(arg1 + 0x460, zmm0)
else
    sub_140db3580(arg1 + 0x460, zmm0)

int64_t* rbx_1 = data_143e243c8
void var_23d0
int64_t r8_3 = *sub_140b58170(&var_23d0, "Docking.UnhideTabwellButton", 1)
int64_t var_23c8 = r8_3
int64_t var_23c0 = r8_3
int64_t* rax_11 = (*(*rbx_1 + 0x88))(rbx_1, data_143e243e8)
int64_t* var_2968 = rax_11

if (rax_11 == 0)
    sub_140e13010()
    var_2968 = &data_143e24b30

int64_t* rsi_1 = *(arg1 + 0x10)
int64_t r12 = 0

if (rsi_1 != 0)
    int32_t rax_12 = rsi_1[1].d
    
    if (rax_12 != 0)
        rsi_1[1].d = rax_12 + 1
        rax_12.b = 1
    
    if (rax_12.b == 0)
        rsi_1 = nullptr
    
    if (rsi_1 != 0)
        int32_t rax_13 = rsi_1[1].d
        r12 = *(arg1 + 8)
        rsi_1[1].d = rax_13
        
        if (rax_13 == 0)
            (**rsi_1)(rsi_1)
            int32_t temp0_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp0_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)

int64_t var_25a0 = r12
int64_t* var_2598 = rsi_1

if (rsi_1 != 0)
    rsi_1[1].d += 1

char rbx_2 = data_1439ae520
int32_t var_262c = 0x41200000
int64_t* var_2948 = sub_140ebefc0
char var_2760 = rbx_2
char var_27a8 = rbx_2
char var_2590 = 1
int64_t var_2588 = 0
int32_t var_2580 = 0
int32_t var_2630 = 0
char var_2628 = 1
int64_t var_2620 = 0
int32_t var_2618 = 0
int32_t var_2940 = 0
char var_275f = 1
int64_t var_2758 = 0
int32_t var_2750 = 0
int32_t var_2778 = 0x3f800000
char var_2774 = 1
int64_t var_2770 = 0
int32_t var_2768 = 0
char var_27a7 = 1
int64_t var_27a0 = 0
int32_t var_2798 = 0
void*** rax_16 = j_sub_140a82f30(0x88)
void*** rdi_2 = rax_16

if (rax_16 == 0)
    rdi_2 = nullptr
else
    sub_14068e490(rax_16)
    *rdi_2 = &data_142d8add0

int64_t* rax_17 = sub_140698b50(rdi_2)
*(arg1 + 0x408) = rax_17
int64_t* var_2988 = rax_17
int128_t var_2430
__builtin_memcpy(&var_2430, "\x00\x00\xa0\x40\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01", 
    0x11)
int64_t var_2418 = 0
int32_t var_2410 = 0
__builtin_memcpy(&rax_17[9], 
    "\x00\x00\xa0\x40\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01", 0x11)
sub_1407473e0(&rax_17[0xc], &var_2418)
sub_140745b20(&var_2418)
*(rax_17 + 0x21) = 2
void var_12b8
int64_t* rax_18 = sub_140e941c0(&var_12b8)
int64_t var_28d8 = r12
int64_t* rdi_4 = rsi_1

if (rsi_1 != 0)
    rsi_1[1].d += 1

if (&var_28d8 != &rax_18[0x34])
    int128_t zmm1_1 = var_28d8.o
    int128_t var_20a0_1 = zmm1_1
    var_28d8.o = *(rax_18 + 0x1a0)
    rdi_4 = rsi_1
    *(rax_18 + 0x1a0) = zmm1_1

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t temp2_1 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi_4 + 8))(rdi_4, 1)

rax_18[0x36].b = 1
sub_1407473e0(&rax_18[0x37], &var_2588)
void*** rax_21 = sub_140e91cd0()
void* var_2790 = &rax_21[2]
sub_140918950(&var_2790, &rax_21[2])
int64_t var_2998 = 0x300
void var_296b
void* var_2780 = &var_296b
int128_t zmm1_2 = sub_140e23ed0(&rax_21[2], "SDockingTabWell")

if (rax_21 != 0)
    rax_21[1].d += 1

void var_2120

if (arg1 + 0x3f0 == &var_2120)
label_140eb1ae0:
    
    if (rax_21 != 0)
        rax_21[1].d -= 1
        
        if (rax_21[1].d == 1)
            (**rax_21)(rax_21)
            int32_t temp4_1 = *(rax_21 + 0xc)
            *(rax_21 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rax_21)[1](rax_21, 1)
else
    *(arg1 + 0x3f0) = &rax_21[2]
    void*** r14_4 = *(arg1 + 0x3f8)
    
    if (rax_21 == r14_4)
        goto label_140eb1ae0
    
    *(arg1 + 0x3f8) = rax_21
    
    if (r14_4 != 0)
        r14_4[1].d -= 1
        
        if (r14_4[1].d == 1)
            (**r14_4)(r14_4)
            int32_t temp6_1 = *(r14_4 + 0xc)
            *(r14_4 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*r14_4)[1](r14_4, 1)

void* var_2358
void** rax_26 = sub_140e9c900(&var_2790, &var_2358, rax_18, zmm1_2)
int64_t* rdi_6 = rax_26[1]
void* var_2538 = *rax_26
int64_t* var_2530 = rdi_6

if (rdi_6 != 0)
    rdi_6[1].d += 1

void*** rax_27 = j_sub_140a82f30(0x88)
void*** r14_5 = rax_27

if (rax_27 == 0)
    r14_5 = nullptr
else
    sub_14068e490(rax_27)
    *r14_5 = &data_142d8add0

void* rax_28 = sub_140698b50(r14_5)
void* var_2918 = rax_28
sub_140693600(rax_28, &var_2538)

if (rdi_6 != 0)
    rdi_6[1].d -= 1
    
    if (rdi_6[1].d == 1)
        int64_t rdx_10 = *rdi_6
        (*rdx_10)(rdi_6, rdx_10)
        int32_t temp8_1 = *(rdi_6 + 0xc)
        *(rdi_6 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rdi_6 + 8))(rdi_6, 1)

void var_1638
int64_t* rax_30 = sub_140e50180(&var_1638)
int128_t var_23b8 = var_2948.o
int64_t* var_2928
int64_t* rax_31 = sub_140e45cb0(&var_2928, arg1, &var_23b8)
int16_t var_28b0 = 0x119
int64_t var_28a8 = 0
int32_t var_28a0 = 0
sub_1407473e0(&var_28a8, rax_31)
rax_30[0xf].b = var_28b0.b
*(rax_30 + 0x79) = var_28b0:1.b
sub_1407473e0(&rax_30[0x10], &var_28a8)
sub_140745b20(&var_28a8)
int32_t var_2920
int64_t* rax_35

if (var_2920 == 0)
    rax_35 = var_2928
label_140eb1c58:
    
    if (rax_35 != 0)
        sub_140a74f90(rax_35)
else
    int64_t* rcx_38 = var_2928
    
    if (rcx_38 != 0)
        (*(*rcx_38 + 0x38))(rcx_38, 0)
        rax_35 = var_2928
        
        if (rax_35 != 0)
            rax_35 = sub_140a84c80(rax_35, 0, 0)
            var_2928 = rax_35
        
        int32_t var_2920_1 = 0
        goto label_140eb1c58
rax_30[0x34].d = 0
*(rax_30 + 0x1a4) = 0x41200000
rax_30[0x35].b = 1
sub_140692f90(&rax_30[0x36], &var_2620)
void*** rax_36 = sub_140e48fc0()
void* var_27c0 = &rax_36[2]
sub_140918950(&var_27c0, &rax_36[2])
int64_t var_2998_1 = 0x2c8
void var_2978
void* var_27b0 = &var_2978
void* var_2378
void** rax_37 = sub_140e57660(&var_27c0, &var_2378, rax_30, sub_140e23ed0(&rax_36[2], "SSpacer"))
int64_t* rdi_8 = rax_37[1]
void* var_2528 = *rax_37
int64_t* var_2520 = rdi_8

if (rdi_8 != 0)
    rdi_8[1].d += 1

void*** rax_38 = j_sub_140a82f30(0x88)
void*** r14_7 = rax_38

if (rax_38 == 0)
    r14_7 = nullptr
else
    sub_14068e490(rax_38)
    *r14_7 = &data_142d8add0

void* rax_39 = sub_140698b50(r14_7)
sub_140693600(rax_39, &var_2528)

if (rdi_8 != 0)
    rdi_8[1].d -= 1
    
    if (rdi_8[1].d == 1)
        int64_t rdx_18 = *rdi_8
        (*rdx_18)(rdi_8, rdx_18)
        int32_t temp10_1 = *(rdi_8 + 0xc)
        *(rdi_8 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rdi_8 + 8))(rdi_8, 1)

void var_1cf8
int64_t* rax_41 = sub_14068d420(&var_1cf8)
rax_41[0xf].b = rbx_2
*(rax_41 + 0x79) = 1
sub_1407473e0(&rax_41[0x10], &var_2758)
int64_t r14_8 = sx.q(rax_41[0x35].d)
int32_t rcx_53 = (r14_8 + 1).d
rax_41[0x35].d = rcx_53

if (rcx_53 s> *(rax_41 + 0x1ac))
    sub_140638870(&rax_41[0x34])

*(rax_41[0x34] + (r14_8 << 3)) = rax_39
int64_t r14_9 = sx.q(rax_41[0x35].d)
int32_t rax_43 = (r14_9 + 1).d
rax_41[0x35].d = rax_43

if (rax_43 s> *(rax_41 + 0x1ac))
    sub_140638870(&rax_41[0x34])

*(rax_41[0x34] + (r14_9 << 3)) = var_2918
void*** rax_45 = j_sub_140a82f30(0x2e8)
void*** r14_10 = rax_45

if (rax_45 == 0)
    r14_10 = nullptr
else
    rax_45[1].d = 1
    *(rax_45 + 0xc) = 1
    *r14_10 = &data_142d8c590
    
    if (r14_10 != -0x10)
        sub_14068e550(&r14_10[2])

void* var_26d0 = &r14_10[2]
sub_14065fa30(&var_26d0, &r14_10[2])
int64_t var_2998_2 = 0x2d8
void var_2977
void* var_26c0 = &var_2977
void* var_2388
void** rax_46 =
    sub_140696920(&var_26d0, &var_2388, rax_41, sub_140e23ed0(&r14_10[2], "SVerticalBox"))
int64_t* rdi_11 = rax_46[1]
void* var_2568 = *rax_46
int64_t* var_2560 = rdi_11

if (rdi_11 != 0)
    rdi_11[1].d += 1

void*** rax_47 = j_sub_140a82f30(0x88)
void*** r14_11 = rax_47

if (rax_47 == 0)
    r14_11 = nullptr
else
    sub_14068e490(rax_47)
    *r14_11 = &data_142d8add0

int32_t var_2878 = 1
int32_t var_2870 = 0x3f800000
char var_286c = 1
int64_t var_2868 = 0
int32_t var_2860 = 0
sub_140692f90(&var_2868, &var_2770)
r14_11[5].d = var_2878
*(r14_11 + 0x34) = var_286c
r14_11[6].d = var_2870
sub_140692f90(&r14_11[7], &var_2868)
sub_140745b20(&var_2868)
*(r14_11 + 0x21) = 3
int128_t var_2408
__builtin_memcpy(&var_2408, "\x00\x00\x80\x40\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01", 
    0x11)
__builtin_memcpy(&r14_11[9], 
    "\x00\x00\x80\x40\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01", 0x11)
int64_t var_23f0 = 0
int32_t var_23e8 = 0
sub_1407473e0(&r14_11[0xc], &var_23f0)
sub_140745b20(&var_23f0)
sub_140693600(r14_11, &var_2568)

if (rdi_11 != 0)
    rdi_11[1].d -= 1
    
    if (rdi_11[1].d == 1)
        (**rdi_11)(rdi_11)
        int32_t temp12_1 = *(rdi_11 + 0xc)
        *(rdi_11 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*rdi_11 + 8))(rdi_11, 1)

void*** rax_52 = j_sub_140a82f30(0x88)
void*** rdi_12 = rax_52

if (rax_52 == 0)
    rdi_12 = nullptr
else
    sub_14068e490(rax_52)
    *rdi_12 = &data_142d8add0

void* rax_53 = sub_140698b50(rdi_12)
*(arg1 + 0x400) = rax_53
void var_1ea8
int64_t* rax_54 = sub_14068d420(&var_1ea8)
rax_54[0xf].b = rbx_2
*(rax_54 + 0x79) = 1
sub_1407473e0(&rax_54[0x10], &var_27a0)
int64_t rdi_13 = sx.q(rax_54[0x35].d)
int32_t rcx_74 = (rdi_13 + 1).d
rax_54[0x35].d = rcx_74

if (rcx_74 s> *(rax_54 + 0x1ac))
    sub_140638870(&rax_54[0x34])

*(rax_54[0x34] + (rdi_13 << 3)) = rax_53
int64_t rdi_14 = sx.q(rax_54[0x35].d)
int32_t rax_56 = (rdi_14 + 1).d
rax_54[0x35].d = rax_56

if (rax_56 s> *(rax_54 + 0x1ac))
    sub_140638870(&rax_54[0x34])

*(rax_54[0x34] + (rdi_14 << 3)) = r14_11
int64_t rdi_15 = sx.q(rax_54[0x35].d)
int32_t rax_58 = (rdi_15 + 1).d
rax_54[0x35].d = rax_58

if (rax_58 s> *(rax_54 + 0x1ac))
    sub_140638870(&rax_54[0x34])

*(rax_54[0x34] + (rdi_15 << 3)) = var_2988
void*** rax_60 = j_sub_140a82f30(0x2e8)
void*** rdi_16 = rax_60

if (rax_60 == 0)
    rdi_16 = nullptr
else
    rax_60[1].d = 1
    *(rax_60 + 0xc) = 1
    *rdi_16 = &data_142d8c590
    
    if (rdi_16 != -0x10)
        sub_14068e500(&rdi_16[2])

void* var_26e8 = &rdi_16[2]
sub_14065fa30(&var_26e8, &rdi_16[2])
int64_t var_2998_3 = 0x2d8
void var_2976
void* var_26d8 = &var_2976
void* var_2398
void** rax_61 =
    sub_140696920(&var_26e8, &var_2398, rax_54, sub_140e23ed0(&rdi_16[2], "SHorizontalBox"))
int64_t* r14_12 = rax_61[1]
char* (* var_28f8)(void* arg1, char* arg2, int64_t arg3, void* arg4) = *rax_61
int64_t* var_28f0 = r14_12

if (r14_12 != 0)
    r14_12[1].d += 1

void*** rax_62 = j_sub_140a82f30(0x50)
void*** rdi_17 = rax_62

if (rax_62 == 0)
    rdi_17 = nullptr
else
    sub_140ddb700(rax_62)
    *rdi_17 = &data_142ec8fc8
    rdi_17[4].d = 0
    *(rdi_17 + 0x24) = 0
    rdi_17[5] = 0
    rdi_17[6] = 0
    rdi_17[7].b = 1
    rdi_17[8] = 0
    rdi_17[9].d = 0

void*** rax_63 = j_sub_140a82f30(0x50)
void*** rbx_5 = rax_63

if (rax_63 == 0)
    rbx_5 = nullptr
else
    sub_140ddb700(rax_63)
    *rbx_5 = &data_142ec8fc8
    rbx_5[4].d = 0
    *(rbx_5 + 0x24) = 0
    rbx_5[5] = 0
    rbx_5[6] = 0
    rbx_5[7].b = 1
    rbx_5[8] = 0
    rbx_5[9].d = 0

*(arg1 + 0x410) = rbx_5
void var_2058
int64_t* rax_64 = sub_140dd5d30(&var_2058)
var_2988 = rax_64
int64_t r13_4 = sx.q(rax_64[0x35].d)
int32_t rcx_86 = (r13_4 + 1).d
rax_64[0x35].d = rcx_86

if (rcx_86 s> *(rax_64 + 0x1ac))
    sub_1405a4d70(&rax_64[0x34])

*(rax_64[0x34] + (r13_4 << 3)) = rbx_5
void* rax_66 = sub_140de1aa0(rdi_17, &var_28f8)
int64_t rbx_6 = sx.q(rax_64[0x35].d)
int32_t rcx_89 = (rbx_6 + 1).d
rax_64[0x35].d = rcx_89

if (rcx_89 s> *(rax_64 + 0x1ac))
    sub_1405a4d70(&rax_64[0x34])

*(rax_64[0x34] + (rbx_6 << 3)) = rax_66
void*** rax_68 = j_sub_140a82f30(0x2e0)
void*** rdi_19 = rax_68

if (rax_68 == 0)
    rdi_19 = nullptr
else
    rax_68[1].d = 1
    *(rax_68 + 0xc) = 1
    *rdi_19 = &data_142ecd308
    
    if (rdi_19 != -0x10)
        sub_140dde040(&rdi_19[2])

void* var_27d8 = &rdi_19[2]
sub_140918950(&var_27d8, &rdi_19[2])
int64_t var_2998_4 = 0x2d0
void var_2975
void* var_27c8 = &var_2975
int128_t zmm1_6 = sub_140e23ed0(&rdi_19[2], "SOverlay")
void* var_23a8
void** rax_69 = sub_140de49c0(&var_27d8, &var_23a8, var_2988, zmm1_6)
int64_t* rbx_8 = rax_69[1]

if (rbx_8 != 0)
    rbx_8[1].d += 1

void var_2110

if (arg1 + 0x420 == &var_2110)
label_140eb2365:
    
    if (rbx_8 != 0)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            (**rbx_8)(rbx_8)
            int32_t temp15_1 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*rbx_8 + 8))(rbx_8, 1)
else
    *(arg1 + 0x420) = *rax_69
    int64_t* rdi_20 = *(arg1 + 0x428)
    
    if (rbx_8 == rdi_20)
        goto label_140eb2365
    
    *(arg1 + 0x428) = rbx_8
    
    if (rdi_20 != 0)
        rdi_20[1].d -= 1
        
        if (rdi_20[1].d == 1)
            (**rdi_20)(rdi_20)
            int32_t temp19_1 = *(rdi_20 + 0xc)
            *(rdi_20 + 0xc) -= 1
            
            if (temp19_1 == 1)
                (*(*rdi_20 + 8))(rdi_20, 1)

int64_t* var_23a0

if (var_23a0 != 0)
    var_23a0[1].d -= 1
    
    if (var_23a0[1].d == 1)
        (**var_23a0)(var_23a0)
        int32_t temp18_1 = *(var_23a0 + 0xc)
        *(var_23a0 + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*(*var_23a0 + 8))(var_23a0, 1)

if (rdi_19 != 0)
    rdi_19[1].d -= 1
    
    if (rdi_19[1].d == 1)
        (**rdi_19)(rdi_19)
        int32_t temp20_1 = *(rdi_19 + 0xc)
        *(rdi_19 + 0xc) -= 1
        
        if (temp20_1 == 1)
            (*rdi_19)[1](rdi_19, 1)

int64_t var_1eb8

if (var_1eb8 != 0)
    sub_140a74f90(var_1eb8)

sub_140ddea30(&var_2058)

if (r14_12 != 0)
    r14_12[1].d -= 1
    
    if (r14_12[1].d == 1)
        (**r14_12)(r14_12)
        int32_t temp23_1 = *(r14_12 + 0xc)
        *(r14_12 + 0xc) -= 1
        
        if (temp23_1 == 1)
            (*(*r14_12 + 8))(r14_12, 1)

int64_t* var_2390

if (var_2390 != 0)
    var_2390[1].d -= 1
    
    if (var_2390[1].d == 1)
        (**var_2390)(var_2390)
        int32_t temp25_1 = *(var_2390 + 0xc)
        *(var_2390 + 0xc) -= 1
        
        if (temp25_1 == 1)
            (*(*var_2390 + 8))(var_2390, 1)

if (rdi_16 != 0)
    rdi_16[1].d -= 1
    
    if (rdi_16[1].d == 1)
        (**rdi_16)(rdi_16)
        int32_t temp26_1 = *(rdi_16 + 0xc)
        *(rdi_16 + 0xc) -= 1
        
        if (temp26_1 == 1)
            (*rdi_16)[1](rdi_16, 1)

int64_t var_1d08

if (var_1d08 != 0)
    sub_140a74f90(var_1d08)

sub_140660250(&var_1ea8)
int64_t* var_2380

if (var_2380 != 0)
    var_2380[1].d -= 1
    
    if (var_2380[1].d == 1)
        (**var_2380)(var_2380)
        int32_t temp29_1 = *(var_2380 + 0xc)
        *(var_2380 + 0xc) -= 1
        
        if (temp29_1 == 1)
            (*(*var_2380 + 8))(var_2380, 1)

if (r14_10 != 0)
    r14_10[1].d -= 1
    
    if (r14_10[1].d == 1)
        (**r14_10)(r14_10)
        int32_t temp30_1 = *(r14_10 + 0xc)
        *(r14_10 + 0xc) -= 1
        
        if (temp30_1 == 1)
            (*r14_10)[1](r14_10, 1)

int64_t var_1b58

if (var_1b58 != 0)
    sub_140a74f90(var_1b58)

sub_140660250(&var_1cf8)
int64_t* var_2370

if (var_2370 != 0)
    var_2370[1].d -= 1
    
    if (var_2370[1].d == 1)
        (**var_2370)(var_2370)
        int32_t temp33_1 = *(var_2370 + 0xc)
        *(var_2370 + 0xc) -= 1
        
        if (temp33_1 == 1)
            (*(*var_2370 + 8))(var_2370, 1)

if (rax_36 != 0)
    rax_36[1].d -= 1
    
    if (rax_36[1].d == 1)
        (**rax_36)(rax_36)
        int32_t temp35_1 = *(rax_36 + 0xc)
        *(rax_36 + 0xc) -= 1
        
        if (temp35_1 == 1)
            (*rax_36)[1](rax_36, 1)

void var_1488
sub_140745b20(&var_1488)
sub_140ddea30(&var_1638)
int64_t* var_2350

if (var_2350 != 0)
    var_2350[1].d -= 1
    
    if (var_2350[1].d == 1)
        (**var_2350)(var_2350)
        int32_t temp37_1 = *(var_2350 + 0xc)
        *(var_2350 + 0xc) -= 1
        
        if (temp37_1 == 1)
            (*(*var_2350 + 8))(var_2350, 1)

if (rax_21 != 0)
    rax_21[1].d -= 1
    
    if (rax_21[1].d == 1)
        (**rax_21)(rax_21)
        int32_t temp39_1 = *(rax_21 + 0xc)
        *(rax_21 + 0xc) -= 1
        
        if (temp39_1 == 1)
            (*rax_21)[1](rax_21, 1)

void var_1118
sub_140e973f0(&var_1118)
sub_140ddea30(&var_12b8)
sub_140745b20(&var_27a0)
sub_140745b20(&var_2770)
sub_140745b20(&var_2758)
sub_140745b20(&var_2620)
sub_140745b20(&var_2588)
sub_140597060(&var_25a0)

if (rsi_1 != 0)
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d == 1)
        (**rsi_1)(rsi_1)
        int32_t temp40_1 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (temp40_1 == 1)
            (*(*rsi_1 + 8))(rsi_1, 1)

int64_t* rsi_2 = var_2968
float (* (* var_2958)(void* arg1, float (* arg2)[0x4], uint128_t arg3 @ zmm0))[0x4] = sub_140ec02f0
char var_25e8 = 1
var_2968 = sub_140ec0360
int128_t zmm7 = rsi_2[2].d
int32_t zmm6 = *(rsi_2 + 0x14)
var_2988 = sub_140ec0290
var_2948 = sub_140edda70
int32_t var_25f0 = zmm7.d
int32_t var_25ec = zmm6
int64_t var_25e0 = 0
int32_t var_25d8 = 0
int32_t var_2950 = 0
int32_t var_2960 = 0
int32_t var_2980 = 0
int128_t var_2458 = zx.o(0)
char var_2448 = 1
int64_t var_2440 = 0
int32_t var_2438 = 0
int32_t var_2940_1 = 0
void var_1478
int64_t* rax_98 = sub_140e50180(&var_1478)
rax_98[0x34].d = zmm7.d
*(rax_98 + 0x1a4) = zmm6
rax_98[0x35].b = 1
sub_140692f90(&rax_98[0x36], &var_25e0)
void*** rax_99 = sub_140e48fc0()
void*** var_2680 = rax_99
void* var_2688 = &rax_99[2]
sub_140918950(&var_2688, &rax_99[2])
int64_t var_2998_5 = 0x2c8
void var_2974
void* var_2678 = &var_2974
void* var_21a8
void** rax_100 = sub_140e57660(&var_2688, &var_21a8, rax_98, sub_140e23ed0(&rax_99[2], "SSpacer"))
char* (* var_2938)(void* arg1, char* arg2, double arg3 @ zmm0) = *rax_100
void* rcx_145 = rax_100[1]
void* var_2930 = rcx_145

if (rcx_145 != 0)
    *(rcx_145 + 8) += 1

void var_848
int64_t* rax_101
int128_t zmm8
rax_101, zmm8 = sub_14068cc20(&var_848)
int128_t var_2348 = var_2948.o
rax_101[0x36] = rsi_2
void var_2338
sub_140692f90(&rax_101[0x44], sub_140e45ef0(&var_2338, arg1, &var_2348))
sub_140745b20(&var_2338)
rax_101[0x3b].b = 1
*(rax_101 + 0x1c8) = zmm8
sub_140692f90(&rax_101[0x3c], &var_2440)
int128_t var_2328 = var_2988.o
void var_2318
int64_t* rax_103 = sub_140e45cb0(&var_2318, arg1, &var_2328)
int16_t var_2910 = 0x119
int64_t var_2908 = 0
int32_t var_2900 = 0
sub_1407473e0(&var_2908, rax_103)
rax_101[0xf].b = var_2910.b
*(rax_101 + 0x79) = var_2910:1.b
sub_1407473e0(&rax_101[0x10], &var_2908)
sub_140745b20(&var_2908)
sub_140745b20(&var_2318)
int128_t var_2308 = var_2968.o
void var_22f8
int64_t* rax_106 = sub_140e8f010(&var_22f8, arg1, &var_2308)
char var_2850 = 1
int64_t var_2848 = 0
int32_t var_2840 = 0
sub_140692f90(&var_2848, rax_106)
int32_t var_2858
rax_101[0x50].d = var_2858
int32_t var_2854
*(rax_101 + 0x284) = var_2854
rax_101[0x51].b = var_2850
sub_1407473e0(&rax_101[0x52], &var_2848)
sub_140745b20(&var_2848)
sub_140745b20(&var_22f8)
var_2958.o = var_2958.o
void var_22e8
int64_t* rax_108 = sub_140e45dd0(&var_22e8, arg1, &var_2958)
int128_t var_24f8
__builtin_memcpy(&var_24f8, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 
    0x11)
int128_t var_24e0 = zx.o(0)
char var_24d0 = 1
int64_t var_24c8 = 0
int32_t var_24c0 = 0
sub_140692f90(&var_24c8, rax_108)
sub_140693390(&rax_101[0x58], &var_24f8)
rax_101[0x5d].b = var_24d0
sub_1407473e0(&rax_101[0x5e], &var_24c8)
sub_140745b20(&var_24c8)
sub_140ddfb70(&var_24f8)
sub_140745b20(&var_22e8)
void*** rax_110 = sub_140688970()
void*** var_2698 = rax_110
int64_t* var_26a0 = &rax_110[2]
sub_14065fa30(&var_26a0, &rax_110[2])
int64_t var_2998_6 = 0x5b8
void var_2973
void* var_2690 = &var_2973
void* rax_111
int128_t zmm1_10
rax_111, zmm1_10 = sub_1406936e0(rax_101, &var_2938, sub_140e23ed0(&rax_110[2], "SButton"))
int64_t* var_21b8
int64_t** rax_112 = sub_140696120(&var_26a0, &var_21b8, rax_111, zmm1_10)
int64_t* r13_5 = rax_112[1]
var_2948 = *rax_112
var_2940_1.q = r13_5

if (r13_5 != 0)
    r13_5[1].d += 1

void var_2138
int64_t* rax_113 = _vfprintf_p_l(&var_2138, u"Empty Tab!", u"DockTabStack")
int64_t var_25d0 = *rax_113
void* rcx_175 = rax_113[1]
void* var_25c8 = rcx_175

if (rcx_175 != 0)
    *(rcx_175 + 8) += 1
    r13_5 = var_2940_1.q

int32_t var_25c0 = rax_113[2].d
var_2958 = sub_140ebe1d0
var_2938 = sub_140ebe160
char var_25b8 = 1
int64_t var_25b0 = 0
int32_t var_25a8 = 0
int32_t var_2950_1 = 0
var_2930.d = 0
void var_4b8
int64_t* rax_115 = sub_14068d9d0(&var_4b8)
sub_14065da90(&rax_115[0x34], &var_25d0)
rax_115[0x37].b = var_25b8
sub_140692f90(&rax_115[0x38], &var_25b0)
void*** rax_116 = sub_140688ae0()
void*** var_26b0 = rax_116
void* var_26b8 = &rax_116[2]
sub_14065fa30(&var_26b8, &rax_116[2])
int64_t var_2998_7 = 0x798
void var_2972
void* var_26a8 = &var_2972
void* var_21c8
void** rax_117 =
    sub_140697520(&var_26b8, &var_21c8, rax_115, sub_140e23ed0(&rax_116[2], "STextBlock"))
int64_t (* var_28e8)(void* arg1) = *rax_117
void* rcx_184 = rax_117[1]
void* var_28e0 = rcx_184

if (rcx_184 != 0)
    *(rcx_184 + 8) += 1

void var_b90
int64_t* rax_118 = sub_14068c640(&var_b90)
int128_t var_22d8 = var_2938.o
void var_21d8
int64_t* rax_119 = sub_140e45b90(&var_21d8, arg1, &var_22d8)
int64_t var_2838 = 0
char var_2830 = 1
int64_t var_2828 = 0
int32_t var_2820 = 0
sub_140692f90(&var_2828, rax_119)
rax_118[0x44] = var_2838
rax_118[0x45].b = var_2830
sub_1407473e0(&rax_118[0x46], &var_2828)
sub_140745b20(&var_2828)
sub_140745b20(&var_21d8)
int128_t var_22c8 = var_2958.o
void var_22b8
int64_t* rax_122 = sub_140e8eef0(&var_22b8, arg1, &var_22c8)
char var_2648 = 1
int64_t var_2640 = 0
int32_t var_2638 = 0
int128_t var_2658 = zx.o(0)
sub_140692f90(&var_2640, rax_122)
rax_118[0x39].b = var_2648
*(rax_118 + 0x1b8) = var_2658
sub_1407473e0(&rax_118[0x3a], &var_2640)
sub_140745b20(&var_2640)
sub_140745b20(&var_22b8)
*(rax_118 + 0x95) = 1
int64_t* rax_124 = sub_140e916e0()
int64_t* var_2668 = rax_124
int64_t* rbx_22 = rax_124
int64_t* var_2670 = &rax_124[2]
sub_14065fa30(&var_2670, &rax_124[2])
int64_t var_2998_8 = 0x4b8
void var_2971
void* var_2660 = &var_2971
int128_t zmm1_12 = sub_140e23ed0(&rax_124[2], "SBorder")
var_2988 = &rax_124[2]
var_2980.q = rbx_22

if (rbx_22 != 0)
    rbx_22[1].d += 1

if (arg1 + 0x430 != &var_2988)
    *(arg1 + 0x430) = &rax_124[2]
    var_2988 = nullptr
    sub_14066a200(arg1 + 0x438, &var_2980)
    rbx_22 = var_2980.q

if (rbx_22 != 0)
    rbx_22[1].d -= 1
    
    if (rbx_22[1].d == 1)
        (**rbx_22)(rbx_22)
        int32_t temp42_1 = *(rbx_22 + 0xc)
        *(rbx_22 + 0xc) -= 1
        
        if (temp42_1 == 1)
            (*(*rbx_22 + 8))(rbx_22, 1)

void* rax_127
int128_t zmm1_13
rax_127, zmm1_13 = sub_1406936e0(rax_118, &var_28e8, zmm1_12)
void* var_2368
void** rax_128 = sub_140695920(&var_2670, &var_2368, rax_127, zmm1_13)
int64_t* r12_4 = rax_128[1]
void* var_2518 = *rax_128
int64_t* var_2510 = r12_4

if (r12_4 != 0)
    r12_4[1].d += 1

int64_t* rdi_25 = data_143e243c8
char rbx_23 = data_1439ae520
var_28e8 = sub_140ebffc0
int32_t var_2700 = 0x3f800000
int64_t rsi_4 = *rdi_25
var_28f8 = sub_140edc9d0
char var_26fc = 1
int64_t var_26f8 = 0
int32_t var_26f0 = 0
var_28e0.d = 0
char var_2718 = rbx_23
char var_2717 = 1
int64_t var_2710 = 0
int32_t var_2708 = 0
int128_t var_2480 = zx.o(0)
char var_2470 = 1
int64_t var_2468 = 0
int32_t var_2460 = 0
var_28f0.d = 0
int64_t rax_130 = (*(rsi_4 + 0x48))(rdi_25, *sub_140b58170(&var_2918, "NoBorder", 1), 0)
char rdi_26 = data_1439ae520
var_2958 = sub_140ec0030
var_2938 = sub_140ec0060
char var_2608 = 1
int64_t var_2600 = 0
int32_t var_25f8 = 0
int32_t var_2950_2 = 0
var_2930.d = 0
char var_2730 = rdi_26
char var_272f = 1
int64_t var_2728 = 0
int32_t var_2720 = 0
void*** rax_131 = sub_140e258e0()
char var_2498 = 1
int128_t var_24a8 = zx.o(0)
int64_t var_2490 = 0
int32_t var_2488 = 0
*(rax_131 + 0x28) = zx.o(0)
rax_131[7].b = 1
sub_1407473e0(&rax_131[8], &var_2490)
sub_140745b20(&var_2490)
*(rax_131 + 0x24) = 0x101
void var_2970
void* var_2998_9 = &var_2970
void* var_2150
int64_t* rax_132 = sub_140dd3710(&var_2150, "SOverlay")
var_2988 = rax_132
int64_t* rsi_5 = rax_132[1]
int64_t* rcx_210 = *rax_132
var_2968 = rcx_210
var_2960.q = rsi_5

if (rsi_5 != 0)
    rsi_5[1].d += 1

if (arg1 + 0x440 != &var_2968)
    *(arg1 + 0x440) = rcx_210
    var_2968 = nullptr
    sub_14066a200(arg1 + 0x448, &var_2960)
    rsi_5 = var_2960.q

if (rsi_5 != 0)
    rsi_5[1].d -= 1
    
    if (rsi_5[1].d == 1)
        (**rsi_5)(rsi_5)
        int32_t temp44_1 = *(rsi_5 + 0xc)
        *(rsi_5 + 0xc) -= 1
        
        if (temp44_1 == 1)
            (*(*rsi_5 + 8))(rsi_5, 1)

void* rax_136 = sub_140de1aa0(rax_131, &var_2948)
void* rax_138 = sub_140de1aa0(sub_140e258e0(), &var_2518)
void var_17e8
int64_t* rax_139
int128_t zmm1_14
rax_139, zmm1_14 = sub_140dd5d30(&var_17e8)
void* rax_141 = sub_140de1c90(sub_140de1c90(rax_139, rax_138), rax_136)
void* var_21e8
void** rax_142 = sub_140de49c0(var_2988, &var_21e8, rax_141, zmm1_14)
void* var_2578 = *rax_142
void* rcx_221 = rax_142[1]
void* var_2570 = rcx_221

if (rcx_221 != 0)
    *(rcx_221 + 8) += 1

int64_t* rax_143 = sub_1406a4fe0()
var_2988 = rax_143
int32_t var_2898 = 1
int64_t var_2888 = 0
int32_t var_2880 = 0
int32_t var_2890 = 0x3f800000
char var_288c = 1
sub_140692f90(&var_2888, &var_26f8)
rax_143[5].d = var_2898
rax_143[6].d = var_2890
*(rax_143 + 0x34) = var_288c
sub_140692f90(&rax_143[7], &var_2888)
sub_140745b20(&var_2888)
void var_10f0
int64_t* rax_145 = sub_140e4fb70(&var_10f0)
int128_t var_22a8 = var_28e8.o
void var_2298
int64_t* rax_146 = sub_140e45b90(&var_2298, arg1, &var_22a8)
char var_2810 = 1
int64_t var_2818 = 0
int64_t var_2808 = 0
int32_t var_2800 = 0
sub_140692f90(&var_2808, rax_146)
rax_145[0x34] = var_2818
rax_145[0x35].b = var_2810
sub_1407473e0(&rax_145[0x36], &var_2808)
sub_140745b20(&var_2808)
sub_140745b20(&var_2298)
void*** rax_149 = sub_140e48c50()
void*** var_2740 = rax_149
void* var_2748 = &rax_149[2]
sub_140918950(&var_2748, &rax_149[2])
int64_t var_2998_10 = 0x3a8
void var_296f
void* var_2738 = &var_296f
void* var_21f8
void** rax_150 = sub_140e56930(&var_2748, &var_21f8, rax_145, sub_140e23ed0(&rax_149[2], "SImage"))
void* var_2508 = *rax_150
void* rcx_236 = rax_150[1]
void* var_2500 = rcx_236

if (rcx_236 != 0)
    *(rcx_236 + 8) += 1

void*** rax_151 = sub_1406a4fe0()
*(arg1 + 0x418) = rax_151
void var_1998
int64_t* rax_152 = sub_14068d420(&var_1998)
rax_152[0xf].b = rbx_23
*(rax_152 + 0x79) = 1
sub_1407473e0(&rax_152[0x10], &var_2710)
void* rax_155 = sub_140693860(sub_140698b50(sub_1406a4fe0()), &var_2508)
void* rax_158 = sub_1406938c0(sub_1406938c0(rax_152, sub_140698b50(rax_151)), rax_155)
void var_296e
void var_2168
int64_t* rax_159
int128_t zmm1_16
rax_159, zmm1_16 = sub_140688860(&var_2168, "SVerticalBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/Slate/Private/Framework/Docking/SDockingTabStack.cpp", 
    0x9d, &var_296e)
void* var_2208
void** rax_160 = sub_140696920(rax_159, &var_2208, rax_158, zmm1_16)
void* var_24b8 = *rax_160
void* rcx_247 = rax_160[1]
void* var_24b0 = rcx_247

if (rcx_247 != 0)
    *(rcx_247 + 8) += 1

void var_ed8
int64_t* rax_161
int128_t zmm6_1
rax_161, zmm6_1 = sub_14068c640(&var_ed8)
int128_t var_2288 = var_2938.o
void var_2278
int64_t* rax_162 = sub_140e45cb0(&var_2278, arg1, &var_2288)
int16_t var_28c8 = 0x119
int64_t var_28c0 = 0
int32_t var_28b8 = 0
sub_1407473e0(&var_28c0, rax_162)
rax_161[0xf].b = var_28c8.b
*(rax_161 + 0x79) = var_28c8:1.b
sub_1407473e0(&rax_161[0x10], &var_28c0)
sub_140745b20(&var_28c0)
sub_140745b20(&var_2278)
int128_t var_2268 = var_2958.o
void var_2258
int64_t* rax_165 = sub_140e8f010(&var_2258, arg1, &var_2268)
char var_27f0 = 1
int64_t var_27e8 = 0
int32_t var_27e0 = 0
sub_140692f90(&var_27e8, rax_165)
int32_t var_27f8
rax_161[0x4c].d = var_27f8
int32_t var_27f4
*(rax_161 + 0x264) = var_27f4
rax_161[0x4d].b = var_27f0
sub_1407473e0(&rax_161[0x4e], &var_27e8)
sub_140745b20(&var_27e8)
sub_140745b20(&var_2258)
rax_161[0x44] = rax_130
rax_161[0x45].b = 1
sub_140692f90(&rax_161[0x46], &var_2600)
int128_t var_2248 = var_28f8.o
*(rax_161 + 0x1b4) = 3
void var_2238
sub_1407473e0(&rax_161[0x3c], sub_140e45ef0(&var_2238, arg1, &var_2248))
int128_t zmm1_18 = sub_140745b20(&var_2238)
rax_161[0x39].b = 1
*(rax_161 + 0x1b8) = zmm6_1
sub_140692f90(&rax_161[0x3a], &var_2468)
void* rax_169 = sub_1406936e0(rax_161, &var_24b8, zmm1_18)
void var_296d
void var_2180
int64_t* rax_170
int128_t zmm1_19
rax_170, zmm1_19 = sub_140688320(&var_2180, "SBorder", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/Slate/Private/Framework/Docking/SDockingTabStack.cpp", 
    0x95, &var_296d)
void* var_2218
void** rax_171 = sub_140695920(rax_170, &var_2218, rax_169, zmm1_19)
void* var_2558 = *rax_171
void* rcx_268 = rax_171[1]
void* var_2550 = rcx_268

if (rcx_268 != 0)
    *(rcx_268 + 8) += 1

void var_1b48
int64_t* rax_172 = sub_14068d420(&var_1b48)
rax_172[0xf].b = rdi_26
*(rax_172 + 0x79) = 1
sub_1407473e0(&rax_172[0x10], &var_2728)
void* rax_173 = sub_140693860(var_2988, &var_2578)
void* rax_178 = sub_1406938c0(
    sub_1406938c0(rax_172, sub_140693860(sub_140698b50(sub_1406a4fe0()), &var_2558)), rax_173)
void var_296c
void var_2198
int64_t* rax_179
int128_t zmm1_20
rax_179, zmm1_20 = sub_140688860(&var_2198, "SVerticalBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/Slate/Private/Framework/Docking/SDockingTabStack.cpp", 
    0x8e, &var_296c)
void* var_2228
void** rax_180 = sub_140696920(rax_179, &var_2228, rax_178, zmm1_20)
int64_t* rbx_30 = rax_180[1]
void* var_2548 = *rax_180
int64_t* var_2540 = rbx_30

if (rbx_30 != 0)
    rbx_30[1].d += 1

sub_140de1b90(arg1 + 0x2b8, &var_2548)

if (rbx_30 != 0)
    rbx_30[1].d -= 1
    
    if (rbx_30[1].d == 1)
        (**rbx_30)(rbx_30)
        int32_t temp47_1 = *(rbx_30 + 0xc)
        *(rbx_30 + 0xc) -= 1
        
        if (temp47_1 == 1)
            (*(*rbx_30 + 8))(rbx_30, 1)

int64_t* var_2220

if (var_2220 != 0)
    var_2220[1].d -= 1
    
    if (var_2220[1].d == 1)
        (**var_2220)(var_2220)
        int32_t temp48_1 = *(var_2220 + 0xc)
        *(var_2220 + 0xc) -= 1
        
        if (temp48_1 == 1)
            (*(*var_2220 + 8))(var_2220, 1)

sub_140669d70(&var_2198)
int64_t var_19a8

if (var_19a8 != 0)
    sub_140a74f90(var_19a8)

sub_140660250(&var_1b48)
int64_t* var_2210

if (var_2210 != 0)
    var_2210[1].d -= 1
    
    if (var_2210[1].d == 1)
        (**var_2210)(var_2210)
        int32_t temp51_1 = *(var_2210 + 0xc)
        *(var_2210 + 0xc) -= 1
        
        if (temp51_1 == 1)
            (*(*var_2210 + 8))(var_2210, 1)

sub_140669d70(&var_2180)
sub_14068fed0(&var_ed8)
int64_t* var_2200

if (var_2200 != 0)
    var_2200[1].d -= 1
    
    if (var_2200[1].d == 1)
        (**var_2200)(var_2200)
        int32_t temp52_1 = *(var_2200 + 0xc)
        *(var_2200 + 0xc) -= 1
        
        if (temp52_1 == 1)
            (*(*var_2200 + 8))(var_2200, 1)

sub_140669d70(&var_2168)
int64_t var_17f8

if (var_17f8 != 0)
    sub_140a74f90(var_17f8)

sub_140660250(&var_1998)
int64_t* var_21f0

if (var_21f0 != 0)
    var_21f0[1].d -= 1
    
    if (var_21f0[1].d == 1)
        (**var_21f0)(var_21f0)
        int32_t temp55_1 = *(var_21f0 + 0xc)
        *(var_21f0 + 0xc) -= 1
        
        if (temp55_1 == 1)
            (*(*var_21f0 + 8))(var_21f0, 1)

sub_140597060(&var_2748)
sub_140e536f0(&var_10f0)
int64_t* var_21e0

if (var_21e0 != 0)
    var_21e0[1].d -= 1
    
    if (var_21e0[1].d == 1)
        (**var_21e0)(var_21e0)
        int32_t temp56_1 = *(var_21e0 + 0xc)
        *(var_21e0 + 0xc) -= 1
        
        if (temp56_1 == 1)
            (*(*var_21e0 + 8))(var_21e0, 1)

sub_140597060(&var_2150)
int64_t var_1648

if (var_1648 != 0)
    sub_140a74f90(var_1648)

sub_140ddea30(&var_17e8)
sub_140745b20(&var_2728)
sub_140745b20(&var_2600)
sub_140745b20(&var_2468)
sub_140745b20(&var_2710)
sub_140745b20(&var_26f8)

if (r12_4 != 0)
    r12_4[1].d -= 1
    
    if (r12_4[1].d == 1)
        (**r12_4)(r12_4)
        int32_t temp59_1 = *(r12_4 + 0xc)
        *(r12_4 + 0xc) -= 1
        
        if (temp59_1 == 1)
            (*(*r12_4 + 8))(r12_4, 1)

int64_t* var_2360

if (var_2360 != 0)
    var_2360[1].d -= 1
    
    if (var_2360[1].d == 1)
        (**var_2360)(var_2360)
        int32_t temp61_1 = *(var_2360 + 0xc)
        *(var_2360 + 0xc) -= 1
        
        if (temp61_1 == 1)
            (*(*var_2360 + 8))(var_2360, 1)

sub_140669d70(&var_2670)
sub_14068fed0(&var_b90)
int64_t* var_21c0

if (var_21c0 != 0)
    var_21c0[1].d -= 1
    
    if (var_21c0[1].d == 1)
        (**var_21c0)(var_21c0)
        int32_t temp63_1 = *(var_21c0 + 0xc)
        *(var_21c0 + 0xc) -= 1
        
        if (temp63_1 == 1)
            (*(*var_21c0 + 8))(var_21c0, 1)

sub_140669d70(&var_26b8)
sub_1406913d0(&var_4b8)
sub_1406601b0(&var_25d0)
sub_1405970a0(&var_2138)

if (r13_5 != 0)
    r13_5[1].d -= 1
    
    if (r13_5[1].d == 1)
        (**r13_5)(r13_5)
        int32_t temp65_1 = *(r13_5 + 0xc)
        *(r13_5 + 0xc) -= 1
        
        if (temp65_1 == 1)
            (*(*r13_5 + 8))(r13_5, 1)

int64_t* var_21b0

if (var_21b0 != 0)
    var_21b0[1].d -= 1
    
    if (var_21b0[1].d == 1)
        (**var_21b0)(var_21b0)
        int32_t temp67_1 = *(var_21b0 + 0xc)
        *(var_21b0 + 0xc) -= 1
        
        if (temp67_1 == 1)
            (*(*var_21b0 + 8))(var_21b0, 1)

sub_140669d70(&var_26a0)
sub_1406905f0(&var_848)
int64_t* var_21a0

if (var_21a0 != 0)
    var_21a0[1].d -= 1
    
    if (var_21a0[1].d == 1)
        (**var_21a0)(var_21a0)
        int32_t temp68_1 = *(var_21a0 + 0xc)
        *(var_21a0 + 0xc) -= 1
        
        if (temp68_1 == 1)
            (*(*var_21a0 + 8))(var_21a0, 1)

sub_140597060(&var_2688)
void var_12c8
sub_140745b20(&var_12c8)
sub_140ddea30(&var_1478)
sub_140745b20(&var_2440)
uint64_t result = sub_140745b20(&var_25e0)

if (*(arg1 + 0x458) != 0)
    void* var_23e0
    result = sub_140eda530(arg1, sub_140ec3bf0(&var_23e0), &data_143e244b0, &data_143e244b0, 
        &data_143e244b0)
    int64_t* var_23d8
    
    if (var_23d8 != 0)
        var_23d8[1].d -= 1
        
        if (var_23d8[1].d == 1)
            result = (**var_23d8)(var_23d8)
            int32_t temp70_1 = *(var_23d8 + 0xc)
            *(var_23d8 + 0xc) -= 1
            
            if (temp70_1 == 1)
                result = (*(*var_23d8 + 8))(var_23d8, 1)

__security_check_cookie(rax_1 ^ &var_29b8)
return result
