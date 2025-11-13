// 函数: sub_1406613a0
// 地址: 0x1406613a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5c8
int64_t rax_1 = __security_cookie ^ &var_5c8
int32_t var_468 = 0x400ccccd
int128_t var_448
__builtin_memset(&var_448, 0, 0x24)
int128_t zmm0 = *(arg1 + 0x118)
void* var_4d8 = arg1
int32_t var_538 = 0
char var_488 = 0
int64_t var_480 = 0
int64_t var_478 = 0
char var_46d = 1
char var_464 = 1
int64_t* var_460 = nullptr
int32_t var_458 = 0
char var_44f = 0
int64_t* var_420 = nullptr
int32_t var_418 = 0
int64_t var_410 = 0
int32_t var_408 = 0
int64_t* var_400 = nullptr
int32_t var_3f8 = 0
int64_t* var_3f0 = nullptr
int32_t var_3e8 = 0
int64_t* var_3e0 = nullptr
int32_t var_3d8 = 0
int64_t var_3c0 = 0
int64_t var_3b8 = 0
int16_t var_470 = 1
char var_46e = 0
void*** rax_2 = sub_140a84c80(0, 0x30, 0)
void*** rbx = rax_2
int128_t var_438
int32_t var_428

if (rax_2 != 0)
    *rax_2 = &data_142d83260
    sub_140d3a3a0(&rax_2[1], arg1)
    rbx[2] = sub_140661160
    rbx[4] = sub_140a387b0()
    *rbx = &data_142d832b8
    sub_140661220(rbx, &var_438:8)
    (*rbx)[7](rbx, 0)
    rbx = sub_140a84c80(rbx, 0, 0)
else if (var_428 != 0)
    int64_t* rcx_4 = var_438:8.q
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x38))(rcx_4, 0)
        int64_t rcx_5 = var_438:8.q
        
        if (rcx_5 != 0)
            var_438:8.q = sub_140a84c80(rcx_5, 0, 0)

if (rbx != 0)
    sub_140a74f90(rbx)

void*** rax_8 = sub_140a84c80(0, 0x30, 0)
void*** rbx_1 = rax_8

if (rax_8 != 0)
    *rax_8 = &data_142d83260
    sub_140d3a3a0(&rax_8[1], arg1)
    rbx_1[2] = _guard_check_icall
    rbx_1[4] = sub_140a387b0()
    *rbx_1 = &data_142d832b8
    sub_140661220(rbx_1, &var_400)
    (*rbx_1)[7](rbx_1, 0)
    rbx_1 = sub_140a84c80(rbx_1, 0, 0)
else if (var_3f8 != 0)
    int64_t* rcx_11 = var_400
    
    if (rcx_11 != 0)
        (*(*rcx_11 + 0x38))(rcx_11, 0)
        int64_t* rcx_12 = var_400
        
        if (rcx_12 != 0)
            var_400 = sub_140a84c80(rcx_12, 0, 0)
        
        var_3f8 = 0

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

char rax_14 = var_488
char var_598_1

if (var_46e == 0)
    var_598_1 = 0

if (var_46e != 0 || rax_14 != 0)
    var_598_1 = 1

int64_t r13

if (var_470:1.b == 0 || rax_14 != 0)
    r13.b = 0
else
    r13.b = 1

int64_t* rax_16 = var_438.q
uint64_t var_570 = 0
int32_t var_568
int32_t rdi_2
int32_t r14

if (rax_16 == 0)
    rdi_2 = 0xa
    var_568 = 0
    r14 = 6
else
    int64_t rbx_2 = sx.q(rax_16[1].d)
    int64_t rdi_1 = *rax_16
    var_568 = rbx_2.d
    
    if (rbx_2.d != 0)
        sub_14065dd80(&var_570, rbx_2.d, 0)
        memcpy(var_570, rdi_1, (rbx_2 << 5).d)
        rdi_2 = 9
        r14 = 5
    else
        var_568 = 0
        rdi_2 = (rbx_2 + 9).d
        r14 = (rbx_2 + 5).d

uint64_t var_528 = 0
int64_t r12 = sx.q(var_568)
int32_t var_520 = r12.d

