// 函数: sub_141a39670
// 地址: 0x141a39670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int32_t* r10 = arg1 + 0x18
int32_t rcx = 0
int64_t var_158
__builtin_memset(&var_158, 0, 0x2c)
int64_t* r11 = nullptr
int32_t r9 = 0
int32_t r8 = 0
int32_t var_124 = 0
int64_t var_118 = 0
int32_t var_110 = 0
int32_t var_12c = 0x80
int32_t var_128 = 0xffffffff
int32_t r15 = r10[6]
int32_t var_248 = 0
int32_t var_244 = 1
int32_t* var_240 = r10
int32_t var_238 = 0xffffffff
int64_t var_234 = 0

if (r15 != 0)
    int32_t* rax_2 = *(r10 + 0x10)
    
    if (rax_2 != 0)
        r10 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r15 - 1)
    int32_t rdx_2 = *r10
    
    if (rdx_2 != 0)
    label_141a3977c:
        int32_t rax_9 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_244_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_234.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> r15)
            var_234.d = r15
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_234:4.d = r8
            var_248 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r10[rdx_3 + 1]
            var_238 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141a3977c
        
        var_234.d = r15

uint128_t zmm4 = var_238.o
int64_t* var_160 = arg1 + 8
int64_t var_1b8 = zmm4.q
float var_1c8[0x4] = var_248.o
float zmm3[0x4] = var_1c8
int16_t var_1e0 = 0
void* rax_12 = zmm3[0].q
float var_218[0x4] = (arg1 + 8).o
float var_168[0x4]
var_168[0].q = (_mm_unpackhi_pd(zmm4, zmm4.q)).q
float var_168_1[0x4] = var_168
float var_1f8[0x4] = var_168
int32_t var_228

if (_mm_bsrli_si128(zmm4, 4).d s< *(rax_12 + 0x18))
    float i = zmm3[3]
    
    do
        int64_t rcx_3 = *var_218[0].q
        int64_t rdx_5 = sx.q(i) * 0x60
        int32_t var_1d8 = *(rdx_5 + rcx_3)
        int32_t var_1d4_1 = *(rdx_5 + rcx_3 + 4)
        void* rax_18 = sub_140d3c6e0(&var_1d8)
        
        if (rax_18 != 0)
            void* rax_19 = sub_1425881f0()
            void* rcx_5 = *(rax_18 + 0x10)
            int64_t rdx_6 = sx.q(*(rax_19 + 0x38))
            
            if (rdx_6.d s<= *(rcx_5 + 0x38) && *(*(rcx_5 + 0x30) + (rdx_6 << 3)) == rax_19 + 0x30)
                var_248.q = rax_18
                void* rbx_2 = *(rax_18 + 0xc0)
                int32_t* rax_20
                
                if (rbx_2 == 0)
                    rax_20.b = 0
                else
                    int64_t var_1a0
                    sub_140d3a3a0(&var_1a0, rbx_2)
                    int64_t var_198 = var_1a0
                    
                    if (*sub_141a4b1b0(arg1 + 8, &var_228, &var_198) != 0xffffffff)
                        rax_20.b = 1
                    else if (sub_141a538b0(arg1, rbx_2).b == 0)
                        rax_20.b = 0
                    else
                        rax_20.b = 1
                
                void var_1a8
                
                if (rax_20.b == 0)
                    sub_140812a70(&var_158, &var_1a8, &var_248, nullptr)
        
        zmm3[2] &= not.d(var_218[3])
        sub_14059bdd0(&var_218[2])
        i = zmm3[3]
    while (i s< *(zmm3[0].q + 0x18))
    
    if (var_1e0.b != 0 && var_1e0:1.b != 0)
        sub_141a40900(arg1 + 8, *(arg1 + 0x10) - *(arg1 + 0x3c), 1)
    
    int64_t* var_138
    r11 = var_138
    int32_t var_130
    r9 = var_130

int32_t var_244_2 = 1
int32_t rcx_13 = 0
var_248 = 0
int64_t var_148
int64_t* var_240_1 = &var_148
int32_t r8_5 = 0
int32_t var_238_1 = 0xffffffff
int64_t var_234_1 = 0

