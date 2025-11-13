// 函数: sub_141ba3b90
// 地址: 0x141ba3b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t result = __security_cookie ^ &var_f8
int64_t result_1 = result
int32_t rdx_1 = *(arg1 + 0x2c) + 1
*(arg1 + 0x2c) = rdx_1

if (arg4 != 0)
    void* rax_1 = *arg1
    int32_t zmm3 = arg2:4.d
    void* rcx = arg1[2]
    int128_t zmm1 = *(rax_1 + 0x20)
    float zmm5[0x4] = *(rax_1 + 0x24)
    float zmm2[0x4] = *(rax_1 + 0x1c)
    float zmm4[0x4] = *(rax_1 + 0x28)
    int128_t zmm7
    zmm7.d = zmm1.d f* arg2.d
    char r8 = *(rax_1 + 0x34) & 1
    zmm2[0] = zmm2[0] f* arg2.d
    char var_d8_1 = 0
    zmm5[0] = zmm5[0] f* zmm3
    zmm2[0] = zmm2[0] + zmm5[0]
    int128_t zmm11 = *(rax_1 + 8)
    zmm4[0] = zmm4[0] f* zmm3
    int128_t zmm10
    zmm10.d = zmm11.d f* arg2.d
    zmm2[0] = zmm2[0] f+ *(rax_1 + 0x2c)
    zmm7.d = zmm7.d f+ zmm4[0]
    int128_t zmm9
    zmm9.d = zmm11.d f* zmm3
    zmm10.d = zmm10.d f+ *(rax_1 + 0xc)
    zmm9.d = zmm9.d f+ *(rax_1 + 0x10)
    zmm7.d = zmm7.d f+ *(rax_1 + 0x30)
    int32_t var_bc_1 = zmm1.d
    float var_b8_1 = zmm5[0]
    float var_b4_1 = zmm4[0]
    zmm1 = zmm2[0].o
    int64_t var_a4_1 = 0
    int64_t var_84_1 = (_mm_unpacklo_ps(zmm2, zmm7.q)).q
    int32_t var_b0 = zmm10.d
    int32_t var_ac_1 = zmm9.d
    int32_t var_a8_1 = zmm11.d
    uint64_t var_9c_1 = arg3
    int128_t var_94_1 = zmm1
    char var_7c
    char var_7c_1 = (r8 * 2) | (var_7c & 0xfc)
    result = sub_140db3600(rcx, rdx_1, &var_b0, arg4 + 0x28, var_d8_1, arg5)

__security_check_cookie(result_1 ^ &var_f8)
return result
