// 函数: sub_1407aa480
// 地址: 0x1407aa480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t r12 = 1
int32_t rsi = data_143ce0628
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2[5].d + 3)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t rax_6 = (temp1 + (temp0 & 3)) s>> 2

if (rax_6 s<= 1)
    rax_6 = 1

int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int16_t* var_f8
int16_t* var_e8

if (rsi s> 1)
    int32_t rbx_1 = arg2[1].d
    int32_t rbx_2
    
    if (rbx_1 == 0)
        rbx_2 = 0
    else
        rbx_2 = rbx_1 - 1
    
    int32_t rax_7
    
    if (rsi == 0)
        rax_7 = 1
    
    if (rsi != 0 || rbx_2 == 0)
        rax_7 = 0
    
    int64_t r14_1 = data_143ce0620
    int32_t rcx_1 = rax_7 + rbx_2
    var_f8 = nullptr
    int64_t var_f0
    var_f0.d = rsi
    
    if (rsi != 0 || rcx_1 != 0)
        sub_1405a4c70(&var_f8, rsi + rcx_1, 0)
        memcpy(var_f8, r14_1, rsi * 2)
    else
        var_f0:4.d = 0
    
    sub_140a20ba0(&var_f8, *arg2, rbx_2)
    var_e8 = var_f8
    int32_t var_e0_1 = var_f0.d
    int32_t var_dc_1 = var_f0:4.d
    int64_t var_f0_1 = 0
    var_f8 = nullptr
else
    sub_140596d10(&var_e8, arg2)

void var_d0
sub_140b2f3e0(&var_d0, &var_e8)
var_f8 = nullptr
int64_t* var_f0_2 = nullptr
sub_1405947f0(&var_f8, 0x18)
int32_t r14_2 = var_f0_2:4.d
int32_t rsi_1 = var_f0_2.d + 0x18
var_f0_2.d = rsi_1

if (rsi_1 s> r14_2)
    sub_140594770(&var_f8)
    r14_2 = var_f0_2:4.d
    rsi_1 = var_f0_2.d

int16_t* rbx_3 = var_f8
UnDecorator::getReferenceType(rbx_3, u"NumSpawnedParticlesName", 0x30)
sub_140783a30(&var_98, &var_f8)
*var_f0_2 = rbx_3
var_f0_2[1].d = rsi_1
*(var_f0_2 + 0xc) = r14_2
sub_140b2f340(&var_f0_2[2], &var_d0)
var_f0_2[6].d = 0xffffffff
int16_t* const r13 = &data_142d40450
int32_t rcx_11 = var_f0_2[1].d
int16_t* rdx_10

if (rcx_11 == 0)
    rdx_10 = &data_142d40450
else
    rdx_10 = *var_f0_2

int32_t rcx_12

if (rcx_11 == 0)
    rcx_12 = 0
else
    rcx_12 = rcx_11 - 1

void var_d8
sub_140754310(&var_98, &var_d8, sub_1405969c0(rcx_12, rdx_10), var_f0_2, var_f8.d, nullptr)
int64_t var_c0

if (var_c0 != 0)
    sub_140a74f90(var_c0)

int32_t rbx_4 = data_143ce0638

if (rbx_4 s> 1)
    int32_t rsi_2 = arg2[1].d
    int32_t rsi_3
    
    if (rsi_2 == 0)
        rsi_3 = 0
    else
        rsi_3 = rsi_2 - 1
    
    int32_t rax_12
    
    if (rbx_4 == 0)
        rax_12 = 1
    
    if (rbx_4 != 0 || rsi_3 == 0)
        rax_12 = 0
    
    int64_t r14_3 = data_143ce0630
    int32_t rcx_17 = rsi_3 + rax_12
    var_f8 = nullptr
    var_f0_2.d = rbx_4
    
    if (rbx_4 != 0 || rcx_17 != 0)
        sub_1405a4c70(&var_f8, rbx_4 + rcx_17, 0)
        memcpy(var_f8, r14_3, rbx_4 * 2)
    else
        var_f0_2:4.d = 0
    
    sub_140a20ba0(&var_f8, *arg2, rsi_3)
    var_e8 = var_f8
    int32_t var_e0_2 = var_f0_2.d
    int32_t var_dc_2 = var_f0_2:4.d
    int64_t var_f0_3 = 0
    var_f8 = nullptr
