// 函数: sub_1406fbe70
// 地址: 0x1406fbe70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_2 = 0
int32_t* r8 = *(arg2 + 0x20)
int16_t i_3 = *rax & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
uint32_t i = zx.d(i_3)

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
uint8_t rsi_1 = (rcx_2 u>> 0xf).b
int32_t i_1 = rcx_2 & 0x7fff
int32_t* r15 = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(rdx) << 3)))) << 3))
*(arg2 + 0x10) = &rax[2]
int32_t* r12_1

if ((not.b(rsi_1) & 1) == 0)
    r12_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
else
    int32_t r9 = 0
    
    if (i_1 s>= *r8)
        int64_t rax_7 = 0
        int32_t* rdx_2 = nullptr
        
        do
            i_1 -= *(rdx_2 + r8)
            rax_7 += 1
            rdx_2 = rax_7 << 2
            r9 += 1
        while (i_1 s>= *(rdx_2 + r8))
    
    r12_1 = sx.q(i_1) + *(r11 + (sx.q(r9) << 3))

uint32_t var_268 = 0xffffffff
int128_t* var_260 = nullptr
int32_t var_258 = 0
sub_140767bd0(&var_268, arg2)
void var_228
sub_1407422f0(&var_228, arg2)
float var_238[0x4]
char var_137
float zmm6[0x4]

if (var_137 != 0)
    zmm6 = sub_140ae1ba0(&r15[0x34], &var_238)
    
    if (var_137 != 0)
        zmm6 = sub_140ae1ba0(&r15[0x54], &var_238)

void* rax_9 = sub_140d3c6e0(r15)

if (rax_9 != 0)
    void* rax_10 = sub_142591550()
    void* rcx_8 = *(rax_9 + 0x10)
    int64_t rdx_7 = sx.q(*(rax_10 + 0x38))
    
    if (rdx_7.d s<= *(rcx_8 + 0x38) && *(*(rcx_8 + 0x30) + (rdx_7 << 3)) == rax_10 + 0x30
            && *(rax_9 + 0x430) != 0)
        sub_141f66050(rax_9, r15[0x1a])

if (sub_140d3c6e0(r15) != 0)
    sub_142591550()

void* rdi = *(r15 + 0x58)

if (rdi != 0 && r15[0x86].b != 0)
    void* rax_13 = sub_140d3c6e0(r15)
    
    if (rax_13 != 0)
        void* rax_14 = sub_142591550()
        void* rcx_13 = *(rax_13 + 0x10)
        int64_t rdx_9 = sx.q(*(rax_14 + 0x38))
        
        if (rdx_9.d s<= *(rcx_13 + 0x38) && *(*(rcx_13 + 0x30) + (rdx_9 << 3)) == rax_14 + 0x30
                && *(rax_13 + 0x430) != 0)
            sub_141f66050(rax_13, r15[0x1a])

int32_t rcx_16

if (rdi == 0 || rdi == 0)
    rcx_16 = 0
else
    rcx_16 = *(rdi + 0x1b0)

int32_t rax_17 = r15[0x6e] + rcx_16
int128_t zmm14
zmm14.d = 1f f/ r15[0x64]
uint64_t result = zx.q(r15[0x71])
int32_t arg_10 = rcx_16
uint64_t r11_2 = zx.q(result.d) << 4
uint64_t var_290 = r11_2
uint64_t rdx_13 = (zx.q((result - 1).d) & 1) << 4
uint64_t var_248 = rdx_13

