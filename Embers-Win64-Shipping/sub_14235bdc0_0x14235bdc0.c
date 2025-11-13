// 函数: sub_14235bdc0
// 地址: 0x14235bdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1970)
void var_19a8
int64_t rax_1 = __security_cookie ^ &var_19a8
*(arg1 + 0x420) = *(arg2 + 0x1b0)
*(arg1 + 0x428) = *(arg2 + 0x1b8)
void* var_1928 = arg2
void* var_1960 = arg1
sub_1407473e0(arg1 + 0x430, arg2 + 0x1c0)
void var_b28
int64_t* rax_4 = sub_14234ef60(&var_b28)
rax_4[0x34] = *(arg2 + 0x1b0)
rax_4[0x35].b = *(arg2 + 0x1b8)
sub_1407473e0(&rax_4[0x36], arg2 + 0x1c0)
void*** rax_5 = j_sub_140a82f30(0x18)

if (rax_5 == 0)
    rax_5 = nullptr
else
    rax_5[1].d = 1
    *rax_5 = &data_143334650
    *(rax_5 + 0xc) = 1
    rax_5[2] = &data_14332cc10

void* var_1950 = &rax_5[2]
void* r15 = var_1950

if (rax_5 != 0)
    rax_5[1].d += 1

int64_t rsi = sx.q(rax_4[0x33].d)
int32_t rax_6 = (rsi + 1).d
rax_4[0x33].d = rax_6

if (rax_6 s> *(rax_4 + 0x19c))
    sub_1405a4f90(&rax_4[0x32])

void** rax_9 = (rsi << 4) + rax_4[0x32]
*rax_9 = r15
rax_9[1] = rax_5

if (rax_5 != 0)
    int32_t rax_10 = rax_5[1].d
    rax_5[1].d = rax_10
    
    if (rax_10 == 0)
        (**rax_5)(rax_5)
        int32_t temp1_1 = *(rax_5 + 0xc)
        *(rax_5 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*rax_5)[1](rax_5, 1)

if (rax_5 != 0)
    rax_5[1].d -= 1
    
    if (rax_5[1].d == 1)
        (**rax_5)(rax_5)
        int32_t temp2_1 = *(rax_5 + 0xc)
        *(rax_5 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*rax_5)[1](rax_5, 1)

void*** rax_15 = j_sub_140a82f30(0x2d8)
void*** rbx_2 = rax_15

if (rax_15 == 0)
    rbx_2 = nullptr
else
    rax_15[1].d = 1
    *(rax_15 + 0xc) = 1
    *rbx_2 = &data_142ed9ef8
    
    if (rbx_2 != -0x10)
        sub_14232b300(&rbx_2[2])

void*** var_1890 = rbx_2
void* var_1898 = &rbx_2[2]
sub_140918950(&var_1898, &rbx_2[2])
int64_t var_1988 = 0x2c8
void var_1938
void* var_1888 = &var_1938
int128_t zmm1 = sub_140e23ed0(&rbx_2[2], "SDebugCanvas")

if (rbx_2 != 0)
    rbx_2[1].d += 1

int512_t (* var_1978)(void* arg1)

if (arg1 + 0x460 == &var_1978)
label_14235c038:
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rbx_2)[1](rbx_2, 1)
else
    *(arg1 + 0x460) = &rbx_2[2]
    void*** rdi_2 = *(arg1 + 0x468)
    
    if (rbx_2 == rdi_2)
        goto label_14235c038
    
    *(arg1 + 0x468) = rbx_2
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp6_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rdi_2)[1](rdi_2, 1)

int128_t var_18f8
void** rax_20 = sub_1423558b0(&var_1898, &var_18f8, rax_4, zmm1)
void* var_18e8 = *rax_20
int64_t* rcx_18 = rax_20[1]

if (rcx_18 != 0)
    rcx_18[1].d += 1

void*** rax_21 = sub_140f641b0()
void*** var_18a8 = rax_21
void* var_18b0 = &rax_21[2]
sub_140918950(&var_18b0, &rax_21[2])
int64_t var_1988_1 = 0x2c8
void var_1937
void* var_18a0 = &var_1937
sub_140e23ed0(&rax_21[2], "STooltipPresenter")

if (rax_21 != 0)
    rax_21[1].d += 1

if (arg1 + 0x470 == &var_1978)
label_14235c11e:
    
    if (rax_21 != 0)
        rax_21[1].d -= 1
        
        if (rax_21[1].d == 1)
            (**rax_21)(rax_21)
            int32_t temp8_1 = *(rax_21 + 0xc)
            *(rax_21 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*rax_21)[1](rax_21, 1)
else
    *(arg1 + 0x470) = &rax_21[2]
    void*** rdi_4 = *(arg1 + 0x478)
    
    if (rax_21 == rdi_4)
        goto label_14235c11e
    
    *(arg1 + 0x478) = rax_21
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t temp10_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*rdi_4)[1](rdi_4, 1)

void var_1710
int64_t* rax_26
int128_t zmm1_1
rax_26, zmm1_1 = sub_140f647e0(&var_1710)
void var_18c0
void** rax_27 = sub_140f69530(&var_18b0, &var_18c0, rax_26, zmm1_1)
int64_t* rbx_4 = rax_27[1]
void* rdi_5 = *rax_27

if (rbx_4 != 0)
    rbx_4[1].d += 1

void var_cd8
int64_t* rax_28 = sub_140e4fff0(&var_cd8)
var_1950 = rdi_5
int64_t* rdi_6 = rbx_4

if (rbx_4 != 0)
    rbx_4[1].d += 1

if (&var_1950 != &rax_28[0x34])
    var_1950.o = *(rax_28 + 0x1a0)
    rdi_6 = rbx_4
    *(rax_28 + 0x1a0) = var_1950.o