if (r12.d != 0)
    sub_14065dd80(&var_528, r12.d, 0)
    memcpy(var_528, var_570, (r12 << 5).d)
    r12 = zx.q(var_520)

int64_t* rax_17 = var_448:8.q
uint64_t var_580 = 0
int32_t var_578

if (rax_17 == 0)
    var_578 = 0
    r14 = rdi_2
else
    int64_t rbx_3 = sx.q(rax_17[1].d)
    int64_t rdi_3 = *rax_17
    var_578 = rbx_3.d
    
    if (rbx_3.d != 0)
        sub_1406387e0(&var_580, rbx_3.d, 0)
        memcpy(var_580, rdi_3, (rbx_3 << 3).d)
    else
        var_578 = 0

void* var_560 = nullptr
int64_t r15 = sx.q(var_578)
int32_t var_558 = r15.d

if (r15.d != 0)
    sub_1406387e0(&var_560, r15.d, 0)
    memcpy(var_560, var_580, (r15 << 3).d)
    r15 = zx.q(var_558)

int64_t* rax_18 = var_448.q
uint64_t var_590 = 0
int32_t var_588
int32_t rsi

if (rax_18 == 0)
    var_588 = 0
    rsi = 0x20
else
    int64_t rbx_4 = sx.q(rax_18[1].d)
    int64_t rdi_4 = *rax_18
    var_588 = rbx_4.d
    
    if (rbx_4.d != 0)
        sub_1406387e0(&var_590, rbx_4.d, 0)
        memcpy(var_590, rdi_4, (rbx_4 << 3).d)
        rsi = 0x10
    else
        var_588 = 0
        rsi = (rbx_4 + 0x10).d

int32_t rsi_1 = rsi | r14
uint64_t var_500 = 0
int64_t r14_1 = sx.q(var_588)
int32_t var_4f8 = r14_1.d

if (r14_1.d != 0)
    sub_1406387e0(&var_500, r14_1.d, 0)
    memcpy(var_500, var_590, (r14_1 << 3).d)
    r14_1 = zx.q(var_4f8)

void var_3a8
int64_t* rax_19 = sub_14065fc50(&var_3a8)
rax_19[0x36].b = 1
*(rax_19 + 0x1a0) = zmm0
void var_4a0

if (&var_4a0 != &rax_19[0x37] && rax_19[0x38].d != 0)
    int64_t* rcx_27 = rax_19[0x37]
    
    if (rcx_27 != 0)
        (*(*rcx_27 + 0x38))(rcx_27, 0)
        int64_t rcx_28 = rax_19[0x37]
        
        if (rcx_28 != 0)
            rax_19[0x37] = sub_140a84c80(rcx_28, 0, 0)
        
        rax_19[0x38].d = 0

if (&rax_19[0x39] != &var_500)
    int32_t r8_13 = *(rax_19 + 0x1d4)
    rax_19[0x3a].d = r14_1.d
    
    if (r14_1.d != 0 || r8_13 != 0)
        sub_1406387e0(&rax_19[0x39], r14_1.d, r8_13)
        memcpy(rax_19[0x39], var_500, r14_1.d << 3)
    else
        *(rax_19 + 0x1d4) = 0

rax_19[0x3b].b = 1
void var_4e8

if (&var_4e8 != &rax_19[0x3c] && rax_19[0x3d].d != 0)
    int64_t* rcx_31 = rax_19[0x3c]
    
    if (rcx_31 != 0)
        (*(*rcx_31 + 0x38))(rcx_31, 0)
        int64_t rcx_32 = rax_19[0x3c]
        
        if (rcx_32 != 0)
            rax_19[0x3c] = sub_140a84c80(rcx_32, 0, 0)
        
        rax_19[0x3d].d = 0

void* r15_1

if (&rax_19[0x3e] == &var_560)
    r15_1 = var_560
else
    int32_t r8_16 = *(rax_19 + 0x1fc)
    rax_19[0x3f].d = r15.d
    
    if (r15.d != 0 || r8_16 != 0)
        sub_1406387e0(&rax_19[0x3e], r15.d, r8_16)
        r15_1 = var_560
        memcpy(rax_19[0x3e], r15_1, r15.d << 3)
    else
        *(rax_19 + 0x1fc) = 0
        r15_1 = var_560

rax_19[0x40].b = 1
void var_548