else
    sub_140596d10(&var_e8, arg2)

sub_140b2f3e0(&var_d0, &var_e8)
var_f8 = nullptr
int16_t** var_f0_4 = nullptr
sub_1405947f0(&var_f8, 0x1f)
int32_t r15_1 = var_f0_4:4.d
int32_t rsi_4 = var_f0_4.d + 0x1f
var_f0_4.d = rsi_4

if (rsi_4 s> r15_1)
    sub_140594770(&var_f8)
    r15_1 = var_f0_4:4.d
    rsi_4 = var_f0_4.d

int16_t* rbx_5 = var_f8
UnDecorator::getReferenceType(rbx_5, u"SpawnedParticlesAcquireTagName", 0x3e)
sub_140783a30(&var_98, &var_f8)
*var_f0_4 = rbx_5
var_f0_4[1].d = rsi_4
*(var_f0_4 + 0xc) = r15_1
sub_140b2f340(&var_f0_4[2], &var_d0)
var_f0_4[6].d = 0xffffffff
int32_t rcx_27 = var_f0_4[1].d
int16_t* rdx_20

if (rcx_27 == 0)
    rdx_20 = &data_142d40450
else
    rdx_20 = *var_f0_4

int32_t rcx_28

if (rcx_27 == 0)
    rcx_28 = 0
else
    rcx_28 = rcx_27 - 1

sub_140754310(&var_98, &var_d8, sub_1405969c0(rcx_28, rdx_20), var_f0_4, var_f8.d, nullptr)

if (var_c0 != 0)
    sub_140a74f90(var_c0)

int32_t rbx_6 = data_143ce0648

if (rbx_6 s> 1)
    int32_t rsi_5 = arg2[1].d
    int32_t rsi_6
    
    if (rsi_5 == 0)
        rsi_6 = 0
    else
        rsi_6 = rsi_5 - 1
    
    int32_t rax_17
    
    if (rbx_6 == 0)
        rax_17 = 1
    
    if (rbx_6 != 0 || rsi_6 == 0)
        rax_17 = 0
    
    int64_t r14_5 = data_143ce0640
    int32_t rcx_33 = rsi_6 + rax_17
    var_f8 = nullptr
    var_f0_4.d = rbx_6
    
    if (rbx_6 != 0 || rcx_33 != 0)
        sub_1405a4c70(&var_f8, rcx_33 + rbx_6, 0)
        memcpy(var_f8, r14_5, rbx_6 * 2)
    else
        var_f0_4:4.d = 0
    
    sub_140a20ba0(&var_f8, *arg2, rsi_6)
    var_e8 = var_f8
    int32_t var_e0_3 = var_f0_4.d
    int32_t var_dc_3 = var_f0_4:4.d
    int64_t var_f0_5 = 0
    var_f8 = nullptr
else
    sub_140596d10(&var_e8, arg2)

sub_140b2f3e0(&var_d0, &var_e8)
var_f8 = nullptr
int16_t** var_f0_6 = nullptr
sub_1405947f0(&var_f8, 0x18)
int32_t r15_2 = var_f0_6:4.d
int32_t rsi_7 = var_f0_6.d + 0x18
var_f0_6.d = rsi_7

if (rsi_7 s> r15_2)
    sub_140594770(&var_f8)
    r15_2 = var_f0_6:4.d
    rsi_7 = var_f0_6.d

int16_t* rbx_7 = var_f8
UnDecorator::getReferenceType(rbx_7, u"InstanceCountOffsetName", 0x30)
sub_140783a30(&var_98, &var_f8)
*var_f0_6 = rbx_7
var_f0_6[1].d = rsi_7
*(var_f0_6 + 0xc) = r15_2
sub_140b2f340(&var_f0_6[2], &var_d0)
var_f0_6[6].d = 0xffffffff
int32_t rcx_43 = var_f0_6[1].d
int16_t* rdx_30

if (rcx_43 == 0)
    rdx_30 = &data_142d40450
else
    rdx_30 = *var_f0_6

int32_t rcx_44

if (rcx_43 == 0)
    rcx_44 = 0