if (rdi_6 != 0)
    rdi_6[1].d -= 1
    
    if (rdi_6[1].d == 1)
        (**rdi_6)(rdi_6)
        int32_t temp13_1 = *(rdi_6 + 0xc)
        *(rdi_6 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*rdi_6 + 8))(rdi_6, 1)

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp14_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

void*** rax_33 = sub_140e48f30()
void*** var_1860 = rax_33
void* var_1868 = &rax_33[2]
sub_140918950(&var_1868, &rax_33[2])
int64_t var_1988_2 = 0x390
void var_1936
void* var_1858 = &var_1936
void* var_1828
void** rax_34 = sub_140e57320(&var_1868, &var_1828, rax_28, sub_140e23ed0(&rax_33[2], "SPopup"))
void* var_1878 = *rax_34
int64_t* rcx_36 = rax_34[1]

if (rcx_36 != 0)
    rcx_36[1].d += 1

void*** rbx_6 = j_sub_140a82f30(0x3d8)

if (rbx_6 == 0)
    rbx_6 = nullptr
else
    rbx_6[1].d = 1
    *(rbx_6 + 0xc) = 1
    *rbx_6 = &data_142d8c570
    
    if (rbx_6 != -0x10)
        sub_140f20750(&rbx_6[2])

void*** var_1780 = rbx_6
void* var_1788 = &rbx_6[2]
sub_14065fa30(&var_1788, &rbx_6[2])
int64_t var_1988_3 = 0x3c8
void var_1935
void* var_1778 = &var_1935
sub_140e23ed0(&rbx_6[2], "SBox")

if (rbx_6 != 0)
    rbx_6[1].d += 1

if (arg1 + 0x4b0 == &var_1978)
label_14235c356:
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp16_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*rbx_6)[1](rbx_6, 1)
else
    *(arg1 + 0x4b0) = &rbx_6[2]
    void*** rdi_8 = *(arg1 + 0x4b8)
    
    if (rbx_6 == rdi_8)
        goto label_14235c356
    
    *(arg1 + 0x4b8) = rbx_6
    
    if (rdi_8 != 0)
        rdi_8[1].d -= 1
        
        if (rdi_8[1].d == 1)
            (**rdi_8)(rdi_8)
            int32_t temp18_1 = *(rdi_8 + 0xc)
            *(rdi_8 + 0xc) -= 1
            
            if (temp18_1 == 1)
                (*rdi_8)[1](rdi_8, 1)

void var_968
int64_t* rax_40
int128_t zmm1_4
rax_40, zmm1_4 = sub_14068c940(&var_968)
void* var_1850
void** rax_41 = sub_140695d20(&var_1788, &var_1850, rax_40, zmm1_4)
void* var_1910 = *rax_41
void* rcx_46 = rax_41[1]
void* var_1908 = rcx_46

if (rcx_46 != 0)
    *(rcx_46 + 8) += 1

void*** rbx_7 = j_sub_140a82f30(0x380)

if (rbx_7 == 0)
    rbx_7 = nullptr
else
    rbx_7[1].d = 1
    *(rbx_7 + 0xc) = 1
    *rbx_7 = &data_143084a00
    
    if (rbx_7 != -0x10)
        sub_140f21260(&rbx_7[2])

void*** var_1798 = rbx_7
void* var_17a0 = &rbx_7[2]
sub_140918950(&var_17a0, &rbx_7[2])
int64_t var_1988_4 = 0x370
void var_1934
void* var_1790 = &var_1934
sub_140e23ed0(&rbx_7[2], "SWindowTitleBarArea")

if (rbx_7 != 0)
    rbx_7[1].d += 1

if (arg1 + 0x480 == &var_1978)
label_14235c48c:
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t temp20_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp20_1 == 1)
                (*rbx_7)[1](rbx_7, 1)
else
    *(arg1 + 0x480) = &rbx_7[2]
    void*** rdi_10 = *(arg1 + 0x488)
    
    if (rbx_7 == rdi_10)
        goto label_14235c48c
    
    *(arg1 + 0x488) = rbx_7
    
    if (rdi_10 != 0)
        rdi_10[1].d -= 1
        
        if (rdi_10[1].d == 1)
            (**rdi_10)(rdi_10)
            int32_t temp22_1 = *(rdi_10 + 0xc)
            *(rdi_10 + 0xc) -= 1
            
            if (temp22_1 == 1)
                (*rdi_10)[1](rdi_10, 1)

void var_4d8
int64_t* rax_47
int128_t zmm1_5
rax_47, zmm1_5 = sub_141b7ac40(&var_4d8)
void* rax_48
int128_t zmm1_6
rax_48, zmm1_6 = sub_141b86160(rax_47, &var_1910, zmm1_5)
int32_t var_18d8
void** rax_49 = sub_141b8b140(&var_17a0, &var_18d8, rax_48, zmm1_6)
var_1910 = *rax_49
void* rcx_57 = rax_49[1]
void* var_1908_1 = rcx_57

if (rcx_57 != 0)
    *(rcx_57 + 8) += 1

void* rax_52 = sub_140693860(sub_140698b50(sub_1406a4fe0()), &var_1910)
void var_e88
int64_t* rax_53 = sub_14068d420(&var_e88)
int64_t rdi_11 = sx.q(rax_53[0x35].d)
int32_t rcx_61 = (rdi_11 + 1).d
rax_53[0x35].d = rcx_61

if (rcx_61 s> *(rax_53 + 0x1ac))
    sub_140638870(&rax_53[0x34])

*(rax_53[0x34] + (rdi_11 << 3)) = rax_52
void*** rax_55 = j_sub_140a82f30(0x2e8)
void*** rdi_12 = rax_55

if (rax_55 == 0)
    rdi_12 = nullptr