if (r9 != 0)
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r9 - 1)
    int64_t* r10_1 = &var_148
    
    if (r11 != 0)
        r10_1 = r11
    
    int32_t rdx_15 = *r10_1
    
    if (rdx_15 != 0)
    label_141a399ab:
        int32_t rax_31 = neg.d(rdx_15) & rdx_15
        uint64_t rflags_2
        int32_t temp0_5
        temp0_5, rflags_2 = _bit_scan_reverse(rax_31)
        int32_t var_244_3 = rax_31
        int32_t r14_1
        
        if (rax_31 == 0)
            r14_1 = 0x20
        else
            r14_1 = 0x1f - temp0_5
        
        int32_t rax_32 = r8_5 - r14_1 + 0x1f
        
        if (rax_32 s> r9)
            rax_32 = r9
        
        var_234_1.d = rax_32
    else
        while (true)
            int64_t rdx_16 = sx.q(rcx_13)
            r8_5 += 0x20
            rcx_13 += 1
            var_234_1:4.d = r8_5
            var_248 = rcx_13
            
            if (rdx_16.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                var_234_1.d = r9
                break
            
            rdx_15 = *(r10_1 + (rdx_16 << 2) + 4)
            var_238_1 = 0xffffffff
            
            if (rdx_15 != 0)
                goto label_141a399ab

float zmm2[0x4] = var_238_1.o
float zmm0[0x4] = var_248.o
int64_t* var_188 = &var_158
int128_t zmm6
int128_t var_38 = zmm6
float zmm7[0x4]
float var_48[0x4] = zmm7
int128_t zmm8
int128_t var_58 = zmm8
float zmm9[0x4]
float var_68[0x4] = zmm9
float zmm10[0x4]
float var_78[0x4] = zmm10
float zmm11[0x4]
float var_88[0x4] = zmm11
float zmm12[0x4]
float var_98[0x4] = zmm12
float var_180[0x4] = zmm0
zmm0 = var_188.o
var_234_1.d = r9
float var_170[0x4] = zmm2
float zmm13[0x4]
float var_a8[0x4] = zmm13
zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0].q)
float zmm14[0x4]
float var_b8[0x4] = zmm14
int64_t* var_1d0
var_1d0.o = zmm0
var_1c8 = var_180
var_1b8 = zmm2.q
uint32_t zmm15[0x4]
uint32_t var_c8[0x4] = zmm15

