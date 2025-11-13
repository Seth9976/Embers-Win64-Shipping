// 函数: sub_140ea4bd0
// 地址: 0x140ea4bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1080)
void var_10b8
int64_t rax_1 = __security_cookie ^ &var_10b8
int64_t* rcx = *(arg3 + 0x90)
*(arg1 + 0x3f0) = (*(*rcx + 0x48))(rcx, *(arg3 + 0x98), ".Button.SubMenuOpen")
int64_t* rbx = data_143e243c8
void var_df0
int64_t rax_5 = (*(*rbx + 0x48))(rbx, *sub_140b58170(&var_df0, "NoBorder", 1), 0)
int128_t zmm0 = data_142d8c9c0
*(arg1 + 0x3f8) = rax_5
int64_t* rsi = *(arg1 + 0x3a0)
char* (* var_f88)(void* arg1, char* arg2, uint128_t arg3 @ zmm0) = sub_140ecbf20
int64_t* (* var_1068)(void* arg1, int64_t* arg2) = sub_140ebf9c0
int64_t* (* var_1078)(void* arg1, int64_t* arg2, int64_t* arg3) = sub_140ebe880
int64_t (* var_f78)(void* arg1) = sub_140ebf180
int32_t var_1060 = 0
int32_t var_1070 = 0
int128_t zmm1 = var_1078.o
void** (* var_f58)(void* arg1, void** arg2) = sub_140ec4000
int32_t var_f80 = 0
char var_ec0 = 1
int64_t var_eb8 = 0
int32_t var_eb0 = 0
int64_t var_ef8 = 0
int32_t var_ef0 = 0
char var_f28 = 1
int64_t var_f20 = 0
int32_t var_f18 = 0
int32_t var_f70 = 0
int32_t var_f50 = 0
int32_t var_1018 = 0
char var_1014 = 1
int64_t var_1010 = 0
int32_t var_1008 = 0
int128_t var_dd8 = zmm1
int128_t var_db8 = zmm0
int128_t var_ee8
__builtin_memcpy(&var_ee8, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 
    0x11)
int128_t var_ed0 = zx.o(0)
int128_t var_e28 = var_1068.o
int128_t var_f10
__builtin_memcpy(&var_f10, "\x00\x00\x20\x41\x00\x00\x00\x40\x00\x00\x20\x41\x00\x00\x00\x40\x01", 
    0x11)
int128_t var_f38 = zx.o(0)

if (rsi != 0)
    int32_t rax_6 = rsi[1].d
    
    if (rax_6 == 0)
        rsi = nullptr
    else
        rsi[1].d = rax_6 + 1

void* var_1058 = nullptr

if (rsi != 0)
    var_1058 = *(arg1 + 0x398)

void var_df8
int64_t* rax_9 = sub_140e1ad30(&var_df8, *(arg3 + 0x98), ".Label")
void var_4a8
int64_t* rax_10 = sub_14068d9d0(&var_4a8)
int64_t r8 = *rax_9
int64_t var_e00 = r8
int64_t var_e08 = r8
int64_t r9 = *rcx
int64_t rax_11 = (*(r9 + 0x88))(rcx, data_143e243e0, r8, r9)

if (rax_11 == 0)
    rax_11 = sub_140e13900()

rax_10[0x3a] = rax_11
sub_14065da90(&rax_10[0x34], arg3 + 0x30)
rax_10[0x37].b = *(arg3 + 0x48)
sub_140692f90(&rax_10[0x38], arg3 + 0x50)
void*** rax_13 = j_sub_140a82f30(0x7a8)
void*** rdi_1 = rax_13

if (rax_13 == 0)
    rdi_1 = nullptr
else
    rax_13[1].d = 1
    *(rax_13 + 0xc) = 1
    *rdi_1 = &data_142d8b060
    
    if (rdi_1 != -0x10)
        sub_140f66da0(&rdi_1[2])

