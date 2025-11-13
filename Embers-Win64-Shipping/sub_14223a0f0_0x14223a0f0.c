// 函数: sub_14223a0f0
// 地址: 0x14223a0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm10[0x4]
uint32_t var_78[0x4] = zmm10
sub_141fd6cc0(arg1, arg4, 1, 0, 0, nullptr)
uint32_t zmm0[0x4] = sub_142231db0(arg2, arg3)
zmm0[0] = zmm0[0] f* 0.5f
uint32_t var_2a0
uint32_t var_29c
sub_142231e50(arg2, arg3, &var_29c, &var_2a0)
bool cond:0 = _mm_and_ps(zmm0, 0x7fffffff)[0] f<= 9.99999994e-09f
uint32_t zmm1[0x4] = var_2a0
uint32_t zmm2[0x4] = var_29c
uint32_t temp0_1[0x4]

if (not(cond:0))
    zmm2[0] = zmm2[0] f- zmm1[0]
    temp0_1 = _mm_and_ps(zmm2, 0x7fffffff)

if (cond:0 || not(zmm0[0] f> temp0_1[0]))
    if (zmm2[0] f<= zmm1[0])
        var_29c = zmm1[0]
    else
        var_2a0 = zmm2[0]

*(arg1 + 0x28) = sub_140a82f30(0x3a70, 0)
int64_t rax_2 = sub_140a82f30(0x370, 0)
int128_t zmm7 = var_29c
float _X = zmm7.d f- var_2a0.d
*(arg1 + 0x30) = rax_2
_X = _X f* zmm7.d f/ zmm0[0] f/ zmm7.d

if (_X >= -1f)
    _X = __minss_xmmss_memss(_X, 0x3f800000)
else
    _X = -1f

int32_t i = 0
float zmm0_2[0x4] = asinf(_X)
zmm0_2[0] = zmm0_2[0] * 2.86478877f
int64_t r14 = 0
int64_t r15 = 0
float var_298 = 0f
zmm1 = 0x40900000
float zmm13[0x4] = 0x3ec90fdb
zmm1[0] = 4.5f - zmm0_2[0]
zmm0_2 = 0x41100000
int32_t var_278 = 0
int32_t var_288 = 0
int64_t var_260 = 0x3f800000
zmm0_2[0] = 9f f- zmm1[0]
int32_t var_258 = 0
int64_t r12 = sx.q(int.d(zmm0_2[0]))
float var_284_1
float zmm3_1
uint32_t zmm6[0x4]
int32_t zmm9_1
uint32_t zmm11[0x4]
uint32_t zmm12[0x4]
int32_t zmm14_1[0x4]

do
    uint64_t* rbx_2 = *(arg1 + 0x30) + r15
    zmm6 = _mm_cvtepi32_ps(zx.o(i))
    float zmm2_1[0x4]
    int32_t zmm10_1
    int128_t zmm15_1
    float zmm0_3[0x4]
    
    if (r14 s> r12)
        zmm1 = _mm_cvtepi32_ps(zx.o(i - 1))
        zmm1[0] = zmm1[0] f* zmm13[0]
        float zmm8_1
        zmm0_3, zmm8_1, zmm10_1, zmm15_1 = __libm_sse2_sincosf_(zmm1)
        zmm3_1 = zmm0_3[0]
        float temp0_6[0x4] = _mm_shuffle_ps(zmm0_3, zmm0_3, 1)
        temp0_6[0] = temp0_6[0] * zmm8_1
        zmm3_1 = zmm3_1 * zmm8_1
        float var_290_2 = temp0_6[0]
        zmm2_1 = temp0_6
    else
        zmm6[0] = zmm6[0] f* zmm13[0]
        float zmm7_1
        zmm0_3, zmm7_1, zmm10_1, zmm15_1 = __libm_sse2_sincosf_(zmm6)
        zmm3_1 = zmm0_3[0]
        zmm2_1 = _mm_shuffle_ps(zmm0_3, zmm0_3, 1)
        zmm2_1[0] = zmm2_1[0] * zmm7_1
        zmm3_1 = zmm3_1 * zmm7_1
        float var_290_1 = zmm2_1[0]
    uint128_t zmm1_1 = zx.o(var_278.q)
    _mm_shuffle_ps(zmm1_1, zmm1_1, 0xe1)
    zmm2_1[0] = zmm2_1[0] f+ zmm10_1
    zmm1_1.d = zmm3_1
    float var_280_1 = zmm3_1
    zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xe1)
    *rbx_2 = zmm1_1.q
    var_284_1 = (zmm2_1 ^ zmm15_1)[0]
    rbx_2[1].d = zmm2_1[0]
    var_278.q = zmm1_1.q
    zmm6, zmm9_1, zmm11, zmm12, zmm13, zmm14_1 = sub_142252cf0(rbx_2, &var_260, &var_288, &var_298)
    zmm6[0] = zmm6[0] f* zmm14_1[0]
    i += 1
    r14 += 1
    *(rbx_2 + 0xc) = 0
    r15 += 0x58
    rbx_2[2].d = zmm6[0]