else
    rax_55[1].d = 1
    *(rax_55 + 0xc) = 1
    *rdi_12 = &data_142d8c590
    
    if (rdi_12 != -0x10)
        sub_14068e550(&rdi_12[2])

void*** var_17b0 = rdi_12
void* var_17b8 = &rdi_12[2]
sub_14065fa30(&var_17b8, &rdi_12[2])
int64_t var_1988_5 = 0x2d8
void var_1933
void* var_17a8 = &var_1933
void* var_1760
void** rax_56 =
    sub_140696920(&var_17b8, &var_1760, rax_53, sub_140e23ed0(&rdi_12[2], "SVerticalBox"))
var_1910 = *rax_56
int64_t* rcx_68 = rax_56[1]

if (rcx_68 != 0)
    rcx_68[1].d += 1

void*** rax_57 = j_sub_140a82f30(0x2e0)
void*** rbx_9 = rax_57

if (rax_57 == 0)
    rbx_9 = nullptr
else
    rax_57[1].d = 1
    *(rax_57 + 0xc) = 1
    *rbx_9 = &data_142ed9ec8
    
    if (rbx_9 != -0x10)
        sub_140f66480(&rbx_9[2])

void*** var_17c8 = rbx_9
void* var_17d0 = &rbx_9[2]
sub_140918950(&var_17d0, &rbx_9[2])
int64_t var_1988_6 = 0x2d0
void var_1932
void* var_17c0 = &var_1932
sub_140e23ed0(&rbx_9[2], "SCanvas")

if (rbx_9 != 0)
    rbx_9[1].d += 1

if (arg1 + 0x450 == &var_1978)
label_14235c6e6:
    
    if (rbx_9 != 0)
        rbx_9[1].d -= 1
        
        if (rbx_9[1].d == 1)
            (**rbx_9)(rbx_9)
            int32_t temp24_1 = *(rbx_9 + 0xc)
            *(rbx_9 + 0xc) -= 1
            
            if (temp24_1 == 1)
                (*rbx_9)[1](rbx_9, 1)
else
    *(arg1 + 0x450) = &rbx_9[2]
    void*** rdi_14 = *(arg1 + 0x458)
    
    if (rbx_9 == rdi_14)
        goto label_14235c6e6
    
    *(arg1 + 0x458) = rbx_9
    
    if (rdi_14 != 0)
        rdi_14[1].d -= 1
        
        if (rdi_14[1].d == 1)
            (**rdi_14)(rdi_14)
            int32_t temp26_1 = *(rdi_14 + 0xc)
            *(rdi_14 + 0xc) -= 1
            
            if (temp26_1 == 1)
                (*rdi_14)[1](rdi_14, 1)

void var_1038
int64_t* rax_62
int128_t zmm1_8
rax_62, zmm1_8 = sub_140dd5d30(&var_1038)
void* var_1750
void** rax_63 = sub_141b89300(&var_17d0, &var_1750, rax_62, zmm1_8)
int64_t* r12 = rax_63[1]
var_1950 = *rax_63
int64_t* var_1948_2 = r12

if (r12 != 0)
    r12[1].d += 1

var_1978 = sub_142364930
int32_t var_1970 = 0
void*** rax_64 = j_sub_140a82f30(0x50)
void*** r15_1 = rax_64

if (rax_64 == 0)
    r15_1 = nullptr
else
    sub_140ddb700(rax_64)
    *r15_1 = &data_142ec8fc8
    r15_1[4].d = 0
    *(r15_1 + 0x24) = 0
    r15_1[5] = 0
    r15_1[6] = 0
    r15_1[7].b = 1
    r15_1[8] = 0
    r15_1[9].d = 0

void*** rax_65 = j_sub_140a82f30(0x50)
void*** r14_2 = rax_65

if (rax_65 == 0)
    r14_2 = nullptr
else
    sub_140ddb700(rax_65)
    *r14_2 = &data_142ec8fc8
    r14_2[4].d = 0
    *(r14_2 + 0x24) = 0
    r14_2[5] = 0
    r14_2[6] = 0
    r14_2[7].b = 1
    r14_2[8] = 0
    r14_2[9].d = 0

void*** rax_66 = j_sub_140a82f30(0x50)
void*** rsi_3 = rax_66

if (rax_66 == 0)
    rsi_3 = nullptr
else
    sub_140ddb700(rax_66)
    *rsi_3 = &data_142ec8fc8
    rsi_3[4].d = 0
    *(rsi_3 + 0x24) = 0
    rsi_3[5] = 0
    rsi_3[6] = 0
    rsi_3[7].b = 1
    rsi_3[8] = 0
    rsi_3[9].d = 0

void*** rax_67 = j_sub_140a82f30(0x50)
void*** rdi_15 = rax_67

if (rax_67 == 0)
    rdi_15 = nullptr
else
    sub_140ddb700(rax_67)
    *rdi_15 = &data_142ec8fc8
    rdi_15[4].d = 0
    *(rdi_15 + 0x24) = 0
    rdi_15[5] = 0
    rdi_15[6] = 0
    rdi_15[7].b = 1
    rdi_15[8] = 0
    rdi_15[9].d = 0

void*** rax_68 = j_sub_140a82f30(0x50)
void*** rbx_10 = rax_68

if (rax_68 == 0)
    rbx_10 = nullptr
else
    sub_140ddb700(rax_68)
    rbx_10[4].d = 0
    *rbx_10 = &data_142ec8fc8
    *(rbx_10 + 0x24) = 0
    rbx_10[5] = 0
    rbx_10[6] = 0
    rbx_10[7].b = 1
    rbx_10[8] = 0
    rbx_10[9].d = 0

void* rax_69 = sub_140de1aa0(rbx_10, &var_1950)
void var_11e8
int64_t* rax_70 = sub_140dd5d30(&var_11e8)
var_1950 = rax_70
int64_t r13_1 = sx.q(rax_70[0x35].d)
int32_t rcx_85 = (r13_1 + 1).d
rax_70[0x35].d = rcx_85

