// 函数: sub_140f3e640
// 地址: 0x140f3e640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_588
int64_t rax_1 = __security_cookie ^ &var_588
int64_t* rbx = arg4[1]
int64_t (* var_538)(int64_t* arg1) = sub_140f28a6c
int64_t* var_550 = *arg4
int32_t var_4b8 = 0x3f800000
char var_4b4 = 1
int64_t var_4b0 = 0
int32_t var_4a8 = 0
char var_450 = 1
int64_t var_448 = 0
int32_t var_440 = 0
int32_t var_530 = 0
int32_t var_548 = rbx.d
int128_t var_478
__builtin_memcpy(&var_478, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x02", 
    0x11)
int128_t var_460 = zx.o(0)

if (rbx != 0)
    rbx[1].d += 1

void*** rax_3 = j_sub_140a82f30(0x88)
void*** rdi = rax_3

if (rax_3 == 0)
    rdi = nullptr
else
    sub_14068e490(rax_3)
    *rdi = &data_142d8add0

int32_t var_518 = 1
int32_t var_510 = 0x3f800000
char var_50c = 1
int64_t var_508 = 0
int32_t var_500 = 0
sub_140692f90(&var_508, &var_4b0)
rdi[5].d = var_518
*(rdi + 0x34) = var_50c
rdi[6].d = var_510
sub_140692f90(&rdi[7], &var_508)
sub_140745b20(&var_508)
*(rdi + 0x21) = 2
sub_140693600(rdi, &var_550)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

void var_418
int64_t* rax_8 = sub_140e4fb70(&var_418)
var_538.o = var_538.o
int64_t* rax_9 = sub_140e45b90(&var_550, arg1, &var_538)
int64_t var_4f8 = 0
char var_4f0 = 1
int64_t var_4e8 = 0
int32_t var_4e0 = 0
sub_140692f90(&var_4e8, rax_9)
rax_8[0x34] = var_4f8
rax_8[0x35].b = var_4f0
sub_1407473e0(&rax_8[0x36], &var_4e8)
sub_140745b20(&var_4e8)
int64_t* rax_13

if (var_548 == 0)
    rax_13 = var_550
label_140f3e84c:
    
    if (rax_13 != 0)
        sub_140a74f90(rax_13)
else
    int64_t* rcx_12 = var_550
    
    if (rcx_12 != 0)
        (*(*rcx_12 + 0x38))(rcx_12, 0)
        rax_13 = var_550
        
        if (rax_13 != 0)
            rax_13 = sub_140a84c80(rax_13, 0, 0)
            var_550 = rax_13
        
        var_548 = 0
        goto label_140f3e84c
sub_140693390(&rax_8[0x38], &var_478)
rax_8[0x3d].b = var_450
sub_140692f90(&rax_8[0x3e], &var_448)
void*** rax_15 = sub_140e48c50()
void* var_4d0 = &rax_15[2]
sub_140918950(&var_4d0, &rax_15[2])
int64_t var_568 = 0x3a8
void var_558
void* var_4c0 = &var_558
void* var_428
void** rax_16 = sub_140e56930(&var_4d0, &var_428, rax_8, sub_140e23ed0(&rax_15[2], "SImage"))
int64_t* rbx_2 = rax_16[1]
var_538 = *rax_16
var_530.q = rbx_2

if (rbx_2 != 0)
    rbx_2[1].d += 1

int128_t zmm0_2 = *(arg3 + 0x2b0)
char rax_18 = *(arg3 + 0x2c0)
int64_t var_488 = 0
int32_t var_480 = 0
sub_140692f90(&var_488, arg3 + 0x2c8)
void*** rax_19 = j_sub_140a82f30(0x88)
void*** rsi_1 = rax_19

if (rax_19 == 0)
    rsi_1 = nullptr
else
    sub_14068e490(rax_19)
    *rsi_1 = &data_142d8add0

void* rax_20 = sub_140698b50(rsi_1)
*(rax_20 + 0x48) = zmm0_2
*(rax_20 + 0x58) = rax_18
sub_140692f90(rax_20 + 0x60, &var_488)
sub_140745b20(&var_488)
*(rax_20 + 0x21) = 2
sub_140693600(rax_20, &var_538)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

