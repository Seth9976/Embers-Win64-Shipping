// 函数: sub_140eef0f0
// 地址: 0x140eef0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2d00)
void var_2d38
int64_t rax_1 = __security_cookie ^ &var_2d38
void var_2550
sub_140de1590(arg1 + 0x660, sub_140d91e10(&var_2550, (zx.o(0)).d, 0.150000006f, 0))
sub_140db3540(arg1 + 0x660, sub_140d952d0(&var_2550))
int64_t* rbx = arg2[0x35]
int64_t var_2c60 = arg2[0x34]

if (rbx != 0)
    rbx[1].d += 1

int128_t zmm1_1

if (&var_2c60 != arg1 + 0x4d8)
    zmm1_1 = var_2c60.o
    int128_t var_24e0_1 = zmm1_1
    var_2c60.o = *(arg1 + 0x4d8)
    *(arg1 + 0x4d8) = zmm1_1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg2[0x37]
int64_t var_2c50 = arg2[0x36]

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (&var_2c50 != arg1 + 0x4e8)
    zmm1_1 = var_2c50.o
    int128_t var_24f0_1 = zmm1_1
    var_2c50.o = *(arg1 + 0x4e8)
    *(arg1 + 0x4e8) = zmm1_1

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg2[0x39]
int64_t var_2c40 = arg2[0x38]

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (&var_2c40 != arg1 + 0x4f8)
    zmm1_1 = var_2c40.o
    int128_t var_24d0_1 = zmm1_1
    var_2c40.o = *(arg1 + 0x4f8)
    *(arg1 + 0x4f8) = zmm1_1

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp6_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

*(arg1 + 0x524) = arg2[0x41].b
sub_1407473e0(arg1 + 0x5b8, &arg2[0x52])
sub_140692f90(arg1 + 0x5d8, &arg2[0x57])
sub_1407473e0(arg1 + 0x5e8, &arg2[0x59])
sub_14065da90(arg1 + 0x538, &arg2[0x42])
*(arg1 + 0x550) = arg2[0x45].b
sub_140692f90(arg1 + 0x558, &arg2[0x46])
sub_14065da90(arg1 + 0x568, &arg2[0x48])
*(arg1 + 0x580) = arg2[0x4b].b
sub_140692f90(arg1 + 0x588, &arg2[0x4c])
*(arg1 + 0x598) = arg2[0x4e]
*(arg1 + 0x5a0) = arg2[0x4f].b
sub_140692f90(arg1 + 0x5a8, &arg2[0x50])
*(arg1 + 0x630) = arg2[0x56].b
*(arg1 + 0x638) = *(arg2 + 0x2d8)
*(arg1 + 0x648) = arg2[0x5d].b
sub_140692f90(arg1 + 0x650, &arg2[0x5e])
int64_t* rbx_3 = data_143e243c8
int64_t* var_2cd8
int64_t r8 = *sub_140b58170(&var_2cd8, "Docking.MajorTab", 1)
int64_t var_2790 = r8
int64_t var_25a8 = r8
int64_t rax_21 = (*(*rbx_3 + 0x88))(rbx_3, data_143e24480)

if (rax_21 == 0)
    rax_21 = sub_140e13260()

*(arg1 + 0x5f8) = rax_21
int64_t* rbx_4 = data_143e243c8
void var_25a0
int64_t r8_1 = *sub_140b58170(&var_25a0, "Docking.Tab", 1)
int64_t var_2588 = r8_1
int64_t var_27a8 = r8_1
int64_t rax_24 = (*(*rbx_4 + 0x88))(rbx_4, data_143e24480)

if (rax_24 == 0)
    rax_24 = sub_140e13260()

*(arg1 + 0x600) = rax_24
*(arg1 + 0x608) = *(arg2 + 0x1e0)
*(arg1 + 0x618) = arg2[0x3e].b
sub_140692f90(arg1 + 0x620, &arg2[0x3f])
void* rax_27

if (sub_140f053d0(arg1) != 0)
    rax_27 = *(arg1 + 0x600)
else
    rax_27 = *(arg1 + 0x5f8)

int32_t zmm6 = *(rax_27 + 0x18)
int128_t zmm7 = *(rax_27 + 0x1c)
char* (* var_28d8)(void* arg1, char* arg2) = sub_140f06100
int64_t* (* var_28e8)(void* arg1, int64_t* arg2) = sub_140f00090
int32_t var_2b3c = zmm7.d
char* (* var_28f8)(void* arg1, char* arg2, int512_t arg3 @ zmm1) = sub_140f09f80
char var_2b38 = 1
int64_t* (* var_2948)(void* arg1, int64_t* arg2) = sub_140f03630
int64_t var_2b30 = 0
int32_t var_2b28 = 0
int32_t var_28d0 = 0
int32_t var_28e0 = 0
int128_t var_2820 = zx.o(0)
char var_2810 = 1
int64_t var_2808 = 0
int32_t var_2800 = 0
int32_t var_28f0 = 0
int32_t var_2940 = 0
int64_t var_2b20
sub_140b58170(&var_2b20, "Docking.TabFont", 1)
int32_t var_2930 = 0
int64_t* (* var_2938)(void* arg1, int64_t* arg2) = sub_140f035f0
int64_t var_2b18
int32_t zmm6_1 = sub_140b58170(&var_2b18, "Docking.TabFont", 1)
char rax_28 = data_1439ae51c
char rcx_30 = arg2[3].b
int64_t (* var_2928)(void* arg1) = sub_140f03580
int128_t* (* var_2998)(void* arg1, int128_t* arg2) = sub_140f034f0
int64_t (* var_2908)(void* arg1) = sub_140f00870
char rax_29 = data_1439ae51f
int32_t var_29d8 = 0x3f800000
char var_29d4 = 1
int64_t var_29d0 = 0
int32_t var_29c8 = 0
char var_2b77 = 1
int64_t var_2b70 = 0
int32_t var_2b68 = 0
int32_t var_29f0 = 0x3f800000
char var_29ec = 1
int64_t var_29e8 = 0
int32_t var_29e0 = 0
int32_t var_2920 = 0
int32_t var_2990 = 0
int32_t var_2900 = 0
char var_2bd7 = 1
int64_t var_2bd0 = 0
int32_t var_2bc8 = 0
int64_t var_2830 = 0
int32_t var_2828 = 0
int128_t var_2848
__builtin_memcpy(&var_2848, "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x01", 
    0x11)
