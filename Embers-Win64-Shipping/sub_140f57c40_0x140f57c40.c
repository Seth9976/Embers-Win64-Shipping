// 函数: sub_140f57c40
// 地址: 0x140f57c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int32_t result
int128_t zmm6
float zmm7[0x4]
int128_t zmm8
int128_t zmm9
int128_t zmm10
result, zmm6, zmm7, zmm8, zmm9, zmm10 =
    sub_140e1e7e0(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)

if ((*(arg1 + 0x4cc) & 2) != 0)
    int64_t* rbx_1 = data_143e243c8
    float var_58_1[0x4] = zmm7
    int128_t var_68_1 = zmm8
    int128_t var_78_1 = zmm9
    int128_t var_88_1 = zmm10
    void var_108
    void* rax_5 = (*(*rbx_1 + 0x48))(rbx_1, *sub_140b58260(&var_108, u"SoftwareCursor_Grab", 1), 0)
    int128_t zmm1_1 = *(arg3 + 0x20)
    int128_t zmm11 = *(arg3 + 8)
    float zmm4_1[0x4] = *(arg3 + 0x24)
    float zmm12[0x4] = *(rax_5 + 8)
    float zmm13[0x4] = *(rax_5 + 0xc)
    zmm12[0] = zmm12[0] * 0.5f
    float zmm2_1[0x4] = *(arg3 + 0x1c)
    float zmm3_1[0x4] = *(arg3 + 0x28)
    char rdx_1 = *(arg3 + 0x34)
    zmm8.d = arg1[0x80].d.d f- zmm12[0]
    float zmm6_1 = *(arg1 + 0x404)
    zmm13[0] = zmm13[0] * 0.5f
    int64_t var_f4_1 = 0
    float var_118_1 = zmm2_1[0]
    zmm2_1[0] = zmm2_1[0] f* zmm8.d
    char var_cc
    char var_cc_1 = ((rdx_1 & 1) * 2) | (var_cc & 0xfc)
    zmm6_1 = zmm6_1 - zmm13[0]
    int64_t zmm5_1
    zmm5_1.d = zmm1_1.q.d f* zmm8.d
    int32_t var_130
    var_130.q = &data_14399f5c0
    zmm10.d = zmm11.d f* zmm8.d
    void* var_138
    var_138.b = 0
    int32_t var_114_1 = zmm1_1.d
    zmm4_1[0] = zmm4_1[0] * zmm6_1
    zmm10.d = zmm10.d f+ *(arg3 + 0xc)
    zmm9.d = zmm11.d f* zmm6_1
    zmm2_1[0] = zmm2_1[0] + zmm4_1[0]
    float var_110_1 = zmm4_1[0]
    float var_10c_1 = zmm3_1[0]
    zmm9.d = zmm9.d f+ *(arg3 + 0x10)
    zmm2_1[0] = zmm2_1[0] f+ *(arg3 + 0x2c)
    zmm3_1[0] = zmm3_1[0] * zmm6_1
    int32_t var_100 = zmm10.d
    int32_t var_fc_1 = zmm9.d
    zmm5_1.d = zmm5_1.d f+ zmm3_1[0]
    int32_t var_f8_1 = zmm11.d
    float var_ec_1 = zmm12[0]
    float var_e8_1 = zmm13[0]
    int128_t var_e4_1 = var_118_1.o
    zmm5_1.d = zmm5_1.d f+ *(arg3 + 0x30)
    int64_t var_d4_1 = (_mm_unpacklo_ps(zmm2_1, zmm5_1)).q
    sub_140db3600(arg5, result + 1, &var_100, rax_5, var_138.b, var_130)
    result += 1
    int512_t zmm6_2
    zmm6_2.o = zmm6

__security_check_cookie(rax_1 ^ &var_158)
return result
