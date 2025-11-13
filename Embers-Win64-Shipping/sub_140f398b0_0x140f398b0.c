// 函数: sub_140f398b0
// 地址: 0x140f398b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1bc0)
void var_1bf8
int64_t rax_1 = __security_cookie ^ &var_1bf8
sub_1407473e0(&arg1[0xa1], arg2 + 0x1a8)
*(arg1 + 0x51c) = *(arg2 + 0x1bc)
*(arg1 + 0x522) = *(arg2 + 0x1c0)
arg1[0x97].b = *(arg2 + 0x78)
*(arg1 + 0x4b9) = *(arg2 + 0x79)
sub_1407473e0(&arg1[0x98], arg2 + 0x80)
sub_140f61420(arg1, *(arg2 + 0x1a0))
int32_t temp0 = *(arg1 + 0x51c)
int64_t rbx = arg1[0xab]
int32_t r14 = 0
int32_t var_1ae0 = 0
int32_t r15 = 2

if (temp0 == 1)
    r15 = 0

*(arg1 + 0x523) = *(arg2 + 0x1ba)
*(arg1 + 0x524) = 0
int128_t* (* var_1ae8)(int64_t* arg1, int128_t* arg2) = sub_140f48840

if (temp0 == 1)
    r14 = 2

int128_t zmm0 = var_1ae8.o
arg1[0xa5] = 0
int64_t var_19c0 = 0
int32_t var_19b8 = 0
int128_t var_1bc8 = zmm0
int64_t var_19d0 = rbx
char var_19c8 = 1
void var_1180
void* rax_8 = sub_140e45660(sub_140e4fb70(&var_1180), arg1, &var_1bc8)
*(rax_8 + 0x1a0) = rbx
*(rax_8 + 0x1a8) = 1
sub_140692f90(rax_8 + 0x1b0, &var_19c0)
void*** rax_9 = sub_140e48c50()
void*** var_1a38 = rax_9
void* var_1a40 = &rax_9[2]
sub_140918950(&var_1a40, &rax_9[2])
int64_t var_1bd8 = 0x3a8
void var_1bb8
void* var_1a30 = &var_1bb8
int16_t var_1b08
void** rax_10 = sub_140e56930(&var_1a40, &var_1b08, rax_8, sub_140e23ed0(&rax_9[2], "SImage"))
int64_t (* var_1b88)(void* arg1) = *rax_10
void* rcx_10 = rax_10[1]
int32_t var_1b80 = rcx_10.d

if (rcx_10 != 0)
    *(rcx_10 + 8) += 1

void var_cc8
int64_t* rax_11 = sub_14068c940(&var_cc8)
rax_11[0x34].d = r14
*(rax_11 + 0x1a4) = r15
void*** rdi_1 = j_sub_140a82f30(0x3d8)

if (rdi_1 == 0)
    rdi_1 = nullptr
else
    rdi_1[1].d = 1
    *(rdi_1 + 0xc) = 1
    *rdi_1 = &data_142d8c570
    
    if (rdi_1 != -0x10)
        sub_140f20750(&rdi_1[2])

void* var_1a58 = &rdi_1[2]
sub_14065fa30(&var_1a58, &rdi_1[2])
int64_t var_1bd8_1 = 0x3c8
void var_1bb7
void* var_1a48 = &var_1bb7
void* rax_13
int128_t zmm1_2
rax_13, zmm1_2 = sub_1406937a0(rax_11, &var_1b88, sub_140e23ed0(&rdi_1[2], "SBox"))
void* var_1950
void** rax_14 = sub_140695d20(&var_1a58, &var_1950, rax_13, zmm1_2)
int64_t* r15_1 = rax_14[1]
void* var_1b40 = *rax_14

if (r15_1 != 0)
    r15_1[1].d += 1

