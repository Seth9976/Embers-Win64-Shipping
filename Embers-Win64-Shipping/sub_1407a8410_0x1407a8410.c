// 函数: sub_1407a8410
// 地址: 0x1407a8410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a20ba0(arg3, &data_142d576a0, 1)
int32_t rax = arg2[1].d
int32_t rdi = 0
int128_t* var_88 = nullptr
int32_t rdx = 0
int32_t var_80 = 0
int32_t rbx = rax - 1
int32_t rax_1 = 0

if (rax == 0)
    rbx = 0

int32_t var_7c = 0

if (rbx + 9 s> 0)
    sub_1405947f0(&var_88, rbx + 9)
    rax_1 = var_7c
    rdx = var_80

int32_t rcx_4 = rbx + 9 + rdx

if (rcx_4 s> rax_1)
    sub_140594770(&var_88)

int128_t* rsi = var_88
int64_t rbx_1 = sx.q(rbx)
*rsi = (*u"MinTime_")[0].o
memcpy(&rsi[1], *arg2, rbx_1.d * 2)
*(rsi + (rbx_1 << 1) + 0x10) = 0
int32_t rdx_3 = 0
int32_t rax_2 = arg2[1].d
int128_t* result_1 = nullptr
int32_t var_50 = 0
int32_t rbx_2 = rax_2 - 1
int32_t rax_3 = 0

if (rax_2 == 0)
    rbx_2 = 0

int32_t var_4c = 0

if (rbx_2 + 9 s> 0)
    sub_1405947f0(&result_1, rbx_2 + 9)
    rax_3 = var_4c
    rdx_3 = var_50

int32_t rcx_10 = rbx_2 + 9 + rdx_3

if (rcx_10 s> rax_3)
    sub_140594770(&result_1)

int128_t* result_3 = result_1
int64_t rbx_3 = sx.q(rbx_2)
*result_3 = (*u"MaxTime_")[0].o
memcpy(&result_3[1], *arg2, rbx_3.d * 2)
*(result_3 + (rbx_3 << 1) + 0x10) = 0
int32_t rdx_6 = 0
int32_t rax_4 = arg2[1].d
int128_t* var_98 = nullptr
int32_t var_90 = 0
int32_t rbx_4 = rax_4 - 1
int32_t rax_5 = 0

if (rax_4 == 0)
    rbx_4 = 0

int32_t var_8c = 0

if (rbx_4 + 0xe s> 0)
    sub_1405947f0(&var_98, rbx_4 + 0xe)
    rax_5 = var_8c
    rdx_6 = var_90

int32_t rcx_16 = rbx_4 + 0xe + rdx_6

if (rcx_16 s> rax_5)
    sub_140594770(&var_98)

int128_t* rsi_1 = var_98
int64_t rbx_5 = sx.q(rbx_4)
*rsi_1 = (*u"InvTimeRange_")[0].o
rsi_1[1].q = 0x650067006e0061
*(rsi_1 + 0x18) = 0x5f
memcpy(rsi_1 + 0x1a, *arg2, rbx_5.d * 2)
*(rsi_1 + (rbx_5 << 1) + 0x1a) = 0
int32_t rdx_9 = 0
int32_t rax_6 = arg2[1].d
void* var_68 = nullptr
int32_t var_60 = 0
int32_t rbx_6 = rax_6 - 1
int32_t rax_7 = 0

if (rax_6 == 0)
    rbx_6 = 0

int32_t var_5c = 0

if (rbx_6 + 0x15 s> 0)
    sub_1405947f0(&var_68, rbx_6 + 0x15)
    rax_7 = var_5c
    rdx_9 = var_60

int32_t rcx_22 = rbx_6 + 0x15 + rdx_9

if (rcx_22 s> rax_7)
    sub_140594770(&var_68)

void* rsi_2 = var_68
int64_t rbx_7 = sx.q(rbx_6)
__builtin_memcpy(rsi_2, u"CurveLUTNumMinus", 0x20)
*(rsi_2 + 0x20) = 0x5f0065006e004f
memcpy(rsi_2 + 0x28, *arg2, rbx_7.d * 2)
*(rsi_2 + (rbx_7 << 1) + 0x28) = 0
int64_t* var_78 = nullptr
int64_t var_70 = 0
sub_1405947f0(&var_78, 0xa)
int32_t r12 = var_70:4.d
int32_t rbx_8 = var_70.d + 0xa
var_70.d = rbx_8

