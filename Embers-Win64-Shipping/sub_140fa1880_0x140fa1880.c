// 函数: sub_140fa1880
// 地址: 0x140fa1880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e28
int64_t rax_1 = __security_cookie ^ &var_e28
int64_t* rax_2 = sub_140fb2490(arg2 + 0x1a0)
*(arg1 + 0x3a0) = *rax_2
void* rbx = rax_2[1]
int64_t* rcx_1 = *(arg1 + 0x3a8)

if (rbx != rcx_1)
    if (rbx != 0)
        *(rbx + 0xc) += 1
        rcx_1 = *(arg1 + 0x3a8)
    
    if (rcx_1 != 0)
        int32_t temp1_1 = *(rcx_1 + 0xc)
        *(rcx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx_1 + 8))(rcx_1, 1)
    
    *(arg1 + 0x3a8) = rbx

sub_1407473e0(arg1 + 0x3b0, arg2 + 0x1c8)
sub_1407473e0(arg1 + 0x3c0, arg2 + 0x1d8)
sub_1407473e0(arg1 + 0x3d0, arg2 + 0x1e8)
*(arg1 + 0x3e0) = *(arg2 + 0x1f8)
*(arg1 + 0x3e1) = *(arg2 + 0x1f9)
sub_140692f90(arg1 + 0x3e8, arg2 + 0x200)
*(arg1 + 0x3f8) = *(arg2 + 0x210)
*(arg1 + 0x3f9) = *(arg2 + 0x211)
sub_140692f90(arg1 + 0x400, arg2 + 0x218)
int128_t zmm0 = data_14399f5e0
int32_t var_d40 = 0x3f800000
char var_d3c = 1
int64_t var_d38 = 0
int32_t var_d30 = 0
int32_t var_cd0 = 0
int16_t var_ccc = 0
int64_t var_cc8 = 0
int128_t var_cc0 = zmm0
void var_bf8
void var_b70
int64_t* rax_9 = sub_140e13c40(&var_b70, *sub_140b58170(&var_bf8, "Regular", 1), 0xa, &var_cd0)
int128_t zmm0_1 = *(rax_9 + 0x10)
int64_t var_c60 = *rax_9
int64_t var_c58 = rax_9[1]
int64_t var_c30 = rax_9[6]
int64_t* rcx_12 = rax_9[7]
int128_t var_c50 = zmm0_1
int128_t var_c40 = *(rax_9 + 0x20)

if (rcx_12 != 0)
    rcx_12[1].d += 1

int64_t var_c20 = rax_9[8]
int32_t var_c18 = rax_9[9].d
char var_c14 = *(rax_9 + 0x4c)
int64_t* (* var_de8)(void* arg1, int64_t* arg2) = sub_140fb4100
char var_c10 = 1
int64_t var_c08 = 0
int32_t var_c00 = 0
int32_t var_de0 = 0
int128_t var_cb0
__builtin_memcpy(&var_cb0, "\x00\x00\xa0\x40\x00\x00\xa0\x40\x00\x00\xa0\x40\x00\x00\xa0\x40\x01", 
    0x11)
int64_t var_c98 = 0
int32_t var_c90 = 0
void var_970
int64_t* rax_13 = sub_140f99e50(&var_970)
sub_140f9be50(&rax_13[0x34], arg2 + 0x1a0)
sub_1407473e0(&rax_13[0x3b], arg1 + 0x3c0)
sub_1407473e0(&rax_13[0x3d], arg1 + 0x3d0)
void var_b88
void* rax_15 =
    sub_140faae50(rax_13, _vfprintf_p_l(&var_b88, No Colors Added Yet", ColorThemesViewer"))