char var_1978 = 1
int32_t* (* var_1b68)(int64_t* arg1, int32_t* arg2, double arg3 @ zmm0) = sub_140f48730
int64_t var_1970 = 0
var_1b88 = sub_140f471c0
int128_t var_1988 = zx.o(0)
int32_t var_1968 = 0
int32_t var_1b60 = 0
var_1b80 = 0
void var_1558
int64_t* rax_15 = sub_140e50180(&var_1558)
rax_15[0x34] = *(arg2 + 0x1c8)
rax_15[0x35].b = *(arg2 + 0x1d0)
sub_140692f90(&rax_15[0x36], arg2 + 0x1d8)
void*** rax_16 = sub_140e48fc0()
void* var_1a70 = &rax_16[2]
sub_140918950(&var_1a70, &rax_16[2])
int64_t var_1bd8_2 = 0x2c8
void var_1bb6
void* var_1a60 = &var_1bb6
int128_t zmm1_3 = sub_140e23ed0(&rax_16[2], "SSpacer")

if (rax_16 != 0)
    rax_16[1].d += 1

if (&arg1[0x9c] == &var_1bc8)
label_140f39cbf:
    
    if (rax_16 != 0)
        rax_16[1].d -= 1
        
        if (rax_16[1].d == 1)
            (**rax_16)(rax_16)
            int32_t temp2_1 = *(rax_16 + 0xc)
            *(rax_16 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*rax_16)[1](rax_16, 1)
else
    arg1[0x9c] = &rax_16[2]
    void*** rdi_3 = arg1[0x9d]
    
    if (rax_16 == rdi_3)
        goto label_140f39cbf
    
    arg1[0x9d] = rax_16
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp4_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rdi_3)[1](rdi_3, 1)

void* var_1900
void** rax_21 = sub_140e57660(&var_1a70, &var_1900, rax_15, zmm1_3)
var_1bc8.q = *rax_21
void* rcx_28 = rax_21[1]
var_1bc8:8.q = rcx_28

if (rcx_28 != 0)
    *(rcx_28 + 8) += 1

void var_398
int64_t* rax_22
int128_t zmm6
rax_22, zmm6 = sub_14068c640(&var_398)
int128_t var_1ba8 = var_1b88.o
int64_t* rax_23 = sub_140e45b90(&var_1b88, arg1, &var_1ba8)
void* var_1b28 = nullptr
char var_1b20 = 1
void* var_1b18 = nullptr
int32_t var_1b10 = 0
sub_140692f90(&var_1b18, rax_23)
rax_22[0x44] = var_1b28
rax_22[0x45].b = var_1b20
sub_1407473e0(&rax_22[0x46], &var_1b18)
sub_140745b20(&var_1b18)
int64_t (* rax_27)(void* arg1)

if (var_1b80 == 0)
    rax_27 = var_1b88
label_140f39dcc:
    
    if (rax_27 != 0)
        sub_140a74f90(rax_27)
else
    int64_t (* rcx_34)(void* arg1) = var_1b88
    
    if (rcx_34 != 0)
        (*(*rcx_34 + 0x38))(rcx_34, 0)
        rax_27 = var_1b88
        
        if (rax_27 != 0)
            rax_27 = sub_140a84c80(rax_27, 0, 0)
            var_1b88 = rax_27
        
        var_1b80 = 0
        goto label_140f39dcc
var_1b68.o = var_1b68.o
int64_t* rax_28 = sub_140e8eef0(&var_1ba8, arg1, &var_1b68)
char var_1ac8 = 1
int64_t var_1ac0 = 0
int32_t var_1ab8 = 0
sub_140692f90(&var_1ac0, rax_28)
rax_22[0x52].b = var_1ac8
int128_t var_1ad8
*(rax_22 + 0x280) = var_1ad8
sub_1407473e0(&rax_22[0x53], &var_1ac0)
sub_140745b20(&var_1ac0)
int64_t rax_31

if (var_1ba8:8.d == 0)
    rax_31 = var_1ba8.q
label_140f39e7a:
    
    if (rax_31 != 0)
        sub_140a74f90(rax_31)
else
    int64_t* rcx_41 = var_1ba8.q
    
    if (rcx_41 != 0)
        (*(*rcx_41 + 0x38))(rcx_41, 0)
        rax_31 = var_1ba8.q
        
        if (rax_31 != 0)
            rax_31 = sub_140a84c80(rax_31, 0, 0)
            var_1ba8.q = rax_31
        
        var_1ba8:8.d = 0
        goto label_140f39e7a
rax_22[0x36].d = 2
*(rax_22 + 0x1b4) = 2
*(rax_22 + 0x1b8) = zmm6
rax_22[0x39].b = 1
sub_140692f90(&rax_22[0x3a], &var_1970)
void*** rbx_4 = j_sub_140a82f30(0x4c8)

