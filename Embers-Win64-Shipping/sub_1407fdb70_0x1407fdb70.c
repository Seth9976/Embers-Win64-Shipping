// 函数: sub_1407fdb70
// 地址: 0x1407fdb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t rbx = data_143ce2dd0
int32_t r12 = 1
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int16_t* var_e8
int16_t* var_d8

if (rbx s> 1)
    int32_t rsi_1 = arg2[1].d
    int32_t rsi_2
    
    if (rsi_1 == 0)
        rsi_2 = 0
    else
        rsi_2 = rsi_1 - 1
    
    int32_t rax_2
    
    if (rbx == 0)
        rax_2 = 1
    
    if (rbx != 0 || rsi_2 == 0)
        rax_2 = 0
    
    int64_t r14_1 = data_143ce2dc8
    int32_t rcx_1 = rax_2 + rsi_2
    var_e8 = nullptr
    int64_t var_e0
    var_e0.d = rbx
    
    if (rbx != 0 || rcx_1 != 0)
        sub_1405a4c70(&var_e8, rbx + rcx_1, 0)
        memcpy(var_e8, r14_1, rbx * 2)
    else
        var_e0:4.d = 0
    
    sub_140a20ba0(&var_e8, *arg2, rsi_2)
    var_d8 = var_e8
    int32_t var_d0_1 = var_e0.d
    int32_t var_cc_1 = var_e0:4.d
    int64_t var_e0_1 = 0
    var_e8 = nullptr
else
    sub_140596d10(&var_d8, arg2)

void var_c0
sub_140b2f3e0(&var_c0, &var_d8)
var_e8 = nullptr
int64_t* var_e0_2 = nullptr
sub_1405947f0(&var_e8, 0xf)
int32_t r14_2 = var_e0_2:4.d
int32_t rsi_3 = var_e0_2.d + 0xf
var_e0_2.d = rsi_3

if (rsi_3 s> r14_2)
    sub_140594770(&var_e8)
    r14_2 = var_e0_2:4.d
    rsi_3 = var_e0_2.d

int16_t* rbx_1 = var_e8
UnDecorator::getReferenceType(rbx_1, u"TilingAxesName", 0x1e)
sub_140783a30(&var_98, &var_e8)
*var_e0_2 = rbx_1
var_e0_2[1].d = rsi_3
*(var_e0_2 + 0xc) = r14_2
sub_140b2f340(&var_e0_2[2], &var_c0)
var_e0_2[6].d = 0xffffffff
int16_t* const r13 = &data_142d40450
int32_t rcx_11 = var_e0_2[1].d
int16_t* rdx_7

if (rcx_11 == 0)
    rdx_7 = &data_142d40450
else
    rdx_7 = *var_e0_2

int32_t rcx_12

if (rcx_11 == 0)
    rcx_12 = 0
else
    rcx_12 = rcx_11 - 1

void var_c8
sub_140754310(&var_98, &var_c8, sub_1405969c0(rcx_12, rdx_7), var_e0_2, var_e8.d, nullptr)
int64_t var_b0

if (var_b0 != 0)
    sub_140a74f90(var_b0)

int32_t rbx_2 = data_143ce2de0

if (rbx_2 s> 1)
    int32_t rsi_4 = arg2[1].d
    int32_t rsi_5
    
    if (rsi_4 == 0)
        rsi_5 = 0
    else
        rsi_5 = rsi_4 - 1
    
    int32_t rax_7
    
    if (rbx_2 == 0)
        rax_7 = 1
    
    if (rbx_2 != 0 || rsi_5 == 0)
        rax_7 = 0
    
    int64_t r14_3 = data_143ce2dd8
    int32_t rcx_17 = rax_7 + rsi_5
    var_e8 = nullptr
    var_e0_2.d = rbx_2
    
    if (rbx_2 != 0 || rcx_17 != 0)
        sub_1405a4c70(&var_e8, rcx_17 + rbx_2, 0)
        memcpy(var_e8, r14_3, rbx_2 * 2)
    else
        var_e0_2:4.d = 0
    
    sub_140a20ba0(&var_e8, *arg2, rsi_5)
    var_d8 = var_e8
    int32_t var_d0_2 = var_e0_2.d
    int32_t var_cc_2 = var_e0_2:4.d
    int64_t var_e0_3 = 0
    var_e8 = nullptr