if (&var_548 != &rax_19[0x41] && rax_19[0x42].d != 0)
    int64_t* rcx_33 = rax_19[0x41]
    
    if (rcx_33 != 0)
        (*(*rcx_33 + 0x38))(rcx_33, 0)
        int64_t rcx_34 = rax_19[0x41]
        
        if (rcx_34 != 0)
            rax_19[0x41] = sub_140a84c80(rcx_34, 0, 0)
        
        rax_19[0x42].d = 0

uint64_t r12_1

if (&rax_19[0x43] == &var_528)
    r12_1 = var_528
else
    int32_t r8_17 = *(rax_19 + 0x224)
    rax_19[0x44].d = r12.d
    
    if (r12.d != 0 || r8_17 != 0)
        sub_14065dd80(&rax_19[0x43], r12.d, r8_17)
        r12_1 = var_528
        memcpy(rax_19[0x43], r12_1, r12.d << 5)
    else
        *(rax_19 + 0x224) = 0
        r12_1 = var_528

rax_19[0x45].b = 1
void var_510

if (&var_510 != &rax_19[0x46] && rax_19[0x47].d != 0)
    int64_t* rcx_35 = rax_19[0x46]
    
    if (rcx_35 != 0)
        (*(*rcx_35 + 0x38))(rcx_35, 0)
        int64_t rcx_36 = rax_19[0x46]
        
        if (rcx_36 != 0)
            rax_19[0x46] = sub_140a84c80(rcx_36, 0, 0)
        
        rax_19[0x47].d = 0

rax_19[0x48].b = var_470.b
*(rax_19 + 0x241) = 1

if (&var_558 != &rax_19[0x49] && rax_19[0x4a].d != 0)
    int64_t* rcx_37 = rax_19[0x49]
    
    if (rcx_37 != 0)
        (*(*rcx_37 + 0x38))(rcx_37, 0)
        int64_t rcx_38 = rax_19[0x49]
        
        if (rcx_38 != 0)
            rax_19[0x49] = sub_140a84c80(rcx_38, 0, 0)
        
        rax_19[0x4a].d = 0

*(rax_19 + 0x32c) = var_46d
rax_19[0x4b].b = r13.b
*(rax_19 + 0x259) = 1

if (&var_558 != &rax_19[0x4c] && rax_19[0x4d].d != 0)
    int64_t* rcx_39 = rax_19[0x4c]
    
    if (rcx_39 != 0)
        (*(*rcx_39 + 0x38))(rcx_39, 0)
        int64_t rcx_40 = rax_19[0x4c]
        
        if (rcx_40 != 0)
            rax_19[0x4c] = sub_140a84c80(rcx_40, 0, 0)
        
        rax_19[0x4d].d = 0

rax_19[0x4e].b = var_598_1
*(rax_19 + 0x271) = 1

if (&var_558 != &rax_19[0x4f] && rax_19[0x50].d != 0)
    int64_t* rcx_41 = rax_19[0x4f]
    
    if (rcx_41 != 0)
        (*(*rcx_41 + 0x38))(rcx_41, 0)
        int64_t rcx_42 = rax_19[0x4f]
        
        if (rcx_42 != 0)
            rax_19[0x4f] = sub_140a84c80(rcx_42, 0, 0)
        
        rax_19[0x50].d = 0

if (&var_438:8 != &rax_19[0x51])
    int64_t* rcx_43
    
    if (var_428 != 0)
        rcx_43 = var_438:8.q
    
    if (var_428 != 0 && rcx_43 != 0)
        (*(*rcx_43 + 0x40))(rcx_43, &rax_19[0x51])
    else if (rax_19[0x52].d != 0)
        int64_t* rcx_48 = rax_19[0x51]
        
        if (rcx_48 != 0)
            (*(*rcx_48 + 0x38))(rcx_48, 0)
            int64_t rcx_49 = rax_19[0x51]
            
            if (rcx_49 != 0)
                rax_19[0x51] = sub_140a84c80(rcx_49, 0, 0)
            
            rax_19[0x52].d = 0

