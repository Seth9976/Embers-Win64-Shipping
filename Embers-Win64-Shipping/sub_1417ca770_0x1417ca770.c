// 函数: sub_1417ca770
// 地址: 0x1417ca770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_78 = 0
int64_t var_70 = 0
sub_1405947f0(&var_78, 0xd)
int32_t rsi = var_70:4.d
int32_t rbx = var_70.d + 0xd
var_70.d = rbx

if (rbx s> rsi)
    sub_140594770(&var_78)
    rsi = var_70:4.d
    rbx = var_70.d

uint64_t r15 = var_78
sub_1405a7220(r15, 0xd, "PxFoundation", 0xd, 0x3f)
int32_t rdi = (data_143ef8718.q).d
uint64_t rdi_1

if (rdi s> 1)
    int32_t rbx_1
    
    if (rbx == 0)
        rbx_1 = 0
    else
        rbx_1 = rbx - 1
    
    int32_t rax_1
    
    if (rdi == 0)
        rax_1 = 1
    
    if (rdi != 0 || rbx_1 == 0)
        rax_1 = 0
    
    int64_t rsi_1 = data_143ef8710
    int32_t rcx_3 = rax_1 + rbx_1
    var_78 = 0
    var_70.d = rdi
    
    if (rdi != 0 || rcx_3 != 0)
        sub_1405a4c70(&var_78, rcx_3 + rdi, 0)
        memcpy(var_78, rsi_1, rdi * 2)
    else
        var_70:4.d = 0
    
    sub_140a20ba0(&var_78, r15, rbx_1)
    rdi_1 = var_78
    rbx = var_70.d
    rsi = var_70:4.d
    var_78 = 0
    var_70 = 0
else
    rdi_1 = r15
    r15 = 0

uint64_t var_68
int32_t var_60
int32_t var_5c
uint64_t var_58
int32_t var_4c
uint64_t rbx_3

if (rbx s> 1)
    int32_t rax_2 = (data_143ef8748.q).d
    int32_t r14_1 = rax_2 - 1
    
    if (rax_2 == 0)
        r14_1 = 0
    
    int32_t rax_3
    
    if (rbx == 0)
        rax_3 = 1
    
    if (rbx != 0 || r14_1 == 0)
        rax_3 = 0
    
    var_68 = rdi_1
    int32_t rdx_7 = rbx + rax_3 + r14_1
    var_5c = rsi
    
    if (rdx_7 s> rsi)
        sub_1405947f0(&var_68, rdx_7)
    
    sub_140a20ba0(&var_68, data_143ef8740, r14_1)
    rdi_1 = 0
    rbx_3 = var_68
    int32_t var_50_1 = rbx
    var_4c = var_5c
    var_60.q = 0
    var_58 = rbx_3
    var_68 = 0
else
    int32_t rbx_2 = (data_143ef8748.q).d
    int64_t rsi_2 = data_143ef8740
    var_58 = 0
    int32_t var_50 = rbx_2
    
    if (rbx_2 != 0)
        sub_1405a4c70(&var_58, rbx_2, 0)
        rbx_3 = var_58
        memcpy(rbx_3, rsi_2, rbx_2 * 2)
    else
        var_4c = 0
        rbx_3 = 0

data_143ef8560 = sub_1417cb960(&var_58)

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

if (r15 != 0)
    sub_140a74f90(r15)

var_68 = 0
var_60.q = 0
sub_1405947f0(&var_68, 0xd)
int32_t rsi_3 = var_5c
int32_t rbx_4 = var_60 + 0xd

if (rbx_4 s> rsi_3)
    sub_140594770(&var_68)
    rsi_3 = var_5c

uint64_t r14_2 = var_68
sub_1405a7220(r14_2, 0xd, "PhysX3Common", 0xd, 0x3f)
int32_t rdi_2 = (data_143ef86f8.q).d
uint64_t rdi_3

