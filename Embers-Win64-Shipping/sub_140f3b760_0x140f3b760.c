// 函数: sub_140f3b760
// 地址: 0x140f3b760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1340)
void var_1378
int64_t rax_1 = __security_cookie ^ &var_1378
void var_10b8

if (arg1 + 0x3b0 != &var_10b8)
    *(arg1 + 0x3b0) = 0
    int64_t* rbx_1 = *(arg1 + 0x3b8)
    
    if (rbx_1 != 0)
        *(arg1 + 0x3b8) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

if (*(arg2 + 0x200) != 0)
    int64_t* rcx_2 = *(arg2 + 0x1f8)
    
    if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
        int64_t* rcx_3
        
        if (*(arg2 + 0x200) == 0)
            rcx_3 = nullptr
        else
            rcx_3 = *(arg2 + 0x1f8)
        
        *(arg2 + 0x1f0) = (*(*rcx_3 + 0x48))(rcx_3)

char rax_8 = *(arg2 + 0x1f0)
int64_t var_12d0 = *(arg2 + 0x1b8)
int64_t* rax_10 = *(arg2 + 0x1c0)
char var_1317 = 1
int64_t var_1310 = 0
int32_t var_1308 = 0

if (rax_10 != 0)
    rax_10[1].d += 1

int32_t var_12c0 = *(arg2 + 0x1c8)
int64_t var_1300 = *(arg2 + 0x1a0)
int64_t* rax_13 = *(arg2 + 0x1a8)
int32_t var_1228 = 0x41200000
char var_12b8 = 1
int64_t var_12b0 = 0
int32_t var_12a8 = 0
char var_1224 = 1
int64_t var_1220 = 0
int32_t var_1218 = 0

if (rax_13 != 0)
    rax_13[1].d += 1

int64_t* rbx_2 = data_143e243c8
int32_t var_12f0 = *(arg2 + 0x1b0)
int64_t rdi = *rbx_2
char var_12e8 = 1
int64_t var_12e0 = 0
int32_t var_12d8 = 0
int128_t var_11b0
__builtin_memcpy(&var_11b0, "\x00\x00\x20\x41\x00\x00\x20\x41\x00\x00\x20\x41\x00\x00\x20\x41\x01", 
    0x11)
int64_t var_1198 = 0
int32_t var_1190 = 0
void var_1160
int64_t rax_16 = (*(rdi + 0x48))(rbx_2, *sub_140b58170(&var_1160, "PopupText.Background", 1), 0)
char var_1208 = 1
int64_t var_1200 = 0
int32_t var_11f8 = 0
void var_5a8
int64_t* rax_17 = sub_140e94440(&var_5a8)
rax_17[0x86].d = 0x41200000
*(rax_17 + 0x434) = 1
sub_140692f90(&rax_17[0x87], &var_1220)
sub_14065da90(&rax_17[0x35], &var_12d0)
rax_17[0x38].b = var_12b8
sub_140692f90(&rax_17[0x39], &var_12b0)
sub_1407473e0(&rax_17[0x82], arg2 + 0x1e0)
sub_1407473e0(&rax_17[0x80], arg2 + 0x1d0)
sub_14065da90(&rax_17[0x3b], arg2 + 0x220)
rax_17[0x3e].b = *(arg2 + 0x238)
sub_140692f90(&rax_17[0x3f], arg2 + 0x240)
rax_17[0x6d].b = rax_8
*(rax_17 + 0x369) = 1
sub_140692f90(&rax_17[0x6e], &var_1310)
rax_17[0x73].b = *(arg2 + 0x208)
*(rax_17 + 0x399) = *(arg2 + 0x209)
sub_140692f90(&rax_17[0x74], arg2 + 0x210)
void*** rax_22 = j_sub_140a82f30(0x6b0)
void*** rbx_3 = rax_22

if (rax_22 == 0)
    rbx_3 = nullptr
else
    rax_22[1].d = 1
    *(rax_22 + 0xc) = 1
    *rbx_3 = &data_142edf1b0
    
    if (rbx_3 != -0x10)
        sub_140ee3660(&rbx_3[2])

void* var_1240 = &rbx_3[2]
sub_140918950(&var_1240, &rbx_3[2])
int64_t var_1358 = 0x6a0
void var_1348
void* var_1230 = &var_1348
int128_t zmm1 = sub_140e23ed0(&rbx_3[2], "SEditableTextBox")

if (rbx_3 != 0)
    rbx_3[1].d += 1

void var_10a8