if (&var_420 != &rax_19[0x53])
    int64_t* rcx_50
    
    if (var_418 != 0)
        rcx_50 = var_420
    
    if (var_418 != 0 && rcx_50 != 0)
        (*(*rcx_50 + 0x40))(rcx_50, &rax_19[0x53])
    else if (rax_19[0x54].d != 0)
        int64_t* rcx_51 = rax_19[0x53]
        
        if (rcx_51 != 0)
            (*(*rcx_51 + 0x38))(rcx_51, 0)
            int64_t rcx_52 = rax_19[0x53]
            
            if (rcx_52 != 0)
                rax_19[0x53] = sub_140a84c80(rcx_52, 0, 0)
            
            rax_19[0x54].d = 0

if (&var_400 != &rax_19[0x55])
    int64_t* rcx_53
    
    if (var_3f8 != 0)
        rcx_53 = var_400
    
    if (var_3f8 != 0 && rcx_53 != 0)
        (*(*rcx_53 + 0x40))(rcx_53, &rax_19[0x55])
    else if (rax_19[0x56].d != 0)
        int64_t* rcx_54 = rax_19[0x55]
        
        if (rcx_54 != 0)
            (*(*rcx_54 + 0x38))(rcx_54, 0)
            int64_t rcx_55 = rax_19[0x55]
            
            if (rcx_55 != 0)
                rax_19[0x55] = sub_140a84c80(rcx_55, 0, 0)
            
            rax_19[0x56].d = 0

if (&var_3f0 != &rax_19[0x59])
    int64_t* rcx_56
    
    if (var_3e8 != 0)
        rcx_56 = var_3f0
    
    if (var_3e8 != 0 && rcx_56 != 0)
        (*(*rcx_56 + 0x40))(rcx_56, &rax_19[0x59])
    else if (rax_19[0x5a].d != 0)
        int64_t* rcx_57 = rax_19[0x59]
        
        if (rcx_57 != 0)
            (*(*rcx_57 + 0x38))(rcx_57, 0)
            int64_t rcx_58 = rax_19[0x59]
            
            if (rcx_58 != 0)
                rax_19[0x59] = sub_140a84c80(rcx_58, 0, 0)
            
            rax_19[0x5a].d = 0

if (&var_3e0 != &rax_19[0x5b])
    int64_t* rcx_59
    
    if (var_3d8 != 0)
        rcx_59 = var_3e0
    
    if (var_3d8 != 0 && rcx_59 != 0)
        (*(*rcx_59 + 0x40))(rcx_59, &rax_19[0x5b])
    else if (rax_19[0x5c].d != 0)
        int64_t* rcx_60 = rax_19[0x5b]
        
        if (rcx_60 != 0)
            (*(*rcx_60 + 0x38))(rcx_60, 0)
            int64_t rcx_61 = rax_19[0x5b]
            
            if (rcx_61 != 0)
                rax_19[0x5b] = sub_140a84c80(rcx_61, 0, 0)
            
            rax_19[0x5c].d = 0

rax_19[0x62].d = var_468
*(rax_19 + 0x314) = var_464

if (&var_460 != &rax_19[0x63])
    int64_t* rcx_62
    
    if (var_458 != 0)
        rcx_62 = var_460
    
    if (var_458 != 0 && rcx_62 != 0)
        (*(*rcx_62 + 0x40))(rcx_62, &rax_19[0x63])
    else if (rax_19[0x64].d != 0)
        int64_t* rcx_63 = rax_19[0x63]
        
        if (rcx_63 != 0)
            (*(*rcx_63 + 0x38))(rcx_63, 0)
            int64_t rcx_64 = rax_19[0x63]
            
            if (rcx_64 != 0)
                rax_19[0x63] = sub_140a84c80(rcx_64, 0, 0)
            
            rax_19[0x64].d = 0

void*** rax_56 = sub_14065fae0()
var_558.q = rax_56
var_560 = &rax_56[2]
sub_14065fa30(&var_560, &rax_56[2])
int64_t var_5a8 = 0x590
void var_596
void* var_550 = &var_596
void* var_4c8
void** rax_57 =
    sub_140660bd0(&var_560, &var_4c8, rax_19, sub_140e23ed0(&rax_56[2], "SJoyColorPicker"))
int64_t* rbx_22 = rax_57[1]

if (rbx_22 != 0)
    rbx_22[1].d += 1

void* r13_1 = var_4d8

