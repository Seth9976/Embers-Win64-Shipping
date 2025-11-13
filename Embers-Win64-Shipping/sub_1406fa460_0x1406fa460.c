// 函数: sub_1406fa460
// 地址: 0x1406fa460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_48[0x4] = zmm6
int32_t i_2 = 0
int16_t* rax = *(arg2 + 0x10)
int32_t* r8 = *(arg2 + 0x20)
int16_t i_3 = *rax & 0x7fff
*(arg2 + 0x10) = &rax[1]
uint32_t i = zx.d(i_3)
int32_t rdx = 0

if (i s>= *r8)
    int64_t rax_1 = 0
    int32_t* rcx = nullptr
    
    do
        i -= *(rcx + r8)
        rax_1 += 1
        rcx = rax_1 << 2
        rdx += 1
    while (i s>= *(rcx + r8))

int64_t r11 = *(arg2 + 0x18)
uint32_t rcx_2 = zx.d(rax[1])
int32_t* rsi = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(rdx) << 3)))) << 3))
*(arg2 + 0x10) = &rax[2]
uint8_t rax_7 = (rcx_2 u>> 0xf).b
int32_t i_1 = rcx_2 & 0x7fff
int32_t* var_2f8 = rsi
int32_t* r13_1

if ((not.b(rax_7) & 1) == 0)
    r13_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
else
    int32_t r9 = 0
    
    if (i_1 s>= *r8)
        int64_t rax_8 = 0
        int64_t rdx_2 = 0
        
        do
            i_1 -= *(r8 + rdx_2)
            rax_8 += 1
            rdx_2 = rax_8 << 2
            r9 += 1
        while (i_1 s>= *(r8 + rdx_2))
    
    r13_1 = sx.q(i_1) + *(r11 + (sx.q(r9) << 3))

uint32_t var_278 = 0xffffffff
int128_t* var_270 = nullptr
int32_t var_268 = 0
sub_140767bd0(&var_278, arg2)
void var_228
sub_1407422f0(&var_228, arg2)
char var_137
char rax_12 = var_137
int128_t* r14 = &rsi[0x34]
int128_t* r15 = &rsi[0x54]
float var_348[0x4]
uint32_t (* rcx_6)[0x4]
float zmm0[0x4]

if (rax_12 == 0)
    zmm0 = data_14399f720
    rcx_6 = &var_348
    var_348 = zmm0
else
    uint32_t (* rax_13)[0x4] = sub_140ae1ba0(r14, &var_348)
    zmm0 = data_14399f720
    rcx_6 = rax_13
    rax_12 = var_137

uint32_t zmm11[0x4] = *rcx_6
uint32_t (* rax_14)[0x4]

if (rax_12 == 0)
    var_348 = zmm0
    rax_14 = &var_348
else
    rax_14 = sub_140ae1ba0(r15, &var_348)

zmm6 = *rax_14
float var_308[0x4] = zmm6
void* rax_15 = sub_140d3c6e0(rsi)

if (rax_15 != 0)
    void* rax_16 = sub_142591550()
    void* rcx_9 = *(rax_15 + 0x10)
    int64_t rdx_7 = sx.q(*(rax_16 + 0x38))
    
    if (rdx_7.d s<= *(rcx_9 + 0x38) && *(*(rcx_9 + 0x30) + (rdx_7 << 3)) == rax_16 + 0x30
            && *(rax_15 + 0x430) != 0)
        sub_141f66050(rax_15, rsi[0x1a])

if (sub_140d3c6e0(rsi) != 0)
    sub_142591550()

void* rdi_1 = *(rsi + 0x58)
int32_t arg_18