if (arg1 + 0x3b0 == &var_10a8)
label_140f3bafd:
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp4_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rbx_3)[1](rbx_3, 1)
else
    *(arg1 + 0x3b0) = &rbx_3[2]
    void*** rdi_2 = *(arg1 + 0x3b8)
    
    if (rbx_3 == rdi_2)
        goto label_140f3bafd
    
    *(arg1 + 0x3b8) = rbx_3
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp6_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rdi_2)[1](rdi_2, 1)

void* var_1118
void** rax_26 = sub_140e9ce60(&var_1240, &var_1118, rax_17, zmm1)
int64_t* rbx_4 = rax_26[1]
void* var_11f0 = *rax_26
int64_t* var_11e8 = rbx_4

if (rbx_4 != 0)
    rbx_4[1].d += 1

void*** rax_27 = j_sub_140a82f30(0x88)
void*** rdi_3 = rax_27

if (rax_27 == 0)
    rdi_3 = nullptr
else
    sub_14068e490(rax_27)
    *rdi_3 = &data_142d8add0

void* rax_28 = sub_140698b50(rdi_3)
sub_140693600(rax_28, &var_11f0)

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        int64_t rdx_13 = *rbx_4
        (*rdx_13)(rbx_4, rdx_13)
        int32_t temp8_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

void var_9f0
int64_t* rax_30 = sub_14068d9d0(&var_9f0)
sub_14065da90(&rax_30[0x34], &var_1300)
rax_30[0x37].b = var_12e8
sub_140692f90(&rax_30[0x38], &var_12e0)
void*** rax_31 = j_sub_140a82f30(0x7a8)
void*** rdi_4 = rax_31

if (rax_31 == 0)
    rdi_4 = nullptr
else
    rax_31[1].d = 1
    *(rax_31 + 0xc) = 1
    *rdi_4 = &data_142d8b060
    
    if (rdi_4 != -0x10)
        sub_140f66da0(&rdi_4[2])

void* var_1258 = &rdi_4[2]
sub_14065fa30(&var_1258, &rdi_4[2])
int64_t var_1358_1 = 0x798
void var_1347
void* var_1248 = &var_1347
void* var_1128
void** rax_32 = sub_140697520(&var_1258, &var_1128, rax_30, sub_140e23ed0(&rdi_4[2], "STextBlock"))
int64_t* rbx_6 = rax_32[1]
void* var_11e0 = *rax_32
int64_t* var_11d8 = rbx_6

if (rbx_6 != 0)
    rbx_6[1].d += 1

void*** rax_33 = j_sub_140a82f30(0x88)
void*** rdi_5 = rax_33

if (rax_33 == 0)
    rdi_5 = nullptr
else
    sub_14068e490(rax_33)
    *rdi_5 = &data_142d8add0

void* rax_34 = sub_140698b50(rdi_5)
sub_140693600(rax_34, &var_11e0)

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        int64_t rdx_19 = *rbx_6
        (*rdx_19)(rbx_6, rdx_19)
        int32_t temp10_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rbx_6 + 8))(rbx_6, 1)

void var_ee8
int64_t* rax_36 = sub_14068d420(&var_ee8)
int64_t rdi_6 = sx.q(rax_36[0x35].d)
int32_t rcx_45 = (rdi_6 + 1).d
rax_36[0x35].d = rcx_45

if (rcx_45 s> *(rax_36 + 0x1ac))
    sub_140638870(&rax_36[0x34])

*(rax_36[0x34] + (rdi_6 << 3)) = rax_34
int64_t rdi_7 = sx.q(rax_36[0x35].d)
int32_t rax_38 = (rdi_7 + 1).d
rax_36[0x35].d = rax_38

if (rax_38 s> *(rax_36 + 0x1ac))
    sub_140638870(&rax_36[0x34])

*(rax_36[0x34] + (rdi_7 << 3)) = rax_28
void*** rax_40 = j_sub_140a82f30(0x2e8)
void*** rbx_8 = rax_40

if (rax_40 == 0)
    rbx_8 = nullptr
else
    rax_40[1].d = 1
    *(rax_40 + 0xc) = 1
    *rbx_8 = &data_142d8c590
    
    if (rbx_8 != -0x10)
        sub_14068e550(&rbx_8[2])

void* var_1270 = &rbx_8[2]
sub_14065fa30(&var_1270, &rbx_8[2])
int64_t var_1358_2 = 0x2d8
void var_1346
void* var_1260 = &var_1346
int128_t zmm1_2 = sub_140e23ed0(&rbx_8[2], "SVerticalBox")