if (rdi_2 s> 1)
    int32_t rbx_5
    
    if (rbx_4 == 0)
        rbx_5 = 0
    else
        rbx_5 = rbx_4 - 1
    
    int32_t rax_7
    
    if (rdi_2 == 0)
        rax_7 = 1
    
    if (rdi_2 != 0 || rbx_5 == 0)
        rax_7 = 0
    
    int64_t rsi_4 = data_143ef86f0
    int32_t rcx_18 = rax_7 + rbx_5
    var_78 = 0
    var_70.d = rdi_2
    
    if (rdi_2 != 0 || rcx_18 != 0)
        sub_1405a4c70(&var_78, rcx_18 + rdi_2, 0)
        memcpy(var_78, rsi_4, rdi_2 * 2)
    else
        var_70:4.d = 0
    
    sub_140a20ba0(&var_78, r14_2, rbx_5)
    rdi_3 = var_78
    rbx_4 = var_70.d
    rsi_3 = var_70:4.d
    var_78 = 0
    var_70 = 0
else
    rdi_3 = r14_2
    r14_2 = 0

int32_t var_60_1
int32_t var_50_2
uint64_t rbx_7

if (rbx_4 s> 1)
    int32_t rax_8 = (data_143ef8748.q).d
    int32_t r15_1 = rax_8 - 1
    
    if (rax_8 == 0)
        r15_1 = 0
    
    int32_t rax_9
    
    if (rbx_4 == 0)
        rax_9 = 1
    
    if (rbx_4 != 0 || r15_1 == 0)
        rax_9 = 0
    
    var_68 = rdi_3
    int32_t rdx_16 = rbx_4 + r15_1 + rax_9
    var_5c = rsi_3
    
    if (rdx_16 s> rsi_3)
        sub_1405947f0(&var_68, rdx_16)
    
    sub_140a20ba0(&var_68, data_143ef8740, r15_1)
    rdi_3 = 0
    rbx_7 = var_68
    var_50_2 = rbx_4
    var_4c = var_5c
    var_60_1.q = 0
    var_58 = rbx_7
    var_68 = 0
else
    int32_t rbx_6 = (data_143ef8748.q).d
    int64_t rsi_5 = data_143ef8740
    var_58 = 0
    var_50_2 = rbx_6
    
    if (rbx_6 != 0)
        sub_1405a4c70(&var_58, rbx_6, 0)
        rbx_7 = var_58
        memcpy(rbx_7, rsi_5, rbx_6 * 2)
    else
        var_4c = 0
        rbx_7 = 0

data_143ef8568 = sub_1417cb960(&var_58)

if (rbx_7 != 0)
    sub_140a74f90(rbx_7)

if (rdi_3 != 0)
    sub_140a74f90(rdi_3)

if (r14_2 != 0)
    sub_140a74f90(r14_2)

var_58 = 0
var_50_2.q = 0
sub_1405947f0(&var_58, 7)
int32_t rdi_4 = var_50_2 + 7

if (rdi_4 s> var_4c)
    sub_140594770(&var_58)

uint64_t r12 = var_58
sub_1405a7220(r12, 7, "_1.dll", 7, 0x3f)
var_68 = 0
var_60_1.q = 0
sub_1405947f0(&var_68, 0xb)
int32_t r14_3 = var_5c
int32_t rbx_8 = var_60_1 + 0xb

if (rbx_8 s> r14_3)
    sub_140594770(&var_68)
    r14_3 = var_5c

uint64_t r13 = var_68
sub_1405a7220(r13, 0xb, "nvToolsExt", 0xb, 0x3f)
int32_t rsi_6 = (data_143ef86f8.q).d
uint64_t r15_2

