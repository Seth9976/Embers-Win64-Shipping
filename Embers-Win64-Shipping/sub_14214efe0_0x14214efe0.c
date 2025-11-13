// 函数: sub_14214efe0
// 地址: 0x14214efe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3b8
int64_t rax_1 = __security_cookie ^ &var_3b8
int32_t var_370 = 0xffffffff
void* rdi = nullptr
uint64_t var_380 = 0
int32_t var_378 = 0
void* rsi = arg2
sub_140d3cc80(sub_14254f510(), &var_380, 1, 0x10, 0)
int32_t r8_1 = var_378
int32_t i = var_370 + 1
uint64_t rdx_1 = var_380
int32_t i_5 = i

if (i s< r8_1)
    while (*(rdx_1 + (sx.q(i) << 3)) == 0)
        int32_t i_6 = i + 1
        i_5 = i_6
        i = i_6
        
        if (i_6 s>= r8_1)
            break

while (i s>= 0)
    if (i s>= r8_1)
        break
    
    void* rcx_2 = *(rdx_1 + (sx.q(i) << 3))
    int32_t rcx_3
    rcx_3.b = *(rcx_2 + 0x194) == 0
    
    if ((rcx_3.b & sub_140b5b8a0(*(rcx_2 + 0x190), 0x11a)) != 0)
        int64_t* rcx_5 = *(var_380 + (sx.q(i_5) << 3))
        
        if ((*(*rcx_5 + 0x368))(rcx_5) != 0)
            rdx_1 = var_380
            rdi = *(rdx_1 + (sx.q(i_5) << 3))
            break
    
    r8_1 = var_378
    i = i_5 + 1
    rdx_1 = var_380
    i_5 = i
    
    if (i s< r8_1)
        while (*(rdx_1 + (sx.q(i) << 3)) == 0)
            int32_t i_7 = i + 1
            i_5 = i_7
            i = i_7
            
            if (i_7 s>= r8_1)
                break

if (rdx_1 != 0)
    sub_140a74f90(rdx_1)

int64_t var_278 = 0
int32_t var_270 = 0
int32_t var_24c = 0x80
int64_t var_268
__builtin_memset(&var_268, 0, 0x1c)
int32_t var_248 = 0xffffffff
int32_t var_244 = 0
int64_t var_238 = 0
int32_t var_230 = 0
int64_t var_2c8 = 0
int32_t var_2c0 = 0
int32_t var_29c = 0x80
int64_t var_2b8
__builtin_memset(&var_2b8, 0, 0x1c)
int32_t var_298 = 0xffffffff
int32_t var_294 = 0
int64_t var_288 = 0
int32_t var_280 = 0
int64_t var_228 = 0
int32_t var_220 = 0
int32_t var_1fc = 0x80
int64_t var_218
__builtin_memset(&var_218, 0, 0x1c)
int32_t var_1f8 = 0xffffffff
int32_t var_1f4 = 0
void* var_1e8 = nullptr
int32_t var_1e0 = 0
int64_t var_188 = 0
int32_t var_180 = 0
int32_t var_15c = 0x80
int64_t var_178
__builtin_memset(&var_178, 0, 0x1c)
int32_t var_158 = 0xffffffff
int32_t var_154 = 0
void* var_148 = nullptr
int32_t var_140 = 0
int64_t var_138 = 0
int32_t var_130 = 0
int32_t var_10c = 0x80
int64_t var_128
__builtin_memset(&var_128, 0, 0x1c)
int32_t var_108 = 0xffffffff
int32_t var_104 = 0
void* var_f8 = nullptr
int32_t var_f0 = 0
int64_t var_1d8 = 0
int32_t var_1d0 = 0
int32_t var_1ac = 0x80
int64_t var_1c8
__builtin_memset(&var_1c8, 0, 0x1c)
int32_t var_1a8 = 0xffffffff
int32_t var_1a4 = 0
void* var_198 = nullptr
int32_t var_190 = 0

if (rdi != 0)
    rsi = *(rdi + 0x140)