int32_t var_2ce8
int32_t var_2ce4
void* var_2cc8
int32_t var_2cc0
int64_t var_2878
void var_2580
int64_t* rax_33

if (rcx_30 == 0)
    var_2cc8 = sub_140f035f0
    var_2cc0 = 0
    sub_140a96170(&var_2580)
    int128_t var_2788 = var_2cc8.o
    char var_2568_1 = 1
    void var_2560
    sub_140e46010(&var_2560, arg1, &var_2788)
    rax_33 = &var_2580
    var_2ce4 = 0
    var_2ce8 = 2
else
    var_2878 = *arg2
    void* rax_31 = arg2[1]
    void* var_2870_1 = rax_31
    
    if (rax_31 != 0)
        *(rax_31 + 8) += 1
        rcx_30 = arg2[3].b
        zmm7 = var_2b3c
        zmm6_1 = zmm6
    
    char var_2860_1 = rcx_30
    int32_t var_2868_1 = arg2[2].d
    int64_t var_2858 = 0
    int32_t var_2850_1 = 0
    sub_140692f90(&var_2858, &arg2[4])
    rax_33 = &var_2878
    var_2ce4 = 1
    var_2ce8 = 0

int128_t var_25c8 = var_2948.o
int128_t var_26b8 = var_2928.o
char rax_34 = data_1439ae51c
int128_t var_2658 = var_2938.o
int128_t var_26c8 = var_2908.o
char var_2bbf = 1
int64_t var_2bb8 = 0
int32_t var_2bb0 = 0
int128_t var_26d8 = var_2998.o
void var_1fb0
int64_t* rax_35 = sub_140e50180(&var_1fb0)
rax_35[0x34].d = zmm6_1
*(rax_35 + 0x1a4) = zmm7.d
rax_35[0x35].b = 1
sub_140692f90(&rax_35[0x36], &var_2b30)
void*** rax_36 = sub_140e48fc0()
void*** var_2a00 = rax_36
void* var_2a08 = &rax_36[2]
sub_140918950(&var_2a08, &rax_36[2])
int64_t var_2d18 = 0x2c8
void var_2d08
void* var_29f8 = &var_2d08
void* var_2718
void** rax_37 = sub_140e57660(&var_2a08, &var_2718, rax_35, sub_140e23ed0(&rax_36[2], "SSpacer"))
void* var_28c8 = *rax_37
void* rcx_40 = rax_37[1]
void* var_28c0 = rcx_40

if (rcx_40 != 0)
    *(rcx_40 + 8) += 1

void var_ca0
int64_t* rax_38
int128_t zmm8_1
rax_38, zmm8_1 = sub_14068cc20(&var_ca0)
int128_t var_2778 = var_28f8.o
rax_38[0x36] = rax_27 + 8
int64_t* var_2ca8
sub_140692f90(&rax_38[0x44], sub_140e45ef0(&var_2ca8, arg1, &var_2778))
int32_t var_2ca0
int64_t* rax_41

if (var_2ca0 == 0)
    rax_41 = var_2ca8
label_140eef94b:
    
    if (rax_41 != 0)
        sub_140a74f90(rax_41)
else
    int64_t* rcx_44 = var_2ca8
    
    if (rcx_44 != 0)
        (*(*rcx_44 + 0x38))(rcx_44, 0)
        rax_41 = var_2ca8
        
        if (rax_41 != 0)
            rax_41 = sub_140a84c80(rax_41, 0, 0)
            var_2ca8 = rax_41
        
        int32_t var_2ca0_1 = 0
        goto label_140eef94b
rax_38[0x3b].b = 1
*(rax_38 + 0x1c8) = zmm8_1
sub_140692f90(&rax_38[0x3c], &var_2808)
int128_t var_2768 = var_28e8.o
int64_t* var_2c98
int64_t* rax_42 = sub_140e46010(&var_2c98, arg1, &var_2768)
int64_t var_2c08
sub_140a96170(&var_2c08)
char var_2bf0 = 1
int64_t var_2be8 = 0
int32_t var_2be0 = 0
sub_140692f90(&var_2be8, rax_42)
int64_t rcx_51 = *rax_38
*rax_38 = var_2c08
var_2c08 = rcx_51
int64_t* rcx_52 = rax_38[1]
int64_t var_2c00
rax_38[1] = var_2c00
int32_t var_2bf8
rax_38[2].d = var_2bf8
rax_38[3].b = var_2bf0
sub_1407473e0(&rax_38[4], &var_2be8)
sub_140745b20(&var_2be8)

