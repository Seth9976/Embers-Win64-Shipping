// 函数: sub_1410ac7c0
// 地址: 0x1410ac7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5c8
int64_t rax_1 = __security_cookie ^ &var_5c8
bool cond:0 = data_143f0f1c3 == 0
int128_t* r12 = arg6
int64_t* r13 = arg3
int128_t* var_4f8 = r12
int64_t rdi

if (cond:0 || arg4 == 0 || *(data_143e2de80 + 4) == 0 || *(*arg4 + 0x38) != 1)
    rdi.b = 0
else
    rdi.b = 1

int64_t rax_5 = *arg3
int128_t zmm1 = data_142d3f5a0
int32_t var_1d0 = 0
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x19)
int64_t var_2a0 = 0
int64_t var_1e8_1
__builtin_memset(&var_1e8_1, 0, 0x11)
int32_t var_1d4 = 0
int32_t var_1cc
__builtin_memset(&var_1cc, 0xff, 0x14)
int128_t var_1b8 = zmm1
int64_t var_2a8 = rax_5
int32_t var_298 = 0xffffffff
int16_t var_294 = 0x100
char var_548 = rdi.b
bool var_18f = *(rax_5 + 0x38) u> 1
void var_290
memset(&var_290, 0, 0xa8)

if (rdi.b != 0)
    int64_t var_1e8_2 = *arg4
    char var_1d8_1 = 0x45
    int32_t var_1d4_1 = 0x21

void* r15 = arg2[8]
int64_t rbx_3 = (*(r15 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_7 = rbx_3 + 0x26

if (rax_7 u> *(r15 + 0x38))
    sub_140b0e3d0(r15 + 0x30, 0x28)
    rbx_3 = (*(r15 + 0x30) + 1) & 0xfffffffffffffffe
    rax_7 = rbx_3 + 0x26

wchar16 const* const rcx_2 = u"PSAmbientOcclusion"
*(r15 + 0x30) = rax_7
wchar16 const i

do
    i = *rcx_2
    *(rbx_3 - u"PSAmbientOcclusion" + rcx_2) = i
    rcx_2 = &rcx_2[1]
while (i != 0)
void*** rcx_5 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_8 = &rcx_5[0x27]

if (rax_8 u> *(r15 + 0x38))
    sub_140b0e3d0(r15 + 0x30, 0x140)
    rcx_5 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
    rax_8 = &rcx_5[0x27]

*(r15 + 0x30) = rax_8
void**** rax_9 = *(r15 + 8)
*(r15 + 0x14) += 1
*rax_9 = rcx_5
*(r15 + 8) = &rcx_5[1]
sub_1405d11b0(rcx_5, &var_2a8, rbx_3)
*(r15 + 0x1c4) = 1
sub_1405d19b0(r15, &var_2a8)
int512_t zmm2
zmm2.o = zx.o(0)
int64_t var_198
*(r15 + 0x178) = var_198:7.b
int512_t zmm3
zmm3.o = 0x3f800000
*(r15 + 0x179) = 0
*(r15 + 0x1c4) = 1
float var_558[0x4] = *r12
float zmm6[0x4]
int32_t zmm7_1
zmm6, zmm7_1 = sub_1410b7780(arg2, &var_558, zmm2.o, zmm3.o)
float zmm8[0x4] = zx.o(0)
void* var_528

if (var_548 != 0)
    void* rax_12 = *arg2
    var_528 = nullptr
    int32_t var_51c_1 = 0x3f800000
    float zmm0_1[0x4] = *(rax_12 + 0x11f4)
    zmm2.o = var_528.o
    zmm2.o = _mm_shuffle_ps(zmm2.o, zmm2.o, 0xd2)
    zmm2.d = zmm0_1[0]
    void*** var_178_1 = nullptr
    zmm2.o = _mm_shuffle_ps(zmm2.o, zmm2.o, 0xc9)
    zmm3.o = zmm2.o
    var_528.o = zmm2.o
    zmm3.o = _mm_shuffle_ps(zmm3.o, zmm2.o, 0xff)
    zmm3.o = __mulps_xmmps_memps(zmm3.o, *(rax_12 + 0x2b0))
    var_558[2] = 0
    uint128_t zmm1_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2.o, zmm2.o, 0x55), *(rax_12 + 0x290))
    var_558[3] = 0x3f800000
    float temp0_8[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2.o, zmm2.o, 0xaa), *(rax_12 + 0x2a0))
    zmm2.o = _mm_shuffle_ps(zmm2.o, zmm2.o, 0)
    zmm2.o = __mulps_xmmps_memps(zmm2.o, *(rax_12 + 0x280))
    void** const var_168 = &data_142d42d18
    zmm3.o = _mm_add_ps(zmm3.o, temp0_8)
    int64_t var_148 = 0
    float zmm5_1[0x4] = var_148.o
    float (* var_138_1)[0x4] = nullptr
    zmm1_1 = _mm_add_ps(zmm1_1, zmm2.o)
    int64_t var_108_1 = 0
    zmm2.o = var_138_1.o
    float (* var_f8_1)[0x4] = nullptr
    var_148.o = sub_1410910e0.o
    int64_t var_c8_1 = 0
    zmm0_1 = var_168.o
    zmm3.o = _mm_add_ps(zmm3.o, zmm1_1)
    int64_t rax_13 = zmm5_1[0].q
    float (* var_b8_1)[0x4] = nullptr
    int64_t (* var_188_1)(int64_t, void* arg2)
    var_188_1.o = zmm5_1
    var_138_1.o = var_178_1.o
    float temp0_14[0x4] = _mm_shuffle_ps(zmm3.o, zmm3.o, 0xaa)
    zmm3.o = _mm_shuffle_ps(zmm3.o, zmm3.o, 0xff)
    temp0_14[0] = temp0_14[0] f/ zmm3.d
    float var_128[0x4]
    zmm3.o = var_128
    zmm8 = _mm_min_ss(temp0_14[0], zmm6[0])
    var_128 = zmm0_1
    uint128_t var_158
    uint128_t var_118_1 = var_158
    var_178_1.o = zmm2.o
    var_168.o = zmm3.o
    
    if (rax_13 != 0)
        void** const* rcx_11 = &var_168
        
        if (var_178_1 != 0)
            rcx_11 = var_178_1
        
        (*rcx_11)[2](rcx_11)
    
    zmm6 = var_108_1.o
    void*** var_178_2 = nullptr
    zmm3.o = var_f8_1.o
    var_168 = &data_142f12de8
    float var_e8[0x4]
    float zmm4_1[0x4] = var_e8
    zmm2.o = zmm8
    int64_t rax_16 = zmm6[0].q
    int64_t (* var_188_2)(int128_t* arg1, void* arg2)
    var_188_2.o = zmm6
    var_108_1.o = j_sub_14108d3b0.o
    zmm0_1 = var_168.o
    float temp0_17[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xd2)
    temp0_17[0] = zmm2.d
    var_e8 = _mm_shuffle_ps(temp0_17, temp0_17, 0xc9)
    float var_118[0x4]
    float var_d8_1[0x4] = var_118
    var_f8_1.o = var_178_2.o
    var_178_2.o = zmm3.o
    var_168.o = zmm4_1
    
    if (rax_16 != 0)
        void** const* rcx_12 = &var_168
        
        if (var_178_2 != 0)
            rcx_12 = var_178_2
        
        (*rcx_12)[2](rcx_12)
    
    zmm6 = var_c8_1.o
    void*** var_178_3 = nullptr
    zmm3.o = var_b8_1.o
    var_168 = &data_142f12de8
    float var_a8[0x4]
    zmm4_1 = var_a8
    zmm2.o = zmm8
    int64_t rax_19 = zmm6[0].q
    int64_t (* var_188_3)(int128_t* arg1, void* arg2)
    var_188_3.o = zmm6
    var_c8_1.o = j_sub_14108d440.o
    zmm0_1 = var_168.o
    float temp0_19[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xd2)
    temp0_19[0] = zmm2.d
    var_a8 = _mm_shuffle_ps(temp0_19, temp0_19, 0xc9)
    float var_d8[0x4]
    float var_98_1[0x4] = var_d8
    var_b8_1.o = var_178_3.o
    var_178_3.o = zmm3.o
    var_168.o = zmm4_1
    float var_98[0x4]
    float var_158_3[0x4] = var_98
    
    if (rax_19 != 0)
        void** const* rcx_13 = &var_168
        
        if (var_178_3 != 0)
            rcx_13 = var_178_3
        
        (*rcx_13)[2](rcx_13)
    
    void var_4d8
    int64_t* rax_22 = sub_14108bab0(&var_4d8, &var_148)
    void var_418
    sub_14199ccb0(arg2[8], 1, 1, &data_14399f5c0, 0, zmm7_1, 0, 0, sub_14108bab0(&var_418, rax_22))
    sub_14108c9b0(rax_22)
    
    if (var_c8_1 != 0)
        float (* rcx_18)[0x4] = &var_a8
        
        if (var_b8_1 != 0)
            rcx_18 = var_b8_1
        
        (*(*rcx_18 + 0x10))(rcx_18)
    
    if (var_108_1 != 0)
        float (* rcx_19)[0x4] = &var_e8
        
        if (var_f8_1 != 0)
            rcx_19 = var_f8_1
        
        (*(*rcx_19 + 0x10))(rcx_19)
    
    if (var_148 != 0)
        float (* rcx_20)[0x4] = &var_128
        
        if (var_138_1 != 0)
            rcx_20 = var_138_1
        
        (*(*rcx_20 + 0x10))(rcx_20)