else
    rcx_44 = rcx_43 - 1

sub_140754310(&var_98, &var_d8, sub_1405969c0(rcx_44, rdx_30), var_f0_6, var_f8.d, nullptr)

if (var_c0 != 0)
    sub_140a74f90(var_c0)

int32_t rbx_8 = data_143ce0698

if (rbx_8 s> 1)
    int32_t rsi_8 = arg2[1].d
    int32_t rsi_9
    
    if (rsi_8 == 0)
        rsi_9 = 0
    else
        rsi_9 = rsi_8 - 1
    
    int32_t rax_22
    
    if (rbx_8 == 0)
        rax_22 = 1
    
    if (rbx_8 != 0 || rsi_9 == 0)
        rax_22 = 0
    
    int64_t r14_7 = data_143ce0690
    int32_t rcx_49 = rsi_9 + rax_22
    var_f8 = nullptr
    var_f0_6.d = rbx_8
    
    if (rbx_8 != 0 || rcx_49 != 0)
        sub_1405a4c70(&var_f8, rbx_8 + rcx_49, 0)
        memcpy(var_f8, r14_7, rbx_8 * 2)
    else
        var_f0_6:4.d = 0
    
    sub_140a20ba0(&var_f8, *arg2, rsi_9)
    var_e8 = var_f8
    int32_t var_e0_4 = var_f0_6.d
    int32_t var_dc_4 = var_f0_6:4.d
    int64_t var_f0_7 = 0
    var_f8 = nullptr
else
    sub_140596d10(&var_e8, arg2)

sub_140b2f3e0(&var_d0, &var_e8)
var_f8 = nullptr
int16_t** var_f0_8 = nullptr
sub_1405947f0(&var_f8, 0x18)
int32_t r15_3 = var_f0_8:4.d
int32_t r14_8 = var_f0_8.d + 0x18
var_f0_8.d = r14_8

if (r14_8 s> r15_3)
    sub_140594770(&var_f8)
    r15_3 = var_f0_8:4.d
    r14_8 = var_f0_8.d

int16_t* rbx_9 = var_f8
UnDecorator::getReferenceType(rbx_9, u"ParticleStrideFloatName", 0x30)
sub_140783a30(&var_98, &var_f8)
*var_f0_8 = rbx_9
var_f0_8[1].d = r14_8
*(var_f0_8 + 0xc) = r15_3
sub_140b2f340(&var_f0_8[2], &var_d0)
var_f0_8[6].d = 0xffffffff
int32_t rcx_59 = var_f0_8[1].d
int16_t* rdx_40

if (rcx_59 == 0)
    rdx_40 = &data_142d40450
else
    rdx_40 = *var_f0_8

int32_t rcx_60

if (rcx_59 == 0)
    rcx_60 = 0
else
    rcx_60 = rcx_59 - 1

sub_140754310(&var_98, &var_d8, sub_1405969c0(rcx_60, rdx_40), var_f0_8, var_f8.d, nullptr)

if (var_c0 != 0)
    sub_140a74f90(var_c0)

int32_t rbx_10 = data_143ce06a8

if (rbx_10 s> 1)
    int32_t rsi_11 = arg2[1].d
    int32_t rsi_12
    
    if (rsi_11 == 0)
        rsi_12 = 0
    else
        rsi_12 = rsi_11 - 1
    
    int32_t rax_27
    
    if (rbx_10 == 0)
        rax_27 = 1
    
    if (rbx_10 != 0 || rsi_12 == 0)
        rax_27 = 0
    
    int64_t r14_9 = data_143ce06a0
    int32_t rcx_65 = rax_27 + rsi_12
    var_f8 = nullptr
    var_f0_8.d = rbx_10
    
    if (rbx_10 != 0 || rcx_65 != 0)
        sub_1405a4c70(&var_f8, rcx_65 + rbx_10, 0)
        memcpy(var_f8, r14_9, rbx_10 * 2)
    else
        var_f0_8:4.d = 0
    
    sub_140a20ba0(&var_f8, *arg2, rsi_12)
    var_e8 = var_f8
    int32_t var_e0_5 = var_f0_8.d
    int32_t var_dc_5 = var_f0_8:4.d
    int64_t var_f0_9 = 0
    var_f8 = nullptr