if (rcx_52 != 0)
    rcx_52[1].d -= 1
    
    if (rcx_52[1].d == 1)
        (**rcx_52)(rcx_52)
        int32_t rsi_1 = *(rcx_52 + 0xc)
        *(rcx_52 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rcx_52 + 8))(rcx_52, zx.q(rsi_1))

int32_t var_2c90
int64_t* rax_51

if (var_2c90 == 0)
    rax_51 = var_2c98
label_140eefa73:
    
    if (rax_51 != 0)
        sub_140a74f90(rax_51)
else
    int64_t* rcx_57 = var_2c98
    
    if (rcx_57 != 0)
        (*(*rcx_57 + 0x38))(rcx_57, 0)
        rax_51 = var_2c98
        
        if (rax_51 != 0)
            rax_51 = sub_140a84c80(rax_51, 0, 0)
            var_2c98 = rax_51
        
        int32_t var_2c90_1 = 0
        goto label_140eefa73
int128_t var_25b8 = var_28d8.o
int64_t* var_2c88
int64_t* rax_52 = sub_140e45cb0(&var_2c88, arg1, &var_25b8)
int16_t var_2c78 = 0x119
int64_t var_2c70 = 0
int32_t var_2c68 = 0
sub_1407473e0(&var_2c70, rax_52)
rax_38[0xf].b = var_2c78.b
*(rax_38 + 0x79) = var_2c78:1.b
sub_1407473e0(&rax_38[0x10], &var_2c70)
sub_140745b20(&var_2c70)
int32_t var_2c80
int64_t* rax_56

if (var_2c80 == 0)
    rax_56 = var_2c88
label_140eefb1e:
    
    if (rax_56 != 0)
        sub_140a74f90(rax_56)
else
    int64_t* rcx_64 = var_2c88
    
    if (rcx_64 != 0)
        (*(*rcx_64 + 0x38))(rcx_64, 0)
        rax_56 = var_2c88
        
        if (rax_56 != 0)
            rax_56 = sub_140a84c80(rax_56, 0, 0)
            var_2c88 = rax_56
        
        int32_t var_2c80_1 = 0
        goto label_140eefb1e
void*** rax_57 = j_sub_140a82f30(0x5c8)
void*** rsi_2 = rax_57

if (rax_57 == 0)
    rsi_2 = nullptr
else
    rax_57[1].d = 1
    *(rax_57 + 0xc) = 1
    *rsi_2 = &data_142d8c580
    
    if (rsi_2 != -0x10)
        sub_140ee2d30(&rsi_2[2])

void*** var_2a18 = rsi_2
int64_t* var_2a20 = &rsi_2[2]
sub_14065fa30(&var_2a20, &rsi_2[2])
int64_t var_2d18_1 = 0x5b8
void var_2d07
void* var_2a10 = &var_2d07
void* rax_58
int128_t zmm1_5
rax_58, zmm1_5 = sub_1406936e0(rax_38, &var_28c8, sub_140e23ed0(&rsi_2[2], "SButton"))
int64_t* var_2728
int64_t** rax_59 = sub_140696120(&var_2a20, &var_2728, rax_58, zmm1_5)
int64_t* rbx_9 = rax_59[1]
int64_t* var_28b8 = *rax_59
int64_t* var_28b0 = rbx_9

if (rbx_9 != 0)
    rbx_9[1].d += 1

void*** rax_60 = j_sub_140a82f30(0x88)
void*** rdi_2 = rax_60

if (rax_60 == 0)
    rdi_2 = nullptr
else
    sub_14068e490(rax_60)
    *rdi_2 = &data_142d8add0

void* rax_61 = sub_140698b50(rdi_2)
*(rax_61 + 0x20) = 0x203
sub_140693600(rax_61, &var_28b8)

if (rbx_9 != 0)
    rbx_9[1].d -= 1
    
    if (rbx_9[1].d == 1)
        int64_t rdx_32 = *rbx_9
        (*rdx_32)(rbx_9, rdx_32)
        int32_t temp8_1 = *(rbx_9 + 0xc)
        *(rbx_9 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rbx_9 + 8))(rbx_9, 1)

int64_t* rdi_3 = data_143e243c8
void var_4c8
int64_t* rax_63 = sub_14068d9d0(&var_4c8)
int64_t rbx_10 = *rdi_3
void var_27a0
int64_t* rax_64 = sub_140e1ad30(&var_27a0, var_2b20, nullptr)
int64_t rax_65 = (*(rbx_10 + 0x88))(rdi_3, data_143e243e0, *rax_64)

if (rax_65 == 0)
    rax_65 = sub_140e13900()

