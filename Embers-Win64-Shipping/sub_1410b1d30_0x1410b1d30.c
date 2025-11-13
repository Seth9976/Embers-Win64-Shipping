// 函数: sub_1410b1d30
// 地址: 0x1410b1d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg3
int32_t var_168 = 1
sub_1422e1d40(arg3 + 0x1dd0, arg2, arg4, arg3, 1, arg5)
int64_t r8_1 = sx.q(*(arg1 + 0x3b4))
int64_t rax_1 = data_143f025b8
int64_t r15

if (((r8_1.d u> 0x18 || not(test_bit(0x100a040, r8_1.d)))
        && *(&data_143f025f0 + r8_1 * 0x14) != rax_1) || ((r8_1.d u> 0x1e
        || not(test_bit(0x6562c800, r8_1.d))) && (*(r8_1 * 0x14 + &data_143f025fc) & 1) == 0)
        || (r8_1.d u<= 0x1b && test_bit(0x857c041, r8_1.d)))
    r15.b = 0
else
    int64_t r9_1 = r8_1 * 5
    int32_t rdx_2 = *((r9_1 << 2) + &data_143f025fc)
    
    if (((rdx_2 u>> 2).b & 1) != 0 || r8_1.d == 0xb || r8_1.d == 0x1e)
        r15.b = 0
    else
        int64_t rcx_3 = *(&data_143f025f0 + (r9_1 << 2))
        
        if ((rcx_3 != rax_1 || (rdx_2.b & 1) == 0)
                && (r8_1.d u> 0x30 || not(test_bit(0x1000030200000, r8_1)))
                && rcx_3 != data_143f025c0 && (r8_1 - 0x19).d u> 1)
            r15.b = 1
        else
            r15.b = 0

int64_t var_138
__builtin_memset(&var_138, 0, 0x14)
sub_141095f70(&var_138, 0)
int64_t var_120 = 0
int64_t var_118 = 0
void var_e8
sub_14108b090(&var_e8)
int32_t rbx_1 = rdi[0x2a9].d
void** const var_110 = &data_142f11938
int64_t* var_108 = &var_138
int64_t* var_100 = &var_120
void* var_f8 = &var_e8
int32_t* var_f0 = &arg5
int64_t* rcx_6 = *(*rdi + 0x20)
int32_t var_160
var_160.b = 0
var_168.q = arg4
void** var_98
sub_14111c620(&var_98, (*(*rcx_6 + 0x248))(rcx_6), rbx_1, rdi, var_168, 0, &var_110)
int32_t i = 0

if (rdi[0x3a9].d s> 0)
    void** rbx_2 = nullptr
    
    do
        var_168 = 0xffffffff
        sub_14111d1d0(&var_98, *(rbx_2 + rdi[0x3a8]), -1, nullptr, 0xffffffff)
        i += 1
        rbx_2 = &rbx_2[1]
    while (i s< rdi[0x3a9].d)

int32_t rcx_10
rcx_10.b = sub_1422eb5d0(rdi) != 0
void** const* var_158
var_158.d = rcx_10 + 1
var_160.q = &arg5
var_168.q = &var_e8
sub_1412680e0(rdi, arg2, &var_120, &var_138, var_168, var_160, var_158.d)
var_110 = &data_142d56fa0
int64_t var_b8

if (var_b8 != 0)
    sub_140a74f90(var_b8)

int64_t var_c8

if (var_c8 != 0)
    sub_140a74f90(var_c8)

sub_14108ca30(&var_e8)
sub_141095f70(&var_138, 0)
int64_t rcx_17 = var_138

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

__builtin_memset(&var_138, 0, 0x14)
sub_141095f70(&var_138, 0)
var_120 = 0
int64_t var_118_1 = 0
sub_14108b090(&var_e8)
int32_t rbx_3 = rdi[0x2a9].d
var_110 = &data_142f11938
int64_t* var_108_1 = &var_138
int64_t* var_100_1 = &var_120
void* var_f8_1 = &var_e8
int32_t* var_f0_1 = &arg5
int64_t* rcx_20 = *(*rdi + 0x20)
var_160.b = 0
var_168.q = arg4
sub_14111c620(&var_98, (*(*rcx_20 + 0x248))(rcx_20), rbx_3, rdi, var_168, var_160.b, &var_110)
int32_t i_1 = 0

if (rdi[0x3ab].d s> 0)
    void** rbx_4 = nullptr
    
    do
        var_168 = 0xffffffff
        sub_14111d1d0(&var_98, *(rbx_4 + rdi[0x3aa]), -1, nullptr, 0xffffffff)
        i_1 += 1
        rbx_4 = &rbx_4[1]
    while (i_1 s< rdi[0x3ab].d)

int32_t r14
r14.b = sub_1422eb5d0(rdi) != 0
void** const* var_158_1
var_158_1.d = r14 + 1
var_160.q = &arg5
var_168.q = &var_e8
sub_1412680e0(rdi, arg2, &var_120, &var_138, var_168, var_160, var_158_1.d)
var_110 = &data_142d56fa0

if (var_b8 != 0)
    sub_140a74f90(var_b8)

if (var_c8 != 0)
    sub_140a74f90(var_c8)

sub_14108ca30(&var_e8)
sub_141095f70(&var_138, 0)
int64_t rcx_29 = var_138

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

var_160.q = rdi
var_168.b = r15.b
uint64_t result =
    sub_141e9a320(&rdi[0x362], arg2, arg4, *(arg1 + 0x3b0), var_168.b, var_160, 0, 0x3f800000, 3)

if (result.b != 0)
    result = arg6
    *result = 1

return result