if (rsi_6 s> 1)
    int32_t rbx_9
    
    if (rbx_8 == 0)
        rbx_9 = 0
    else
        rbx_9 = rbx_8 - 1
    
    int32_t rax_13
    
    if (rsi_6 != 0 || rbx_9 == 0)
        rax_13 = 0
    else
        rax_13 = rsi_6 + 1
    
    int64_t r14_4 = data_143ef86f0
    int32_t rcx_36 = rbx_9 + rax_13
    var_78 = 0
    var_70.d = rsi_6
    
    if (rsi_6 != 0 || rcx_36 != 0)
        sub_1405a4c70(&var_78, rcx_36 + rsi_6, 0)
        memcpy(var_78, r14_4, rsi_6 * 2)
    else
        var_70:4.d = rcx_36
    
    sub_140a20ba0(&var_78, r13, rbx_9)
    r15_2 = var_78
    rbx_8 = var_70.d
    r14_3 = var_70:4.d
    var_78 = 0
    var_70 = 0
else
    r15_2 = r13
    r13 = 0

uint64_t var_38
uint64_t rcx_40
int32_t rbx_10
uint64_t rsi_7
int32_t r8_16

if (rbx_8 s> 1)
    int32_t rax_14 = (data_143ef8738.q).d
    int32_t rsi_8 = rax_14 - 1
    
    if (rax_14 == 0)
        rsi_8 = 0
    
    int32_t rax_15
    
    if (rbx_8 == 0)
        rax_15 = rbx_8 + 1
    
    if (rbx_8 != 0 || rsi_8 == 0)
        rax_15 = 0
    
    var_68 = r15_2
    r15_2 = 0
    int32_t rdx_26 = rbx_8 + rsi_8 + rax_15
    var_5c = r14_3
    
    if (rdx_26 s> r14_3)
        sub_1405947f0(&var_68, rdx_26)
    
    sub_140a20ba0(&var_68, data_143ef8730, rsi_8)
    rsi_7 = var_68
    rbx_10 = rbx_8
    r8_16 = var_5c
    var_68 = 0
    int32_t var_60_3
    var_60_3.q = 0
    rcx_40 = rsi_7
else
    rbx_10 = (data_143ef8738.q).d
    rsi_7 = 0
    int64_t r14_5 = data_143ef8730
    var_38 = 0
    
    if (rbx_10 != 0)
        sub_1405a4c70(&var_38, rbx_10, 0)
        rsi_7 = var_38
        memcpy(rsi_7, r14_5, rbx_10 * 2)
        int32_t var_2c
        r8_16 = var_2c
        rcx_40 = rsi_7
    else
        r8_16 = 0
        rcx_40 = 0

uint64_t rbx_11

if (rbx_10 s> 1)
    int32_t rdi_5
    
    if (rdi_4 == 0)
        rdi_5 = 0
    else
        rdi_5 = rdi_4 - 1
    
    int32_t rax_17
    
    if (rbx_10 == 0)
        rax_17 = rbx_10 + 1
    
    if (rbx_10 != 0 || rdi_5 == 0)
        rax_17 = 0
    
    var_58 = rsi_7
    int32_t rdx_29 = rax_17 + rdi_5 + rbx_10
    var_4c = r8_16
    
    if (rdx_29 s> r8_16)
        sub_1405947f0(&var_58, rdx_29)
    
    sub_140a20ba0(&var_58, r12, rdi_5)
    uint64_t rdx_31 = var_58
    rdi_4 = rbx_10
    rbx_11 = rdx_31
    var_38 = rdx_31
    int32_t var_30_3 = rdi_4
    int32_t var_2c_2 = var_4c
else
    rbx_11 = r12
    var_38 = r12
    r12 = 0
    int32_t var_2c_1 = var_4c
    int32_t var_30_2 = rdi_4
    
    if (rcx_40 != 0)
        sub_140a74f90(rcx_40)

if (r15_2 != 0)
    sub_140a74f90(r15_2)

if (r13 != 0)
    sub_140a74f90(r13)

if (r12 != 0)
    sub_140a74f90(r12)

sub_140a464c0()
uint64_t rdx_32 = &data_142d40450

if (rdi_4 != 0)
    rdx_32 = rbx_11

char const (* r8_21)[0x4] = data_14399ea08
char rax_19 = (*(r8_21 + 0x48))(&data_14399ea08, rdx_32, r8_21)

