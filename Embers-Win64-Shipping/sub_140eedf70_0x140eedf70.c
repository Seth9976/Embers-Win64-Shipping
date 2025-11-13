// 函数: sub_140eedf70
// 地址: 0x140eedf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1008
int64_t rax_1 = __security_cookie ^ &var_1008
int64_t* rdi = *(arg2 + 0x1a8)
void* rax_2 = *(arg2 + 0x1a0)
int64_t* var_f80 = rdi

if (rdi == 0)
    var_f80 = rax_2 + 8

arg1[0x79] = rax_2 + 0x320
*(arg1 + 0x3d0) = *(*(arg2 + 0x1a0) + 0x3a8)
sub_1407473e0(&arg1[0x75], arg2 + 0x1f0)
arg1[0x7c] = *(arg2 + 0x1c0)
void* rbx = *(arg2 + 0x1c8)
int64_t* rcx_2 = arg1[0x7d]

if (rbx != rcx_2)
    if (rbx != 0)
        *(rbx + 0xc) += 1
        rcx_2 = arg1[0x7d]
    
    if (rcx_2 != 0)
        int32_t temp0_1 = *(rcx_2 + 0xc)
        *(rcx_2 + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx_2 + 8))(rcx_2, 1)
    
    arg1[0x7d] = rbx

arg1[0x7e].b = *(arg2 + 0x200)
void* rdi_1 = *(arg2 + 0x1a0)
int64_t r15

if (0f f!= *(rdi_1 + 0x308) || 0f f!= *(rdi_1 + 0x30c))
    r15.b = 1
else
    r15.b = 0

char rbx_1 = data_1439ae51d
char rax_8 = data_1439ae51c
bool cond:0 = *(arg2 + 0x201) != 0
int128_t var_e10 = data_142d8c9c0

if (cond:0)
    rbx_1 = rax_8

char var_e00 = 2
char var_ef0 = rbx_1
int128_t var_df8 = zx.o(0)
char var_de8 = 1
int64_t var_de0 = 0
int32_t var_dd8 = 0
void* var_e70 = rdi_1 + 0x280
char var_e68 = 1
int64_t var_e60 = 0
int32_t var_e58 = 0
char var_eef = 1
int64_t var_ee8 = 0
int32_t var_ee0 = 0
void var_958
int64_t* rax_9 = sub_140e4fb70(&var_958)
rax_9[0xf].b = rbx_1
*(rax_9 + 0x79) = 1
sub_1407473e0(&rax_9[0x10], &var_ee8)
rax_9[0x34] = rdi_1 + 0x280
rax_9[0x35].b = 1
sub_140692f90(&rax_9[0x36], &var_e60)
sub_140693390(&rax_9[0x38], &var_e10)
rax_9[0x3d].b = var_de8
sub_140692f90(&rax_9[0x3e], &var_de0)
void*** rax_11 = sub_140e48c50()
void* var_f08 = &rax_11[2]
sub_140918950(&var_f08, &rax_11[2])
int64_t var_fe8 = 0x3a8
void var_fc0
void* var_ef8 = &var_fc0
void* var_d90
void** rax_12 = sub_140e56930(&var_f08, &var_d90, rax_9, sub_140e23ed0(&rax_11[2], "SImage"))
void* var_f48 = *rax_12
int64_t* rcx_12 = rax_12[1]

if (rcx_12 != 0)
    rcx_12[1].d += 1

void* rax_13 = *(arg2 + 0x1a0)
char var_e40 = 0
int128_t var_e38 = zx.o(0)
char var_e28 = 1
int64_t var_e20 = 0
int32_t var_e18 = 0
void* var_e90 = rax_13 + 0x280
int128_t var_e50 = *(rax_13 + 0x310)
char var_e88 = 1
int64_t var_e80 = 0
int32_t var_e78 = 0
char rbx_3

if (*(arg2 + 0x201) != 0)
    rbx_3 = data_1439ae51c

if (*(arg2 + 0x201) == 0 || r15.b == 0)
    rbx_3 = data_1439ae51d

