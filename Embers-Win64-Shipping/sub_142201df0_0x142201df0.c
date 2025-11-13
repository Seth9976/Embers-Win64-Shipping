// 函数: sub_142201df0
// 地址: 0x142201df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8
int32_t arg_18 = r8
void* r14 = *(arg2 + 0x28)
int32_t var_e8 = 0x3f800000
int32_t var_d8 = 0x3f800000
int32_t var_c8 = 0x3f800000

if ((*(arg1 + 0x30) & 2) != 0)
    void* rax_1 = *(arg2 + 0x18)
    
    if (rax_1 != 0)
        float zmm7[0x4] = *(rax_1 + 0x1e0)
        var_e8.o = zmm7
        var_d8.o = _mm_shuffle_ps(zmm7, zmm7, 0x55)
        var_c8.o = _mm_shuffle_ps(zmm7, zmm7, 0xaa)

void* rbx = arg3
int512_t zmm1
zmm1.o = *(arg2 + 0x12c)
int128_t zmm0
int512_t zmm1_1
int512_t zmm6
zmm0, zmm1_1, zmm6 = sub_141fe5610(arg1 + 0x38, zmm1, *(arg2 + 0x18), rbx)
zmm1_1.o = *(arg2 + 0x12c)
zmm6.o = zmm0
uint128_t zmm0_1
float zmm6_1
zmm0_1, zmm6_1 = sub_141fe5610(arg1 + 0x68, zmm1_1, *(arg2 + 0x18), rbx)
int32_t var_140 = 0
arg3.d = zmm0_1.d
int32_t rax_3 = *(rbx + 4) * 0xbb38435 + 0x3619636b
*(rbx + 4) = rax_3
zmm0_1.d = (rax_3 u>> 9 | 0x3f800000).d f- 1f
zmm0_1.d = zmm0_1.d f* 65533.625f
uint128_t zmm1_2 = _mm_cvtepi32_ps(zx.o(int.d(zmm6_1 * 182.037842f)))
zmm0_1 = _mm_cvtepi32_ps(zx.o(int.d(zmm0_1.d)))
float var_148 = zmm1_2.d
int32_t var_144 = zmm0_1.d
float var_128[0x4]
float zmm8_1[0x4] = sub_14077e760(&var_128, &var_148)
float zmm1_3[0x4] = data_143a2efa4
float zmm2[0x4] = data_143a2efa8
float zmm9_1[0x4] = *(arg1 + 0x98)
float zmm5[0x4] = data_143dbb1f8
bool cond:1 = zmm9_1[0] != zmm5[0]
int32_t var_13c = 0
int64_t var_138 = 0
int32_t var_130 = 0
float zmm3[0x4] = var_148.o
float zmm4[0x4] = data_143dbb1fc
zmm3[0] = data_143a2efa0[0]
float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_5[0] = zmm1_3[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
temp0_6[0] = zmm2[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc9)
var_148.o = temp0_7
float var_f8[0x4]
float temp0_9[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_7, temp0_7, 0xff), var_f8)
float var_118[0x4]
float temp0_11[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_7, temp0_7, 0x55), var_118)
float var_108[0x4]
float temp0_13[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_7, temp0_7, 0xaa), var_108)
float temp0_15[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_7, temp0_7, 0), var_128)
float temp0_16[0x4] = _mm_add_ps(temp0_9, temp0_13)
float temp0_17[0x4] = _mm_add_ps(temp0_11, temp0_15)
zmm3 = data_143dbb200
var_138.o = _mm_add_ps(temp0_16, temp0_17)
float var_140_1
float zmm6_2[0x4]
float zmm7_1[0x4]

