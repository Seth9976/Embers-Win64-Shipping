// 函数: sub_140f38070
// 地址: 0x140f38070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a98
int64_t rax_1 = __security_cookie ^ &var_a98
*(arg1 + 0x3d0) = *(arg2 + 0x1a0)
*(arg1 + 0x3d4) = *(arg2 + 0x1a4)
sub_140692f90(arg1 + 0x3d8, arg2 + 0x1a8)
*(arg1 + 0x3e8) = *(arg2 + 0x1b8)
*(arg1 + 0x3ec) = *(arg2 + 0x1bc)
sub_140692f90(arg1 + 0x3f0, arg2 + 0x1c0)
*(arg1 + 0x400) = *(arg2 + 0x1d0)
*(arg1 + 0x404) = *(arg2 + 0x1d4)
sub_140692f90(arg1 + 0x408, arg2 + 0x1d8)
int64_t* rbx_1 = *(arg2 + 0x1f0)
float (* (* var_a68)(void* arg1, float (* arg2)[0x4], uint128_t arg3 @ zmm0))[0x4] = *(arg2 + 0x1e8)

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (&var_a68 != arg1 + 0x5f8)
    var_a68.o = *(arg1 + 0x5f8)
    *(arg1 + 0x5f8) = var_a68.o

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rdi = data_143e243c8
char rbx_2 = data_1439ae520
char var_9b8 = rbx_2
char var_9b7 = 1
int64_t rsi = *rdi
int64_t var_9b0 = 0
int32_t var_9a8 = 0
var_a68 = sub_140f472d0
int64_t* var_a60
var_a60.d = 0
void var_8e8
int64_t rax_12 = (*(rsi + 0x48))(rdi, 
    *sub_140b58170(&var_8e8, "NotificationList.ItemBackground_Border_Transparent", 1), 0)
int128_t var_a38 = var_a68.o
int64_t var_958 = rax_12
char var_950 = 1
int64_t var_948 = 0
int32_t var_940 = 0
int128_t var_910 = zx.o(0)
char var_900 = 1
int64_t var_8f8 = 0
int32_t var_8f0 = 0
void var_3a0
int64_t* rax_13
int128_t zmm6
rax_13, zmm6 = sub_14068c640(&var_3a0)
rax_13[0x39].b = 1
*(rax_13 + 0x1b8) = zmm6
sub_140692f90(&rax_13[0x3a], &var_8f8)
rax_13[0x44] = rax_12
rax_13[0x45].b = 1
sub_140692f90(&rax_13[0x46], &var_948)
void* rax_14 = sub_140edf450(rax_13, arg1, &var_a38)
*(rax_14 + 0x78) = rbx_2
*(rax_14 + 0x79) = 1
sub_1407473e0(rax_14 + 0x80, &var_9b0)
void*** rdi_2 = j_sub_140a82f30(0x4c8)

if (rdi_2 == 0)
    rdi_2 = nullptr
else
    rdi_2[1].d = 1
    *(rdi_2 + 0xc) = 1
    *rdi_2 = &data_142d8c5a0
    
    if (rdi_2 != -0x10)
        sub_140f20640(&rdi_2[2])

void* var_9d0 = &rdi_2[2]
sub_14065fa30(&var_9d0, &rdi_2[2])
int64_t var_a78 = 0x4b8
void var_a58
void* var_9c0 = &var_a58
void* var_8a8
void** rax_16 = sub_140695920(&var_9d0, &var_8a8, rax_14, sub_140e23ed0(&rdi_2[2], "SBorder"))
int64_t* rsi_3 = rax_16[1]
int64_t* var_a50 = *rax_16
int32_t var_a48 = rsi_3.d

if (rsi_3 != 0)
    rsi_3[1].d += 1

int64_t* rbx_4 = data_143e243c8
int32_t* (* var_a28)(void* arg1, int32_t* arg2, uint128_t arg3 @ zmm0) = sub_140f47410
int32_t var_a20 = 0
int32_t* (* var_a08)(void* arg1, int32_t* arg2, uint128_t arg3 @ zmm0) = sub_140f46fa0
int64_t rdi_3 = *rbx_4
var_a68 = sub_140f46f70
char var_a00 = 0
var_a60.d = 0
void var_8e0
int64_t* rax_17
int128_t zmm6_1
rax_17, zmm6_1 = sub_140b58170(&var_8e0, "NoBorder", 1)
int64_t rax_18 = (*(rdi_3 + 0x48))(rbx_4, *rax_17, 0)
int64_t* r15_1 = *(arg1 + 0x5f8)
var_a68.o = var_a68.o
char var_998 = 1
int64_t var_990 = 0
int32_t var_988 = 0
int128_t var_938 = zmm6_1
char var_928 = 1
int64_t var_920 = 0
int32_t var_918 = 0
void*** rax_19 = j_sub_140a82f30(0x50)
void*** rdi_4 = rax_19

if (rax_19 == 0)
    rdi_4 = nullptr