if (rbx_4 == 0)
    rbx_4 = nullptr
else
    rbx_4[1].d = 1
    *(rbx_4 + 0xc) = 1
    *rbx_4 = &data_142d8c5a0
    
    if (rbx_4 != -0x10)
        sub_140f20640(&rbx_4[2])

void* var_1a28 = &rbx_4[2]
sub_14065fa30(&var_1a28, &rbx_4[2])
int64_t var_1bd8_3 = 0x4b8
void var_1bb5
void* var_1a18 = &var_1bb5
int128_t zmm1_4 = sub_140e23ed0(&rbx_4[2], "SBorder")

if (rbx_4 != 0)
    rbx_4[1].d += 1

if (&arg1[0x9a] == &var_1b68)
label_140f39f94:
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp6_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*rbx_4)[1](rbx_4, 1)
else
    arg1[0x9a] = &rbx_4[2]
    void*** rdi_5 = arg1[0x9b]
    
    if (rbx_4 == rdi_5)
        goto label_140f39f94
    
    arg1[0x9b] = rbx_4
    
    if (rdi_5 != 0)
        rdi_5[1].d -= 1
        
        if (rdi_5[1].d == 1)
            (**rdi_5)(rdi_5)
            int32_t temp8_1 = *(rdi_5 + 0xc)
            *(rdi_5 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*rdi_5)[1](rdi_5, 1)

void* rax_37
int128_t zmm1_5
rax_37, zmm1_5 = sub_1406936e0(rax_22, &var_1bc8, zmm1_4)
void* var_18f0
void** rax_38 = sub_140695920(&var_1a28, &var_18f0, rax_37, zmm1_5)
int64_t* rsi_3 = rax_38[1]
var_1b68 = *rax_38

if (rsi_3 != 0)
    rsi_3[1].d += 1

int64_t rbx_5 = arg1[0xaa]
var_1bc8.q = sub_140f48840
var_1bc8:8.d = 0
var_1bc8 = var_1bc8
var_1ad8.q = rbx_5
var_1ad8:8.b = 1
var_1ac8.q = 0
var_1ac0.d = 0
void var_1398
void* rax_40 = sub_140e45660(sub_140e4fb70(&var_1398), arg1, &var_1bc8)
*(rax_40 + 0x1a0) = rbx_5
*(rax_40 + 0x1a8) = 1
sub_140692f90(rax_40 + 0x1b0, &var_1ac8)
void*** rax_41 = sub_140e48c50()
var_1b20.q = rax_41
var_1b28 = &rax_41[2]
sub_140918950(&var_1b28, &rax_41[2])
int64_t var_1bd8_4 = 0x3a8
void var_1bb4
var_1b18 = &var_1bb4
void* var_1910
void** rax_42 = sub_140e56930(&var_1b28, &var_1910, rax_40, sub_140e23ed0(&rax_41[2], "SImage"))
void* rdx_27 = rax_42[1]
var_1bc8.q = *rax_42
var_1bc8:8.q = rdx_27

if (rdx_27 != 0)
    *(rdx_27 + 8) += 1

void var_f68
int64_t* rax_43 = sub_14068c940(&var_f68)
rax_43[0x34].d = r14
*(rax_43 + 0x1a4) = r15
void*** rax_46 = j_sub_140a82f30(0x3d8)
void*** rdi_7 = rax_46

if (rax_46 == 0)
    rdi_7 = nullptr
else
    rax_46[1].d = 1
    *(rax_46 + 0xc) = 1
    *rdi_7 = &data_142d8c570
    
    if (rdi_7 != -0x10)
        sub_140f20750(&rdi_7[2])

void* var_1a90 = &rdi_7[2]
sub_14065fa30(&var_1a90, &rdi_7[2])
int64_t var_1bd8_5 = 0x3c8
void var_1bb3
void* var_1a80 = &var_1bb3
int128_t zmm1_7
int128_t zmm6_1
zmm1_7, zmm6_1 = sub_140e23ed0(&rdi_7[2], "SBox")
void* rax_47
int128_t zmm1_8
rax_47, zmm1_8 = sub_1406937a0(rax_43, &var_1bc8, zmm1_7)
void* var_1920
void** rax_48 = sub_140695d20(&var_1a90, &var_1920, rax_47, zmm1_8)
int64_t* r14_2 = rax_48[1]
var_1ba8.q = *rax_48

