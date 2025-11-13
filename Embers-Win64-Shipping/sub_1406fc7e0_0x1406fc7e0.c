// 函数: sub_1406fc7e0
// 地址: 0x1406fc7e0
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
int32_t* r13 = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(rdx) << 3)))) << 3))
*(arg2 + 0x10) = &rax[2]
int32_t* r15_1

if ((not.b(rsi_1) & 1) == 0)
    r15_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
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
    
    r15_1 = sx.q(i_1) + *(r11 + (sx.q(r9) << 3))

void var_1d8
sub_1407422f0(&var_1d8, arg2)
uint32_t var_1f8[0x4]
char var_e7
float zmm6[0x4]

if (var_e7 != 0)
    zmm6 = sub_140ae1ba0(&r13[0x34], &var_1f8)
    
    if (var_e7 != 0)
        zmm6 = sub_140ae1ba0(&r13[0x54], &var_1f8)

void* rax_9 = sub_140d3c6e0(r13)

if (rax_9 != 0)
    void* rax_10 = sub_142591550()
    void* rcx_7 = *(rax_9 + 0x10)
    int64_t rdx_6 = sx.q(*(rax_10 + 0x38))
    
    if (rdx_6.d s<= *(rcx_7 + 0x38) && *(*(rcx_7 + 0x30) + (rdx_6 << 3)) == rax_10 + 0x30
            && *(rax_9 + 0x430) != 0)
        sub_141f66050(rax_9, r13[0x1a])

if (sub_140d3c6e0(r13) != 0)
    sub_142591550()

void* rdi = *(r13 + 0x58)

if (rdi != 0 && r13[0x86].b != 0)
    void* rax_13 = sub_140d3c6e0(r13)
    
    if (rax_13 != 0)
        void* rax_14 = sub_142591550()
        void* rcx_12 = *(rax_13 + 0x10)
        int64_t rdx_8 = sx.q(*(rax_14 + 0x38))
        
        if (rdx_8.d s<= *(rcx_12 + 0x38) && *(*(rcx_12 + 0x30) + (rdx_8 << 3)) == rax_14 + 0x30
                && *(rax_13 + 0x430) != 0)
            sub_141f66050(rax_13, r13[0x1a])

int32_t rcx_15

if (rdi == 0 || rdi == 0)
    rcx_15 = 0
else
    rcx_15 = *(rdi + 0x1b0)

uint64_t result = zx.q(r13[0x71])
int32_t r9_2 = r13[0x6e] + rcx_15
int128_t zmm10
zmm10.d = 1f f/ r13[0x64]
uint64_t r10_2 = zx.q(result.d) << 4
int32_t arg_18 = rcx_15
uint64_t r8_3 = (zx.q((result - 1).d) & 1) << 4
int32_t arg_10 = r9_2
uint64_t var_1e8 = r10_2
uint64_t arg_20 = r8_3