if (rbx_8 s> r12)
    sub_140594770(&var_78)
    r12 = var_70:4.d
    rbx_8 = var_70.d

int64_t* r15 = var_78
int16_t var_a8 = 0x3f
sub_1405a7220(r15, 0xa, "CurveLUT_", 0xa, 0x3f)
int32_t r13 = arg2[1].d
int64_t* var_48
int64_t* arg_10

if (rbx_8 s> 1)
    int32_t rsi_3 = r13 - 1
    
    if (r13 == 0)
        rsi_3 = 0
    
    int32_t rax_8
    
    if (rbx_8 == 0)
        rax_8 = rbx_8 + 1
    
    if (rbx_8 != 0 || rsi_3 == 0)
        rax_8 = 0
    
    var_78 = r15
    int32_t rdx_16 = rsi_3 + rbx_8 + rax_8
    var_70.d = rbx_8
    var_70:4.d = r12
    
    if (rdx_16 s> r12)
        sub_1405947f0(&var_78, rdx_16)
    
    sub_140a20ba0(&var_78, *arg2, rsi_3)
    r13 = var_70.d
    arg_10 = var_78
else
    arg_10 = nullptr
    var_48 = nullptr
    int64_t rbx_9 = *arg2
    
    if (r13 != 0)
        sub_1405a4c70(&var_48, r13, 0)
        int64_t* rbx_10 = var_48
        arg_10 = rbx_10
        memcpy(rbx_10, rbx_9, r13 * 2)
    
    if (r15 != 0)
        sub_140a74f90(r15)

int32_t rbx_11 = r13 - 1

if (r13 == 0)
    rbx_11 = 0

var_78 = nullptr
var_70:4.d = 0
int32_t rdx_18 = 0
var_70.d = 0
int64_t* rsi_4 = nullptr
int32_t r15_1 = 0

if (rbx_11 + 0xf s> 0)
    sub_1405947f0(&var_78, rbx_11 + 0xf)
    rdx_18 = var_70.d
    r15_1 = var_70:4.d
    rsi_4 = var_78

int32_t r12_2 = rbx_11 + 0xf + rdx_18
var_70.d = r12_2

if (r12_2 s> r15_1)
    sub_140594770(&var_78)
    r15_1 = var_70:4.d
    r12_2 = var_70.d
    rsi_4 = var_78

int64_t rbx_12 = sx.q(rbx_11)
__builtin_memcpy(rsi_4, u"Buffer<float> ", 0x1c)
memcpy(rsi_4 + 0x1c, arg_10, rbx_12.d * 2)
*(rsi_4 + (rbx_12 << 1) + 0x1c) = 0
var_78 = rsi_4
int32_t rax_11
rax_11.b = r12_2 == 0
var_70.d = r12_2
var_70:4.d = r15_1
int32_t rdx_22 = rax_11 + 2 + r12_2

if (rdx_22 s> r15_1)
    sub_1405947f0(&var_78, rdx_22)

sub_140a20ba0(&var_78, &data_142db0644, 2)
int32_t rax_12 = var_70.d
int64_t* rbx_13 = var_78
var_78 = nullptr
int32_t r8_8 = rax_12 - 1
int64_t var_70_1 = 0

if (rax_12 == 0)
    r8_8 = 0

sub_140a20ba0(arg3, rbx_13, r8_8)

if (rbx_13 != 0)
    sub_140a74f90(rbx_13)

int32_t rbx_14 = rcx_4 - 1

if (rcx_4 == 0)
    rbx_14 = 0

var_78 = nullptr
var_70_1:4.d = 0
int32_t rdx_24 = 0
int64_t* rsi_5 = nullptr
var_70_1.d = 0
int32_t r15_2 = 0

if (rbx_14 + 7 s> 0)
    sub_1405947f0(&var_78, rbx_14 + 7)
    rdx_24 = var_70_1.d
    r15_2 = var_70_1:4.d
    rsi_5 = var_78

int32_t r12_5 = rbx_14 + 7 + rdx_24
var_70_1.d = r12_5

if (r12_5 s> r15_2)
    sub_140594770(&var_78)
    r15_2 = var_70_1:4.d
    r12_5 = var_70_1.d
    rsi_5 = var_78