else
    sub_140596d10(&var_d8, arg2)

sub_140b2f3e0(&var_c0, &var_d8)
var_e8 = nullptr
int16_t** var_e0_4 = nullptr
sub_1405947f0(&var_e8, 0xf)
int32_t r15_1 = var_e0_4:4.d
int32_t r14_4 = var_e0_4.d + 0xf
var_e0_4.d = r14_4

if (r14_4 s> r15_1)
    sub_140594770(&var_e8)
    r15_1 = var_e0_4:4.d
    r14_4 = var_e0_4.d

int16_t* rbx_3 = var_e8
UnDecorator::getReferenceType(rbx_3, u"DimensionsName", 0x1e)
sub_140783a30(&var_98, &var_e8)
*var_e0_4 = rbx_3
var_e0_4[1].d = r14_4
*(var_e0_4 + 0xc) = r15_1
sub_140b2f340(&var_e0_4[2], &var_c0)
var_e0_4[6].d = 0xffffffff
int32_t rcx_27 = var_e0_4[1].d
int16_t* rdx_17

if (rcx_27 == 0)
    rdx_17 = &data_142d40450
else
    rdx_17 = *var_e0_4

int32_t rcx_28

if (rcx_27 == 0)
    rcx_28 = 0
else
    rcx_28 = rcx_27 - 1

sub_140754310(&var_98, &var_c8, sub_1405969c0(rcx_28, rdx_17), var_e0_4, var_e8.d, nullptr)

if (var_b0 != 0)
    sub_140a74f90(var_b0)

int32_t rbx_4 = data_143ce2df0

if (rbx_4 s> 1)
    int32_t rsi_7 = arg2[1].d
    int32_t rsi_8
    
    if (rsi_7 == 0)
        rsi_8 = 0
    else
        rsi_8 = rsi_7 - 1
    
    int32_t rax_12
    
    if (rbx_4 == 0)
        rax_12 = 1
    
    if (rbx_4 != 0 || rsi_8 == 0)
        rax_12 = 0
    
    int64_t r14_5 = data_143ce2de8
    int32_t rcx_33 = rsi_8 + rax_12
    var_e8 = nullptr
    var_e0_4.d = rbx_4
    
    if (rbx_4 != 0 || rcx_33 != 0)
        sub_1405a4c70(&var_e8, rbx_4 + rcx_33, 0)
        memcpy(var_e8, r14_5, rbx_4 * 2)
    else
        var_e0_4:4.d = 0
    
    sub_140a20ba0(&var_e8, *arg2, rsi_8)
    var_d8 = var_e8
    int32_t var_d0_3 = var_e0_4.d
    int32_t var_cc_3 = var_e0_4:4.d
    int64_t var_e0_5 = 0
    var_e8 = nullptr
else
    sub_140596d10(&var_d8, arg2)

sub_140b2f3e0(&var_c0, &var_d8)
var_e8 = nullptr
int16_t** var_e0_6 = nullptr
sub_1405947f0(&var_e8, 0xe)
int32_t r15_2 = var_e0_6:4.d
int32_t rsi_9 = var_e0_6.d + 0xe
var_e0_6.d = rsi_9

if (rsi_9 s> r15_2)
    sub_140594770(&var_e8)
    r15_2 = var_e0_6:4.d
    rsi_9 = var_e0_6.d

int16_t* rbx_5 = var_e8
UnDecorator::getReferenceType(rbx_5, u"MinBoundsName", 0x1c)
sub_140783a30(&var_98, &var_e8)
*var_e0_6 = rbx_5
var_e0_6[1].d = rsi_9
*(var_e0_6 + 0xc) = r15_2
sub_140b2f340(&var_e0_6[2], &var_c0)
var_e0_6[6].d = 0xffffffff
int32_t rcx_43 = var_e0_6[1].d
int16_t* rdx_27