if (r14_2 != 0)
    r14_2[1].d += 1

int64_t (* rax_49)(void* arg1) = arg1[0xa9]
int64_t* rbx_8 = data_143e243c8
int64_t var_1998 = 0
int32_t var_1990 = 0
int64_t var_19e0 = 0
int64_t rdi_8 = *rbx_8
int32_t var_19d8 = 0
int64_t var_1aa0 = 0
int32_t var_1a98 = 0
int128_t var_19b0 = zmm6_1
char var_19a0 = 1
var_1b88 = rax_49
int64_t (* var_19f0)(void* arg1) = rax_49
char var_19e8 = 1
int32_t var_1aa8 = 0x3f800000
char var_1aa4 = 1
int64_t rax_51 = (*(rdi_8 + 0x48))(rbx_8, *sub_140b58170(&var_1ae8, "NoBorder", 1), 0)
int32_t rbx_9 = *(arg2 + 0x1bc)
char var_1a08 = 1
int64_t var_1a00 = 0
int32_t var_19f8 = 0
void var_18e0
int64_t* rax_52 = sub_140f1fe10(&var_18e0)
var_1ba8.q = var_1ba8.q
rax_52[0x3a].d = rbx_9
int64_t* rbx_10 = r14_2
var_1ba8:8.q = rbx_10

if (r14_2 != 0)
    r14_2[1].d += 1

if (&var_1ba8 != &rax_52[0x34])
    int128_t zmm1_9 = var_1ba8
    var_1ba8 = *(rax_52 + 0x1a0)
    rbx_10 = var_1ba8:8.q
    *(rax_52 + 0x1a0) = zmm1_9

if (rbx_10 != 0)
    rbx_10[1].d -= 1
    
    if (rbx_10[1].d == 1)
        (**rbx_10)(rbx_10)
        int32_t temp10_1 = *(rbx_10 + 0xc)
        *(rbx_10 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rbx_10 + 8))(rbx_10, 1)

int64_t* rbx_11 = rsi_3
var_1b68 = var_1b68
var_1b60.q = rbx_11

if (rsi_3 != 0)
    rsi_3[1].d += 1

if (&var_1b68 != &rax_52[0x36])
    var_1b68.o = *(rax_52 + 0x1b0)
    rbx_11 = var_1b60.q
    *(rax_52 + 0x1b0) = var_1b68.o

if (rbx_11 != 0)
    rbx_11[1].d -= 1
    
    if (rbx_11[1].d == 1)
        (**rbx_11)(rbx_11)
        int32_t temp12_1 = *(rbx_11 + 0xc)
        *(rbx_11 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*rbx_11 + 8))(rbx_11, 1)

var_1b40 = var_1b40

if (r15_1 != 0)
    r15_1[1].d += 1

if (&var_1b40 != &rax_52[0x38])
    var_1b40.o = *(rax_52 + 0x1c0)
    *(rax_52 + 0x1c0) = var_1b40.o

if (r15_1 != 0)
    r15_1[1].d -= 1
    
    if (r15_1[1].d == 1)
        (**r15_1)(r15_1)
        int32_t temp14_1 = *(r15_1 + 0xc)
        *(r15_1 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*r15_1 + 8))(r15_1, 1)

void*** rax_61 = sub_140f1d050()
var_1b60.q = rax_61
var_1b68 = &rax_61[2]
sub_140918950(&var_1b68, &rax_61[2])
int64_t var_1bd8_6 = 0x2e8
void var_1bb2
void* var_1b58 = &var_1bb2
int128_t zmm1_10 = sub_140e23ed0(&rax_61[2], "SScrollBarTrack")

if (rax_61 != 0)
    rax_61[1].d += 1

if (&arg1[0x9f] == &var_1bc8)
label_140f3a435:
    
    if (rax_61 != 0)
        rax_61[1].d -= 1
        
        if (rax_61[1].d == 1)
            (**rax_61)(rax_61)
            int32_t temp16_1 = *(rax_61 + 0xc)
            *(rax_61 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*rax_61)[1](rax_61, 1)