void* var_1000 = &rdi_1[2]
sub_14065fa30(&var_1000, &rdi_1[2])
int64_t var_1098 = 0x798
void var_1088
void* var_ff0 = &var_1088
sub_140e23ed0(&rdi_1[2], "STextBlock")
void* rax_14
int128_t zmm1_1
rax_14, zmm1_1 = sub_140e90ca0(rax_10, var_1058, &var_e28)
void* var_e38
void** rax_15
int512_t zmm6
int512_t zmm7
rax_15, zmm6, zmm7 = sub_140697520(&var_1000, &var_e38, rax_14, zmm1_1)
void* var_fa0 = *rax_15
void* rcx_14 = rax_15[1]
void* var_f98 = rcx_14

if (rcx_14 != 0)
    *(rcx_14 + 8) += 1

int64_t var_ea8 = *(arg3 + 0x60)
void* rax_17 = *(arg3 + 0x68)
void* var_ea0 = rax_17

if (rax_17 != 0)
    *(rax_17 + 8) += 1
    zmm7.o = var_f38
    zmm6.o = var_f10

int32_t var_e98 = *(arg3 + 0x70)
char var_e90 = *(arg3 + 0x78)
int64_t var_e88 = 0
int32_t var_e80 = 0
sub_140692f90(&var_e88, arg3 + 0x80)
void var_e10
int64_t* rax_20 = sub_140e1ad30(&var_e10, *(arg3 + 0x98), ".Button")
void var_838
int64_t* rax_21
int128_t zmm6_1
rax_21, zmm6_1 = sub_14068cc20(&var_838)
int64_t r8_4 = *rax_20
int64_t var_1058_1 = r8_4
int64_t var_e18 = r8_4
int64_t r9_2 = *rcx
int64_t rax_23 = (*(r9_2 + 0x88))(rcx, data_143e243e8, r8_4, r9_2, var_1098)

if (rax_23 == 0)
    rax_23, zmm6_1 = sub_140e13010()

rax_21[0x36] = rax_23
rax_21[0x4e].d = 1
int64_t* rax_24 = sub_140e92670(rax_21, arg1, &var_dd8, &var_ea8)
rax_24[0x3b].b = 1
*(rax_24 + 0x1c8) = zmm6_1
sub_140692f90(&rax_24[0x3c], &var_ef8)
int128_t zmm1_2 = sub_140693390(&rax_24[0x60], &var_ee8)
rax_24[0x65].b = var_ec0
sub_140692f90(&rax_24[0x66], &var_eb8)
*(rax_24 + 0x1c4) = 2
void* rax_25 = sub_1406936e0(rax_24, &var_fa0, zmm1_2)
int128_t var_de8 = var_f88.o
int64_t* var_1050
sub_140692f90(rax_25 + 0x220, sub_140e8f760(&var_1050, arg1, &var_de8))
int32_t var_1048
int64_t* rax_28

if (var_1048 == 0)
    rax_28 = var_1050
label_140ea50c0:
    
    if (rax_28 != 0)
        sub_140a74f90(rax_28)
else
    int64_t* rcx_27 = var_1050
    
    if (rcx_27 != 0)
        (*(*rcx_27 + 0x38))(rcx_27, 0)
        rax_28 = var_1050
        
        if (rax_28 != 0)
            rax_28 = sub_140a84c80(rax_28, 0, 0)
            var_1050 = rax_28
        
        int32_t var_1048_1 = 0
        goto label_140ea50c0
void*** rax_29 = j_sub_140a82f30(0x5c8)
void*** rdi_4 = rax_29

if (rax_29 == 0)
    rdi_4 = nullptr
else
    rax_29[1].d = 1
    *(rax_29 + 0xc) = 1
    *rdi_4 = &data_142d8c580
    
    if (rdi_4 != -0x10)
        sub_140ee2d30(&rdi_4[2])

int64_t* var_fe8 = &rdi_4[2]
sub_14065fa30(&var_fe8, &rdi_4[2])
int64_t var_1098_1 = 0x5b8
void var_1087
void* var_fd8 = &var_1087
int64_t* var_e48
int64_t** rax_30
int128_t zmm7_1
rax_30, zmm7_1 = sub_140696120(&var_fe8, &var_e48, rax_25, sub_140e23ed0(&rdi_4[2], "SButton"))
int64_t* var_f68 = *rax_30
void* rcx_35 = rax_30[1]
void* var_f60 = rcx_35