char var_f20 = rbx_3
int64_t var_f18 = 0
int32_t var_f10 = 0
char var_f1f = 1
void var_b70
int64_t* rax_14 = sub_140e4fb70(&var_b70)
rax_14[0xf].b = rbx_3
*(rax_14 + 0x79) = 1
sub_1407473e0(&rax_14[0x10], &var_f18)
rax_14[0x34] = rax_13 + 0x280
rax_14[0x35].b = 1
sub_140692f90(&rax_14[0x36], &var_e80)
sub_140693390(&rax_14[0x38], &var_e50)
rax_14[0x3d].b = var_e28
sub_140692f90(&rax_14[0x3e], &var_e20)
void*** rax_16 = sub_140e48c50()
void* var_f38 = &rax_16[2]
sub_140918950(&var_f38, &rax_16[2])
int64_t var_fe8_1 = 0x3a8
void var_fbf
void* var_f28 = &var_fbf
void* var_da0
void** rax_17 = sub_140e56930(&var_f38, &var_da0, rax_14, sub_140e23ed0(&rax_16[2], "SImage"))
int64_t* r12 = rax_17[1]
void* var_fb8 = *rax_17
int64_t* var_fb0 = r12

if (r12 != 0)
    r12[1].d += 1

int32_t var_ea8 = 0x3f800000
int64_t (* var_f68)(int64_t* arg1) = sub_140ee64e0
char var_ea4 = 1
int64_t var_ea0 = 0
int32_t var_e98 = 0
int32_t var_f60 = 0
void*** rax_18 = j_sub_140a82f30(0x50)
void*** rdi_4 = rax_18

if (rax_18 == 0)
    rdi_4 = nullptr
else
    sub_140ddb700(rax_18)
    *rdi_4 = &data_142ec8fc8
    rdi_4[4].d = 0
    *(rdi_4 + 0x24) = 0
    rdi_4[5] = 0
    rdi_4[6] = 0
    rdi_4[7].b = 1
    rdi_4[8] = 0
    rdi_4[9].d = 0

*(rdi_4 + 0x25) = 1
void* rax_19 = *(arg2 + 0x1a0)
int64_t var_fc8 = 0
float var_fd0[0x4]
float zmm6[0x4] = var_fd0
char var_f98 = 1
int32_t zmm1_2 = *(rax_19 + 0x30c)
zmm6[0] = *(rax_19 + 0x308)
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
zmm6[0] = zmm1_2
int64_t var_f90 = 0
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
var_fd0 = zmm6
int32_t var_f88 = 0
float var_fa8[0x4] = zmm6
void*** rax_20 = j_sub_140a82f30(0x50)
void*** rbx_5 = rax_20

if (rax_20 == 0)
    rbx_5 = nullptr
else
    sub_140ddb700(rax_20)
    *rbx_5 = &data_142ec8fc8
    rbx_5[4].d = 0
    *(rbx_5 + 0x24) = 0
    *(rbx_5 + 0x2c) = 0
    *(rbx_5 + 0x34) = 0
    rbx_5[7].b = 1
    rbx_5[8] = 0
    rbx_5[9].d = 0

*(rbx_5 + 0x25) = 1
rbx_5[7].b = 1
*(rbx_5 + 0x28) = zmm6
sub_140692f90(&rbx_5[8], &var_f90)
sub_140745b20(&var_f90)
var_fd0[0].q = sub_140de1aa0(rbx_5, &var_fb8)
void var_590
int64_t* rax_22 = sub_140dd5d30(&var_590)
int64_t rsi_2 = sx.q(rax_22[0x35].d)
int32_t rcx_28 = (rsi_2 + 1).d
rax_22[0x35].d = rcx_28

if (rcx_28 s> *(rax_22 + 0x1ac))
    sub_1405a4d70(&rax_22[0x34])

*(rax_22[0x34] + (rsi_2 << 3)) = var_fd0[0].q
void* rax_24 = sub_140de1aa0(rdi_4, &var_f48)
int64_t rdi_5 = sx.q(rax_22[0x35].d)
int32_t rcx_31 = (rdi_5 + 1).d
rax_22[0x35].d = rcx_31