if (cond:1 || zmm4[0] f!= *(arg1 + 0x9c) || zmm3[0] f!= *(arg1 + 0xa0))
    zmm6_2 = *(arg1 + 0x9c)
    zmm7_1 = *(arg1 + 0xa0)
    zmm6_2[0] = zmm6_2[0] * zmm6_2[0]
    zmm9_1[0] = zmm9_1[0] * zmm9_1[0]
    zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
    zmm6_2[0] = zmm6_2[0] + zmm9_1[0]
    zmm6_2[0] = zmm6_2[0] + zmm7_1[0]
    
    if (not(zmm6_2[0] != 1f))
        var_148.q = *(arg1 + 0x98)
        var_140_1 = *(arg1 + 0xa0)
    else if (zmm6_2[0] >= 9.99999994e-09f)
        zmm4 = 0x3f000000
        float temp0_19[0x4] = _mm_rsqrt_ss(zmm6_2[0], zmm6_2[0])
        zmm2 = 0x3f000000
        zmm6_2[0] = zmm6_2[0] * 0.5f
        temp0_19[0] = temp0_19[0] * temp0_19[0]
        zmm6_2[0] = zmm6_2[0] * temp0_19[0]
        zmm2[0] = 0.5f - zmm6_2[0]
        temp0_19[0] = temp0_19[0] * zmm2[0]
        temp0_19[0] = temp0_19[0] + temp0_19[0]
        temp0_19[0] = temp0_19[0] * temp0_19[0]
        zmm6_2[0] = zmm6_2[0] * temp0_19[0]
        zmm4[0] = 0.5f - zmm6_2[0]
        temp0_19[0] = temp0_19[0] * zmm4[0]
        temp0_19[0] = temp0_19[0] + temp0_19[0]
        temp0_19[0] = temp0_19[0] * zmm7_1[0]
        temp0_19[0] = temp0_19[0] * zmm9_1[0]
        temp0_19[0] = temp0_19[0] * zmm6_2[0]
        var_140_1 = temp0_19[0]
        zmm5 = data_143dbb1f8
        var_148 = temp0_19[0]
        float var_144_2 = temp0_19[0]
    else
        var_148 = zmm5[0]
        float var_144_1 = zmm4[0]
        var_140_1 = zmm3[0]
    
    zmm3 = data_143dbb200
    zmm4 = data_143dbb1fc
else
    var_148.q = data_143a2efa0.q
    var_140_1 = data_143a2efa8

float zmm0_2[0x4] = zx.o(var_148.q)
var_148.q = zmm0_2.q
float zmm15[0x4] = var_148
bool cond:3 = zmm15[0] != zmm8_1[0]
float zmm14[0x4] = var_140_1
float temp0_20[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)

if (cond:3 || temp0_20[0] != zmm8_1[0] || not(zmm14[0] == 1f))
    zmm6_2 = temp0_20 ^ 0x80000000

float zmm10[0x4]
float zmm11[0x4]

if ((cond:3 || temp0_20[0] != zmm8_1[0] || not(zmm14[0] == 1f)) && (
        (zmm15 ^ 0x80000000)[0] != zmm8_1[0] || zmm6_2[0] != zmm8_1[0]
        || (zmm14 ^ 0x80000000)[0] != 1f))
    zmm7_1 = zmm15
    zmm15[0] = zmm15[0] * zmm14[0]
    zmm7_1[0] = zmm7_1[0] * zmm15[0]
    zmm11 = zmm14
    temp0_20[0] = temp0_20[0] * zmm6_2[0]
    zmm10 = zmm15
    zmm9_1 = zmm15 ^ 0x80000000
    zmm11[0] = zmm11[0] * zmm6_2[0]
    zmm7_1[0] = zmm7_1[0] - temp0_20[0]
else
    zmm6_2 = zmm14
    zmm7_1 = temp0_20 ^ 0x80000000
    zmm6_2[0] = zmm6_2[0] * zmm14[0]
    temp0_20[0] = temp0_20[0] * zmm7_1[0]
    zmm10 = zmm15
    zmm15[0] = zmm15[0] * zmm14[0]
    zmm9_1 = zx.o(0)
    zmm11 = zmm14
    zmm10[0] = zmm10[0] * zmm7_1[0]
    zmm6_2[0] = zmm6_2[0] - temp0_20[0]
    zmm8_1 = zmm15 ^ 0x80000000

var_128[3] = 0
zmm10[0] = zmm10[0] * zmm10[0]
var_118[3] = 0
zmm6_2[0] = zmm6_2[0] * zmm6_2[0]
var_108[3] = 0
zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
zmm10[0] = zmm10[0] + zmm6_2[0]
zmm10[0] = zmm10[0] + zmm8_1[0]

if (not(zmm10[0] == 1f))
    if (zmm10[0] >= 9.99999994e-09f)
        zmm4 = 0x3f000000
        float temp0_21[0x4] = _mm_rsqrt_ss(zmm10[0], zmm10[0])
        zmm2 = 0x3f000000
        zmm10[0] = zmm10[0] * 0.5f
        temp0_21[0] = temp0_21[0] * temp0_21[0]
        zmm10[0] = zmm10[0] * temp0_21[0]
        zmm2[0] = 0.5f - zmm10[0]
        temp0_21[0] = temp0_21[0] * zmm2[0]
        temp0_21[0] = temp0_21[0] + temp0_21[0]
        temp0_21[0] = temp0_21[0] * temp0_21[0]
        zmm10[0] = zmm10[0] * temp0_21[0]
        zmm4[0] = 0.5f - zmm10[0]
        temp0_21[0] = temp0_21[0] * zmm4[0]
        temp0_21[0] = temp0_21[0] + temp0_21[0]
        zmm6_2[0] = zmm6_2[0] * temp0_21[0]
        zmm10[0] = zmm10[0] * temp0_21[0]
        zmm8_1[0] = zmm8_1[0] * temp0_21[0]
    else
        zmm6_2 = zmm5
        zmm10 = zmm4
        zmm8_1 = zmm3

