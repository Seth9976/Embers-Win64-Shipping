// 函数: sub_1417a3a00
// 地址: 0x1417a3a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t* rdi = nullptr
int64_t* r8_1 = *arg1[1]
void* rcx_1 = **arg1

if (*(arg2 + 0xc) u>= 3)
    rdi = arg2

int64_t* arg_18 = rdi
sub_1417adc20(rcx_1, arg2, r8_1)
int32_t arg_8
sub_140946410(*arg1 + 0x10, &arg_8, &arg_18, nullptr)
uint64_t rdx_1 = sx.q(rdi[1].d)
int64_t r9 = *(*rdi + 0x4b8)
int64_t rcx_4 = *(r9 + (rdx_1 << 3))

if (rcx_4 != 0)
    *(r9 + (rdx_1 << 3)) = 0
    j_sub_140a74f90(rcx_4)
    rdx_1 = zx.q(rdi[1].d)

void* rax_1 = *rdi
int64_t var_108 = 0
*(*(rax_1 + 0x4a0) + (sx.q(rdx_1.d) << 3)) = 0
int32_t var_100 = *(*(*rdi + 0x428) + sx.q(rdi[1].d) * 0x10 + 8)
*(*(*rdi + 0x428) + sx.q(rdi[1].d) * 0x10) = var_108.o
int128_t* rdx_8 = arg1[2]
float zmm13[0x4] = rdx_8[2]
float (* rcx_10)[0x4] = sx.q(rdi[1].d) * 0x30 + *(*rdi + 0x440)
float zmm15[0x4] = rcx_10[2]
float zmm6[0x4]
float zmm7[0x4]
float zmm3[0x4]