if (rcx_31 s> *(rax_22 + 0x1ac))
    sub_1405a4d70(&rax_22[0x34])

*(rax_22[0x34] + (rdi_5 << 3)) = rax_24
void*** rax_26 = j_sub_140a82f30(0x2e0)
void*** rdi_6 = rax_26

if (rax_26 == 0)
    rdi_6 = nullptr
else
    rax_26[1].d = 1
    *(rax_26 + 0xc) = 1
    *rdi_6 = &data_142ecd308
    
    if (rdi_6 != -0x10)
        sub_140dde040(&rdi_6[2])

void* var_ec0 = &rdi_6[2]
sub_140918950(&var_ec0, &rdi_6[2])
int64_t var_fe8_2 = 0x2d0
void var_fbe
void* var_eb0 = &var_fbe
void* var_db0
void** rax_27 = sub_140de49c0(&var_ec0, &var_db0, rax_22, sub_140e23ed0(&rdi_6[2], "SOverlay"))
int64_t* rbx_8 = rax_27[1]
var_fb8 = *rax_27
int64_t* var_fb0_1 = rbx_8

if (rbx_8 != 0)
    rbx_8[1].d += 1

void*** rax_28 = j_sub_140a82f30(0x88)
void*** rdi_7 = rax_28

if (rax_28 == 0)
    rdi_7 = nullptr
else
    sub_14068e490(rax_28)
    *rdi_7 = &data_142d8add0

void* rax_29
int32_t rdx_21
rax_29, rdx_21 = sub_140698b50(rdi_7)
var_f98 = 1
var_f90 = 0
int32_t var_f88_1 = 0
*(rax_29 + 0x20) = 0x202
bool c = *(arg2 + 0x201) != 0
*(rax_29 + 0x58) = 1
uint128_t zmm0_4 = _mm_cvtepi32_ps(zx.o(sbb.d(rdx_21, rdx_21, c)) & 2)
zmm0_4 = _mm_shuffle_ps(zmm0_4, zmm0_4, 0)
int104_t var_fa8_1 = zmm0_4.13
*(rax_29 + 0x48) = zmm0_4
sub_1407473e0(rax_29 + 0x60, &var_f90)
sub_140745b20(&var_f90)
sub_140693600(rax_29, &var_fb8)

if (rbx_8 != 0)
    rbx_8[1].d -= 1
    
    if (rbx_8[1].d == 1)
        (**rbx_8)(rbx_8)
        int32_t temp3_1 = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_8 + 8))(rbx_8, 1)

int64_t* rbx_9 = *(arg2 + 0x1b8)
var_fb8 = *(arg2 + 0x1b0)
int64_t* var_fb0_2 = rbx_9

if (rbx_9 != 0)
    rbx_9[1].d += 1

void*** rax_33 = j_sub_140a82f30(0x88)
void*** rdi_8 = rax_33

if (rax_33 == 0)
    rdi_8 = nullptr
else
    sub_14068e490(rax_33)
    *rdi_8 = &data_142d8add0

arg1[0x74] = rdi_8
var_fa8_1.d = 1
var_fa8_1:8.d = 0x3f800000
var_fa8_1:0xc.b = 1
var_f98.q = 0
var_f90.d = 0
sub_140692f90(&var_f98, &var_ea0)
rdi_8[5].d = var_fa8_1.d
*(rdi_8 + 0x34) = var_fa8_1:0xc.b
rdi_8[6].d = var_fa8_1:8.d
sub_140692f90(&rdi_8[7], &var_f98)
sub_140745b20(&var_f98)
rdi_8[4].b = *(arg2 + 0x2c8)
*(rdi_8 + 0x21) = *(arg2 + 0x2cc)
sub_140693600(rdi_8, &var_fb8)

if (rbx_9 != 0)
    rbx_9[1].d -= 1
    
    if (rbx_9[1].d == 1)
        (**rbx_9)(rbx_9)
        int32_t temp5_1 = *(rbx_9 + 0xc)
        *(rbx_9 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_9 + 8))(rbx_9, 1)