*(rax_15 + 0x210) = *(arg1 + 0x3e0)
*(rax_15 + 0x211) = *(arg1 + 0x3e1)
sub_140692f90(rax_15 + 0x218, arg1 + 0x3e8)
*(rax_15 + 0x228) = *(arg1 + 0x3f8)
*(rax_15 + 0x229) = *(arg1 + 0x3f9)
sub_140692f90(rax_15 + 0x230, arg1 + 0x400)
void*** rax_16 = sub_140f96fb0()
void*** var_d68 = rax_16
void* var_d70 = &rax_16[2]
sub_140918950(&var_d70, &rax_16[2])
void var_df8
void* var_d60 = &var_df8
int64_t var_e08 = 0x3b0
void* var_ba8
void** rax_17 =
    sub_140f9ea20(&var_d70, &var_ba8, rax_15, sub_140e23ed0(var_d70, "SThemeColorBlocksBar"))
int64_t* rbx_3 = rax_17[1]
void* var_d10 = *rax_17
int64_t* var_d08 = rbx_3

if (rbx_3 != 0)
    rbx_3[1].d += 1

void*** rax_18 = j_sub_140a82f30(0x88)
void*** rsi_1 = rax_18

if (rax_18 == 0)
    rsi_1 = nullptr
else
    sub_14068e490(rax_18)
    *rsi_1 = &data_142d8add0

int32_t var_dd8 = 1
int32_t var_dd0 = 0x3f800000
char var_dcc = 1
int64_t var_dc8 = 0
int32_t var_dc0 = 0
sub_140692f90(&var_dc8, &var_d38)
rsi_1[5].d = var_dd8
*(rsi_1 + 0x34) = var_dcc
rsi_1[6].d = var_dd0
sub_140692f90(&rsi_1[7], &var_dc8)
sub_140745b20(&var_dc8)
int128_t var_c88
__builtin_memcpy(&var_c88, "\x00\x00\x00\x41\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01", 
    0x11)
int64_t var_c70 = 0
__builtin_memcpy(&rsi_1[9], "\x00\x00\x00\x41\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01", 
    0x11)
int32_t var_c68 = 0
sub_1407473e0(&rsi_1[0xc], &var_c70)
sub_140745b20(&var_c70)
sub_140693600(rsi_1, &var_d10)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

void var_490
int64_t* rax_23 = sub_14068d9d0(&var_490)
int128_t var_be8 = var_de8.o
int64_t* rax_24 = sub_140e46010(&var_de8, arg1, &var_be8)
int64_t var_db8
sub_140a96170(&var_db8)
char var_da0 = 1
int64_t var_d98 = 0
int32_t var_d90 = 0
sub_140692f90(&var_d98, rax_24)
int64_t rcx_42 = rax_23[0x34]
rax_23[0x34] = var_db8
var_db8 = rcx_42
int64_t* rcx_43 = rax_23[0x35]
int64_t var_db0
rax_23[0x35] = var_db0
int32_t var_da8
rax_23[0x36].d = var_da8
rax_23[0x37].b = var_da0
sub_1407473e0(&rax_23[0x38], &var_d98)
sub_140745b20(&var_d98)

if (rcx_43 != 0)
    rcx_43[1].d -= 1
    
    if (rcx_43[1].d == 1)
        (**rcx_43)(rcx_43)
        int32_t rdi_1 = *(rcx_43 + 0xc)
        *(rcx_43 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rcx_43 + 8))(rcx_43, zx.q(rdi_1))

int64_t* (* rax_33)(void* arg1, int64_t* arg2)

if (var_de0 == 0)
    rax_33 = var_de8
label_140fa1e17:
    
    if (rax_33 != 0)
        sub_140a74f90(rax_33)
else
    int64_t* (* rcx_48)(void* arg1, int64_t* arg2) = var_de8
    
    if (rcx_48 != 0)
        (*(*rcx_48 + 0x38))(rcx_48, 0)
        rax_33 = var_de8
        
        if (rax_33 != 0)
            rax_33 = sub_140a84c80(rax_33, 0, 0)
            var_de8 = rax_33
        
        int32_t var_de0_1 = 0
        goto label_140fa1e17
sub_140692eb0(&rax_23[0x3b], &var_c60)
void*** rax_34 = j_sub_140a82f30(0x7a8)
void*** rbx_6 = rax_34