if (rsi != 0)
    char*** var_358 = sub_142452380()
    void* var_350 = rsi
    int32_t var_e8 = 5
    char var_90_1 = 0
    void var_e0
    sub_142135a70(&var_e0, &var_350, &var_358)
    sub_1406277a0(&var_e8)
    char var_388
    char** var_348
    char* var_340
    char i_1
    double zmm2_1[0x2]
    
    if (i_1 == 0)
        char rdi_1 = var_388
        int32_t var_384
        double zmm6[0x2] = var_384
        float zmm7[0x4] = var_384
        uint128_t zmm8 = var_384
        uint128_t zmm9 = var_384
        float zmm10[0x4] = var_384
        double zmm11[0x2] = var_384
        
        do
            void* var_b8
            var_350 = var_b8
            
            if ((*(var_b8 + 0x5b) & 1) != 0)
                uint64_t r9_1 = zx.q(*(var_b8 + 0xf1))
                int32_t var_360 = r9_1.d
                int32_t* rax_16
                
                if (var_220 == var_1f4)
                labelid_83:
                    rax_16 = sub_140caa4f0(&var_228, r9_1.d, &var_360)
                else
                    void var_1f0
                    void* rcx_10 = &var_1f0
                    
                    if (var_1e8 != 0)
                        rcx_10 = var_1e8
                    
                    int32_t rax_15 = *(rcx_10 + ((zx.q(var_1e0 - 1) & r9_1) << 2))
                    
                    if (rax_15 == 0xffffffff)
                    label_14214f434:
                        rax_16 = sub_140caa4f0(&var_228, r9_1.d, &var_360)
                    else
                        int64_t rdx_6 = var_228
                        int64_t rcx_12
                        
                        while (true)
                            rcx_12 = sx.q(rax_15) * 2
                            
                            if (*(rdx_6 + (rcx_12 << 3)) == r9_1.d)
                                break
                            
                            rax_15 = *(rdx_6 + (rcx_12 << 3) + 8)
                            
                            if (rax_15 == 0xffffffff)
                                goto label_14214f434_2
                        
                        if (rax_15 == 0xffffffff)
                        label_14214f434_1:
                            rax_16 = sub_140caa4f0(&var_228, r9_1.d, &var_360)
                        else
                            void* rax_19 = rdx_6 + (rcx_12 << 3)
                            
                            if (rax_19 == 0)
                            label_14214f434_2:
                                rax_16 = sub_140caa4f0(&var_228, r9_1.d, &var_360)
                            else
                                rax_16 = rax_19 + 4
                
                *rax_16 += 1
                void* rcx_14 = var_350
                void* rax_17 = *(rcx_14 + 0x130)
                int32_t* rax_18
                uint128_t zmm0_1
                float zmm1_1[0x4]
                
                if (rax_17 == 0)
                    var_378 = data_143dbb200
                    rax_18 = &var_380
                    var_380 = data_143dbb1f8.q
                else
                    zmm1_1 = *(rax_17 + 0x1d0)
                    float var_2d8
                    rax_18 = &var_2d8
                    var_2d8 = zmm1_1[0]
                    zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                    float var_2d0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                    int32_t var_2d4_1 = zmm0_1.d
                
                int32_t rax_21 = rax_18[2]
                uint64_t var_310_1 = *rax_18
                
                if (rdi_1 == 0)
                    zmm8 = var_310_1.d
                    rdi_1 = 1
                    zmm7 = var_310_1:4.d
                    zmm9 = zmm8
                    zmm6 = rax_21
                    zmm10 = zmm7
                    zmm11 = zmm6
                else
                    zmm0_1 = var_310_1.d
                    
                    if (not(zmm9.d f<= zmm0_1.d))
                        zmm9 = zmm0_1
                    
                    zmm1_1 = var_310_1:4.d
                    
                    if (not(zmm10[0] <= zmm1_1[0]))
                        zmm10 = zmm1_1
                    
                    zmm2_1 = rax_21
                    
                    if (not(zmm11[0].d f<= zmm2_1[0].d))
                        zmm11 = zmm2_1
                    
                    if (not(zmm8.d f>= zmm0_1.d))
                        zmm8 = zmm0_1
                    
                    if (not(zmm7[0] >= zmm1_1[0]))
                        zmm7 = zmm1_1
                    
                    if (not(zmm6[0].d f>= zmm2_1[0].d))
                        zmm6 = zmm2_1
                
                int64_t rcx_15 = *(rcx_14 + 0x10)
                var_360.q = rcx_15
                void* rax_23 = sub_1421366e0(&var_2c8, sub_140d3d5e0(rcx_15), &var_360)
                *rax_23 += 1
                int64_t j = var_360.q
                
                while (j != 0)
                    void* rax_25 = sub_1421366e0(&var_278, sub_140d3d5e0(j), &var_360)
                    *rax_25 += 1
                    j = *(var_360.q + 0x40)
                    var_360.q = j
                
                int32_t rax_27 = rand()
                var_360.q = &var_350
                int32_t var_304
                sub_142135d80(&var_188, &var_304, &var_360, nullptr)
                *(var_188 + sx.q(var_304) * 0x18 + 8) = rax_27
                sub_140d3a3a0(&var_348, var_350)
                *sub_142135ae0(&var_138, &var_348) = rand()
                int32_t rax_30 = rand()
                void* rdx_14 = var_350
                var_358.d = 0xffffffff
                var_358:4.d = 0
                
                if (rdx_14 != 0)
                    sub_140d3a3a0(&var_340, rdx_14)
                    var_358 = var_340
                
                var_360.q = &var_358
                sub_142135bf0(&var_1d8, &var_384, &var_360, nullptr)
                *(var_1d8 + sx.q(var_384) * 0x14 + 8) = rax_30
            
            sub_1406277a0(&var_e8)
        while (i_1 == 0)
    
    sub_141fa5d20(&var_e0)
    var_340 = &var_388
    var_348 = &var_340
    
    if (var_270 - var_244 s> 0)
        sub_1407e8ed0(&var_278)
        char r8_8 = var_388
        int64_t rcx_31 = var_278
        var_358 = &var_348
        sub_1407dbbd0(rcx_31, var_270 - var_244, r8_8)
    
    sub_1405c0420(&var_278)
    var_340 = &var_388
    var_348 = &var_340
    
    if (var_2c0 - var_294 s> 0)
        sub_1407e8ed0(&var_2c8)
        char r8_9 = var_388
        int64_t rcx_34 = var_2c8
        var_358 = &var_348
        sub_1407dbbd0(rcx_34, var_2c0 - var_294, r8_9)
    
    sub_1405c0420(&var_2c8)
    int32_t var_250
    int32_t r8_10 = var_250
    int64_t* var_378_1 = &var_268
    var_380.d = 0
    var_380:4.d = 1
    int32_t var_370_1 = 0xffffffff
    int64_t var_36c_1 = 0
    
    if (r8_10 != 0)
        sub_14059bdd0(&var_380)
        r8_10 = var_250
    
    zmm2_1 = var_370_1.o
    double var_2e8_1[0x2] = zmm2_1
    var_36c_1.d = r8_10
    int128_t var_2f8_1 = var_380.o
    double temp0_3[0x2] = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
    int128_t var_338 = (&var_278).o
    int128_t var_328_1 = var_2f8_1
    int64_t var_318_1 = temp0_3.q
    
    while (var_328_1:0xc.d != ((0xffffffff << (r8_10.b & 0x1f)).q u>> 0x20).d
            || var_328_1.q != &var_268 || var_338.q != &var_278)
        var_328_1:8.d &= not.d(var_338:0xc.d)
        sub_14059bdd0(&var_338:8)
    
    int32_t var_2a0
    int32_t r8_11 = var_2a0
    int64_t* var_378_2 = &var_2b8
    var_380.d = 0
    var_380:4.d = 1
    int32_t var_370_3 = 0xffffffff
    int64_t var_36c_2 = 0
    
    if (r8_11 != 0)
        sub_14059bdd0(&var_380)
        r8_11 = var_2a0
    
    zmm2_1 = var_370_3.o
    double var_2e8_2[0x2] = zmm2_1
    var_36c_2.d = r8_11
    int128_t var_2f8_2 = var_380.o
    double temp0_4[0x2] = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
    var_338 = (&var_2c8).o
    int128_t var_328_2 = var_2f8_2
    int64_t var_318_2 = temp0_4.q
    
    while (var_328_2:0xc.d != ((0xffffffff << (r8_11.b & 0x1f)).q u>> 0x20).d
            || var_328_2.q != &var_2b8 || var_338.q != &var_2c8)
        var_328_2:8.d &= not.d(var_338:0xc.d)
        sub_14059bdd0(&var_338:8)
    
    int32_t var_200
    int32_t rdx_22 = var_200
    int64_t* var_378_3 = &var_218
    var_380.d = 0
    var_380:4.d = 1
    int32_t var_370_5 = 0xffffffff
    int64_t var_36c_3 = 0
    
    if (rdx_22 != 0)
        sub_14059bdd0(&var_380)
        rdx_22 = var_200
    
    zmm2_1 = var_370_5.o
    int128_t var_2f8_3 = var_380.o
    var_36c_3.d = rdx_22
    double var_2e8_3[0x2] = zmm2_1
    double temp0_5[0x2] = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
    var_338 = (&var_228).o
    int128_t var_328_3 = var_2f8_3
    int64_t var_318_3 = temp0_5.q
    
    while (var_328_3:0xc.d != ((0xffffffff << (rdx_22.b & 0x1f)).q u>> 0x20).d
            || var_328_3.q != &var_218 || var_338.q != &var_228)
        var_328_3:8.d &= not.d(var_338:0xc.d)
        sub_14059bdd0(&var_338:8)
    
    sub_140b19e60()
    sub_140b1f700(&data_1439a8bd0, u"TSet: %i elements, %i hash slots", zx.q(var_180 - var_154))
    int32_t rax_43 = var_140
    int32_t rbx_8 = 0
    int32_t r14_1 = rax_43
    
    if (rax_43 s> 0)
        int64_t rdi_6 = 0
        
        while (true)
            void var_150
            void* rcx_48 = &var_150
            int32_t r9_3 = 0
            
            if (var_148 != 0)
                rcx_48 = var_148
            
            for (int32_t i_2 = *(rcx_48 + ((sx.q(rax_43 - 1) & rdi_6) << 2)); i_2 != 0xffffffff; 
                    i_2 = *(var_188 + sx.q(i_2) * 0x18 + 0x10))
                r9_3 += 1
            
            sub_140b1f700(&data_1439a8bd0, u"   Hash[%i] = %i", zx.q(rbx_8))
            rbx_8 += 1
            rdi_6 += 1
            
            if (rbx_8 s>= r14_1)
                break
            
            rax_43 = var_140
    
    sub_140b19e60()
    sub_140b1f700(&data_1439a8bd0, u"TSet: %i elements, %i hash slots", zx.q(var_130 - var_104))
    int32_t rax_47 = var_f0
    int32_t rbx_9 = 0
    int32_t r14_2 = rax_47
    
    if (rax_47 s> 0)
        int64_t rdi_7 = 0
        
        while (true)
            void var_100
            void* rcx_50 = &var_100
            int32_t r9_5 = 0
            
            if (var_f8 != 0)
                rcx_50 = var_f8
            
            for (int32_t i_3 = *(rcx_50 + ((sx.q(rax_47 - 1) & rdi_7) << 2)); i_3 != 0xffffffff; 
                    i_3 = *(var_138 + sx.q(i_3) * 0x14 + 0xc))
                r9_5 += 1
            
            sub_140b1f700(&data_1439a8bd0, u"   Hash[%i] = %i", zx.q(rbx_9))
            rbx_9 += 1
            rdi_7 += 1
            
            if (rbx_9 s>= r14_2)
                break
            
            rax_47 = var_f0
    
    sub_140b19e60()
    sub_140b1f700(&data_1439a8bd0, u"TSet: %i elements, %i hash slots", zx.q(var_1d0 - var_1a4))
    int32_t rax_51 = var_190
    int32_t rbx_10 = 0
    int32_t r14_3 = rax_51
    
    if (rax_51 s> 0)
        int64_t rdi_8 = 0
        
        while (true)
            void var_1a0
            void* rcx_52 = &var_1a0
            int32_t r9_7 = 0
            
            if (var_198 != 0)
                rcx_52 = var_198
            
            for (int32_t i_4 = *(rcx_52 + ((sx.q(rax_51 - 1) & rdi_8) << 2)); i_4 != 0xffffffff; 
                    i_4 = *(var_1d8 + sx.q(i_4) * 0x14 + 0xc))
                r9_7 += 1
            
            sub_140b1f700(&data_1439a8bd0, u"   Hash[%i] = %i", zx.q(rbx_10))
            rbx_10 += 1
            rdi_8 += 1
            
            if (rbx_10 s>= r14_3)
                break
            
            rax_51 = var_190

sub_1405ae200(&var_1d8)
sub_1405ae200(&var_138)
sub_1405ae080(&var_188)
sub_1405ae180(&var_228)
sub_1405ae080(&var_2c8)
void* result = sub_1405ae080(&var_278)
__security_check_cookie(rax_1 ^ &var_3b8)
return result