void var_740
int64_t* rax_40 = sub_14068d420(&var_740)
var_fd0[0].q = rax_40
int64_t r15_2 = sx.q(rax_40[0x35].d)
int32_t rcx_54 = (r15_2 + 1).d
rax_40[0x35].d = rcx_54

if (rcx_54 s> *(rax_40 + 0x1ac))
    sub_140638870(&rax_40[0x34])

*(rax_40[0x34] + (r15_2 << 3)) = rdi_8
int64_t rdi_9 = sx.q(rax_40[0x35].d)
int32_t rax_42 = (rdi_9 + 1).d
rax_40[0x35].d = rax_42

if (rax_42 s> *(rax_40 + 0x1ac))
    sub_140638870(&rax_40[0x34])

*(rax_40[0x34] + (rdi_9 << 3)) = rax_29
void*** rax_44 = j_sub_140a82f30(0x2e8)
void*** rsi_5 = rax_44

if (rax_44 == 0)
    rsi_5 = nullptr
else
    rax_44[1].d = 1
    *(rax_44 + 0xc) = 1
    *rsi_5 = &data_142d8c590
    
    if (rsi_5 != -0x10)
        sub_14068e500(&rsi_5[2])

void*** var_ed0 = rsi_5
void* var_ed8 = &rsi_5[2]
sub_14065fa30(&var_ed8, &rsi_5[2])
int64_t var_fe8_3 = 0x2d8
void var_fbd
void* var_ec8 = &var_fbd
int128_t zmm1_4 = sub_140e23ed0(&rsi_5[2], "SHorizontalBox")
bool cond:1 = rsi_5 == 0

if (rsi_5 != 0)
    rsi_5[1].d += 1
    cond:1 = rsi_5 == 0

if (cond:1)
    rsi_5 = nullptr

void* var_dc0
void** rax_45 = sub_140696920(&var_ed8, &var_dc0, var_fd0[0].q, zmm1_4)
var_fb8 = *rax_45
void* rcx_62 = rax_45[1]
void* var_fb0_3 = rcx_62

if (rcx_62 != 0)
    *(rcx_62 + 8) += 1

void var_3e0
int64_t* rax_46 = sub_14068cc20(&var_3e0)
var_f68.o = var_f68.o
rax_46[0x36] = var_f80
rax_46[0x4e].d = 1
sub_140692f90(&rax_46[0x44], sub_140e45ef0(&var_f80, arg1, &var_f68))
int32_t var_f78
int64_t* rax_50

if (var_f78 == 0)
    rax_50 = var_f80
label_140eee90c:
    
    if (rax_50 != 0)
        sub_140a74f90(rax_50)
else
    int64_t* rcx_66 = var_f80
    
    if (rcx_66 != 0)
        (*(*rcx_66 + 0x38))(rcx_66, 0)
        rax_50 = var_f80
        
        if (rax_50 != 0)
            rax_50 = sub_140a84c80(rax_50, 0, 0)
            var_f80 = rax_50
        
        int32_t var_f78_1 = 0
        goto label_140eee90c
*(rax_46 + 0x1c8) = *(arg2 + 0x288)
rax_46[0x3b].b = *(arg2 + 0x298)
sub_140692f90(&rax_46[0x3c], arg2 + 0x2a0)
sub_140693390(&rax_46[0x60], arg2 + 0x208)
rax_46[0x65].b = *(arg2 + 0x230)
sub_140692f90(&rax_46[0x66], arg2 + 0x238)
sub_140693390(&rax_46[0x58], arg2 + 0x248)
rax_46[0x5d].b = *(arg2 + 0x270)
sub_140692f90(&rax_46[0x5e], arg2 + 0x278)
rax_46[0x68].b = *(arg2 + 0x200)
void*** rax_55 = j_sub_140a82f30(0x5c8)
void*** rdi_10 = rax_55

if (rax_55 == 0)
    rdi_10 = nullptr
else
    rax_55[1].d = 1
    *(rax_55 + 0xc) = 1
    *rdi_10 = &data_142d8c580
    
    if (rdi_10 != -0x10)
        sub_140ee2d30(&rdi_10[2])