var_128[0] = zmm6_2[0]
zmm11[0] = zmm11[0] * zmm11[0]
zmm9_1[0] = zmm9_1[0] * zmm9_1[0]
zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
zmm11[0] = zmm11[0] + zmm9_1[0]
var_128[1] = zmm10[0]
var_128[2] = zmm8_1[0]
zmm11[0] = zmm11[0] + zmm7_1[0]

if (not(zmm11[0] == 1f))
    if (zmm11[0] >= 9.99999994e-09f)
        zmm4 = 0x3f000000
        float temp0_22[0x4] = _mm_rsqrt_ss(zmm11[0], zmm11[0])
        zmm2 = 0x3f000000
        zmm11[0] = zmm11[0] * 0.5f
        temp0_22[0] = temp0_22[0] * temp0_22[0]
        zmm11[0] = zmm11[0] * temp0_22[0]
        zmm2[0] = 0.5f - zmm11[0]
        temp0_22[0] = temp0_22[0] * zmm2[0]
        temp0_22[0] = temp0_22[0] + temp0_22[0]
        temp0_22[0] = temp0_22[0] * temp0_22[0]
        zmm11[0] = zmm11[0] * temp0_22[0]
        zmm4[0] = 0.5f - zmm11[0]
        temp0_22[0] = temp0_22[0] * zmm4[0]
        temp0_22[0] = temp0_22[0] + temp0_22[0]
        zmm9_1[0] = zmm9_1[0] * temp0_22[0]
        zmm11[0] = zmm11[0] * temp0_22[0]
        zmm7_1[0] = zmm7_1[0] * temp0_22[0]
    else
        zmm9_1 = data_143dbb1f8
        zmm11 = data_143dbb1fc
        zmm7_1 = data_143dbb200

int32_t var_12c = 0
int32_t rcx_4 = *(arg1 + 0x30) & 1
zmm3 = var_138.o
bool cond:4 = (*(*(r14 + 0x30) + 0x59) & 1) != 0
zmm3[0] = var_138.d[0]
var_108[0] = zmm15[0]
float temp0_23[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
float temp0_24[0x4] = _mm_shuffle_ps(var_108, var_108, 0xe1)
temp0_23[0] = var_138:4.d[0]
temp0_24[0] = temp0_20[0]
float temp0_25[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xc6)
temp0_25[0] = var_130[0]
float temp0_26[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xc6)
float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xc9)
temp0_26[0] = zmm14[0]
float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xc9)
float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xaa), temp0_28)
var_148.q = 0
float temp0_31[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0x55)
var_118[0] = zmm9_1[0]
float temp0_33[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_27, temp0_27, 0xff), data_142d3f660)
int32_t var_140_3 = 0
float temp0_34[0x4] = _mm_shuffle_ps(var_118, var_118, 0xe1)
temp0_34[0] = zmm11[0]
float temp0_36[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_27, temp0_27, 0), var_128)
float temp0_37[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xc6)
float temp0_38[0x4] = _mm_add_ps(temp0_33, temp0_30)
temp0_37[0] = zmm7_1[0]
zmm4 = _mm_add_ps(temp0_38, 
    _mm_add_ps(_mm_mul_ps(temp0_31, _mm_shuffle_ps(temp0_37, temp0_37, 0xc9)), temp0_36))
zmm3 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
zmm2 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)

