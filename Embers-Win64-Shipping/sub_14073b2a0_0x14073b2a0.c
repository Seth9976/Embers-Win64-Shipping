// 函数: sub_14073b2a0
// 地址: 0x14073b2a0
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
uint8_t r12_1 = (rcx_2 u>> 0xf).b
int32_t i_1 = rcx_2 & 0x7fff
int32_t* rsi = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(rdx) << 3)))) << 3))
*(arg2 + 0x10) = &rax[2]
int32_t* rdi_1

if ((not.b(r12_1) & 1) == 0)
    rdi_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
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
    
    rdi_1 = sx.q(i_1) + *(r11 + (sx.q(r9) << 3))

void var_238
sub_140742c10(&var_238, arg2)

if (sub_140d3c6e0(rsi) != 0)
    sub_142591550()

void* rax_10 = *(rsi + 0x58)
void* r13 = nullptr
void* rdx_4 = nullptr

if (rax_10 != 0)
    r13 = *(**(rax_10 + 0x58) + (sx.q(rsi[0x1a]) << 3))
    
    if (rsi[0x86].b != 0)
        void* rax_13 = sub_140d3c6e0(rsi)
        void* rax_14
        void* rcx_7
        int64_t rdx_5
        
        if (rax_13 != 0)
            rax_14 = sub_142591550()
            rcx_7 = *(rax_13 + 0x10)
            rdx_5 = sx.q(*(rax_14 + 0x38))
        
        if (rax_13 == 0 || rdx_5.d s> *(rcx_7 + 0x38)
                || *(*(rcx_7 + 0x30) + (rdx_5 << 3)) != rax_14 + 0x30 || *(rax_13 + 0x430) == 0)
            rdx_4 = r13 + 0x138
        else
            rdx_4 = sub_141f66050(rax_13, rsi[0x1a])

void* r15_2 = *(rsi + 0x70)
int32_t result = (*(rsi + 0x68)).d
int32_t r11_1

if (rdx_4 == 0)
    r11_1 = 0
else
    r11_1 = *(r13 + 0xec)

int128_t zmm12
zmm12.d = 1f f/ rsi[0x64]
char var_ce
char var_cd
char var_cc

if (var_ce != 0 || var_cd != 0 || var_cc != 0)
    r13.b = 1
else
    r13.b = 0

