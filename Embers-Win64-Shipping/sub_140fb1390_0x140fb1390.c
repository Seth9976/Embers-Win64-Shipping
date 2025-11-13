// 函数: sub_140fb1390
// 地址: 0x140fb1390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_558
int64_t rax_1 = __security_cookie ^ &var_558
char* (* var_4b8)(int64_t arg1, char* arg2, int32_t arg3) = data_143e244b0
int64_t* rax_3 = data_143e244b8
int64_t* var_4b0 = rax_3

if (rax_3 != 0)
    rax_3[1].d += 1

if (*(arg1 + 0x488) != 0)
    int64_t* rcx = *(arg1 + 0x480)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x488) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x480)
        
        *(arg1 + 0x478) = (*(*rcx_1 + 0x48))(rcx_1)

void* const var_4f8

if (*(arg1 + 0x478) != 0)
    void** rax_8 = sub_140fb9400(arg1, &var_4f8, 3)
    char* (* rdx_2)(int64_t arg1, char* arg2, int32_t arg3) = var_4b8
    var_4b8 = *rax_8
    *rax_8 = rdx_2
    int64_t* rdx_3 = var_4b0
    var_4b0 = rax_8[1]
    rax_8[1] = rdx_3
    int32_t var_4f0
    int64_t* rbx_1 = var_4f0.q
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

var_4f8 = &data_140fb5430
void (* var_458)(void* arg1) = sub_140fb5310
int64_t (* var_4e8)(void* arg1, int128_t* arg2) = sub_140fb4c90
char* (* var_518)(int64_t arg1, char* arg2, int32_t arg3) = sub_140fb4a20
int128_t* (* var_508)(void* arg1, int128_t* arg2) = sub_140fb2ef0
int32_t var_510 = 0
int128_t zmm0 = var_518.o
int32_t var_500 = 0
var_508.o = var_508.o
var_518 = var_4b8
int32_t var_4f0_1 = 0
int32_t var_450 = 0
int32_t var_4e0 = 0
int32_t var_470 = 0x3f800000
char var_46c = 1
int64_t var_468 = 0
int32_t var_460 = 0
int128_t var_4d8 = zmm0
var_510.q = var_4b0

if (var_4b0 != 0)
    var_4b0[1].d += 1

void*** rax_12 = j_sub_140a82f30(0x88)
void*** rsi = rax_12

if (rax_12 == 0)
    rsi = nullptr
else
    sub_14068e490(rax_12)
    *rsi = &data_142d8add0

void* rax_13 = sub_140698b50(rsi)
sub_140693600(rax_13, &var_518)

if (var_4b0 != 0)
    var_4b0[1].d -= 1
    
    if (var_4b0[1].d == 1)
        int64_t rdx_5 = *var_4b0
        (*rdx_5)(var_4b0, rdx_5)
        int32_t temp3_1 = *(var_4b0 + 0xc)
        *(var_4b0 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_4b0 + 8))(var_4b0, 1)

void*** rax_15 = j_sub_140a82f30(0x88)
void*** rsi_1 = rax_15

if (rax_15 == 0)
    rsi_1 = nullptr
else
    sub_14068e490(rax_15)
    *rsi_1 = &data_142d8add0

void* var_400
int64_t* rbx_3 = sub_140fb9400(arg1, &var_400, 6)
void* rax_17 = sub_140698b50(rsi_1)
sub_140693600(rax_17, rbx_3)
int64_t* rbx_4 = rbx_3[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        int64_t rdx_8 = *rbx_4
        (*rdx_8)(rbx_4, rdx_8)
        int32_t temp5_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

void*** rax_19 = j_sub_140a82f30(0x88)
void*** rbx_5 = rax_19

if (rax_19 == 0)
    rbx_5 = nullptr
else
    sub_14068e490(rax_19)
    *rbx_5 = &data_142d8add0

void* rax_20 = sub_140698b50(rbx_5)
int128_t var_448
__builtin_memcpy(&var_448, "\x00\x00\x80\x40\x00\x00\x00\x00\x00\x00\x80\x40\x00\x00\x00\x00\x01", 
    0x11)
int64_t var_430 = 0
int32_t var_428 = 0
__builtin_memcpy(rax_20 + 0x48, 
    "\x00\x00\x80\x40\x00\x00\x00\x00\x00\x00\x80\x40\x00\x00\x00\x00\x01", 0x11)
sub_1407473e0(rax_20 + 0x60, &var_430)
sub_140745b20(&var_430)
void* var_3f0
int64_t* rax_21 = sub_140fb9400(arg1, &var_3f0, 5)
sub_140693600(rax_20, rax_21)
int64_t* rbx_7 = rax_21[1]

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        (**rbx_7)(rbx_7)
        int32_t temp7_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_7 + 8))(rbx_7, 1)