if (rcx_35 != 0)
    *(rcx_35 + 8) += 1

void var_b80
int64_t* rax_31 = sub_14068c640(&var_b80)
int128_t var_dc8 = var_f78.o
int64_t* rax_32 = sub_140e8eb40(&var_1078, arg1, &var_dc8)
int64_t var_1038 = 0
char var_1030 = 1
int64_t var_1028 = 0
int32_t var_1020 = 0
sub_140692f90(&var_1028, rax_32)
rax_31[0x44] = var_1038
rax_31[0x45].b = var_1030
sub_1407473e0(&rax_31[0x46], &var_1028)
sub_140745b20(&var_1028)
int64_t* (* rax_36)(void* arg1, int64_t* arg2, int64_t* arg3)

if (var_1070 == 0)
    rax_36 = var_1078
label_140ea5235:
    
    if (rax_36 != 0)
        sub_140a74f90(rax_36)
else
    int64_t* (* rcx_41)(void* arg1, int64_t* arg2, int64_t* arg3) = var_1078
    
    if (rcx_41 != 0)
        (*(*rcx_41 + 0x38))(rcx_41, 0)
        rax_36 = var_1078
        
        if (rax_36 != 0)
            rax_36 = sub_140a84c80(rax_36, 0, 0)
            var_1078 = rax_36
        
        int32_t var_1070_1 = 0
        goto label_140ea5235
rax_31[0x39].b = 1
*(rax_31 + 0x1b8) = zmm7_1
sub_140692f90(&rax_31[0x3a], &var_f20)
void*** rax_37 = j_sub_140a82f30(0x4c8)
void*** rdi_5 = rax_37

if (rax_37 == 0)
    rdi_5 = nullptr
else
    rax_37[1].d = 1
    *(rax_37 + 0xc) = 1
    *rdi_5 = &data_142d8c5a0
    
    if (rdi_5 != -0x10)
        sub_140f20640(&rdi_5[2])

void* var_fd0 = &rdi_5[2]
sub_14065fa30(&var_fd0, &rdi_5[2])
int64_t var_1098_2 = 0x4b8
void var_1086
void* var_fc0 = &var_1086
void* rax_38
int128_t zmm1_5
rax_38, zmm1_5 = sub_1406936e0(rax_31, &var_f68, sub_140e23ed0(&rdi_5[2], "SBorder"))
void* var_e58
void** rax_39 = sub_140695920(&var_fd0, &var_e58, rax_38, zmm1_5)
void* var_f48 = *rax_39
void* rcx_51 = rax_39[1]
void* var_f40 = rcx_51

if (rcx_51 != 0)
    *(rcx_51 + 8) += 1

void var_d90
int64_t* rax_40 = sub_140e94a50(&var_d90)
rax_40[0x3e].d = 0
*(rax_40 + 0x1f4) = 1
sub_1407473e0(&rax_40[0x3f], &var_1010)
int128_t var_e78 = var_f58.o
sub_1407473e0(&rax_40[0x3a], sub_140e8f620(&var_1068, arg1, &var_e78))
int64_t* (* rax_43)(void* arg1, int64_t* arg2)

if (var_1060 == 0)
    rax_43 = var_1068
label_140ea53bb:
    
    if (rax_43 != 0)
        sub_140a74f90(rax_43)
else
    int64_t* (* rcx_56)(void* arg1, int64_t* arg2) = var_1068
    
    if (rcx_56 != 0)
        (*(*rcx_56 + 0x38))(rcx_56, 0)
        rax_43 = var_1068
        
        if (rax_43 != 0)
            rax_43 = sub_140a84c80(rax_43, 0, 0)
            var_1068 = rax_43
        
        int32_t var_1060_1 = 0
        goto label_140ea53bb
void*** rax_44 = j_sub_140a82f30(0x3b0)
void*** rbx_6 = rax_44