if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm15, zmm13), data_143ef8240, 1)) == 0)
    float zmm4[0x4] = *rdx_8
    float zmm2[0x4] = *rcx_10
    zmm3 = rcx_10[1]
    float temp0_132[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    float temp0_134[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_132)
    float temp0_135[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
    float temp0_136[0x4] = _mm_mul_ps(zmm3, zmm13)
    float temp0_137[0x4] = __mulps_xmmps_memps(temp0_134, data_143ef7f10)
    float temp0_138[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_140[0x4] = _mm_add_ps(temp0_137, _mm_mul_ps(temp0_138, zmm2))
    float temp0_142[0x4] = _mm_mul_ps(temp0_135, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
    float temp0_145[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
    float temp0_146[0x4] = __mulps_xmmps_memps(temp0_142, data_143ef7f00)
    float temp0_147[0x4] = _mm_shuffle_ps(temp0_136, temp0_136, 0xd2)
    float temp0_148[0x4] = __mulps_xmmps_memps(temp0_145, data_143ef7ef0)
    float temp0_149[0x4] = _mm_add_ps(temp0_140, temp0_146)
    float temp0_150[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_151[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_152[0x4] = _mm_mul_ps(temp0_147, temp0_151)
    zmm7 = _mm_add_ps(temp0_149, temp0_148)
    float temp0_156[0x4] =
        _mm_sub_ps(temp0_152, _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xc9), temp0_150))
    float temp0_157[0x4] = _mm_add_ps(temp0_156, temp0_156)
    float temp0_158[0x4] = _mm_shuffle_ps(temp0_157, temp0_157, 0xd2)
    float temp0_159[0x4] = _mm_shuffle_ps(temp0_157, temp0_157, 0xc9)
    float temp0_160[0x4] = _mm_mul_ps(temp0_158, temp0_151)
    float temp0_161[0x4] = _mm_mul_ps(temp0_159, temp0_150)
    float temp0_162[0x4] = _mm_mul_ps(temp0_157, temp0_138)
    zmm6 = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_160, temp0_161), _mm_add_ps(temp0_162, temp0_136)), rdx_8[1])
else
    float zmm1[0x4] = *rdx_8
    float temp0_3[0x4] = _mm_add_ps(zmm1, zmm1)
    float zmm9[0x4] = rdx_8[1]
    float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
    float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
    float temp0_6[0x4] = _mm_mul_ps(zmm1, temp0_3)
    float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0x29), temp0_4)
    float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0x12), temp0_5)
    float temp0_13[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0x1a), _mm_shuffle_ps(temp0_6, temp0_6, 1))
    float temp0_14[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
    float zmm12[0x4] = data_143ef7f20
    float temp0_15[0x4] = _mm_add_ps(temp0_10, temp0_8)
    float temp0_16[0x4] = _mm_sub_ps(temp0_8, temp0_10)
    zmm3 = *rcx_10
    float temp0_17[0x4] = _mm_sub_ps(zmm12, temp0_13)
    float temp0_18[0x4] = _mm_mul_ps(temp0_15, zmm13)
    float temp0_19[0x4] = _mm_mul_ps(temp0_14, temp0_16)
    float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm13)
    float temp0_21[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
    zmm1 = __andps_xmmxud_memxud(temp0_20, data_143ef7f30)
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_19, zmm1, 0x32)
    float temp0_25[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_18, zmm1, 0), temp0_23, 0x82)
    float temp0_26[0x4] = _mm_shuffle_ps(temp0_18, zmm1, 0x31)
    float temp0_28[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_19, zmm1, 0x10), temp0_26, 0x88)
    float temp0_30[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_18, temp0_19, 0x12), zmm1, 0xe8)
    float temp0_31[0x4] = _mm_add_ps(zmm3, zmm3)
    zmm12[0].q = zmm9 u>> 0x40
    float temp0_32[0x4] = _mm_shuffle_ps(zmm9, zmm12, 0xc4)
    float temp0_33[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
    float temp0_34[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
    float temp0_35[0x4] = _mm_mul_ps(zmm3, temp0_31)
    float temp0_37[0x4] = _mm_mul_ps(temp0_21, _mm_shuffle_ps(temp0_31, temp0_31, 0x29))
    float temp0_39[0x4] = _mm_mul_ps(temp0_33, _mm_shuffle_ps(temp0_31, temp0_31, 0x12))
    float temp0_42[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0x1a), _mm_shuffle_ps(temp0_35, temp0_35, 1))
    float temp0_43[0x4] = _mm_add_ps(temp0_39, temp0_37)
    float temp0_44[0x4] = _mm_sub_ps(temp0_37, temp0_39)
    float temp0_45[0x4] = _mm_sub_ps(zmm12, temp0_42)
    float temp0_46[0x4] = _mm_mul_ps(temp0_43, zmm15)
    float temp0_47[0x4] = _mm_mul_ps(temp0_34, temp0_44)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_45, zmm15), data_143ef7f30)
    float temp0_52[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_46, zmm1, 0), 
        _mm_shuffle_ps(temp0_47, zmm1, 0x32), 0x82)
    float temp0_53[0x4] = _mm_shuffle_ps(temp0_46, zmm1, 0x31)
    float temp0_54[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0x55)
    float temp0_56[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, zmm1, 0x10), temp0_53, 0x88)
    float temp0_57[0x4] = _mm_mul_ps(temp0_54, temp0_28)
    float temp0_58[0x4] = _mm_shuffle_ps(temp0_46, temp0_47, 0x12)
    float zmm5[0x4] = rcx_10[1]
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_58, zmm1, 0xe8)
    float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_52, temp0_52, 0xaa), temp0_30)
    zmm12[0].q = zmm5 u>> 0x40
    float temp0_62[0x4] = _mm_shuffle_ps(zmm5, zmm12, 0xc4)
    float temp0_63[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0)
    float temp0_65[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_52, temp0_52, 0xff), temp0_32)
    float temp0_67[0x4] = _mm_add_ps(temp0_57, _mm_mul_ps(temp0_63, temp0_25))
    float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0), temp0_25)
    float temp0_70[0x4] = _mm_add_ps(temp0_67, temp0_61)
    float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xaa), temp0_30)
    float temp0_73[0x4] = _mm_add_ps(temp0_70, temp0_65)
    float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0x55), temp0_28)
    float temp0_76[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xff)
    float var_f8[0x4] = temp0_73
    float temp0_77[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0x55)
    float temp0_78[0x4] = _mm_add_ps(temp0_75, temp0_69)
    float temp0_79[0x4] = _mm_mul_ps(temp0_77, temp0_28)
    float temp0_80[0x4] = _mm_mul_ps(temp0_76, temp0_32)
    float temp0_81[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0)
    float temp0_82[0x4] = _mm_add_ps(temp0_78, temp0_72)
    float temp0_83[0x4] = _mm_mul_ps(temp0_81, temp0_25)
    float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xaa), temp0_30)
    float temp0_86[0x4] = _mm_add_ps(temp0_82, temp0_80)
    float temp0_87[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xff)
    float temp0_88[0x4] = _mm_add_ps(temp0_79, temp0_83)
    float temp0_89[0x4] = _mm_mul_ps(temp0_87, temp0_32)
    float temp0_90[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0)
    int96_t var_e8_1 = temp0_86[0].12
    float temp0_91[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0x55)
    float temp0_92[0x4] = _mm_add_ps(temp0_88, temp0_85)
    float temp0_93[0x4] = _mm_mul_ps(temp0_91, temp0_28)
    float temp0_95[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xaa), temp0_30)
    float temp0_96[0x4] = _mm_mul_ps(temp0_90, temp0_25)
    float temp0_97[0x4] = _mm_add_ps(temp0_92, temp0_89)
    float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xff), temp0_32)
    float temp0_100[0x4] = _mm_add_ps(temp0_93, temp0_96)
    int96_t var_d8_1 = temp0_97[0].12
    int96_t var_c8_1 = _mm_add_ps(_mm_add_ps(temp0_100, temp0_95), temp0_99)[0].12
    int128_t zmm12_1
    float zmm13_1[0x4]
    float zmm14_1[0x4]
    float zmm15_1[0x4]
    zmm12_1, zmm13_1, zmm14_1, zmm15_1 = sub_1407740e0(&var_f8, 0x322bcc77)
    zmm14_1 =
        _mm_and_ps(_mm_cmpeq_ps(zmm14_1, _mm_mul_ps(zmm15_1, zmm13_1), 2), data_143ef8230 ^ zmm12_1)
        ^ data_143ef8230
    float zmm2_1[0x4] = var_f8[0]
    float zmm1_1 = var_f8[1]
    uint32_t zmm0_1[0x4] = var_f8[2]
    zmm2_1[0] = zmm2_1[0] * zmm14_1[0]
    zmm1_1 = zmm1_1 * zmm14_1[0]
    zmm0_1[0] = zmm0_1[0] f* zmm14_1[0]
    var_f8[0] = zmm2_1[0]
    float temp0_106[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55)
    var_f8[1] = zmm1_1
    zmm1_1 = var_e8_1:4.d * temp0_106[0]
    var_f8[2] = zmm0_1[0]
    zmm0_1 = var_e8_1:8.d
    zmm0_1[0] = zmm0_1[0] f* temp0_106[0]
    float zmm3_1 = var_e8_1.d * temp0_106[0]
    zmm2_1 = var_d8_1.d
    var_e8_1:4.d = zmm1_1
    var_e8_1:8.d = zmm0_1[0]
    zmm0_1 = var_d8_1:8.d
    float temp0_107[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa)
    zmm1_1 = var_d8_1:4.d * temp0_107[0]
    zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
    zmm2_1[0] = zmm2_1[0] * temp0_107[0]
    var_d8_1:4.d = zmm1_1
    var_d8_1:8.d = zmm0_1[0]
    var_e8_1.d = zmm3_1
    var_d8_1.d = zmm2_1[0]
    sub_14077e4a0(&var_108, &var_f8)
    float zmm5_1[0x4] = var_108.o
    zmm7 = data_143ef7ee0
    float temp0_108[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
    arg_8 = 0x322bcc77
    float temp0_110[0x4] = _mm_add_ps(temp0_108, _mm_shuffle_ps(temp0_108, temp0_108, 0x4e))
    float temp0_112[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_110, temp0_110, 0x39), temp0_110)
    float temp0_113[0x4] = _mm_rsqrt_ps(temp0_112)
    float temp0_114[0x4] = _mm_mul_ps(temp0_112, zmm7)
    float temp0_119[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(temp0_113, temp0_113), temp0_114)), 
            temp0_113), 
        temp0_113)
    float temp0_122[0x4] = _mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(temp0_119, temp0_119), temp0_114))
    float zmm0[0x4] = arg_8
    float temp0_124[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_112, 2)
    float temp0_126[0x4] = _mm_add_ps(_mm_mul_ps(temp0_122, temp0_119), temp0_119)
    float temp0_127[0x4] = _mm_unpacklo_ps(var_c8_1:4.d, 0)
    zmm7 = _mm_and_ps(_mm_mul_ps(temp0_126, zmm5_1) ^ data_143ef7ed0, temp0_124) ^ data_143ef7ed0
    zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_c8_1.d, var_c8_1:8.d[0].q), temp0_127[0].q)