if (rax_19 != 0)
    data_143ef8588 = sub_1417cb960(&var_38)

var_58 = 0
int32_t var_50_3
var_50_3.q = 0
sub_1405947f0(&var_58, 9)
int32_t rsi_9 = var_4c
int32_t rbx_12 = var_50_3 + 9

if (rbx_12 s> rsi_9)
    sub_140594770(&var_58)
    rsi_9 = var_4c

uint64_t r15_3 = var_58
sub_1405a7220(r15_3, 9, "PxPvdSDK", 9, 0x3f)
int32_t rdi_6 = (data_143ef8718.q).d
uint64_t r14_6

if (rdi_6 s> 1)
    int32_t rbx_13
    
    if (rbx_12 == 0)
        rbx_13 = 0
    else
        rbx_13 = rbx_12 - 1
    
    int32_t rax_21
    
    if (rdi_6 == 0)
        rax_21 = rdi_6 + 1
    
    if (rdi_6 != 0 || rbx_13 == 0)
        rax_21 = 0
    
    int64_t rsi_10 = data_143ef8710
    int32_t rcx_54 = rax_21 + rbx_13
    var_78 = 0
    var_70.d = rdi_6
    
    if (rdi_6 != 0 || rcx_54 != 0)
        sub_1405a4c70(&var_78, rcx_54 + rdi_6, 0)
        memcpy(var_78, rsi_10, rdi_6 * 2)
    else
        var_70:4.d = 0
    
    sub_140a20ba0(&var_78, r15_3, rbx_13)
    r14_6 = var_78
    rbx_12 = var_70.d
    rsi_9 = var_70:4.d
    var_78 = 0
    var_70 = 0
else
    r14_6 = r15_3
    r15_3 = 0

int32_t var_60_4
int32_t var_50_4
uint64_t rbx_15

if (rbx_12 s> 1)
    int32_t rax_22 = (data_143ef8748.q).d
    int32_t rdi_8 = rax_22 - 1
    
    if (rax_22 == 0)
        rdi_8 = 0
    
    int32_t rax_23
    
    if (rbx_12 == 0)
        rax_23 = rbx_12 + 1
    
    if (rbx_12 != 0 || rdi_8 == 0)
        rax_23 = 0
    
    var_58 = r14_6
    int32_t rdx_40 = rdi_8 + rbx_12 + rax_23
    var_4c = rsi_9
    
    if (rdx_40 s> rsi_9)
        sub_1405947f0(&var_58, rdx_40)
    
    sub_140a20ba0(&var_58, data_143ef8740, rdi_8)
    r14_6 = 0
    rbx_15 = var_58
    var_60_4 = rbx_12
    var_5c = var_4c
    var_50_4.q = 0
    var_68 = rbx_15
    var_58 = 0
else
    int32_t rbx_14 = (data_143ef8748.q).d
    int64_t rdi_7 = data_143ef8740
    var_68 = 0
    var_60_4 = rbx_14
    
    if (rbx_14 != 0)
        sub_1405a4c70(&var_68, rbx_14, 0)
        rbx_15 = var_68
        memcpy(rbx_15, rdi_7, rbx_14 * 2)
    else
        var_5c = 0
        rbx_15 = 0

data_143ef8578 = sub_1417cb960(&var_68)

if (rbx_15 != 0)
    sub_140a74f90(rbx_15)

if (r14_6 != 0)
    sub_140a74f90(r14_6)

if (r15_3 != 0)
    sub_140a74f90(r15_3)

var_58 = 0
var_50_4.q = 0
sub_1405947f0(&var_58, 7)
int32_t r14_7 = var_4c
int32_t rbx_16 = var_50_4 + 7

if (rbx_16 s> r14_7)
    sub_140594770(&var_58)
    r14_7 = var_4c

uint64_t rsi_11 = var_58
sub_1405a7220(rsi_11, 7, "PhysX3", 7, 0x3f)
int32_t rdi_9 = (data_143ef86f8.q).d
uint64_t var_48
int32_t var_3c
uint64_t rdi_10