if (rcx_85 s> *(rax_70 + 0x1ac))
    sub_1405a4d70(&rax_70[0x34])

*(rax_70[0x34] + (r13_1 << 3)) = rax_69
void* rax_72 = sub_140de1aa0(rdi_15, var_1928 + 0x1a0)
int64_t rdi_16 = sx.q(rax_70[0x35].d)
int32_t rcx_88 = (rdi_16 + 1).d
rax_70[0x35].d = rcx_88

if (rcx_88 s> *(rax_70 + 0x1ac))
    sub_1405a4d70(&rax_70[0x34])

*(rax_70[0x34] + (rdi_16 << 3)) = rax_72
void* rax_74 = sub_140de1aa0(rsi_3, &var_1910)
int64_t rdi_17 = sx.q(rax_70[0x35].d)
int32_t rcx_91 = (rdi_17 + 1).d
rax_70[0x35].d = rcx_91

if (rcx_91 s> *(rax_70 + 0x1ac))
    sub_1405a4d70(&rax_70[0x34])

*(rax_70[0x34] + (rdi_17 << 3)) = rax_74
void* rax_76 = sub_140de1aa0(r14_2, &var_1878)
int64_t rdi_18 = sx.q(rax_70[0x35].d)
int32_t rcx_94 = (rdi_18 + 1).d
rax_70[0x35].d = rcx_94

if (rcx_94 s> *(rax_70 + 0x1ac))
    sub_1405a4d70(&rax_70[0x34])

*(rax_70[0x34] + (rdi_18 << 3)) = rax_76
void* rax_78 = sub_140de1aa0(r15_1, &var_18e8)
int64_t rdi_19 = sx.q(rax_70[0x35].d)
int32_t rdx_32 = (rdi_19 + 1).d
rax_70[0x35].d = rdx_32

if (rdx_32 s> *(rax_70 + 0x1ac))
    sub_1405a4d70(&rax_70[0x34])

*(rax_70[0x34] + (rdi_19 << 3)) = rax_78
void*** rax_80 = j_sub_140a82f30(0x2e0)
void*** rdi_20 = rax_80

if (rax_80 == 0)
    rdi_20 = nullptr
else
    rax_80[1].d = 1
    *(rax_80 + 0xc) = 1
    *rdi_20 = &data_142ecd308
    
    if (rdi_20 != -0x10)
        sub_140dde040(&rdi_20[2])

void*** var_17e0 = rdi_20
void* var_17e8 = &rdi_20[2]
sub_140918950(&var_17e8, &rdi_20[2])
int64_t var_1988_7 = 0x2d0
void var_1931
void* var_17d8 = &var_1931
int128_t zmm1_9 = sub_140e23ed0(&rdi_20[2], "SOverlay")
void* var_1730
void** rax_81 = sub_140de49c0(&var_17e8, &var_1730, var_1950, zmm1_9)
var_1950 = *rax_81
void* rdx_37 = rax_81[1]
void* var_1948_3 = rdx_37

if (rdx_37 != 0)
    *(rdx_37 + 8) += 1

void*** rax_82 = j_sub_140a82f30(0x3d8)
void*** rbx_13 = rax_82

if (rax_82 == 0)
    rbx_13 = nullptr
else
    rax_82[1].d = 1
    *(rax_82 + 0xc) = 1
    *rbx_13 = &data_142d8c570
    
    if (rbx_13 != -0x10)
        sub_140f20750(&rbx_13[2])

void*** var_1838 = rbx_13
void* var_1840 = &rbx_13[2]
sub_14065fa30(&var_1840, &rbx_13[2])
int64_t var_1988_8 = 0x3c8
void var_1930
void* var_1830 = &var_1930
sub_140e23ed0(&rbx_13[2], "SBox")
void* r13_3 = var_1960

if (rbx_13 != 0)
    rbx_13[1].d += 1

if (r13_3 + 0x4a0 == &var_1960)
label_14235cb52:
    
    if (rbx_13 != 0)
        rbx_13[1].d -= 1
        
        if (rbx_13[1].d == 1)
            (**rbx_13)(rbx_13)
            int32_t temp28_1 = *(rbx_13 + 0xc)
            *(rbx_13 + 0xc) -= 1
            
            if (temp28_1 == 1)
                (*rbx_13)[1](rbx_13, 1)
else
    *(r13_3 + 0x4a0) = &rbx_13[2]
    void*** rdi_22 = *(r13_3 + 0x4a8)
    
    if (rbx_13 == rdi_22)
        goto label_14235cb52
    
    *(r13_3 + 0x4a8) = rbx_13
    
    if (rdi_22 != 0)
        rdi_22[1].d -= 1
        
        if (rdi_22[1].d == 1)
            (**rdi_22)(rdi_22)
            int32_t temp30_1 = *(rdi_22 + 0xc)
            *(rdi_22 + 0xc) -= 1
            
            if (temp30_1 == 1)
                (*rdi_22)[1](rdi_22, 1)

void var_2e8
int64_t* rax_87
int128_t zmm1_10
rax_87, zmm1_10 = sub_14068c940(&var_2e8)
void* var_1720
void** rax_88 = sub_140695d20(&var_1840, &var_1720, rax_87, zmm1_10)
var_1960 = *rax_88
void*** rdx_41 = rax_88[1]
void*** var_1958 = rdx_41

if (rdx_41 != 0)
    rdx_41[1].d += 1

void*** rax_89 = j_sub_140a82f30(0x380)
void*** rbx_14 = rax_89

if (rax_89 == 0)
    rbx_14 = nullptr
else
    rax_89[1].d = 1
    *(rax_89 + 0xc) = 1
    *rbx_14 = &data_143084a00
    
    if (rbx_14 != -0x10)
        sub_140f21260(&rbx_14[2])

