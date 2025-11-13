// 函数: sub_140f38a80
// 地址: 0x140f38a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_878
int64_t rax_1 = __security_cookie ^ &var_878
*(arg1 + 0x438) = 0
sub_14065da90(arg1 + 0x3a0, arg2 + 0x1a0)
*(arg1 + 0x3b8) = *(arg2 + 0x1b8)
sub_140692f90(arg1 + 0x3c0, arg2 + 0x1c0)
*(arg1 + 0x3d0) = *(arg2 + 0x280)
*(arg1 + 0x3d4) = *(arg2 + 0x284)
sub_140692f90(arg1 + 0x3d8, arg2 + 0x288)
*(arg1 + 0x3e8) = *(arg2 + 0x298)
*(arg1 + 0x3ec) = *(arg2 + 0x29c)
sub_140692f90(arg1 + 0x3f0, arg2 + 0x2a0)
*(arg1 + 0x400) = *(arg2 + 0x2b0)
*(arg1 + 0x404) = *(arg2 + 0x2b4)
sub_140692f90(arg1 + 0x408, arg2 + 0x2b8)
int64_t* rbx = data_143e243c8
float (* (* var_838)(void* arg1, float (* arg2)[0x4], uint128_t arg3 @ zmm0))[0x4] = sub_140f472d0
int32_t var_830 = 0
void var_720
int64_t rax_10 =
    (*(*rbx + 0x48))(rbx, *sub_140b58170(&var_720, "NotificationList.ItemBackground_Border", 1), 0)
int64_t* rbx_1 = data_143e243c8
int64_t var_768 = rax_10
char var_760 = 1
int64_t rdi_1 = *rbx_1
int32_t* (* var_808)(void* arg1, int32_t* arg2, uint128_t arg3 @ zmm0) = sub_140f47410
int32_t* (* var_7e8)(void* arg1, int32_t* arg2, uint128_t arg3 @ zmm0) = sub_140f46fa0
int128_t* (* var_828)(void* arg1, int128_t* arg2, uint128_t arg3 @ zmm0) = sub_140f46f70
int64_t var_758 = 0
int32_t var_750 = 0
int128_t var_748
__builtin_memcpy(&var_748, "\x00\x00\xa0\x40\x00\x00\xa0\x40\x00\x00\xa0\x40\x00\x00\xa0\x40\x01", 
    0x11)
int64_t var_730 = 0
int32_t var_728 = 0
int32_t var_800 = 0
char var_7e0 = 0
int32_t var_820 = 0
void var_718
int64_t rax_12 =
    (*(rdi_1 + 0x48))(rbx_1, *sub_140b58170(&var_718, "NotificationList.ItemBackground", 1), 0)
int128_t zmm0 = var_838.o
int64_t var_788 = rax_12
char var_780 = 1
int64_t var_778 = 0
int32_t var_770 = 0
var_828.o = var_828.o
int128_t var_818 = zmm0
int64_t* var_6f0
int64_t** rax_13 = sub_140f3fc30(arg1, &var_6f0, arg2)
var_838 = *rax_13
void* rcx_11 = rax_13[1]
var_830.q = rcx_11

if (rcx_11 != 0)
    *(rcx_11 + 8) += 1

void var_398
int64_t* rax_14
int128_t zmm6
rax_14, zmm6 = sub_14068c640(&var_398)
rax_14[0x39].b = 1
*(rax_14 + 0x1b8) = zmm6
sub_140692f90(&rax_14[0x3a], &var_730)
rax_14[0x44] = rax_10
rax_14[0x45].b = 1
sub_140692f90(&rax_14[0x46], &var_758)
void*** rax_15 = j_sub_140a82f30(0x4c8)
void*** rdi_2 = rax_15

if (rax_15 == 0)
    rdi_2 = nullptr
else
    rax_15[1].d = 1
    *(rax_15 + 0xc) = 1
    *rax_15 = &data_142d8c5a0
    
    if (rax_15 != -0x10)
        sub_140f20640(&rax_15[2])

void* var_7c8 = &rdi_2[2]
sub_14065fa30(&var_7c8, &rdi_2[2])
int64_t var_858 = 0x4b8
void var_848
void* var_7b8 = &var_848
sub_140e23ed0(&rdi_2[2], "SBorder")
void* rax_16
int128_t zmm1_1
rax_16, zmm1_1 = sub_140edf450(rax_14, arg1, &var_818)
void* rax_17
int128_t zmm1_2
rax_17, zmm1_2 = sub_1406936e0(rax_16, &var_838, zmm1_1)
void* var_700
void** rax_18 = sub_140695920(&var_7c8, &var_700, rax_17, zmm1_2)
var_818.q = *rax_18
void* rcx_22 = rax_18[1]
var_818:8.q = rcx_22

if (rcx_22 != 0)
    *(rcx_22 + 8) += 1

