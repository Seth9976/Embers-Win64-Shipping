// 函数: sub_1414ef900
// 地址: 0x1414ef900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t var_188
__builtin_memset(&var_188, 0, 0x14)
sub_141095f70(&var_188, 0)
int64_t var_170 = 0
int64_t var_168 = 0
void var_78
sub_14108b090(&var_78)
int64_t* rbx = *arg3
void** const var_138 = &data_142f11938
int64_t* var_130 = &var_188
int64_t* var_128 = &var_170
void* var_120 = &var_78
void arg_20
void* var_118 = &arg_20
int64_t* rcx_2 = *(*rbx + 0x20)
void* rax_2 = (*(*rcx_2 + 0x248))(rcx_2)
void** var_e8
sub_14125c360(&var_e8, rax_2, *(rax_2 + 8), rbx, &var_138)
int64_t rcx_4 = data_1439b62c8
void* r8_1 = *arg3
var_e8 = &data_142f41068
int64_t rax_3 = data_14395d9e8
int128_t var_a8
__builtin_memset(&var_a8, 0, 0x24)
int64_t var_b8 = rax_3
int64_t var_c0 = rcx_4
var_a8.q = *(rax_2 + 0x98)
int128_t var_98
var_98:8.q = *(rax_2 + 0x90)

if (*(r8_1 + 0x18c8) s> 0)
    int64_t rbx_1 = 0
    void* rax_7
    
    do
        int64_t* rdx_1 = *(r8_1 + 0x18c0)
        int32_t zmm1_1 = *(r8_1 + 0x614)
        void* rcx_5 = *(rdx_1 + rbx_1 + 8)
        float zmm2[0x4] = *(rcx_5 + 0xc0)
        int32_t rax_6 = *(rcx_5 + 0xd8)
        rax_7 = r8_1
        float zmm3 = *(r8_1 + 0x60c) - zmm2[0]
        float zmm4_1 = *(r8_1 + 0x610) - _mm_shuffle_ps(zmm2, zmm2, 0x55)[0]
        float zmm0_1[0x4] = rax_6
        zmm1_1 = zmm1_1 f- _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
        zmm0_1[0] = zmm0_1[0] f+ arg3[1].d
        zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
        
        if (not(zmm4_1 * zmm4_1 + zmm3 * zmm3 f+ zmm1_1 f* zmm1_1 >= zmm0_1[0]))
            int64_t* rax_8 = arg3[4]
            int32_t var_150_1 = rax_8[1].d
            int64_t* rax_10 = arg3[3]
            int64_t var_158 = *rax_8
            int32_t var_140_1 = rax_10[1].d
            int64_t rdx_2 = arg3[2]
            int32_t var_198
            var_198.q = *(rdx_1 + rbx_1)
            int64_t var_148 = *rax_10
            sub_14151dc80(&var_e8, rdx_2, r8_1, &var_148, &var_158, rcx_5, var_198)
            rax_7 = *arg3
        
        i += 1
        rbx_1 += 0x10
        r8_1 = rax_7
    while (i s< *(rax_7 + 0x18c8))

int32_t rax_14
bool cond:0_1

if (arg4 == 0)
    cond:0_1 = sub_1422eb5d0(arg1) != 0
    rax_14 = 2

if (arg4 != 0 || not(cond:0_1))
    rax_14 = 1

sub_1412680e0(arg1, arg2, &var_170, &var_188, &var_78, &arg_20, rax_14)
var_138 = &data_142d56fa0
int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

sub_14108ca30(&var_78)
int64_t result = sub_141095f70(&var_188, 0)
int64_t rcx_13 = var_188

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