if (*(arg2 + 0x40) s> 0)
    int128_t* r8_1 = var_260
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    int64_t r9_2 = sx.q(var_258) << 2
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    uint64_t r10_2 = zx.q(rsi_1) << 2
    uint32_t zmm13[0x4]
    uint32_t var_b8_1[0x4] = zmm13
    float var_48_1[0x4] = zmm6
    int64_t var_2a0_1 = r9_2
    uint64_t var_298_1 = r10_2
    
    do
        int64_t rbx_2 = sx.q(*r12_1)
        int128_t* rax_18 = r8_1
        r8_1 += r9_2
        r12_1 += r10_2
        zmm13 = *rax_18
        result = zx.q(rbx_2.d - rcx_16)
        uint32_t zmm0[0x4]
        int32_t var_1dc
        void* var_1d0
        int32_t var_1c4
        void* var_1b8
        int32_t var_1ac
        void* var_1a0
        int32_t result_2
        void* var_188
        float zmm1[0x4]
        float zmm2[0x4]
        uint32_t zmm3[0x4]
        
        if (rbx_2.d s< 0 || rbx_2.d s>= rax_17)
            zmm2 = data_143dbb1f8
            zmm1 = data_143dbb1fc
            zmm7 = zmm2
            zmm0 = data_143dbb200
            zmm8 = zmm1
            zmm9 = zmm0
            zmm10 = zmm2
            zmm11 = zmm1
            zmm12 = zmm0
            
            if (var_137 != 0)
                void* rdx_31 = var_1d0
                zmm1 = data_14399f720:4.d
                zmm2 = data_14399f720:8.d
                zmm3 = data_14399f720:0xc.d
                var_1d0 = rdx_31 + (sx.q(var_1dc) << 2)
                *rdx_31 = data_14399f720.d[0]
                void* rdx_32 = var_1b8
                var_1b8 = rdx_32 + (sx.q(var_1c4) << 2)
                *rdx_32 = zmm1[0]
                void* rdx_33 = var_1a0
                var_1a0 = rdx_33 + (sx.q(var_1ac) << 2)
                *rdx_33 = zmm2[0]
                void* rdx_34 = var_188
                result = sx.q(result_2)
                var_188 = rdx_34 + (result << 2)
                *rdx_34 = zmm3[0]
        else
            if (rbx_2.d s< rcx_16)
                int32_t rdx_19 = *(rdi + 0x190)
                uint32_t var_2c8_1
                uint32_t var_2c0_1
                void var_118
                
                if (rbx_2.d s>= rdx_19)
                    zmm1 = *(*(rdi + 0x1b8) + rbx_2 * 0x30 + 0x10)
                    var_2c8_1 = zmm1[0]
                    zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    var_2c0_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                    uint32_t var_2c4_2 = zmm0[0]
                else
                    int128_t* rax_26 = sub_1423133d0(rdi, &var_118, rbx_2.d)
                    rdx_19 = *(rdi + 0x190)
                    var_2c8_1 = rax_26[3].d[0]
                    var_2c0_1 = (*(rax_26 + 0x38))[0]
                    float var_2c4_1 = (*(rax_26 + 0x34))[0]
                
                int64_t var_2b8_1 = var_2c8_1.q
                
                if (rbx_2.d s>= rdx_19)
                    result = *(rdi + 0x1b8)
                    zmm10 = *(result + rbx_2 * 0x30 + 0x10)
                    zmm11 = _mm_shuffle_ps(zmm10, zmm10, 0x55)
                    zmm12 = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
                else
                    result = sub_1423133d0(rdi, &var_118, rbx_2.d)
                    zmm10 = *(result + 0x30)
                    zmm11 = *(result + 0x34)
                    zmm12 = *(result + 0x38)
                
                if (var_137 != 0)
                    uint32_t var_288[0x4]
                    
                    if (rbx_2.d s>= *(rdi + 0x190))
                        var_288 = *(*(rdi + 0x1b8) + rbx_2 * 0x30)
                    else
                        sub_140ae1ba0(sub_1423133d0(rdi, &var_118, rbx_2.d), &var_288)
                    
                    uint32_t var_128[0x4]
                    
                    if (rbx_2.d s>= *(rdi + 0x190))
                        var_128 = *(*(rdi + 0x1b8) + rbx_2 * 0x30)
                    else
                        sub_140ae1ba0(sub_1423133d0(rdi, &var_118, rbx_2.d), &var_128)
                    
                    float (* rax_33)[0x4]
                    rax_33, zmm10 = sub_140ae0e60(&var_268, &var_128, &var_288, zmm13)
                    zmm6 = data_143cdfe30
                    float* rdx_27 = var_1d0
                    float zmm5_2[0x4] = *rax_33
                    float temp0_33[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
                    var_1d0 = &rdx_27[sx.q(var_1dc)]
                    float temp0_35[0x4] =
                        _mm_add_ps(temp0_33, _mm_shuffle_ps(temp0_33, temp0_33, 0x4e))
                    float temp0_37[0x4] =
                        _mm_add_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0x39), temp0_35)
                    float temp0_38[0x4] = _mm_rsqrt_ps(temp0_37)
                    zmm3 = _mm_mul_ps(temp0_37, zmm6)
                    float temp0_44[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_38, temp0_38), zmm3)), 
                            temp0_38), 
                        temp0_38)
                    float temp0_47[0x4] =
                        _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_44, temp0_44), zmm3))
                    zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_37, 2)
                    zmm6 = _mm_and_ps(
                        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_47, temp0_44), temp0_44), zmm5_2)
                            ^ data_143cdfe20, 
                        zmm0) ^ data_143cdfe20
                    var_288[0] = zmm6[0]
                    zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                    var_288[1] = zmm0[0]
                    float temp0_55[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                    var_288[2] = temp0_55[0]
                    float temp0_56[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    var_288[3] = temp0_56[0]
                    *rdx_27 = zmm6[0]
                    uint32_t* rdx_28 = var_1b8
                    var_1b8 = &rdx_28[sx.q(var_1c4)]
                    *rdx_28 = zmm0[0]
                    void* rdx_29 = var_1a0
                    var_1a0 = rdx_29 + (sx.q(var_1ac) << 2)
                    *rdx_29 = temp0_55[0]
                    float* rdx_30 = var_188
                    result = sx.q(result_2)
                    var_188 = &rdx_30[result]
                    *rdx_30 = temp0_56[0]
                
                zmm9 = var_2c0_1
                zmm8 = var_2b8_1:4.d
                zmm7 = var_2b8_1.d
                goto label_1406fc5b1
            
            int64_t rax_21 = *(r11_2 + r15 + 0x1c8)
            int64_t rcx_18 = sx.q(result.d) * 6
            zmm7 = *(rax_21 + (rcx_18 << 3) + 0x10)
            zmm1 = *(rax_21 + (rcx_18 << 3))
            result = *(rdx_13 + r15 + 0x1c8)
            uint32_t var_f8_1[0x4] = *(rax_21 + (rcx_18 << 3) + 0x20)
            zmm8 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm9 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            zmm10 = *(result + (rcx_18 << 3) + 0x10)
            zmm0 = *(result + (rcx_18 << 3) + 0x20)
            zmm2 = *(result + (rcx_18 << 3))
            zmm11 = _mm_shuffle_ps(zmm10, zmm10, 0x55)
            zmm12 = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
            uint32_t var_f8_2[0x4] = zmm0
            
            if (var_137 != 0)
                float var_278[0x4] = zmm1
                var_238 = zmm2
                float var_d8[0x4]
                float (* rax_22)[0x4]
                rax_22, zmm7, zmm8, zmm9, zmm10 = sub_140ae0e60(&var_d8, &var_238, &var_278, zmm13)
                zmm6 = data_143cdfe30
                float* rdx_15 = var_1d0
                float zmm5_1[0x4] = *rax_22
                float temp0_5[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                var_1d0 = &rdx_15[sx.q(var_1dc)]
                float temp0_7[0x4] = _mm_add_ps(temp0_5, _mm_shuffle_ps(temp0_5, temp0_5, 0x4e))
                float temp0_9[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0x39), temp0_7)
                float temp0_10[0x4] = _mm_rsqrt_ps(temp0_9)
                zmm3 = _mm_mul_ps(temp0_9, zmm6)
                float temp0_16[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_10, temp0_10), zmm3)), 
                        temp0_10), 
                    temp0_10)
                float temp0_19[0x4] =
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_16, temp0_16), zmm3))
                zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_9, 2)
                zmm6 = _mm_and_ps(
                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_19, temp0_16), temp0_16), zmm5_1)
                        ^ data_143cdfe20, 
                    zmm0) ^ data_143cdfe20
                var_278[0] = zmm6[0]
                zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                var_278[1] = zmm0[0]
                float temp0_27[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                var_278[2] = temp0_27[0]
                float temp0_28[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                var_278[3] = temp0_28[0]
                *rdx_15 = zmm6[0]
                void* rdx_16 = var_1b8
                var_1b8 = rdx_16 + (sx.q(var_1c4) << 2)
                *rdx_16 = zmm0[0]
                float* rdx_17 = var_1a0
                var_1a0 = &rdx_17[sx.q(var_1ac)]
                *rdx_17 = temp0_27[0]
                void* rdx_18 = var_188
                result = sx.q(result_2)
                var_188 = rdx_18 + (result << 2)
                *rdx_18 = temp0_28[0]
            label_1406fc5b1:
                r9_2 = var_2a0_1
                r10_2 = var_298_1
                r11_2 = var_290
        zmm7[0] = zmm7[0] - zmm10[0]
        zmm8[0] = zmm8[0] - zmm11[0]
        zmm0 = zmm10
        zmm9[0] = zmm9[0] - zmm12[0]
        zmm7[0] = zmm7[0] f* zmm13[0]
        zmm8[0] = zmm8[0] f* zmm13[0]
        zmm9[0] = zmm9[0] f* zmm13[0]
        zmm0[0] = zmm0[0] f+ zmm7[0]
        zmm11[0] = zmm11[0] + zmm8[0]
        zmm12[0] = zmm12[0] + zmm9[0]
        char var_138
        
        if (var_138 != 0)
            void* var_218
            uint32_t* rdx_35 = var_218
            int32_t var_224
            var_218 = &rdx_35[sx.q(var_224)]
            *rdx_35 = zmm0[0]
            void* var_200
            float* rdx_36 = var_200
            int32_t var_20c
            var_200 = &rdx_36[sx.q(var_20c)]
            *rdx_36 = zmm11[0]
            void* var_1e8
            float* rdx_37 = var_1e8
            int32_t result_1
            result = sx.q(result_1)
            var_1e8 = &rdx_37[result]
            *rdx_37 = zmm12[0]
        
        char var_136
        
        if (var_136 != 0)
            void* var_170
            uint32_t* rdx_38 = var_170
            zmm0[0] = zmm0[0] f- zmm10[0]
            zmm11[0] = zmm11[0] - zmm11[0]
            zmm12[0] = zmm12[0] - zmm12[0]
            zmm0[0] = zmm0[0] f* zmm14.d
            int32_t var_17c
            var_170 = &rdx_38[sx.q(var_17c)]
            zmm11[0] = zmm11[0] f* zmm14.d
            *rdx_38 = zmm0[0]
            void* var_158
            float* rdx_39 = var_158
            zmm12[0] = zmm12[0] f* zmm14.d
            int32_t var_164
            var_158 = &rdx_39[sx.q(var_164)]
            *rdx_39 = zmm11[0]
            void* var_140
            float* rdx_40 = var_140
            int32_t result_3
            result = sx.q(result_3)
            var_140 = &rdx_40[result]
            *rdx_40 = zmm12[0]
        
        rcx_16 = arg_10
        i_2 += 1
        rdx_13 = var_248
    while (i_2 s< *(arg2 + 0x40))

return result