var_f60.q = rdi_10
var_f68 = &rdi_10[2]
sub_14065fa30(&var_f68, &rdi_10[2])
int64_t var_fe8_4 = 0x5b8
void var_fbc
void* var_f58 = &var_fbc
void* rax_56
int128_t zmm1_6
rax_56, zmm1_6 = sub_1406936e0(rax_46, &var_fb8, sub_140e23ed0(&rdi_10[2], "SButton"))
int64_t* var_dd0
int64_t** rax_57 = sub_140696120(&var_f68, &var_dd0, rax_56, zmm1_6)
int64_t* rbx_13 = rax_57[1]
var_fd0[0].q = *rax_57

if (rbx_13 != 0)
    rbx_13[1].d += 1

char rax_58 = *(arg2 + 0x2d1)
char var_fba
char rdi_11

if (rax_58 == 0)
    rdi_11 = var_fba
else
    rdi_11 = *(arg2 + 0x2d0)

void var_d80
int64_t* rax_59 = sub_140e94a50(&var_d80)
rax_59[0x3e].d = *(arg2 + 0x2b0)
*(rax_59 + 0x1f4) = *(arg2 + 0x2b4)
sub_1407473e0(&rax_59[0x3f], arg2 + 0x2b8)

if (&var_fba != rax_59 + 0x209)
    if (*(rax_59 + 0x20a) != 0)
        *(rax_59 + 0x20a) = 0
    
    if (rax_58 != 0)
        *(rax_59 + 0x209) = rdi_11
        *(rax_59 + 0x20a) = 1

if (arg2 + 0x1e0 != &rax_59[0x3c])
    int64_t* rcx_84
    
    if (*(arg2 + 0x1e8) != 0)
        rcx_84 = *(arg2 + 0x1e0)
    
    if (*(arg2 + 0x1e8) != 0 && rcx_84 != 0)
        (*(*rcx_84 + 0x40))(rcx_84, &rax_59[0x3c])
    else if (rax_59[0x3d].d != 0)
        int64_t* rcx_85 = rax_59[0x3c]
        
        if (rcx_85 != 0)
            (*(*rcx_85 + 0x38))(rcx_85, 0)
            int64_t rcx_86 = rax_59[0x3c]
            
            if (rcx_86 != 0)
                rax_59[0x3c] = sub_140a84c80(rcx_86, 0, 0)
            
            rax_59[0x3d].d = 0

sub_1407473e0(&rax_59[0x3a], arg2 + 0x1d0)
int64_t* rdi_13 = rbx_13
int64_t rcx_88 = var_fd0[0].q
*(rax_59 + 0x20d) = *(arg2 + 0x2d2)
var_fd0[0].q = rcx_88

if (rbx_13 != 0)
    rbx_13[1].d += 1

if (&var_fd0 != &rax_59[0x34])
    float zmm1_7[0x4] = var_fd0
    var_fd0 = *(rax_59 + 0x1a0)
    rdi_13 = rbx_13
    *(rax_59 + 0x1a0) = zmm1_7

if (rdi_13 != 0)
    rdi_13[1].d -= 1
    
    if (rdi_13[1].d == 1)
        (**rdi_13)(rdi_13)
        int32_t temp9_1 = *(rdi_13 + 0xc)
        *(rdi_13 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rdi_13 + 8))(rdi_13, 1)

if (rbx_13 != 0)
    rbx_13[1].d -= 1
    
    if (rbx_13[1].d == 1)
        (**rbx_13)(rbx_13)
        int32_t temp11_1 = *(rbx_13 + 0xc)
        *(rbx_13 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rbx_13 + 8))(rbx_13, 1)

sub_140f360f0(arg1, rax_59)
char var_b76 = 0
void var_b88
sub_140745b20(&var_b88)
void var_ba0
sub_140745b20(&var_ba0)
void var_bb0
sub_140745b20(&var_bb0)
int64_t* var_bb8

if (var_bb8 != 0)
    var_bb8[1].d -= 1
    
    if (var_bb8[1].d == 1)
        (**var_bb8)(var_bb8)
        int32_t temp13_1 = *(var_bb8 + 0xc)
        *(var_bb8 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*var_bb8 + 8))(var_bb8, 1)