if (rbx_8 != 0)
    rbx_8[1].d += 1

void var_10e8

if (arg1 + 0x390 == &var_10e8)
label_140f3be3b:
    
    if (rbx_8 != 0)
        rbx_8[1].d -= 1
        
        if (rbx_8[1].d == 1)
            (**rbx_8)(rbx_8)
            int32_t temp12_1 = *(rbx_8 + 0xc)
            *(rbx_8 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*rbx_8)[1](rbx_8, 1)
else
    *(arg1 + 0x390) = &rbx_8[2]
    void*** rdi_9 = *(arg1 + 0x398)
    
    if (rbx_8 == rdi_9)
        goto label_140f3be3b
    
    *(arg1 + 0x398) = rbx_8
    
    if (rdi_9 != 0)
        rdi_9[1].d -= 1
        
        if (rdi_9[1].d == 1)
            (**rdi_9)(rdi_9)
            int32_t temp14_1 = *(rdi_9 + 0xc)
            *(rdi_9 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*rdi_9)[1](rdi_9, 1)

void* var_1138
void** rax_44 = sub_140696920(&var_1270, &var_1138, rax_36, zmm1_2)
int64_t* rbx_9 = rax_44[1]
void* var_11d0 = *rax_44
int64_t* var_11c8 = rbx_9

if (rbx_9 != 0)
    rbx_9[1].d += 1

void*** rax_45 = j_sub_140a82f30(0x88)
void*** rdi_10 = rax_45

if (rax_45 == 0)
    rdi_10 = nullptr
else
    sub_14068e490(rax_45)
    *rdi_10 = &data_142d8add0

void* rax_46 = sub_140698b50(rdi_10)
*(rax_46 + 0x70) = *(arg2 + 0x250)
*(rax_46 + 0x74) = *(arg2 + 0x254)
sub_140692f90(rax_46 + 0x78, arg2 + 0x258)
sub_140693600(rax_46, &var_11d0)

if (rbx_9 != 0)
    rbx_9[1].d -= 1
    
    if (rbx_9[1].d == 1)
        (**rbx_9)(rbx_9)
        int32_t temp16_1 = *(rbx_9 + 0xc)
        *(rbx_9 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*(*rbx_9 + 8))(rbx_9, 1)

void var_1098
int64_t* rax_49 = sub_14068d420(&var_1098)
int64_t r14_3 = sx.q(rax_49[0x35].d)
int32_t rcx_65 = (r14_3 + 1).d
rax_49[0x35].d = rcx_65

if (rcx_65 s> *(rax_49 + 0x1ac))
    sub_140638870(&rax_49[0x34])

*(rax_49[0x34] + (r14_3 << 3)) = rax_46
void*** rax_51 = j_sub_140a82f30(0x2e8)
void*** rdi_12 = rax_51

if (rax_51 == 0)
    rdi_12 = nullptr
else
    rax_51[1].d = 1
    *(rax_51 + 0xc) = 1
    *rdi_12 = &data_142d8c590
    
    if (rdi_12 != -0x10)
        sub_14068e500(&rdi_12[2])

void* var_1288 = &rdi_12[2]
sub_14065fa30(&var_1288, &rdi_12[2])
int64_t var_1358_3 = 0x2d8
void var_1345
void* var_1278 = &var_1345
void* var_1148
void** rax_52 =
    sub_140696920(&var_1288, &var_1148, rax_49, sub_140e23ed0(&rdi_12[2], "SHorizontalBox"))
void* var_11c0 = *rax_52
void* rcx_72 = rax_52[1]
void* var_11b8 = rcx_72

if (rcx_72 != 0)
    *(rcx_72 + 8) += 1

void var_d38
int64_t* rax_53
int128_t zmm6
rax_53, zmm6 = sub_14068c640(&var_d38)
rax_53[0x44] = rax_16
rax_53[0x45].b = 1
sub_140692f90(&rax_53[0x46], &var_1200)
rax_53[0x39].b = 1
*(rax_53 + 0x1b8) = zmm6
sub_140692f90(&rax_53[0x3a], &var_1198)
void*** rax_55 = j_sub_140a82f30(0x4c8)
void*** rdi_13 = rax_55

if (rax_55 == 0)
    rdi_13 = nullptr
else
    rax_55[1].d = 1
    *(rax_55 + 0xc) = 1
    *rdi_13 = &data_142d8c5a0
    
    if (rdi_13 != -0x10)
        sub_140f20640(&rdi_13[2])

