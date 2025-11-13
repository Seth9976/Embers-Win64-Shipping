// 函数: sub_1426974f0
// 地址: 0x1426974f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void* rax_3 = *(*(*arg1 + 0x338) + 0x10)
int64_t* rdi = rax_3 + 8

if (rax_3 == 0)
    rdi = nullptr

void var_d8
sub_1426022c0(&var_d8)
uint32_t rax_4
void* rbx_1

if (data_143de5480 != 0)
    rbx_1 = &var_d8
    rax_4.b = GetCurrentThreadId() == data_143de5470

if (data_143de5480 == 0 || rax_4.b != 0)
    rbx_1 = &arg1[0xc]

sub_142611af0(rbx_1, arg1[1], int.d(fconvert.t(*(*arg1 + 0x464))), nullptr)
void* rcx_2 = *arg1
int128_t* var_138 = nullptr
uint128_t zmm2 = zx.o(*(rcx_2 + 0x26c))
int32_t rax_6 = *(rcx_2 + 0x274)
float temp0[0x4] = _mm_max_ss((*(rcx_2 + 0x480))[0], 0)
uint64_t var_128 = zmm2.q
int32_t var_f8[0x4]
int32_t* var_140 = &var_f8
int32_t var_50 = _mm_shuffle_ps(zmm2, zmm2, 0x55).d
uint128_t zmm0 = *arg2
temp0[0] = temp0[0] f+ rax_6
int32_t var_58 = zmm2.d
int64_t var_118 = 0
int32_t var_108 = (zmm0 ^ 0x80000000).d
float var_54 = temp0[0]
int32_t var_104 = (*(arg2 + 8)).d
float var_100 = (*(arg2 + 4) ^ 0x80000000)[0]
var_128.d = (*arg3 ^ 0x80000000).d
float var_120_1 = (*(arg3 + 4) ^ 0x80000000)[0]
var_128:4.d = (*(arg3 + 8)).d
sub_14260acd0(rbx_1, &var_108, &var_58, rdi, &var_118, var_140, var_138)
int32_t rbx_4

if (var_118 == 0)
    rbx_4 = 1
else
    int128_t* var_138_1 = nullptr
    int32_t var_e8[0x4]
    int32_t* var_140_1 = &var_e8
    int64_t var_110 = 0
    sub_14260acd0(rbx_1, &var_128, &var_58, rdi, &var_110, var_140_1, var_138_1)
    int64_t r8_3 = var_110
    
    if (r8_3 == 0)
        rbx_4 = 1
    else
        int32_t rax_7 = sub_142616b60(rbx_1, var_118, r8_3)
        
        if (arg4 != 0)
            *arg4 = *(rbx_1 + 0x78)
        
        if (((rax_7 u>> 0x1e).b & 1) == 0)
            uint32_t rbx_5
            rbx_5.b = not.b((rax_7 u>> 3).b)
            rbx_4 = (rbx_5 & 1) + 1
        else
            uint32_t rbx_2
            rbx_2.b = not.b((rax_7 u>> 6).b)
            rbx_4 = (rbx_2 & 1) | 2

sub_142602500(&var_d8)
__security_check_cookie(rax_1 ^ &var_168)
return zx.q(rbx_4)