if (rdi_1 != 0 && rsi[0x86].b != 0)
    int64_t rax_19 = sub_140d3c6e0(rsi)
    arg_18.q = rax_19
    
    if (rax_19 != 0)
        void* r8_1 = arg_18.q
        void* rax_21 = sub_142591550() + 0x30
        void* rcx_14 = *(r8_1 + 0x10)
        int64_t rdx_9 = sx.q(*(rax_21 + 8))
        
        if (rdx_9.d s<= *(rcx_14 + 0x38) && *(*(rcx_14 + 0x30) + (rdx_9 << 3)) == rax_21
                && *(r8_1 + 0x430) != 0)
            sub_141f66050(r8_1, rsi[0x1a])

int32_t rcx_17

if (rdi_1 == 0 || rdi_1 == 0)
    rcx_17 = 0
else
    rcx_17 = *(rdi_1 + 0x1b0)

uint64_t result = zx.q(rsi[0x71])
int32_t r11_2 = rsi[0x6e] + rcx_17
int128_t zmm15
zmm15.d = 1f f/ rsi[0x64]
uint64_t rdx_12 = zx.q(result.d) << 4
int32_t arg_20 = rcx_17
uint64_t r10_3 = (zx.q((result - 1).d) & 1) << 4
arg_18 = r11_2
uint64_t var_318 = r10_3