int64_t* var_bd8

if (var_bd8 != 0)
    var_bd8[1].d -= 1
    
    if (var_bd8[1].d == 1)
        (**var_bd8)(var_bd8)
        int32_t temp15_1 = *(var_bd8 + 0xc)
        *(var_bd8 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*(*var_bd8 + 8))(var_bd8, 1)

sub_140ddea30(&var_d80)
int64_t* var_dc8

if (var_dc8 != 0)
    var_dc8[1].d -= 1
    
    if (var_dc8[1].d == 1)
        (**var_dc8)(var_dc8)
        int32_t temp17_1 = *(var_dc8 + 0xc)
        *(var_dc8 + 0xc) -= 1
        
        if (temp17_1 == 1)
            (*(*var_dc8 + 8))(var_dc8, 1)

int64_t* rbx_17 = var_f60.q

if (rbx_17 != 0)
    rbx_17[1].d -= 1
    
    if (rbx_17[1].d == 1)
        (**rbx_17)(rbx_17)
        int32_t temp19_1 = *(rbx_17 + 0xc)
        *(rbx_17 + 0xc) -= 1
        
        if (temp19_1 == 1)
            (*(*rbx_17 + 8))(rbx_17, 1)

sub_1406905f0(&var_3e0)
int64_t* var_db8

if (var_db8 != 0)
    var_db8[1].d -= 1
    
    if (var_db8[1].d == 1)
        (**var_db8)(var_db8)
        int32_t temp21_1 = *(var_db8 + 0xc)
        *(var_db8 + 0xc) -= 1
        
        if (temp21_1 == 1)
            (*(*var_db8 + 8))(var_db8, 1)

if (var_ed0 != 0)
    var_ed0[1].d -= 1
    
    if (var_ed0[1].d == 1)
        (**var_ed0)(var_ed0)
        int32_t temp22_1 = *(var_ed0 + 0xc)
        *(var_ed0 + 0xc) -= 1
        
        if (temp22_1 == 1)
            (*var_ed0)[1](var_ed0, 1)

int64_t var_5a0

if (var_5a0 != 0)
    sub_140a74f90(var_5a0)

sub_140660250(&var_740)
int64_t* var_da8

if (var_da8 != 0)
    var_da8[1].d -= 1
    
    if (var_da8[1].d == 1)
        (**var_da8)(var_da8)
        int32_t temp25_1 = *(var_da8 + 0xc)
        *(var_da8 + 0xc) -= 1
        
        if (temp25_1 == 1)
            (*(*var_da8 + 8))(var_da8, 1)

if (rdi_6 != 0)
    rdi_6[1].d -= 1
    
    if (rdi_6[1].d == 1)
        (**rdi_6)(rdi_6)
        int32_t temp26_1 = *(rdi_6 + 0xc)
        *(rdi_6 + 0xc) -= 1
        
        if (temp26_1 == 1)
            (*rdi_6)[1](rdi_6, 1)

int64_t var_3f0

if (var_3f0 != 0)
    sub_140a74f90(var_3f0)

sub_140ddea30(&var_590)
sub_140745b20(&var_ea0)

if (r12 != 0)
    r12[1].d -= 1
    
    if (r12[1].d == 1)
        (**r12)(r12)
        int32_t temp29_1 = *(r12 + 0xc)
        *(r12 + 0xc) -= 1
        
        if (temp29_1 == 1)
            (*(*r12 + 8))(r12, 1)

int64_t* var_d98

if (var_d98 != 0)
    var_d98[1].d -= 1
    
    if (var_d98[1].d == 1)
        (**var_d98)(var_d98)
        int32_t temp31_1 = *(var_d98 + 0xc)
        *(var_d98 + 0xc) -= 1
        
        if (temp31_1 == 1)
            (*(*var_d98 + 8))(var_d98, 1)

if (rax_16 != 0)
    rax_16[1].d -= 1
    
    if (rax_16[1].d == 1)
        (**rax_16)(rax_16)
        int32_t temp33_1 = *(rax_16 + 0xc)
        *(rax_16 + 0xc) -= 1
        
        if (temp33_1 == 1)
            (*rax_16)[1](rax_16, 1)