else
    sub_140ddb700(rax_19)
    *rdi_4 = &data_142ec8fc8
    rdi_4[4].d = 0
    *(rdi_4 + 0x24) = 0
    rdi_4[5] = 0
    rdi_4[6] = 0
    rdi_4[7].b = 1
    rdi_4[8] = 0
    rdi_4[9].d = 0

void*** rax_20 = j_sub_140a82f30(0x50)
void*** rbx_5 = rax_20

if (rax_20 == 0)
    rbx_5 = nullptr
else
    sub_140ddb700(rax_20)
    *rbx_5 = &data_142ec8fc8
    rbx_5[4].d = 0
    *(rbx_5 + 0x24) = 0
    rbx_5[5] = 0
    rbx_5[6] = 0
    rbx_5[7].b = 1
    rbx_5[8] = 0
    rbx_5[9].d = 0

void var_8b8
void* rax_23 = sub_140de1aa0(rbx_5, (*(*r15_1 + 8))(r15_1, &var_8b8))
void var_898
int64_t* rax_24 = sub_140dd5d30(&var_898)
int64_t r15_2 = sx.q(rax_24[0x35].d)
int32_t rcx_24 = (r15_2 + 1).d
rax_24[0x35].d = rcx_24

if (rcx_24 s> *(rax_24 + 0x1ac))
    sub_1405a4d70(&rax_24[0x34])

*(rax_24[0x34] + (r15_2 << 3)) = rax_23
void* rax_26 = sub_140de1aa0(rdi_4, &var_a50)
int64_t rdi_5 = sx.q(rax_24[0x35].d)
int32_t rcx_27 = (rdi_5 + 1).d
rax_24[0x35].d = rcx_27

if (rcx_27 s> *(rax_24 + 0x1ac))
    sub_1405a4d70(&rax_24[0x34])

*(rax_24[0x34] + (rdi_5 << 3)) = rax_26
void*** rax_28 = j_sub_140a82f30(0x2e0)
void*** rdi_6 = rax_28

if (rax_28 == 0)
    rdi_6 = nullptr
else
    rax_28[1].d = 1
    *(rax_28 + 0xc) = 1
    *rdi_6 = &data_142ecd308
    
    if (rdi_6 != -0x10)
        sub_140dde040(&rdi_6[2])

void* var_9e8 = &rdi_6[2]
sub_140918950(&var_9e8, &rdi_6[2])
int64_t var_a78_1 = 0x2d0
void var_a57
void* var_9d8 = &var_a57
void* var_8c8
void** rax_29 = sub_140de49c0(&var_9e8, &var_8c8, rax_24, sub_140e23ed0(&rdi_6[2], "SOverlay"))
var_a38.q = *rax_29
void* rcx_34 = rax_29[1]
var_a38:8.q = rcx_34

if (rcx_34 != 0)
    *(rcx_34 + 8) += 1

void var_6e8
int64_t* rax_30
int128_t zmm6_2
rax_30, zmm6_2 = sub_14068c640(&var_6e8)
rax_30[0x39].b = 1
*(rax_30 + 0x1b8) = zmm6_2
sub_140692f90(&rax_30[0x3a], &var_920)
rax_30[0x44] = rax_18
rax_30[0x45].b = 1
sub_140692f90(&rax_30[0x46], &var_990)
void* rax_32 = sub_140edf450(rax_30, arg1, &var_a68)
var_a08.o = var_a08.o
int64_t* rax_33 = sub_140e8eef0(&var_a50, arg1, &var_a08)
char var_970 = 1
int64_t var_968 = 0
int32_t var_960 = 0
sub_140692f90(&var_968, rax_33)
*(rax_32 + 0x290) = var_970
int128_t var_980
*(rax_32 + 0x280) = var_980
sub_1407473e0(rax_32 + 0x298, &var_968)
sub_140745b20(&var_968)
int64_t* rax_36

if (var_a48 == 0)
    rax_36 = var_a50
label_140f386b7:
    
    if (rax_36 != 0)
        sub_140a74f90(rax_36)
else
    int64_t* rcx_43 = var_a50
    
    if (rcx_43 != 0)
        (*(*rcx_43 + 0x38))(rcx_43, 0)
        rax_36 = var_a50
        
        if (rax_36 != 0)
            rax_36 = sub_140a84c80(rax_36, 0, 0)
            var_a50 = rax_36
        
        var_a48 = 0
        goto label_140f386b7
var_a28.o = var_a28.o
int64_t* rax_37 = sub_140e8f010(&var_a68, arg1, &var_a28)
var_a00 = 1
int64_t var_9f8 = 0
int32_t var_9f0 = 0
sub_140692f90(&var_9f8, rax_37)
int32_t zmm1_3 = var_a08:4.d
*(rax_32 + 0x260) = var_a08.d
*(rax_32 + 0x264) = zmm1_3
*(rax_32 + 0x268) = var_a00
sub_1407473e0(rax_32 + 0x270, &var_9f8)
sub_140745b20(&var_9f8)
float (* (* rax_40)(void* arg1, float (* arg2)[0x4], uint128_t arg3 @ zmm0))[0x4]

