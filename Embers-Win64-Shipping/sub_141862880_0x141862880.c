// 函数: sub_141862880
// 地址: 0x141862880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
*arg1 = &data_142fe7918
arg1[1].d = arg2
arg1[2] = arg3
arg1[3] = arg4
arg1[4] = arg7
arg1[5] = (*(*arg7 + 0x18))(arg7)
arg1[6] = (*(*arg7 + 0x20))(arg7)
arg1[7] = (*(*arg7 + 0x30))(arg7)
arg1[8] = (*(*arg7 + 0x28))(arg7)
arg1[9] = arg8
arg1[0xa] = arg1[3][1]
arg1[0xb].d = 0
*(arg1 + 0x5c) = 0
arg1[0xc].d = 0
arg1[0xd] = 0
arg1[0xe] = 0
InitializeCriticalSection(&arg1[0xf])
SetCriticalSectionSpinCount(&arg1[0xf], 0xfa0)
__builtin_memset(&arg1[0x14], 0, 0x12)
int64_t var_148 = 0
int32_t var_140 = 0
sub_1405947f0(&var_148, 0x1a)
int32_t rax_12 = var_140 + 0x1a
var_140 = rax_12

if (rax_12 s> 0)
    sub_140594770(&var_148)

UnDecorator::getReferenceType(var_148, u"Scanner: Created Scanners", 0x34)
int64_t* rcx_10 = arg1[9]
int64_t r8
r8.b = 4
int64_t rax_14 = (*(*rcx_10 + 8))(rcx_10, &var_148, r8, 0)
int64_t rcx_11 = var_148
arg1[0x17] = rax_14

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t var_138 = 0
int32_t var_130 = 0
sub_1405947f0(&var_138, 0x1a)
int32_t rax_15 = var_130 + 0x1a
var_130 = rax_15

if (rax_15 s> 0)
    sub_140594770(&var_138)

UnDecorator::getReferenceType(var_138, u"Scanner: Running Scanners", 0x34)
int64_t* rcx_15 = arg1[9]
int64_t r8_1
r8_1.b = 4
int64_t rax_17 = (*(*rcx_15 + 8))(rcx_15, &var_138, r8_1, 0)
int64_t rcx_16 = var_138
arg1[0x18] = rax_17

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t var_128 = 0
int32_t var_120 = 0
sub_1405947f0(&var_128, 0x1b)
int32_t rax_18 = var_120 + 0x1b
var_120 = rax_18

if (rax_18 s> 0)
    sub_140594770(&var_128)

UnDecorator::getReferenceType(var_128, u"Scanner: Complete Scanners", 0x36)
int64_t* rcx_20 = arg1[9]
int64_t r8_2
r8_2.b = 4
int64_t rax_20 = (*(*rcx_20 + 8))(rcx_20, &var_128, r8_2, 0)
int64_t rcx_21 = var_128
arg1[0x19] = rax_20

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t var_118 = 0
int32_t var_110 = 0
sub_1405947f0(&var_118, 0x12)
int32_t rax_21 = var_110 + 0x12
var_110 = rax_21

if (rax_21 s> 0)
    sub_140594770(&var_118)

UnDecorator::getReferenceType(var_118, u"Scanner: CPU Time", 0x24)
int64_t* rcx_25 = arg1[9]
int64_t rax_23 = (*(*rcx_25 + 8))(rcx_25, &var_118, 0, 0)
int64_t rcx_26 = var_118
arg1[0x1a] = rax_23

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

int64_t var_108 = 0
int32_t var_100 = 0
sub_1405947f0(&var_108, 0x13)
int32_t rax_24 = var_100 + 0x13
var_100 = rax_24

if (rax_24 s> 0)
    sub_140594770(&var_108)

UnDecorator::getReferenceType(var_108, u"Scanner: Real Time", 0x26)
int64_t* rcx_30 = arg1[9]
int64_t rax_26 = (*(*rcx_30 + 8))(rcx_30, &var_108, 0, 0)
int64_t rcx_31 = var_108
arg1[0x1b] = rax_26

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