void* rcx_21 = arg2[8]
int64_t var_2fc
__builtin_memset(&var_2fc, 0, 0x43)
int128_t var_358
__builtin_memset(&var_358, 0, 0x30)
uint128_t var_310 = zx.o(0)
int16_t var_2b8 = 0
void* r9 = sub_140fdc870(rcx_21, &var_358)
int64_t var_328 = data_14395da00
int64_t var_320 = data_14395da18
int64_t var_318 = data_14395d9e8
int32_t var_300 = 0
int16_t var_2bc
var_2bc.b = var_548
float var_508[0x4] = zx.o(0)
char var_5a8
void* var_538
void* var_530
int128_t var_338
void* r13_2
void* r15_3

if (arg8 == 0)
    int64_t* rcx_142 = arg2[0xc]
    float (* rdx_99)[0x4] = &var_558
    
    if (arg1[0x1e].b == 0)
        sub_1419a2ec0(rcx_142, rdx_99, &data_143ed5e80, 0)
        r15_3 = var_558[0].q
        void** rdx_111 = &var_538
        r13_2 = var_558[2].q
        int64_t* rcx_158 = arg2[0xc]
        
        if (arg9 == 0)
            sub_1419a2ec0(rcx_158, rdx_111, &data_143e3af40, 0)
            void* rcx_166 = var_530
            void* rdi_27 = var_538
            var_358.q = data_1439c9210
            int64_t rax_128 = 0
            var_528 = rcx_166
            
            if (r15_3 != 0)
                int64_t rdx_117 = sx.q(*(r15_3 + 0x10c))
                int64_t* rbx_44 = *(r13_2 + 0x10)
                int64_t rax_129 = rbx_44[3]
                
                if (*(rax_129 + (rdx_117 << 3)) == 0)
                    sub_1419ccf30(rbx_44, rdx_117.d)
                    rax_129 = rbx_44[3]
                    rcx_166 = var_528
                
                rax_128 = *(rax_129 + (rdx_117 << 3))
            
            var_358:8.q = rax_128
            int64_t rax_130 = 0
            
            if (rdi_27 != 0)
                int64_t rdx_118 = sx.q(*(rdi_27 + 0x10c))
                int64_t* rbx_45 = *(rcx_166 + 0x10)
                int64_t rax_131 = rbx_45[3]
                
                if (*(rax_131 + (rdx_118 << 3)) == 0)
                    sub_1419ccf30(rbx_45, rdx_118.d)
                    rax_131 = rbx_45[3]
                
                rax_130 = *(rax_131 + (rdx_118 << 3))
            
            var_338.q = rax_130
            sub_1419870b0(arg2[8], &var_358, 2)
            void* rax_132 = sub_14139ce70(arg1)
            arg2[8]
            int32_t r9_20
            
            if (rax_132 == 0)
                r9_20 = (data_143ec4fdc).d
            else
                r9_20 = (*(rax_132 + 0x14)).d
            
            var_5a8.q = 0
            r9, zmm2, zmm3, zmm8 = sub_1410b6b20(rdi_27, arg2[8], arg2, r9_20)
        else
            sub_1419a2ec0(rcx_158, rdx_111, &data_143e3b200, 0)
            void* rcx_159 = var_530
            void* rdi_26 = var_538
            var_358.q = data_1439c9210
            int64_t rax_122 = 0
            var_528 = rcx_159
            
            if (r15_3 != 0)
                int64_t rdx_112 = sx.q(*(r15_3 + 0x10c))
                int64_t* rbx_41 = *(r13_2 + 0x10)
                int64_t rax_123 = rbx_41[3]
                
                if (*(rax_123 + (rdx_112 << 3)) == 0)
                    sub_1419ccf30(rbx_41, rdx_112.d)
                    rax_123 = rbx_41[3]
                    rcx_159 = var_528
                
                rax_122 = *(rax_123 + (rdx_112 << 3))
            
            var_358:8.q = rax_122
            int64_t rax_124 = 0
            
            if (rdi_26 != 0)
                int64_t rdx_113 = sx.q(*(rdi_26 + 0x10c))
                int64_t* rbx_42 = *(rcx_159 + 0x10)
                int64_t rax_125 = rbx_42[3]
                
                if (*(rax_125 + (rdx_113 << 3)) == 0)
                    sub_1419ccf30(rbx_42, rdx_113.d)
                    rax_125 = rbx_42[3]
                
                rax_124 = *(rax_125 + (rdx_113 << 3))
            
            var_338.q = rax_124
            sub_1419870b0(arg2[8], &var_358, 2)
            void* rax_126 = sub_14139ce70(arg1)
            arg2[8]
            int32_t r9_19
            
            if (rax_126 == 0)
                r9_19 = (data_143ec4fdc).d
            else
                r9_19 = (*(rax_126 + 0x14)).d
            
            var_5a8.q = 0
            r9, zmm2, zmm3, zmm8 = sub_1410b6b20(rdi_26, arg2[8], arg2, r9_19)
    else
        sub_1419a2ec0(rcx_142, rdx_99, &data_143ed5e80, 0)
        r15_3 = var_558[0].q
        void** rdx_100 = &var_538
        r13_2 = var_558[2].q
        int64_t* rcx_143 = arg2[0xc]
        
        if (arg9 == 0)
            sub_1419a2ec0(rcx_143, rdx_100, &data_143e3b4c0, 0)
            void* rcx_151 = var_530
            void* rdi_25 = var_538
            var_358.q = data_1439c9210
            int64_t rax_116 = 0
            var_528 = rcx_151
            
            if (r15_3 != 0)
                int64_t rdx_106 = sx.q(*(r15_3 + 0x10c))
                int64_t* rbx_38 = *(r13_2 + 0x10)
                int64_t rax_117 = rbx_38[3]
                
                if (*(rax_117 + (rdx_106 << 3)) == 0)
                    sub_1419ccf30(rbx_38, rdx_106.d)
                    rax_117 = rbx_38[3]
                    rcx_151 = var_528
                
                rax_116 = *(rax_117 + (rdx_106 << 3))
            
            var_358:8.q = rax_116
            int64_t rax_118 = 0
            
            if (rdi_25 != 0)
                int64_t rdx_107 = sx.q(*(rdi_25 + 0x10c))
                int64_t* rbx_39 = *(rcx_151 + 0x10)
                int64_t rax_119 = rbx_39[3]
                
                if (*(rax_119 + (rdx_107 << 3)) == 0)
                    sub_1419ccf30(rbx_39, rdx_107.d)
                    rax_119 = rbx_39[3]
                
                rax_118 = *(rax_119 + (rdx_107 << 3))
            
            var_338.q = rax_118
            sub_1419870b0(arg2[8], &var_358, 2)
            void* rax_120 = sub_14139ce70(arg1)
            arg2[8]
            int32_t r9_18
            
            if (rax_120 == 0)
                r9_18 = (data_143ec4fdc).d
            else
                r9_18 = (*(rax_120 + 0x14)).d
            
            var_5a8.q = 0
            r9, zmm2, zmm3, zmm8 = sub_1410b6b20(rdi_25, arg2[8], arg2, r9_18)
        else
            sub_1419a2ec0(rcx_143, rdx_100, &data_143e3b780, 0)
            void* rcx_144 = var_530
            void* rdi_24 = var_538
            var_358.q = data_1439c9210
            int64_t rax_110 = 0
            var_528 = rcx_144
            
            if (r15_3 != 0)
                int64_t rdx_101 = sx.q(*(r15_3 + 0x10c))
                int64_t* rbx_35 = *(r13_2 + 0x10)
                int64_t rax_111 = rbx_35[3]
                
                if (*(rax_111 + (rdx_101 << 3)) == 0)
                    sub_1419ccf30(rbx_35, rdx_101.d)
                    rax_111 = rbx_35[3]
                    rcx_144 = var_528
                
                rax_110 = *(rax_111 + (rdx_101 << 3))
            
            var_358:8.q = rax_110
            int64_t rax_112 = 0
            
            if (rdi_24 != 0)
                int64_t rdx_102 = sx.q(*(rdi_24 + 0x10c))
                int64_t* rbx_36 = *(rcx_144 + 0x10)
                int64_t rax_113 = rbx_36[3]
                
                if (*(rax_113 + (rdx_102 << 3)) == 0)
                    sub_1419ccf30(rbx_36, rdx_102.d)
                    rax_113 = rbx_36[3]
                
                rax_112 = *(rax_113 + (rdx_102 << 3))
            
            var_338.q = rax_112
            sub_1419870b0(arg2[8], &var_358, 2)
            void* rax_114 = sub_14139ce70(arg1)
            arg2[8]
            int32_t r9_17
            
            if (rax_114 == 0)
                r9_17 = (data_143ec4fdc).d
            else
                r9_17 = (*(rax_114 + 0x14)).d
            
            var_5a8.q = 0
            r9, zmm2, zmm3, zmm8 = sub_1410b6b20(rdi_24, arg2[8], arg2, r9_17)
    