void*** var_17f8 = rbx_14
void* var_1800 = &rbx_14[2]
sub_140918950(&var_1800, &rbx_14[2])
int64_t var_1988_9 = 0x370
void var_192f
void* var_17f0 = &var_192f
sub_140e23ed0(&rbx_14[2], "SWindowTitleBarArea")

if (rbx_14 != 0)
    rbx_14[1].d += 1

if (r13_3 + 0x490 == &var_1928)
label_14235cc89:
    
    if (rbx_14 != 0)
        rbx_14[1].d -= 1
        
        if (rbx_14[1].d == 1)
            (**rbx_14)(rbx_14)
            int32_t temp32_1 = *(rbx_14 + 0xc)
            *(rbx_14 + 0xc) -= 1
            
            if (temp32_1 == 1)
                (*rbx_14)[1](rbx_14, 1)
else
    *(r13_3 + 0x490) = &rbx_14[2]
    void*** rdi_24 = *(r13_3 + 0x498)
    
    if (rbx_14 == rdi_24)
        goto label_14235cc89
    
    *(r13_3 + 0x498) = rbx_14
    
    if (rdi_24 != 0)
        rdi_24[1].d -= 1
        
        if (rdi_24[1].d == 1)
            (**rdi_24)(rdi_24)
            int32_t temp34_1 = *(rdi_24 + 0xc)
            *(rdi_24 + 0xc) -= 1
            
            if (temp34_1 == 1)
                (*rdi_24)[1](rdi_24, 1)

void var_6c8
int64_t* rax_93
int128_t zmm1_11
rax_93, zmm1_11 = sub_141b7ac40(&var_6c8)
void* rax_94
int128_t zmm1_12
rax_94, zmm1_12 = sub_141b86160(rax_93, &var_1960, zmm1_11)
void* var_1740
void** rax_95 = sub_141b8b140(&var_1800, &var_1740, rax_94, zmm1_12)
var_1928 = *rax_95
void* rcx_120 = rax_95[1]
void* const var_1920 = rcx_120

if (rcx_120 != 0)
    *(rcx_120 + 8) += 1

void*** rax_96 = sub_140e92390()
void*** var_1810 = rax_96
void*** rbx_15 = rax_96
void* var_1818 = &rax_96[2]
sub_14065fa30(&var_1818, &rax_96[2])
int64_t var_1988_10 = 0x2d8
void var_1968
void* var_1808 = &var_1968
sub_140e23ed0(&rax_96[2], "SVerticalBox")
var_1960 = &rax_96[2]
var_1958 = rbx_15

if (rbx_15 != 0)
    rbx_15[1].d += 1

if (r13_3 + 0x440 != &var_1960)
    *(r13_3 + 0x440) = &rax_96[2]
    var_1960 = nullptr
    sub_14066a200(r13_3 + 0x448, &var_1958)
    rbx_15 = var_1958

if (rbx_15 != 0)
    rbx_15[1].d -= 1
    
    if (rbx_15[1].d == 1)
        (**rbx_15)(rbx_15)
        int32_t temp36_1 = *(rbx_15 + 0xc)
        *(rbx_15 + 0xc) -= 1
        
        if (temp36_1 == 1)
            (*rbx_15)[1](rbx_15, 1)

void* rax_100 = sub_140693860(sub_1406a4fe0(), &var_1950)
void* rax_103 = sub_140693860(sub_140698b50(sub_1406a4fe0()), &var_1928)
void var_1398
int64_t* rax_104
int128_t zmm1_13
rax_104, zmm1_13 = sub_14068d420(&var_1398)
void* var_1770
void** rax_107 = sub_140696920(&var_1818, &var_1770, 
    sub_1406938c0(sub_1406938c0(rax_104, rax_103), rax_100), zmm1_13)
int64_t* rbx_17 = rax_107[1]
void* rdi_27 = *rax_107

if (rbx_17 != 0)
    rbx_17[1].d += 1

void var_1560
int64_t* rax_108 = sub_1418aee00(&var_1560)
var_1978.o = var_1978.o
int64_t* rax_109 = sub_140e90050(&var_1960, r13_3, &var_1978)
var_1928:4.b = 1
var_1928.d = 0
var_1920 = nullptr
int32_t var_1918 = 0
sub_140692f90(&var_1920, rax_109)
rax_108[0x34].d = var_1928.d
*(rax_108 + 0x1a4) = var_1928:4.b
sub_140692f90(&rax_108[0x35], &var_1920)
sub_140745b20(&var_1920)
void* rax_112

if (var_1958.d == 0)
    rax_112 = var_1960
label_14235ceea:
    
    if (rax_112 != 0)
        sub_140a74f90(rax_112)
else
    void* rcx_139 = var_1960
    
    if (rcx_139 != 0)
        (*(*rcx_139 + 0x38))(rcx_139, 0)
        rax_112 = var_1960
        
        if (rax_112 != 0)
            rax_112 = sub_140a84c80(rax_112, 0, 0)
            var_1960 = rax_112
        
        var_1958.d = 0
        goto label_14235ceea
var_1950 = rdi_27
int64_t* rdi_28 = rbx_17

if (rbx_17 != 0)
    rbx_17[1].d += 1

if (&var_1950 != &rax_108[0x37])
    var_1950.o = *(rax_108 + 0x1b8)
    rdi_28 = rbx_17
    *(rax_108 + 0x1b8) = var_1950.o

if (rdi_28 != 0)
    rdi_28[1].d -= 1
    
    if (rdi_28[1].d == 1)
        (**rdi_28)(rdi_28)
        int32_t temp39_1 = *(rdi_28 + 0xc)
        *(rdi_28 + 0xc) -= 1
        
        if (temp39_1 == 1)
            (*(*rdi_28 + 8))(rdi_28, 1)