while (i s< 0xa)

float zmm4[0x4] = data_142dc1870
int32_t i_1 = 0
float zmm5[0x4] = data_142dc1880
zmm6 = data_142dc1850
zmm11 = zx.o(0)
zmm14_1 = data_142dd3f80
int128_t zmm15_2 = data_142dd3fd0
zmm13 = data_142dd3fb0
zmm10 = 0x42fe0000
zmm12 = 0x437e0000
float temp0_9[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
float temp0_10[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
float temp0_11[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
zmm0_2 = data_142dc1860
uint32_t zmm7_2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
zmm1 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
float temp0_14[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 0)
float temp0_15[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_16[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
float temp0_17[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0)
zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0)
float var_f8[0x4] = zmm5
int32_t i_4 = 0
uint32_t var_d8[0x4] = zmm7_2
uint32_t var_e8[0x4] = zmm6
float var_108[0x4] = zmm4
uint32_t var_158[0x4] = zmm1
int32_t var_1fc = 0x3f800000
int32_t var_1ec = 0
int32_t var_1dc = 0
int32_t var_1cc = 0
char arg_b = 0x7f
char var_2a5 = 0x7f
char var_2a1 = 0x7f
var_298.q = 0
int64_t r13_3

do
    zmm0_2 = zx.o(0)
    int32_t var_23c_1 = 0
    zmm0_2[0] = float.s(i_1)
    float zmm8_2[0x4] = zmm7_2
    zmm0_2[0] = zmm0_2[0] * 0.0625f
    zmm1 = zmm0_2
    float var_264_1 = zmm0_2[0]
    zmm1[0] = zmm1[0] f* 360f
    float temp0_23[0x4] = __mulps_xmmps_memps(
        _mm_unpacklo_ps(zx.o(0), _mm_unpacklo_ps(zmm1, zx.o(0)[0].q)[0].q), data_143f51ab0)
    float zmm2_2[0x4] = data_143f51a60
    float temp0_28[0x4] = _mm_sub_ps(temp0_23, 
        __mulps_xmmps_memps(
            _mm_cvtepi32_ps(_mm_cvtps_epi32(__mulps_xmmps_memps(temp0_23, data_143f51aa0))), 
            data_143f51a90))
    float temp0_30[0x4] = _mm_cmpeq_ps(zmm2_2, __andps_xmmxud_memxud(temp0_28, data_143f51a30), 1)
    zmm0_2 = _mm_and_ps(
        _mm_sub_ps(
            __orps_xmmxud_memxud(__andps_xmmxud_memxud(temp0_28, data_143f51a80), data_143f51a70), 
            temp0_28) ^ temp0_28, 
        temp0_30) ^ temp0_28
    zmm1 = _mm_mul_ps(zmm0_2, zmm0_2)
    zmm7_2 = _mm_mul_ps(var_158, zmm1)
    float temp0_37[0x4] = _mm_mul_ps(zmm8_2, zmm1)
    zmm7_2 = __addps_xmmps_memps(zmm7_2, temp0_14)
    float temp0_39[0x4] = _mm_add_ps(temp0_37, zmm6)
    zmm7_2 = _mm_mul_ps(zmm7_2, zmm1)
    float temp0_41[0x4] = _mm_mul_ps(temp0_39, zmm1)
    zmm7_2 = __addps_xmmps_memps(zmm7_2, temp0_15)
    float temp0_43[0x4] = __addps_xmmps_memps(temp0_41, temp0_9)
    zmm7_2 = _mm_mul_ps(zmm7_2, zmm1)
    float temp0_45[0x4] = _mm_mul_ps(temp0_43, zmm1)
    zmm7_2 = __addps_xmmps_memps(zmm7_2, temp0_16)
    float temp0_47[0x4] = __addps_xmmps_memps(temp0_45, temp0_10)
    zmm7_2 = _mm_mul_ps(zmm7_2, zmm1)
    float temp0_49[0x4] = _mm_mul_ps(temp0_47, zmm1)
    zmm7_2 = __addps_xmmps_memps(zmm7_2, temp0_17)
    float temp0_51[0x4] = __addps_xmmps_memps(temp0_49, temp0_11)
    zmm7_2 = _mm_mul_ps(zmm7_2, zmm1)
    float temp0_53[0x4] = _mm_mul_ps(temp0_51, zmm1)
    zmm1 = data_143f51990 ^ data_143f515b0
    zmm7_2 = _mm_add_ps(zmm7_2, zmm5)
    zmm1 = _mm_and_ps(zmm1, temp0_30) ^ data_143f515b0
    float temp0_56[0x4] = _mm_add_ps(temp0_53, zmm4)
    zmm7_2 = _mm_mul_ps(zmm7_2, zmm1)
    float temp0_58[0x4] = _mm_mul_ps(temp0_56, zmm0_2)
    zmm6 = _mm_shuffle_ps(zmm7_2, zmm7_2, 0x55)
    zmm0_2 = zmm6
    float temp0_60[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xaa)
    zmm0_2[0] = zmm0_2[0] f* zmm7_2[0]
    float temp0_61[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xaa)
    float temp0_62[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0x55)
    zmm7_2[0] = zmm7_2[0] f* temp0_62[0]
    float var_248_1 = zmm0_2[0]
    temp0_61[0] = temp0_61[0] * temp0_58[0]
    uint32_t var_244_1 = zmm7_2[0]
    temp0_60[0] = temp0_60[0] * temp0_62[0]
    zmm1 = temp0_61
    float var_240_1 = temp0_58[0]
    zmm1[0] = zmm1[0] f* zmm6[0]
    zmm1[0] = zmm1[0] f- temp0_60[0]
    temp0_61[0] = temp0_61[0] * temp0_62[0]
    int32_t var_22c_1 = 0
    float (* j)[0x4] = nullptr
    int64_t r13_1 = var_298.q
    zmm0_2 = zmm7_2
    zmm0_2[0] = zmm0_2[0] * temp0_61[0]
    int32_t var_21c_1 = 0
    uint32_t var_238_1 = zmm1[0]
    zmm1 = temp0_60
    zmm1[0] = zmm1[0] f* zmm6[0]
    int32_t var_20c_1 = 0x3f800000
    float var_230_1 = (zmm0_2 ^ data_142d3f780)[0]
    zmm1[0] = zmm1[0] f+ temp0_61[0]
    temp0_60[0] = temp0_60[0] f* zmm7_2[0]
    zmm7_2 = var_248_1.o
    temp0_60[0] = temp0_60[0] * temp0_58[0]
    uint32_t var_234_1 = zmm1[0]
    zmm1 = temp0_61
    zmm1[0] = zmm1[0] f* temp0_62[0]
    float var_220_1 = temp0_60[0]
    temp0_60[0] = temp0_60[0] f* zmm6[0]
    zmm6[0] = zmm6[0] f* temp0_61[0]
    zmm1[0] = zmm1[0] f+ temp0_60[0]
    temp0_60[0] = temp0_60[0] * temp0_62[0]
    zmm0_2 = data_143dbb1f8
    zmm5 = var_238_1.o
    zmm6[0] = zmm6[0] f- temp0_60[0]
    float var_218_1 = zmm0_2[0]
    uint32_t var_228_1 = (zmm1 ^ data_142d3f780)[0]
    uint32_t var_224_1 = zmm6[0]
    zmm4 = var_228_1.o
    uint32_t var_214_1 = data_143dbb1fc[0]
    float var_210_1 = data_143dbb200[0]
    zmm6 = var_218_1.o
    
    do
        int64_t rax_6 = *(arg1 + 0x30)
        void* rbx_3 = j + r13_1
        int64_t rcx_3 = *(arg1 + 0x28)
        var_288.q = 0
        zmm1 = *(j + rax_6 + 4)
        float var_208[0x4]
        var_208[0] = (*(j + rax_6))[0]
        zmm2_2 = *(j + rax_6 + 8)
        float temp0_63[0x4] = _mm_shuffle_ps(var_208, var_208, 0xe1)
        temp0_63[0] = zmm1[0]
        int32_t var_280_2 = 0
        float temp0_64[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xc6)
        temp0_64[0] = zmm2_2[0]
        var_288.q = 0
        float temp0_65[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0xc9)
        var_208 = temp0_65
        float temp0_66[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xff)
        float temp0_67[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xaa)
        zmm1 = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
        float temp0_69[0x4] = _mm_mul_ps(temp0_67, zmm4)
        int32_t var_280_3 = 0
        zmm1 = _mm_mul_ps(zmm1, zmm5)
        float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0), zmm7_2)
        float temp0_73[0x4] = _mm_mul_ps(temp0_66, zmm6)
        zmm1 = _mm_add_ps(zmm1, temp0_72)
        float temp0_76[0x4] = _mm_add_ps(_mm_add_ps(temp0_73, temp0_69), zmm1)
        float temp0_77[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0xaa)
        zmm1 = _mm_shuffle_ps(temp0_76, temp0_76, 0x55)
        float var_258_1 = temp0_77[0]
        *(rbx_3 + rcx_3) = (_mm_unpacklo_ps(temp0_76, zmm1[0].q)).q
        *(rbx_3 + rcx_3 + 8) = var_258_1
        int64_t rax_8 = *(arg1 + 0x30)
        zmm1 =
            _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rax_8 + j + 0x50)), zmm11[0].q), zmm11[0].q)
        float temp0_84[0x4] =
            _mm_mul_ps(_mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm14_1) & zmm15_2) | zmm1), zmm13)
        float var_1f8[0x4]
        var_1f8[0] = temp0_84[0]
        float temp0_85[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0x55)
        float temp0_86[0x4] = _mm_shuffle_ps(var_1f8, var_1f8, 0xe1)
        temp0_86[0] = temp0_85[0]
        zmm1 = _mm_shuffle_ps(temp0_84, temp0_84, 0xaa)
        float temp0_88[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0xc6)
        temp0_88[0] = zmm1[0]
        float temp0_89[0x4] = _mm_shuffle_ps(temp0_88, temp0_88, 0xc9)
        var_1f8 = temp0_89
        float temp0_90[0x4] = _mm_shuffle_ps(temp0_89, temp0_89, 0xff)
        float temp0_91[0x4] = _mm_shuffle_ps(temp0_89, temp0_89, 0xaa)
        zmm1 = _mm_shuffle_ps(temp0_89, temp0_89, 0x55)
        float temp0_93[0x4] = _mm_mul_ps(temp0_91, zmm4)
        float temp0_94[0x4] = _mm_mul_ps(temp0_90, zmm6)
        float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_89, temp0_89, 0), zmm7_2)
        float temp0_97[0x4] = _mm_add_ps(temp0_94, temp0_93)
        zmm1 = _mm_mul_ps(zmm1, zmm5)
        zmm0_2 = _mm_unpacklo_epi8(zx.o(*(rax_8 + j + 0x4c)), zmm11[0].q)
        var_288.o = _mm_add_ps(temp0_97, _mm_add_ps(zmm1, temp0_96))
        zmm0_2 = _mm_unpacklo_epi16(zmm0_2, zmm11[0].q)
        float temp0_103[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0x55)
        zmm7_2 = _mm_cmpgt_epi32(zmm0_2, zmm14_1)
        var_298.q = 0
        int32_t var_290_3 = 0
        zmm1 = _mm_shuffle_ps(temp0_84, temp0_84, 0xaa)
        zmm7_2 = (zmm7_2 & zmm15_2) | zmm0_2
        var_278.o = data_142d3f660
        var_278.q = 0
        int32_t var_270_2 = 0
        float temp0_107[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm7_2), zmm13)
        float temp0_108[0x4] = _mm_shuffle_ps(temp0_107, temp0_107, 0xaa)
        zmm6 = _mm_shuffle_ps(temp0_107, temp0_107, 0x55)
        temp0_108[0] = temp0_108[0] * temp0_103[0]
        zmm0_2 = zmm6
        zmm0_2[0] = zmm0_2[0] f* zmm1[0]
        temp0_108[0] = temp0_108[0] * temp0_84[0]
        temp0_108[0] = temp0_108[0] - zmm0_2[0]
        zmm6[0] = zmm6[0] f* temp0_84[0]
        float temp0_110[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xff)
        temp0_107[0] = temp0_107[0] * temp0_103[0]
        temp0_107[0] = temp0_107[0] f* zmm1[0]
        zmm6[0] = zmm6[0] f- temp0_107[0]
        temp0_108[0] = temp0_108[0] * temp0_110[0]
        temp0_107[0] = temp0_107[0] - temp0_108[0]
        float var_1e8[0x4]
        var_1e8[0] = temp0_108[0]
        float temp0_111[0x4] = _mm_shuffle_ps(var_1e8, var_1e8, 0xe1)
        zmm6[0] = zmm6[0] f* temp0_110[0]
        temp0_107[0] = temp0_107[0] * temp0_110[0]
        temp0_111[0] = temp0_107[0]
        float temp0_112[0x4] = _mm_shuffle_ps(temp0_111, temp0_111, 0xc6)
        temp0_112[0] = zmm6[0]
        zmm6 = var_218_1.o
        float temp0_113[0x4] = _mm_shuffle_ps(temp0_112, temp0_112, 0xc9)
        var_1e8 = temp0_113
        float temp0_114[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0xff)
        float temp0_116[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_113, temp0_113, 0xaa), var_228_1.o)
        zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_113, temp0_113, 0x55), var_238_1.o)
        float temp0_120[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_113, temp0_113, 0), var_248_1.o)
        float temp0_121[0x4] = _mm_mul_ps(temp0_114, zmm6)
        zmm1 = _mm_add_ps(zmm1, temp0_120)
        var_278.o = _mm_add_ps(_mm_add_ps(temp0_121, temp0_116), zmm1)
        float temp0_126[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm7_2), zmm13)
        float var_1d8[0x4]
        var_1d8[0] = temp0_126[0]
        float temp0_127[0x4] = _mm_shuffle_ps(temp0_126, temp0_126, 0x55)
        float temp0_128[0x4] = _mm_shuffle_ps(var_1d8, var_1d8, 0xe1)
        temp0_128[0] = temp0_127[0]
        zmm1 = _mm_shuffle_ps(temp0_126, temp0_126, 0xaa)
        float temp0_130[0x4] = _mm_shuffle_ps(temp0_128, temp0_128, 0xc6)
        temp0_130[0] = zmm1[0]
        float temp0_131[0x4] = _mm_shuffle_ps(temp0_130, temp0_130, 0xc9)
        var_1d8 = temp0_131
        float temp0_132[0x4] = _mm_shuffle_ps(temp0_131, temp0_131, 0xff)
        float temp0_134[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_131, temp0_131, 0xaa), var_228_1.o)
        float temp0_136[0x4] = _mm_add_ps(_mm_mul_ps(temp0_132, zmm6), temp0_134)
        int64_t rdi_1 = *(arg1 + 0x28)
        float temp0_142[0x4] = _mm_add_ps(temp0_136, 
            _mm_add_ps(
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_131, temp0_131, 0x55), var_238_1.o), 
                _mm_mul_ps(_mm_shuffle_ps(temp0_131, temp0_131, 0), var_248_1.o)))
        var_298.o = temp0_142
        temp0_142[0] = temp0_142[0] f* zmm10[0]
        temp0_142[0] = temp0_142[0] + temp0_142[0]
        temp0_142[0] = temp0_142[0] f+ zmm9_1
        int32_t r14_2 = int.d(temp0_142[0]) s>> 1
        char rax_9
        
        if (r14_2 s>= 0xffffff80)
            rax_9 = 0x7f
            
            if (r14_2 s< 0x7f)
                rax_9 = r14_2.b
        else
            rax_9 = -0x80
        
        zmm1 = zmm3_1
        zmm1[0] = zmm1[0] f* zmm10[0]
        *(rbx_3 + rdi_1 + 0x4c) = rax_9
        zmm1[0] = zmm1[0] f+ zmm1[0]
        zmm1[0] = zmm1[0] f+ zmm9_1
        int32_t r10_2 = int.d(zmm1[0]) s>> 1
        char rax_10
        
        if (r10_2 s>= 0xffffff80)
            rax_10 = 0x7f
            
            if (r10_2 s< 0x7f)
                rax_10 = r10_2.b
        else
            rax_10 = -0x80
        
        zmm1 = var_290_3
        zmm1[0] = zmm1[0] f* zmm10[0]
        *(rbx_3 + rdi_1 + 0x4d) = rax_10
        zmm1[0] = zmm1[0] f+ zmm1[0]
        zmm1[0] = zmm1[0] f+ zmm9_1
        int32_t r11_2 = int.d(zmm1[0]) s>> 1
        char rax_11
        
        if (r11_2 s>= 0xffffff80)
            rax_11 = 0x7f
            
            if (r11_2 s< 0x7f)
                rax_11 = r11_2.b
        else
            rax_11 = -0x80
        
        zmm1 = var_288
        zmm1[0] = zmm1[0] f* zmm12[0]
        *(rbx_3 + rdi_1 + 0x4e) = rax_11
        *(rbx_3 + rdi_1 + 0x4f) = 0x7f
        zmm1[0] = zmm1[0] f+ zmm9_1
        int32_t r9_3 = int.d(zmm1[0]) s>> 1
        char rax_12
        
        if (r9_3 s>= 0xffffff80)
            rax_12 = 0x7f
            
            if (r9_3 s< 0x7f)
                rax_12 = r9_3.b
        else
            rax_12 = -0x80
        
        zmm1 = var_284_1
        zmm1[0] = zmm1[0] f* zmm12[0]
        *(rbx_3 + rdi_1 + 0x50) = rax_12
        zmm1[0] = zmm1[0] f+ zmm9_1
        int32_t rdx_5 = int.d(zmm1[0]) s>> 1
        char rax_13
        
        if (rdx_5 s>= 0xffffff80)
            rax_13 = 0x7f
            
            if (rdx_5 s< 0x7f)
                rax_13 = rdx_5.b
        else
            rax_13 = -0x80
        
        zmm1 = var_280_3
        zmm1[0] = zmm1[0] f* zmm12[0]
        *(rbx_3 + rdi_1 + 0x51) = rax_13
        zmm1[0] = zmm1[0] f+ zmm9_1
        int32_t r8_3 = int.d(zmm1[0]) s>> 1
        char rax_14
        
        if (r8_3 s>= 0xffffff80)
            rax_14 = 0x7f
            
            if (r8_3 s< 0x7f)
                rax_14 = r8_3.b
        else
            rax_14 = -0x80
        
        *(rbx_3 + rdi_1 + 0x52) = rax_14
        *(rbx_3 + rdi_1 + 0x53) = 0x7f
        char arg_8
        
        if (r9_3 s>= 0xffffff80)
            char rcx_4 = 0x7f
            
            if (r9_3 s< 0x7f)
                rcx_4 = r9_3.b
            
            arg_8 = rcx_4
        else
            arg_8 = 0x80
        
        char arg_9
        
        if (rdx_5 s>= 0xffffff80)
            char rcx_5 = 0x7f
            
            if (rdx_5 s< 0x7f)
                rcx_5 = rdx_5.b
            
            arg_9 = rcx_5
        else
            arg_9 = 0x80
        char arg_a
        
        if (r8_3 s>= 0xffffff80)
            char rcx_6 = 0x7f
            
            if (r8_3 s< 0x7f)
                rcx_6 = r8_3.b
            
            arg_a = rcx_6
        else
            arg_a = 0x80
        zmm1 = var_278
        zmm1[0] = zmm1[0] f* zmm10[0]
        zmm1[0] = zmm1[0] f+ zmm1[0]
        zmm1[0] = zmm1[0] f+ zmm9_1
        int32_t rdx_7 = int.d(zmm1[0]) s>> 1
        char var_2a8_1
        
        if (rdx_7 s>= 0xffffff80)
            char rcx_7 = 0x7f
            
            if (rdx_7 s< 0x7f)
                rcx_7 = rdx_7.b
            
            var_2a8_1 = rcx_7
        else
            var_2a8_1 = 0x80
        
        int32_t var_274
        zmm1 = var_274
        zmm1[0] = zmm1[0] f* zmm10[0]
        zmm1[0] = zmm1[0] f+ zmm1[0]
        zmm1[0] = zmm1[0] f+ zmm9_1
        int32_t rdx_9 = int.d(zmm1[0]) s>> 1
        
        if (rdx_9 s>= 0xffffff80)
            char rcx_8 = 0x7f
            
            if (rdx_9 s< 0x7f)
                rcx_8 = rdx_9.b
            
            char var_2a7_2 = rcx_8
        else
            char var_2a7_1 = 0x80
        
        zmm1 = var_270_2
        zmm1[0] = zmm1[0] f* zmm10[0]
        zmm1[0] = zmm1[0] f+ zmm1[0]
        zmm1[0] = zmm1[0] f+ zmm9_1
        int32_t rdx_11 = int.d(zmm1[0]) s>> 1
        
        if (rdx_11 s>= 0xffffff80)
            char rcx_9 = 0x7f
            
            if (rdx_11 s< 0x7f)
                rcx_9 = rdx_11.b
            
            char var_2a6_2 = rcx_9
        else
            char var_2a6_1 = 0x80
        
        char var_2a4_1
        
        if (r14_2 s>= 0xffffff80)
            char rcx_10 = 0x7f
            
            if (r14_2 s< 0x7f)
                rcx_10 = r14_2.b
            
            var_2a4_1 = rcx_10
        else
            var_2a4_1 = 0x80
        
        if (r10_2 s>= 0xffffff80)
            char rcx_11 = 0x7f
            
            if (r10_2 s< 0x7f)
                rcx_11 = r10_2.b
            
            char var_2a3_2 = rcx_11
        else
            char var_2a3_1 = 0x80
        
        if (r11_2 s>= 0xffffff80)
            char rcx_12 = 0x7f
            
            if (r11_2 s< 0x7f)
                rcx_12 = r11_2.b
            
            char var_2a2_2 = rcx_12
        else
            char var_2a2_1 = 0x80
        
        zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(arg_8.d), zmm11[0].q), zmm11[0].q)
        int32_t var_1bc_1 = 0
        int32_t var_1ac_1 = 0
        int32_t var_19c_1 = 0
        float temp0_146[0x4] = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm14_1) & zmm15_2) | zmm1)
        zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_2a8_1.d), zmm11[0].q), zmm11[0].q)
        float temp0_149[0x4] = _mm_mul_ps(temp0_146, zmm13)
        float temp0_151[0x4] = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1, zmm14_1) & zmm15_2) | zmm1)
        zmm1 = _mm_unpacklo_epi8(zx.o(var_2a4_1.d), zmm11[0].q)
        float temp0_153[0x4] = _mm_mul_ps(temp0_151, zmm13)
        zmm1 = _mm_unpacklo_epi16(zmm1, zmm11[0].q)
        float var_1a8_1 = temp0_149[0]
        zmm0_2 = _mm_cmpgt_epi32(zmm1, zmm14_1) & zmm15_2
        float var_1b8_1 = temp0_153[0]
        float temp0_157[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm0_2 | zmm1), zmm13)
        float var_1c8 = temp0_157[0]
        float var_1c4_1 = _mm_shuffle_ps(temp0_157, temp0_157, 0x55)[0]
        float var_1b4_1 = _mm_shuffle_ps(temp0_153, temp0_153, 0x55)[0]
        float var_1a4_1 = _mm_shuffle_ps(temp0_149, temp0_149, 0x55)[0]
        zmm0_2 = data_142d3f660
        float temp0_161[0x4] = _mm_shuffle_ps(temp0_157, temp0_157, 0xaa)
        float temp0_162[0x4] = _mm_shuffle_ps(temp0_153, temp0_153, 0xaa)
        float temp0_163[0x4] = _mm_shuffle_ps(temp0_149, temp0_149, 0xaa)
        float var_198_1[0x4] = zmm0_2
        float var_1c0_1 = temp0_161[0]
        float var_1b0_1 = temp0_162[0]
        float var_1a0_1 = temp0_163[0]
        zmm0_2, zmm6, zmm7_2, zmm9_1, zmm10, zmm11, zmm12, zmm13, zmm14_1, zmm15_2 =
            sub_14062b8d0(&var_1c8)
        
        if (zmm0_2[0] >= 0f)
            zmm0_2 = 0x3f800000
        else
            zmm0_2 = 0xbf800000
        
        zmm4 = var_228_1.o
        char rax_24 = 0x7f
        zmm5 = var_238_1.o
        
        if (zmm0_2[0] < 0f)
            rax_24 = -0x7f
        
        *(rbx_3 + rdi_1 + 0x53) = rax_24
        *(rbx_3 + *(arg1 + 0x28) + 0xc) = var_264_1[0]
        int32_t rax_27 = *(*(arg1 + 0x30) + j + 0x10)
        j = &(*j)[0x16]
        *(rbx_3 + *(arg1 + 0x28) + 0x10) = rax_27
    while (j s< 0x370)
    
    zmm4 = var_108
    i_1 = i_4 + 1
    zmm5 = var_f8
    zmm6 = var_e8
    zmm7_2 = var_d8
    var_298.q = r13_1 + 0x370
    r13_3 = 0
    i_4 = i_1
while (i_1 s< 0x11)

int64_t i_5 = 0xaa
int64_t i_2

do
    sub_141fdac10(arg1, *(arg1 + 0x28) + r13_3)
    r13_3 += 0x58
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)

for (int32_t i_3 = 1; i_3 s< 0xa1; i_3 += 0xa)
    int32_t i_6 = i_3
    int64_t j_2 = 9
    int64_t j_1
    
    do
        sub_141fdaaf0(arg1, i_6 - 1, i_6 + 9, i_6)
        sub_141fdaaf0(arg1, i_6 + 9, i_6 + 0xa, i_6)
        i_6 += 1
        j_1 = j_2
        j_2 -= 1
    while (j_1 != 1)

return arg1