else
    arg1[0x9f] = &rax_61[2]
    void*** rdi_10 = arg1[0xa0]
    
    if (rax_61 == rdi_10)
        goto label_140f3a435
    
    arg1[0xa0] = rax_61
    
    if (rdi_10 != 0)
        rdi_10[1].d -= 1
        
        if (rdi_10[1].d == 1)
            (**rdi_10)(rdi_10)
            int32_t temp18_1 = *(rdi_10 + 0xc)
            *(rdi_10 + 0xc) -= 1
            
            if (temp18_1 == 1)
                (*rdi_10)[1](rdi_10, 1)

void* var_1930
void** rax_66 = sub_140f28060(&var_1b68, &var_1930, rax_52, zmm1_10)
var_1bc8.q = *rax_66
void* rcx_87 = rax_66[1]
var_1bc8:8.q = rcx_87

if (rcx_87 != 0)
    *(rcx_87 + 8) += 1

void var_6e0
int64_t* rax_67
int128_t zmm6_2
rax_67, zmm6_2 = sub_14068c640(&var_6e0)
rax_67[0x44] = var_1b88
rax_67[0x45].b = 1
sub_140692f90(&rax_67[0x46], &var_19e0)
rax_67[0x36].d = r14
*(rax_67 + 0x1b4) = r15
*(rax_67 + 0x1b8) = zmm6_2
rax_67[0x39].b = 1
sub_140692f90(&rax_67[0x3a], &var_1998)
void*** rax_71 = j_sub_140a82f30(0x4c8)
void*** rdi_11 = rax_71

if (rax_71 == 0)
    rdi_11 = nullptr
else
    rax_71[1].d = 1
    *(rax_71 + 0xc) = 1
    *rdi_11 = &data_142d8c5a0
    
    if (rdi_11 != -0x10)
        sub_140f20640(&rdi_11[2])

var_1b40 = &rdi_11[2]
sub_14065fa30(&var_1b40, &rdi_11[2])
int64_t var_1bd8_7 = 0x4b8
void var_1bb1
void* var_1b30 = &var_1bb1
void* rax_72
int128_t zmm1_12
rax_72, zmm1_12 = sub_1406936e0(rax_67, &var_1bc8, sub_140e23ed0(&rdi_11[2], "SBorder"))
void* var_1940
void** rax_73 = sub_140695920(&var_1b40, &var_1940, rax_72, zmm1_12)
int64_t* rbx_15 = rax_73[1]
var_1bc8.q = *rax_73
var_1bc8:8.q = rbx_15

if (rbx_15 != 0)
    rbx_15[1].d += 1

void*** rax_74 = j_sub_140a82f30(0x88)
void*** rdi_12 = rax_74

if (rax_74 == 0)
    rdi_12 = nullptr
else
    sub_14068e490(rax_74)
    *rdi_12 = &data_142d8add0

var_1ba8.d = 1
var_1ba8:8.d = 0x3f800000
var_1ba8:0xc.b = 1
int64_t var_1b98 = 0
int32_t var_1b90 = 0
sub_140692f90(&var_1b98, &var_1aa0)
int32_t zmm0_7 = var_1ba8:8.d
rdi_12[5].d = var_1ba8.d
*(rdi_12 + 0x34) = var_1ba8:0xc.b
rdi_12[6].d = zmm0_7
sub_140692f90(&rdi_12[7], &var_1b98)
sub_140745b20(&var_1b98)
sub_140693600(rdi_12, &var_1bc8)

if (rbx_15 != 0)
    rbx_15[1].d -= 1
    
    if (rbx_15[1].d == 1)
        (**rbx_15)(rbx_15)
        int32_t temp20_1 = *(rbx_15 + 0xc)
        *(rbx_15 + 0xc) -= 1
        
        if (temp20_1 == 1)
            (*(*rbx_15 + 8))(rbx_15, 1)

void var_1708
int64_t* rax_79 = sub_14068d420(&var_1708)
int64_t r13_2 = sx.q(rax_79[0x35].d)
int32_t rdx_43 = (r13_2 + 1).d
rax_79[0x35].d = rdx_43

if (rdx_43 s> *(rax_79 + 0x1ac))
    sub_140638870(&rax_79[0x34])