if (rax_34 == 0)
    rbx_6 = nullptr
else
    rax_34[1].d = 1
    *(rax_34 + 0xc) = 1
    *rbx_6 = &data_142d8b060
    
    if (rbx_6 != -0x10)
        sub_140f66da0(&rbx_6[2])

void* var_d58 = &rbx_6[2]
sub_14065fa30(&var_d58, &rbx_6[2])
int64_t var_e08_1 = 0x798
void var_df7
void* var_d48 = &var_df7
int128_t zmm1_2 = sub_140e23ed0(&rbx_6[2], "STextBlock")

if (rbx_6 != 0)
    rbx_6[1].d += 1

void var_b98

if (arg1 + 0x390 == &var_b98)
label_140fa1f06:
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp5_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*rbx_6)[1](rbx_6, 1)
else
    *(arg1 + 0x390) = &rbx_6[2]
    void*** rdi_3 = *(arg1 + 0x398)
    
    if (rbx_6 == rdi_3)
        goto label_140fa1f06
    
    *(arg1 + 0x398) = rbx_6
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp7_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*rdi_3)[1](rdi_3, 1)

void* var_bb8
void** rax_39 = sub_140697520(&var_d58, &var_bb8, rax_23, zmm1_2)
int64_t* rbx_7 = rax_39[1]
void* var_d00 = *rax_39
int64_t* var_cf8 = rbx_7

if (rbx_7 != 0)
    rbx_7[1].d += 1

void*** rax_40 = j_sub_140a82f30(0x88)
void*** rdi_4 = rax_40

if (rax_40 == 0)
    rdi_4 = nullptr
else
    sub_14068e490(rax_40)
    *rdi_4 = &data_142d8add0

void* rax_41 = sub_140698b50(rdi_4)
sub_140693600(rax_41, &var_d00)

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        int64_t rdx_28 = *rbx_7
        (*rdx_28)(rbx_7, rdx_28)
        int32_t temp9_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rbx_7 + 8))(rbx_7, 1)

void var_b20
int64_t* rax_43 = sub_14068d420(&var_b20)
int64_t rdi_5 = sx.q(rax_43[0x35].d)
int32_t rcx_65 = (rdi_5 + 1).d
rax_43[0x35].d = rcx_65

if (rcx_65 s> *(rax_43 + 0x1ac))
    sub_140638870(&rax_43[0x34])

*(rax_43[0x34] + (rdi_5 << 3)) = rax_41
int64_t rdi_6 = sx.q(rax_43[0x35].d)
int32_t rax_45 = (rdi_6 + 1).d
rax_43[0x35].d = rax_45

if (rax_45 s> *(rax_43 + 0x1ac))
    sub_140638870(&rax_43[0x34])

*(rax_43[0x34] + (rdi_6 << 3)) = rsi_1
void*** rax_47 = j_sub_140a82f30(0x2e8)
void*** rbx_9 = rax_47

if (rax_47 == 0)
    rbx_9 = nullptr
else
    rax_47[1].d = 1
    *(rax_47 + 0xc) = 1
    *rbx_9 = &data_142d8c590
    
    if (rbx_9 != -0x10)
        sub_14068e500(&rbx_9[2])

void*** var_d80 = rbx_9
void* var_d88 = &rbx_9[2]
sub_14065fa30(&var_d88, &rbx_9[2])
void var_df6
void* var_d78 = &var_df6
int64_t var_e08_2 = 0x2d8
void* var_bc8
void** rax_48 = sub_140696920(&var_d88, &var_bc8, rax_43, sub_140e23ed0(var_d88, "SHorizontalBox"))
void* var_cf0 = *rax_48
void* rcx_73 = rax_48[1]
void* var_ce8 = rcx_73

if (rcx_73 != 0)
    *(rcx_73 + 8) += 1