rax_63[0x3a] = rax_65
void*** rax_66 = sub_140688ae0()
void*** var_2ba0 = rax_66
void* var_2ba8 = &rax_66[2]
sub_14065fa30(&var_2ba8, &rax_66[2])
void var_2d06
void* var_2b98 = &var_2d06
int64_t var_2d18_2 = 0x798
sub_140e23ed0(var_2ba8, "STextBlock")
void* rax_67
int128_t zmm1_6
rax_67, zmm1_6 = sub_140ee11e0(rax_63, arg1, &var_25c8)
void* var_2738
void** rax_69 = sub_140697520(sub_140dd3250(&var_2ba8, arg1 + 0x730), &var_2738, rax_67, zmm1_6)
void* var_28a8 = *rax_69
void* rcx_87 = rax_69[1]
void* var_28a0 = rcx_87

if (rcx_87 != 0)
    *(rcx_87 + 8) += 1

void*** rax_70 = j_sub_140a82f30(0x88)
void*** rbx_12 = rax_70

if (rax_70 == 0)
    rbx_12 = nullptr
else
    sub_14068e490(rax_70)
    *rbx_12 = &data_142d8add0

int64_t* rax_72 = sub_140f12c60(sub_140698b50(rbx_12), zx.o(0), 0x3f800000)
var_2cd8 = rax_72
*(rax_72 + 0x21) = 2
int64_t* rdi_4 = data_143e243c8
void var_910
int64_t* rax_73 = sub_14068d9d0(&var_910)
int64_t rbx_13 = *rdi_4
void var_2798
int64_t* rax_74 = sub_140e1ad30(&var_2798, var_2b18, nullptr)
int64_t rax_75 = (*(rbx_13 + 0x88))(rdi_4, data_143e243e0, *rax_74)

if (rax_75 == 0)
    rax_75 = sub_140e13900()

rax_73[0x3a] = rax_75
void*** rax_76 = sub_140688ae0()
void*** var_2b88 = rax_76
void* var_2b90 = &rax_76[2]
sub_14065fa30(&var_2b90, &rax_76[2])
void var_2d05
void* var_2b80 = &var_2d05
int64_t var_2d18_3 = 0x798
sub_140e23ed0(var_2b90, "STextBlock")
void* rax_77
int128_t zmm1_8
rax_77, zmm1_8 = sub_140ee11e0(rax_73, arg1, &var_2658)
void* var_2748
void** rax_79
int32_t zmm9_1
rax_79, zmm9_1 = sub_140697520(sub_140dd3250(&var_2b90, arg1 + 0x730), &var_2748, rax_77, zmm1_8)
void* var_2898 = *rax_79
void* rcx_100 = rax_79[1]
void* var_2890 = rcx_100

if (rcx_100 != 0)
    *(rcx_100 + 8) += 1

void*** rax_80 = j_sub_140a82f30(0x88)
void*** rbx_15 = rax_80

if (rax_80 == 0)
    rbx_15 = nullptr
else
    sub_14068e490(rax_80)
    *rbx_15 = &data_142d8add0

void* rax_82 = sub_140f12c60(sub_140eb9be0(rbx_15, &var_29d8), zx.o(0), 0x3f800000)
*(rax_82 + 0x21) = 2
int64_t var_2888 = arg2[6]
void* rcx_105 = arg2[7]
void* var_2880 = rcx_105

if (rcx_105 != 0)
    *(rcx_105 + 8) += 1

void var_2160
int64_t* rax_83 = sub_14068d420(&var_2160)
rax_83[0xf].b = rax_28
*(rax_83 + 0x79) = 1
sub_1407473e0(&rax_83[0x10], &var_2b70)
void*** rax_84 = sub_140e91f70()
void*** var_2a30 = rax_84
void* var_2a38 = &rax_84[2]
sub_14065fa30(&var_2a38, &rax_84[2])
int64_t var_2d18_4 = 0x2d8
void var_2d04
void* var_2a28 = &var_2d04
sub_140e23ed0(&rax_84[2], "SHorizontalBox")
void* rax_85 = sub_140693860(var_2cd8, &var_28a8)
void* rax_86
int128_t zmm1_10
rax_86, zmm1_10 = sub_140693860(rax_82, &var_2898)
void* rax_87
int128_t zmm1_11
rax_87, zmm1_11 = sub_140edd9b0(rax_83, &var_2888, zmm1_10)
void* var_2758
void** rax_90 = sub_140696920(&var_2a38, &var_2758, 
    sub_1406938c0(sub_1406938c0(rax_87, rax_86), rax_85), zmm1_11)
int64_t (* var_2cb8)(void* arg1, double arg2 @ zmm0) = *rax_90
void* rcx_118 = rax_90[1]
void* var_2cb0 = rcx_118

if (rcx_118 != 0)
    *(rcx_118 + 8) += 1

void*** rax_91 = j_sub_140a82f30(0x88)
void*** rbx_18 = rax_91

if (rax_91 == 0)
    rbx_18 = nullptr
else
    sub_14068e490(rax_91)
    *rbx_18 = &data_142d8add0

void* rax_93 = sub_140f12c60(sub_140eb9be0(rbx_18, &var_29f0), zx.o(0), 0x3f800000)
*(rax_93 + 0x20) = 0x201
void*** rax_94 = sub_140e48c50()
void*** var_2a48 = rax_94
void*** rbx_19 = rax_94
void* var_2a50 = &rax_94[2]
sub_140918950(&var_2a50, &rax_94[2])
int64_t var_2d18_5 = 0x3a8
void var_2d03
void* var_2a40 = &var_2d03
sub_140e23ed0(&rax_94[2], "SImage")
var_2cc8 = &rax_94[2]
var_2cc0.q = rbx_19