*(rax_79[0x34] + (r13_2 << 3)) = rdi_12
void*** rax_81 = j_sub_140a82f30(0x2e8)
void*** rdi_13 = rax_81

if (rax_81 == 0)
    rdi_13 = nullptr
else
    rax_81[1].d = 1
    *(rax_81 + 0xc) = 1
    *rdi_13 = &data_142d8c590
    
    if (rdi_13 != -0x10)
        sub_14068e550(&rdi_13[2])

var_1b88 = &rdi_13[2]
sub_14065fa30(&var_1b88, &rdi_13[2])
int64_t var_1bd8_8 = 0x2d8
void var_1bb0
void* var_1b78 = &var_1bb0
void* var_1960
void** rax_82 =
    sub_140696920(&var_1b88, &var_1960, rax_79, sub_140e23ed0(&rdi_13[2], "SVerticalBox"))
var_1bc8.q = *rax_82
void* rcx_111 = rax_82[1]
var_1bc8:8.q = rcx_111

if (rcx_111 != 0)
    *(rcx_111 + 8) += 1

void var_a28
int64_t* rax_83
int128_t zmm1_14
rax_83, zmm1_14 = sub_14068c640(&var_a28)
rax_83[0x44] = rax_51
rax_83[0x45].b = 1
sub_140692f90(&rax_83[0x46], &var_1a00)
*(rax_83 + 0x1b8) = *(arg2 + 0x1e8)
rax_83[0x39].b = *(arg2 + 0x1f8)
sub_140692f90(&rax_83[0x3a], arg2 + 0x200)
sub_140f33710(arg1, sub_1406936e0(rax_83, &var_1bc8, zmm1_14))
sub_14068fed0(&var_a28)
int64_t* var_1958

if (var_1958 != 0)
    var_1958[1].d -= 1
    
    if (var_1958[1].d == 1)
        (**var_1958)(var_1958)
        int32_t temp23_1 = *(var_1958 + 0xc)
        *(var_1958 + 0xc) -= 1
        
        if (temp23_1 == 1)
            (*(*var_1958 + 8))(var_1958, 1)

if (rdi_13 != 0)
    rdi_13[1].d -= 1
    
    if (rdi_13[1].d == 1)
        (**rdi_13)(rdi_13)
        int32_t temp24_1 = *(rdi_13 + 0xc)
        *(rdi_13 + 0xc) -= 1
        
        if (temp24_1 == 1)
            (*rdi_13)[1](rdi_13, 1)

int64_t var_1568

if (var_1568 != 0)
    sub_140a74f90(var_1568)

sub_140660250(&var_1708)
int64_t* var_1938

if (var_1938 != 0)
    var_1938[1].d -= 1
    
    if (var_1938[1].d == 1)
        (**var_1938)(var_1938)
        int32_t temp27_1 = *(var_1938 + 0xc)
        *(var_1938 + 0xc) -= 1
        
        if (temp27_1 == 1)
            (*(*var_1938 + 8))(var_1938, 1)

if (rdi_11 != 0)
    rdi_11[1].d -= 1
    
    if (rdi_11[1].d == 1)
        (**rdi_11)(rdi_11)
        int32_t temp29_1 = *(rdi_11 + 0xc)
        *(rdi_11 + 0xc) -= 1
        
        if (temp29_1 == 1)
            (*rdi_11)[1](rdi_11, 1)

sub_14068fed0(&var_6e0)
int64_t* var_1928

if (var_1928 != 0)
    var_1928[1].d -= 1
    
    if (var_1928[1].d == 1)
        (**var_1928)(var_1928)
        int32_t temp31_1 = *(var_1928 + 0xc)
        *(var_1928 + 0xc) -= 1
        
        if (temp31_1 == 1)
            (*(*var_1928 + 8))(var_1928, 1)

int64_t* rbx_23 = var_1b60.q

if (rbx_23 != 0)
    rbx_23[1].d -= 1
    
    if (rbx_23[1].d == 1)
        (**rbx_23)(rbx_23)
        int32_t temp33_1 = *(rbx_23 + 0xc)
        *(rbx_23 + 0xc) -= 1
        
        if (temp33_1 == 1)
            (*(*rbx_23 + 8))(rbx_23, 1)

int64_t* var_1718