if (*(arg2 + 0x40) s> 0)
    uint128_t zmm6
    uint128_t var_38_1 = zmm6
    uint128_t zmm7
    uint128_t var_48_1 = zmm7
    uint128_t zmm8
    uint128_t var_58_1 = zmm8
    uint128_t zmm9
    uint128_t var_68_1 = zmm9
    int128_t zmm10
    int128_t var_78_1 = zmm10
    int128_t zmm11
    int128_t var_88_1 = zmm11
    
    do
        int32_t* rcx_10 = rdi_1
        int32_t r9_1 = r11_1
        rdi_1 = &rdi_1[zx.q(r12_1)]
        
        if (*rcx_10 s<= r11_1)
            r9_1 = *rcx_10
        
        char var_d0
        char var_cf
        uint128_t zmm1
        uint128_t zmm2
        uint128_t zmm3
        uint128_t zmm4
        
        if (var_d0 != 0 || var_cf != 0)
            void* var_228
            int32_t* r8_1 = var_228
            int64_t rsi_1 = sx.q(result) * 0x38
            int64_t r10_1 = sx.q(r9_1) * 3
            int64_t rcx_16 = *((sx.q(*(r15_2 + 0x34)) << 4) + *(r15_2 + 0x80) + rsi_1 + 8)
            zmm2 = zx.o(*(rcx_16 + (r10_1 << 2)))
            zmm4 = *(rcx_16 + (r10_1 << 2) + 8)
            zmm3 = zmm2.q:4.d
            int32_t var_234
            var_228 = &r8_1[sx.q(var_234)]
            *r8_1 = zmm2.d
            void* var_210
            int32_t* r8_2 = var_210
            int32_t var_21c
            var_210 = &r8_2[sx.q(var_21c)]
            *r8_2 = zmm3.d
            void* var_1f8
            int32_t* r8_3 = var_1f8
            int32_t var_204
            var_1f8 = &r8_3[sx.q(var_204)]
            *r8_3 = zmm4.d
            
            if (var_cf != 0)
                void* var_1e0
                int32_t* r8_4 = var_1e0
                int64_t rcx_25 = *(((sx.q(*(r15_2 + 0x34)) ^ 1) << 4) + *(r15_2 + 0x80) + rsi_1 + 8)
                zmm1 = zx.o(*(rcx_25 + (r10_1 << 2)))
                zmm2.d = zmm2.d f- zmm1.d
                zmm4.d = zmm4.d f- *(rcx_25 + (r10_1 << 2) + 8)
                zmm2.d = zmm2.d f* zmm12.d
                zmm3.d = zmm3.d f- _mm_shuffle_ps(zmm1, zmm1, 0x55).d
                int32_t var_1ec
                var_1e0 = &r8_4[sx.q(var_1ec)]
                zmm4.d = zmm4.d f* zmm12.d
                *r8_4 = zmm2.d
                void* var_1c8
                int32_t* r8_5 = var_1c8
                zmm3.d = zmm3.d f* zmm12.d
                int32_t var_1d4
                var_1c8 = &r8_5[sx.q(var_1d4)]
                *r8_5 = zmm3.d
                void* var_1b0
                int32_t* r8_6 = var_1b0
                int32_t var_1bc
                var_1b0 = &r8_6[sx.q(var_1bc)]
                *r8_6 = zmm4.d
        
        if (r13.b != 0)
            int32_t r8_7 = r9_1 * 2
            int64_t r9_2 = *(sx.q(result) * 0x38 + *(r15_2 + 0x80) + 0x28)
            int64_t rdx_14 = sx.q(r8_7) * 3
            zmm1 = zx.o(*(r9_2 + (rdx_14 << 2)))
            zmm6 = *(r9_2 + (rdx_14 << 2) + 8)
            zmm7 = zmm1.d
            zmm2 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            int64_t rdx_15 = (sx.q(r8_7) + 1) * 3
            int32_t rcx_36 = *(r9_2 + (rdx_15 << 2) + 8)
            uint64_t var_278_1 = *(r9_2 + (rdx_15 << 2))
            
            if (var_ce != 0)
                void* var_108
                int32_t* r8_8 = var_108
                int32_t var_114
                var_108 = &r8_8[sx.q(var_114)]
                *r8_8 = zmm7.d
                void* var_f0
                int32_t* r8_9 = var_f0
                int32_t var_fc
                var_f0 = &r8_9[sx.q(var_fc)]
                *r8_9 = zmm2.d
                void* var_d8
                int32_t* r8_10 = var_d8
                int32_t var_e4
                var_d8 = &r8_10[sx.q(var_e4)]
                *r8_10 = zmm6.d
            
            zmm9 = rcx_36
            zmm10 = var_278_1:4.d
            zmm11 = var_278_1.d
            
            if (var_cd != 0)
                zmm8.d = zmm9.d f* zmm2.d
                uint128_t zmm0
                zmm0.d = zmm6.d f* zmm10.d
                zmm2.d = zmm2.d f* zmm11.d
                zmm8.d = zmm8.d f- zmm0.d
                zmm6.d = zmm6.d f* zmm11.d
                zmm0.d = zmm9.d f* zmm7.d
                zmm7.d = zmm7.d f* zmm10.d
                zmm6.d = zmm6.d f- zmm0.d
                zmm0.d = zmm8.d f* zmm8.d
                zmm7.d = zmm7.d f- zmm2.d
                zmm2.d = zmm6.d f* zmm6.d
                zmm1.d = zmm7.d f* zmm7.d
                zmm2.d = zmm2.d f+ zmm0.d
                zmm2.d = zmm2.d f+ zmm1.d
                
                if (not(zmm2.d f== 1f))
                    if (zmm2.d f>= 9.99999994e-09f)
                        zmm4.d = 0x3f000000
                        uint128_t zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                        zmm3.d = zmm2.d f* 0.5f
                        zmm0.d = zmm5.d f* zmm5.d
                        zmm1.d = zmm3.d f* zmm0.d
                        zmm2.d = zmm4.d f- zmm1.d
                        zmm0.d = zmm5.d f* zmm2.d
                        zmm5.d = zmm5.d f+ zmm0.d
                        zmm1.d = zmm5.d f* zmm5.d
                        zmm3.d = zmm3.d f* zmm1.d
                        zmm4.d = 0.5f f- zmm3.d
                        zmm0.d = zmm5.d f* zmm4.d
                        zmm5.d = zmm5.d f+ zmm0.d
                        zmm8.d = zmm8.d f* zmm5.d
                        zmm6.d = zmm6.d f* zmm5.d
                        zmm7.d = zmm7.d f* zmm5.d
                    else
                        zmm8 = data_143dbb1f8
                        zmm6 = data_143dbb1fc
                        zmm7 = data_143dbb200
                
                void* var_150
                int32_t* r8_11 = var_150
                int32_t var_15c
                var_150 = &r8_11[sx.q(var_15c)]
                *r8_11 = zmm8.d
                void* var_138
                int32_t* r8_12 = var_138
                int32_t var_144
                var_138 = &r8_12[sx.q(var_144)]
                *r8_12 = zmm6.d
                void* var_120
                int32_t* r8_13 = var_120
                int32_t var_12c
                var_120 = &r8_13[sx.q(var_12c)]
                *r8_13 = zmm7.d
            
            if (var_cc != 0)
                void* var_198
                int32_t* r8_14 = var_198
                int32_t var_1a4
                var_198 = &r8_14[sx.q(var_1a4)]
                *r8_14 = zmm11.d
                void* var_180
                int32_t* r8_15 = var_180
                int32_t var_18c
                var_180 = &r8_15[sx.q(var_18c)]
                *r8_15 = zmm10.d
                void* var_168
                int32_t* r8_16 = var_168
                int32_t var_174
                var_168 = &r8_16[sx.q(var_174)]
                *r8_16 = zmm9.d
        
        i_2 += 1
    while (i_2 s< *(arg2 + 0x40))

return result