void var_730
int64_t* rax_49 = sub_14068c940(&var_730)
rax_49[0x37].b = 1
*(rax_49 + 0x1a8) = var_cb0
sub_140692f90(&rax_49[0x38], &var_c98)
void*** rax_50 = j_sub_140a82f30(0x3d8)
void*** rdi_7 = rax_50

if (rax_50 == 0)
    rdi_7 = nullptr
else
    rax_50[1].d = 1
    *(rax_50 + 0xc) = 1
    *rdi_7 = &data_142d8c570
    
    if (rdi_7 != -0x10)
        sub_140f20750(&rdi_7[2])

void* var_d28 = &rdi_7[2]
sub_14065fa30(&var_d28, &rdi_7[2])
int64_t var_e08_3 = 0x3c8
void var_df5
void* var_d18 = &var_df5
void* rax_51
int128_t zmm1_5
rax_51, zmm1_5 = sub_1406937a0(rax_49, &var_cf0, sub_140e23ed0(&rdi_7[2], "SBox"))
void* var_bd8
void** rax_52 = sub_140695d20(&var_d28, &var_bd8, rax_51, zmm1_5)
int64_t* rbx_11 = rax_52[1]
void* var_ce0 = *rax_52
int64_t* var_cd8 = rbx_11

if (rbx_11 != 0)
    rbx_11[1].d += 1

sub_140de1b90(arg1 + 0x2b8, &var_ce0)

if (rbx_11 != 0)
    rbx_11[1].d -= 1
    
    if (rbx_11[1].d == 1)
        (**rbx_11)(rbx_11)
        int32_t temp12_1 = *(rbx_11 + 0xc)
        *(rbx_11 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*rbx_11 + 8))(rbx_11, 1)

int64_t* var_bd0

if (var_bd0 != 0)
    var_bd0[1].d -= 1
    
    if (var_bd0[1].d == 1)
        (**var_bd0)(var_bd0)
        int32_t temp14_1 = *(var_bd0 + 0xc)
        *(var_bd0 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*var_bd0 + 8))(var_bd0, 1)

if (rdi_7 != 0)
    rdi_7[1].d -= 1
    
    if (rdi_7[1].d == 1)
        (**rdi_7)(rdi_7)
        int32_t temp16_1 = *(rdi_7 + 0xc)
        *(rdi_7 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*rdi_7)[1](rdi_7, 1)

sub_140690290(&var_730)
sub_140669d70(&var_bc8)
sub_140669d70(&var_d88)
sub_140f9acc0(&var_b20)
int64_t* var_bb0

if (var_bb0 != 0)
    var_bb0[1].d -= 1
    
    if (var_bb0[1].d == 1)
        (**var_bb0)(var_bb0)
        int32_t temp18_1 = *(var_bb0 + 0xc)
        *(var_bb0 + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*(*var_bb0 + 8))(var_bb0, 1)

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp20_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp20_1 == 1)
            (*rbx_6)[1](rbx_6, 1)

sub_1406913d0(&var_490)
sub_140f9a690(&var_ba8)
Concurrency::task<uint8_t>::~task<uint8_t>(&var_d70)
sub_140f9b0f0(&var_970)
sub_140745b20(&var_c98)
sub_140745b20(&var_c08)

if (rcx_12 != 0)
    rcx_12[1].d -= 1
    
    if (rcx_12[1].d == 1)
        (**rcx_12)(rcx_12)
        int32_t temp22_1 = *(rcx_12 + 0xc)
        *(rcx_12 + 0xc) -= 1
        
        if (temp22_1 == 1)
            (*(*rcx_12 + 8))(rcx_12, 1)

int64_t* var_b38

if (var_b38 != 0)
    var_b38[1].d -= 1
    
    if (var_b38[1].d == 1)
        (**var_b38)(var_b38)
        int32_t temp23_1 = *(var_b38 + 0xc)
        *(var_b38 + 0xc) -= 1
        
        if (temp23_1 == 1)
            (*(*var_b38 + 8))(var_b38, 1)

uint64_t result = sub_140745b20(&var_d38)
__security_check_cookie(rax_1 ^ &var_e28)
return result