if (rdi_9 s> 1)
    int32_t rbx_17
    
    if (rbx_16 == 0)
        rbx_17 = 0
    else
        rbx_17 = rbx_16 - 1
    
    int32_t rax_27
    
    if (rdi_9 == 0)
        rax_27 = rdi_9 + 1
    
    if (rdi_9 != 0 || rbx_17 == 0)
        rax_27 = 0
    
    int64_t r14_8 = data_143ef86f0
    int32_t rcx_69 = rax_27 + rbx_17
    var_78 = 0
    var_70.d = rdi_9
    
    if (rdi_9 != 0 || rcx_69 != 0)
        sub_1405a4c70(&var_78, rcx_69 + rdi_9, 0)
        memcpy(var_78, r14_8, rdi_9 * 2)
    else
        var_70:4.d = 0
    
    sub_140a20ba0(&var_78, rsi_11, rbx_17)
    rdi_10 = var_78
    rbx_16 = var_70.d
    var_48 = rdi_10
    var_3c = var_70:4.d
    var_70 = 0
    var_78 = 0
else
    rdi_10 = rsi_11
    var_48 = rsi_11
    rsi_11 = 0
    var_3c = r14_7

int32_t var_40 = rbx_16
int32_t var_50_6
uint64_t rbx_19

if (rbx_16 s> 1)
    int32_t rax_29 = (data_143ef8748.q).d
    int32_t rdi_11 = rax_29 - 1
    
    if (rax_29 == 0)
        rdi_11 = 0
    
    int32_t rax_30
    
    if (rbx_16 == 0)
        rax_30 = rbx_16 + 1
    
    if (rbx_16 != 0 || rdi_11 == 0)
        rax_30 = 0
    
    sub_140596690(&var_68, &var_48, rax_30 + rdi_11)
    sub_140a20ba0(&var_68, data_143ef8740, rdi_11)
    rbx_19 = var_68
    rdi_10 = var_48
    var_50_6 = var_60_4
    var_4c = var_5c
    var_60_4.q = 0
    var_58 = rbx_19
    var_68 = 0
else
    int32_t rbx_18 = (data_143ef8748.q).d
    int64_t r14_9 = data_143ef8740
    var_58 = 0
    var_50_6 = rbx_18
    
    if (rbx_18 != 0)
        sub_1405a4c70(&var_58, rbx_18, 0)
        rbx_19 = var_58
        memcpy(rbx_19, r14_9, rbx_18 * 2)
    else
        var_4c = 0
        rbx_19 = 0

data_143ef8570 = sub_1417cb960(&var_58)

if (rbx_19 != 0)
    sub_140a74f90(rbx_19)

if (rdi_10 != 0)
    sub_140a74f90(rdi_10)

if (rsi_11 != 0)
    sub_140a74f90(rsi_11)