int128_t* rdx_26 = var_88
*rsi_5 = 0x61006f006c0066
int64_t rbx_15 = sx.q(rbx_14)
rsi_5[1].d = 0x200074
memcpy(rsi_5 + 0xc, rdx_26, rbx_15.d * 2)
*(rsi_5 + (rbx_15 << 1) + 0xc) = 0
var_78 = rsi_5
int32_t rax_15
rax_15.b = r12_5 == 0
var_70_1.d = r12_5
var_70_1:4.d = r15_2
int32_t rdx_28 = r12_5 + 2 + rax_15

if (rdx_28 s> r15_2)
    sub_1405947f0(&var_78, rdx_28)

sub_140a20ba0(&var_78, &data_142db0644, 2)
int32_t rax_16 = var_70_1.d
int64_t* rbx_16 = var_78
var_78 = nullptr
int32_t r8_10 = rax_16 - 1
int64_t var_70_2 = 0

if (rax_16 == 0)
    r8_10 = 0

sub_140a20ba0(arg3, rbx_16, r8_10)

if (rbx_16 != 0)
    sub_140a74f90(rbx_16)

int32_t rbx_18

if (rcx_10 == 0)
    rbx_18 = 0
else
    rbx_18 = rcx_10 - 1

var_78 = nullptr
var_70_2:4.d = 0
int32_t rdx_30 = 0
int64_t* rsi_6 = nullptr
var_70_2.d = 0
int32_t r15_3 = 0

if (rbx_18 + 7 s> 0)
    sub_1405947f0(&var_78, rbx_18 + 7)
    rdx_30 = var_70_2.d
    r15_3 = var_70_2:4.d
    rsi_6 = var_78

int32_t r12_8 = rbx_18 + 7 + rdx_30
var_70_2.d = r12_8

if (r12_8 s> r15_3)
    sub_140594770(&var_78)
    r15_3 = var_70_2:4.d
    r12_8 = var_70_2.d
    rsi_6 = var_78

int128_t* result_2 = result_1
*rsi_6 = 0x61006f006c0066
int64_t rbx_19 = sx.q(rbx_18)
rsi_6[1].d = 0x200074
memcpy(rsi_6 + 0xc, result_2, rbx_19.d * 2)
*(rsi_6 + (rbx_19 << 1) + 0xc) = 0
var_78 = rsi_6
int32_t rax_18
rax_18.b = r12_8 == 0
var_70_2.d = r12_8
var_70_2:4.d = r15_3
int32_t rdx_33 = rax_18 + 2 + r12_8

if (rdx_33 s> r15_3)
    sub_1405947f0(&var_78, rdx_33)

sub_140a20ba0(&var_78, &data_142db0644, 2)
int32_t rax_19 = var_70_2.d
int64_t* rbx_20 = var_78
var_78 = nullptr
int32_t r8_12 = rax_19 - 1
int64_t var_70_3 = 0

if (rax_19 == 0)
    r8_12 = 0

sub_140a20ba0(arg3, rbx_20, r8_12)

if (rbx_20 != 0)
    sub_140a74f90(rbx_20)

int32_t rbx_21 = rcx_16 - 1

if (rcx_16 == 0)
    rbx_21 = 0

var_78 = nullptr
var_70_3:4.d = 0
int32_t rdx_35 = 0
var_70_3.d = 0
int64_t* r15_4 = nullptr
int32_t rsi_7 = 0

if (rbx_21 + 7 s> 0)
    sub_1405947f0(&var_78, rbx_21 + 7)
    rdx_35 = var_70_3.d
    rsi_7 = var_70_3:4.d
    r15_4 = var_78

int32_t r12_10 = rdx_35 + 7 + rbx_21
var_70_3.d = r12_10

if (r12_10 s> rsi_7)
    sub_140594770(&var_78)
    rsi_7 = var_70_3:4.d
    r12_10 = var_70_3.d
    r15_4 = var_78

int128_t* rdx_37 = var_98
*r15_4 = 0x61006f006c0066
int64_t rbx_22 = sx.q(rbx_21)
r15_4[1].d = 0x200074
int32_t r8_14 = memcpy(r15_4 + 0xc, rdx_37, rbx_22.d * 2)
int32_t var_40_2 = r12_10
*(r15_4 + (rbx_22 << 1) + 0xc) = 0
var_48 = r15_4
int32_t var_3c = rsi_7
sub_140596690(&var_78, &var_48, sbb.d(r8_14, r8_14, r12_10 != 0) + 3)
sub_140a20ba0(&var_78, &data_142db0644, 2)
int32_t rax_22 = var_70_3.d
int64_t* rbx_23 = var_78
var_78 = nullptr
int32_t r8_17 = rax_22 - 1
int64_t var_70_4 = 0