if (rbx_17 != 0)
    rbx_17[1].d -= 1
    
    if (rbx_17[1].d == 1)
        (**rbx_17)(rbx_17)
        int32_t temp41_1 = *(rbx_17 + 0xc)
        *(rbx_17 + 0xc) -= 1
        
        if (temp41_1 == 1)
            (*(*rbx_17 + 8))(rbx_17, 1)

void*** rax_118 = sub_1418aed10()
void*** var_1948_5 = rax_118
var_1950 = &rax_118[2]
sub_140918950(&var_1950, &rax_118[2])
int64_t var_1988_11 = 0x320
void var_1967
void* var_1940 = &var_1967
sub_1418afba0(&var_1950, &var_1978, rax_108, sub_140e23ed0(&rax_118[2], "SDPIScaler"))
sub_140597060(&var_1950)
void var_13a8
sub_140597060(&var_13a8)
void var_13b8
sub_140745b20(&var_13b8)
sub_140ddea30(&var_1560)
int64_t* var_1768

if (var_1768 != 0)
    var_1768[1].d -= 1
    
    if (var_1768[1].d == 1)
        (**var_1768)(var_1768)
        int32_t temp42_1 = *(var_1768 + 0xc)
        *(var_1768 + 0xc) -= 1
        
        if (temp42_1 == 1)
            (*(*var_1768 + 8))(var_1768, 1)

sub_140669d70(&var_1818)
int64_t var_11f8

if (var_11f8 != 0)
    sub_140a74f90(var_11f8)

sub_140660250(&var_1398)
int64_t* var_1738

if (var_1738 != 0)
    var_1738[1].d -= 1
    
    if (var_1738[1].d == 1)
        (**var_1738)(var_1738)
        int32_t temp45_1 = *(var_1738 + 0xc)
        *(var_1738 + 0xc) -= 1
        
        if (temp45_1 == 1)
            (*(*var_1738 + 8))(var_1738, 1)

sub_140597060(&var_1800)
sub_142351de0(&var_6c8)
int64_t* var_1718

if (var_1718 != 0)
    var_1718[1].d -= 1
    
    if (var_1718[1].d == 1)
        (**var_1718)(var_1718)
        int32_t temp47_1 = *(var_1718 + 0xc)
        *(var_1718 + 0xc) -= 1
        
        if (temp47_1 == 1)
            (*(*var_1718 + 8))(var_1718, 1)

sub_140669d70(&var_1840)
sub_140690290(&var_2e8)
int64_t* var_1728

if (var_1728 != 0)
    var_1728[1].d -= 1
    
    if (var_1728[1].d == 1)
        (**var_1728)(var_1728)
        int32_t temp48_1 = *(var_1728 + 0xc)
        *(var_1728 + 0xc) -= 1
        
        if (temp48_1 == 1)
            (*(*var_1728 + 8))(var_1728, 1)

sub_140597060(&var_17e8)
int64_t var_1048

if (var_1048 != 0)
    sub_140a74f90(var_1048)

sub_140ddea30(&var_11e8)

if (r12 != 0)
    r12[1].d -= 1
    
    if (r12[1].d == 1)
        (**r12)(r12)
        int32_t temp51_1 = *(r12 + 0xc)
        *(r12 + 0xc) -= 1
        
        if (temp51_1 == 1)
            (*(*r12 + 8))(r12, 1)

int64_t* var_1748

if (var_1748 != 0)
    var_1748[1].d -= 1
    
    if (var_1748[1].d == 1)
        (**var_1748)(var_1748)
        int32_t temp52_1 = *(var_1748 + 0xc)
        *(var_1748 + 0xc) -= 1
        
        if (temp52_1 == 1)
            (*(*var_1748 + 8))(var_1748, 1)

sub_140597060(&var_17d0)
int64_t var_e98

if (var_e98 != 0)
    sub_140a74f90(var_e98)

sub_140ddea30(&var_1038)

if (rcx_68 != 0)
    rcx_68[1].d -= 1
    
    if (rcx_68[1].d == 1)
        (**rcx_68)(rcx_68)
        int32_t temp55_1 = *(rcx_68 + 0xc)
        *(rcx_68 + 0xc) -= 1
        
        if (temp55_1 == 1)
            (*(*rcx_68 + 8))(rcx_68, 1)

int64_t* var_1758

if (var_1758 != 0)
    var_1758[1].d -= 1
    
    if (var_1758[1].d == 1)
        (**var_1758)(var_1758)
        int32_t temp56_1 = *(var_1758 + 0xc)
        *(var_1758 + 0xc) -= 1
        
        if (temp56_1 == 1)
            (*(*var_1758 + 8))(var_1758, 1)

sub_140669d70(&var_17b8)
int64_t var_ce8

if (var_ce8 != 0)
    sub_140a74f90(var_ce8)

sub_140660250(&var_e88)
int64_t* var_18d0
int64_t* rbx_26 = var_18d0

if (rbx_26 != 0)
    rbx_26[1].d -= 1
    
    if (rbx_26[1].d == 1)
        (**rbx_26)(rbx_26)
        int32_t temp59_1 = *(rbx_26 + 0xc)
        *(rbx_26 + 0xc) -= 1
        
        if (temp59_1 == 1)
            (*(*rbx_26 + 8))(rbx_26, 1)

sub_140597060(&var_17a0)
sub_142351de0(&var_4d8)
int64_t* var_1848

if (var_1848 != 0)
    var_1848[1].d -= 1
    
    if (var_1848[1].d == 1)
        (**var_1848)(var_1848)
        int32_t temp61_1 = *(var_1848 + 0xc)
        *(var_1848 + 0xc) -= 1
        
        if (temp61_1 == 1)
            (*(*var_1848 + 8))(var_1848, 1)

