// 函数: sub_140fbeab0
// 地址: 0x140fbeab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_628
int64_t rax_1 = __security_cookie ^ &var_628
int64_t* rbx = arg3[1]
int64_t* r14 = *arg3
uint64_t (* var_588)(void* arg1) = sub_140fc16f0
uint64_t (* var_5a8)() = sub_140fb4a50
int64_t (* var_5c8)(void* arg1) = sub_140fbbf00
int64_t (* var_5b8)(void* arg1) = sub_140fbbf80
int64_t (* var_5e8)(void* arg1, int64_t* arg2) = sub_140fc2fb0
int32_t var_580 = 0
int32_t var_5a0 = 0
int32_t var_5c0 = 0
int32_t var_5b0 = 0
int32_t var_5e0 = 0
int64_t* var_508 = r14
int64_t* var_500 = rbx

if (rbx != 0)
    rbx[1].d += 1

int64_t var_4f0 = 0
int32_t var_4e8 = 0
char var_4f8 = 1
void var_4c0
int64_t* rax_2 = sub_140f98c20(&var_4c0)
int64_t* var_5d8 = r14
int64_t* var_5d0 = rbx

if (rbx != 0)
    rbx[1].d += 1

if (&var_5d8 != &rax_2[0x34])
    var_5d8.o = *(rax_2 + 0x1a0)
    rbx = var_5d0
    *(rax_2 + 0x1a0) = var_5d8.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

rax_2[0x36].b = 1
sub_1407473e0(&rax_2[0x37], &var_4f0)
var_5e8.o = var_5e8.o
int64_t* var_568
sub_1407473e0(&rax_2[0x39], sub_140f956d0(&var_568, arg1, &var_5e8))
int32_t var_560
int64_t* rax_7

if (var_560 == 0)
    rax_7 = var_568
label_140fbec42:
    
    if (rax_7 != 0)
        sub_140a74f90(rax_7)
else
    int64_t* rcx_6 = var_568
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x38))(rcx_6, 0)
        rax_7 = var_568
        
        if (rax_7 != 0)
            rax_7 = sub_140a84c80(rax_7, 0, 0)
            var_568 = rax_7
        
        int32_t var_560_1 = 0
        goto label_140fbec42
var_5e8.o = var_5b8.o
int64_t* var_558
sub_1407473e0(&rax_2[0x3b], sub_140f94540(&var_558, arg1, &var_5e8))
int32_t var_550
int64_t* rax_10

if (var_550 == 0)
    rax_10 = var_558
label_140fbecb8:
    
    if (rax_10 != 0)
        sub_140a74f90(rax_10)
else
    int64_t* rcx_11 = var_558
    
    if (rcx_11 != 0)
        (*(*rcx_11 + 0x38))(rcx_11, 0)
        rax_10 = var_558
        
        if (rax_10 != 0)
            rax_10 = sub_140a84c80(rax_10, 0, 0)
            var_558 = rax_10
        
        int32_t var_550_1 = 0
        goto label_140fbecb8
var_5e8.o = var_5c8.o
sub_1407473e0(&rax_2[0x3d], sub_140f94540(&var_5c8, arg1, &var_5e8))
int64_t (* rax_13)(void* arg1)

if (var_5c0 == 0)
    rax_13 = var_5c8
label_140fbed31:
    
    if (rax_13 != 0)
        sub_140a74f90(rax_13)
else
    int64_t (* rcx_16)(void* arg1) = var_5c8
    
    if (rcx_16 != 0)
        (*(*rcx_16 + 0x38))(rcx_16, 0)
        rax_13 = var_5c8
        
        if (rax_13 != 0)
            rax_13 = sub_140a84c80(rax_13, 0, 0)
            var_5c8 = rax_13
        
        int32_t var_5c0_1 = 0
        goto label_140fbed31
var_5a8.o = var_5a8.o
int64_t* rax_14 = sub_140f951c0(&var_5b8, arg1, &var_5a8)
int16_t var_548 = 0x100
int64_t var_540 = 0
int32_t var_538 = 0
sub_140692f90(&var_540, rax_14)
rax_2[0x3f].b = var_548.b
*(rax_2 + 0x1f9) = var_548:1.b
sub_1407473e0(&rax_2[0x40], &var_540)
sub_140745b20(&var_540)
int64_t (* rax_18)(void* arg1)

if (var_5b0 == 0)
    rax_18 = var_5b8
label_140fbedde:
    
    if (rax_18 != 0)
        sub_140a74f90(rax_18)
else
    int64_t (* rcx_23)(void* arg1) = var_5b8
    
    if (rcx_23 != 0)
        (*(*rcx_23 + 0x38))(rcx_23, 0)
        rax_18 = var_5b8
        
        if (rax_18 != 0)
            rax_18 = sub_140a84c80(rax_18, 0, 0)
            var_5b8 = rax_18
        
        int32_t var_5b0_1 = 0
        goto label_140fbedde
