// 函数: sub_140b2daf0
// 地址: 0x140b2daf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int32_t rdi = 0
int64_t rsi = -1
*arg1 = 0xffffffff
arg1[1] = 0
arg1[2] = 0xffffffff
arg1[3].b = 0
*(arg1 + 0x10) = 0
arg1[6] = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
int64_t* rax_2 = j_sub_140a82f30(0x58)

if (rax_2 == 0)
    rax_2 = nullptr
else
    *rax_2 = 0
    rax_2[1].b = 2
    *(rax_2 + 0xc) = -1
    __builtin_memset(&rax_2[3], 0, 0x20)
    rax_2[9] = 0
    rax_2[0xa] = 0

*(arg1 + 0x38) = rax_2
*(arg1 + 0x30) = rax_2
*(arg1 + 0x40) = 0
*(arg1 + 0x48) = sub_140a491d0(0)
void* rcx = &arg1[0x1a]
arg1[0x14] = 0
*(arg1 + 0x58) = 0
*(arg1 + 0x60) = 0
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_4 = *(rcx + 0x10)

if (rax_4 != 0)
    rcx = rax_4

*rcx = 0
*(rcx + 8) = 0
arg1[0x22] = 0xffffffff
arg1[0x23] = 0
*(arg1 + 0x98) = 0
arg1[0x28] = 0
void* rax_5 = j_sub_140a82f30(0x58)
void* const rdx = rax_5

if (rax_5 == 0)
    rdx = nullptr
else
    __builtin_memset(rax_5, 0, 0x18)
    int64_t* rcx_1 = rax_5 + 0x18
    rcx_1[2] = 0
    rcx_1[3].d = 0
    *(rcx_1 + 0x1c) = 0x80
    int64_t* rax_6 = rcx_1[2]
    
    if (rax_6 != 0)
        rcx_1 = rax_6
    
    *rcx_1 = 0
    rcx_1[1] = 0
    *(rdx + 0x38) = 0xffffffff
    *(rdx + 0x3c) = 0
    *(rdx + 0x48) = 0
    *(rdx + 0x50) = 0

*(arg1 + 0xb8) = rdx
*(arg1 + 0xb0) = rdx
InitializeCriticalSection(&arg1[0x30])
SetCriticalSectionSpinCount(&arg1[0x30], 0xfa0)
*(arg1 + 0xf8) = 0
*(arg1 + 0x100) = 0
*(arg1 + 0x108) = 2
*(arg1 + 0x110) = 0
*(arg1 + 0x118) = 0
*(arg1 + 0x120) = 2
*(arg1 + 0x128) = 0
*(arg1 + 0x130) = 0
*(arg1 + 0x138) = 2
void*** rax_7 = sub_140a84c80(0, 0x20, 0)

if (rax_7 != 0)
    *rax_7 = &data_142d40dc0
    rax_7[1] = sub_140b361d0
    rax_7[3] = sub_140a387b0()
    *rax_7 = &data_142d40e18

int64_t var_1a8

if (rax_7 != 0)
    sub_140599630(&data_14399fd60, 1)
    (*rax_7)[6](rax_7, &var_1a8)
    int64_t r15_1 = sx.q(data_14399fd68)
    int32_t rax_10 = (r15_1 + 1).d
    bool cond:0_1 = rax_10 s<= data_14399fd6c
    data_14399fd68 = rax_10
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_14399fd60)
    
    void** rax_13 = (r15_1 << 4) + data_14399fd60
    *rax_13 = rax_7
    rax_13[1].d = 2

void*** rax_14 = sub_140a84c80(0, 0x20, 0)

if (rax_14 != 0)
    *rax_14 = &data_142d40dc0
    rax_14[1] = sub_140b362b0
    rax_14[3] = sub_140a387b0()
    *rax_14 = &data_142d40e18