if (arg1 != 0)
    var_58 = 0
    var_50_6.q = 0
    sub_1405947f0(&var_58, 0xe)
    int32_t r14_10 = var_4c
    int32_t rbx_20 = var_50_6 + 0xe
    var_50_6 = rbx_20
    
    if (rbx_20 s> r14_10)
        sub_140594770(&var_58)
        r14_10 = var_4c
        rbx_20 = var_50_6
    
    uint64_t rsi_12 = var_58
    int16_t var_88_1 = 0x3f
    sub_1405a7220(rsi_12, 0xe, "PhysX3Cooking", 0xe, 0x3f)
    int32_t rcx_84 = (data_143ef86f8.q).d
    uint64_t rdi_12
    
    if (rcx_84 s> 1)
        int32_t rbx_21
        
        if (rbx_20 == 0)
            rbx_21 = 0
        else
            rbx_21 = rbx_20 - 1
        
        int32_t rax_34
        
        if (rcx_84 == 0)
            rax_34 = rcx_84 + 1
        
        if (rcx_84 != 0 || rbx_21 == 0)
            rax_34 = 0
        
        int64_t rdx_51 = data_143ef86f0
        var_88_1.d = rax_34 + rbx_21
        var_58 = 0
        sub_140596860(&var_58, rdx_51, rcx_84, 0, 0x3f)
        sub_140a20ba0(&var_58, rsi_12, rbx_21)
        rdi_12 = var_58
        rbx_20 = var_50_6
        var_78 = rdi_12
        var_70:4.d = var_4c
        var_50_6.q = 0
        var_58 = 0
    else
        rdi_12 = rsi_12
        var_78 = rsi_12
        rsi_12 = 0
        var_70:4.d = r14_10
    
    var_70.d = rbx_20
    uint64_t rbx_23
    
    if (rbx_20 s> 1)
        int32_t rax_37 = (data_143ef8748.q).d
        int32_t rdi_13 = rax_37 - 1
        
        if (rax_37 == 0)
            rdi_13 = 0
        
        int32_t rax_38
        
        if (rbx_20 == 0)
            rax_38 = rbx_20 + 1
        
        if (rbx_20 != 0 || rdi_13 == 0)
            rax_38 = 0
        
        sub_140596690(&var_48, &var_78, rax_38 + rdi_13)
        sub_140a20ba0(&var_48, data_143ef8740, rdi_13)
        rbx_23 = var_48
        rdi_12 = var_78
        int32_t var_60_6 = var_40
        int32_t var_5c_2 = var_3c
        var_40.q = 0
        var_68 = rbx_23
        var_48 = 0
    else
        int32_t rbx_22 = (data_143ef8748.q).d
        int64_t r14_11 = data_143ef8740
        var_68 = 0
        int32_t var_60_5 = rbx_22
        
        if (rbx_22 != 0)
            sub_1405a4c70(&var_68, rbx_22, 0)
            rbx_23 = var_68
            memcpy(rbx_23, r14_11, rbx_22 * 2)
        else
            int32_t var_5c_1 = 0
            rbx_23 = 0
    
    data_143ef8580 = sub_1417cb960(&var_68)
    
    if (rbx_23 != 0)
        sub_140a74f90(rbx_23)
    
    if (rdi_12 != 0)
        sub_140a74f90(rdi_12)
    
    if (rsi_12 != 0)
        sub_140a74f90(rsi_12)

var_58 = 0
var_50_6.q = 0
sub_1405947f0(&var_58, 0xe)
int32_t r14_12 = var_4c
int32_t rbx_24 = var_50_6 + 0xe
int32_t var_50_7 = rbx_24

if (rbx_24 s> r14_12)
    sub_140594770(&var_58)
    r14_12 = var_4c
    rbx_24 = var_50_7

uint64_t rsi_13 = var_58
int16_t var_88_2 = 0x3f
sub_1405a7220(rsi_13, 0xe, "APEXFramework", 0xe, 0x3f)
int32_t rcx_98 = (data_143ef8708.q).d
uint64_t rdi_14

if (rcx_98 s> 1)
    int32_t rbx_25
    
    if (rbx_24 == 0)
        rbx_25 = 0
    else
        rbx_25 = rbx_24 - 1
    
    int32_t rax_42
    
    if (rcx_98 == 0)
        rax_42 = rcx_98 + 1
    
    if (rcx_98 != 0 || rbx_25 == 0)
        rax_42 = 0
    
    int64_t rdx_58 = data_143ef8700
    var_88_2.d = rax_42 + rbx_25
    var_58 = 0
    sub_140596860(&var_58, rdx_58, rcx_98, 0, 0x3f)
    sub_140a20ba0(&var_58, rsi_13, rbx_25)
    rdi_14 = var_58
    rbx_24 = var_50_7
    var_78 = rdi_14
    var_70:4.d = var_4c
    var_50_7.q = 0
    var_58 = 0
else
    rdi_14 = rsi_13
    var_78 = rsi_13
    rsi_13 = 0
    var_70:4.d = r14_12

var_70.d = rbx_24
uint64_t rbx_27