if (rbx_19 != 0)
    rbx_19[1].d += 1

if (arg1 + 0x740 != &var_2cc8)
    *(arg1 + 0x740) = &rax_94[2]
    var_2cc8 = nullptr
    sub_14066a200(arg1 + 0x748, &var_2cc0)
    rbx_19 = var_2cc0.q

if (rbx_19 != 0)
    rbx_19[1].d -= 1
    
    if (rbx_19[1].d == 1)
        (**rbx_19)(rbx_19)
        int32_t temp10_1 = *(rbx_19 + 0xc)
        *(rbx_19 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*rbx_19)[1](rbx_19, 1)

void var_1bd8
void* rax_98
int128_t zmm1_13
rax_98, zmm1_13 = sub_140e48870(sub_140e4fb70(&var_1bd8), arg1, &var_26b8)
void* var_25d8
void** rax_99 = sub_140e56930(&var_2a50, &var_25d8, rax_98, zmm1_13)
int128_t* (* var_2c28)(void* arg1, int128_t* arg2) = *rax_99
void* rcx_132 = rax_99[1]
void* var_2c20 = rcx_132

if (rcx_132 != 0)
    *(rcx_132 + 8) += 1

void var_fe8
int64_t* rax_100 = sub_14068c640(&var_fe8)
rax_100[0x39].b = 1
*(rax_100 + 0x1b8) = var_2848
sub_140692f90(&rax_100[0x3a], &var_2830)
rax_100[0xf].b = rax_29
*(rax_100 + 0x79) = 1
sub_1407473e0(&rax_100[0x10], &var_2bd0)
void*** rax_101 = sub_140e916e0()
void*** var_2a60 = rax_101
void* var_2a68 = &rax_101[2]
sub_14065fa30(&var_2a68, &rax_101[2])
int64_t var_2d18_6 = 0x4b8
void var_2d02
void* var_2a58 = &var_2d02
sub_140e23ed0(&rax_101[2], "SBorder")
void* rax_103
int128_t zmm1_14
rax_103, zmm1_14 = sub_140edf450(sub_140edf580(rax_100, arg1, &var_26c8), arg1, &var_26d8)
void* rax_104
int128_t zmm1_15
rax_104, zmm1_15 = sub_1406936e0(rax_103, &var_2c28, zmm1_14)
void* var_25e8
void** rax_105 = sub_140695920(&var_2a68, &var_25e8, rax_104, zmm1_15)
void* rdx_66 = rax_105[1]
float* (* var_2cf8)(void* arg1, float* arg2, uint128_t arg3 @ zmm0) = *rax_105
void* var_2cf0 = rdx_66

if (rdx_66 != 0)
    *(rdx_66 + 8) += 1

void*** rax_106 = j_sub_140a82f30(0x88)
void*** rbx_21 = rax_106

if (rax_106 == 0)
    rbx_21 = nullptr
else
    sub_14068e490(rax_106)
    *rbx_21 = &data_142d8add0

void* rax_107 = sub_140698b50(rbx_21)
*(rax_107 + 0x21) = 2
int128_t* (* var_2c18)(void* arg1, int128_t* arg2) = arg2[6]
void* rcx_147 = arg2[7]
void* var_2c10 = rcx_147

if (rcx_147 != 0)
    *(rcx_147 + 8) += 1

void var_2310
int64_t* rax_108
int128_t zmm1_16
rax_108, zmm1_16 = sub_14068d420(&var_2310)
rax_108[0xf].b = rax_34
*(rax_108 + 0x79) = 1
sub_1407473e0(&rax_108[0x10], &var_2bb8)
int128_t* rax_109 = sub_140edd9b0(rax_108, &var_2c18, zmm1_16)
sub_14065da90(rax_109, rax_33)
*(rax_109 + 0x18) = rax_33[3].b
sub_140692f90(&rax_109[2], &rax_33[4])
void*** rax_110 = sub_140e91f70()
void*** var_2a78 = rax_110
void* var_2a80 = &rax_110[2]
sub_14065fa30(&var_2a80, &rax_110[2])
int32_t var_2d18_7 = 0x2d8
void var_2d01
void* var_2a70 = &var_2d01
sub_140e23ed0(&rax_110[2], "SHorizontalBox")
void* rax_111 = sub_140693860(rax_93, &var_2cb8)
void* rax_113
int128_t zmm1_18
rax_113, zmm1_18 =
    sub_140693860(sub_14069cf40(rax_107, zx.o(0), (zx.o(0)).d, 0x40a00000, zmm9_1), &var_2cf8)
void* var_25f8
void** rax_117 = sub_140696920(&var_2a80, &var_25f8, 
    sub_1406938c0(sub_1406938c0(sub_1406938c0(rax_109, rax_113), rax_111), rax_61), zmm1_18)
void* var_2918 = *rax_117
int64_t* rcx_165 = rax_117[1]
int64_t* var_2910 = rcx_165

if (rcx_165 != 0)
    rcx_165[1].d += 1