sub_140669d70(&var_1788)
sub_140690290(&var_968)

if (rcx_36 != 0)
    rcx_36[1].d -= 1
    
    if (rcx_36[1].d == 1)
        (**rcx_36)(rcx_36)
        int32_t temp63_1 = *(rcx_36 + 0xc)
        *(rcx_36 + 0xc) -= 1
        
        if (temp63_1 == 1)
            (*(*rcx_36 + 8))(rcx_36, 1)

int64_t* var_1820

if (var_1820 != 0)
    var_1820[1].d -= 1
    
    if (var_1820[1].d == 1)
        (**var_1820)(var_1820)
        int32_t temp65_1 = *(var_1820 + 0xc)
        *(var_1820 + 0xc) -= 1
        
        if (temp65_1 == 1)
            (*(*var_1820 + 8))(var_1820, 1)

sub_140597060(&var_1868)
void var_b38
sub_140597060(&var_b38)
sub_140ddea30(&var_cd8)
int64_t* var_18b8

if (var_18b8 != 0)
    var_18b8[1].d -= 1
    
    if (var_18b8[1].d == 1)
        (**var_18b8)(var_18b8)
        int32_t temp67_1 = *(var_18b8 + 0xc)
        *(var_18b8 + 0xc) -= 1
        
        if (temp67_1 == 1)
            (*(*var_18b8 + 8))(var_18b8, 1)

sub_140597060(&var_18b0)
int64_t var_1570
sub_140597060(&var_1570)
sub_140ddea30(&var_1710)

if (rcx_18 != 0)
    rcx_18[1].d -= 1
    
    if (rcx_18[1].d == 1)
        (**rcx_18)(rcx_18)
        int32_t temp69_1 = *(rcx_18 + 0xc)
        *(rcx_18 + 0xc) -= 1
        
        if (temp69_1 == 1)
            (*(*rcx_18 + 8))(rcx_18, 1)

int64_t* var_18f0

if (var_18f0 != 0)
    var_18f0[1].d -= 1
    
    if (var_18f0[1].d == 1)
        (**var_18f0)(var_18f0)
        int32_t temp70_1 = *(var_18f0 + 0xc)
        *(var_18f0 + 0xc) -= 1
        
        if (temp70_1 == 1)
            (*(*var_18f0 + 8))(var_18f0, 1)

sub_140597060(&var_1898)
void var_978
sub_140745b20(&var_978)
sub_140ddea30(&var_b28)
int64_t* rsi_8 = var_1970.q

if (rsi_8 != 0)
    rsi_8[1].d += 1

int64_t* rbx_33 = *(r13_3 + 0x2d0)

if (rbx_33 != 0)
    rbx_33[1].d += 1

sub_140e0dfc0(r13_3 + 0x2b8)
int128_t zmm1_16 = var_1978.o
var_18e8.o = zmm1_16

if (rsi_8 != 0)
    rsi_8[1].d += 1

if (&var_18e8 != r13_3 + 0x2c8)
    int128_t zmm0_5 = *(r13_3 + 0x2c8)
    *(r13_3 + 0x2c8) = zmm1_16
    var_18e8.o = zmm0_5

if (rcx_18 != 0)
    rcx_18[1].d -= 1
    
    if (rcx_18[1].d == 1)
        (**rcx_18)(rcx_18)
        int32_t temp73_1 = *(rcx_18 + 0xc)
        *(rcx_18 + 0xc) -= 1
        
        if (temp73_1 == 1)
            (*(*rcx_18 + 8))(rcx_18, 1)

sub_140de7bf0(r13_3 + 0x2b8)

if (rbx_33 != 0)
    rbx_33[1].d -= 1
    
    if (rbx_33[1].d == 1)
        (**rbx_33)(rbx_33)
        int32_t temp75_1 = *(rbx_33 + 0xc)
        *(rbx_33 + 0xc) -= 1
        
        if (temp75_1 == 1)
            (*(*rbx_33 + 8))(rbx_33, 1)

if (rsi_8 != 0)
    rsi_8[1].d -= 1
    
    if (rsi_8[1].d == 1)
        (**rsi_8)(rsi_8)
        int32_t temp76_1 = *(rsi_8 + 0xc)
        *(rsi_8 + 0xc) -= 1
        
        if (temp76_1 == 1)
            (*(*rsi_8 + 8))(rsi_8, 1)

void* rdi_31 = data_143f5b298

if (rdi_31 != 0 && sub_14234e670(rdi_31) != 0)
    int64_t* rbx_34 = *(rdi_31 + 0xdf8)
    int512_t (* r14_3)(void* arg1) = nullptr
    
    if (rbx_34 != 0)
        int32_t rax_156 = rbx_34[1].d
        
        if (rax_156 != 0)
            rbx_34[1].d = rax_156 + 1
            rax_156.b = 1
        
        if (rax_156.b == 0)
            rbx_34 = nullptr
        
        if (rbx_34 != 0)
            r14_3 = *(rdi_31 + 0xdf0)
    
    if (r14_3 != 0)
        var_1978 = r14_3
        var_1970.q = rbx_34
        
        if (rbx_34 != 0)
            rbx_34[1].d += 1
        
        sub_142376b60(*(r13_3 + 0x480), &var_1978)
        var_1978 = r14_3
        var_1970.q = rbx_34
        
        if (rbx_34 != 0)
            rbx_34[1].d += 1
        
        sub_142376b60(*(r13_3 + 0x490), &var_1978)
    
    if (rbx_34 != 0)
        rbx_34[1].d -= 1
        
        if (rbx_34[1].d == 1)
            (**rbx_34)(rbx_34)
            int32_t temp79_1 = *(rbx_34 + 0xc)
            *(rbx_34 + 0xc) -= 1
            
            if (temp79_1 == 1)
                (*(*rbx_34 + 8))(rbx_34, 1)