else
    sub_140596d10(&var_e8, arg2)

sub_140b2f3e0(&var_d0, &var_e8)
var_f8 = nullptr
int16_t** var_f0_10 = nullptr
sub_1405947f0(&var_f8, 0x16)
int32_t r15_4 = var_f0_10:4.d
int32_t r14_10 = var_f0_10.d + 0x16
var_f0_10.d = r14_10

if (r14_10 s> r15_4)
    sub_140594770(&var_f8)
    r15_4 = var_f0_10:4.d
    r14_10 = var_f0_10.d

int16_t* rbx_11 = var_f8
UnDecorator::getReferenceType(rbx_11, u"ParticleStrideIntName", 0x2c)
sub_140783a30(&var_98, &var_f8)
*var_f0_10 = rbx_11
var_f0_10[1].d = r14_10
*(var_f0_10 + 0xc) = r15_4
sub_140b2f340(&var_f0_10[2], &var_d0)
var_f0_10[6].d = 0xffffffff
int32_t rax_31 = var_f0_10[1].d

if (rax_31 != 0)
    r13 = *var_f0_10

int32_t rcx_75 = rax_31 - 1

if (rax_31 == 0)
    rcx_75 = 0

sub_140754310(&var_98, &var_d8, sub_1405969c0(rcx_75, r13), var_f0_10, var_f8.d, nullptr)

if (var_c0 != 0)
    sub_140a74f90(var_c0)

int32_t r8_20 = data_143ce06c8

if (r8_20 s> 1)
    int32_t rax_33 = arg2[1].d
    int32_t rbx_12 = rax_33 - 1
    
    if (rax_33 == 0)
        rbx_12 = 0
    
    int32_t rax_34
    
    if (r8_20 == 0)
        rax_34 = 1
    
    if (r8_20 != 0 || rbx_12 == 0)
        rax_34 = 0
    
    int64_t rdx_53 = data_143ce06c0
    var_f8 = nullptr
    sub_140596860(&var_f8, rdx_53, r8_20, 0, rax_34 + rbx_12)
    sub_140a20ba0(&var_f8, *arg2, rbx_12)
    var_e8 = var_f8
    int32_t var_e0_6 = var_f0_10.d
    int32_t var_dc_6 = var_f0_10:4.d
    int64_t var_f0_11 = 0
    var_f8 = nullptr
else
    sub_140596d10(&var_e8, arg2)

sub_140b2f3e0(&var_d0, &var_e8)
var_f8 = nullptr
int64_t var_f0_12 = 0
sub_1405947f0(&var_f8, 0x1c)
int32_t rax_39 = var_f0_12.d + 0x1c
var_f0_12.d = rax_39

if (rax_39 s> 0)
    sub_140594770(&var_f8)

UnDecorator::getReferenceType(var_f8, u"AcquireTagRegisterIndexName", 0x38)
sub_14077ad70(&var_98, &var_f8, &var_d0)
int16_t* rcx_87 = var_f8

if (rcx_87 != 0)
    sub_140a74f90(rcx_87)

if (var_c0 != 0)
    sub_140a74f90(var_c0)

int32_t r8_23 = data_143ce0658

if (r8_23 s> 1)
    int32_t rax_40 = arg2[1].d
    int32_t rbx_13 = rax_40 - 1
    
    if (rax_40 == 0)
        rbx_13 = 0
    
    int32_t rax_41
    
    if (r8_23 == 0)
        rax_41 = 1
    
    if (r8_23 != 0 || rbx_13 == 0)
        rax_41 = 0
    
    int64_t rdx_59 = data_143ce0650
    var_f8 = nullptr
    sub_140596860(&var_f8, rdx_59, r8_23, 0, rax_41 + rbx_13)
    sub_140a20ba0(&var_f8, *arg2, rbx_13)
    var_e8 = var_f8
    int32_t var_e0_7 = var_f0_12.d
    int32_t var_dc_7 = var_f0_12:4.d
    int64_t var_f0_13 = 0
    var_f8 = nullptr
else
    sub_140596d10(&var_e8, arg2)