char rbx_26 = data_1439ae51f
var_2cf8 = sub_140f010e0
var_2cf0.d = 0
int128_t zmm0_10 = var_2cf8.o
var_2cb8 = sub_140f011f0
int128_t var_2708 = zmm0_10
var_2cb0.d = 0
int128_t zmm1_19 = var_2cb8.o
var_2c18 = sub_140f036b0
var_2c10.d = 0
zmm0_10 = var_2c18.o
int128_t var_26f8 = zmm1_19
int128_t var_26e8 = zmm0_10
var_2c28 = sub_140f036b0
var_2c20.d = 0
char var_2b10 = rbx_26
char var_2b0f = 1
int64_t var_2b08 = 0
int32_t var_2b00 = 0
void var_1330
int64_t* rax_118 = sub_14068c640(&var_1330)
rax_118[0xf].b = rbx_26
*(rax_118 + 0x79) = 1
sub_1407473e0(&rax_118[0x10], &var_2b08)
void*** rax_119 = sub_140e916e0()
void*** var_2a90 = rax_119
void* var_2a98 = &rax_119[2]
sub_14065fa30(&var_2a98, &rax_119[2])
int64_t var_2d18_8 = 0x4b8
void var_2d00
void* var_2a88 = &var_2d00
sub_140e23ed0(&rax_119[2], "SBorder")
void* rax_122
int128_t zmm1_20
rax_122, zmm1_20 = sub_140edf450(
    sub_140edf580(sub_140ee1100(rax_118, arg1, &var_26e8), arg1, &var_26f8), arg1, &var_2708)
void* var_2608
void** rax_123 = sub_140695920(&var_2a98, &var_2608, rax_122, zmm1_20)
void* var_2988 = *rax_123
int64_t* rcx_175 = rax_123[1]
var_2cd8 = rcx_175
int64_t* var_2980 = rcx_175

if (rcx_175 != 0)
    rcx_175[1].d += 1

char rbx_28 = data_1439ae51f
var_2cf8 = sub_140eff910
var_2cf0.d = 0
int128_t zmm0_11 = var_2cf8.o
var_2cb8 = sub_140f036b0
var_2cb0.d = 0
int128_t zmm1_21 = var_2cb8.o
int128_t var_26a8 = zmm0_11
char var_2ab0 = rbx_28
char var_2aaf = 1
int64_t var_2aa8 = 0
int32_t var_2aa0 = 0
int128_t var_2598 = zmm1_21
void var_1678
int64_t* rax_124 = sub_14068c640(&var_1678)
rax_124[0xf].b = rbx_28
*(rax_124 + 0x79) = 1
sub_1407473e0(&rax_124[0x10], &var_2aa8)
void*** rax_125 = sub_140e916e0()
void*** var_2ac0 = rax_125
void* var_2ac8 = &rax_125[2]
sub_14065fa30(&var_2ac8, &rax_125[2])
int64_t var_2d18_9 = 0x4b8
void var_2cff
void* var_2ab8 = &var_2cff
sub_140e23ed0(&rax_125[2], "SBorder")
void* rax_127
int128_t zmm1_22
rax_127, zmm1_22 = sub_140edf580(sub_140ee1100(rax_124, arg1, &var_2598), arg1, &var_26a8)
void* var_2618
void** rax_128 = sub_140695920(&var_2ac8, &var_2618, rax_127, zmm1_22)
int64_t* r13_1 = rax_128[1]
void* var_2978 = *rax_128
int64_t* var_2970 = r13_1

if (r13_1 != 0)
    r13_1[1].d += 1

var_2cf0.d = 0
var_2cf8 = sub_140f01460
int128_t var_2698 = var_2cf8.o
void*** rax_129 = sub_140e48c50()
void*** var_2ad8 = rax_129
void* var_2ae0 = &rax_129[2]
sub_140918950(&var_2ae0, &rax_129[2])
int64_t var_2d18_10 = 0x3a8
void var_2cfe
void* var_2ad0 = &var_2cfe
sub_140e23ed0(&rax_129[2], "SImage")
void var_1df0
void* rax_131
int128_t zmm1_23
rax_131, zmm1_23 = sub_140e48870(sub_140e4fb70(&var_1df0), arg1, &var_2698)
void* var_2628
void** rax_132 = sub_140e56930(&var_2ae0, &var_2628, rax_131, zmm1_23)
int64_t* r12_2 = rax_132[1]
void* var_2968 = *rax_132
int64_t* var_2960 = r12_2

if (r12_2 != 0)
    r12_2[1].d += 1

char var_27c0 = 1
var_2cf8 = sub_140eff960
int128_t var_27d0 = zx.o(0)
int64_t var_27b8 = 0
int32_t var_27b0 = 0
var_2cf0.d = 0
sub_140e15430()
int128_t var_2688 = var_2c28.o
int64_t* var_29c0 = &data_143e24500
char var_29b8 = 1
int64_t var_29b0 = 0
int32_t var_29a8 = 0
void var_2638
int64_t* rax_133 = sub_140e8eef0(&var_2638, arg1, &var_2688)
char var_27e8 = 1
int64_t var_27e0 = 0
int32_t var_27d8 = 0
int128_t var_27f8 = zx.o(0)
sub_140692f90(&var_27e0, rax_133)
void* rax_135 = sub_140f12c10(sub_140e258e0(), &var_27f8)
*(rax_135 + 0x24) = 0x200
void*** rax_136 = sub_140dd3900()
void*** var_2af0 = rax_136
void* var_2af8 = &rax_136[2]
sub_140918950(&var_2af8, &rax_136[2])
int64_t var_2d18_11 = 0x2d0
void var_2cfd
void* var_2ae8 = &var_2cfd
sub_140e23ed0(&rax_136[2], "SOverlay")
void* rax_137 = sub_140de1aa0(rax_135, &var_2918)
void* rax_139 = sub_140de1aa0(sub_140e258e0(), &var_2988)
void* rax_141 = sub_140de1aa0(sub_140e258e0(), &var_2978)
void* rax_143 = sub_140de1aa0(sub_140e258e0(), &var_2968)
void var_24c0
int64_t* rax_144
int128_t zmm1_24
rax_144, zmm1_24 = sub_140dd5d30(&var_24c0)
void* var_2648
void** rax_149 = sub_140de49c0(&var_2af8, &var_2648, 
    sub_140de1c90(sub_140de1c90(sub_140de1c90(sub_140de1c90(rax_144, rax_143), rax_141), rax_139), 
        rax_137), 
    zmm1_24)