void var_6e0
int64_t* rax_19 = sub_14068c640(&var_6e0)
rax_19[0x44] = rax_12
rax_19[0x45].b = 1
sub_140692f90(&rax_19[0x46], &var_778)
void* rax_20 = sub_140edf450(rax_19, arg1, &var_828)
var_7e8.o = var_7e8.o
int64_t* rax_21 = sub_140e8eef0(&var_828, arg1, &var_7e8)
char var_7a0 = 1
int64_t var_798 = 0
int32_t var_790 = 0
sub_140692f90(&var_798, rax_21)
*(rax_20 + 0x290) = var_7a0
int128_t var_7b0
*(rax_20 + 0x280) = var_7b0
sub_1407473e0(rax_20 + 0x298, &var_798)
sub_140745b20(&var_798)
int128_t* (* rax_24)(void* arg1, int128_t* arg2, uint128_t arg3 @ zmm0)

if (var_820 == 0)
    rax_24 = var_828
label_140f38e8f:
    
    if (rax_24 != 0)
        sub_140a74f90(rax_24)
else
    int128_t* (* rcx_30)(void* arg1, int128_t* arg2, uint128_t arg3 @ zmm0) = var_828
    
    if (rcx_30 != 0)
        (*(*rcx_30 + 0x38))(rcx_30, 0)
        rax_24 = var_828
        
        if (rax_24 != 0)
            rax_24 = sub_140a84c80(rax_24, 0, 0)
            var_828 = rax_24
        
        int32_t var_820_1 = 0
        goto label_140f38e8f
var_808.o = var_808.o
int64_t* rax_25 = sub_140e8f010(&var_838, arg1, &var_808)
var_7e0 = 1
int64_t var_7d8 = 0
int32_t var_7d0 = 0
sub_140692f90(&var_7d8, rax_25)
int32_t zmm1_3 = var_7e8:4.d
*(rax_20 + 0x260) = var_7e8.d
*(rax_20 + 0x264) = zmm1_3
*(rax_20 + 0x268) = var_7e0
sub_1407473e0(rax_20 + 0x270, &var_7d8)
sub_140745b20(&var_7d8)
float (* (* rax_28)(void* arg1, float (* arg2)[0x4], uint128_t arg3 @ zmm0))[0x4]

if (var_830 == 0)
    rax_28 = var_838
label_140f38f4f:
    
    if (rax_28 != 0)
        sub_140a74f90(rax_28)
else
    float (* (* rcx_37)(void* arg1, float (* arg2)[0x4], uint128_t arg3 @ zmm0))[0x4] = var_838
    
    if (rcx_37 != 0)
        (*(*rcx_37 + 0x38))(rcx_37, 0)
        rax_28 = var_838
        
        if (rax_28 != 0)
            rax_28 = sub_140a84c80(rax_28, 0, 0)
            var_838 = rax_28
        
        int32_t var_830_1 = 0
        goto label_140f38f4f
void*** rax_29 = j_sub_140a82f30(0x4c8)
void*** rdi_3 = rax_29

if (rax_29 == 0)
    rdi_3 = nullptr
else
    rax_29[1].d = 1
    *(rax_29 + 0xc) = 1
    *rax_29 = &data_142d8c5a0
    
    if (rax_29 != -0x10)
        sub_140f20640(&rax_29[2])

var_800.q = rdi_3
var_808 = &rdi_3[2]
sub_14065fa30(&var_808, &rdi_3[2])
int64_t var_858_1 = 0x4b8
void var_847
void* var_7f8 = &var_847
void* rax_30
int128_t zmm1_5
rax_30, zmm1_5 = sub_1406936e0(rax_20, &var_818, sub_140e23ed0(&rdi_3[2], "SBorder"))
void* var_710
void** rax_31 = sub_140695920(&var_808, &var_710, rax_30, zmm1_5)
int64_t* rbx_5 = rax_31[1]
var_818.q = *rax_31
var_818:8.q = rbx_5

if (rbx_5 != 0)
    rbx_5[1].d += 1

sub_140de1b90(arg1 + 0x2b8, &var_818)

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp2_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

int64_t* var_708

if (var_708 != 0)
    var_708[1].d -= 1
    
    if (var_708[1].d == 1)
        (**var_708)(var_708)
        int32_t temp4_1 = *(var_708 + 0xc)
        *(var_708 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_708 + 8))(var_708, 1)

int64_t* rbx_7 = var_800.q

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        (**rbx_7)(rbx_7)
        int32_t temp6_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_7 + 8))(rbx_7, 1)

sub_14068fed0(&var_6e0)
int64_t* var_6f8

if (var_6f8 != 0)
    var_6f8[1].d -= 1
    
    if (var_6f8[1].d == 1)
        (**var_6f8)(var_6f8)
        int32_t temp8_1 = *(var_6f8 + 0xc)
        *(var_6f8 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*var_6f8 + 8))(var_6f8, 1)

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp10_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*rdi_2)[1](rdi_2, 1)

sub_14068fed0(&var_398)
int64_t* var_6e8

if (var_6e8 != 0)
    var_6e8[1].d -= 1
    
    if (var_6e8[1].d == 1)
        (**var_6e8)(var_6e8)
        int32_t temp11_1 = *(var_6e8 + 0xc)
        *(var_6e8 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*var_6e8 + 8))(var_6e8, 1)

sub_140745b20(&var_778)
sub_140745b20(&var_730)
uint64_t result = sub_140745b20(&var_758)
__security_check_cookie(rax_1 ^ &var_878)
return result
