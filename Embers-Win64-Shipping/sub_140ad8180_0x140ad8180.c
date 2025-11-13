// 函数: sub_140ad8180
// 地址: 0x140ad8180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *arg2
float temp0[0x4] = _mm_add_ps(zmm3, zmm3)
float zmm7[0x4] = data_143dbb020
float zmm9[0x4] = data_143dbb010
float temp0_1[0x4] = _mm_mul_ps(zmm3, temp0)
float temp0_2[0x4] = _mm_shuffle_ps(temp0, temp0, 0x29)
float temp0_3[0x4] = _mm_shuffle_ps(temp0, temp0, 0x12)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 1)
float temp0_6[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x1a), temp0_4)
float zmm13[0x4] = arg2[1]
float temp0_7[0x4] = _mm_sub_ps(zmm9, temp0_6)
float zmm1[0x4] = arg2[2]
float temp0_8[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
float temp0_9[0x4] = _mm_mul_ps(zmm1, temp0_7)
float temp0_11[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(zmm3, zmm3, 4))
float temp0_13[0x4] = _mm_mul_ps(temp0_3, _mm_shuffle_ps(zmm3, zmm3, 0xff))
float temp0_14[0x4] = _mm_add_ps(temp0_13, temp0_11)
float temp0_15[0x4] = _mm_sub_ps(temp0_11, temp0_13)
float temp0_16[0x4] = _mm_mul_ps(zmm1, temp0_14)
float temp0_17[0x4] = _mm_mul_ps(temp0_15, temp0_8)
zmm1 = _mm_and_ps(zmm7, temp0_9)
float zmm2[0x4] = *arg3
float temp0_19[0x4] = _mm_shuffle_ps(temp0_16, zmm1, 0)
float temp0_20[0x4] = _mm_add_ps(zmm2, zmm2)
_mm_shuffle_ps(temp0_19, _mm_shuffle_ps(temp0_17, zmm1, 0x32), 0x82)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_16, zmm1, 0x31)
_mm_shuffle_ps(_mm_shuffle_ps(temp0_17, zmm1, 0x10), temp0_23, 0x88)
_mm_shuffle_ps(_mm_shuffle_ps(temp0_16, temp0_17, 0x12), zmm1, 0xe8)
float temp0_28[0x4] = _mm_mul_ps(zmm2, temp0_20)
zmm9[0].q = zmm13 u>> 0x40
_mm_shuffle_ps(zmm13, zmm9, 0xc4)
float temp0_30[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x29)
float temp0_31[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x12)
float temp0_32[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 1)
float temp0_35[0x4] =
    _mm_sub_ps(zmm9, _mm_add_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0x1a), temp0_32))
zmm1 = arg3[2]
float temp0_36[0x4] = _mm_mul_ps(zmm1, temp0_35)
float temp0_38[0x4] = _mm_mul_ps(temp0_30, _mm_shuffle_ps(zmm2, zmm2, 4))
float temp0_39[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t rcx = zx.q(data_14401b1a0)
float zmm6[0x4] = _mm_and_ps(temp0_36, zmm7)
float temp0_41[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
float temp0_42[0x4] = _mm_mul_ps(temp0_31, temp0_39)
int64_t rdx = *(ThreadLocalStoragePointer + (rcx << 3))
float temp0_43[0x4] = _mm_add_ps(temp0_42, temp0_38)
float temp0_44[0x4] = _mm_sub_ps(temp0_38, temp0_42)
float temp0_45[0x4] = _mm_mul_ps(zmm1, temp0_43)
float temp0_46[0x4] = _mm_mul_ps(temp0_44, temp0_41)
float temp0_49[0x4] =
    _mm_shuffle_ps(_mm_shuffle_ps(temp0_45, zmm6, 0), _mm_shuffle_ps(temp0_46, zmm6, 0x32), 0x82)
float temp0_50[0x4] = _mm_shuffle_ps(temp0_45, zmm6, 0x31)
float var_108[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_46, zmm6, 0x10), temp0_50, 0x88)
zmm1 = arg3[1]
float temp0_53[0x4] = _mm_shuffle_ps(temp0_45, temp0_46, 0x12)
zmm9[0].q = zmm1 u>> 0x40
float temp0_54[0x4] = _mm_shuffle_ps(temp0_53, zmm6, 0xe8)
bool cond:0 = data_143dbb390 s> *(0x14 + rdx)
float temp0_55[0x4] = _mm_shuffle_ps(zmm1, zmm9, 0xc4)
float var_118[0x4] = temp0_49
float var_f8[0x4] = temp0_54
float var_e8[0x4] = temp0_55

if (cond:0)
    _Init_thread_header(&data_143dbb390)
    
    if (data_143dbb390 == 0xffffffff)
        data_143dbb380 = _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0)
        _Init_thread_footer(&data_143dbb390)
    
    data_143dbb010
    zmm7 = data_143dbb020