void* var_2958 = *rax_149
void* rcx_206 = rax_149[1]
void* var_2950 = rcx_206

if (rcx_206 != 0)
    *(rcx_206 + 8) += 1

void var_19c0
int64_t* rax_150
int128_t zmm6_2
rax_150, zmm6_2 = sub_14068c640(&var_19c0)
rax_150[0x44] = var_29c0
rax_150[0x45].b = 1
sub_140692f90(&rax_150[0x46], &var_29b0)
int128_t var_2678 = var_2cf8.o
void var_2668
int64_t* rax_152 = sub_140e8f010(&var_2668, arg1, &var_2678)
char var_2b58 = 1
int64_t var_2b50 = 0
int32_t var_2b48 = 0
sub_140692f90(&var_2b50, rax_152)
int32_t var_2b60
rax_150[0x48].d = var_2b60
int32_t var_2b5c
*(rax_150 + 0x244) = var_2b5c
rax_150[0x49].b = var_2b58
sub_1407473e0(&rax_150[0x4a], &var_2b50)
sub_140745b20(&var_2b50)
int128_t zmm1_26 = sub_140745b20(&var_2668)
*(rax_150 + 0x1b4) = 3
rax_150[0x39].b = 1
*(rax_150 + 0x1b8) = zmm6_2
sub_140692f90(&rax_150[0x3a], &var_27b8)
sub_140f33710(arg1, sub_1406936e0(rax_150, &var_2958, zmm1_26))
sub_14068fed0(&var_19c0)
int64_t* var_2640

if (var_2640 != 0)
    var_2640[1].d -= 1
    
    if (var_2640[1].d == 1)
        (**var_2640)(var_2640)
        int32_t temp12_1 = *(var_2640 + 0xc)
        *(var_2640 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*var_2640 + 8))(var_2640, 1)

sub_140597060(&var_2af8)
int64_t var_2320

if (var_2320 != 0)
    sub_140a74f90(var_2320)

sub_140ddea30(&var_24c0)
sub_140745b20(&var_2638)
sub_140745b20(&var_29b0)
sub_140745b20(&var_27b8)

if (r12_2 != 0)
    r12_2[1].d -= 1
    
    if (r12_2[1].d == 1)
        (**r12_2)(r12_2)
        int32_t temp15_1 = *(r12_2 + 0xc)
        *(r12_2 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*(*r12_2 + 8))(r12_2, 1)

int64_t* var_2620

if (var_2620 != 0)
    var_2620[1].d -= 1
    
    if (var_2620[1].d == 1)
        (**var_2620)(var_2620)
        int32_t temp17_1 = *(var_2620 + 0xc)
        *(var_2620 + 0xc) -= 1
        
        if (temp17_1 == 1)
            (*(*var_2620 + 8))(var_2620, 1)

sub_140597060(&var_2ae0)
sub_140e536f0(&var_1df0)

if (r13_1 != 0)
    r13_1[1].d -= 1
    
    if (r13_1[1].d == 1)
        (**r13_1)(r13_1)
        int32_t temp19_1 = *(r13_1 + 0xc)
        *(r13_1 + 0xc) -= 1
        
        if (temp19_1 == 1)
            (*(*r13_1 + 8))(r13_1, 1)

int64_t* var_2610

if (var_2610 != 0)
    var_2610[1].d -= 1
    
    if (var_2610[1].d == 1)
        (**var_2610)(var_2610)
        int32_t temp21_1 = *(var_2610 + 0xc)
        *(var_2610 + 0xc) -= 1
        
        if (temp21_1 == 1)
            (*(*var_2610 + 8))(var_2610, 1)

sub_140669d70(&var_2ac8)
sub_14068fed0(&var_1678)
sub_140745b20(&var_2aa8)
int64_t* rbx_37 = var_2cd8

if (rbx_37 != 0)
    rbx_37[1].d -= 1
    
    if (rbx_37[1].d == 1)
        (**rbx_37)(rbx_37)
        int32_t temp23_1 = *(rbx_37 + 0xc)
        *(rbx_37 + 0xc) -= 1
        
        if (temp23_1 == 1)
            (*(*rbx_37 + 8))(rbx_37, 1)

int64_t* var_2600