void var_230
void* rax_26 =
    sub_140f985c0(sub_140f93e80(sub_140f98ac0(&var_230), arg1, &var_508), arg1, &var_4d8, 1)
var_4d8 = var_4e8.o
sub_1407473e0(rax_26 + 0x1e8, sub_140f94a40(&var_4e8, arg1, &var_4d8))
int64_t (* rax_29)(void* arg1, int128_t* arg2)

if (var_4e0 == 0)
    rax_29 = var_4e8
label_140fb1754:
    
    if (rax_29 != 0)
        sub_140a74f90(rax_29)
else
    int64_t (* rcx_31)(void* arg1, int128_t* arg2) = var_4e8
    
    if (rcx_31 != 0)
        (*(*rcx_31 + 0x38))(rcx_31, 0)
        rax_29 = var_4e8
        
        if (rax_29 != 0)
            rax_29 = sub_140a84c80(rax_29, 0, 0)
            var_4e8 = rax_29
        
        int32_t var_4e0_1 = 0
        goto label_140fb1754
var_4d8 = var_458.o
sub_1407473e0(rax_26 + 0x1c8, sub_140f94540(&var_508, arg1, &var_4d8))
int128_t* (* rax_32)(void* arg1, int128_t* arg2)

if (var_500 == 0)
    rax_32 = var_508
label_140fb17cb:
    
    if (rax_32 != 0)
        sub_140a74f90(rax_32)
else
    int128_t* (* rcx_36)(void* arg1, int128_t* arg2) = var_508
    
    if (rcx_36 != 0)
        (*(*rcx_36 + 0x38))(rcx_36, 0)
        rax_32 = var_508
        
        if (rax_32 != 0)
            rax_32 = sub_140a84c80(rax_32, 0, 0)
            var_508 = rax_32
        
        int32_t var_500_1 = 0
        goto label_140fb17cb
var_4d8 = var_4f8.o
sub_1407473e0(rax_26 + 0x1d8, sub_140f94540(&var_518, arg1, &var_4d8))
char* (* rax_35)(int64_t arg1, char* arg2, int32_t arg3)

if (var_510 == 0)
    rax_35 = var_518
label_140fb1843:
    
    if (rax_35 != 0)
        sub_140a74f90(rax_35)
else
    char* (* rcx_41)(int64_t arg1, char* arg2, int32_t arg3) = var_518
    
    if (rcx_41 != 0)
        (*(*rcx_41 + 0x38))(rcx_41, 0)
        rax_35 = var_518
        
        if (rax_35 != 0)
            rax_35 = sub_140a84c80(rax_35, 0, 0)
            var_518 = rax_35
        
        int32_t var_510_1 = 0
        goto label_140fb1843
void*** rax_36 = sub_140f96a70()
void*** var_488 = rax_36
void* var_490 = &rax_36[2]
sub_140918950(&var_490, &rax_36[2])
void var_528
void* var_480 = &var_528
int64_t var_538 = 0x310
void* var_410
void** rax_37 = sub_140f9d2d0(&var_490, &var_410, rax_26, sub_140e23ed0(var_490, "SColorWheel"))
int64_t* rbx_9 = rax_37[1]
var_4f8 = *rax_37
var_4f0_1.q = rbx_9

if (rbx_9 != 0)
    rbx_9[1].d += 1

void*** rax_38 = j_sub_140a82f30(0x88)
void*** rsi_2 = rax_38

if (rax_38 == 0)
    rsi_2 = nullptr
else
    sub_14068e490(rax_38)
    *rsi_2 = &data_142d8add0