if (rcx_43 == 0)
    rdx_27 = &data_142d40450
else
    rdx_27 = *var_e0_6

int32_t rcx_44

if (rcx_43 == 0)
    rcx_44 = 0
else
    rcx_44 = rcx_43 - 1

sub_140754310(&var_98, &var_c8, sub_1405969c0(rcx_44, rdx_27), var_e0_6, var_e8.d, nullptr)

if (var_b0 != 0)
    sub_140a74f90(var_b0)

int32_t rbx_6 = data_143ce2e00

if (rbx_6 s> 1)
    int32_t rsi_10 = arg2[1].d
    int32_t rsi_11
    
    if (rsi_10 == 0)
        rsi_11 = 0
    else
        rsi_11 = rsi_10 - 1
    
    int32_t rax_17
    
    if (rbx_6 == 0)
        rax_17 = 1
    
    if (rbx_6 != 0 || rsi_11 == 0)
        rax_17 = 0
    
    int64_t r14_7 = data_143ce2df8
    int32_t rcx_49 = rsi_11 + rax_17
    var_e8 = nullptr
    var_e0_6.d = rbx_6
    
    if (rbx_6 != 0 || rcx_49 != 0)
        sub_1405a4c70(&var_e8, rcx_49 + rbx_6, 0)
        memcpy(var_e8, r14_7, rbx_6 * 2)
    else
        var_e0_6:4.d = 0
    
    sub_140a20ba0(&var_e8, *arg2, rsi_11)
    var_d8 = var_e8
    int32_t var_d0_4 = var_e0_6.d
    int32_t var_cc_4 = var_e0_6:4.d
    int64_t var_e0_7 = 0
    var_e8 = nullptr
else
    sub_140596d10(&var_d8, arg2)

sub_140b2f3e0(&var_c0, &var_d8)
var_e8 = nullptr
int16_t** var_e0_8 = nullptr
sub_1405947f0(&var_e8, 0xe)
int32_t r15_3 = var_e0_8:4.d
int32_t r14_8 = var_e0_8.d + 0xe
var_e0_8.d = r14_8

if (r14_8 s> r15_3)
    sub_140594770(&var_e8)
    r15_3 = var_e0_8:4.d
    r14_8 = var_e0_8.d

int16_t* rbx_7 = var_e8
UnDecorator::getReferenceType(rbx_7, u"MaxBoundsName", 0x1c)
sub_140783a30(&var_98, &var_e8)
*var_e0_8 = rbx_7
var_e0_8[1].d = r14_8
*(var_e0_8 + 0xc) = r15_3
sub_140b2f340(&var_e0_8[2], &var_c0)
var_e0_8[6].d = 0xffffffff
int32_t rcx_59 = var_e0_8[1].d
int16_t* rdx_37

if (rcx_59 == 0)
    rdx_37 = &data_142d40450
else
    rdx_37 = *var_e0_8

int32_t rcx_60

if (rcx_59 == 0)
    rcx_60 = 0
else
    rcx_60 = rcx_59 - 1

sub_140754310(&var_98, &var_c8, sub_1405969c0(rcx_60, rdx_37), var_e0_8, var_e8.d, nullptr)

if (var_b0 != 0)
    sub_140a74f90(var_b0)

int32_t rbx_8 = data_143ce2dc0

if (rbx_8 s> 1)
    int32_t rsi_13 = arg2[1].d
    int32_t rsi_14
    
    if (rsi_13 == 0)
        rsi_14 = 0
    else
        rsi_14 = rsi_13 - 1
    
    int32_t rax_22
    
    if (rbx_8 == 0)
        rax_22 = 1
    
    if (rbx_8 != 0 || rsi_14 == 0)
        rax_22 = 0
    
    int64_t r14_9 = data_143ce2db8
    int32_t rcx_65 = rsi_14 + rax_22
    var_e8 = nullptr
    var_e0_8.d = rbx_8
    
    if (rbx_8 != 0 || rcx_65 != 0)
        sub_1405a4c70(&var_e8, rbx_8 + rcx_65, 0)
        memcpy(var_e8, r14_9, rbx_8 * 2)
    else
        var_e0_8:4.d = 0
    
    sub_140a20ba0(&var_e8, *arg2, rsi_14)
    var_d8 = var_e8
    int32_t var_d0_5 = var_e0_8.d
    int32_t var_cc_5 = var_e0_8:4.d
    int64_t var_e0_9 = 0
    var_e8 = nullptr
