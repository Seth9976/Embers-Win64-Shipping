// 函数: sub_141e878e0
// 地址: 0x141e878e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t (* arg_18)(int64_t* arg1) = arg3
int64_t arg_10 = arg2

if (arg3 == 0)
    return 

int64_t (* var_a8)(int64_t* arg1)

if (sub_140a80ea0() == 0)
    int64_t var_c8_1 = arg_10
    int64_t (* rax_3)(int64_t* arg1) = arg_18
    char var_ac_1 = arg7
    void*** rax_5 = sub_140a82f30(0x30, 8)
    float zmm1[0x4] = rax_3.o
    *rax_5 = &data_142ff85d8
    *(rax_5 + 8) = arg1.o
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xd2)
    uint128_t zmm0_1
    zmm0_1.d = arg6.d
    temp0_1[0] = arg4.d
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
    temp0_2[0] = arg5.d
    *(rax_5 + 0x18) = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
    rax_5[5] = zmm0_1.q
    void*** var_98_1 = rax_5
    int64_t (* rax_6)(int64_t* arg1) = var_a8
    
    if (rax_5 != -8)
        rax_6 = j_sub_141e723b0
    
    char rdx = arg_10.b
    var_a8 = rax_6
    sub_141e85cb0(&var_a8, rdx)
    return 

uint32_t rcx_3 = (arg_10 u>> 4).d
int32_t r8_1 = (0x9e3779b9 - rcx_3) ^ rcx_3 << 8
int32_t rdx_3 = neg.d(r8_1 + rcx_3) ^ r8_1 u>> 0xd
int32_t rcx_6 = (rcx_3 - r8_1 - rdx_3) ^ rdx_3 u>> 0xc
int32_t r8_4 = (r8_1 - rcx_6 - rdx_3) ^ rcx_6 << 0x10
int32_t rdx_6 = (rdx_3 - r8_4 - rcx_6) ^ r8_4 u>> 5
int32_t rcx_9 = (rcx_6 - r8_4 - rdx_6) ^ rdx_6 u>> 3
int32_t r8_7 = (r8_4 - rcx_9 - rdx_6) ^ rcx_9 << 0xa
void* rax_21 = sub_141e6e760(arg1 + 0x260, (rdx_6 - r8_7 - rcx_9) ^ r8_7 u>> 0xf, &arg_10)
int64_t (* rdi_1)(int64_t* arg1) = arg_18
int32_t var_d8
sub_141e7ade0(rax_21, &var_d8, rdi_1)
int64_t rcx_12 = sx.q(var_d8)
void* const r8_12

if (rcx_12.d == 0xffffffff)
    r8_12 = nullptr
else
    r8_12 = rcx_12 * 0x70 + *rax_21

uint32_t rdx_11 = zx.d(arg7)
int64_t (** rcx_13)(int64_t* arg1) = r8_12 + 8

if (r8_12 == 0)
    rcx_13 = nullptr

if (rcx_13 == 0)
    int64_t var_98
    int32_t rax_24 = (var_98:4.d & 0xfffffffe) | rdx_11
    char var_4c
    char var_4c_1 = var_4c & 0xf0
    var_98.d = 0x469c4000
    int32_t var_58_1 = 0
    var_98:4.d = rax_24
    int32_t var_9c_1 = arg5.d
    int128_t var_88
    __builtin_memcpy(&var_88, 
        "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
    "00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
    "00", 
        0x30)
    int64_t (** var_48)(int64_t* arg1) = &arg_18
    int32_t var_50_1 = arg6.d
    int32_t var_a0_1 = arg4.d
    int32_t var_90_1 = 0x3f800000
    int32_t var_54_1 = 0x3f800000
    var_a8 = rdi_1
    int64_t (** var_40_1)(int64_t* arg1) = &var_a8
    sub_141e6dfa0(rax_21, &var_d8, &var_48, nullptr)
else
    char rax = *(rcx_13 + 0x5c) & 0xfb
    *(rcx_13 + 0x14) &= 0xfffffffe
    *(rcx_13 + 0x14) |= rdx_11
    *(rcx_13 + 0xc) = arg5.d
    *(rcx_13 + 0x5c) = rax | 2
    rcx_13[1].d = arg4.d
    rcx_13[0xb].d = arg6.d
    *rcx_13 = rdi_1