void var_968
sub_140745b20(&var_968)
void var_980
sub_140745b20(&var_980)
int64_t* var_990

if (var_990 != 0)
    var_990[1].d -= 1
    
    if (var_990[1].d == 1)
        (**var_990)(var_990)
        int32_t temp35_1 = *(var_990 + 0xc)
        *(var_990 + 0xc) -= 1
        
        if (temp35_1 == 1)
            (*(*var_990 + 8))(var_990, 1)

void var_9c0
sub_140745b20(&var_9c0)
sub_140ddea30(&var_b70)
sub_140745b20(&var_f18)
sub_140745b20(&var_e80)
sub_140745b20(&var_e20)
int64_t* rbx_25 = var_e38:8.q

if (rbx_25 != 0)
    rbx_25[1].d -= 1
    
    if (rbx_25[1].d == 1)
        (**rbx_25)(rbx_25)
        int32_t temp37_1 = *(rbx_25 + 0xc)
        *(rbx_25 + 0xc) -= 1
        
        if (temp37_1 == 1)
            (*(*rbx_25 + 8))(rbx_25, 1)

if (rcx_12 != 0)
    rcx_12[1].d -= 1
    
    if (rcx_12[1].d == 1)
        (**rcx_12)(rcx_12)
        int32_t temp39_1 = *(rcx_12 + 0xc)
        *(rcx_12 + 0xc) -= 1
        
        if (temp39_1 == 1)
            (*(*rcx_12 + 8))(rcx_12, 1)

int64_t* var_d88

if (var_d88 != 0)
    var_d88[1].d -= 1
    
    if (var_d88[1].d == 1)
        (**var_d88)(var_d88)
        int32_t temp41_1 = *(var_d88 + 0xc)
        *(var_d88 + 0xc) -= 1
        
        if (temp41_1 == 1)
            (*(*var_d88 + 8))(var_d88, 1)

if (rax_11 != 0)
    rax_11[1].d -= 1
    
    if (rax_11[1].d == 1)
        (**rax_11)(rax_11)
        int32_t temp43_1 = *(rax_11 + 0xc)
        *(rax_11 + 0xc) -= 1
        
        if (temp43_1 == 1)
            (*rax_11)[1](rax_11, 1)

void var_750
sub_140745b20(&var_750)
void var_768
sub_140745b20(&var_768)
int64_t* var_778

if (var_778 != 0)
    var_778[1].d -= 1
    
    if (var_778[1].d == 1)
        (**var_778)(var_778)
        int32_t temp45_1 = *(var_778 + 0xc)
        *(var_778 + 0xc) -= 1
        
        if (temp45_1 == 1)
            (*(*var_778 + 8))(var_778, 1)

void var_7a8
sub_140745b20(&var_7a8)
sub_140ddea30(&var_958)
sub_140745b20(&var_ee8)
sub_140745b20(&var_e60)
sub_140745b20(&var_de0)
int64_t* rbx_30 = var_df8:8.q

if (rbx_30 != 0)
    rbx_30[1].d -= 1
    
    if (rbx_30[1].d == 1)
        (**rbx_30)(rbx_30)
        int32_t temp46_1 = *(rbx_30 + 0xc)
        *(rbx_30 + 0xc) -= 1
        
        if (temp46_1 == 1)
            (*(*rbx_30 + 8))(rbx_30, 1)

var_f68 = *(arg2 + 0x1c0)
void* rax_108 = *(arg2 + 0x1c8)
var_f60.q = rax_108

if (rax_108 != 0)
    *(rax_108 + 8) += 1

int64_t result = (*(*arg1 + 0x240))(arg1, &var_f68)

if (rsi_5 != 0)
    rsi_5[1].d -= 1
    
    if (rsi_5[1].d == 1)
        result = (**rsi_5)(rsi_5)
        int32_t temp48_1 = *(rsi_5 + 0xc)
        *(rsi_5 + 0xc) -= 1
        
        if (temp48_1 == 1)
            result = (*rsi_5)[1](rsi_5, 1)

__security_check_cookie(rax_1 ^ &var_1008)
return result