else
    sub_140596d10(&var_d8, arg2)

sub_140b2f3e0(&var_c0, &var_d8)
var_e8 = nullptr
int16_t** var_e0_10 = nullptr
sub_1405947f0(&var_e8, 0xc)
int32_t r15_4 = var_e0_10:4.d
int32_t r14_10 = var_e0_10.d + 0xc
var_e0_10.d = r14_10

if (r14_10 s> r15_4)
    sub_140594770(&var_e8)
    r15_4 = var_e0_10:4.d
    r14_10 = var_e0_10.d

int16_t* rbx_9 = var_e8
UnDecorator::getReferenceType(rbx_9, u"TextureName", 0x18)
sub_140783a30(&var_98, &var_e8)
*var_e0_10 = rbx_9
var_e0_10[1].d = r14_10
*(var_e0_10 + 0xc) = r15_4
sub_140b2f340(&var_e0_10[2], &var_c0)
var_e0_10[6].d = 0xffffffff
int32_t rax_26 = var_e0_10[1].d

if (rax_26 != 0)
    r13 = *var_e0_10

int32_t rcx_75 = rax_26 - 1

if (rax_26 == 0)
    rcx_75 = 0

sub_140754310(&var_98, &var_c8, sub_1405969c0(rcx_75, r13), var_e0_10, var_e8.d, nullptr)

if (var_b0 != 0)
    sub_140a74f90(var_b0)

int32_t r8_20 = data_143ce2db0

if (r8_20 s> 1)
    int32_t rax_28 = arg2[1].d
    int32_t rbx_10 = rax_28 - 1
    
    if (rax_28 == 0)
        rbx_10 = 0
    
    if (r8_20 != 0 || rbx_10 == 0)
        r12 = 0
    
    int64_t rdx_50 = data_143ce2da8
    var_e8 = nullptr
    sub_140596860(&var_e8, rdx_50, r8_20, 0, rbx_10 + r12)
    sub_140a20ba0(&var_e8, *arg2, rbx_10)
    var_d8 = var_e8
    int32_t var_d0_6 = var_e0_10.d
    int32_t var_cc_6 = var_e0_10:4.d
    int64_t var_e0_11 = 0
    var_e8 = nullptr
else
    sub_140596d10(&var_d8, arg2)

sub_140b2f3e0(&var_c0, &var_d8)
var_e8 = nullptr
int32_t var_e0_12 = 0
sub_1405947f0(&var_e8, 0xc)
int32_t rax_33 = var_e0_12 + 0xc
var_e0_12 = rax_33

if (rax_33 s> 0)
    sub_140594770(&var_e8)

UnDecorator::getReferenceType(var_e8, u"SamplerName", 0x18)
sub_14077ad70(&var_98, &var_e8, &var_c0)
int16_t* rcx_87 = var_e8

if (rcx_87 != 0)
    sub_140a74f90(rcx_87)

if (var_b0 != 0)
    sub_140a74f90(var_b0)

int64_t* rax_34 = sub_140b3b600(&var_e8, data_14396ef60, &var_98)
int32_t rdx_56 = rax_34[1].d
int32_t r8_24 = rdx_56 - 1

if (rdx_56 == 0)
    r8_24 = 0

sub_140a20ba0(arg3, *rax_34, r8_24)
int16_t* rcx_91 = var_e8

if (rcx_91 != 0)
    sub_140a74f90(rcx_91)

int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

void* result = sub_1407464c0(&var_98)
__security_check_cookie(rax_1 ^ &var_118)
return result
