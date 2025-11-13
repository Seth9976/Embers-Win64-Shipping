// 函数: sub_141bd0810
// 地址: 0x141bd0810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_558
int64_t rax_1 = __security_cookie ^ &var_558
int32_t var_500 = 0
int64_t* rcx = *(arg1 + 0x318)
char var_528
void** (* var_520)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)
int64_t* var_518
void** (* var_510)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)
int64_t* rbx
int32_t rdi

if (rcx == 0)
    rbx = data_143e244b8
    var_520 = data_143e244b0
    var_518 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rdi = 2
else
    var_528 = 0
    char* var_508_1 = &var_528
    var_510 = sub_141b970e0
    sub_141befea0(rcx, &var_520, &var_510)
    rbx = var_518
    rdi = 1

var_500.q = var_520

if (var_518 != 0)
    var_518[1].d += 1

if ((rdi.b & 2) != 0)
    rdi &= 0xfffffffd
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx + 8))(rbx, 1)

if ((rdi.b & 1) != 0)
    rdi &= 0xfffffffe
    
    if (var_518 != 0)
        var_518[1].d -= 1
        
        if (var_518[1].d == 1)
            (**var_518)(var_518)
            int32_t temp3_1 = *(var_518 + 0xc)
            *(var_518 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_518 + 8))(var_518, 1)

int64_t* rcx_5 = *(arg1 + 0x320)
void** (* var_4f0)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)
void** (** rax_8)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)
char* rbx_2
int32_t r14

if (rcx_5 == 0)
    rbx_2 = data_143e244b8
    var_510 = data_143e244b0
    char* var_508_3 = rbx_2
    
    if (rbx_2 != 0)
        *(rbx_2 + 8) += 1
    
    rax_8 = &var_510
    r14 = 8
else
    var_528 = 0
    char* var_508_2 = &var_528
    var_510 = sub_141b970e0
    sub_141befea0(rcx_5, &var_4f0, &var_510)
    rbx_2 = var_508_2
    rax_8 = &var_4f0
    r14 = 4

int32_t r14_1 = r14 | rdi
int64_t* rdi_1 = rax_8[1]
var_520 = *rax_8

if (rdi_1 != 0)
    rdi_1[1].d += 1

if ((r14_1.b & 8) != 0)
    r14_1 &= 0xfffffff7
    
    if (rbx_2 != 0)
        int32_t temp4_1 = *(rbx_2 + 8)
        *(rbx_2 + 8) -= 1
        
        if (temp4_1 == 1)
            (**rbx_2)(rbx_2)
            int32_t temp6_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

if ((r14_1.b & 4) != 0)
    int32_t var_4e8
    int64_t* rbx_3 = var_4e8.q
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp7_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)

int128_t zmm0 = *(arg1 + 0x2e8)
int32_t var_4e8_1 = 0
var_4f0 = sub_141be84b0
char rax_14 = *(arg1 + 0x2c8)
int128_t var_4d8 = zmm0
char var_498 = rax_14
int128_t var_440 = zmm0
int64_t var_490 = *(arg1 + 0x2d0)
zmm0 = *(arg1 + 0x2f8)
int64_t* rax_16 = *(arg1 + 0x2d8)
char var_430 = 1
int64_t var_428 = 0
int32_t var_420 = 0
char var_458 = 1
int64_t var_450 = 0
int32_t var_448 = 0
var_510.o = zmm0
int128_t var_468 = zmm0
int128_t var_4a8 = *(arg1 + 0x2b8)

if (rax_16 != 0)
    rax_16[1].d += 1

char var_480 = 1
int64_t var_478 = 0
int32_t var_470 = 0
void* var_4c8 = arg1 + 0x230
char var_4c0 = 1
int64_t var_4b8 = 0
int32_t var_4b0 = 0
void*** rax_17 = sub_140a84c80(0, 0x30, 0)

if (rax_17 != 0)
    *rax_17 = &data_143083c50
    sub_140d3a3a0(&rax_17[1], arg1)
    *(rax_17 + 0x10) = var_4f0.o
    rax_17[5] = sub_140a387b0()
    *rax_17 = &data_143083ca8

void var_408
int64_t* rax_19 = sub_140f991b0(&var_408)
rax_19[0x34] = arg1 + 0x110
rax_19[0x3d] = arg1 + 0x230
rax_19[0x3e].b = 1
sub_140692f90(&rax_19[0x3f], &var_4b8)
sub_140693390(&rax_19[0x35], &var_4a8)
rax_19[0x3a].b = var_480
sub_140692f90(&rax_19[0x3b], &var_478)
rax_19[0x55].d = *(arg1 + 0x2e4)
rax_19[0x62].b = 1
*(rax_19 + 0x300) = var_510.o
sub_140692f90(&rax_19[0x63], &var_450)
rax_19[0x5d].b = 1
*(rax_19 + 0x2d8) = var_4d8
sub_140692f90(&rax_19[0x5e], &var_428)

if (&var_4d8 != &rax_19[0x65])
    if (rax_17 != 0)
        (*rax_17)[8](rax_17, &rax_19[0x65])
    else if (rax_19[0x66].d != 0)
        int64_t* rcx_19 = rax_19[0x65]
        
        if (rcx_19 != 0)
            (*(*rcx_19 + 0x38))(rcx_19, 0)
            int64_t rcx_20 = rax_19[0x65]
            
            if (rcx_20 != 0)
                rax_19[0x65] = sub_140a84c80(rcx_20, 0, 0)
            
            rax_19[0x66].d = 0