if (rax_44 == 0)
    rbx_6 = nullptr
else
    rax_44[1].d = 1
    *(rax_44 + 0xc) = 1
    *rbx_6 = &data_142edf1e0
    
    if (rbx_6 != -0x10)
        sub_140f20ae0(&rbx_6[2])

void* var_fb8 = &rbx_6[2]
sub_140918950(&var_fb8, &rbx_6[2])
int64_t var_1098_3 = 0x3a0
void var_1085
void* var_fa8 = &var_1085
int128_t zmm1_6 = sub_140e23ed0(&rbx_6[2], "SMenuAnchor")

if (rbx_6 != 0)
    rbx_6[1].d += 1

void* rax_45
int128_t zmm1_7
rax_45, zmm1_7 = sub_140e99c30(rax_40, &var_f48, zmm1_6)
void* var_e68
void** rax_46 = sub_140e9d6e0(&var_fb8, &var_e68, rax_45, zmm1_7)
*arg2 = *rax_46
void* rcx_65 = rax_46[1]
arg2[1] = rcx_65

if (rcx_65 != 0)
    *(rcx_65 + 8) += 1

int64_t* var_e60

if (var_e60 != 0)
    var_e60[1].d -= 1
    
    if (var_e60[1].d == 1)
        (**var_e60)(var_e60)
        int32_t temp2_1 = *(var_e60 + 0xc)
        *(var_e60 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_e60 + 8))(var_e60, 1)

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp4_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*rbx_6)[1](rbx_6, 1)

sub_140e98090(&var_d90)
int64_t* var_e50

if (var_e50 != 0)
    var_e50[1].d -= 1
    
    if (var_e50[1].d == 1)
        (**var_e50)(var_e50)
        int32_t temp6_1 = *(var_e50 + 0xc)
        *(var_e50 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*var_e50 + 8))(var_e50, 1)

if (rdi_5 != 0)
    rdi_5[1].d -= 1
    
    if (rdi_5[1].d == 1)
        (**rdi_5)(rdi_5)
        int32_t temp8_1 = *(rdi_5 + 0xc)
        *(rdi_5 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*rdi_5)[1](rdi_5, 1)

sub_14068fed0(&var_b80)
int64_t* var_e40

if (var_e40 != 0)
    var_e40[1].d -= 1
    
    if (var_e40[1].d == 1)
        (**var_e40)(var_e40)
        int32_t temp10_1 = *(var_e40 + 0xc)
        *(var_e40 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*var_e40 + 8))(var_e40, 1)

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t temp12_1 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*rdi_4)[1](rdi_4, 1)

sub_1406905f0(&var_838)
int64_t* var_e30

if (var_e30 != 0)
    var_e30[1].d -= 1
    
    if (var_e30[1].d == 1)
        (**var_e30)(var_e30)
        int32_t temp14_1 = *(var_e30 + 0xc)
        *(var_e30 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*var_e30 + 8))(var_e30, 1)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp16_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*rdi_1)[1](rdi_1, 1)

sub_1406913d0(&var_4a8)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t temp18_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*(*rsi + 8))(rsi, 1)

sub_140745b20(&var_1010)
sub_140745b20(&var_f20)
sub_140745b20(&var_ef8)
sub_140745b20(&var_eb8)
int64_t* rdi_15 = var_ed0:8.q

if (rdi_15 != 0)
    rdi_15[1].d -= 1
    
    if (rdi_15[1].d == 1)
        (**rdi_15)(rdi_15)
        int32_t temp20_1 = *(rdi_15 + 0xc)
        *(rdi_15 + 0xc) -= 1
        
        if (temp20_1 == 1)
            (*(*rdi_15 + 8))(rdi_15, 1)

*(arg1 + 0x3e0) = &rbx_6[2]
sub_140ea4170(arg1 + 0x3e8, rbx_6)

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp21_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp21_1 == 1)
            void** r8_16 = *rbx_6
            r8_16[1](rbx_6, 1, r8_16)

__security_check_cookie(rax_1 ^ &var_10b8)
return arg2