void* var_12a0 = &rdi_13[2]
sub_14065fa30(&var_12a0, &rdi_13[2])
int64_t var_1358_4 = 0x4b8
void var_1344
void* var_1290 = &var_1344
void* rax_56
int128_t zmm1_5
rax_56, zmm1_5 = sub_1406936e0(rax_53, &var_11c0, sub_140e23ed0(&rdi_13[2], "SBorder"))
void* var_1158
void** rax_57 = sub_140695920(&var_12a0, &var_1158, rax_56, zmm1_5)
int64_t* rbx_12 = rax_57[1]
uint64_t (* var_1328)(void* arg1, uint128_t arg2 @ zmm0) = *rax_57
int64_t* var_1320 = rbx_12

if (rbx_12 != 0)
    rbx_12[1].d += 1

sub_140de1b90(arg1 + 0x2b8, &var_1328)

if (rbx_12 != 0)
    rbx_12[1].d -= 1
    
    if (rbx_12[1].d == 1)
        (**rbx_12)(rbx_12)
        int32_t temp19_1 = *(rbx_12 + 0xc)
        *(rbx_12 + 0xc) -= 1
        
        if (temp19_1 == 1)
            (*(*rbx_12 + 8))(rbx_12, 1)

int64_t* var_1150

if (var_1150 != 0)
    var_1150[1].d -= 1
    
    if (var_1150[1].d == 1)
        (**var_1150)(var_1150)
        int32_t temp21_1 = *(var_1150 + 0xc)
        *(var_1150 + 0xc) -= 1
        
        if (temp21_1 == 1)
            (*(*var_1150 + 8))(var_1150, 1)

if (rdi_13 != 0)
    rdi_13[1].d -= 1
    
    if (rdi_13[1].d == 1)
        (**rdi_13)(rdi_13)
        int32_t temp23_1 = *(rdi_13 + 0xc)
        *(rdi_13 + 0xc) -= 1
        
        if (temp23_1 == 1)
            (*rdi_13)[1](rdi_13, 1)

sub_14068fed0(&var_d38)
int64_t* var_1140

if (var_1140 != 0)
    var_1140[1].d -= 1
    
    if (var_1140[1].d == 1)
        (**var_1140)(var_1140)
        int32_t temp25_1 = *(var_1140 + 0xc)
        *(var_1140 + 0xc) -= 1
        
        if (temp25_1 == 1)
            (*(*var_1140 + 8))(var_1140, 1)

if (rdi_12 != 0)
    rdi_12[1].d -= 1
    
    if (rdi_12[1].d == 1)
        (**rdi_12)(rdi_12)
        int32_t temp26_1 = *(rdi_12 + 0xc)
        *(rdi_12 + 0xc) -= 1
        
        if (temp26_1 == 1)
            (*rdi_12)[1](rdi_12, 1)

int64_t var_ef8

if (var_ef8 != 0)
    sub_140a74f90(var_ef8)

sub_140660250(&var_1098)
int64_t* var_1130

if (var_1130 != 0)
    var_1130[1].d -= 1
    
    if (var_1130[1].d == 1)
        (**var_1130)(var_1130)
        int32_t temp29_1 = *(var_1130 + 0xc)
        *(var_1130 + 0xc) -= 1
        
        if (temp29_1 == 1)
            (*(*var_1130 + 8))(var_1130, 1)

if (rbx_8 != 0)
    rbx_8[1].d -= 1
    
    if (rbx_8[1].d == 1)
        (**rbx_8)(rbx_8)
        int32_t temp30_1 = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (temp30_1 == 1)
            (*rbx_8)[1](rbx_8, 1)

int64_t var_d48

if (var_d48 != 0)
    sub_140a74f90(var_d48)

sub_140660250(&var_ee8)
int64_t* var_1120

if (var_1120 != 0)
    var_1120[1].d -= 1
    
    if (var_1120[1].d == 1)
        (**var_1120)(var_1120)
        int32_t temp33_1 = *(var_1120 + 0xc)
        *(var_1120 + 0xc) -= 1
        
        if (temp33_1 == 1)
            (*(*var_1120 + 8))(var_1120, 1)

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t temp35_1 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (temp35_1 == 1)
            (*rdi_4)[1](rdi_4, 1)

sub_1406913d0(&var_9f0)
int64_t* var_1110