while (true)
    int64_t rcx_16 = sx.q(var_1b8:4.d)
    char rax_34
    
    if (rcx_16.d != ((0xffffffff << (r9.b & 0x1f)).q u>> 0x20).d || var_1c8[2].q != &var_148)
        rax_34 = 0
    else
        rax_34 = 1
    
    if (rax_34 == 0 || var_1d0 != &var_158)
        rax_34 = 1
    else
        rax_34 = 0
    
    if (rax_34 == 0)
        break
    
    data_143dbb0c0
    zmm11 = data_143dbb0d0
    data_143dbb0e0
    int64_t* rbx_3 = *(*var_1d0 + rcx_16 * 0x10)
    int64_t* rcx_18 = rbx_3[0x18]
    
    if (rcx_18 != 0)
        (*(*rcx_18 + 0x408))(rcx_18, &var_188, rbx_3[0x19], 0)
        char rax_37 = *(rbx_3 + 0x14c)
        double zmm1[0x2]
        
        if ((rax_37 & 4) == 0)
            float temp0_7[0x4] = _mm_shuffle_ps(var_180, var_180, 0xaa)
            zmm1 = _mm_shuffle_ps(var_180, var_180, 0x55)
            zmm11 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_180, temp0_7[0].q), 
                _mm_unpacklo_ps(zmm1, zx.o(0)[0].q)[0])
        
        if ((rax_37 & 0x10) == 0)
            float temp0_12[0x4] = _mm_shuffle_ps(var_168_1, var_168_1, 0xaa)
            zmm1 = _mm_shuffle_ps(var_168_1, var_168_1, 0x55)
            _mm_unpacklo_ps(_mm_unpacklo_ps(var_168_1, temp0_12[0].q), _mm_unpacklo_ps(zmm1, 0)[0])
    
    uint128_t var_108[0x3]
    uint128_t* rax_38
    float zmm6_1[0x4]
    float zmm7_1[0x4]
    rax_38, zmm6_1, zmm7_1 = sub_141a53150(arg1, &var_108, rbx_3)
    zmm13 = data_143f29fc0
    zmm15 = data_143f29fd0
    zmm14 = data_143f2a080
    zmm13[0].q = zx.o(0) u>> 0x40
    var_188.o = _mm_shuffle_ps(zx.o(0), zmm13, 0xc4)
    float var_168_2[0x4] = _mm_and_ps(zmm13, zmm15)
    var_180 = zx.o(0)
    zmm12 = rax_38[2]
    uint128_t zmm3_1
    float zmm5_1[0x4]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm12, zmm7_1), zmm14, 1)) == 0)
        zmm3_1 = *rax_38
        zmm5_1 = rax_38[1]
        float temp0_151[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x1b)
        float temp0_152[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x4e)
        float temp0_154[0x4] = _mm_mul_ps(temp0_151, _mm_shuffle_ps(zmm6_1, zmm6_1, 0))
        float zmm0_1[0x4] = zmm3_1
        zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xb1)
        float temp0_156[0x4] = _mm_mul_ps(zmm5_1, zmm7_1)
        float temp0_157[0x4] = __mulps_xmmps_memps(temp0_154, data_143f2a040)
        float temp0_158[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
        float temp0_159[0x4] = _mm_mul_ps(zmm0_1, temp0_158)
        float temp0_160[0x4] = _mm_mul_ps(zmm12, zmm7_1)
        float temp0_161[0x4] = _mm_add_ps(temp0_157, temp0_159)
        float temp0_163[0x4] = _mm_mul_ps(temp0_152, _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55))
        zmm3_1 = _mm_mul_ps(zmm3_1, _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa))
        float temp0_166[0x4] = __mulps_xmmps_memps(temp0_163, data_143f2a030)
        float temp0_167[0x4] = _mm_shuffle_ps(temp0_156, temp0_156, 0xc9)
        zmm3_1 = __mulps_xmmps_memps(zmm3_1, data_143f2a020)
        var_168_1 = temp0_160
        float temp0_170[0x4] = _mm_add_ps(_mm_add_ps(temp0_161, temp0_166), zmm3_1)
        zmm3_1 = _mm_shuffle_ps(temp0_156, temp0_156, 0xd2)
        var_188.o = temp0_170
        float temp0_172[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2)
        float temp0_173[0x4] = _mm_mul_ps(temp0_167, temp0_172)
        float temp0_174[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9)
        zmm3_1 = _mm_sub_ps(_mm_mul_ps(zmm3_1, temp0_174), temp0_173)
        zmm3_1 = _mm_add_ps(zmm3_1, zmm3_1)
        float temp0_178[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xd2)
        float temp0_179[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
        float temp0_180[0x4] = _mm_mul_ps(temp0_178, temp0_174)
        float temp0_181[0x4] = _mm_mul_ps(temp0_179, temp0_172)
        zmm3_1 = _mm_mul_ps(zmm3_1, temp0_158)
        var_180 = _mm_add_ps(
            _mm_add_ps(_mm_sub_ps(temp0_180, temp0_181), _mm_add_ps(zmm3_1, temp0_156)), zmm11)
    else
        float temp0_22[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 4)
        float temp0_23[0x4] = _mm_add_ps(zmm6_1, zmm6_1)
        float temp0_24[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9)
        _mm_mul_ps(zmm7_1, zmm12)
        float temp0_26[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
        float temp0_28[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0x29), temp0_22)
        zmm3_1 = _mm_mul_ps(temp0_23, zmm6_1)
        float temp0_32[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0x12), 
            _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff))
        float temp0_35[0x4] =
            _mm_add_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x1a), _mm_shuffle_ps(zmm3_1, zmm3_1, 1))
        zmm3_1 = *rax_38
        float temp0_36[0x4] = _mm_add_ps(temp0_32, temp0_28)
        float temp0_37[0x4] = _mm_sub_ps(temp0_28, temp0_32)
        float temp0_38[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
        float temp0_39[0x4] = _mm_mul_ps(temp0_36, zmm7_1)
        float temp0_40[0x4] = _mm_mul_ps(temp0_24, temp0_37)
        float zmm1_1[0x4] = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm13, temp0_35), zmm7_1), zmm15)
        float temp0_44[0x4] = _mm_shuffle_ps(temp0_40, zmm1_1, 0x32)
        float temp0_46[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_39, zmm1_1, 0), temp0_44, 0x82)
        float temp0_47[0x4] = _mm_shuffle_ps(temp0_39, zmm1_1, 0x31)
        float temp0_49[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_40, zmm1_1, 0x10), temp0_47, 0x88)
        float temp0_51[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_39, temp0_40, 0x12), zmm1_1, 0xe8)
        float temp0_52[0x4] = _mm_add_ps(zmm3_1, zmm3_1)
        zmm13[0].q = zmm11 u>> 0x40
        float temp0_53[0x4] = _mm_shuffle_ps(zmm11, zmm13, 0xc4)
        float temp0_54[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0x29)
        float temp0_55[0x4] = _mm_mul_ps(temp0_52, zmm3_1)
        float temp0_56[0x4] = _mm_mul_ps(temp0_38, temp0_54)
        float temp0_57[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0x12)
        zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
        float temp0_59[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0x1a)
        zmm3_1 = _mm_mul_ps(zmm3_1, temp0_57)
        float temp0_62[0x4] = _mm_add_ps(temp0_59, _mm_shuffle_ps(temp0_55, temp0_55, 1))
        float temp0_63[0x4] = _mm_add_ps(zmm3_1, temp0_56)
        float temp0_64[0x4] = _mm_sub_ps(temp0_56, zmm3_1)
        float temp0_65[0x4] = _mm_sub_ps(zmm13, temp0_62)
        float temp0_66[0x4] = _mm_mul_ps(temp0_63, zmm12)
        float temp0_67[0x4] = _mm_mul_ps(temp0_26, temp0_64)
        zmm1_1 = _mm_and_ps(_mm_mul_ps(temp0_65, zmm12), zmm15)
        float temp0_70[0x4] = _mm_shuffle_ps(temp0_67, zmm1_1, 0x32)
        zmm3_1 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_66, zmm1_1, 0), temp0_70, 0x82)
        float temp0_73[0x4] = _mm_shuffle_ps(temp0_66, zmm1_1, 0x31)
        float temp0_75[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_67, zmm1_1, 0x10), temp0_73, 0x88)
        float temp0_76[0x4] = _mm_shuffle_ps(temp0_66, temp0_67, 0x12)
        zmm5_1 = rax_38[1]
        float temp0_77[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
        float temp0_78[0x4] = _mm_shuffle_ps(temp0_76, zmm1_1, 0xe8)
        float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), temp0_51)
        float temp0_81[0x4] = _mm_mul_ps(temp0_77, temp0_49)
        zmm13[0].q = zmm5_1 u>> 0x40
        float temp0_82[0x4] = _mm_shuffle_ps(zmm5_1, zmm13, 0xc4)
        float temp0_83[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
        zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), temp0_53)
        float temp0_87[0x4] = _mm_add_ps(temp0_81, _mm_mul_ps(temp0_83, temp0_46))
        float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0), temp0_46)
        float temp0_90[0x4] = _mm_add_ps(temp0_87, temp0_80)
        float temp0_92[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0xaa), temp0_51)
        float temp0_93[0x4] = _mm_add_ps(temp0_90, zmm3_1)
        zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0x55), temp0_49)
        float temp0_96[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0xff)
        var_218 = temp0_93
        float temp0_97[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0x55)
        zmm3_1 = _mm_add_ps(zmm3_1, temp0_89)
        float temp0_99[0x4] = _mm_mul_ps(temp0_97, temp0_49)
        float temp0_100[0x4] = _mm_mul_ps(temp0_96, temp0_53)
        float temp0_101[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0)
        zmm3_1 = _mm_add_ps(zmm3_1, temp0_92)
        float temp0_103[0x4] = _mm_mul_ps(temp0_101, temp0_46)
        float temp0_105[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_78, temp0_78, 0xaa), temp0_51)
        zmm3_1 = _mm_add_ps(zmm3_1, temp0_100)
        float temp0_107[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0xff)
        float temp0_108[0x4] = _mm_add_ps(temp0_99, temp0_103)
        float temp0_109[0x4] = _mm_mul_ps(temp0_107, temp0_53)
        float temp0_110[0x4] = _mm_shuffle_ps(temp0_82, temp0_82, 0)
        int96_t var_208_1 = zmm3_1.12
        zmm3_1 = _mm_shuffle_ps(temp0_82, temp0_82, 0x55)
        float temp0_112[0x4] = _mm_add_ps(temp0_108, temp0_105)
        zmm3_1 = _mm_mul_ps(zmm3_1, temp0_49)
        float temp0_115[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_82, temp0_82, 0xaa), temp0_51)
        float temp0_116[0x4] = _mm_mul_ps(temp0_110, temp0_46)
        float temp0_117[0x4] = _mm_add_ps(temp0_112, temp0_109)
        float temp0_119[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_82, temp0_82, 0xff), temp0_53)
        zmm3_1 = _mm_add_ps(zmm3_1, temp0_116)
        int96_t var_1f8_1 = temp0_117[0].12
        int64_t* var_1e8
        var_1e8.o = _mm_add_ps(_mm_add_ps(zmm3_1, temp0_115), temp0_119)
        float zmm10_1[0x4]
        int128_t zmm13_1
        float zmm14_1[0x4]
        zmm10_1, zmm13_1, zmm14_1 = sub_1407740e0(&var_218, 0x322bcc77)
        float zmm2_2[0x4] = var_218[0]
        float zmm1_2 = var_218[1]
        zmm14_1 = _mm_and_ps(_mm_cmpeq_ps(zmm14_1, zmm10_1, 2), data_143f2a070 ^ zmm13_1)
        uint32_t zmm0_2[0x4] = var_218[2]
        zmm14_1 ^= data_143f2a070
        zmm2_2[0] = zmm2_2[0] * zmm14_1[0]
        zmm1_2 = zmm1_2 * zmm14_1[0]
        var_218[0] = zmm2_2[0]
        zmm0_2[0] = zmm0_2[0] f* zmm14_1[0]
        var_218[1] = zmm1_2
        float temp0_125[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55)
        zmm1_2 = var_208_1:4.d * temp0_125[0]
        var_218[2] = zmm0_2[0]
        zmm0_2 = var_208_1:8.d
        zmm0_2[0] = zmm0_2[0] f* temp0_125[0]
        float zmm3_2 = var_208_1.d * temp0_125[0]
        zmm2_2 = var_1f8_1.d
        var_208_1:4.d = zmm1_2
        var_208_1:8.d = zmm0_2[0]
        zmm0_2 = var_1f8_1:8.d
        float temp0_126[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa)
        zmm1_2 = var_1f8_1:4.d * temp0_126[0]
        zmm0_2[0] = zmm0_2[0] f* temp0_126[0]
        zmm2_2[0] = zmm2_2[0] * temp0_126[0]
        var_1f8_1:4.d = zmm1_2
        var_1f8_1:8.d = zmm0_2[0]
        var_208_1.d = zmm3_2
        var_1f8_1.d = zmm2_2[0]
        sub_14077e4a0(&var_248, &var_218)
        float zmm5_2[0x4] = var_248.o
        float zmm6_2[0x4] = data_143f2a060
        float temp0_127[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
        var_228 = 0x322bcc77
        var_168_1 = zmm10_1
        float temp0_129[0x4] = _mm_add_ps(temp0_127, _mm_shuffle_ps(temp0_127, temp0_127, 0x4e))
        float temp0_131[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_129, temp0_129, 0x39), temp0_129)
        float temp0_132[0x4] = _mm_rsqrt_ps(temp0_131)
        float temp0_133[0x4] = _mm_mul_ps(temp0_131, zmm6_2)
        float temp0_138[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(temp0_132, temp0_132), temp0_133)), 
                temp0_132), 
            temp0_132)
        float temp0_141[0x4] =
            _mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(temp0_138, temp0_138), temp0_133))
        float zmm0_3[0x4] = var_228
        float temp0_143[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_3, zmm0_3, 0), temp0_131, 2)
        float temp0_145[0x4] = _mm_add_ps(_mm_mul_ps(temp0_141, temp0_138), temp0_138)
        float temp0_146[0x4] = _mm_unpacklo_ps(var_1e8:4.d, 0)
        zmm6_2 =
            _mm_and_ps(_mm_mul_ps(temp0_145, zmm5_2) ^ data_143f2a050, temp0_143) ^ data_143f2a050
        var_180 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_1e8.d, var_1e0.d[0].q), temp0_146[0].q)
        var_248.o = zmm6_2
        var_188.o = zmm6_2
    sub_141a3a270(arg1, rbx_3, &var_188)
    var_1b8.d &= not.d(var_1c8[1])
    sub_14059bdd0(&var_1c8)

if (*(arg1 + 0x58) == 0)
    sub_1413f5fe0(arg1 + 8)

var_188 = arg2
var_180[0].q = &arg2[1]
var_170[1].q = -1
var_180[2].q = &arg2[0xb]
int32_t rax_44 = data_1439d284c
var_170[0] = rax_44
var_168_1[1] = rax_44
int64_t var_160_1 = -1
sub_141a68400(&var_188, 0)
int32_t var_110_1 = 0

if (var_118 != 0)
    sub_140a74f90(var_118)

void* result = sub_14100e680(&var_158)
__security_check_cookie(rax_1 ^ &var_268)
return result