var_588.o = var_588.o
int64_t* rax_19 = sub_140f951c0(&var_5d8, arg1, &var_588)
var_5a8.w = 0x100
var_5a0.q = 0
int32_t var_598 = 0
sub_140692f90(&var_5a0, rax_19)
rax_2[0x42].b = var_5a8.b
*(rax_2 + 0x211) = var_5a8:1.b
sub_1407473e0(&rax_2[0x43], &var_5a0)
sub_140745b20(&var_5a0)
int64_t* rax_23

if (var_5d0.d == 0)
    rax_23 = var_5d8
label_140fbee8b:
    
    if (rax_23 != 0)
        sub_140a74f90(rax_23)
else
    int64_t* rcx_30 = var_5d8
    
    if (rcx_30 != 0)
        (*(*rcx_30 + 0x38))(rcx_30, 0)
        rax_23 = var_5d8
        
        if (rax_23 != 0)
            rax_23 = sub_140a84c80(rax_23, 0, 0)
            var_5d8 = rax_23
        
        var_5d0.d = 0
        goto label_140fbee8b
void*** rax_24 = sub_140f967e0()
void* var_520 = &rax_24[2]
sub_140918950(&var_520, &rax_24[2])
int64_t var_608 = 0x410
void var_5f8
void* var_510 = &var_5f8
void* var_4d0
void** rax_25 =
    sub_140f9cac0(&var_520, &var_4d0, rax_2, sub_140e23ed0(&rax_24[2], "SColorThemeBar"))
int64_t* rbx_2 = rax_25[1]
int64_t (* rdi_1)(void* arg1, int64_t* arg2) = *rax_25

if (rbx_2 != 0)
    rbx_2[1].d += 1

void var_298
int64_t* rax_26 = sub_140e92ba0(&var_298)
var_5e8 = rdi_1
var_5e0.q = rbx_2
int64_t* rdi_2 = rbx_2

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (&var_5e8 != &rax_26[0x48])
    var_5e8.o = *(rax_26 + 0x240)
    rdi_2 = var_5e0.q
    *(rax_26 + 0x240) = var_5e8.o

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp4_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp5_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t var_528 = arg4
void*** rax_32 = sub_140f96600()
var_580.q = rax_32
var_588 = &rax_32[2]
sub_140e90fe0(&var_588, &rax_32[2])
int64_t var_608_1 = 0x578
int64_t* var_578 = &var_528
void var_4e0
int64_t* rax_33 = sub_140f9c510(&var_588, &var_4e0, rax_26, 
    sub_140e23ed0(&rax_32[3], "STableRow< TSharedPtr<FColorTheme> >"))
*arg2 = *rax_33
void* rax_35 = rax_33[1]
arg2[1] = rax_35

if (rax_35 != 0)
    *(rax_35 + 8) += 1

int64_t* var_4d8

if (var_4d8 != 0)
    var_4d8[1].d -= 1
    
    if (var_4d8[1].d == 1)
        (**var_4d8)(var_4d8)
        int32_t temp8_1 = *(var_4d8 + 0xc)
        *(var_4d8 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*var_4d8 + 8))(var_4d8, 1)

int64_t* rbx_5 = var_580.q

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp10_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

sub_140e977f0(&var_298)
int64_t* var_4c8

if (var_4c8 != 0)
    var_4c8[1].d -= 1
    
    if (var_4c8[1].d == 1)
        (**var_4c8)(var_4c8)
        int32_t temp12_1 = *(var_4c8 + 0xc)
        *(var_4c8 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*var_4c8 + 8))(var_4c8, 1)

if (rax_24 != 0)
    rax_24[1].d -= 1
    
    if (rax_24[1].d == 1)
        (**rax_24)(rax_24)
        int32_t temp14_1 = *(rax_24 + 0xc)
        *(rax_24 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*rax_24)[1](rax_24, 1)

void var_2a8
sub_140745b20(&var_2a8)
void var_2c0
sub_140745b20(&var_2c0)
void var_2d8
sub_140745b20(&var_2d8)
void var_2e8
sub_140745b20(&var_2e8)
void var_2f8
sub_140745b20(&var_2f8)
void var_308
sub_140745b20(&var_308)
int64_t* var_318

if (var_318 != 0)
    var_318[1].d -= 1
    
    if (var_318[1].d == 1)
        (**var_318)(var_318)
        int32_t temp16_1 = *(var_318 + 0xc)
        *(var_318 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*(*var_318 + 8))(var_318, 1)

sub_140ddea30(&var_4c0)
sub_140745b20(&var_4f0)

if (var_500 != 0)
    var_500[1].d -= 1
    
    if (var_500[1].d == 1)
        (**var_500)(var_500)
        int32_t temp18_1 = *(var_500 + 0xc)
        *(var_500 + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*(*var_500 + 8))(var_500, 1)

int64_t* rbx_10 = arg3[1]

if (rbx_10 != 0)
    rbx_10[1].d -= 1
    
    if (rbx_10[1].d == 1)
        (**rbx_10)(rbx_10)
        int32_t temp19_1 = *(rbx_10 + 0xc)
        *(rbx_10 + 0xc) -= 1
        
        if (temp19_1 == 1)
            int64_t r8_10 = *rbx_10
            (*(r8_10 + 8))(rbx_10, 1, r8_10)

__security_check_cookie(rax_1 ^ &var_628)
return arg2