sub_140b2f3e0(&var_d0, &var_e8)
var_f8 = nullptr
int64_t var_f0_14 = 0
sub_1405947f0(&var_f8, 0x15)
int32_t rax_46 = var_f0_14.d + 0x15
var_f0_14.d = rax_46

if (rax_46 s> 0)
    sub_140594770(&var_f8)

UnDecorator::getReferenceType(var_f8, u"SpawnedIDsBufferName", 0x2a)
sub_14077ad70(&var_98, &var_f8, &var_d0)
int16_t* rcx_97 = var_f8

if (rcx_97 != 0)
    sub_140a74f90(rcx_97)

if (var_c0 != 0)
    sub_140a74f90(var_c0)

int32_t r8_26 = data_143ce0668

if (r8_26 s> 1)
    int32_t rax_47 = arg2[1].d
    int32_t rbx_14 = rax_47 - 1
    
    if (rax_47 == 0)
        rbx_14 = 0
    
    int32_t rax_48
    
    if (r8_26 == 0)
        rax_48 = 1
    
    if (r8_26 != 0 || rbx_14 == 0)
        rax_48 = 0
    
    int64_t rdx_65 = data_143ce0660
    var_f8 = nullptr
    sub_140596860(&var_f8, rdx_65, r8_26, 0, rax_48 + rbx_14)
    sub_140a20ba0(&var_f8, *arg2, rbx_14)
    var_e8 = var_f8
    int32_t var_e0_8 = var_f0_14.d
    int32_t var_dc_8 = var_f0_14:4.d
    int64_t var_f0_15 = 0
    var_f8 = nullptr
else
    sub_140596d10(&var_e8, arg2)

sub_140b2f3e0(&var_d0, &var_e8)
var_f8 = nullptr
int64_t var_f0_16 = 0
sub_1405947f0(&var_f8, 0x13)
int32_t rax_53 = var_f0_16.d + 0x13
var_f0_16.d = rax_53

if (rax_53 s> 0)
    sub_140594770(&var_f8)

UnDecorator::getReferenceType(var_f8, u"IDToIndexTableName", 0x26)
sub_14077ad70(&var_98, &var_f8, &var_d0)
int16_t* rcx_107 = var_f8

if (rcx_107 != 0)
    sub_140a74f90(rcx_107)

if (var_c0 != 0)
    sub_140a74f90(var_c0)

int32_t r8_29 = data_143ce0678

if (r8_29 s> 1)
    int32_t rax_54 = arg2[1].d
    int32_t rbx_15 = rax_54 - 1
    
    if (rax_54 == 0)
        rbx_15 = 0
    
    int32_t rax_55
    
    if (r8_29 == 0)
        rax_55 = 1
    
    if (r8_29 != 0 || rbx_15 == 0)
        rax_55 = 0
    
    int64_t rdx_71 = data_143ce0670
    var_f8 = nullptr
    sub_140596860(&var_f8, rdx_71, r8_29, 0, rax_55 + rbx_15)
    sub_140a20ba0(&var_f8, *arg2, rbx_15)
    var_e8 = var_f8
    int32_t var_e0_9 = var_f0_16.d
    int32_t var_dc_9 = var_f0_16:4.d
    int64_t var_f0_17 = 0
    var_f8 = nullptr
else
    sub_140596d10(&var_e8, arg2)

sub_140b2f3e0(&var_d0, &var_e8)
var_f8 = nullptr
int64_t var_f0_18 = 0
sub_1405947f0(&var_f8, 0x15)
int32_t rax_60 = var_f0_18.d + 0x15
var_f0_18.d = rax_60

if (rax_60 s> 0)
    sub_140594770(&var_f8)

UnDecorator::getReferenceType(var_f8, u"InputFloatBufferName", 0x2a)
sub_14077ad70(&var_98, &var_f8, &var_d0)
int16_t* rcx_117 = var_f8

if (rcx_117 != 0)
    sub_140a74f90(rcx_117)

if (var_c0 != 0)
    sub_140a74f90(var_c0)

int32_t r8_32 = data_143ce0688