void var_200
int64_t* rax_24 = sub_14068d420(&var_200)
int64_t r15_1 = sx.q(rax_24[0x35].d)
int32_t rax_25 = (r15_1 + 1).d
rax_24[0x35].d = rax_25

if (rax_25 s> *(rax_24 + 0x1ac))
    sub_140638870(&rax_24[0x34])

*(rax_24[0x34] + (r15_1 << 3)) = rax_20
int64_t rsi_3 = sx.q(rax_24[0x35].d)
int32_t rax_27 = (rsi_3 + 1).d
rax_24[0x35].d = rax_27

if (rax_27 s> *(rax_24 + 0x1ac))
    sub_140638870(&rax_24[0x34])

*(rax_24[0x34] + (rsi_3 << 3)) = rdi
void*** rax_29 = j_sub_140a82f30(0x2e8)
void*** rdi_1 = rax_29

if (rax_29 == 0)
    rdi_1 = nullptr
else
    rax_29[1].d = 1
    *(rax_29 + 0xc) = 1
    *rdi_1 = &data_142d8c590
    
    if (rdi_1 != -0x10)
        sub_14068e500(&rdi_1[2])

var_530.q = rdi_1
var_538 = &rdi_1[2]
sub_14065fa30(&var_538, &rdi_1[2])
int64_t var_568_1 = 0x2d8
void var_557
void* var_528 = &var_557
void* var_438
void** rax_30 =
    sub_140696920(&var_538, &var_438, rax_24, sub_140e23ed0(&rdi_1[2], "SHorizontalBox"))
*arg2 = *rax_30
void* rax_32 = rax_30[1]
arg2[1] = rax_32

if (rax_32 != 0)
    *(rax_32 + 8) += 1

int64_t* var_430

if (var_430 != 0)
    var_430[1].d -= 1
    
    if (var_430[1].d == 1)
        (**var_430)(var_430)
        int32_t temp6_1 = *(var_430 + 0xc)
        *(var_430 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*var_430 + 8))(var_430, 1)

int64_t* rbx_6 = var_530.q

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp7_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_6 + 8))(rbx_6, 1)

int64_t var_60

if (var_60 != 0)
    sub_140a74f90(var_60)

sub_140660250(&var_200)
int64_t* var_420

if (var_420 != 0)
    var_420[1].d -= 1
    
    if (var_420[1].d == 1)
        (**var_420)(var_420)
        int32_t temp10_1 = *(var_420 + 0xc)
        *(var_420 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*var_420 + 8))(var_420, 1)

if (rax_15 != 0)
    rax_15[1].d -= 1
    
    if (rax_15[1].d == 1)
        (**rax_15)(rax_15)
        int32_t temp12_1 = *(rax_15 + 0xc)
        *(rax_15 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*rax_15)[1](rax_15, 1)

void var_210
sub_140745b20(&var_210)
void var_228
sub_140745b20(&var_228)
int64_t* var_238

if (var_238 != 0)
    var_238[1].d -= 1
    
    if (var_238[1].d == 1)
        (**var_238)(var_238)
        int32_t temp14_1 = *(var_238 + 0xc)
        *(var_238 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*var_238 + 8))(var_238, 1)

void var_268
sub_140745b20(&var_268)
sub_140ddea30(&var_418)
sub_140745b20(&var_448)
int64_t* rbx_10 = var_460:8.q

if (rbx_10 != 0)
    rbx_10[1].d -= 1
    
    if (rbx_10[1].d == 1)
        (**rbx_10)(rbx_10)
        int32_t temp16_1 = *(rbx_10 + 0xc)
        *(rbx_10 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*(*rbx_10 + 8))(rbx_10, 1)

sub_140745b20(&var_4b0)
int64_t* rbx_12 = arg4[1]

if (rbx_12 != 0)
    rbx_12[1].d -= 1
    
    if (rbx_12[1].d == 1)
        (**rbx_12)(rbx_12)
        int32_t temp17_1 = *(rbx_12 + 0xc)
        *(rbx_12 + 0xc) -= 1
        
        if (temp17_1 == 1)
            int64_t r8_6 = *rbx_12
            (*(r8_6 + 8))(rbx_12, 1, r8_6)

__security_check_cookie(rax_1 ^ &var_588)
return arg2