var_4d8.d = 1
var_4d8:8.d = 0x3f800000
var_4d8:0xc.b = 1
int64_t var_4c8 = 0
int32_t var_4c0 = 0
sub_140692f90(&var_4c8, &var_468)
int32_t zmm0_4 = var_4d8:8.d
rsi_2[5].d = var_4d8.d
*(rsi_2 + 0x34) = var_4d8:0xc.b
rsi_2[6].d = zmm0_4
sub_140692f90(&rsi_2[7], &var_4c8)
sub_140745b20(&var_4c8)
rsi_2[4].b = 2
sub_140693600(rsi_2, &var_4f8)

if (rbx_9 != 0)
    rbx_9[1].d -= 1
    
    if (rbx_9[1].d == 1)
        (**rbx_9)(rbx_9)
        int32_t temp9_1 = *(rbx_9 + 0xc)
        *(rbx_9 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rbx_9 + 8))(rbx_9, 1)

void var_3e0
int64_t* rax_43 = sub_14068d420(&var_3e0)
int64_t r14 = sx.q(rax_43[0x35].d)
int32_t rcx_55 = (r14 + 1).d
rax_43[0x35].d = rcx_55

if (rcx_55 s> *(rax_43 + 0x1ac))
    sub_140638870(&rax_43[0x34])

*(rax_43[0x34] + (r14 << 3)) = rsi_2
int64_t rsi_3 = sx.q(rax_43[0x35].d)
int32_t rax_45 = (rsi_3 + 1).d
rax_43[0x35].d = rax_45

if (rax_45 s> *(rax_43 + 0x1ac))
    sub_140638870(&rax_43[0x34])

*(rax_43[0x34] + (rsi_3 << 3)) = rax_20
int64_t rsi_4 = sx.q(rax_43[0x35].d)
int32_t rax_47 = (rsi_4 + 1).d
rax_43[0x35].d = rax_47

if (rax_47 s> *(rax_43 + 0x1ac))
    sub_140638870(&rax_43[0x34])

*(rax_43[0x34] + (rsi_4 << 3)) = rax_17
int64_t rsi_5 = sx.q(rax_43[0x35].d)
int32_t rax_49 = (rsi_5 + 1).d
rax_43[0x35].d = rax_49

if (rax_49 s> *(rax_43 + 0x1ac))
    sub_140638870(&rax_43[0x34])

*(rax_43[0x34] + (rsi_5 << 3)) = rax_13
void*** rax_51 = j_sub_140a82f30(0x2e8)
void*** rbx_11 = rax_51

if (rax_51 == 0)
    rbx_11 = nullptr
else
    rax_51[1].d = 1
    *(rax_51 + 0xc) = 1
    *rbx_11 = &data_142d8c590
    
    if (rbx_11 != -0x10)
        sub_14068e500(&rbx_11[2])

void*** var_4a0 = rbx_11
void* var_4a8 = &rbx_11[2]
sub_14065fa30(&var_4a8, &rbx_11[2])
void var_527
void* var_498 = &var_527
int64_t var_538_1 = 0x2d8
void* var_420
void** rax_52 = sub_140696920(&var_4a8, &var_420, rax_43, sub_140e23ed0(var_4a8, "SHorizontalBox"))
int64_t* rbx_12 = rax_52[1]
var_4f8 = *rax_52
var_4f0_1.q = rbx_12

if (rbx_12 != 0)
    rbx_12[1].d += 1

sub_140de1b90(arg1 + 0x2b8, &var_4f8)

if (rbx_12 != 0)
    rbx_12[1].d -= 1
    
    if (rbx_12[1].d == 1)
        (**rbx_12)(rbx_12)
        int32_t temp12_1 = *(rbx_12 + 0xc)
        *(rbx_12 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*rbx_12 + 8))(rbx_12, 1)

sub_140669d70(&var_420)
sub_140669d70(&var_4a8)
sub_140f9acc0(&var_3e0)
sub_140f9a690(&var_410)
Concurrency::task<uint8_t>::~task<uint8_t>(&var_490)
sub_140f9a9f0(&var_230)
uint64_t result = sub_140745b20(&var_468)

if (var_4b0 != 0)
    var_4b0[1].d -= 1
    
    if (var_4b0[1].d == 1)
        result = (**var_4b0)(var_4b0)
        int32_t temp13_1 = *(var_4b0 + 0xc)
        *(var_4b0 + 0xc) -= 1
        
        if (temp13_1 == 1)
            result = (*(*var_4b0 + 8))(var_4b0, 1)

__security_check_cookie(rax_1 ^ &var_558)
return result