if (var_1718 != 0)
    var_1718[1].d -= 1
    
    if (var_1718[1].d == 1)
        (**var_1718)(var_1718)
        int32_t temp35_1 = *(var_1718 + 0xc)
        *(var_1718 + 0xc) -= 1
        
        if (temp35_1 == 1)
            (*(*var_1718 + 8))(var_1718, 1)

int64_t* var_1728

if (var_1728 != 0)
    var_1728[1].d -= 1
    
    if (var_1728[1].d == 1)
        (**var_1728)(var_1728)
        int32_t temp37_1 = *(var_1728 + 0xc)
        *(var_1728 + 0xc) -= 1
        
        if (temp37_1 == 1)
            (*(*var_1728 + 8))(var_1728, 1)

int64_t* var_1738

if (var_1738 != 0)
    var_1738[1].d -= 1
    
    if (var_1738[1].d == 1)
        (**var_1738)(var_1738)
        int32_t temp39_1 = *(var_1738 + 0xc)
        *(var_1738 + 0xc) -= 1
        
        if (temp39_1 == 1)
            (*(*var_1738 + 8))(var_1738, 1)

sub_140ddea30(&var_18e0)
sub_140745b20(&var_1a00)
sub_140745b20(&var_1aa0)
sub_140745b20(&var_19e0)
sub_140745b20(&var_1998)

if (r14_2 != 0)
    r14_2[1].d -= 1
    
    if (r14_2[1].d == 1)
        (**r14_2)(r14_2)
        int32_t temp41_1 = *(r14_2 + 0xc)
        *(r14_2 + 0xc) -= 1
        
        if (temp41_1 == 1)
            (*(*r14_2 + 8))(r14_2, 1)

int64_t* var_1918

if (var_1918 != 0)
    var_1918[1].d -= 1
    
    if (var_1918[1].d == 1)
        (**var_1918)(var_1918)
        int32_t temp43_1 = *(var_1918 + 0xc)
        *(var_1918 + 0xc) -= 1
        
        if (temp43_1 == 1)
            (*(*var_1918 + 8))(var_1918, 1)

if (rdi_7 != 0)
    rdi_7[1].d -= 1
    
    if (rdi_7[1].d == 1)
        (**rdi_7)(rdi_7)
        int32_t temp45_1 = *(rdi_7 + 0xc)
        *(rdi_7 + 0xc) -= 1
        
        if (temp45_1 == 1)
            (*rdi_7)[1](rdi_7, 1)

sub_140690290(&var_f68)
int64_t* var_1908

if (var_1908 != 0)
    var_1908[1].d -= 1
    
    if (var_1908[1].d == 1)
        (**var_1908)(var_1908)
        int32_t temp47_1 = *(var_1908 + 0xc)
        *(var_1908 + 0xc) -= 1
        
        if (temp47_1 == 1)
            (*(*var_1908 + 8))(var_1908, 1)

int64_t* rbx_30 = var_1b20.q

if (rbx_30 != 0)
    rbx_30[1].d -= 1
    
    if (rbx_30[1].d == 1)
        (**rbx_30)(rbx_30)
        int32_t temp49_1 = *(rbx_30 + 0xc)
        *(rbx_30 + 0xc) -= 1
        
        if (temp49_1 == 1)
            (*(*rbx_30 + 8))(rbx_30, 1)

sub_140e536f0(&var_1398)
sub_140745b20(&var_1ac8)

if (rsi_3 != 0)
    rsi_3[1].d -= 1
    
    if (rsi_3[1].d == 1)
        (**rsi_3)(rsi_3)
        int32_t temp51_1 = *(rsi_3 + 0xc)
        *(rsi_3 + 0xc) -= 1
        
        if (temp51_1 == 1)
            (*(*rsi_3 + 8))(rsi_3, 1)

int64_t* var_18e8

if (var_18e8 != 0)
    var_18e8[1].d -= 1
    
    if (var_18e8[1].d == 1)
        (**var_18e8)(var_18e8)
        int32_t temp53_1 = *(var_18e8 + 0xc)
        *(var_18e8 + 0xc) -= 1
        
        if (temp53_1 == 1)
            (*(*var_18e8 + 8))(var_18e8, 1)

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp55_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp55_1 == 1)
            (*rbx_4)[1](rbx_4, 1)

