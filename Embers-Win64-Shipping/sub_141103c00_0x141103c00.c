// 函数: sub_141103c00
// 地址: 0x141103c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg4
arg4.b = 1
sub_141108550(arg2, arg3, arg1, arg4.b)
sub_1422e1d40(arg3 + 0x1dd0, arg2, r12, arg3, 1, 0)
int32_t var_190 = 1
int32_t var_198 = 1
float zmm3 = sub_1422e1d40(arg3 + 0x1dd0, arg2, r12, arg3, 1, 1)
int64_t r8_3 = sx.q(*(arg1 + 0x3b4))
int64_t rax = data_143f025b8
int64_t r13

if (((r8_3.d u> 0x18 || not(test_bit(0x100a040, r8_3.d)))
        && *(&data_143f025f0 + r8_3 * 0x14) != rax) || ((r8_3.d u> 0x1e
        || not(test_bit(0x6562c800, r8_3.d))) && (*(r8_3 * 0x14 + &data_143f025fc) & 1) == 0)
        || (r8_3.d u<= 0x1b && test_bit(0x857c041, r8_3.d)))
    r13.b = 0
else
    int64_t r9_2 = r8_3 * 5
    int32_t rdx_5 = *((r9_2 << 2) + &data_143f025fc)
    
    if (((rdx_5 u>> 2).b & 1) != 0 || r8_3.d == 0xb || r8_3.d == 0x1e)
        r13.b = 0
    else
        int64_t rcx_5 = *(&data_143f025f0 + (r9_2 << 2))
        
        if ((rcx_5 != rax || (rdx_5.b & 1) == 0)
                && (r8_3.d u> 0x30 || not(test_bit(0x1000030200000, r8_3)))
                && rcx_5 != data_143f025c0 && (r8_3 - 0x19).d u> 1)
            r13.b = 1
        else
            r13.b = 0

void* rbx = *(arg1 + 8)
int64_t var_168
__builtin_memset(&var_168, 0, 0x14)
sub_141095f70(&var_168, 0)
int64_t var_150 = 0
int64_t var_148 = 0
void var_98
sub_14108b090(&var_98)
int32_t r8_4 = *(rbx + 8)
void** const var_140 = &data_142f11938
int64_t* var_138 = &var_168
int64_t* var_130 = &var_150
void* var_128 = &var_98
void arg_18
void* var_120 = &arg_18
var_198.q = &var_140
void** var_118
sub_14125c360(&var_118, rbx, r8_4, arg3, var_198)
char var_a8 = 0
int32_t i = 0
var_118 = &data_142f18d20
char var_b0 = arg6
int32_t var_ac = arg5
int128_t var_e0 = *(r12 + 0x10)
var_e0:8.q = *(rbx + 0x20)
int128_t var_f0 = *r12
int128_t var_c0 = *(r12 + 0x30)
int128_t var_d0 = *(r12 + 0x20)
var_d0.q = *(rbx + 0x28)
var_c0.q = *(rbx + 0x30)

if (*(arg3 + 0x1d48) s> 0)
    int64_t rbx_1 = 0
    
    do
        var_198 = 0xffffffff
        zmm3 = sub_1410ecfd0(&var_118, *(*(arg3 + 0x1d40) + rbx_1), -1, nullptr, zmm3, 0xffffffff)
        i += 1
        rbx_1 += 8
    while (i s< *(arg3 + 0x1d48))

int32_t rcx_11
rcx_11.b = sub_1422eb5d0(arg3) != 0
var_190.q = &arg_18
var_198.q = &var_98
sub_1412680e0(arg3, arg2, &var_150, &var_168, var_198, var_190, rcx_11 + 1)
var_140 = &data_142d56fa0
int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

sub_14108ca30(&var_98)
sub_141095f70(&var_168, 0)
int64_t rcx_18 = var_168

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

var_190.q = arg3
var_198.b = r13.b
float zmm3_1 =
    sub_141e9a320(arg3 + 0x18e0, arg2, r12, *(arg1 + 0x3b0), var_198.b, var_190, 0, 0x3f800000, 3)
__builtin_memset(&var_168, 0, 0x14)
sub_141095f70(&var_168, 0)
var_150 = 0
int64_t var_148_1 = 0
sub_14108b090(&var_98)
int32_t r8_7 = *(rbx + 8)
var_140 = &data_142f11938
int64_t* var_138_1 = &var_168
int64_t* var_130_1 = &var_150
void* var_128_1 = &var_98
void* var_120_1 = &arg_18
var_198.q = &var_140
sub_14125c360(&var_118, rbx, r8_7, arg3, var_198)
char var_a8_1 = 0
int32_t i_1 = 0
var_118 = &data_142f18d20
char var_b0_1 = arg6
int32_t var_ac_1 = arg5
int128_t var_e0_1 = *(r12 + 0x10)
var_e0_1:8.q = *(rbx + 0x20)
int128_t var_f0_1 = *r12
int128_t var_c0_1 = *(r12 + 0x30)
int128_t var_d0_1 = *(r12 + 0x20)
var_d0_1.q = *(rbx + 0x28)
var_c0_1.q = *(rbx + 0x30)

if (*(arg3 + 0x1d58) s> 0)
    void** rbx_2 = nullptr
    
    do
        var_198 = 0xffffffff
        zmm3_1 =
            sub_1410ecfd0(&var_118, *(rbx_2 + *(arg3 + 0x1d50)), -1, nullptr, zmm3_1, 0xffffffff)
        i_1 += 1
        rbx_2 = &rbx_2[1]
    while (i_1 s< *(arg3 + 0x1d58))

int32_t r14
r14.b = sub_1422eb5d0(arg3) != 0
var_190.q = &arg_18
var_198.q = &var_98
sub_1412680e0(arg3, arg2, &var_150, &var_168, var_198, var_190, r14 + 1)
var_140 = &data_142d56fa0

if (var_68 != 0)
    sub_140a74f90(var_68)

if (var_78 != 0)
    sub_140a74f90(var_78)

int32_t zmm6 = sub_14108ca30(&var_98)
sub_141095f70(&var_168, 0)
int64_t rcx_30 = var_168

if (rcx_30 != 0)
    sub_140a74f90(rcx_30)

var_190.q = arg3
var_198.b = r13.b
return sub_141e9a320(arg3 + 0x1b10, arg2, r12, *(arg1 + 0x3b0), var_198.b, var_190, 0, zmm6, 3)
