// 函数: sub_141861910
// 地址: 0x141861910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
arg1[1] = arg2
*arg1 = &data_142fe7620
arg1[4] = arg7
arg1[2] = arg3
arg1[3] = arg4
int64_t rax_4 = (*(*arg4 + 0x18))(arg4)
int64_t* rcx_1 = arg1[3]
arg1[5] = rax_4
int64_t rax_6 = (*(*rcx_1 + 0x28))(rcx_1)
int64_t* rcx_2 = arg1[3]
arg1[6] = rax_6
arg1[7] = (*(*rcx_2 + 0x50))(rcx_2)
__builtin_memset(&arg1[8], 0, 0x18)
InitializeCriticalSection(&arg1[0xb])
SetCriticalSectionSpinCount(&arg1[0xb], 0xfa0)
__builtin_memset(&arg1[0x10], 0, 0x12)
arg1[0x13].d = 0x64
__builtin_memset(&arg1[0x14], 0, 0x20)
int32_t i_1 = arg1[0x13].d

if (i_1 s> *(arg1 + 0xac))
    sub_1405a5410(&arg1[0x14], i_1)
    i_1 = arg1[0x13].d

int64_t r14 = sx.q(arg1[0x15].d)
int32_t rax_9 = r14.d + i_1
arg1[0x15].d = rax_9

if (rax_9 s> *(arg1 + 0xac))
    sub_1405a4f90(&arg1[0x14])

int64_t* rax_12 = &arg1[0x14][r14 * 2]