if (*(arg2 + 0x40) s> 0)
    int128_t* r8_2 = var_270
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    uint32_t zmm8[0x4]
    uint32_t var_68_1[0x4] = zmm8
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    uint32_t zmm10[0x4]
    uint32_t var_88_1[0x4] = zmm10
    int64_t rdx_14 = sx.q(var_268) << 2
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    uint64_t r9_2 = zx.q(rax_7) << 2
    float zmm13[0x4]
    float var_b8_1[0x4] = zmm13
    uint32_t zmm14[0x4]
    uint32_t var_c8_1[0x4] = zmm14
    uint64_t var_320_1 = r9_2
    int64_t var_250_1 = rdx_14
    
    do
        int64_t rbx_1 = sx.q(*r13_1)
        int128_t* rax_22 = r8_2
        r8_2 += rdx_14
        r13_1 += r9_2
        zmm14 = *rax_22
        int32_t var_1dc
        void* var_1d0
        int32_t var_1c4
        void* var_1b8
        int32_t var_1ac
        void* var_1a0
        int32_t var_194
        void* var_188
        float zmm1[0x4]
        float zmm2[0x4]
        uint32_t zmm3[0x4]
        float zmm4[0x4]
        float zmm5[0x4]
        
        if (rbx_1.d s< 0 || rbx_1.d s>= r11_2)
            zmm6 = data_143dbb200
            zmm4 = data_143dbb1f8
            zmm5 = data_143dbb1fc
            int32_t var_28c_1 = 0x3f800000
            float var_298[0x4]
            var_298[0] = zmm4[0]
            int32_t var_27c_1 = 0x3f800000
            float temp0_189[0x4] = _mm_shuffle_ps(var_298, var_298, 0xe1)
            temp0_189[0] = zmm5[0]
            var_348[0].q = 0
            float temp0_190[0x4] = _mm_shuffle_ps(temp0_189, temp0_189, 0xc6)
            temp0_190[0] = zmm6[0]
            var_348[2] = 0
            float temp0_191[0x4] = _mm_shuffle_ps(temp0_190, temp0_190, 0xc9)
            var_298 = temp0_191
            zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_191, temp0_191, 0xaa), r14[2])
            var_348[0].q = 0
            float temp0_195[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_191, temp0_191, 0x55), r14[1])
            var_348[2] = 0
            float temp0_197[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_191, temp0_191, 0xff), r14[3])
            float temp0_199[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_191, temp0_191, 0), *r14)
            zmm3 = _mm_add_ps(zmm3, temp0_197)
            float temp0_201[0x4] = _mm_add_ps(temp0_195, temp0_199)
            float var_288[0x4]
            var_288[0] = zmm4[0]
            float temp0_202[0x4] = _mm_shuffle_ps(var_288, var_288, 0xe1)
            temp0_202[0] = zmm5[0]
            float temp0_203[0x4] = _mm_shuffle_ps(temp0_202, temp0_202, 0xc6)
            zmm3 = _mm_add_ps(zmm3, temp0_201)
            temp0_203[0] = zmm6[0]
            zmm6 = var_308
            float temp0_205[0x4] = _mm_shuffle_ps(temp0_203, temp0_203, 0xc9)
            var_288 = temp0_205
            float temp0_207[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_205, temp0_205, 0xff), r15[3])
            zmm10 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm8 = zmm3
            zmm7 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            float temp0_211[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_205, temp0_205, 0), *r15)
            zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_205, temp0_205, 0xaa), r15[2])
            float temp0_215[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_205, temp0_205, 0x55), r15[1])
            zmm3 = _mm_add_ps(_mm_add_ps(zmm3, temp0_207), _mm_add_ps(temp0_211, temp0_215))
            zmm9 = zmm3
            zmm12 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm13 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            
            if (var_137 != 0)
                void* rdx_38 = var_1d0
                zmm1 = data_14399f720:4.d
                zmm2 = data_14399f720:8.d
                zmm3 = data_14399f720:0xc.d
                var_1d0 = rdx_38 + (sx.q(var_1dc) << 2)
                *rdx_38 = data_14399f720.d[0]
                void* rdx_39 = var_1b8
                var_1b8 = rdx_39 + (sx.q(var_1c4) << 2)
                *rdx_39 = zmm1[0]
                void* rdx_40 = var_1a0
                var_1a0 = rdx_40 + (sx.q(var_1ac) << 2)
                *rdx_40 = zmm2[0]
                void* rdx_41 = var_188
                var_188 = rdx_41 + (sx.q(var_194) << 2)
                *rdx_41 = zmm3[0]
        else
            if (rbx_1.d s< rcx_17)
                int32_t rdx_20 = *(rdi_1 + 0x190)
                void var_128
                
                if (rbx_1.d s>= rdx_20)
                    zmm0 = *(*(rdi_1 + 0x1b8) + rbx_1 * 0x30 + 0x10)
                    zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                    zmm3 = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
                else
                    int128_t* rax_34 = sub_1423133d0(rdi_1, &var_128, rbx_1.d)
                    rdx_20 = *(rdi_1 + 0x190)
                    zmm0 = rax_34[3].d
                    zmm1 = *(rax_34 + 0x34)
                    zmm3 = *(rax_34 + 0x38)
                
                int32_t var_2bc_1 = 0x3f800000
                var_348[0].q = 0
                float var_2c8[0x4]
                var_2c8[0] = zmm0[0]
                float temp0_97[0x4] = _mm_shuffle_ps(var_2c8, var_2c8, 0xe1)
                var_348[2] = 0
                temp0_97[0] = zmm1[0]
                float temp0_98[0x4] = _mm_shuffle_ps(temp0_97, temp0_97, 0xc6)
                temp0_98[0] = zmm3[0]
                float temp0_99[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0xc9)
                var_2c8 = temp0_99
                zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_99, temp0_99, 0xff), r14[3])
                float temp0_103[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_99, temp0_99, 0x55), r14[1])
                float temp0_105[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_99, temp0_99, 0xaa), r14[2])
                float temp0_107[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_99, temp0_99, 0), *r14)
                zmm3 = _mm_add_ps(_mm_add_ps(zmm3, temp0_105), _mm_add_ps(temp0_103, temp0_107))
                zmm8 = zmm3
                zmm10 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                zmm7 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                
                if (rbx_1.d s>= rdx_20)
                    zmm0 = *(*(rdi_1 + 0x1b8) + rbx_1 * 0x30 + 0x10)
                    zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                    zmm3 = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
                else
                    int128_t* rax_36 = sub_1423133d0(rdi_1, &var_128, rbx_1.d)
                    zmm0 = rax_36[3].d
                    zmm1 = *(rax_36 + 0x34)
                    zmm3 = *(rax_36 + 0x38)
                
                int32_t var_2ac_1 = 0x3f800000
                float var_2b8[0x4]
                var_2b8[0] = zmm0[0]
                var_348[0].q = 0
                float temp0_115[0x4] = _mm_shuffle_ps(var_2b8, var_2b8, 0xe1)
                temp0_115[0] = zmm1[0]
                var_348[2] = 0
                float temp0_116[0x4] = _mm_shuffle_ps(temp0_115, temp0_115, 0xc6)
                temp0_116[0] = zmm3[0]
                float temp0_117[0x4] = _mm_shuffle_ps(temp0_116, temp0_116, 0xc9)
                var_2b8 = temp0_117
                zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_117, temp0_117, 0xff), r15[3])
                float temp0_121[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_117, temp0_117, 0x55), r15[1])
                float temp0_123[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_117, temp0_117, 0xaa), r15[2])
                float temp0_125[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_117, temp0_117, 0), *r15)
                zmm3 = _mm_add_ps(_mm_add_ps(zmm3, temp0_123), _mm_add_ps(temp0_121, temp0_125))
                zmm9 = zmm3
                zmm12 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                zmm13 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                
                if (var_137 != 0)
                    uint32_t var_2a8[0x4]
                    
                    if (rbx_1.d s>= *(rdi_1 + 0x190))
                        zmm3 = *(*(rdi_1 + 0x1b8) + rbx_1 * 0x30)
                    else
                        sub_140ae1ba0(sub_1423133d0(rdi_1, &var_128, rbx_1.d), &var_2a8)
                        zmm3 = var_2a8
                    
                    zmm4 = data_143cdf9d0
                    zmm5 = data_143cdf9c0
                    zmm6 = data_143cdf9b0
                    float temp0_133[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), 
                        _mm_shuffle_ps(zmm11, zmm11, 0))
                    float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0xff), zmm3)
                    float temp0_136[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
                    float temp0_137[0x4] = _mm_mul_ps(temp0_133, zmm4)
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
                    float temp0_139[0x4] = _mm_add_ps(temp0_137, temp0_135)
                    float temp0_141[0x4] = _mm_mul_ps(temp0_136, _mm_shuffle_ps(zmm11, zmm11, 0x55))
                    zmm3 = _mm_mul_ps(zmm3, _mm_shuffle_ps(zmm11, zmm11, 0xaa))
                    float temp0_144[0x4] = _mm_mul_ps(temp0_141, zmm5)
                    zmm3 = _mm_mul_ps(zmm3, zmm6)
                    var_2a8 = _mm_add_ps(_mm_add_ps(temp0_139, temp0_144), zmm3)
                    uint32_t var_238[0x4]
                    
                    if (rbx_1.d s>= *(rdi_1 + 0x190))
                        zmm3 = *(*(rdi_1 + 0x1b8) + rbx_1 * 0x30)
                    else
                        sub_140ae1ba0(sub_1423133d0(rdi_1, &var_128, rbx_1.d), &var_238)
                        zmm4 = data_143cdf9d0
                        zmm5 = data_143cdf9c0
                        zmm3 = var_238
                        zmm6 = data_143cdf9b0
                    
                    float temp0_148[0x4] = _mm_shuffle_ps(var_308, var_308, 0)
                    float temp0_150[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), temp0_148)
                    float temp0_151[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
                    float temp0_152[0x4] = _mm_mul_ps(temp0_150, zmm4)
                    float temp0_154[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_308, var_308, 0xff), zmm3)
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
                    float temp0_156[0x4] = _mm_add_ps(temp0_152, temp0_154)
                    float temp0_158[0x4] =
                        _mm_mul_ps(temp0_151, _mm_shuffle_ps(var_308, var_308, 0x55))
                    zmm3 = _mm_mul_ps(zmm3, _mm_shuffle_ps(var_308, var_308, 0xaa))
                    float temp0_161[0x4] = _mm_mul_ps(temp0_158, zmm5)
                    zmm3 = _mm_mul_ps(zmm3, zmm6)
                    var_238 = _mm_add_ps(_mm_add_ps(temp0_156, temp0_161), zmm3)
                    float (* rax_42)[0x4]
                    rax_42, zmm7, zmm8, zmm9, zmm10 =
                        sub_140ae0e60(&var_278, &var_238, &var_2a8, zmm14)
                    zmm6 = data_143cdfe30
                    void* rdx_28 = var_1d0
                    zmm5 = *rax_42
                    float temp0_165[0x4] = _mm_mul_ps(zmm5, zmm5)
                    var_1d0 = rdx_28 + (sx.q(var_1dc) << 2)
                    float temp0_167[0x4] =
                        _mm_add_ps(temp0_165, _mm_shuffle_ps(temp0_165, temp0_165, 0x4e))
                    float temp0_169[0x4] =
                        _mm_add_ps(_mm_shuffle_ps(temp0_167, temp0_167, 0x39), temp0_167)
                    float temp0_170[0x4] = _mm_rsqrt_ps(temp0_169)
                    zmm3 = _mm_mul_ps(temp0_169, zmm6)
                    float temp0_176[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_170, temp0_170), zmm3)), 
                            temp0_170), 
                        temp0_170)
                    float temp0_179[0x4] =
                        _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_176, temp0_176), zmm3))
                    float temp0_181[0x4] =
                        _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_169, 2)
                    zmm6 = _mm_and_ps(
                        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_179, temp0_176), temp0_176), zmm5)
                            ^ data_143cdfe20, 
                        temp0_181) ^ data_143cdfe20
                    var_2a8 = zmm6
                    *rdx_28 = zmm6[0]
                    void* rdx_29 = var_1b8
                    var_1b8 = rdx_29 + (sx.q(var_1c4) << 2)
                    *rdx_29 = _mm_shuffle_ps(zmm6, zmm6, 0x55)[0]
                    float* rdx_30 = var_1a0
                    var_1a0 = &rdx_30[sx.q(var_1ac)]
                    *rdx_30 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)[0]
                    float* rdx_31 = var_188
                    var_188 = &rdx_31[sx.q(var_194)]
                    *rdx_31 = _mm_shuffle_ps(zmm6, zmm6, 0xff)[0]
                    zmm6 = var_308
                
                rsi = var_2f8
                goto label_1406faf75
            
            int32_t var_2dc_1 = 0x3f800000
            int32_t var_2cc_1 = 0x3f800000
            int64_t var_338 = 0
            int64_t rcx_19 = sx.q(rbx_1.d - rcx_17) * 6
            int32_t var_330_1 = 0
            var_338 = 0
            int32_t var_330_2 = 0
            int64_t rax_27 = *(rdx_12 + rsi + 0x1c8)
            zmm2 = *(rax_27 + (rcx_19 << 3) + 0x10)
            zmm0 = *(rax_27 + (rcx_19 << 3))
            uint32_t var_2e8[0x4]
            var_2e8[0] = zmm2[0]
            float var_248_1[0x4] = zmm0
            zmm0 = *(rax_27 + (rcx_19 << 3) + 0x20)
            int64_t rax_28 = *(r10_3 + rsi + 0x1c8)
            float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            float var_108_1[0x4] = zmm0
            zmm3 = _mm_shuffle_ps(var_2e8, var_2e8, 0xe1)
            zmm4 = *(rax_28 + (rcx_19 << 3) + 0x10)
            var_348 = *(rax_28 + (rcx_19 << 3))
            float var_108_2[0x4] = *(rax_28 + (rcx_19 << 3) + 0x20)
            zmm3[0] = _mm_shuffle_ps(zmm2, zmm2, 0x55)[0]
            float var_2d8[0x4]
            var_2d8[0] = zmm4[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3[0] = temp0_1[0]
            float temp0_5[0x4] = _mm_shuffle_ps(var_2d8, var_2d8, 0xe1)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            var_2e8 = zmm3
            zmm8 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xff), r14[3])
            float temp0_10[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0x55), r14[1])
            float temp0_12[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), r14[2])
            zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0), *r14)
            zmm8 = _mm_add_ps(zmm8, temp0_12)
            temp0_5[0] = _mm_shuffle_ps(zmm4, zmm4, 0x55)[0]
            float temp0_17[0x4] = _mm_add_ps(temp0_10, zmm3)
            float temp0_18[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
            zmm8 = _mm_add_ps(zmm8, temp0_17)
            temp0_18[0] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)[0]
            float temp0_21[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc9)
            var_2d8 = temp0_21
            float temp0_23[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_21, temp0_21, 0xff), r15[3])
            float temp0_25[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_21, temp0_21, 0x55), r15[1])
            float temp0_27[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_21, temp0_21, 0xaa), r15[2])
            float temp0_29[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_21, temp0_21, 0), *r15)
            float temp0_30[0x4] = _mm_add_ps(temp0_23, temp0_27)
            zmm10 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
            zmm7 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
            zmm9 = _mm_add_ps(temp0_30, _mm_add_ps(temp0_25, temp0_29))
            zmm12 = _mm_shuffle_ps(zmm9, zmm9, 0x55)
            zmm13 = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
            
            if (var_137 != 0)
                zmm3 = var_248_1
                zmm5 = var_348
                float temp0_37[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x1b)
                float temp0_38[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
                float temp0_40[0x4] = _mm_mul_ps(temp0_37, _mm_shuffle_ps(zmm11, zmm11, 0))
                float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0xff), zmm3)
                float temp0_43[0x4] = __mulps_xmmps_memps(temp0_40, data_143cdf9d0)
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
                float temp0_45[0x4] = _mm_add_ps(temp0_43, temp0_42)
                float temp0_47[0x4] = _mm_mul_ps(temp0_38, _mm_shuffle_ps(zmm11, zmm11, 0x55))
                zmm3 = _mm_mul_ps(zmm3, _mm_shuffle_ps(zmm11, zmm11, 0xaa))
                float temp0_50[0x4] = __mulps_xmmps_memps(temp0_47, data_143cdf9c0)
                uint32_t var_248_2[0x4] = zmm3
                float temp0_51[0x4] = __mulps_xmmps_memps(zmm3, data_143cdf9b0)
                float temp0_52[0x4] = _mm_add_ps(temp0_45, temp0_50)
                float temp0_53[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x4e)
                float temp0_54[0x4] = _mm_add_ps(temp0_52, temp0_51)
                float temp0_55[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
                var_338.o = temp0_54
                zmm2 = var_348
                float temp0_57[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_55)
                float temp0_59[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xff), zmm5)
                float temp0_60[0x4] = __mulps_xmmps_memps(temp0_57, data_143cdf9d0)
                float temp0_61[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xb1)
                float temp0_62[0x4] = _mm_add_ps(temp0_60, temp0_59)
                float temp0_64[0x4] = _mm_mul_ps(temp0_53, _mm_shuffle_ps(zmm6, zmm6, 0x55))
                float temp0_66[0x4] = _mm_mul_ps(temp0_61, _mm_shuffle_ps(zmm6, zmm6, 0xaa))
                float temp0_67[0x4] = __mulps_xmmps_memps(temp0_64, data_143cdf9c0)
                float temp0_68[0x4] = __mulps_xmmps_memps(temp0_66, data_143cdf9b0)
                var_348 = _mm_add_ps(_mm_add_ps(temp0_62, temp0_67), temp0_68)
                float var_e8[0x4]
                float (* rax_29)[0x4]
                rax_29, zmm7, zmm8, zmm9, zmm10 = sub_140ae0e60(&var_e8, &var_348, &var_338, zmm14)
                zmm6 = data_143cdfe30
                zmm5 = *rax_29
                float temp0_71[0x4] = _mm_mul_ps(zmm5, zmm5)
                float temp0_73[0x4] = _mm_add_ps(temp0_71, _mm_shuffle_ps(temp0_71, temp0_71, 0x4e))
                float temp0_75[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_73, temp0_73, 0x39), temp0_73)
                float temp0_76[0x4] = _mm_rsqrt_ps(temp0_75)
                zmm3 = _mm_mul_ps(temp0_75, zmm6)
                float temp0_82[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_76, temp0_76), zmm3)), 
                        temp0_76), 
                    temp0_76)
                float* rdx_16 = var_1d0
                float temp0_85[0x4] =
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_82, temp0_82), zmm3))
                float temp0_87[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_75, 2)
                var_1d0 = &rdx_16[sx.q(var_1dc)]
                zmm6 = _mm_and_ps(
                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_85, temp0_82), temp0_82), zmm5)
                        ^ data_143cdfe20, 
                    temp0_87) ^ data_143cdfe20
                var_338.o = zmm6
                *rdx_16 = zmm6[0]
                float* rdx_17 = var_1b8
                var_1b8 = &rdx_17[sx.q(var_1c4)]
                *rdx_17 = _mm_shuffle_ps(zmm6, zmm6, 0x55)[0]
                void* rdx_18 = var_1a0
                float temp0_93[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                float temp0_94[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                var_1a0 = rdx_18 + (sx.q(var_1ac) << 2)
                *rdx_18 = temp0_93[0]
                float* rdx_19 = var_188
                var_188 = &rdx_19[sx.q(var_194)]
                *rdx_19 = temp0_94[0]
                zmm6 = var_308
            label_1406faf75:
                r9_2 = var_320_1
                r10_3 = var_318
                r11_2 = arg_18
        zmm7[0] = zmm7[0] - zmm13[0]
        zmm8[0] = zmm8[0] f- zmm9[0]
        zmm10[0] = zmm10[0] f- zmm12[0]
        zmm7[0] = zmm7[0] f* zmm14[0]
        zmm8[0] = zmm8[0] f* zmm14[0]
        zmm10[0] = zmm10[0] f* zmm14[0]
        zmm7[0] = zmm7[0] + zmm13[0]
        zmm9[0] = zmm9[0] f+ zmm8[0]
        zmm12[0] = zmm12[0] f+ zmm10[0]
        char var_138
        
        if (var_138 != 0)
            void* var_218
            float* rdx_32 = var_218
            int32_t var_224
            var_218 = &rdx_32[sx.q(var_224)]
            *rdx_32 = zmm9[0]
            void* var_200
            float* rdx_33 = var_200
            int32_t var_20c
            var_200 = &rdx_33[sx.q(var_20c)]
            *rdx_33 = zmm12[0]
            void* var_1e8
            float* rdx_34 = var_1e8
            int32_t var_1f4
            var_1e8 = &rdx_34[sx.q(var_1f4)]
            *rdx_34 = zmm7[0]
        
        char var_136
        
        if (var_136 != 0)
            void* var_170
            float* rdx_35 = var_170
            zmm9[0] = zmm9[0] - zmm9[0]
            zmm12[0] = zmm12[0] - zmm12[0]
            zmm7[0] = zmm7[0] - zmm13[0]
            zmm9[0] = zmm9[0] f* zmm15.d
            int32_t var_17c
            var_170 = &rdx_35[sx.q(var_17c)]
            zmm12[0] = zmm12[0] f* zmm15.d
            *rdx_35 = zmm9[0]
            void* var_158
            float* rdx_36 = var_158
            zmm7[0] = zmm7[0] f* zmm15.d
            int32_t var_164
            var_158 = &rdx_36[sx.q(var_164)]
            *rdx_36 = zmm12[0]
            float* var_140
            float* rdx_37 = var_140
            int32_t var_14c
            var_140 = &rdx_37[sx.q(var_14c)]
            *rdx_37 = zmm7[0]
        
        result = arg2
        i_2 += 1
        rcx_17 = arg_20
        rdx_14 = var_250_1
    while (i_2 s< *(result + 0x40))

return result