int64_t var_f8 = 0
int32_t var_f0 = 0
sub_1405947f0(&var_f8, 0x19)
int32_t rax_27 = var_f0 + 0x19
var_f0 = rax_27

if (rax_27 s> 0)
    sub_140594770(&var_f8)

UnDecorator::getReferenceType(var_f8, u"Scanner: Hash Collisions", 0x32)
int64_t* rcx_35 = arg1[9]
int64_t r8_3
r8_3.b = 4
int64_t rax_29 = (*(*rcx_35 + 8))(rcx_35, &var_f8, r8_3, 0)
int64_t rcx_36 = var_f8
arg1[0x1c] = rax_29

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

int64_t var_e8 = 0
int32_t var_e0 = 0
sub_1405947f0(&var_e8, 0x14)
int32_t rax_30 = var_e0 + 0x14
var_e0 = rax_30

if (rax_30 s> 0)
    sub_140594770(&var_e8)

UnDecorator::getReferenceType(var_e8, u"Scanner: Total Data", 0x28)
int64_t* rcx_40 = arg1[9]
int64_t r8_4
r8_4.b = 1
int64_t rax_32 = (*(*rcx_40 + 8))(rcx_40, &var_e8, r8_4, 0)
int64_t rcx_41 = var_e8
arg1[0x1d] = rax_32

if (rcx_41 != 0)
    sub_140a74f90(rcx_41)

int64_t var_d8 = 0
int32_t var_d0 = 0
sub_1405947f0(&var_d8, 0x16)
int32_t rax_33 = var_d0 + 0x16
var_d0 = rax_33

if (rax_33 s> 0)
    sub_140594770(&var_d8)

UnDecorator::getReferenceType(var_d8, u"Scanner: Skipped Data", 0x2c)
int64_t* rcx_45 = arg1[9]
int64_t r8_5
r8_5.b = 1
int64_t rax_35 = (*(*rcx_45 + 8))(rcx_45, &var_d8, r8_5, 0)
int64_t rcx_46 = var_d8
arg1[0x1e] = rax_35

if (rcx_46 != 0)
    sub_140a74f90(rcx_46)

int64_t var_c8 = 0
int32_t var_c0 = 0
sub_1405947f0(&var_c8, 0x1a)
int32_t rax_36 = var_c0 + 0x1a
var_c0 = rax_36

if (rax_36 s> 0)
    sub_140594770(&var_c8)

UnDecorator::getReferenceType(var_c8, u"Scanner: Processing Speed", 0x34)
int64_t* rcx_50 = arg1[9]
int64_t r8_6
r8_6.b = 2
int64_t rax_38 = (*(*rcx_50 + 8))(rcx_50, &var_c8, r8_6, 0)
int64_t rcx_51 = var_c8
arg1[0x1f] = rax_38

if (rcx_51 != 0)
    sub_140a74f90(rcx_51)

sub_141828360(arg1[0x17], 1)
data_143efabd8 += 1
void*** var_58 = nullptr
void** const var_48 = &data_142da2668
void*** var_40 = arg1
int64_t* (* var_68)(int64_t* arg1, void** arg2) = sub_14187aef0
int64_t var_a8[0x2]
var_a8[0] = 0
int64_t var_98 = 0
void* var_b8
int64_t* rax_39 = sub_141858790(&var_b8, 3, &var_68, &var_a8, arg5, arg6)

if (&arg1[0xd] != rax_39)
    arg1[0xd] = *rax_39
    *rax_39 = 0
    sub_1405aeff0(&arg1[0xe], &rax_39[1])

int64_t* var_b0

if (var_b0 != 0)
    var_b0[1].d -= 1
    
    if (var_b0[1].d == 1)
        (**var_b0)(var_b0)
        int32_t rsi_1 = *(var_b0 + 0xc)
        *(var_b0 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_b0 + 8))(var_b0, zx.q(rsi_1))

if (var_68 != 0)
    void** const* rcx_58 = &var_48
    
    if (var_58 != 0)
        rcx_58 = var_58
    
    void** const rdx_21 = *rcx_58
    rdx_21[2](rcx_58, rdx_21)

__security_check_cookie(rax_1 ^ &var_168)
return arg1