if (*(arg2 + 0x40) s> 0)
    float zmm7[0x4] = arg_10
    float zmm8[0x4] = arg_10
    float zmm9[0x4] = arg_10
    uint64_t rdx_11 = zx.q(rsi_1) << 2
    uint64_t var_d8_1 = rdx_11
    float var_48_1[0x4] = zmm6
    
    do
        int64_t rbx_2 = sx.q(*r15_1)
        r15_1 += rdx_11
        result = zx.q(rbx_2.d - rcx_15)
        char var_e6
        float zmm4[0x4]
        float zmm5[0x4]
        int32_t var_18c
        void* var_180
        int32_t var_174
        void* var_168
        int32_t var_15c
        void* var_150
        int32_t result_3
        void* var_138
        float zmm0[0x4]
        float zmm1[0x4]
        float zmm2[0x4]
        float zmm3[0x4]
        
        if (rbx_2.d s< 0 || rbx_2.d s>= r9_2)
            zmm0 = data_143dbb1f8
            zmm1 = data_143dbb1fc
            zmm4 = zmm0
            zmm2 = data_143dbb200
            zmm5 = zmm1
            zmm6 = zmm2
            
            if (var_e6 != 0)
                zmm9 = zmm0
                zmm7 = zmm1
                zmm8 = zmm2
            
            if (var_e7 != 0)
                zmm0 = data_14399f720.d
                zmm1 = data_14399f720:4.d
                zmm2 = data_14399f720:8.d
                zmm3 = data_14399f720:0xc.d
            label_1406fcd66:
                void* rdx_20 = var_180
                var_180 = rdx_20 + (sx.q(var_18c) << 2)
                *rdx_20 = zmm0[0]
                void* rdx_21 = var_168
                var_168 = rdx_21 + (sx.q(var_174) << 2)
                *rdx_21 = zmm1[0]
                void* rdx_22 = var_150
                var_150 = rdx_22 + (sx.q(var_15c) << 2)
                *rdx_22 = zmm2[0]
                void* rdx_23 = var_138
                result = sx.q(result_3)
                var_138 = rdx_23 + (result << 2)
                *rdx_23 = zmm3[0]
        else
            float var_c8[0x4]
            
            if (rbx_2.d s< rcx_15)
                float var_218_1
                float result_1
                
                if (rbx_2.d s>= *(rdi + 0x190))
                    zmm1 = *(*(rdi + 0x1b8) + rbx_2 * 0x30 + 0x10)
                    var_218_1 = zmm1[0]
                    float temp0_8[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    result_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                    float var_214_2 = temp0_8[0]
                else
                    int128_t* rax_22 = sub_1423133d0(rdi, &var_c8, rbx_2.d)
                    var_218_1 = rax_22[3].d[0]
                    result_1 = (*(rax_22 + 0x38))[0]
                    float var_214_1 = (*(rax_22 + 0x34))[0]
                
                result = zx.q(result_1)
                int64_t var_208_1 = var_218_1.q
                int32_t var_200_1 = result.d
                
                if (var_e6 != 0)
                    if (rbx_2.d s>= *(rdi + 0x190))
                        result = *(rdi + 0x1b8)
                        zmm0 = *(result + rbx_2 * 0x30 + 0x10)
                        zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                        zmm2 = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
                    else
                        result = sub_1423133d0(rdi, &var_c8, rbx_2.d)
                        zmm0 = *(result + 0x30)
                        zmm1 = *(result + 0x34)
                        zmm2 = *(result + 0x38)
                    
                    zmm9 = zmm0
                    zmm7 = zmm1
                    zmm8 = zmm2
                
                if (var_e7 != 0)
                    if (rbx_2.d s>= *(rdi + 0x190))
                        var_1f8 = *(*(rdi + 0x1b8) + rbx_2 * 0x30)
                    else
                        sub_140ae1ba0(sub_1423133d0(rdi, &var_c8, rbx_2.d), &var_1f8)
                    
                    zmm1 = var_1f8[1]
                    zmm2 = var_1f8[2]
                    zmm3 = var_1f8[3]
                    zmm0 = var_1f8[0]
                    zmm6 = var_200_1
                    zmm5 = var_208_1:4.d
                    zmm4 = var_208_1.d
                    r8_3 = arg_20
                    r9_2 = arg_10
                    r10_2 = var_1e8
                    goto label_1406fcd66
                
                zmm6 = var_200_1
                zmm5 = var_208_1:4.d
                zmm4 = var_208_1.d
                r8_3 = arg_20
                r9_2 = arg_10
                r10_2 = var_1e8
            else
                int64_t rax_18 = *(r10_2 + r13 + 0x1c8)
                int64_t rcx_17 = sx.q(result.d) * 6
                zmm4 = *(rax_18 + (rcx_17 << 3) + 0x10)
                zmm3 = *(rax_18 + (rcx_17 << 3))
                result = *(r8_3 + r13 + 0x1c8)
                float var_a8_1[0x4] = *(rax_18 + (rcx_17 << 3) + 0x20)
                zmm5 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                zmm6 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
                zmm1 = *(result + (rcx_17 << 3) + 0x10)
                var_c8 = *(result + (rcx_17 << 3))
                float var_a8_2[0x4] = *(result + (rcx_17 << 3) + 0x20)
                
                if (var_e6 != 0)
                    zmm7 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    zmm9 = zmm1
                    zmm8 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                
                if (var_e7 != 0)
                    float* rdx_12 = var_180
                    float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                    float temp0_6[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                    float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                    var_180 = &rdx_12[sx.q(var_18c)]
                    *rdx_12 = zmm3[0]
                    float* rdx_13 = var_168
                    var_168 = &rdx_13[sx.q(var_174)]
                    *rdx_13 = temp0_5[0]
                    float* rdx_14 = var_150
                    var_150 = &rdx_14[sx.q(var_15c)]
                    *rdx_14 = temp0_6[0]
                    float* rdx_15 = var_138
                    result = sx.q(result_3)
                    var_138 = &rdx_15[result]
                    *rdx_15 = temp0_7[0]
        
        if (var_e6 != 0)
            zmm5[0] = zmm5[0] - zmm7[0]
            zmm6[0] = zmm6[0] - zmm8[0]
            zmm4[0] = zmm4[0] - zmm9[0]
            zmm7[0] = zmm7[0] + zmm5[0]
            zmm8[0] = zmm8[0] + zmm6[0]
            zmm4[0] = zmm4[0] + zmm9[0]
            zmm5 = zmm7
            zmm6 = zmm8
        
        char var_e8
        
        if (var_e8 != 0)
            void* var_1c8
            float* rdx_24 = var_1c8
            int32_t var_1d4
            var_1c8 = &rdx_24[sx.q(var_1d4)]
            *rdx_24 = zmm4[0]
            void* var_1b0
            float* rdx_25 = var_1b0
            int32_t var_1bc
            var_1b0 = &rdx_25[sx.q(var_1bc)]
            *rdx_25 = zmm5[0]
            void* var_198
            float* rdx_26 = var_198
            int32_t result_2
            result = sx.q(result_2)
            var_198 = &rdx_26[result]
            *rdx_26 = zmm6[0]
        
        if (var_e6 != 0)
            float* var_120
            float* rdx_27 = var_120
            zmm4[0] = zmm4[0] - zmm9[0]
            zmm5[0] = zmm5[0] - zmm7[0]
            zmm6[0] = zmm6[0] - zmm8[0]
            zmm4[0] = zmm4[0] f* zmm10.d
            int32_t var_12c
            var_120 = &rdx_27[sx.q(var_12c)]
            zmm5[0] = zmm5[0] f* zmm10.d
            *rdx_27 = zmm4[0]
            void* var_108
            float* rdx_28 = var_108
            zmm6[0] = zmm6[0] f* zmm10.d
            int32_t var_114
            var_108 = &rdx_28[sx.q(var_114)]
            *rdx_28 = zmm5[0]
            void* var_f0
            float* rdx_29 = var_f0
            int32_t result_4
            result = sx.q(result_4)
            var_f0 = &rdx_29[result]
            *rdx_29 = zmm6[0]
        
        rcx_15 = arg_18
        i_2 += 1
        rdx_11 = var_d8_1
    while (i_2 s< *(arg2 + 0x40))

return result