int32_t var_1970_1 = 0
var_1978 = sub_142363e80
int64_t* rax_159 = sub_14068c940(&var_968)
var_18f8 = var_1978.o
int64_t* rax_160 = sub_14234d410(&var_18c0, r13_3, &var_18f8)
var_18d8 = 0xbf800000
char var_18d4 = 1
var_18d0 = nullptr
int32_t var_18c8 = 0
sub_1407473e0(&var_18d0, rax_160)
rax_159[0x3f].d = var_18d8
*(rax_159 + 0x1fc) = var_18d4
sub_1407473e0(&rax_159[0x40], &var_18d0)
sub_140745b20(&var_18d0)
sub_140745b20(&var_18c0)
int64_t* rax_162
int128_t zmm1_17
rax_162, zmm1_17 = sub_1406883e0(&var_18b0, "SBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/Engine/Private/Slate/SGameLayerManager.cpp", 0x8a, 
    &var_1967)
void** rax_163 = sub_140695d20(rax_162, &var_1850, rax_159, zmm1_17)
var_1978 = *rax_163
void* rcx_234 = rax_163[1]
var_1970_1.q = rcx_234

if (rcx_234 != 0)
    *(rcx_234 + 8) += 1

void* rax_166 = sub_140693860(sub_140698b50(sub_1406a4fe0()), &var_1978)
void* rax_168 = sub_1406938c0(sub_14068d420(&var_1710), rax_166)
int64_t* rax_169
int128_t zmm1_18
rax_169, zmm1_18 = sub_140688860(&var_1898, "SVerticalBox", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/Engine/Private/Slate/SGameLayerManager.cpp", 0x86, 
    &var_1968)
void** rax_170 = sub_140696920(rax_169, &var_1828, rax_168, zmm1_18)
void*** rbx_38 = rax_170[1]
void* rdx_66 = *rax_170
var_1960 = rdx_66
var_1958 = rbx_38

if (rbx_38 != 0)
    rbx_38[1].d += 1

if (r13_3 + 0x4d8 != &var_1960)
    *(r13_3 + 0x4d8) = rdx_66
    var_1960 = nullptr
    sub_14066a200(r13_3 + 0x4e0, &var_1958)
    rbx_38 = var_1958

if (rbx_38 != 0)
    rbx_38[1].d -= 1
    
    if (rbx_38[1].d == 1)
        (**rbx_38)(rbx_38)
        int32_t temp81_1 = *(rbx_38 + 0xc)
        *(rbx_38 + 0xc) -= 1
        
        if (temp81_1 == 1)
            (*rbx_38)[1](rbx_38, 1)

if (var_1820 != 0)
    var_1820[1].d -= 1
    
    if (var_1820[1].d == 1)
        (**var_1820)(var_1820)
        int32_t temp82_1 = *(var_1820 + 0xc)
        *(var_1820 + 0xc) -= 1
        
        if (temp82_1 == 1)
            (*(*var_1820 + 8))(var_1820, 1)

sub_140669d70(&var_1898)
int64_t rcx_248 = var_1570

if (rcx_248 != 0)
    sub_140a74f90(rcx_248)

sub_140660250(&var_1710)

if (var_1848 != 0)
    var_1848[1].d -= 1
    
    if (var_1848[1].d == 1)
        (**var_1848)(var_1848)
        int32_t temp85_1 = *(var_1848 + 0xc)
        *(var_1848 + 0xc) -= 1
        
        if (temp85_1 == 1)
            (*(*var_1848 + 8))(var_1848, 1)

sub_140669d70(&var_18b0)
sub_140690290(&var_968)
void* rdi_32 = *(r13_3 + 0x480)
var_1978 = sub_141bdc330
int32_t var_1970_2 = 0
var_18f8 = var_1978.o
int64_t* rax_177 = sub_140e8edc0(&var_18c0, r13_3, &var_18f8)
sub_1407473e0(rdi_32 + 0x318, rax_177)
sub_140745b20(rax_177)
void* rdi_33 = *(r13_3 + 0x490)
var_1978 = sub_141bdc330
int32_t var_1970_3 = 0
var_18f8 = var_1978.o
int64_t* rax_178 = sub_140e8edc0(&var_18c0, r13_3, &var_18f8)
sub_1407473e0(rdi_33 + 0x318, rax_178)
sub_140745b20(rax_178)
void* var_1988_13
var_1988_13.b = 0
var_1978.o = zx.o(0)
(*(*(r13_3 + 0x390) + 0x60))(r13_3 + 0x390, &var_1978, 0, 0, var_1988_13, 0, var_1978, var_1970_3)
int64_t* rbx_43 = var_1970_3.q

if (rbx_43 != 0)
    rbx_43[1].d -= 1
    
    if (rbx_43[1].d == 1)
        (**rbx_43)(rbx_43)
        int32_t temp86_1 = *(rbx_43 + 0xc)
        *(rbx_43 + 0xc) -= 1
        
        if (temp86_1 == 1)
            (*(*rbx_43 + 8))(rbx_43, 1)

int64_t* rax_182 = sub_141521500()
void* result = rax_182[0x23]

if (result == 0)
    (*(*rax_182 + 0x390))(rax_182)
    result = rax_182[0x23]

result.b = *(result + 0x109) != 0
*(r13_3 + 0x4ec) = result.b

if (rsi_8 != 0)
    rsi_8[1].d -= 1
    
    if (rsi_8[1].d == 1)
        result = (**rsi_8)(rsi_8)
        int32_t temp88_1 = *(rsi_8 + 0xc)
        *(rsi_8 + 0xc) -= 1
        
        if (temp88_1 == 1)
            result = (*(*rsi_8 + 8))(rsi_8, 1)

__security_check_cookie(rax_1 ^ &var_19a8)
return result