if (var_2600 != 0)
    var_2600[1].d -= 1
    
    if (var_2600[1].d == 1)
        (**var_2600)(var_2600)
        int32_t temp25_1 = *(var_2600 + 0xc)
        *(var_2600 + 0xc) -= 1
        
        if (temp25_1 == 1)
            (*(*var_2600 + 8))(var_2600, 1)

sub_140669d70(&var_2a98)
sub_14068fed0(&var_1330)
sub_140745b20(&var_2b08)

if (rcx_165 != 0)
    rcx_165[1].d -= 1
    
    if (rcx_165[1].d == 1)
        (**rcx_165)(rcx_165)
        int32_t temp27_1 = *(rcx_165 + 0xc)
        *(rcx_165 + 0xc) -= 1
        
        if (temp27_1 == 1)
            (*(*rcx_165 + 8))(rcx_165, 1)

int64_t* var_25f0

if (var_25f0 != 0)
    var_25f0[1].d -= 1
    
    if (var_25f0[1].d == 1)
        (**var_25f0)(var_25f0)
        int32_t temp28_1 = *(var_25f0 + 0xc)
        *(var_25f0 + 0xc) -= 1
        
        if (temp28_1 == 1)
            (*(*var_25f0 + 8))(var_25f0, 1)

sub_140669d70(&var_2a80)
int64_t var_2170

if (var_2170 != 0)
    sub_140a74f90(var_2170)

sub_140660250(&var_2310)
int64_t* var_25e0

if (var_25e0 != 0)
    var_25e0[1].d -= 1
    
    if (var_25e0[1].d == 1)
        (**var_25e0)(var_25e0)
        int32_t temp31_1 = *(var_25e0 + 0xc)
        *(var_25e0 + 0xc) -= 1
        
        if (temp31_1 == 1)
            (*(*var_25e0 + 8))(var_25e0, 1)

sub_140669d70(&var_2a68)
sub_14068fed0(&var_fe8)
int64_t* var_25d0

if (var_25d0 != 0)
    var_25d0[1].d -= 1
    
    if (var_25d0[1].d == 1)
        (**var_25d0)(var_25d0)
        int32_t temp33_1 = *(var_25d0 + 0xc)
        *(var_25d0 + 0xc) -= 1
        
        if (temp33_1 == 1)
            (*(*var_25d0 + 8))(var_25d0, 1)

sub_140597060(&var_2a50)
sub_140e536f0(&var_1bd8)
int64_t* var_2750

if (var_2750 != 0)
    var_2750[1].d -= 1
    
    if (var_2750[1].d == 1)
        (**var_2750)(var_2750)
        int32_t temp34_1 = *(var_2750 + 0xc)
        *(var_2750 + 0xc) -= 1
        
        if (temp34_1 == 1)
            (*(*var_2750 + 8))(var_2750, 1)

sub_140669d70(&var_2a38)
int64_t var_1fc0

if (var_1fc0 != 0)
    sub_140a74f90(var_1fc0)

sub_140660250(&var_2160)
int64_t* var_2740

if (var_2740 != 0)
    var_2740[1].d -= 1
    
    if (var_2740[1].d == 1)
        (**var_2740)(var_2740)
        int32_t temp37_1 = *(var_2740 + 0xc)
        *(var_2740 + 0xc) -= 1
        
        if (temp37_1 == 1)
            (*(*var_2740 + 8))(var_2740, 1)

sub_140669d70(&var_2b90)
sub_1406913d0(&var_910)
int64_t* var_2730

if (var_2730 != 0)
    var_2730[1].d -= 1
    
    if (var_2730[1].d == 1)
        (**var_2730)(var_2730)
        int32_t temp39_1 = *(var_2730 + 0xc)
        *(var_2730 + 0xc) -= 1
        
        if (temp39_1 == 1)
            (*(*var_2730 + 8))(var_2730, 1)

sub_140669d70(&var_2ba8)
sub_1406913d0(&var_4c8)
int64_t* var_2720

if (var_2720 != 0)
    var_2720[1].d -= 1
    
    if (var_2720[1].d == 1)
        (**var_2720)(var_2720)
        int32_t temp41_1 = *(var_2720 + 0xc)
        *(var_2720 + 0xc) -= 1
        
        if (temp41_1 == 1)
            (*(*var_2720 + 8))(var_2720, 1)

sub_140669d70(&var_2a20)
sub_1406905f0(&var_ca0)
int64_t* var_2710

if (var_2710 != 0)
    var_2710[1].d -= 1
    
    if (var_2710[1].d == 1)
        (**var_2710)(var_2710)
        int32_t temp42_1 = *(var_2710 + 0xc)
        *(var_2710 + 0xc) -= 1
        
        if (temp42_1 == 1)
            (*(*var_2710 + 8))(var_2710, 1)

sub_140597060(&var_2a08)
void var_1e00
sub_140745b20(&var_1e00)
sub_140ddea30(&var_1fb0)
sub_140745b20(&var_2bb8)

if (var_2ce8 != 0)
    sub_1406601b0(&var_2580)

if (var_2ce4 != 0)
    sub_1406601b0(&var_2878)

sub_140745b20(&var_2830)
sub_140745b20(&var_2bd0)
sub_140745b20(&var_29e8)
sub_140745b20(&var_2b70)
sub_140745b20(&var_29d0)
sub_140745b20(&var_2808)
uint64_t result = sub_140745b20(&var_2b30)
__security_check_cookie(rax_1 ^ &var_2d38)
return result