if (i_1 != 0)
    int32_t i
    
    do
        *rax_12 = 0
        rax_12[1] = 0
        rax_12 = &rax_12[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t var_158 = 0
int32_t var_150 = 0
sub_1405947f0(&var_158, 0x1a)
int32_t rax_13 = var_150 + 0x1a
var_150 = rax_13

if (rax_13 s> 0)
    sub_140594770(&var_158)

UnDecorator::getReferenceType(var_158, u"Scanner: Created Scanners", 0x34)
int64_t* rcx_10 = arg1[4]
int64_t r8
r8.b = 4
int64_t rax_15 = (*(*rcx_10 + 8))(rcx_10, &var_158, r8, 0)
int64_t rcx_11 = var_158
arg1[0x18] = rax_15

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t var_148 = 0
int32_t var_140 = 0
sub_1405947f0(&var_148, 0x1a)
int32_t rax_16 = var_140 + 0x1a
var_140 = rax_16

if (rax_16 s> 0)
    sub_140594770(&var_148)

UnDecorator::getReferenceType(var_148, u"Scanner: Running Scanners", 0x34)
int64_t* rcx_15 = arg1[4]
int64_t r8_1
r8_1.b = 4
int64_t rax_18 = (*(*rcx_15 + 8))(rcx_15, &var_148, r8_1, 0)
int64_t rcx_16 = var_148
arg1[0x19] = rax_18

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t var_138 = 0
int32_t var_130 = 0
sub_1405947f0(&var_138, 0x1b)
int32_t rax_19 = var_130 + 0x1b
var_130 = rax_19

if (rax_19 s> 0)
    sub_140594770(&var_138)

UnDecorator::getReferenceType(var_138, u"Scanner: Complete Scanners", 0x36)
int64_t* rcx_20 = arg1[4]
int64_t r8_2
r8_2.b = 4
int64_t rax_21 = (*(*rcx_20 + 8))(rcx_20, &var_138, r8_2, 0)
int64_t rcx_21 = var_138
arg1[0x1a] = rax_21

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t var_128 = 0
int32_t var_120 = 0
sub_1405947f0(&var_128, 0x12)
int32_t rax_22 = var_120 + 0x12
var_120 = rax_22

if (rax_22 s> 0)
    sub_140594770(&var_128)

UnDecorator::getReferenceType(var_128, u"Scanner: CPU Time", 0x24)
int64_t* rcx_25 = arg1[4]
int64_t rax_24 = (*(*rcx_25 + 8))(rcx_25, &var_128, 0, 0)
int64_t rcx_26 = var_128
arg1[0x1b] = rax_24

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

int64_t var_118 = 0
int32_t var_110 = 0
sub_1405947f0(&var_118, 0x13)
int32_t rax_25 = var_110 + 0x13
var_110 = rax_25

if (rax_25 s> 0)
    sub_140594770(&var_118)

UnDecorator::getReferenceType(var_118, u"Scanner: Real Time", 0x26)
int64_t* rcx_30 = arg1[4]
int64_t rax_27 = (*(*rcx_30 + 8))(rcx_30, &var_118, 0, 0)
int64_t rcx_31 = var_118
arg1[0x1c] = rax_27

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

int64_t var_108 = 0
int32_t var_100 = 0
sub_1405947f0(&var_108, 0x19)
int32_t rax_28 = var_100 + 0x19
var_100 = rax_28

if (rax_28 s> 0)
    sub_140594770(&var_108)

UnDecorator::getReferenceType(var_108, u"Scanner: Hash Collisions", 0x32)
int64_t* rcx_35 = arg1[4]
int64_t r8_3
r8_3.b = 4
int64_t rax_30 = (*(*rcx_35 + 8))(rcx_35, &var_108, r8_3, 0)
int64_t rcx_36 = var_108
arg1[0x1d] = rax_30

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

int64_t var_f8 = 0
int32_t var_f0 = 0
sub_1405947f0(&var_f8, 0x14)
int32_t rax_31 = var_f0 + 0x14
var_f0 = rax_31

if (rax_31 s> 0)
    sub_140594770(&var_f8)

UnDecorator::getReferenceType(var_f8, u"Scanner: Total Data", 0x28)
int64_t* rcx_40 = arg1[4]
int64_t r8_4
r8_4.b = 1
int64_t rax_33 = (*(*rcx_40 + 8))(rcx_40, &var_f8, r8_4, 0)
int64_t rcx_41 = var_f8
arg1[0x1e] = rax_33

if (rcx_41 != 0)
    sub_140a74f90(rcx_41)

int64_t var_e8 = 0
int32_t var_e0 = 0
sub_1405947f0(&var_e8, 0x16)
int32_t rax_34 = var_e0 + 0x16
var_e0 = rax_34

if (rax_34 s> 0)
    sub_140594770(&var_e8)

UnDecorator::getReferenceType(var_e8, u"Scanner: Skipped Data", 0x2c)
int64_t* rcx_45 = arg1[4]
int64_t r8_5
r8_5.b = 1
int64_t rax_36 = (*(*rcx_45 + 8))(rcx_45, &var_e8, r8_5, 0)
int64_t rcx_46 = var_e8
arg1[0x1f] = rax_36

if (rcx_46 != 0)
    sub_140a74f90(rcx_46)

int64_t var_d8 = 0
int32_t var_d0 = 0
sub_1405947f0(&var_d8, 0x1a)
int32_t rax_37 = var_d0 + 0x1a
var_d0 = rax_37

if (rax_37 s> 0)
    sub_140594770(&var_d8)

UnDecorator::getReferenceType(var_d8, u"Scanner: Processing Speed", 0x34)
int64_t* rcx_50 = arg1[4]
int64_t r8_6
r8_6.b = 2
int64_t rax_39 = (*(*rcx_50 + 8))(rcx_50, &var_d8, r8_6, 0)
int64_t rcx_51 = var_d8
arg1[0x20] = rax_39

if (rcx_51 != 0)
    sub_140a74f90(rcx_51)

sub_141828360(arg1[0x18], 1)
data_143efabd8 += 1
void*** var_68 = nullptr
void** const var_58 = &data_142da2668
void*** var_50 = arg1
int64_t* (* var_78)(int64_t* arg1, void** arg2) = sub_14187b070
int64_t var_b8[0x2]
var_b8[0] = 0
int64_t var_a8 = 0
void* var_c8
int64_t* rax_40 = sub_141858790(&var_c8, 3, &var_78, &var_b8, arg5, arg6)

if (&arg1[9] != rax_40)
    arg1[9] = *rax_40
    *rax_40 = 0
    sub_1405aeff0(&arg1[0xa], &rax_40[1])

int64_t* var_c0

if (var_c0 != 0)
    var_c0[1].d -= 1
    
    if (var_c0[1].d == 1)
        (**var_c0)(var_c0)
        int32_t rsi_1 = *(var_c0 + 0xc)
        *(var_c0 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_c0 + 8))(var_c0, zx.q(rsi_1))

if (var_78 != 0)
    void** const* rcx_58 = &var_58
    
    if (var_68 != 0)
        rcx_58 = var_68
    
    void** const rdx_23 = *rcx_58
    rdx_23[2](rcx_58, rdx_23)

__security_check_cookie(rax_1 ^ &var_178)
return arg1