var_500.q = var_500.q

if (var_518 != 0)
    var_518[1].d += 1

if (&var_500 != &rax_19[0x4a])
    var_500.o = *(rax_19 + 0x250)
    *(rax_19 + 0x250) = var_500.o

if (var_518 != 0)
    var_518[1].d -= 1
    
    if (var_518[1].d == 1)
        (**var_518)(var_518)
        int32_t temp9_1 = *(var_518 + 0xc)
        *(var_518 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_518 + 8))(var_518, 1)

var_520 = var_520

if (rdi_1 != 0)
    rdi_1[1].d += 1

if (&var_520 != &rax_19[0x4c])
    var_520.o = *(rax_19 + 0x260)
    *(rax_19 + 0x260) = var_520.o

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp11_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

void*** rax_32 = sub_140f96bd0()
var_4e8_1.q = rax_32
var_4f0 = &rax_32[2]
sub_140918950(&var_4f0, &rax_32[2])
int64_t var_538 = 0x430
char* var_4e0 = &var_528
int64_t* var_418
int64_t** rax_33 =
    sub_140f9d8f0(&var_4f0, &var_418, rax_19, sub_140e23ed0(&rax_32[2], "SExpandableArea"))
int64_t* rbx_9 = rax_33[1]

if (rbx_9 != 0)
    rbx_9[1].d += 1

if (arg1 + 0x328 == &var_4d8)
label_141bd0d94:
    
    if (rbx_9 != 0)
        rbx_9[1].d -= 1
        
        if (rbx_9[1].d == 1)
            (**rbx_9)(rbx_9)
            int32_t temp14_1 = *(rbx_9 + 0xc)
            *(rbx_9 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*(*rbx_9 + 8))(rbx_9, 1)
else
    *(arg1 + 0x328) = *rax_33
    int64_t* r14_3 = *(arg1 + 0x330)
    
    if (rbx_9 == r14_3)
        goto label_141bd0d94
    
    *(arg1 + 0x330) = rbx_9
    
    if (r14_3 != 0)
        r14_3[1].d -= 1
        
        if (r14_3[1].d == 1)
            (**r14_3)(r14_3)
            int32_t temp18_1 = *(r14_3 + 0xc)
            *(r14_3 + 0xc) -= 1
            
            if (temp18_1 == 1)
                (*(*r14_3 + 8))(r14_3, 1)

int64_t* var_410

if (var_410 != 0)
    var_410[1].d -= 1
    
    if (var_410[1].d == 1)
        (**var_410)(var_410)
        int32_t temp17_1 = *(var_410 + 0xc)
        *(var_410 + 0xc) -= 1
        
        if (temp17_1 == 1)
            (*(*var_410 + 8))(var_410, 1)

int64_t* rbx_11 = var_4e8_1.q

if (rbx_11 != 0)
    rbx_11[1].d -= 1
    
    if (rbx_11[1].d == 1)
        (**rbx_11)(rbx_11)
        int32_t temp19_1 = *(rbx_11 + 0xc)
        *(rbx_11 + 0xc) -= 1
        
        if (temp19_1 == 1)
            (*(*rbx_11 + 8))(rbx_11, 1)

sub_140f9aaf0(&var_408)

if (rax_17 != 0)
    (*rax_17)[7](rax_17, 0)
    int64_t rax_42 = sub_140a84c80(rax_17, 0, 0)
    
    if (rax_42 != 0)
        sub_140a74f90(rax_42)

sub_140745b20(&var_4b8)
sub_140745b20(&var_478)

if (rax_16 != 0)
    rax_16[1].d -= 1
    
    if (rax_16[1].d == 1)
        (**rax_16)(rax_16)
        int32_t temp21_1 = *(rax_16 + 0xc)
        *(rax_16 + 0xc) -= 1
        
        if (temp21_1 == 1)
            (*(*rax_16 + 8))(rax_16, 1)

sub_140745b20(&var_450)
sub_140745b20(&var_428)
int64_t* rbx_13 = *(arg1 + 0x330)

if (rbx_13 != 0)
    rbx_13[1].d += 1

*arg2 = *(arg1 + 0x328)
arg2[1] = rbx_13

if (rbx_13 != 0)
    rbx_13[1].d += 1
    
    if (rbx_13 != 0)
        rbx_13[1].d -= 1
        
        if (rbx_13[1].d == 1)
            (**rbx_13)(rbx_13)
            int32_t temp26_1 = *(rbx_13 + 0xc)
            *(rbx_13 + 0xc) -= 1
            
            if (temp26_1 == 1)
                (*(*rbx_13 + 8))(rbx_13, 1)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp25_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp25_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

if (var_518 != 0)
    var_518[1].d -= 1
    
    if (var_518[1].d == 1)
        (**var_518)(var_518)
        int32_t temp27_1 = *(var_518 + 0xc)
        *(var_518 + 0xc) -= 1
        
        if (temp27_1 == 1)
            int64_t r8_6 = *var_518
            (*(r8_6 + 8))(var_518, 1, r8_6)

__security_check_cookie(rax_1 ^ &var_558)
return arg2