label_1410ae211:
    r12 = var_4f8
    var_558[0].q = r15_3
    var_558[2].q = r13_2
label_1410ae21f:
    r13 = arg3
    var_508 = var_558
else
    if (arg8 == 1)
        int64_t* rcx_111 = arg2[0xc]
        float (* rdx_76)[0x4] = &var_558
        
        if (arg1[0x1e].b == 0)
            sub_1419a2ec0(rcx_111, rdx_76, &data_143ed5e80, 0)
            r15_3 = var_558[0].q
            void** rdx_88 = &var_538
            r13_2 = var_558[2].q
            int64_t* rcx_127 = arg2[0xc]
            
            if (arg9 == 0)
                sub_1419a2ec0(rcx_127, rdx_88, &data_143e3ba40, 0)
                void* rcx_135 = var_530
                void* rdi_23 = var_538
                var_358.q = data_1439c9210
                int64_t rax_104 = 0
                var_528 = rcx_135
                
                if (r15_3 != 0)
                    int64_t rdx_94 = sx.q(*(r15_3 + 0x10c))
                    int64_t* rbx_32 = *(r13_2 + 0x10)
                    int64_t rax_105 = rbx_32[3]
                    
                    if (*(rax_105 + (rdx_94 << 3)) == 0)
                        sub_1419ccf30(rbx_32, rdx_94.d)
                        rax_105 = rbx_32[3]
                        rcx_135 = var_528
                    
                    rax_104 = *(rax_105 + (rdx_94 << 3))
                
                var_358:8.q = rax_104
                int64_t rax_106 = 0
                
                if (rdi_23 != 0)
                    int64_t rdx_95 = sx.q(*(rdi_23 + 0x10c))
                    int64_t* rbx_33 = *(rcx_135 + 0x10)
                    int64_t rax_107 = rbx_33[3]
                    
                    if (*(rax_107 + (rdx_95 << 3)) == 0)
                        sub_1419ccf30(rbx_33, rdx_95.d)
                        rax_107 = rbx_33[3]
                    
                    rax_106 = *(rax_107 + (rdx_95 << 3))
                
                var_338.q = rax_106
                sub_1419870b0(arg2[8], &var_358, 2)
                void* rax_108 = sub_14139ce70(arg1)
                arg2[8]
                int32_t r9_16
                
                if (rax_108 == 0)
                    r9_16 = (data_143ec4fdc).d
                else
                    r9_16 = (*(rax_108 + 0x14)).d
                
                var_5a8.q = 0
                r9, zmm2, zmm3, zmm8 = sub_1410b6b20(rdi_23, arg2[8], arg2, r9_16)
            else
                sub_1419a2ec0(rcx_127, rdx_88, &data_143e3bd00, 0)
                void* rcx_128 = var_530
                void* rdi_22 = var_538
                var_358.q = data_1439c9210
                int64_t rax_98 = 0
                var_528 = rcx_128
                
                if (r15_3 != 0)
                    int64_t rdx_89 = sx.q(*(r15_3 + 0x10c))
                    int64_t* rbx_29 = *(r13_2 + 0x10)
                    int64_t rax_99 = rbx_29[3]
                    
                    if (*(rax_99 + (rdx_89 << 3)) == 0)
                        sub_1419ccf30(rbx_29, rdx_89.d)
                        rax_99 = rbx_29[3]
                        rcx_128 = var_528
                    
                    rax_98 = *(rax_99 + (rdx_89 << 3))
                
                var_358:8.q = rax_98
                int64_t rax_100 = 0
                
                if (rdi_22 != 0)
                    int64_t rdx_90 = sx.q(*(rdi_22 + 0x10c))
                    int64_t* rbx_30 = *(rcx_128 + 0x10)
                    int64_t rax_101 = rbx_30[3]
                    
                    if (*(rax_101 + (rdx_90 << 3)) == 0)
                        sub_1419ccf30(rbx_30, rdx_90.d)
                        rax_101 = rbx_30[3]
                    
                    rax_100 = *(rax_101 + (rdx_90 << 3))
                
                var_338.q = rax_100
                sub_1419870b0(arg2[8], &var_358, 2)
                void* rax_102 = sub_14139ce70(arg1)
                arg2[8]
                int32_t r9_15
                
                if (rax_102 == 0)
                    r9_15 = (data_143ec4fdc).d
                else
                    r9_15 = (*(rax_102 + 0x14)).d
                
                var_5a8.q = 0
                r9, zmm2, zmm3, zmm8 = sub_1410b6b20(rdi_22, arg2[8], arg2, r9_15)
        else
            sub_1419a2ec0(rcx_111, rdx_76, &data_143ed5e80, 0)
            r15_3 = var_558[0].q
            void** rdx_77 = &var_538
            r13_2 = var_558[2].q
            int64_t* rcx_112 = arg2[0xc]
            
            if (arg9 == 0)
                sub_1419a2ec0(rcx_112, rdx_77, &data_143e3bfc0, 0)
                void* rcx_120 = var_530
                void* rdi_21 = var_538
                var_358.q = data_1439c9210
                int64_t rax_92 = 0
                var_528 = rcx_120
                
                if (r15_3 != 0)
                    int64_t rdx_83 = sx.q(*(r15_3 + 0x10c))
                    int64_t* rbx_26 = *(r13_2 + 0x10)
                    int64_t rax_93 = rbx_26[3]
                    
                    if (*(rax_93 + (rdx_83 << 3)) == 0)
                        sub_1419ccf30(rbx_26, rdx_83.d)
                        rax_93 = rbx_26[3]
                        rcx_120 = var_528
                    
                    rax_92 = *(rax_93 + (rdx_83 << 3))
                
                var_358:8.q = rax_92
                int64_t rax_94 = 0
                
                if (rdi_21 != 0)
                    int64_t rdx_84 = sx.q(*(rdi_21 + 0x10c))
                    int64_t* rbx_27 = *(rcx_120 + 0x10)
                    int64_t rax_95 = rbx_27[3]
                    
                    if (*(rax_95 + (rdx_84 << 3)) == 0)
                        sub_1419ccf30(rbx_27, rdx_84.d)
                        rax_95 = rbx_27[3]
                    
                    rax_94 = *(rax_95 + (rdx_84 << 3))
                
                var_338.q = rax_94
                sub_1419870b0(arg2[8], &var_358, 2)
                void* rax_96 = sub_14139ce70(arg1)
                arg2[8]
                int32_t r9_14
                
                if (rax_96 == 0)
                    r9_14 = (data_143ec4fdc).d
                else
                    r9_14 = (*(rax_96 + 0x14)).d
                
                var_5a8.q = 0
                r9, zmm2, zmm3, zmm8 = sub_1410b6b20(rdi_21, arg2[8], arg2, r9_14)
            else
                sub_1419a2ec0(rcx_112, rdx_77, &data_143e3c280, 0)
                void* rcx_113 = var_530
                void* rdi_20 = var_538
                var_358.q = data_1439c9210
                int64_t rax_86 = 0
                var_528 = rcx_113
                
                if (r15_3 != 0)
                    int64_t rdx_78 = sx.q(*(r15_3 + 0x10c))
                    int64_t* rbx_23 = *(r13_2 + 0x10)
                    int64_t rax_87 = rbx_23[3]
                    
                    if (*(rax_87 + (rdx_78 << 3)) == 0)
                        sub_1419ccf30(rbx_23, rdx_78.d)
                        rax_87 = rbx_23[3]
                        rcx_113 = var_528
                    
                    rax_86 = *(rax_87 + (rdx_78 << 3))
                
                var_358:8.q = rax_86
                int64_t rax_88 = 0
                
                if (rdi_20 != 0)
                    int64_t rdx_79 = sx.q(*(rdi_20 + 0x10c))
                    int64_t* rbx_24 = *(rcx_113 + 0x10)
                    int64_t rax_89 = rbx_24[3]
                    
                    if (*(rax_89 + (rdx_79 << 3)) == 0)
                        sub_1419ccf30(rbx_24, rdx_79.d)
                        rax_89 = rbx_24[3]
                    
                    rax_88 = *(rax_89 + (rdx_79 << 3))
                
                var_338.q = rax_88
                sub_1419870b0(arg2[8], &var_358, 2)
                void* rax_90 = sub_14139ce70(arg1)
                arg2[8]
                int32_t r9_13
                
                if (rax_90 == 0)
                    r9_13 = (data_143ec4fdc).d
                else
                    r9_13 = (*(rax_90 + 0x14)).d
                
                var_5a8.q = 0
                r9, zmm2, zmm3, zmm8 = sub_1410b6b20(rdi_20, arg2[8], arg2, r9_13)
        
        goto label_1410ae211
    
    if (arg8 == 2)
        int64_t* rcx_81 = arg2[0xc]
        
        if (arg1[0x1e].b == 0)
            sub_1419a2ec0(rcx_81, &var_558, &data_143ed5e80, 0)
            void* rdi_19 = var_558[0].q
            void** rdx_65 = &var_538
            void* r15_4 = var_558[2].q
            int64_t* rcx_98 = arg2[0xc]
            
            if (arg9 == 0)
                sub_1419a2ec0(rcx_98, rdx_65, &data_143e3c540, 0)
                void* rbx_22 = var_538
                var_358.q = data_1439c9210
                int64_t rax_82 = 0
                
                if (rdi_19 != 0)
                    rax_82 = sub_1410970c0(*(r15_4 + 0x10), *(rdi_19 + 0x10c))
                
                var_358:8.q = rax_82
                int64_t rax_83 = 0
                
                if (rbx_22 != 0)
                    rax_83 = sub_1410970c0(*(var_530 + 0x10), *(rbx_22 + 0x10c))
                
                var_338.q = rax_83
                sub_1419870b0(arg2[8], &var_358, 2)
                void* rax_84 = sub_14139ce70(arg1)
                arg2[8]
                int32_t r9_12
                
                if (rax_84 == 0)
                    r9_12 = (data_143ec4fdc).d
                else
                    r9_12 = (*(rax_84 + 0x14)).d
                
                var_5a8.q = 0
                r9, zmm2, zmm3, zmm8 = sub_1410b6b20(rbx_22, arg2[8], arg2, r9_12)
                var_558[0].q = rdi_19
                var_558[2].q = r15_4
            else
                sub_1419a2ec0(rcx_98, rdx_65, &data_143e3c800, 0)
                void* rbx_21 = var_538
                var_358.q = data_1439c9210
                int64_t rax_78 = 0
                
                if (rdi_19 != 0)
                    rax_78 = sub_1410970c0(*(r15_4 + 0x10), *(rdi_19 + 0x10c))
                
                var_358:8.q = rax_78
                int64_t rax_79 = 0
                
                if (rbx_21 != 0)
                    rax_79 = sub_1410970c0(*(var_530 + 0x10), *(rbx_21 + 0x10c))
                
                var_338.q = rax_79
                sub_1419870b0(arg2[8], &var_358, 2)
                void* rax_80 = sub_14139ce70(arg1)
                arg2[8]
                int32_t r9_11
                
                if (rax_80 == 0)
                    r9_11 = (data_143ec4fdc).d
                else
                    r9_11 = (*(rax_80 + 0x14)).d
                
                var_5a8.q = 0
                r9, zmm2, zmm3, zmm8 = sub_1410b6b20(rbx_21, arg2[8], arg2, r9_11)
                var_558[0].q = rdi_19
                var_558[2].q = r15_4
            
            goto label_1410ae21f
        
        if (arg9 == 0)
            sub_1419a2ec0(rcx_81, &var_558, &data_143ed5e80, 0)
            r15_3 = var_558[0].q
            r13_2 = var_558[2].q
            sub_1419a2ec0(arg2[0xc], &var_538, &data_143e3cac0, 0)
            void* rcx_91 = var_530
            void* rdi_18 = var_538
            var_358.q = data_1439c9210
            int64_t rax_72 = 0
            var_528 = rcx_91
            
            if (r15_3 != 0)
                int64_t rdx_59 = sx.q(*(r15_3 + 0x10c))
                int64_t* rbx_18 = *(r13_2 + 0x10)
                int64_t rax_73 = rbx_18[3]
                
                if (*(rax_73 + (rdx_59 << 3)) == 0)
                    sub_1419ccf30(rbx_18, rdx_59.d)
                    rax_73 = rbx_18[3]
                    rcx_91 = var_528
                
                rax_72 = *(rax_73 + (rdx_59 << 3))
            
            var_358:8.q = rax_72
            int64_t rax_74 = 0
            
            if (rdi_18 != 0)
                int64_t rdx_60 = sx.q(*(rdi_18 + 0x10c))
                int64_t* rbx_19 = *(rcx_91 + 0x10)
                int64_t rax_75 = rbx_19[3]
                
                if (*(rax_75 + (rdx_60 << 3)) == 0)
                    sub_1419ccf30(rbx_19, rdx_60.d)
                    rax_75 = rbx_19[3]
                
                rax_74 = *(rax_75 + (rdx_60 << 3))
            
            var_338.q = rax_74
            sub_1419870b0(arg2[8], &var_358, 2)
            void* rax_76 = sub_14139ce70(arg1)
            arg2[8]
            int32_t r9_10
            
            if (rax_76 == 0)
                r9_10 = (data_143ec4fdc).d
            else
                r9_10 = (*(rax_76 + 0x14)).d
            
            var_5a8.q = 0
            r9, zmm2, zmm3, zmm8 = sub_1410b6b20(rdi_18, arg2[8], arg2, r9_10)
        else
            sub_1419a2ec0(rcx_81, &var_538, &data_143ed5e80, 0)
            r15_3 = var_538
            r13_2 = var_530
            sub_1419a2ec0(arg2[0xc], &var_558, &data_143e3cd80, 0)
            void* rcx_83 = var_558[2].q
            void* rdi_17 = var_558[0].q
            var_358.q = data_1439c9210
            int64_t rax_66 = 0
            var_528 = rcx_83
            
            if (r15_3 != 0)
                int64_t rdx_52 = sx.q(*(r15_3 + 0x10c))
                int64_t* rbx_15 = *(r13_2 + 0x10)
                int64_t rax_67 = rbx_15[3]
                
                if (*(rax_67 + (rdx_52 << 3)) == 0)
                    sub_1419ccf30(rbx_15, rdx_52.d)
                    rax_67 = rbx_15[3]
                    rcx_83 = var_528
                
                rax_66 = *(rax_67 + (rdx_52 << 3))
            
            var_358:8.q = rax_66
            int64_t rax_68 = 0
            
            if (rdi_17 != 0)
                int64_t rdx_53 = sx.q(*(rdi_17 + 0x10c))
                int64_t* rbx_16 = *(rcx_83 + 0x10)
                int64_t rax_69 = rbx_16[3]
                
                if (*(rax_69 + (rdx_53 << 3)) == 0)
                    sub_1419ccf30(rbx_16, rdx_53.d)
                    rax_69 = rbx_16[3]
                
                rax_68 = *(rax_69 + (rdx_53 << 3))
            
            var_338.q = rax_68
            sub_1419870b0(arg2[8], &var_358, 2)
            void* rax_70 = sub_14139ce70(arg1)
            arg2[8]
            int32_t r9_9
            
            if (rax_70 == 0)
                r9_9 = (data_143ec4fdc).d
            else
                r9_9 = (*(rax_70 + 0x14)).d
            
            var_5a8.q = 0
            r9, zmm2, zmm3, zmm8 = sub_1410b6b20(rdi_17, arg2[8], arg2, r9_9)
        
        goto label_1410ae211
    
    void* var_520
    
    if (arg8 == 3)
        int64_t* rcx_53 = arg2[0xc]
        
        if (arg1[0x1e].b == 0)
            sub_1419a2ec0(rcx_53, &var_558, &data_143ed5e80, 0)
            void** rdx_41 = &var_528
            int64_t* rcx_68 = arg2[0xc]
            var_538.o = var_558
            
            if (arg9 == 0)
                sub_1419a2ec0(rcx_68, rdx_41, &data_143e3d040, 0)
                void* rbx_14 = var_528
                var_358.q = data_1439c9210
                var_358:8.q = sub_140790e00(&var_538)
                int64_t rax_63 = 0
                
                if (rbx_14 != 0)
                    rax_63 = sub_1410970c0(*(var_520 + 0x10), *(rbx_14 + 0x10c))
                
                var_338.q = rax_63
                sub_1419870b0(arg2[8], &var_358, 2)
                void* rax_64 = sub_14139ce70(arg1)
                arg2[8]
                int32_t r9_8
                
                if (rax_64 == 0)
                    r9_8 = (data_143ec4fdc).d
                else
                    r9_8 = (*(rax_64 + 0x14)).d
                
                var_5a8.q = 0
                float zmm6_7[0x4]
                r9, zmm2, zmm3, zmm6_7, zmm8 = sub_1410b6b20(rbx_14, arg2[8], arg2, r9_8)
                var_508 = zmm6_7
            else
                sub_1419a2ec0(rcx_68, rdx_41, &data_143e3d300, 0)
                void* rbx_13 = var_528
                var_358.q = data_1439c9210
                var_358:8.q = sub_140790e00(&var_538)
                int64_t rax_59 = 0
                
                if (rbx_13 != 0)
                    rax_59 = sub_1410970c0(*(var_520 + 0x10), *(rbx_13 + 0x10c))
                
                var_338.q = rax_59
                sub_1419870b0(arg2[8], &var_358, 2)
                void* rax_60 = sub_14139ce70(arg1)
                arg2[8]
                int32_t r9_7
                
                if (rax_60 == 0)
                    r9_7 = (data_143ec4fdc).d
                else
                    r9_7 = (*(rax_60 + 0x14)).d
                
                var_5a8.q = 0
                float zmm6_6[0x4]
                r9, zmm2, zmm3, zmm6_6, zmm8 = sub_1410b6b20(rbx_13, arg2[8], arg2, r9_7)
                var_508 = zmm6_6
        else if (arg9 == 0)
            sub_1419a2ec0(rcx_53, &var_558, &data_143ed5e80, 0)
            var_538.o = var_558
            sub_1419a2ec0(arg2[0xc], &var_528, &data_143e3d5c0, 0)
            void* rbx_12 = var_528
            var_358.q = data_1439c9210
            var_358:8.q = sub_140790e00(&var_538)
            int64_t rax_55 = 0
            
            if (rbx_12 != 0)
                rax_55 = sub_1410970c0(*(var_520 + 0x10), *(rbx_12 + 0x10c))
            
            var_338.q = rax_55
            sub_1419870b0(arg2[8], &var_358, 2)
            void* rax_56 = sub_14139ce70(arg1)
            arg2[8]
            int32_t r9_6
            
            if (rax_56 == 0)
                r9_6 = (data_143ec4fdc).d
            else
                r9_6 = (*(rax_56 + 0x14)).d
            
            var_5a8.q = 0
            float zmm6_5[0x4]
            r9, zmm2, zmm3, zmm6_5, zmm8 = sub_1410b6b20(rbx_12, arg2[8], arg2, r9_6)
            var_508 = zmm6_5
        else
            sub_1419a2ec0(rcx_53, &var_528, &data_143ed5e80, 0)
            void* rdi_10 = var_528
            sub_1419a2ec0(arg2[0xc], &var_4f8, &data_143e3d880, 0)
            int128_t* rbx_11 = var_4f8
            var_358.q = data_1439c9210
            int64_t rax_50 = 0
            
            if (rdi_10 != 0)
                rax_50 = sub_1410970c0(*(var_520 + 0x10), *(rdi_10 + 0x10c))
            
            var_358:8.q = rax_50
            int64_t rax_51 = 0
            void* var_4f0
            
            if (rbx_11 != 0)
                rax_51 = sub_1410970c0(*(var_4f0 + 0x10), *(rbx_11 + 0x10c))
            var_338.q = rax_51
            sub_1419870b0(arg2[8], &var_358, 2)
            void* rax_52 = sub_14139ce70(arg1)
            arg2[8]
            int32_t r9_5
            
            if (rax_52 == 0)
                r9_5 = (data_143ec4fdc).d
            else
                r9_5 = (*(rax_52 + 0x14)).d
            
            var_5a8.q = 0
            r9, zmm2, zmm3, zmm8 = sub_1410b6b20(rbx_11, arg2[8], arg2, r9_5)
            var_508[0].q = rdi_10
            var_508[2].q = var_520
            r13 = arg3
            var_508 = var_508
    else if (arg8 == 4)
        int64_t* rcx_26 = arg2[0xc]
        int128_t* rdx_8 = &var_558
        
        if (arg1[0x1e].b == 0)
            sub_1419a2ec0(rcx_26, rdx_8, &data_143ed5e80, 0)
            void** rdx_18 = &var_528
            int64_t* rcx_40 = arg2[0xc]
            var_538.o = var_558
            
            if (arg9 == 0)
                sub_1419a2ec0(rcx_40, rdx_18, &data_143e3db40, 0)
                void* rbx_10 = var_528
                var_358.q = data_1439c9210
                var_358:8.q = sub_140790e00(&var_538)
                int64_t rax_47 = 0
                
                if (rbx_10 != 0)
                    rax_47 = sub_1410970c0(*(var_520 + 0x10), *(rbx_10 + 0x10c))
                
                var_338.q = rax_47
                sub_1419870b0(arg2[8], &var_358, 2)
                void* rax_48 = sub_14139ce70(arg1)
                arg2[8]
                int32_t r9_4
                
                if (rax_48 == 0)
                    r9_4 = (data_143ec4fdc).d
                else
                    r9_4 = (*(rax_48 + 0x14)).d
                
                var_5a8.q = 0
                float zmm6_4[0x4]
                r9, zmm2, zmm3, zmm6_4, zmm8 = sub_1410b6b20(rbx_10, arg2[8], arg2, r9_4)
                var_508 = zmm6_4
            else
                sub_1419a2ec0(rcx_40, rdx_18, &data_143e3de00, 0)
                void* rbx_9 = var_528
                var_358.q = data_1439c9210
                var_358:8.q = sub_140790e00(&var_538)
                int64_t rax_43 = 0
                
                if (rbx_9 != 0)
                    rax_43 = sub_1410970c0(*(var_520 + 0x10), *(rbx_9 + 0x10c))
                
                var_338.q = rax_43
                sub_1419870b0(arg2[8], &var_358, 2)
                void* rax_44 = sub_14139ce70(arg1)
                arg2[8]
                int32_t r9_3
                
                if (rax_44 == 0)
                    r9_3 = (data_143ec4fdc).d
                else
                    r9_3 = (*(rax_44 + 0x14)).d
                
                var_5a8.q = 0
                float zmm6_3[0x4]
                r9, zmm2, zmm3, zmm6_3, zmm8 = sub_1410b6b20(rbx_9, arg2[8], arg2, r9_3)
                var_508 = zmm6_3
        else
            sub_1419a2ec0(rcx_26, rdx_8, &data_143ed5e80, 0)
            int64_t* rdx_9 = &var_528
            int64_t* rcx_27 = arg2[0xc]
            var_538.o = var_558
            
            if (arg9 == 0)
                sub_1419a2ec0(rcx_27, rdx_9, &data_143e3e0c0, 0)
                void* rbx_8 = var_528
                var_358.q = data_1439c9210
                var_358:8.q = sub_140790e00(&var_538)
                int64_t rax_39 = 0
                
                if (rbx_8 != 0)
                    rax_39 = sub_1410970c0(*(var_520 + 0x10), *(rbx_8 + 0x10c))
                
                var_338.q = rax_39
                sub_1419870b0(arg2[8], &var_358, 2)
                void* rax_40 = sub_14139ce70(arg1)
                arg2[8]
                int32_t r9_2
                
                if (rax_40 == 0)
                    r9_2 = (data_143ec4fdc).d
                else
                    r9_2 = (*(rax_40 + 0x14)).d
                
                var_5a8.q = 0
                float zmm6_2[0x4]
                r9, zmm2, zmm3, zmm6_2, zmm8 = sub_1410b6b20(rbx_8, arg2[8], arg2, r9_2)
                var_508 = zmm6_2
            else
                sub_1419a2ec0(rcx_27, rdx_9, &data_143e3e380, 0)
                void* rbx_7 = var_528
                var_358.q = data_1439c9210
                var_358:8.q = sub_140790e00(&var_538)
                int64_t rax_35 = 0
                
                if (rbx_7 != 0)
                    rax_35 = sub_1410970c0(*(var_520 + 0x10), *(rbx_7 + 0x10c))
                
                var_338.q = rax_35
                sub_1419870b0(arg2[8], &var_358, 2)
                void* rax_36 = sub_14139ce70(arg1)
                arg2[8]
                int32_t r9_1
                
                if (rax_36 == 0)
                    r9_1 = (data_143ec4fdc).d
                else
                    r9_1 = (*(rax_36 + 0x14)).d
                
                var_5a8.q = 0
                float zmm6_1[0x4]
                r9, zmm2, zmm3, zmm6_1, zmm8 = sub_1410b6b20(rbx_7, arg2[8], arg2, r9_1)
                var_508 = zmm6_1