if (cond:4)
    if (rcx_4 != 0)
        void* rax_13 = *(arg2 + 0x18)
        float temp0_66[0x4] = _mm_unpacklo_ps(zmm3, 0)
        float temp0_67[0x4] = _mm_unpacklo_ps(zmm4, zmm2[0].q)
        zmm6_2 = *(rax_13 + 0x1e0)
        float temp0_68[0x4] = __mulps_xmmps_memps(*(rax_13 + 0x1c0), data_143f50590)
        float temp0_69[0x4] = _mm_unpacklo_ps(temp0_67, temp0_66[0].q)
        float temp0_70[0x4] = _mm_rcp_ps(zmm6_2)
        float temp0_71[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0xc9)
        float temp0_72[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0xc9)
        float temp0_73[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0xd2)
        float temp0_74[0x4] = _mm_mul_ps(temp0_71, temp0_73)
        float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xd2), temp0_72)
        float temp0_77[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0xff)
        float temp0_78[0x4] = _mm_sub_ps(temp0_76, temp0_74)
        float temp0_79[0x4] = _mm_mul_ps(temp0_70, temp0_70)
        float temp0_80[0x4] = _mm_add_ps(temp0_70, temp0_70)
        float temp0_81[0x4] = _mm_add_ps(temp0_78, temp0_78)
        float temp0_82[0x4] = _mm_mul_ps(temp0_79, zmm6_2)
        float temp0_83[0x4] = _mm_mul_ps(temp0_77, temp0_81)
        float temp0_84[0x4] = _mm_sub_ps(temp0_80, temp0_82)
        float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_81, temp0_81, 0xd2), temp0_72)
        float temp0_87[0x4] = _mm_add_ps(temp0_83, temp0_69)
        float temp0_88[0x4] = _mm_mul_ps(temp0_84, temp0_84)
        float temp0_89[0x4] = _mm_add_ps(temp0_84, temp0_84)
        float temp0_90[0x4] = _mm_mul_ps(temp0_88, zmm6_2)
        float temp0_92[0x4] = __cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(zmm6_2, data_143f50540), data_143f50580, 2)
        float temp0_93[0x4] = _mm_sub_ps(temp0_89, temp0_90)
        float temp0_96[0x4] =
            _mm_sub_ps(temp0_86, _mm_mul_ps(_mm_shuffle_ps(temp0_81, temp0_81, 0xc9), temp0_73))
        zmm6_2 = _mm_and_ps(temp0_92, temp0_93 ^ zx.o(0)) ^ temp0_93
        zmm2 = _mm_mul_ps(_mm_add_ps(temp0_96, temp0_87), zmm6_2)
    label_1422025cd:
        zmm4 = zmm2
        zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
else if (rcx_4 == 0)
    void* rax_12 = *(arg2 + 0x18)
    float temp0_45[0x4] = _mm_unpacklo_ps(zmm3, 0)
    float temp0_46[0x4] = _mm_unpacklo_ps(zmm4, zmm2[0].q)
    zmm5 = *(rax_12 + 0x1c0)
    float temp0_48[0x4] =
        __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_46, temp0_45[0].q), *(rax_12 + 0x1e0))
    float temp0_49[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_50[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_51[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_53[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0xc9), temp0_50)
    float temp0_56[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0xd2), temp0_49), temp0_53)
    float temp0_57[0x4] = _mm_add_ps(temp0_56, temp0_56)
    float temp0_58[0x4] = _mm_mul_ps(temp0_51, temp0_57)
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xc9)
    float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xd2), temp0_49)
    float temp0_62[0x4] = _mm_mul_ps(temp0_59, temp0_50)
    float temp0_63[0x4] = _mm_add_ps(temp0_58, temp0_48)
    zmm2 = _mm_add_ps(_mm_sub_ps(temp0_61, temp0_62), temp0_63)
    goto label_1422025cd

zmm0_2 = arg3.d
zmm3[0] = zmm3[0] * zmm0_2[0]
zmm4[0] = zmm4[0] * zmm0_2[0]
zmm3[0] = zmm3[0] f* var_d8
zmm4[0] = zmm4[0] f* var_e8
zmm2[0] = zmm2[0] * zmm0_2[0]
zmm3[0] = zmm3[0] f+ *(arg4 + 0x34)
zmm4[0] = zmm4[0] f+ *(arg4 + 0x30)
zmm2[0] = zmm2[0] f* var_c8
*(arg4 + 0x34) = zmm3[0]
*(arg4 + 0x30) = zmm4[0]
zmm2[0] = zmm2[0] f+ *(arg4 + 0x38)
*(arg4 + 0x38) = zmm2[0]
zmm4[0] = zmm4[0] f+ *(arg4 + 0x20)
zmm3[0] = zmm3[0] f+ *(arg4 + 0x24)
zmm2[0] = zmm2[0] f+ *(arg4 + 0x28)
*(arg4 + 0x20) = zmm4[0]
*(arg4 + 0x24) = zmm3[0]
*(arg4 + 0x28) = zmm2[0]
return arg4