float zmm8[0x4] = arg3[2]
float temp0_56[0x4] = _mm_rcp_ps(zmm8)
float temp0_57[0x4] = _mm_mul_ps(temp0_56, temp0_56)
float temp0_60[0x4] = _mm_sub_ps(_mm_add_ps(temp0_56, temp0_56), _mm_mul_ps(temp0_57, zmm8))
float temp0_61[0x4] = _mm_mul_ps(temp0_60, temp0_60)
float temp0_62[0x4] = _mm_add_ps(temp0_60, temp0_60)
float temp0_63[0x4] = _mm_mul_ps(temp0_61, zmm8)
float temp0_65[0x4] =
    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm8, data_143dbb000), data_143dbb380, 2)
float temp0_66[0x4] = _mm_sub_ps(temp0_62, temp0_63)
__mulps_xmmps_memps(_mm_and_ps(_mm_and_ps(temp0_65, temp0_66 ^ zx.o(0)) ^ temp0_66, zmm7), arg2[2])
uint32_t var_c8[0x4][0x4]
uint32_t (* rax_1)[0x4]
float zmm10_1[0x4]
float zmm11_1[0x4]
float zmm12_1[0x4]
float zmm13_1[0x4]
rax_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1 = sub_140631b10(&var_118, &var_c8)
float temp0_70[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0)
float temp0_71[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0x55)
float zmm5_1[0x4] = rax_1[1]
uint32_t zmm4_1[0x4] = *rax_1
float zmm6_1[0x4] = rax_1[2]
float zmm7_1[0x4] = rax_1[3]
float temp0_72[0x4] = _mm_mul_ps(temp0_70, zmm4_1)
float temp0_73[0x4] = _mm_mul_ps(temp0_71, zmm5_1)
float temp0_74[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0)
float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11_1, zmm11_1, 0xaa), zmm6_1)
float temp0_77[0x4] = _mm_add_ps(temp0_72, temp0_73)
float temp0_78[0x4] = _mm_mul_ps(temp0_74, zmm4_1)
float temp0_79[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0xff)
float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12_1, zmm12_1, 0x55), zmm5_1)
float temp0_82[0x4] = _mm_add_ps(temp0_77, temp0_76)
float temp0_83[0x4] = _mm_mul_ps(temp0_79, zmm7_1)
float temp0_84[0x4] = _mm_add_ps(temp0_78, temp0_81)
float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12_1, zmm12_1, 0xaa), zmm6_1)
float temp0_87[0x4] = _mm_add_ps(temp0_82, temp0_83)
float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0x55), zmm5_1)
float temp0_90[0x4] = _mm_add_ps(temp0_84, temp0_86)
float temp0_92[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12_1, zmm12_1, 0xff), zmm7_1)
var_118 = temp0_87
float temp0_94[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0), zmm4_1)
float temp0_95[0x4] = _mm_add_ps(temp0_90, temp0_92)
float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0xaa), zmm6_1)
float temp0_98[0x4] = _mm_add_ps(temp0_94, temp0_89)
float temp0_100[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0xff), zmm7_1)
int96_t var_108_1 = temp0_95[0].12
float temp0_101[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0)
float temp0_102[0x4] = _mm_add_ps(temp0_98, temp0_97)
float temp0_103[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0x55)
float temp0_104[0x4] = _mm_mul_ps(temp0_101, zmm4_1)
float temp0_105[0x4] = _mm_mul_ps(temp0_103, zmm5_1)
float temp0_106[0x4] = _mm_add_ps(temp0_102, temp0_100)
float temp0_107[0x4] = _mm_add_ps(temp0_104, temp0_105)
int96_t var_f8_1 = temp0_106[0].12
float temp0_109[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0xaa), zmm6_1)
float temp0_111[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0xff), zmm7_1)
int96_t var_e8_1 = _mm_add_ps(_mm_add_ps(temp0_107, temp0_109), temp0_111)[0].12
float zmm8_1[0x4]
int128_t zmm9_1
zmm8_1, zmm9_1 = sub_1407740e0(&var_118, 0x322bcc77)
float zmm2_2[0x4] = var_118[0]
float zmm1_2 = var_118[1]
uint32_t temp0_115[0x4] =
    _mm_and_ps(data_143dbb060 ^ zmm9_1, _mm_cmpeq_ps(data_143dbb140, zmm8_1, 2))