if (r13_1 + 0x108 == &var_4d8)
label_140661e44:
    
    if (rbx_22 != 0)
        rbx_22[1].d -= 1
        
        if (rbx_22[1].d == 1)
            (**rbx_22)(rbx_22)
            int32_t temp2_1 = *(rbx_22 + 0xc)
            *(rbx_22 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_22 + 8))(rbx_22, 1)
else
    *(r13_1 + 0x108) = *rax_57
    int64_t* rdi_6 = *(r13_1 + 0x110)
    
    if (rbx_22 == rdi_6)
        goto label_140661e44
    
    *(r13_1 + 0x110) = rbx_22
    
    if (rdi_6 != 0)
        rdi_6[1].d -= 1
        
        if (rdi_6[1].d == 1)
            (**rdi_6)(rdi_6)
            int32_t temp6_1 = *(rdi_6 + 0xc)
            *(rdi_6 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rdi_6 + 8))(rdi_6, 1)

int64_t* var_4c0

if (var_4c0 != 0)
    var_4c0[1].d -= 1
    
    if (var_4c0[1].d == 1)
        (**var_4c0)(var_4c0)
        int32_t temp5_1 = *(var_4c0 + 0xc)
        *(var_4c0 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_4c0 + 8))(var_4c0, 1)

int64_t* rbx_24 = var_558.q

if (rbx_24 != 0)
    rbx_24[1].d -= 1
    
    if (rbx_24[1].d == 1)
        (**rbx_24)(rbx_24)
        int32_t temp7_1 = *(rbx_24 + 0xc)
        *(rbx_24 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_24 + 8))(rbx_24, 1)

sub_140660470(&var_3a8)
uint64_t rax_65 = var_500

if (rax_65 != 0)
    sub_140a74f90(rax_65)

if ((rsi_1.b & 0x20) != 0)
    uint64_t rcx_78 = var_590
    rsi_1 &= 0xffffffdf
    
    if (rcx_78 != 0)
        sub_140a74f90(rcx_78)

if ((rsi_1.b & 0x10) != 0)
    uint64_t rax_66 = var_590
    rsi_1 &= 0xffffffef
    
    if (rax_66 != 0)
        sub_140a74f90(rax_66)

if (r15_1 != 0)
    sub_140a74f90(r15_1)

if ((rsi_1.b & 8) != 0)
    uint64_t rcx_81 = var_580
    rsi_1 &= 0xfffffff7
    
    if (rcx_81 != 0)
        sub_140a74f90(rcx_81)

if ((rsi_1.b & 4) != 0)
    uint64_t rax_67 = var_580
    rsi_1 &= 0xfffffffb
    
    if (rax_67 != 0)
        sub_140a74f90(rax_67)

if (r12_1 != 0)
    sub_140a74f90(r12_1)

if ((rsi_1.b & 2) != 0)
    uint64_t rcx_84 = var_570
    rsi_1 &= 0xfffffffd
    
    if (rcx_84 != 0)
        sub_140a74f90(rcx_84)

if ((rsi_1.b & 1) != 0)
    uint64_t rax_68 = var_570
    
    if (rax_68 != 0)
        sub_140a74f90(rax_68)

if (*(r13_1 + 0x128) != 0)
    void* rax_69 = *(r13_1 + 0x108)
    
    if (rax_69 != 0)
        *(rax_69 + 0x578) = *(r13_1 + 0x118)
        *(*(r13_1 + 0x108) + 0x588) = 1

int64_t* rbx_25 = *(r13_1 + 0x110)

if (rbx_25 != 0)
    rbx_25[1].d += 1

*arg2 = *(r13_1 + 0x108)
arg2[1] = rbx_25

if (rbx_25 != 0)
    int32_t rax_72 = rbx_25[1].d
    rbx_25[1].d = rax_72
    
    if (rax_72 == 0)
        (**rbx_25)(rbx_25)
        int32_t temp8_1 = *(rbx_25 + 0xc)
        *(rbx_25 + 0xc) -= 1
        
        if (temp8_1 == 1)
            int64_t r8_25 = *rbx_25
            (*(r8_25 + 8))(rbx_25, 1, r8_25)

sub_140660890(&var_488)
__security_check_cookie(rax_1 ^ &var_5c8)
return arg2