if (r8_32 s> 1)
    int32_t rax_61 = arg2[1].d
    int32_t rbx_16 = rax_61 - 1
    
    if (rax_61 == 0)
        rbx_16 = 0
    
    int32_t rax_62
    
    if (r8_32 == 0)
        rax_62 = 1
    
    if (r8_32 != 0 || rbx_16 == 0)
        rax_62 = 0
    
    int64_t rdx_77 = data_143ce0680
    var_f8 = nullptr
    sub_140596860(&var_f8, rdx_77, r8_32, 0, rax_62 + rbx_16)
    sub_140a20ba0(&var_f8, *arg2, rbx_16)
    var_e8 = var_f8
    int32_t var_e0_10 = var_f0_18.d
    int32_t var_dc_10 = var_f0_18:4.d
    int64_t var_f0_19 = 0
    var_f8 = nullptr
else
    sub_140596d10(&var_e8, arg2)

sub_140b2f3e0(&var_d0, &var_e8)
var_f8 = nullptr
int64_t var_f0_20 = 0
sub_1405947f0(&var_f8, 0x13)
int32_t rax_67 = var_f0_20.d + 0x13
var_f0_20.d = rax_67

if (rax_67 s> 0)
    sub_140594770(&var_f8)

UnDecorator::getReferenceType(var_f8, u"InputIntBufferName", 0x26)
sub_14077ad70(&var_98, &var_f8, &var_d0)
int16_t* rcx_127 = var_f8

if (rcx_127 != 0)
    sub_140a74f90(rcx_127)

if (var_c0 != 0)
    sub_140a74f90(var_c0)

int32_t r8_35 = data_143ce06b8

if (r8_35 s> 1)
    int32_t rax_68 = arg2[1].d
    int32_t rbx_17 = rax_68 - 1
    
    if (rax_68 == 0)
        rbx_17 = 0
    
    if (r8_35 != 0 || rbx_17 == 0)
        r12 = 0
    
    int64_t rdx_83 = data_143ce06b0
    var_f8 = nullptr
    sub_140596860(&var_f8, rdx_83, r8_35, 0, r12 + rbx_17)
    sub_140a20ba0(&var_f8, *arg2, rbx_17)
    var_e8 = var_f8
    int32_t var_e0_11 = var_f0_20.d
    int32_t var_dc_11 = var_f0_20:4.d
    int64_t var_f0_21 = 0
    var_f8 = nullptr
else
    sub_140596d10(&var_e8, arg2)

sub_140b2f3e0(&var_d0, &var_e8)
var_f8 = nullptr
int32_t var_f0_22 = 0
sub_1405947f0(&var_f8, 0x15)
int32_t rax_73 = var_f0_22 + 0x15
var_f0_22 = rax_73

if (rax_73 s> 0)
    sub_140594770(&var_f8)

UnDecorator::getReferenceType(var_f8, u"AttributeIndicesName", 0x2a)
sub_14077ad70(&var_98, &var_f8, &var_d0)
int16_t* rcx_137 = var_f8

if (rcx_137 != 0)
    sub_140a74f90(rcx_137)

if (var_c0 != 0)
    sub_140a74f90(var_c0)

sub_140b2f3a0(&var_d0, rax_6)
var_f8 = nullptr
int32_t var_f0_23 = 0
sub_1405947f0(&var_f8, 0x13)
int32_t rax_74 = var_f0_23 + 0x13
var_f0_23 = rax_74

if (rax_74 s> 0)
    sub_140594770(&var_f8)

UnDecorator::getReferenceType(var_f8, u"AttributeInt4Count", 0x26)
sub_14077ad70(&var_98, &var_f8, &var_d0)
int16_t* rcx_144 = var_f8

if (rcx_144 != 0)
    sub_140a74f90(rcx_144)

if (var_c0 != 0)
    sub_140a74f90(var_c0)

int64_t* rax_75 = sub_140b3b600(&var_e8, data_14396ebf8, &var_98)
int32_t rdx_92 = rax_75[1].d
int32_t r8_40 = rdx_92 - 1

if (rdx_92 == 0)
    r8_40 = 0

sub_140a20ba0(arg3, *rax_75, r8_40)
int16_t* rcx_148 = var_e8

if (rcx_148 != 0)
    sub_140a74f90(rcx_148)

int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

void* result = sub_1407464c0(&var_98)
__security_check_cookie(rax_1 ^ &var_128)
return result