float zmm0_2[0x4] = var_118[2]
uint32_t zmm4_2[0x4] = temp0_115 ^ data_143dbb060
zmm2_2[0] = zmm2_2[0] f* zmm4_2[0]
zmm1_2 = zmm1_2 f* zmm4_2[0]
zmm0_2[0] = zmm0_2[0] f* zmm4_2[0]
var_118[0] = zmm2_2[0]
float temp0_116[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
var_118[1] = zmm1_2
zmm1_2 = var_108_1:4.d * temp0_116[0]
var_118[2] = zmm0_2[0]
zmm0_2 = var_108_1:8.d
zmm0_2[0] = zmm0_2[0] * temp0_116[0]
float zmm3_2 = var_108_1.d * temp0_116[0]
zmm2_2 = var_f8_1.d
zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
var_108_1:4.d = zmm1_2
var_108_1:8.d = zmm0_2[0]
zmm0_2 = var_f8_1:8.d
zmm1_2 = var_f8_1:4.d f* zmm4_2[0]
zmm0_2[0] = zmm0_2[0] f* zmm4_2[0]
zmm2_2[0] = zmm2_2[0] f* zmm4_2[0]
var_f8_1:4.d = zmm1_2
var_f8_1:8.d = zmm0_2[0]
var_108_1.d = zmm3_2
var_f8_1.d = zmm2_2[0]
uint32_t var_d8[0x4]
uint32_t (* result)[0x4] = sub_14077e4a0(&var_d8, &var_118)
uint32_t zmm6_2[0x4] = var_d8
float zmm5_2[0x4] = data_143dbb130
uint32_t zmm1_3[0x4] = _mm_mul_ps(zmm6_2, zmm6_2)
zmm1_3 = _mm_add_ps(zmm1_3, _mm_shuffle_ps(zmm1_3, zmm1_3, 0x4e))
uint32_t zmm4_3[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_3, zmm1_3, 0x39), zmm1_3)
zmm1_3 = _mm_rsqrt_ps(zmm4_3)
float temp0_124[0x4] = _mm_mul_ps(zmm4_3, zmm5_2)
float temp0_129[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(zmm1_3, zmm1_3), temp0_124)), zmm1_3), 
    zmm1_3)
float temp0_132[0x4] = _mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(temp0_129, temp0_129), temp0_124))
uint32_t zmm0_3[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_3, 2)
zmm5_2 = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_132, temp0_129), temp0_129), zmm6_2) ^ data_143dbb120, 
    zmm0_3) ^ data_143dbb120
arg1[2] = zmm8_1
arg1[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_e8_1.d, var_e8_1:8.d[0].q), 
    _mm_unpacklo_ps(var_e8_1:4.d, 0)[0].q)
*arg1 = zmm5_2
return result