sub_14068fed0(&var_398)
int64_t* var_18f8

if (var_18f8 != 0)
    var_18f8[1].d -= 1
    
    if (var_18f8[1].d == 1)
        (**var_18f8)(var_18f8)
        int32_t temp57_1 = *(var_18f8 + 0xc)
        *(var_18f8 + 0xc) -= 1
        
        if (temp57_1 == 1)
            (*(*var_18f8 + 8))(var_18f8, 1)

if (rax_16 != 0)
    rax_16[1].d -= 1
    
    if (rax_16[1].d == 1)
        (**rax_16)(rax_16)
        int32_t temp59_1 = *(rax_16 + 0xc)
        *(rax_16 + 0xc) -= 1
        
        if (temp59_1 == 1)
            (*rax_16)[1](rax_16, 1)

void var_13a8
sub_140745b20(&var_13a8)
sub_140ddea30(&var_1558)
sub_140745b20(&var_1970)

if (r15_1 != 0)
    r15_1[1].d -= 1
    
    if (r15_1[1].d == 1)
        (**r15_1)(r15_1)
        int32_t temp61_1 = *(r15_1 + 0xc)
        *(r15_1 + 0xc) -= 1
        
        if (temp61_1 == 1)
            (*(*r15_1 + 8))(r15_1, 1)

int64_t* var_1948

if (var_1948 != 0)
    var_1948[1].d -= 1
    
    if (var_1948[1].d == 1)
        (**var_1948)(var_1948)
        int32_t temp63_1 = *(var_1948 + 0xc)
        *(var_1948 + 0xc) -= 1
        
        if (temp63_1 == 1)
            (*(*var_1948 + 8))(var_1948, 1)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp65_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp65_1 == 1)
            (*rdi_1)[1](rdi_1, 1)

sub_140690290(&var_cc8)
int64_t* var_1b00
int64_t* rbx_37 = var_1b00

if (rbx_37 != 0)
    rbx_37[1].d -= 1
    
    if (rbx_37[1].d == 1)
        (**rbx_37)(rbx_37)
        int32_t temp66_1 = *(rbx_37 + 0xc)
        *(rbx_37 + 0xc) -= 1
        
        if (temp66_1 == 1)
            (*(*rbx_37 + 8))(rbx_37, 1)

sub_140597060(&var_1a40)
sub_140e536f0(&var_1180)
sub_140745b20(&var_19c0)
int64_t* rbx_38 = arg1[0xa0]
int128_t* (* rsi_4)(int64_t* arg1, int128_t* arg2) = arg1[0x9f]
var_1bc8.q = sub_140f4a620
var_1bc8:8.d = 0
var_1ae8 = rsi_4
var_1ae0.q = rbx_38

if (rbx_38 != 0)
    rbx_38[1].d += 1

var_1b08 = 0x100
var_1b00 = nullptr
int32_t var_1af8 = 0

if (rbx_38 != 0)
    rbx_38[1].d += 1

void*** rax_132 = sub_1405978f0(0x38, &var_1b00)

if (rax_132 != 0)
    *rax_132 = &data_142ede5b8
    rax_132[1] = rsi_4
    rax_132[2] = rbx_38
    
    if (rbx_38 != 0)
        *(rbx_38 + 0xc) += 1
    
    *(rax_132 + 0x18) = var_1bc8
    rax_132[6] = sub_140a387b0()

if (rbx_38 != 0)
    rbx_38[1].d -= 1
    
    if (rbx_38[1].d == 1)
        (**rbx_38)(rbx_38)
        int32_t temp68_1 = *(rbx_38 + 0xc)
        *(rbx_38 + 0xc) -= 1
        
        if (temp68_1 == 1)
            (*(*rbx_38 + 8))(rbx_38, 1)

sub_140597060(&var_1ae8)
arg1[0x32].b = var_1b08.b
*(arg1 + 0x191) = var_1b08:1.b
sub_1407473e0(&arg1[0x33], &var_1b00)
sub_140745b20(&var_1b00)
sub_140f607e0(arg1, *(arg2 + 0x1b8))
char result = *(arg2 + 0x1b9)
*(arg1 + 0x521) = result
__security_check_cookie(rax_1 ^ &var_1bf8)
return result