if (var_548 != 0)
    void* rdi_28 = arg2[8]
    void*** rcx_175 = (*(rdi_28 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_133 = &rcx_175[3]
    
    if (rax_133 u> *(rdi_28 + 0x38))
        r9 = sub_140b0e3d0(rdi_28 + 0x30, 0x20)
        rcx_175 = (*(rdi_28 + 0x30) + 7) & 0xfffffffffffffff8
        rax_133 = &rcx_175[3]
    
    *(rdi_28 + 0x30) = rax_133
    void**** rax_134 = *(rdi_28 + 8)
    *(rdi_28 + 0x14) += 1
    *rax_134 = rcx_175
    *(rdi_28 + 8) = &rcx_175[1]
    rcx_175[2].d = zmm8[0]
    rcx_175[1] = 0
    *rcx_175 = &data_142f115c8
    *(rcx_175 + 0x14) = 0x3f800000

int32_t rcx_179 = *(r12 + 4)
int32_t r8_21 = *r12
int32_t rax_137 = *(r12 + 0xc) - rcx_179
int32_t var_560 = 1
int32_t rdx_123 = *(r12 + 8) - r8_21
int32_t var_568 = 1
var_4f8:4.d = rax_137
float (* var_570)[0x4] = &var_508
uint128_t zmm4_2 = _mm_cvtepi32_ps(zx.o(rax_137))
var_4f8.d = rdx_123
int64_t rax_139 = *arg7
int128_t* rax_140 = var_4f8
int64_t* var_588
var_588.d = zmm4_2.d
void* rcx_180 = arg2[8]
zmm3.o = zx.o(rdx_123)
zmm3.o = _mm_cvtepi32_ps(zmm3.o)
zmm2.o = zx.o(r8_21)
int32_t var_590_2 = zmm3.d
zmm2.o = _mm_cvtepi32_ps(zmm2.o)
char var_598
var_598.d = _mm_cvtepi32_ps(zx.o(rcx_179))[0]
int32_t var_5a0_2 = zmm2.d
zmm2.o = zx.o(0)
var_5a8.d = zmm4_2.d
sub_1413993b0(rcx_180, zx.o(0), zmm2, r9, zmm3, var_5a8, var_5a0_2, var_598, var_590_2, var_588.d, 
    rax_140, rax_139, var_570, var_568, var_560)
sub_141096650(arg2[8])
void* r14_4 = arg2[8]
int64_t rax_141 = *r13
int64_t* rbx_49 = (*(r14_4 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_182 = &rbx_49[1]

if (rcx_182 u> *(r14_4 + 0x38))
    sub_140b0e3d0(r14_4 + 0x30, 0x10)
    rbx_49 = (*(r14_4 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_182 = &rbx_49[1]

*(r14_4 + 0x30) = rcx_182
*rbx_49 = rax_141
void*** rcx_186 = (*(r14_4 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_142 = &rcx_186[5]

if (rax_142 u> *(r14_4 + 0x38))
    sub_140b0e3d0(r14_4 + 0x30, 0x30)
    rcx_186 = (*(r14_4 + 0x30) + 7) & 0xfffffffffffffff8
    rax_142 = &rcx_186[5]

*(r14_4 + 0x30) = rax_142
void**** rax_143 = *(r14_4 + 8)
*(r14_4 + 0x14) += 1
*rax_143 = rcx_186
*(r14_4 + 8) = &rcx_186[1]
rcx_186[1] = 0
*rcx_186 = &data_142d549c8
rcx_186[2].d = 1
rcx_186[3] = rbx_49
rcx_186[4].d = 0

if (var_548 != 0)
    void* rbx_52 = arg2[8]
    void*** rcx_192 = (*(rbx_52 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_145 = &rcx_192[3]
    
    if (rax_145 u> *(rbx_52 + 0x38))
        sub_140b0e3d0(rbx_52 + 0x30, 0x20)
        rcx_192 = (*(rbx_52 + 0x30) + 7) & 0xfffffffffffffff8
        rax_145 = &rcx_192[3]
    
    *(rbx_52 + 0x30) = rax_145
    int64_t* rax_146 = *(rbx_52 + 8)
    *(rbx_52 + 0x14) += 1
    *rax_146 = rcx_192
    *(rbx_52 + 8) = &rcx_192[1]
    rcx_192[1] = 0
    *rcx_192 = &data_142f115c8
    rcx_192[2].d = 0
    *(rcx_192 + 0x14) = 0x3f800000

int64_t var_1a0
int64_t result
int512_t zmm6_8
result, zmm6_8 = sub_1405d1550(&var_1a0)
__security_check_cookie(rax_1 ^ &var_5c8)
zmm6_8.o = arg5
return result