if (var_a60.d == 0)
    rax_40 = var_a68
label_140f3877a:
    
    if (rax_40 != 0)
        sub_140a74f90(rax_40)
else
    float (* (* rcx_50)(void* arg1, float (* arg2)[0x4], uint128_t arg3 @ zmm0))[0x4] = var_a68
    
    if (rcx_50 != 0)
        (*(*rcx_50 + 0x38))(rcx_50, 0)
        rax_40 = var_a68
        
        if (rax_40 != 0)
            rax_40 = sub_140a84c80(rax_40, 0, 0)
            var_a68 = rax_40
        
        var_a60.d = 0
        goto label_140f3877a
void*** rax_41 = j_sub_140a82f30(0x4c8)
void*** rdi_7 = rax_41

if (rax_41 == 0)
    rdi_7 = nullptr
else
    rax_41[1].d = 1
    *(rax_41 + 0xc) = 1
    *rdi_7 = &data_142d8c5a0
    
    if (rdi_7 != -0x10)
        sub_140f20640(&rdi_7[2])

var_a20.q = rdi_7
var_a28 = &rdi_7[2]
sub_14065fa30(&var_a28, &rdi_7[2])
int64_t var_a78_2 = 0x4b8
void var_a56
void* var_a18 = &var_a56
void* rax_42
int128_t zmm1_5
rax_42, zmm1_5 = sub_1406936e0(rax_32, &var_a38, sub_140e23ed0(&rdi_7[2], "SBorder"))
void* var_8d8
void** rax_43 = sub_140695920(&var_a28, &var_8d8, rax_42, zmm1_5)
int64_t* rbx_10 = rax_43[1]
var_a38.q = *rax_43
var_a38:8.q = rbx_10

if (rbx_10 != 0)
    rbx_10[1].d += 1

sub_140de1b90(arg1 + 0x2b8, &var_a38)

if (rbx_10 != 0)
    rbx_10[1].d -= 1
    
    if (rbx_10[1].d == 1)
        (**rbx_10)(rbx_10)
        int32_t temp4_1 = *(rbx_10 + 0xc)
        *(rbx_10 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_10 + 8))(rbx_10, 1)

int64_t* var_8d0

if (var_8d0 != 0)
    var_8d0[1].d -= 1
    
    if (var_8d0[1].d == 1)
        (**var_8d0)(var_8d0)
        int32_t temp6_1 = *(var_8d0 + 0xc)
        *(var_8d0 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*var_8d0 + 8))(var_8d0, 1)

int64_t* rbx_12 = var_a20.q

if (rbx_12 != 0)
    rbx_12[1].d -= 1
    
    if (rbx_12[1].d == 1)
        (**rbx_12)(rbx_12)
        int32_t temp8_1 = *(rbx_12 + 0xc)
        *(rbx_12 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rbx_12 + 8))(rbx_12, 1)

sub_14068fed0(&var_6e8)
int64_t* var_8c0

if (var_8c0 != 0)
    var_8c0[1].d -= 1
    
    if (var_8c0[1].d == 1)
        (**var_8c0)(var_8c0)
        int32_t temp10_1 = *(var_8c0 + 0xc)
        *(var_8c0 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*var_8c0 + 8))(var_8c0, 1)

if (rdi_6 != 0)
    rdi_6[1].d -= 1
    
    if (rdi_6[1].d == 1)
        (**rdi_6)(rdi_6)
        int32_t temp11_1 = *(rdi_6 + 0xc)
        *(rdi_6 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*rdi_6)[1](rdi_6, 1)

int64_t var_6f8

if (var_6f8 != 0)
    sub_140a74f90(var_6f8)

sub_140ddea30(&var_898)
int64_t* var_8b0

if (var_8b0 != 0)
    var_8b0[1].d -= 1
    
    if (var_8b0[1].d == 1)
        (**var_8b0)(var_8b0)
        int32_t temp14_1 = *(var_8b0 + 0xc)
        *(var_8b0 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*var_8b0 + 8))(var_8b0, 1)

sub_140745b20(&var_920)
sub_140745b20(&var_990)

if (rsi_3 != 0)
    rsi_3[1].d -= 1
    
    if (rsi_3[1].d == 1)
        (**rsi_3)(rsi_3)
        int32_t temp16_1 = *(rsi_3 + 0xc)
        *(rsi_3 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*(*rsi_3 + 8))(rsi_3, 1)

int64_t* var_8a0

if (var_8a0 != 0)
    var_8a0[1].d -= 1
    
    if (var_8a0[1].d == 1)
        (**var_8a0)(var_8a0)
        int32_t temp18_1 = *(var_8a0 + 0xc)
        *(var_8a0 + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*(*var_8a0 + 8))(var_8a0, 1)

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp19_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp19_1 == 1)
            (*rdi_2)[1](rdi_2, 1)

sub_14068fed0(&var_3a0)
sub_140745b20(&var_8f8)
sub_140745b20(&var_948)
uint64_t result = sub_140745b20(&var_9b0)
__security_check_cookie(rax_1 ^ &var_a98)
return result