if (rax_14 != 0)
    sub_140599630(&data_14399fd90, 1)
    void var_170
    (*rax_14)[6](rax_14, &var_170)
    int64_t r15_2 = sx.q(data_14399fd98)
    int32_t rax_17 = (r15_2 + 1).d
    bool cond:1_1 = rax_17 s<= data_14399fd9c
    data_14399fd98 = rax_17
    
    if (not(cond:1_1))
        sub_1405a4f90(&data_14399fd90)
    
    void** rax_20 = (r15_2 << 4) + data_14399fd90
    *rax_20 = rax_14
    rax_20[1].d = 2

void*** rax_21 = sub_140a84c80(0, 0x20, 0)

if (rax_21 != 0)
    *rax_21 = &data_142d40dc0
    rax_21[1] = sub_140b361f0
    rax_21[3] = sub_140a387b0()
    *rax_21 = &data_142d40e18

if (rax_21 != 0)
    sub_140599630(&data_14399fda8, 1)
    void var_168
    (*rax_21)[6](rax_21, &var_168)
    int64_t r15_3 = sx.q(data_14399fdb0)
    int32_t rax_24 = (r15_3 + 1).d
    bool cond:2_1 = rax_24 s<= data_14399fdb4
    data_14399fdb0 = rax_24
    
    if (not(cond:2_1))
        sub_1405a4f90(&data_14399fda8)
    
    void** rax_27 = (r15_3 << 4) + data_14399fda8
    *rax_27 = rax_21
    rax_27[1].d = 2

void*** rax_28 = sub_140a84c80(0, 0x20, 0)

if (rax_28 != 0)
    *rax_28 = &data_142d40dc0
    rax_28[1] = j_sub_140b3cdd0
    rax_28[3] = sub_140a387b0()
    *rax_28 = &data_142d40e18

if (rax_28 != 0)
    sub_140599630(&data_14399fdc0, 1)
    void var_160
    (*rax_28)[6](rax_28, &var_160)
    int64_t r15_4 = sx.q(data_14399fdc8)
    int32_t rax_31 = (r15_4 + 1).d
    bool cond:3_1 = rax_31 s<= data_14399fdcc
    data_14399fdc8 = rax_31
    
    if (not(cond:3_1))
        sub_1405a4f90(&data_14399fdc0)
    
    void** rax_34 = (r15_4 << 4) + data_14399fdc0
    *rax_34 = rax_28
    rax_34[1].d = 2

int64_t var_58 = 0
int32_t var_48 = 7
void var_158
void* var_50 = &var_158
sub_1405a7220(&var_158, 8, "Windows", 8, 0x3f)
int64_t var_180
sub_140a2e390(&var_180, u"%s", var_50)

if (var_58 != 0)
    sub_140a74f90(var_58)

int16_t* rax_36 = sub_140a4af10(sub_140ab2200())
int64_t var_1c8 = 0
int32_t rdx_13 = 0
int32_t var_1c0 = 0
int32_t rcx_12 = 0
int32_t var_1bc = 0

if (rax_36 != 0 && *rax_36 != 0)
    int64_t rbx_4 = -1
    
    do
        rbx_4 += 1
    while (rax_36[rbx_4] != 0)
    
    if (rbx_4.d + 1 s> 0)
        sub_1405947f0(&var_1c8, rbx_4.d + 1)
        rcx_12 = var_1bc
        rdx_13 = var_1c0
    
    int32_t rax_37 = rdx_13 + rbx_4.d + 1
    int32_t var_1c0_1 = rax_37
    
    if (rax_37 s> rcx_12)
        sub_140594770(&var_1c8)
    
    UnDecorator::getReferenceType(var_1c8, rax_36, (rbx_4.d + 1) * 2)

int64_t var_248 = 0
int64_t var_240 = 0
sub_1405947f0(&var_248, 2)
int32_t r13 = var_240.d + 2
var_240.d = r13

if (r13 s> 0)
    sub_140594770(&var_248)
    r13 = var_240.d