int64_t rdx_10 = sx.q(arg2[1].d) * 3
float temp0_167[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
void* rax_9 = *arg2
float var_100_1 = temp0_167[0]
float temp0_168[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
int64_t rcx_13 = *(rax_9 + 0x28)
*(rcx_13 + (rdx_10 << 2)) = (_mm_unpacklo_ps(zmm6, temp0_168[0].q)).q
*(rcx_13 + (rdx_10 << 2) + 8) = var_100_1
*(*(*arg2 + 0x68) + sx.q(arg2[1].d) * 0x10) = zmm7

if (*arg1[3] == 0)
    int64_t r8_3 = sx.q(arg2[1].d) * 3
    void* rax_14 = *arg2
    int64_t rcx_15 = *(rax_14 + 0x28)
    int64_t rdx_13 = *(rax_14 + 0x3c8)
    *(rdx_13 + (r8_3 << 2)) = *(rcx_15 + (r8_3 << 2))
    *(rdx_13 + (r8_3 << 2) + 8) = *(rcx_15 + (r8_3 << 2) + 8)
    void* rax_16 = *arg2
    int64_t r8_5 = sx.q(arg2[1].d) * 2
    *(*(rax_16 + 0x3e0) + (r8_5 << 3)) = *(*(rax_16 + 0x68) + (r8_5 << 3))

int64_t* rcx_17 = *arg1[1]
int64_t r9_1 = sx.q(rcx_17[1].d) * 3
int64_t r8_6 = *(*rcx_17 + 0x1b8)
int64_t rdx_15 = sx.q(arg2[1].d) * 3
int64_t rcx_18 = *(*arg2 + 0x1b8)
*(rcx_18 + (rdx_15 << 2)) = *(r8_6 + (r9_1 << 2))
*(rcx_18 + (rdx_15 << 2) + 8) = *(r8_6 + (r9_1 << 2) + 8)
int64_t* rcx_19 = *arg1[1]
int64_t r9_2 = sx.q(rcx_19[1].d) * 3
int64_t r8_7 = *(*rcx_19 + 0x1d0)
int64_t rdx_16 = sx.q(arg2[1].d) * 3
int64_t rcx_20 = *(*arg2 + 0x1d0)
*(rcx_20 + (rdx_16 << 2)) = *(r8_7 + (r9_2 << 2))
*(rcx_20 + (rdx_16 << 2) + 8) = *(r8_7 + (r9_2 << 2) + 8)
int64_t* rcx_21 = *arg1[1]
int64_t r9_3 = sx.q(rcx_21[1].d) * 3
int64_t r8_8 = *(*rcx_21 + 0x3f8)
int64_t rdx_17 = sx.q(arg2[1].d) * 3
int64_t rcx_22 = *(*arg2 + 0x3f8)
*(rcx_22 + (rdx_17 << 2)) = *(r8_8 + (r9_3 << 2))
*(rcx_22 + (rdx_17 << 2) + 8) = *(r8_8 + (r9_3 << 2) + 8)
int64_t* rcx_23 = *arg1[1]
int64_t r9_4 = sx.q(rcx_23[1].d) * 3
int64_t r8_9 = *(*rcx_23 + 0x410)
int64_t rdx_18 = sx.q(arg2[1].d) * 3
int64_t rcx_24 = *(*arg2 + 0x410)
*(rcx_24 + (rdx_18 << 2)) = *(r8_9 + (r9_4 << 2))
*(rcx_24 + (rdx_18 << 2) + 8) = *(r8_9 + (r9_4 << 2) + 8)
sub_140946410(arg1[4], &arg_8, &arg_10, nullptr)
char* result = arg1[5]
*result = 1
return result