if (rbx_24 s> 1)
    int32_t rax_45 = (data_143ef8758.q).d
    int32_t rdi_15 = rax_45 - 1
    
    if (rax_45 == 0)
        rdi_15 = 0
    
    int32_t rax_46
    
    if (rbx_24 == 0)
        rax_46 = rbx_24 + 1
    
    if (rbx_24 != 0 || rdi_15 == 0)
        rax_46 = 0
    
    sub_140596690(&var_48, &var_78, rdi_15 + rax_46)
    sub_140a20ba0(&var_48, data_143ef8750, rdi_15)
    rbx_27 = var_48
    rdi_14 = var_78
    int32_t var_60_8 = var_40
    int32_t var_5c_4 = var_3c
    var_40.q = 0
    var_68 = rbx_27
    var_48 = 0
else
    int32_t rbx_26 = (data_143ef8758.q).d
    int64_t r14_13 = data_143ef8750
    var_68 = 0
    int32_t var_60_7 = rbx_26
    
    if (rbx_26 != 0)
        sub_1405a4c70(&var_68, rbx_26, 0)
        rbx_27 = var_68
        memcpy(rbx_27, r14_13, rbx_26 * 2)
    else
        int32_t var_5c_3 = 0
        rbx_27 = 0

data_143ef8590 = sub_1417cb960(&var_68)

if (rbx_27 != 0)
    sub_140a74f90(rbx_27)

if (rdi_14 != 0)
    sub_140a74f90(rdi_14)

if (rsi_13 != 0)
    sub_140a74f90(rsi_13)

var_58 = 0
var_50_7.q = 0
sub_1405947f0(&var_58, 0xc)
int32_t r14_14 = var_4c
int32_t rbx_28 = var_50_7 + 0xc
int32_t var_50_8 = rbx_28

if (rbx_28 s> r14_14)
    sub_140594770(&var_58)
    r14_14 = var_4c
    rbx_28 = var_50_8

uint64_t rsi_14 = var_58
int16_t var_88_3 = 0x3f
sub_1405a7220(rsi_14, 0xc, "APEX_Legacy", 0xc, 0x3f)
int32_t rcx_112 = (data_143ef8708.q).d
uint64_t rdi_16

if (rcx_112 s> 1)
    int32_t rbx_29
    
    if (rbx_28 == 0)
        rbx_29 = 0
    else
        rbx_29 = rbx_28 - 1
    
    int32_t rax_50
    
    if (rcx_112 == 0)
        rax_50 = rcx_112 + 1
    
    if (rcx_112 != 0 || rbx_29 == 0)
        rax_50 = 0
    
    int64_t rdx_65 = data_143ef8700
    var_88_3.d = rax_50 + rbx_29
    var_58 = 0
    sub_140596860(&var_58, rdx_65, rcx_112, 0, 0x3f)
    sub_140a20ba0(&var_58, rsi_14, rbx_29)
    rdi_16 = var_58
    rbx_28 = var_50_8
    var_68 = rdi_16
    int32_t var_5c_6 = var_4c
    var_50_8.q = 0
    var_58 = 0
else
    rdi_16 = rsi_14
    var_68 = rsi_14
    rsi_14 = 0
    int32_t var_5c_5 = r14_14

int32_t var_60_9 = rbx_28
uint64_t rbx_30

if (rbx_28 s> 1)
    int32_t rax_53 = (data_143ef8758.q).d
    int32_t rdi_17 = rax_53 - 1
    
    if (rax_53 == 0)
        rdi_17 = 0
    
    int32_t rax_54
    
    if (rbx_28 == 0)
        rax_54 = rbx_28 + 1
    
    if (rbx_28 != 0 || rdi_17 == 0)
        rax_54 = 0
    
    sub_140596690(&var_48, &var_68, rdi_17 + rax_54)
    sub_140a20ba0(&var_48, data_143ef8750, rdi_17)
    rbx_30 = var_48
    rdi_16 = var_68
    var_70.d = var_40
    var_70:4.d = var_3c
    var_40.q = 0
    var_78 = rbx_30
    var_48 = 0