sub_1405a7220(var_248, 2, U""\tv 0", 2, 0x3f)
int64_t var_258 = 0
int64_t var_250 = 0
sub_1405947f0(&var_258, 2)
int32_t r15_6 = var_250.d + 2
var_250.d = r15_6

if (r15_6 s> 0)
    sub_140594770(&var_258)
    r15_6 = var_250.d

int64_t rbx_6 = var_258
int16_t var_268_2 = 0x3f
var_1a8 = rbx_6
sub_1405a7220(rbx_6, 2, U""\tv 0", 2, var_268_2)
sub_140af2b60()
int32_t r8_4

if (data_143dbb3f0 == 0)
    r8_4 = var_250:4.d
else
    int64_t rbx_7 = -1
    
    do
        rbx_7 += 1
    while ((&data_143dbb3f0)[rbx_7] != 0)
    
    int32_t rdx_18
    
    if (r15_6 == 0)
        rdx_18 = r15_6 + 1
    
    if (r15_6 != 0 || rbx_7.d == 0)
        rdx_18 = 0
    
    int32_t rax_38 = var_250:4.d
    int32_t rdx_20 = rdx_18 + r15_6 + rbx_7.d
    int64_t var_1e8 = var_258
    
    if (rdx_20 s> rax_38)
        sub_1405947f0(&var_1e8, rdx_20)
    
    sub_140a20ba0(&var_1e8, &data_143dbb3f0, rbx_7.d)
    rbx_6 = var_1e8
    r8_4 = rax_38
    var_1a8 = rbx_6
    int32_t var_1e0_1
    var_1e0_1.q = 0
    var_1e8 = 0

int64_t var_1b8
int32_t rax_40

if (r15_6 s> 1)
    int32_t rbx_8 = r13 - 1
    
    if (r13 == 0)
        rbx_8 = 0
    
    int32_t rax_41
    
    if (r15_6 == 0)
        rax_41 = r15_6 + 1
    
    if (r15_6 != 0 || rbx_8 == 0)
        rax_41 = 0
    
    int32_t rdx_22 = rax_41 + r15_6 + rbx_8
    int64_t var_1a0 = var_1a8
    
    if (rdx_22 s> r8_4)
        sub_1405947f0(&var_1a0, rdx_22)
    
    rbx_6 = var_248
    sub_140a20ba0(&var_1a0, rbx_6, rbx_8)
    var_1b8 = var_1a0
    int32_t var_1b0_1 = r15_6
    rax_40 = r8_4
else
    var_1b8 = var_248
    rax_40 = var_240:4.d
    int32_t var_1b0 = r13

int32_t var_1ac = rax_40

if (rbx_6 != 0)
    sub_140a74f90(rbx_6)

sub_140a306e0(&var_1b8, &data_142d576a0, &data_142d40450, 1)
sub_140a306e0(&var_1b8, &data_142e51e14, &data_142d40450, 1)
j_sub_140a1b080()
int64_t var_1d8 = 0
int32_t rdx_24 = 0
int32_t var_1d0 = 0
int32_t rcx_31 = 0
int32_t var_1cc = 0

do
    rsi += 1
while ((*u"++UE4+Release-4.25-CL-14469661")[rsi] != 0)

if (rsi.d + 1 s> 0)
    sub_1405947f0(&var_1d8, rsi.d + 1)
    rcx_31 = var_1cc
    rdx_24 = var_1d0

int32_t rax_44 = rsi.d + 1 + rdx_24
int32_t var_1d0_1 = rax_44

if (rax_44 s> rcx_31)
    sub_140594770(&var_1d8)

UnDecorator::getReferenceType(var_1d8, u"++UE4+Release-4.25-CL-14469661", (rsi.d + 1) * 2)
int64_t var_190
sub_140b29040(j_sub_140b17d00(), &var_190, 4)
int16_t* var_238 = nullptr
int32_t var_230 = 0
sub_1405947f0(&var_238, 9)
int32_t rbx_9 = var_230 + 9

if (rbx_9 s> 0)
    sub_140594770(&var_238)

int16_t* rsi_2 = var_238
UnDecorator::getReferenceType(rsi_2, u"Platform", 0x12)
int32_t rcx_39

if (rbx_9 == 0)
    rsi_2 = &data_142d40450
    rcx_39 = 0
else
    rcx_39 = rbx_9 - 1

sub_140597df0(sub_140b2d0b0(&arg1[0x16], sub_1405969c0(rcx_39, rsi_2), &var_238), &var_180)
int16_t* rcx_42 = var_238

if (rcx_42 != 0)
    sub_140a74f90(rcx_42)

int16_t* var_228 = nullptr
int32_t var_220 = 0
sub_1405947f0(&var_228, 7)
int32_t rbx_10 = var_220 + 7

if (rbx_10 s> 0)
    sub_140594770(&var_228)

int16_t* rsi_3 = var_228
UnDecorator::getReferenceType(rsi_3, u"Config", 0xe)
int32_t rcx_46

if (rbx_10 == 0)
    rsi_3 = &data_142d40450
    rcx_46 = 0
else
    rcx_46 = rbx_10 - 1

sub_140597df0(sub_140b2d0b0(&arg1[0x16], sub_1405969c0(rcx_46, rsi_3), &var_228), &var_1c8)
int16_t* rcx_49 = var_228

if (rcx_49 != 0)
    sub_140a74f90(rcx_49)

int16_t* var_218 = nullptr
int32_t var_210 = 0
sub_1405947f0(&var_218, 0xd)
int32_t rbx_11 = var_210 + 0xd

if (rbx_11 s> 0)
    sub_140594770(&var_218)

int16_t* rsi_4 = var_218
UnDecorator::getReferenceType(rsi_4, u"BuildVersion", 0x1a)
int32_t rcx_53

if (rbx_11 == 0)
    rsi_4 = &data_142d40450
    rcx_53 = 0
else
    rcx_53 = rbx_11 - 1

sub_140597df0(sub_140b2d0b0(&arg1[0x16], sub_1405969c0(rcx_53, rsi_4), &var_218), &var_1d8)
int16_t* rcx_56 = var_218

if (rcx_56 != 0)
    sub_140a74f90(rcx_56)

int16_t* var_208 = nullptr
int32_t var_200 = 0
sub_1405947f0(&var_208, 0xe)
int32_t rbx_12 = var_200 + 0xe

if (rbx_12 s> 0)
    sub_140594770(&var_208)

int16_t* rsi_5 = var_208
UnDecorator::getReferenceType(rsi_5, u"EngineVersion", 0x1c)
int32_t rcx_60

if (rbx_12 == 0)
    rsi_5 = &data_142d40450
    rcx_60 = 0
else
    rcx_60 = rbx_12 - 1

sub_140597df0(sub_140b2d0b0(&arg1[0x16], sub_1405969c0(rcx_60, rsi_5), &var_208), &var_190)
int16_t* rcx_63 = var_208

if (rcx_63 != 0)
    sub_140a74f90(rcx_63)

int16_t* var_1f8 = nullptr
int32_t var_1f0 = 0
sub_1405947f0(&var_1f8, 0xc)
int32_t rbx_13 = var_1f0 + 0xc

if (rbx_13 s> 0)
    sub_140594770(&var_1f8)

int16_t* rsi_6 = var_1f8
UnDecorator::getReferenceType(rsi_6, u"Commandline", 0x18)

if (rbx_13 == 0)
    rsi_6 = &data_142d40450
else
    rdi = rbx_13 - 1

sub_140597df0(sub_140b2d0b0(&arg1[0x16], sub_1405969c0(rdi, rsi_6), &var_1f8), &var_1b8)
int16_t* rcx_70 = var_1f8

if (rcx_70 != 0)
    sub_140a74f90(rcx_70)

int64_t rcx_71 = var_190

if (rcx_71 != 0)
    sub_140a74f90(rcx_71)

int64_t rcx_72 = var_1d8

if (rcx_72 != 0)
    sub_140a74f90(rcx_72)

int64_t rcx_73 = var_1b8

if (rcx_73 != 0)
    sub_140a74f90(rcx_73)

int64_t rcx_74 = var_1c8

if (rcx_74 != 0)
    sub_140a74f90(rcx_74)

int64_t rcx_75 = var_180

if (rcx_75 != 0)
    sub_140a74f90(rcx_75)

__security_check_cookie(rax_1 ^ &var_288)
return arg1