if (rax_22 == 0)
    r8_17 = 0

sub_140a20ba0(arg3, rbx_23, r8_17)

if (rbx_23 != 0)
    sub_140a74f90(rbx_23)

int64_t* rcx_61 = var_48

if (rcx_61 != 0)
    sub_140a74f90(rcx_61)

int32_t rbx_25

if (rcx_22 == 0)
    rbx_25 = 0
else
    rbx_25 = rcx_22 - 1

var_78 = nullptr
var_70_4:4.d = 0
int32_t rdx_40 = 0
var_70_4.d = 0
int64_t* r15_5 = nullptr
int32_t rsi_8 = 0

if (rbx_25 + 7 s> 0)
    sub_1405947f0(&var_78, rbx_25 + 7)
    rdx_40 = var_70_4.d
    rsi_8 = var_70_4:4.d
    r15_5 = var_78

int32_t r12_13 = rdx_40 + 7 + rbx_25
var_70_4.d = r12_13

if (r12_13 s> rsi_8)
    sub_140594770(&var_78)
    rsi_8 = var_70_4:4.d
    r12_13 = var_70_4.d
    r15_5 = var_78

void* rdx_42 = var_68
*r15_5 = 0x61006f006c0066
int64_t rbx_26 = sx.q(rbx_25)
r15_5[1].d = 0x200074
int32_t r8_19 = memcpy(r15_5 + 0xc, rdx_42, rbx_26.d * 2)
*(r15_5 + (rbx_26 << 1) + 0xc) = 0
var_48 = r15_5
int32_t var_3c_1 = rsi_8
sub_140596690(&var_78, &var_48, sbb.d(r8_19, r8_19, r12_13 != 0) + 3)
sub_140a20ba0(&var_78, &data_142db0644, 2)
int32_t rax_24 = var_70_4.d
int64_t* rbx_27 = var_78
var_78 = nullptr
int32_t r8_22 = rax_24 - 1
int64_t var_70_5 = 0

if (rax_24 == 0)
    r8_22 = 0

sub_140a20ba0(arg3, rbx_27, r8_22)

if (rbx_27 != 0)
    sub_140a74f90(rbx_27)

int64_t* rcx_69 = var_48

if (rcx_69 != 0)
    sub_140a74f90(rcx_69)

sub_140a20ba0(arg3, &data_142d576a0, 1)
int16_t* const rbx_28 = &data_142d40450
int128_t* r15_6 = var_98
int128_t* rax_25 = &data_142d40450
int128_t* r12_15 = var_88

if (rcx_16 != 0)
    rax_25 = r15_6

int16_t* const r8_23

if (arg2[1].d == 0)
    r8_23 = &data_142d40450
else
    r8_23 = *arg2

var_a8.q = rax_25
sub_140a2e390(&var_48, 
    float TimeToLUTFraction_%s(float T)\n{\n\treturn saturate((T - %s) * %s);\n}\n", r8_23)
int32_t r8_25

if (r12_13 == 0)
    r8_25 = 0
else
    r8_25 = r12_13 - 1

sub_140a20ba0(arg3, var_48, r8_25)
int64_t* rcx_73 = var_48

if (rcx_73 != 0)
    sub_140a74f90(rcx_73)

if (arg2[1].d != 0)
    rbx_28 = *arg2

sub_140a2e390(&var_48, u"float SampleCurve_%s(float T)\n{\n\treturn %s[(uint)T];\n}\n", rbx_28)

if (r12_13 != 0)
    rdi = r12_13 - 1

sub_140a20ba0(arg3, var_48, rdi)
int64_t* rcx_76 = var_48

if (rcx_76 != 0)
    sub_140a74f90(rcx_76)

sub_140a20ba0(arg3, &data_142d576a0, 1)

if (arg_10 != 0)
    sub_140a74f90(arg_10)

void* rax_27 = var_68

if (rax_27 != 0)
    sub_140a74f90(rax_27)

if (r15_6 != 0)
    sub_140a74f90(r15_6)

int128_t* result = result_1

if (result != 0)
    result = sub_140a74f90(result)

if (r12_15 == 0)
    return result

return sub_140a74f90(r12_15)