else
    sub_140596d10(&var_78, &data_143ef8750)
    rbx_30 = var_78

data_143ef8598 = sub_1417cb960(&var_78)

if (rbx_30 != 0)
    sub_140a74f90(rbx_30)

if (rdi_16 != 0)
    sub_140a74f90(rdi_16)

if (rsi_14 != 0)
    sub_140a74f90(rsi_14)

var_58 = 0
var_50_8.q = 0
sub_1405947f0(&var_58, 0xe)
int32_t r14_15 = var_4c
int32_t rbx_31 = var_50_8 + 0xe
int32_t var_50_9 = rbx_31

if (rbx_31 s> r14_15)
    sub_140594770(&var_58)
    r14_15 = var_4c
    rbx_31 = var_50_9

uint64_t rsi_15 = var_58
int16_t var_88_4 = 0x3f
sub_1405a7220(rsi_15, 0xe, "APEX_Clothing", 0xe, 0x3f)
int32_t rcx_125 = (data_143ef8708.q).d
uint64_t rdi_18

if (rcx_125 s> 1)
    int32_t rbx_32
    
    if (rbx_31 == 0)
        rbx_32 = 0
    else
        rbx_32 = rbx_31 - 1
    
    int32_t rax_58
    
    if (rcx_125 == 0)
        rax_58 = rcx_125 + 1
    
    if (rcx_125 != 0 || rbx_32 == 0)
        rax_58 = 0
    
    int64_t rdx_70 = data_143ef8700
    var_88_4.d = rax_58 + rbx_32
    var_58 = 0
    sub_140596860(&var_58, rdx_70, rcx_125, 0, 0x3f)
    sub_140a20ba0(&var_58, rsi_15, rbx_32)
    rdi_18 = var_58
    rbx_31 = var_50_9
    var_68 = rdi_18
    int32_t var_5c_8 = var_4c
    var_50_9.q = 0
    var_58 = 0
else
    rdi_18 = rsi_15
    var_68 = rsi_15
    rsi_15 = 0
    int32_t var_5c_7 = r14_15

int32_t var_60_10 = rbx_31
uint64_t rbx_33

if (rbx_31 s> 1)
    int32_t rax_61 = (data_143ef8758.q).d
    int32_t rdi_19 = rax_61 - 1
    
    if (rax_61 == 0)
        rdi_19 = 0
    
    int32_t rax_62
    
    if (rbx_31 == 0)
        rax_62 = rbx_31 + 1
    
    if (rbx_31 != 0 || rdi_19 == 0)
        rax_62 = 0
    
    sub_140596690(&var_48, &var_68, rdi_19 + rax_62)
    sub_140a20ba0(&var_48, data_143ef8750, rdi_19)
    rbx_33 = var_48
    rdi_18 = var_68
    var_70.d = var_40
    var_70:4.d = var_3c
    var_40.q = 0
    var_78 = rbx_33
    var_48 = 0
else
    sub_140596d10(&var_78, &data_143ef8750)
    rbx_33 = var_78

data_143ef85a0 = sub_1417cb960(&var_78)

if (rbx_33 != 0)
    sub_140a74f90(rbx_33)

if (rdi_18 != 0)
    sub_140a74f90(rdi_18)

if (rsi_15 != 0)
    sub_140a74f90(rsi_15)

if (data_143ef8560 == 0 || data_143ef8568 == 0 || data_143ef8578 == 0 || data_143ef8570 == 0
        || (rax_19 != 0 && data_143ef8588 == 0) || (arg1 != 0 && data_143ef8580 == 0)
        || data_143ef8590 == 0 || data_143ef8598 == 0 || data_143ef85a0 == 0)
    rbx_33.b = 0
else
    rbx_33.b = 1

uint64_t rcx_135 = var_38

if (rcx_135 != 0)
    sub_140a74f90(rcx_135)

return zx.q(rbx_33.b)