if (var_1110 != 0)
    var_1110[1].d -= 1
    
    if (var_1110[1].d == 1)
        (**var_1110)(var_1110)
        int32_t temp37_1 = *(var_1110 + 0xc)
        *(var_1110 + 0xc) -= 1
        
        if (temp37_1 == 1)
            (*(*var_1110 + 8))(var_1110, 1)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp38_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp38_1 == 1)
            (*rbx_3)[1](rbx_3, 1)

sub_140e97d60(&var_5a8)
sub_140745b20(&var_1200)
sub_140745b20(&var_1198)
sub_140745b20(&var_12e0)

if (rax_13 != 0)
    rax_13[1].d -= 1
    
    if (rax_13[1].d == 1)
        (**rax_13)(rax_13)
        int32_t rax_82 = *(rax_13 + 0xc)
        *(rax_13 + 0xc) -= 1
        
        if (rax_82 == 1)
            (*(*rax_13 + 8))(rax_13, 1)

sub_140745b20(&var_1220)
sub_140745b20(&var_12b0)

if (rax_10 != 0)
    rax_10[1].d -= 1
    
    if (rax_10[1].d == 1)
        (**rax_10)(rax_10)
        int32_t rdi_14 = *(rax_10 + 0xc)
        *(rax_10 + 0xc) -= 1
        
        if (rdi_14 == 1)
            (*(*rax_10 + 8))(rax_10, zx.q(rdi_14))

sub_140745b20(&var_1310)
int64_t* rbx_25 = *(arg2 + 0x270)
int64_t var_1340 = *(arg2 + 0x268)

if (rbx_25 != 0)
    rbx_25[1].d += 1

int64_t* result = &var_1340

if (&var_1340 != arg1 + 0x3a0)
    var_1340.o = *(arg1 + 0x3a0)
    *(arg1 + 0x3a0) = var_1340.o

if (rbx_25 != 0)
    rbx_25[1].d -= 1
    
    if (rbx_25[1].d == 1)
        result = (**rbx_25)(rbx_25)
        int32_t temp40_1 = *(rbx_25 + 0xc)
        *(rbx_25 + 0xc) -= 1
        
        if (temp40_1 == 1)
            result = (*(*rbx_25 + 8))(rbx_25, 1)

int64_t* rbx_26 = *(arg1 + 0x3a0)

if (rbx_26 != 0)
    void* rax_91 = sub_140698b50(sub_140698a90(*(arg1 + 0x390)))
    int128_t var_1188
    __builtin_memcpy(&var_1188, 
        "\x00\x00\x40\x40\x00\x00\x00\x00\x00\x00\x40\x40\x00\x00\x00\x00\x01", 0x11)
    int64_t var_1170 = 0
    int32_t var_1168_1 = 0
    __builtin_memcpy(rax_91 + 0x48, 
        "\x00\x00\x40\x40\x00\x00\x00\x00\x00\x00\x40\x40\x00\x00\x00\x00\x01", 0x11)
    sub_1407473e0(rax_91 + 0x60, &var_1170)
    sub_140745b20(&var_1170)
    void var_10d8
    int64_t* rax_93 = (*(*rbx_26 + 0x18))(rbx_26, &var_10d8)
    result = sub_140693600(rax_91, rax_93)
    int64_t* rbx_28 = rax_93[1]
    
    if (rbx_28 != 0)
        rbx_28[1].d -= 1
        
        if (rbx_28[1].d == 1)
            result = (**rbx_28)(rbx_28)
            int32_t temp43_1 = *(rbx_28 + 0xc)
            *(rbx_28 + 0xc) -= 1
            
            if (temp43_1 == 1)
                result = (*(*rbx_28 + 8))(rbx_28, 1)

if (*(arg2 + 0x278) != 0)
    var_1320.d = 0
    var_1328 = sub_140f63180
    int128_t var_1108 = var_1328.o
    void var_10f8
    void var_10c8
    result = sub_140e20c50(arg1, &var_10f8, 0x3c83126f, sub_140dd1ff0(&var_10c8, arg1, &var_1108))
    int64_t* var_10f0
    
    if (var_10f0 != 0)
        var_10f0[1].d -= 1
        
        if (var_10f0[1].d == 1)
            result = (**var_10f0)(var_10f0)
            int32_t temp44_1 = *(var_10f0 + 0xc)
            *(var_10f0 + 0xc) -= 1
            
            if (temp44_1 == 1)
                result = (*(*var_10f0 + 8))(var_10f0, 1)

__security_check_cookie(rax_1 ^ &var_1378)
return result
