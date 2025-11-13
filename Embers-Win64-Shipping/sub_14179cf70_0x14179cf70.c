// 函数: sub_14179cf70
// 地址: 0x14179cf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm13[0x4]
float var_c8[0x4] = zmm13
void* rbx = arg2
int64_t rax = sx.q(arg1[1].d)
float zmm14[0x4] = zx.o(0)
int32_t var_360 = 0
int64_t temp0 = _mm_unpacklo_ps(zx.o(0), 0)
int64_t var_368 = 0
int64_t r10 = rax * 3
int64_t r9 = *(*arg1 + 0x28)
int32_t var_360_1 = 0
*(r9 + (r10 << 2)) = temp0
*(r9 + (r10 << 2) + 8) = var_360
void* var_318
float (* rax_3)[0x4]
float zmm7[0x4]
float zmm8[0x4]
rax_3, zmm7, zmm8 = sub_140ada080(&var_318, &var_368)
int32_t* r10_1 = rbx + 0x10
int64_t r8 = sx.q(arg1[1].d)
int64_t i_4 = 0
float zmm2[0x4] = data_142d3f660
float zmm0_1[0x4] = *rax_3
uint64_t i
i.b = 0
int64_t rdx_1 = *(*arg1 + 0x68)
void* const var_358 = nullptr
float var_350 = 0f
int64_t var_348 = 0
*(rdx_1 + r8 * 0x10) = zmm0_1
int64_t rax_4 = sx.q(arg1[1].d)
float temp0_1[0x4] = _mm_unpacklo_ps(zx.o(0), 0)
int32_t var_360_2 = 0
float var_340 = 0f
int64_t rdx_2 = rax_4 * 3
int64_t var_338 = 0
float var_330 = 0f
char i_6 = 0
int64_t rcx_2 = *(*arg1 + 0x1b8)
int32_t var_360_3 = 0
int32_t var_27c = 1
*(rcx_2 + (rdx_2 << 2)) = temp0_1.q
*(rcx_2 + (rdx_2 << 2) + 8) = 0
int64_t rax_6 = sx.q(arg1[1].d)
float temp0_2[0x4] = _mm_unpacklo_ps(zx.o(0), 0)
int32_t* var_278 = r10_1
int64_t rdx_3 = rax_6 * 3
int64_t rcx_3 = *(*arg1 + 0x1d0)
*(rcx_3 + (rdx_3 << 2)) = temp0_2.q
zmm0_1 = var_358.o
*(rcx_3 + (rdx_3 << 2) + 8) = var_360_3
*(*(*arg1 + 0x2c0) + (sx.q(arg1[1].d) << 2)) = 0
int64_t rdx_6 = sx.q(arg1[1].d) << 6
int64_t rcx_5 = *(*arg1 + 0x290)
char arg_20 = 0
*(rdx_6 + rcx_5) = zmm0_1
*(rdx_6 + rcx_5 + 0x10) = var_348.o
*(rdx_6 + rcx_5 + 0x20) = var_338.o
*(rdx_6 + rcx_5 + 0x30) = zmm2
int32_t rcx_6 = 0
int32_t var_280 = 0
int32_t r13 = r10_1[6]
int32_t var_270 = 0xffffffff
int32_t r8_2 = 0
int64_t var_26c = 0

if (r13 != 0)
    int32_t* rax_11 = *(r10_1 + 0x10)
    int32_t* r9_1 = r10_1
    
    if (rax_11 != 0)
        r9_1 = rax_11
    
    int32_t temp0_3
    int32_t temp1_1
    temp0_3:temp1_1 = sx.q(r13 - 1)
    int32_t rdx_9 = *r9_1
    
    if (rdx_9 != 0)
    label_14179d174:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_1
        int32_t temp0_4
        temp0_4, rflags_1 = _bit_scan_reverse(rax_18)
        int32_t var_27c_1 = rax_18
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_4
        
        var_26c.d = r8_2 - rax_19 + 0x1f
        
        if (r8_2 - rax_19 + 0x1f s> r13)
            var_26c.d = r13
    else
        while (true)
            int64_t rdx_10 = sx.q(rcx_6)
            r8_2 += 0x20
            rcx_6 += 1
            var_26c:4.d = r8_2
            var_280 = rcx_6
            
            if (rdx_10.d s>= (temp1_1 + (temp0_3 & 0x1f)) s>> 5)
                break
            
            rdx_9 = r9_1[rdx_10 + 1]
            var_270 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_14179d174
        
        var_26c.d = r13

int32_t rdx_11 = *(rbx + 0x28)
var_318 = rbx
zmm2 = var_270.o
int32_t r9_2 = 0xffffffff << (rdx_11.b & 0x1f)
float var_310[0x4] = var_280.o
zmm0_1 = var_318.o
int32_t r8_5 = rdx_11 s>> 5
float var_300[0x4] = zmm2
var_310[2] = r9_2
int32_t r9_4 = rdx_11 & 0xffffffe0
int64_t var_288 = (_mm_unpackhi_pd(zmm2, zmm2[0].q)).q
var_310[3] = rdx_11
float var_2a8[0x4] = zmm0_1

if (rdx_11 != r13)
    int32_t* rax_21 = *(r10_1 + 0x10)
    int32_t* r11_1 = r10_1
    
    if (rax_21 != 0)
        r11_1 = rax_21
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r13 - 1)
    int32_t rdx_15 = r11_1[sx.q(r8_5)] & r9_2
    
    if (rdx_15 != 0)
    label_14179d23e:
        int32_t rax_28 = neg.d(rdx_15) & rdx_15
        uint64_t rflags_2
        int32_t temp0_6
        temp0_6, rflags_2 = _bit_scan_reverse(rax_28)
        int32_t rsi_1
        
        if (rax_28 == 0)
            rsi_1 = 0x20
        else
            rsi_1 = 0x1f - temp0_6
        
        var_310[3] = r9_4 - rsi_1 + 0x1f
        
        if (r9_4 - rsi_1 + 0x1f s> r13)
            var_310[3] = r13
    else
        while (true)
            int64_t rcx_11 = sx.q(r8_5)
            r9_4 += 0x20
            r8_5 += 1
            
            if (rcx_11.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_15 = r11_1[rcx_11 + 1]
            var_310[2] = 0xffffffff
            
            if (rdx_15 != 0)
                goto label_14179d23e
        
        var_310[3] = r13
    
    i.b = 0

float var_68[0x4] = zmm7
float var_78[0x4] = zmm8
float zmm9[0x4]
float var_88[0x4] = zmm9
float zmm10[0x4]
float var_98[0x4] = zmm10
float zmm11[0x4]
float var_a8[0x4] = zmm11
uint64_t rdx_17 = var_310[2].q u>> 0x20
float zmm12[0x4]
float var_b8[0x4] = zmm12
float zmm15[0x4]
float var_e8[0x4] = zmm15
uint64_t var_260 = rdx_17

while (true)
    int64_t rcx_13 = sx.q(var_310[3])
    int64_t* rax_30 = var_2a8[0].q
    int32_t var_2b8
    uint32_t var_1f8[0x4]
    float var_1e8[0x4]
    float var_1d8[0x4]
    float var_1c8[0x4]
    float var_1b8[0x4]
    uint32_t var_168[0x4][0x4]
    void var_128
    float zmm1[0x4]
    float zmm3_1[0x4]
    float zmm5_1[0x4]
    float zmm6_1[0x4]
    
    if (rcx_13.d == rdx_17.d && var_310[0].q == r10_1 && rax_30 == rbx)
        if (arg_20 == 0)
            int32_t r8_11 = *(rbx + 0x28)
            var_310[2] = 0xffffffff
            var_318.d = 0
            var_318:4.d = 1
            var_310[0].q = r10_1
            var_310[3].q = 0
            
            if (r8_11 != 0)
                sub_14059bdd0(&var_318)
                r8_11 = *(rbx + 0x28)
                r10_1 = rbx + 0x10
            
            zmm0_1 = var_318.o
            var_358 = rbx
            var_310[2] = 0xffffffff << (r8_11.b & 0x1f)
            var_350 = zmm0_1[0]
            var_310[3] = r8_11
            zmm0_1 = var_358.o
            int64_t rdx_32 = var_310[2].q u>> 0x20
            var_340 = var_310[0]
            var_368 = rdx_32
            zmm2 = _mm_unpackhi_pd(var_310, var_310[0].q)
            var_2a8 = zmm0_1
            float var_298_1[0x4] = var_348.o
            int64_t var_288_1 = zmm2.q
            
            while (true)
                int64_t rcx_34 = sx.q(var_298_1[3])
                int64_t* rax_58 = var_2a8[0].q
                
                if (rcx_34.d == rdx_32.d && var_298_1[0].q == r10_1 && rax_58 == rbx)
                    break
                
                int64_t* r13_2 = *(*rax_58 + rcx_34 * 0x10)
                int64_t rsi_4 = sx.q(r13_2[1].d)
                void* rbx_4 = *r13_2
                int64_t rax_60 = rsi_4 * 3
                int128_t* rdi_6 = (rsi_4 << 4) + *(rbx_4 + 0x68)
                var_2b8.q = *(rbx_4 + 0x28)
                arg_20.d = (*(*(rbx_4 + 0x2c0) + (rsi_4 << 2)))[0]
                int128_t* rax_62
                int512_t zmm8_2
                int512_t zmm9_2
                int512_t zmm10_3
                int512_t zmm11_2
                int512_t zmm12_3
                int512_t zmm13_2
                int512_t zmm14_3
                rax_62, zmm8_2, zmm9_2, zmm10_3, zmm11_2, zmm12_3, zmm13_2, zmm14_3 =
                    sub_141762af0(rdi_6, &var_168, &data_14399f6e0)
                int64_t rbx_5 = *(rbx_4 + 0x290)
                float zmm7_2[0x4] = *(rax_62 + 4)
                zmm10_3.o = rax_62[1].d
                zmm11_2.o = rax_62[2].d
                zmm12_3.o = rax_62[3].d
                zmm8_2.o = *(rax_62 + 0x24)
                zmm9_2.o = *(rax_62 + 0x34)
                zmm13_2.o = *(rax_62 + 0x18)
                zmm14_3.o = *(rax_62 + 0x28)
                zmm15 = *(rax_62 + 0x38)
                var_318.o = *rax_62
                float var_198_2[0x4] = *(rax_62 + 8)
                float var_1a8_2[0x4] = *(rax_62 + 0xc)
                float var_2c8_2 = (*(rax_62 + 0x1c))[0]
                float var_2d8_2 = (*(rax_62 + 0x2c))[0]
                *(rax_62 + 0x14)
                float var_2e8_2 = (*(rax_62 + 0x3c))[0]
                float (* rax_63)[0x4]
                rax_63, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 =
                    sub_141762af0(rdi_6, &var_128, &data_14399f6e0)
                float (* rsi_6)[0x4] = (rsi_4 << 6) + rbx_5
                zmm2 = *rax_63
                float zmm4_4[0x4] = rsi_6[1]
                zmm3_1 = *rsi_6
                float zmm5_3[0x4] = rsi_6[2]
                zmm6_1 = rsi_6[3]
                float temp0_289[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                float temp0_290[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                float temp0_293[0x4] =
                    _mm_add_ps(_mm_mul_ps(temp0_289, zmm3_1), _mm_mul_ps(temp0_290, zmm4_4))
                float temp0_295[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm5_3)
                float temp0_297[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6_1)
                float temp0_299[0x4] = _mm_add_ps(_mm_add_ps(temp0_293, temp0_295), temp0_297)
                zmm2 = rax_63[1]
                float temp0_304[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm3_1), 
                    _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm4_4))
                float temp0_306[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm5_3)
                float temp0_308[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6_1)
                float temp0_310[0x4] = _mm_add_ps(_mm_add_ps(temp0_304, temp0_306), temp0_308)
                zmm2 = rax_63[2]
                float temp0_315[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm3_1), 
                    _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm4_4))
                float temp0_317[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm5_3)
                float temp0_319[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6_1)
                float temp0_321[0x4] = _mm_add_ps(_mm_add_ps(temp0_315, temp0_317), temp0_319)
                zmm2 = rax_63[3]
                float temp0_323[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm3_1)
                float temp0_325[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm4_4)
                float temp0_326[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xe1)
                temp0_326[0] = zmm7[0]
                float temp0_327[0x4] = _mm_shuffle_ps(temp0_326, temp0_326, 0xc6)
                float temp0_328[0x4] = _mm_add_ps(temp0_323, temp0_325)
                temp0_327[0] = zmm8[0]
                zmm8 = var_318.o
                float temp0_329[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
                temp0_329[0] = zmm10[0]
                float temp0_330[0x4] = _mm_shuffle_ps(temp0_327, temp0_327, 0x27)
                temp0_330[0] = zmm9[0]
                float temp0_331[0x4] = _mm_shuffle_ps(temp0_329, temp0_329, 0xc6)
                temp0_331[0] = zmm11[0]
                float temp0_333[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm5_3)
                float temp0_334[0x4] = _mm_shuffle_ps(var_198_2, var_198_2, 0xe1)
                temp0_334[0] = zmm13[0]
                float temp0_335[0x4] = _mm_shuffle_ps(temp0_330, temp0_330, 0x39)
                float temp0_336[0x4] = _mm_shuffle_ps(temp0_334, temp0_334, 0xc6)
                float temp0_337[0x4] = _mm_add_ps(temp0_328, temp0_333)
                float temp0_339[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6_1)
                temp0_336[0] = zmm14[0]
                float temp0_340[0x4] = _mm_shuffle_ps(temp0_331, temp0_331, 0x27)
                temp0_340[0] = zmm12[0]
                float temp0_341[0x4] = _mm_shuffle_ps(temp0_336, temp0_336, 0x27)
                float var_208_3[0x4] = temp0_337
                float temp0_342[0x4] = _mm_shuffle_ps(temp0_340, temp0_340, 0x39)
                float temp0_343[0x4] = _mm_add_ps(temp0_337, temp0_339)
                temp0_341[0] = zmm15[0]
                float temp0_344[0x4] = _mm_shuffle_ps(temp0_299, temp0_299, 0x55)
                float temp0_345[0x4] = _mm_shuffle_ps(temp0_299, temp0_299, 0)
                float temp0_346[0x4] = _mm_mul_ps(temp0_344, temp0_335)
                float temp0_347[0x4] = _mm_mul_ps(temp0_345, temp0_342)
                var_348.o = temp0_335
                var_358.o = temp0_342
                float temp0_348[0x4] = _mm_shuffle_ps(temp0_299, temp0_299, 0xaa)
                float temp0_349[0x4] = _mm_add_ps(temp0_346, temp0_347)
                float (* rsi_7)[0x4] = &var_1e8
                i = 0
                float temp0_350[0x4] = _mm_shuffle_ps(temp0_299, temp0_299, 0xff)
                float temp0_351[0x4] = _mm_shuffle_ps(var_1a8_2, var_1a8_2, 0xe1)
                temp0_351[0] = var_2c8_2[0]
                float temp0_352[0x4] = _mm_shuffle_ps(temp0_341, temp0_341, 0x39)
                float temp0_353[0x4] = _mm_mul_ps(temp0_348, temp0_352)
                float temp0_354[0x4] = _mm_shuffle_ps(temp0_351, temp0_351, 0xc6)
                temp0_354[0] = var_2d8_2[0]
                var_338.o = temp0_352
                float temp0_355[0x4] = _mm_add_ps(temp0_349, temp0_353)
                float temp0_356[0x4] = _mm_shuffle_ps(temp0_354, temp0_354, 0x27)
                temp0_356[0] = var_2e8_2[0]
                float temp0_357[0x4] = _mm_shuffle_ps(temp0_356, temp0_356, 0x39)
                float temp0_359[0x4] = _mm_add_ps(temp0_355, _mm_mul_ps(temp0_350, temp0_357))
                float temp0_360[0x4] = _mm_shuffle_ps(temp0_310, temp0_310, 0)
                float temp0_361[0x4] = _mm_shuffle_ps(temp0_310, temp0_310, 0xaa)
                float temp0_362[0x4] = _mm_shuffle_ps(temp0_310, temp0_310, 0x55)
                float temp0_364[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_310, temp0_310, 0xff), temp0_357)
                float temp0_365[0x4] = _mm_mul_ps(temp0_362, temp0_335)
                float temp0_366[0x4] = _mm_mul_ps(temp0_360, temp0_342)
                float temp0_367[0x4] = _mm_mul_ps(temp0_361, temp0_352)
                var_1e8 = temp0_359
                float temp0_370[0x4] =
                    _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_365, temp0_366), temp0_367), temp0_364)
                float temp0_372[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_321, temp0_321, 0x55), temp0_335)
                float temp0_373[0x4] = _mm_shuffle_ps(temp0_321, temp0_321, 0)
                float temp0_374[0x4] = _mm_shuffle_ps(temp0_321, temp0_321, 0xaa)
                float temp0_376[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_321, temp0_321, 0xff), temp0_357)
                float temp0_377[0x4] = _mm_mul_ps(temp0_373, temp0_342)
                float temp0_378[0x4] = _mm_mul_ps(temp0_374, temp0_352)
                var_1d8 = temp0_370
                float temp0_379[0x4] = _mm_add_ps(temp0_372, temp0_377)
                float temp0_381[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_343, temp0_343, 0), temp0_342)
                float temp0_382[0x4] = _mm_add_ps(temp0_379, temp0_378)
                float temp0_384[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_343, temp0_343, 0xaa), temp0_352)
                float temp0_385[0x4] = _mm_add_ps(temp0_382, temp0_376)
                float temp0_387[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_343, temp0_343, 0x55), temp0_335)
                float temp0_389[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_343, temp0_343, 0xff), temp0_357)
                var_1c8 = temp0_385
                var_1b8 =
                    _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_387, temp0_381), temp0_384), temp0_389)
                
                do
                    int64_t j = 0
                    float (* rbx_6)[0x4] = rsi_7
                    
                    do
                        if (_finite(_mm_cvtps_pd((*rbx_6)[0].q)[0].q) == 0)
                            i = zx.q(i_6)
                            goto label_14179e594
                        
                        j += 1
                        rbx_6 = &(*rbx_6)[1]
                    while (j s< 4)
                    
                    i += 1
                    rsi_7 = &rsi_7[1]
                while (i s< 4)
                
                i.b = 1
                float (* r10_7)[0x4] = (sx.q(arg1[1].d) << 6) + *(*arg1 + 0x290)
                int64_t i_9 = 4
                void* rcx_39 = &var_1e8 - r10_7
                i_6 = 1
                int64_t rdx_35 = &var_358 - r10_7
                void* r8_12 = &var_1e8[1] - r10_7
                int64_t r9_10 = &var_358:4 - r10_7
                float (* rax_66)[0x4] = &(*r10_7)[2]
                int64_t i_1
                
                do
                    zmm0_1 = *(rcx_39 + rax_66 - 8)
                    zmm0_1[0] = zmm0_1[0] + (*rax_66)[-2]
                    zmm1 = *(r8_12 + rax_66 - 8)
                    zmm1[0] = zmm1[0] + (*rax_66)[-1]
                    *(rdx_35 + rax_66 - 8) = zmm0_1[0]
                    zmm0_1 = *(rax_66 + rcx_39)
                    zmm0_1[0] = zmm0_1[0] + *rax_66
                    *(r9_10 + rax_66 - 8) = zmm1[0]
                    zmm1 = *(r8_12 + rax_66)
                    zmm1[0] = zmm1[0] + (*rax_66)[1]
                    *(rax_66 + rdx_35) = zmm0_1[0]
                    *(rax_66 + r9_10) = zmm1[0]
                    rax_66 = &rax_66[1]
                    i_1 = i_9
                    i_9 -= 1
                while (i_1 != 1)
                zmm3_1 = arg_20.d
                int64_t r9_11 = var_2b8.q
                *r10_7 = var_358.o
                r10_7[1] = var_348.o
                r10_7[2] = var_338.o
                r10_7[3] = temp0_357
                int64_t rdx_36 = sx.q(arg1[1].d)
                int64_t rcx_40 = *(*arg1 + 0x2c0)
                zmm3_1[0] = zmm3_1[0] f+ *(rcx_40 + (rdx_36 << 2))
                *(rcx_40 + (rdx_36 << 2)) = zmm3_1[0]
                zmm3_1[0] = zmm3_1[0] f* *(r9_11 + (rax_60 << 2))
                int64_t rax_68 = sx.q(arg1[1].d)
                zmm1 = *(r9_11 + (rax_60 << 2) + 4)
                zmm2 = *(r9_11 + (rax_60 << 2) + 8)
                zmm1[0] = zmm1[0] * zmm3_1[0]
                int64_t rdx_37 = rax_68 * 3
                void* rax_69 = *arg1
                zmm2[0] = zmm2[0] * zmm3_1[0]
                int64_t rcx_41 = *(rax_69 + 0x28)
                zmm3_1[0] = zmm3_1[0] f+ *(rcx_41 + (rdx_37 << 2))
                zmm1[0] = zmm1[0] f+ *(rcx_41 + (rdx_37 << 2) + 4)
                zmm2[0] = zmm2[0] f+ *(rcx_41 + (rdx_37 << 2) + 8)
                *(rcx_41 + (rdx_37 << 2)) = zmm3_1[0]
                *(rcx_41 + (rdx_37 << 2) + 4) = zmm1[0]
                *(rcx_41 + (rdx_37 << 2) + 8) = zmm2[0]
                int64_t rdx_38 = sx.q(r13_2[1].d) * 3
                int64_t rcx_42 = *(*r13_2 + 0x1b8)
                int64_t rax_72 = sx.q(arg1[1].d)
                zmm3_1[0] = zmm3_1[0] f* *(rcx_42 + (rdx_38 << 2))
                int64_t r9_12 = rax_72 * 3
                void* rax_73 = *arg1
                zmm1 = *(rcx_42 + (rdx_38 << 2) + 4)
                zmm2 = *(rcx_42 + (rdx_38 << 2) + 8)
                zmm1[0] = zmm1[0] * zmm3_1[0]
                int64_t r8_14 = *(rax_73 + 0x1b8)
                zmm2[0] = zmm2[0] * zmm3_1[0]
                zmm3_1[0] = zmm3_1[0] f+ *(r8_14 + (r9_12 << 2))
                zmm1[0] = zmm1[0] f+ *(r8_14 + (r9_12 << 2) + 4)
                zmm2[0] = zmm2[0] f+ *(r8_14 + (r9_12 << 2) + 8)
                *(r8_14 + (r9_12 << 2)) = zmm3_1[0]
                *(r8_14 + (r9_12 << 2) + 4) = zmm1[0]
                *(r8_14 + (r9_12 << 2) + 8) = zmm2[0]
                int64_t rdx_39 = sx.q(r13_2[1].d) * 3
                int64_t rcx_43 = *(*r13_2 + 0x1d0)
                zmm1 = *(rcx_43 + (rdx_39 << 2) + 4)
                zmm2 = *(rcx_43 + (rdx_39 << 2) + 8)
                int64_t r9_13 = sx.q(arg1[1].d) * 3
                void* rax_77 = *arg1
                zmm3_1[0] = zmm3_1[0] f* *(rcx_43 + (rdx_39 << 2))
                zmm1[0] = zmm1[0] * zmm3_1[0]
                int64_t r8_15 = *(rax_77 + 0x1d0)
                zmm3_1[0] = zmm3_1[0] * zmm2[0]
                zmm3_1[0] = zmm3_1[0] f+ *(r8_15 + (r9_13 << 2))
                zmm1[0] = zmm1[0] f+ *(r8_15 + (r9_13 << 2) + 4)
                zmm3_1[0] = zmm3_1[0] f+ *(r8_15 + (r9_13 << 2) + 8)
                *(r8_15 + (r9_13 << 2)) = zmm3_1[0]
                *(r8_15 + (r9_13 << 2) + 4) = zmm1[0]
                *(r8_15 + (r9_13 << 2) + 8) = zmm3_1[0]
            label_14179e594:
                var_298_1[2] &= not.d(var_2a8[3])
                sub_14059bdd0(&var_2a8[2])
                r10_1 = var_278
                rdx_32 = var_368
                rbx = arg2
            
            zmm14 = zx.o(0)
        
        int64_t* rcx_45 = &var_368
        float (* r8_18)[0x4] = (sx.q(arg1[1].d) << 6) + *(*arg1 + 0x290)
        
        for (float (* i_2)[0x4] = nullptr; i_2 s< 0x30; )
            var_368.d = (*(i_2 + r8_18))[0]
            float var_360_5 = (*(i_2 + r8_18 + 8))[0]
            var_368:4.d = (*(i_2 + r8_18 + 4))[0]
            
            if (9.99999994e-09f f> *rcx_45)
                zmm2 = data_142d3f660
                var_358 = 0x3f800000
                var_350 = 0f
                *r8_18 = var_358.o
                var_348.d = 0
                var_348 = 0x3f800000
                var_340 = 0
                r8_18[1] = 0
                var_330 = 1f
                r8_18[2] = 0.o
                r8_18[3] = zmm2
                break
            
            i_2 = &i_2[1]
            rcx_45 += 4
        
        int64_t rcx_46
        void* rdx_40
        
        if (i.b != 0)
            rdx_40 = *arg1
            rcx_46 = sx.q(arg1[1].d)
            zmm0_1 = *(*(rdx_40 + 0x2c0) + (rcx_46 << 2))
        
        int128_t* result
        
        if (i.b == 0 || zmm0_1[0] <= 9.99999994e-09f)
            void* rax_129 = *arg1
            int64_t rdx_58 = sx.q(arg1[1].d)
            float temp0_558[0x4] = _mm_unpacklo_ps(zmm14, zmm14[0].q)
            int32_t var_360_9 = 0
            int32_t var_360_10 = 0
            int32_t var_360_11 = 0
            *(*(rax_129 + 0x2c0) + (rdx_58 << 2)) = 0x3f800000
            int64_t rdx_59 = sx.q(arg1[1].d) * 3
            int64_t rcx_77 = *(*arg1 + 0x28)
            *(rcx_77 + (rdx_59 << 2)) = temp0_558.q
            *(rcx_77 + (rdx_59 << 2) + 8) = 0
            int64_t rax_132 = sx.q(arg1[1].d)
            float temp0_559[0x4] = _mm_unpacklo_ps(zmm14, zmm14[0].q)
            int64_t rdx_60 = rax_132 * 3
            int64_t rcx_78 = *(*arg1 + 0x1b8)
            *(rcx_78 + (rdx_60 << 2)) = temp0_559.q
            *(rcx_78 + (rdx_60 << 2) + 8) = 0
            int64_t r8_28 = sx.q(arg1[1].d) * 3
            void* rax_135 = *arg1
            int64_t rcx_79 = *(rax_135 + 0x1b8)
            int64_t rdx_61 = *(rax_135 + 0x3f8)
            *(rdx_61 + (r8_28 << 2)) = *(rcx_79 + (r8_28 << 2))
            *(rdx_61 + (r8_28 << 2) + 8) = *(rcx_79 + (r8_28 << 2) + 8)
            *(*(*arg1 + 0x2d8) + (sx.q(arg1[1].d) << 2)) = 0x3f800000
            int64_t r8_29 = sx.q(arg1[1].d) * 3
            void* rax_139 = *arg1
            int64_t rcx_81 = *(rax_139 + 0x28)
            int64_t rdx_63 = *(rax_139 + 0x3c8)
            *(rdx_63 + (r8_29 << 2)) = *(rcx_81 + (r8_29 << 2))
            *(rdx_63 + (r8_29 << 2) + 8) = *(rcx_81 + (r8_29 << 2) + 8)
            int64_t rax_141 = sx.q(arg1[1].d)
            float temp0_560[0x4] = _mm_unpacklo_ps(zmm14, zmm14[0].q)
            int64_t r8_30 = rax_141 * 3
            int64_t rcx_82 = *(*arg1 + 0x1d0)
            *(rcx_82 + (r8_30 << 2)) = temp0_560.q
            *(rcx_82 + (r8_30 << 2) + 8) = 0
            int64_t r9_17 = sx.q(arg1[1].d) * 3
            void* rax_144 = *arg1
            int64_t rcx_83 = *(rax_144 + 0x1d0)
            int64_t r8_31 = *(rax_144 + 0x410)
            *(r8_31 + (r9_17 << 2)) = *(rcx_83 + (r9_17 << 2))
            *(r8_31 + (r9_17 << 2) + 8) = *(rcx_83 + (r9_17 << 2) + 8)
            sub_14077e4a0(&var_318, &data_14399f6e0)
            *(*(*arg1 + 0x68) + sx.q(arg1[1].d) * 0x10) = var_318.o
            void* rax_147 = *arg1
            int64_t r8_33 = sx.q(arg1[1].d) * 2
            *(*(rax_147 + 0x3e0) + (r8_33 << 3)) = *(*(rax_147 + 0x68) + (r8_33 << 3))
            int128_t zmm0_9 = data_14399f6f0
            int64_t rcx_87 = *(*arg1 + 0x290)
            int128_t zmm2_4 = data_14399f700
            int128_t zmm3_6 = data_14399f710
            int64_t rdx_68 = sx.q(arg1[1].d) << 6
            *(rdx_68 + rcx_87) = data_14399f6e0
            *(rdx_68 + rcx_87 + 0x10) = zmm0_9
            *(rdx_68 + rcx_87 + 0x20) = zmm2_4
            *(rdx_68 + rcx_87 + 0x30) = zmm3_6
            result = *arg1
            int128_t zmm1_5 = data_14399f6f0
            int64_t rcx_88 = *(result + 0x2a8)
            zmm2_4 = data_14399f700
            zmm3_6 = data_14399f710
            int64_t rdx_70 = sx.q(arg1[1].d) << 6
            *(rdx_70 + rcx_88) = data_14399f6e0
            *(rdx_70 + rcx_88 + 0x10) = zmm1_5
            *(rdx_70 + rcx_88 + 0x20) = zmm2_4
            *(rdx_70 + rcx_88 + 0x30) = zmm3_6
        else
            int64_t rax_82 = *(rdx_40 + 0x28)
            int64_t rcx_47 = rcx_46 * 3
            zmm2 = 0x3f800000
            zmm2[0] = 1f / zmm0_1[0]
            zmm1 = zmm2
            zmm2[0] = zmm2[0] f* *(rax_82 + (rcx_47 << 2))
            zmm2[0] = zmm2[0] f* *(rax_82 + (rcx_47 << 2) + 8)
            zmm1[0] = zmm1[0] f* *(rax_82 + (rcx_47 << 2) + 4)
            *(rax_82 + (rcx_47 << 2)) = zmm2[0]
            *(rax_82 + (rcx_47 << 2) + 8) = zmm2[0]
            zmm2 = 0x3f800000
            *(rax_82 + (rcx_47 << 2) + 4) = zmm1[0]
            int64_t rcx_48 = sx.q(arg1[1].d)
            void* rax_83 = *arg1
            int64_t r8_19 = rcx_48 * 3
            int64_t rdx_41 = *(rax_83 + 0x1b8)
            zmm2[0] = 1f f/ *(*(rax_83 + 0x2c0) + (rcx_48 << 2))
            zmm2[0] = zmm2[0] f* *(rdx_41 + (r8_19 << 2))
            zmm2[0] = zmm2[0] f* *(rdx_41 + (r8_19 << 2) + 4)
            zmm2[0] = zmm2[0] f* *(rdx_41 + (r8_19 << 2) + 8)
            *(rdx_41 + (r8_19 << 2)) = zmm2[0]
            *(rdx_41 + (r8_19 << 2) + 4) = zmm2[0]
            *(rdx_41 + (r8_19 << 2) + 8) = zmm2[0]
            int64_t r8_20 = sx.q(arg1[1].d) * 3
            void* rax_86 = *arg1
            int64_t rcx_49 = *(rax_86 + 0x1b8)
            int64_t rdx_42 = *(rax_86 + 0x3f8)
            *(rdx_42 + (r8_20 << 2)) = *(rcx_49 + (r8_20 << 2))
            zmm0_1 = 0x3f800000
            *(rdx_42 + (r8_20 << 2) + 8) = *(rcx_49 + (r8_20 << 2) + 8)
            void* rcx_50 = *arg1
            int64_t rdx_43 = sx.q(arg1[1].d)
            zmm0_1[0] = 1f f/ *(*(rcx_50 + 0x2c0) + (rdx_43 << 2))
            *(*(rcx_50 + 0x2d8) + (rdx_43 << 2)) = zmm0_1[0]
            
            if (arg3 != 0)
                zmm2 = arg3[1]
                int64_t rax_90 = sx.q(arg1[1].d)
                float var_360_6 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
                int64_t rdx_44 = rax_90 * 3
                float temp0_396[0x4] = _mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)
                int64_t rcx_51 = *(*arg1 + 0x28)
                *(rcx_51 + (rdx_44 << 2)) = temp0_396.q
                *(rcx_51 + (rdx_44 << 2) + 8) = var_360_6
            
            var_318.d = 0
            var_318:4.d = 1
            var_310[0].q = r10_1
            int64_t r8_21 = sx.q(arg1[1].d) * 3
            var_310[2] = 0xffffffff
            void* rax_94 = *arg1
            var_310[3].q = 0
            int64_t rcx_52 = *(rax_94 + 0x28)
            int64_t rdx_45 = *(rax_94 + 0x3c8)
            *(rdx_45 + (r8_21 << 2)) = *(rcx_52 + (r8_21 << 2))
            *(rdx_45 + (r8_21 << 2) + 8) = *(rcx_52 + (r8_21 << 2) + 8)
            int32_t rdx_46 = *(rbx + 0x28)
            
            if (rdx_46 != 0)
                sub_14059bdd0(&var_318)
                rdx_46 = *(rbx + 0x28)
                r10_1 = rbx + 0x10
            
            var_358 = rbx
            zmm0_1 = var_318.o
            var_310[3] = rdx_46
            zmm10 = 0x80000000
            zmm13 = 0x322bcc77
            var_350 = zmm0_1[0]
            zmm0_1 = var_358.o
            var_310[2] = 0xffffffff << (rdx_46.b & 0x1f)
            var_340 = var_310[0]
            uint32_t r12_1 = (var_310[2].q u>> 0x20).d
            zmm2 = _mm_unpackhi_pd(var_310, var_310[0].q)
            var_2a8 = zmm0_1
            float var_298_2[0x4] = var_348.o
            int64_t var_288_2 = zmm2.q
            
            while (true)
                int64_t rcx_56 = sx.q(var_298_2[3])
                int64_t* rax_96 = var_2a8[0].q
                
                if (rcx_56.d == r12_1 && var_298_2[0].q == r10_1 && rax_96 == rbx)
                    break
                
                int64_t* rbx_7 = *(*rax_96 + rcx_56 * 0x10)
                int64_t* rcx_58 = nullptr
                
                if (*(rbx_7 + 0xc) u>= 3)
                    rcx_58 = rbx_7
                
                void** rsi_9
                float (* rdi_8)[0x4]
                
                if (rcx_58 != 0)
                    int64_t rdx_47 = sx.q(rcx_58[1].d)
                    void* rcx_59 = *rcx_58
                    rsi_9 = *(*(rcx_59 + 0x4a0) + (rdx_47 << 3))
                    rdi_8 = *(*(rcx_59 + 0x4b8) + (rdx_47 << 3))
                
                void* r9_14
                uint64_t r10_8
                void* r11_2
                
                if (rcx_58 == 0 || rsi_9 == 0)
                    r9_14 = *rbx_7
                    rsi_9 = rbx_7
                    r10_8 = sx.q(rbx_7[1].d)
                    r11_2 = r9_14
                    int64_t rax_104 = *(r9_14 + 0x28)
                    uint64_t rcx_63 = r10_8 * 3
                    zmm1 = zx.o(*(rax_104 + (rcx_63 << 2)))
                    int32_t rax_105 = *(rax_104 + (rcx_63 << 2) + 8)
                    zmm9 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    zmm8 = rax_105
                    var_368 = zmm1.q
                    zmm7 = var_368.d
                label_14179ede0:
                    void* rdx_50 = *arg1
                    int64_t rcx_64 = sx.q(rsi_9[1].d)
                    var_350 = 0
                    int64_t r8_22 = sx.q(arg1[1].d) * 3
                    var_340 = 0
                    int64_t rax_107 = *(rdx_50 + 0x28)
                    var_330 = 0
                    zmm7[0] = zmm7[0] f- *(rax_107 + (r8_22 << 2))
                    zmm8[0] = zmm8[0] f- *(rax_107 + (r8_22 << 2) + 8)
                    zmm9[0] = zmm9[0] f- *(rax_107 + (r8_22 << 2) + 4)
                    zmm6_1 = *(*(r9_14 + 0x2c0) + (rcx_64 << 2))
                    int64_t rcx_65 = sx.q(r10_8.d) * 3
                    int64_t rax_110 = *(r11_2 + 0x1b8)
                    zmm6_1[0] = zmm6_1[0] f* *(rax_110 + (rcx_65 << 2) + 8)
                    zmm6_1[0] = zmm6_1[0] f* *(rax_110 + (rcx_65 << 2) + 4)
                    zmm6_1[0] = zmm6_1[0] f* *(rax_110 + (rcx_65 << 2))
                    int64_t rax_111 = *(rdx_50 + 0x1d0)
                    zmm9[0] = zmm9[0] * zmm6_1[0]
                    zmm8[0] = zmm8[0] * zmm6_1[0]
                    zmm8[0] = zmm8[0] * zmm6_1[0]
                    zmm9[0] = zmm9[0] - zmm8[0]
                    zmm7[0] = zmm7[0] * zmm6_1[0]
                    zmm8[0] = zmm8[0] * zmm6_1[0]
                    zmm9[0] = zmm9[0] f+ *(rax_111 + (r8_22 << 2))
                    zmm8[0] = zmm8[0] - zmm7[0]
                    zmm8[0] = zmm8[0] * zmm8[0]
                    zmm9[0] = zmm9[0] * zmm6_1[0]
                    *(rax_111 + (r8_22 << 2)) = zmm9[0]
                    zmm8[0] = zmm8[0] f+ *(rax_111 + (r8_22 << 2) + 4)
                    zmm7[0] = zmm7[0] * zmm6_1[0]
                    zmm7[0] = zmm7[0] - zmm9[0]
                    *(rax_111 + (r8_22 << 2) + 4) = zmm8[0]
                    zmm8[0] = zmm8[0] * zmm7[0]
                    zmm8[0] = zmm8[0] * zmm9[0]
                    zmm7[0] = zmm7[0] f+ *(rax_111 + (r8_22 << 2) + 8)
                    zmm3_1 = zmm8 ^ zmm10
                    zmm2 = zmm8 ^ zmm10
                    var_338.d = zmm3_1[0]
                    var_338:4.d = zmm2[0]
                    var_350 = zmm3_1[0]
                    *(rax_111 + (r8_22 << 2) + 8) = zmm7[0]
                    int64_t rax_112 = *arg1
                    int64_t r11_3 = sx.q(arg1[1].d)
                    zmm9[0] = zmm9[0] * zmm6_1[0]
                    float (* r11_5)[0x4] = (r11_3 << 6) + *(rax_112 + 0x290)
                    zmm9[0] = zmm9[0] * zmm9[0]
                    zmm9[0] = zmm9[0] * zmm7[0]
                    void* rax_113 = &(*r11_5)[2]
                    zmm7[0] = zmm7[0] * zmm7[0]
                    zmm8[0] = zmm8[0] + zmm9[0]
                    zmm1 = zmm9 ^ zmm10
                    var_340 = zmm2[0]
                    var_348.d = zmm1[0]
                    zmm8[0] = zmm8[0] + zmm7[0]
                    var_358:4.d = zmm1[0]
                    zmm8[0] = zmm8[0] * zmm6_1[0]
                    zmm7[0] = zmm7[0] + zmm9[0]
                    zmm8[0] = zmm8[0] * zmm6_1[0]
                    zmm7[0] = zmm7[0] * zmm6_1[0]
                    var_358.d = zmm8[0]
                    var_330 = zmm7[0]
                    var_348:4.d = zmm8[0]
                    float var_328_5[0x4] = data_142d3f660
                    int64_t i_7 = 4
                    void* rcx_66 = &var_358 - r11_5
                    void* rdx_51 = &var_1e8 - r11_5
                    void* r8_23 = &var_358:4 - r11_5
                    void* r9_15 = &var_1e8[1] - r11_5
                    int64_t i_3
                    
                    do
                        zmm0_1 = *(rcx_66 + rax_113 - 8)
                        zmm0_1[0] = zmm0_1[0] f+ *(rax_113 - 8)
                        zmm1 = *(rax_113 + r8_23 - 8)
                        zmm1[0] = zmm1[0] f+ *(rax_113 - 4)
                        *(rdx_51 + rax_113 - 8) = zmm0_1[0]
                        zmm0_1 = *(rcx_66 + rax_113)
                        zmm0_1[0] = zmm0_1[0] f+ *rax_113
                        *(rax_113 + r9_15 - 8) = zmm1[0]
                        zmm1 = *(r8_23 + rax_113)
                        zmm1[0] = zmm1[0] f+ *(rax_113 + 4)
                        *(rdx_51 + rax_113) = zmm0_1[0]
                        *(r9_15 + rax_113) = zmm1[0]
                        rax_113 += 0x10
                        i_3 = i_7
                        i_7 -= 1
                    while (i_3 != 1)
                    *r11_5 = var_1e8
                    r11_5[1] = var_1d8
                    r11_5[2] = var_1c8
                    r11_5[3] = var_1b8
                else if (rdi_8 != 0 && rdi_8[3][0].q == rbx_7)
                    r11_2 = *rbx_7
                    r10_8 = sx.q(rbx_7[1].d)
                    zmm11 = data_14399f668
                    zmm15 = data_143ef8240
                    int64_t rcx_60 = *(r11_2 + 0x28)
                    uint64_t rdx_48 = r10_8 * 3
                    zmm2 = *(rcx_60 + (rdx_48 << 2) + 4)
                    zmm5_1 = *((r10_8 << 4) + *(r11_2 + 0x68))
                    float temp0_398[0x4] = _mm_unpacklo_ps(*(rcx_60 + (rdx_48 << 2)), 
                        (*(rcx_60 + (rdx_48 << 2) + 8))[0].q)
                    zmm0_1 = data_14399f670
                    float temp0_399[0x4] = _mm_unpacklo_ps(zmm2, zmm14[0].q)
                    float temp0_400[0x4] = _mm_unpacklo_ps(zmm11, zmm0_1[0].q)
                    zmm0_1 = rdi_8[2]
                    float temp0_401[0x4] = _mm_unpacklo_ps(temp0_398, temp0_399[0].q)
                    float temp0_403[0x4] =
                        _mm_unpacklo_ps(temp0_400, _mm_unpacklo_ps(data_14399f66c, zmm14[0].q)[0].q)
                    
                    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm0_1, temp0_403), zmm15, 1)) == 0)
                        float temp0_536[0x4] = _mm_mul_ps(rdi_8[1], temp0_403)
                        float temp0_537[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                        float temp0_538[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                        float temp0_539[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                        float temp0_541[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_536, temp0_536, 0xc9), temp0_537)
                        float temp0_544[0x4] = _mm_sub_ps(
                            _mm_mul_ps(_mm_shuffle_ps(temp0_536, temp0_536, 0xd2), temp0_538), 
                            temp0_541)
                        float temp0_545[0x4] = _mm_add_ps(temp0_544, temp0_544)
                        float temp0_546[0x4] = _mm_mul_ps(temp0_539, temp0_545)
                        float temp0_548[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_545, temp0_545, 0xd2), temp0_538)
                        float temp0_549[0x4] = _mm_shuffle_ps(temp0_545, temp0_545, 0xc9)
                        float temp0_550[0x4] = _mm_add_ps(temp0_546, temp0_536)
                        zmm7 = _mm_add_ps(
                            _mm_add_ps(_mm_sub_ps(temp0_548, _mm_mul_ps(temp0_549, temp0_537)), 
                                temp0_550), 
                            temp0_401)
                    else
                        zmm9 = data_143ef7f20
                        float temp0_407[0x4] = _mm_add_ps(zmm5_1, zmm5_1)
                        float temp0_408[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 4)
                        float temp0_409[0x4] = _mm_shuffle_ps(temp0_403, temp0_403, 0xc9)
                        float temp0_411[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_407, temp0_407, 0x29), temp0_408)
                        float temp0_412[0x4] = _mm_mul_ps(temp0_407, zmm5_1)
                        float temp0_415[0x4] = _mm_mul_ps(
                            _mm_shuffle_ps(temp0_407, temp0_407, 0x12), 
                            _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff))
                        float temp0_418[0x4] = _mm_add_ps(
                            _mm_shuffle_ps(temp0_412, temp0_412, 0x1a), 
                            _mm_shuffle_ps(temp0_412, temp0_412, 1))
                        zmm3_1 = *rdi_8
                        float temp0_419[0x4] = _mm_add_ps(temp0_415, temp0_411)
                        float temp0_420[0x4] = _mm_sub_ps(temp0_411, temp0_415)
                        float temp0_421[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
                        float temp0_422[0x4] = _mm_mul_ps(temp0_419, temp0_403)
                        float temp0_423[0x4] = _mm_mul_ps(temp0_409, temp0_420)
                        zmm1 = __andps_xmmxud_memxud(
                            _mm_mul_ps(_mm_sub_ps(zmm9, temp0_418), temp0_403), data_143ef7f30)
                        float temp0_427[0x4] = _mm_shuffle_ps(temp0_423, zmm1, 0x32)
                        float temp0_429[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_422, zmm1, 0), temp0_427, 0x82)
                        float temp0_430[0x4] = _mm_shuffle_ps(temp0_422, zmm1, 0x31)
                        float temp0_432[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_423, zmm1, 0x10), temp0_430, 0x88)
                        float temp0_434[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_422, temp0_423, 0x12), zmm1, 0xe8)
                        float temp0_435[0x4] = _mm_add_ps(zmm3_1, zmm3_1)
                        zmm9[0].q = temp0_401 u>> 0x40
                        float temp0_436[0x4] = _mm_shuffle_ps(temp0_401, zmm9, 0xc4)
                        float temp0_437[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
                        float temp0_438[0x4] = _mm_mul_ps(zmm3_1, temp0_435)
                        float temp0_440[0x4] =
                            _mm_mul_ps(temp0_421, _mm_shuffle_ps(temp0_435, temp0_435, 0x29))
                        zmm0_1 = rdi_8[2]
                        float temp0_442[0x4] =
                            _mm_mul_ps(temp0_437, _mm_shuffle_ps(temp0_435, temp0_435, 0x12))
                        float temp0_443[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xc9)
                        float temp0_444[0x4] = _mm_add_ps(temp0_442, temp0_440)
                        float temp0_445[0x4] = _mm_sub_ps(temp0_440, temp0_442)
                        float temp0_446[0x4] = _mm_mul_ps(temp0_444, zmm0_1)
                        float temp0_449[0x4] = _mm_add_ps(
                            _mm_shuffle_ps(temp0_438, temp0_438, 0x1a), 
                            _mm_shuffle_ps(temp0_438, temp0_438, 1))
                        float temp0_450[0x4] = _mm_mul_ps(temp0_443, temp0_445)
                        zmm1 = __andps_xmmxud_memxud(
                            __mulps_xmmps_memps(_mm_sub_ps(zmm9, temp0_449), rdi_8[2]), 
                            data_143ef7f30)
                        float temp0_454[0x4] = _mm_shuffle_ps(temp0_450, zmm1, 0x32)
                        float temp0_456[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_446, zmm1, 0), temp0_454, 0x82)
                        float temp0_457[0x4] = _mm_shuffle_ps(temp0_446, zmm1, 0x31)
                        float temp0_459[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_450, zmm1, 0x10), temp0_457, 0x88)
                        float temp0_460[0x4] = _mm_shuffle_ps(temp0_446, temp0_450, 0x12)
                        zmm5_1 = rdi_8[1]
                        float temp0_461[0x4] = _mm_shuffle_ps(temp0_456, temp0_456, 0x55)
                        float temp0_462[0x4] = _mm_shuffle_ps(temp0_460, zmm1, 0xe8)
                        float temp0_464[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_456, temp0_456, 0xaa), temp0_434)
                        float temp0_465[0x4] = _mm_mul_ps(temp0_461, temp0_432)
                        zmm9[0].q = zmm5_1 u>> 0x40
                        float temp0_466[0x4] = _mm_shuffle_ps(zmm5_1, zmm9, 0xc4)
                        float temp0_467[0x4] = _mm_shuffle_ps(temp0_456, temp0_456, 0)
                        float temp0_469[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_456, temp0_456, 0xff), temp0_436)
                        float temp0_471[0x4] =
                            _mm_add_ps(temp0_465, _mm_mul_ps(temp0_467, temp0_429))
                        float temp0_473[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_459, temp0_459, 0), temp0_429)
                        float temp0_474[0x4] = _mm_add_ps(temp0_471, temp0_464)
                        float temp0_476[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_459, temp0_459, 0xaa), temp0_434)
                        float temp0_477[0x4] = _mm_add_ps(temp0_474, temp0_469)
                        float temp0_479[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_459, temp0_459, 0x55), temp0_432)
                        float temp0_480[0x4] = _mm_shuffle_ps(temp0_459, temp0_459, 0xff)
                        var_358.o = temp0_477
                        float temp0_481[0x4] = _mm_shuffle_ps(temp0_462, temp0_462, 0x55)
                        float temp0_482[0x4] = _mm_add_ps(temp0_479, temp0_473)
                        float temp0_483[0x4] = _mm_mul_ps(temp0_481, temp0_432)
                        float temp0_484[0x4] = _mm_mul_ps(temp0_480, temp0_436)
                        float temp0_485[0x4] = _mm_shuffle_ps(temp0_462, temp0_462, 0)
                        float temp0_486[0x4] = _mm_add_ps(temp0_482, temp0_476)
                        float temp0_487[0x4] = _mm_mul_ps(temp0_485, temp0_429)
                        float temp0_489[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_462, temp0_462, 0xaa), temp0_434)
                        float temp0_490[0x4] = _mm_add_ps(temp0_486, temp0_484)
                        float temp0_491[0x4] = _mm_shuffle_ps(temp0_462, temp0_462, 0xff)
                        float temp0_492[0x4] = _mm_add_ps(temp0_483, temp0_487)
                        float temp0_493[0x4] = _mm_mul_ps(temp0_491, temp0_436)
                        float temp0_494[0x4] = _mm_shuffle_ps(temp0_466, temp0_466, 0)
                        var_348.o = temp0_490
                        float temp0_495[0x4] = _mm_shuffle_ps(temp0_466, temp0_466, 0x55)
                        float temp0_496[0x4] = _mm_add_ps(temp0_492, temp0_489)
                        float temp0_497[0x4] = _mm_mul_ps(temp0_495, temp0_432)
                        float temp0_499[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_466, temp0_466, 0xaa), temp0_434)
                        float temp0_500[0x4] = _mm_mul_ps(temp0_494, temp0_429)
                        float temp0_501[0x4] = _mm_add_ps(temp0_496, temp0_493)
                        float temp0_503[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_466, temp0_466, 0xff), temp0_436)
                        var_338.o = temp0_501
                        int96_t var_328_4 = _mm_add_ps(
                            _mm_add_ps(_mm_add_ps(temp0_497, temp0_500), temp0_499), temp0_503)[0].12
                        zmm9, zmm11, zmm13, zmm14, zmm15 = sub_1407740e0(&var_358, zmm13)
                        float temp0_507[0x4] = __mulps_xmmps_memps(zmm11, rdi_8[2])
                        float zmm2_2[0x4] = var_358.d
                        float zmm1_3 = var_358:4.d
                        uint32_t zmm0_5[0x4] = var_350
                        zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, temp0_507, 2), data_143ef8230 ^ zmm9)
                            ^ data_143ef8230
                        zmm2_2[0] = zmm2_2[0] * zmm15[0]
                        zmm1_3 = zmm1_3 * zmm15[0]
                        zmm0_5[0] = zmm0_5[0] f* zmm15[0]
                        var_358.d = zmm2_2[0]
                        var_358:4.d = zmm1_3
                        float temp0_510[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
                        zmm1_3 = var_348:4.d * temp0_510[0]
                        var_350 = zmm0_5[0]
                        zmm0_5 = var_340
                        zmm0_5[0] = zmm0_5[0] f* temp0_510[0]
                        float zmm3_4 = var_348.d * temp0_510[0]
                        zmm2_2 = var_338.d
                        var_348:4.d = zmm1_3
                        var_340 = zmm0_5[0]
                        zmm0_5 = var_330
                        float temp0_511[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
                        zmm1_3 = var_338:4.d * temp0_511[0]
                        zmm0_5[0] = zmm0_5[0] f* temp0_511[0]
                        zmm2_2[0] = zmm2_2[0] * temp0_511[0]
                        var_338:4.d = zmm1_3
                        var_330 = zmm0_5[0]
                        var_348.d = zmm3_4
                        var_338.d = zmm2_2[0]
                        sub_14077e4a0(&var_1f8, &var_358)
                        zmm6_1 = var_1f8
                        zmm5_1 = data_143ef7ee0
                        r10_8 = zx.q(rbx_7[1].d)
                        r11_2 = *rbx_7
                        zmm10 = 0x80000000
                        float temp0_512[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
                        i_6.d = 0x322bcc77
                        float temp0_514[0x4] =
                            _mm_add_ps(temp0_512, _mm_shuffle_ps(temp0_512, temp0_512, 0x4e))
                        float temp0_516[0x4] =
                            _mm_add_ps(_mm_shuffle_ps(temp0_514, temp0_514, 0x39), temp0_514)
                        float temp0_517[0x4] = _mm_rsqrt_ps(temp0_516)
                        float temp0_518[0x4] = _mm_mul_ps(temp0_516, zmm5_1)
                        float temp0_523[0x4] = _mm_add_ps(
                            _mm_mul_ps(
                                _mm_sub_ps(zmm5_1, 
                                    _mm_mul_ps(_mm_mul_ps(temp0_517, temp0_517), temp0_518)), 
                                temp0_517), 
                            temp0_517)
                        float temp0_526[0x4] = _mm_sub_ps(zmm5_1, 
                            _mm_mul_ps(_mm_mul_ps(temp0_523, temp0_523), temp0_518))
                        float temp0_528[0x4] =
                            _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_516, 2)
                        float temp0_530[0x4] =
                            _mm_add_ps(_mm_mul_ps(temp0_526, temp0_523), temp0_523)
                        float temp0_531[0x4] = _mm_unpacklo_ps(var_328_4:4.d, zmm14[0].q)
                        zmm5_1 =
                            _mm_and_ps(_mm_mul_ps(temp0_530, zmm6_1) ^ data_143ef7ed0, temp0_528)
                            ^ data_143ef7ed0
                        zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_328_4.d, var_328_4:8.d[0].q), 
                            temp0_531[0].q)
                        var_1f8 = zmm5_1
                    
                    r9_14 = *rsi_9
                    zmm9 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                    zmm8 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                    goto label_14179ede0
                var_298_2[2] &= not.d(var_2a8[3])
                sub_14059bdd0(&var_2a8[2])
                r10_1 = var_278
                rbx = arg2
            
            int64_t* rdi_11 = (sx.q(arg1[1].d) << 6) + *(*arg1 + 0x290)
            int64_t var_338_1
            
            if (sub_1417a99d0(rdi_11) == 0)
                void* rax_118 = &rdi_11[1]
                
                do
                    var_368.d = (*(rax_118 - 8))[0]
                    float var_360_8 = (*rax_118)[0]
                    var_368:4.d = (*(rax_118 - 4))[0]
                    
                    if (9.99999994e-09f f> *(&var_368 + (i_4 << 2)))
                        var_348.d = 0
                        var_338_1 = 0
                        int64_t var_350_2 = 0
                        var_340 = 0
                        goto label_14179f0c9
                    
                    i_4 += 1
                    rax_118 += 0x10
                while (i_4 s< 3)
            else
                var_348.d = 0
                var_338_1 = 0
                int64_t var_350_1 = 0
                var_340 = 0
            label_14179f0c9:
                zmm2 = data_142d3f660
                var_358 = 0x3f800000
                *rdi_11 = var_358.o
                *(rdi_11 + 0x10) = 0x3f800000.o
                int64_t var_330_1 = 0x3f800000
                *(rdi_11 + 0x20) = var_338_1.o
                *(rdi_11 + 0x30) = zmm2
            int64_t rcx_69 = sx.q(arg1[1].d)
            void* rax_119 = *arg1
            zmm13 = 0x3f800000
            int64_t r8_24 = rcx_69 * 3
            int64_t rdx_52 = *(rax_119 + 0x1d0)
            zmm13[0] = 1f f/ *(*(rax_119 + 0x2c0) + (rcx_69 << 2))
            zmm13[0] = zmm13[0] f* *(rdx_52 + (r8_24 << 2))
            zmm13[0] = zmm13[0] f* *(rdx_52 + (r8_24 << 2) + 4)
            zmm13[0] = zmm13[0] f* *(rdx_52 + (r8_24 << 2) + 8)
            *(rdx_52 + (r8_24 << 2)) = zmm13[0]
            *(rdx_52 + (r8_24 << 2) + 4) = zmm13[0]
            *(rdx_52 + (r8_24 << 2) + 8) = zmm13[0]
            int64_t r9_16 = sx.q(arg1[1].d) * 3
            void* rax_122 = *arg1
            int64_t rcx_70 = *(rax_122 + 0x1d0)
            int64_t r8_25 = *(rax_122 + 0x410)
            *(r8_25 + (r9_16 << 2)) = *(rcx_70 + (r9_16 << 2))
            *(r8_25 + (r9_16 << 2) + 8) = *(rcx_70 + (r9_16 << 2) + 8)
            *((sx.q(arg1[1].d) << 4) + *(*arg1 + 0x68)) = *sub_14175fb00(&var_318, rdi_11, zmm2[0])
            
            if (arg3 != 0)
                *(*(*arg1 + 0x68) + sx.q(arg1[1].d) * 0x10) = *arg3
            
            void* rax_127 = *arg1
            int64_t r8_27 = sx.q(arg1[1].d) * 2
            *(*(rax_127 + 0x3e0) + (r8_27 << 3)) = *(*(rax_127 + 0x68) + (r8_27 << 3))
            void* rbx_11 = *arg1
            uint32_t (* rax_128)[0x4] =
                sub_140631b10(*(rbx_11 + 0x290) + (sx.q(arg1[1].d) << 6), &var_168)
            int128_t zmm1_4 = rax_128[1]
            int128_t zmm2_3 = rax_128[2]
            int128_t zmm3_5 = rax_128[3]
            result = *(rbx_11 + 0x2a8)
            result[arg1[1] * 4] = *rax_128
            result[arg1[1] * 4 + 1] = zmm1_4
            result[arg1[1] * 4 + 2] = zmm2_3
            result[arg1[1] * 4 + 3] = zmm3_5
        
        return result
    
    int64_t* r13_1 = *(*rax_30 + rcx_13 * 0x10)
    int64_t* rcx_15 = nullptr
    
    if (*(r13_1 + 0xc) u>= 3)
        rcx_15 = r13_1
    
    int64_t* rbx_1
    float (* r9_6)[0x4]
    
    if (rcx_15 != 0)
        int64_t rdx_18 = sx.q(rcx_15[1].d)
        void* rcx_16 = *rcx_15
        rbx_1 = *(*(rcx_16 + 0x4a0) + (rdx_18 << 3))
        r9_6 = *(*(rcx_16 + 0x4b8) + (rdx_18 << 3))
    
    float var_258[0x4]
    float var_208_1[0x4]
    void* r8_7
    
    if (rcx_15 == 0 || rbx_1 == 0)
        r8_7 = *r13_1
        rbx_1 = r13_1
        int64_t rdx_21 = sx.q(r13_1[1].d)
        int64_t rax_36 = *(r8_7 + 0x28)
        int64_t rcx_22 = rdx_21 * 3
        zmm1 = zx.o(*(rax_36 + (rcx_22 << 2)))
        int64_t rax_38 = *(r8_7 + 0x68)
        var_1f8 = *(rax_36 + (rcx_22 << 2) + 8)
        var_368 = zmm1.q
        zmm2 = var_368.d
        var_258 = *(rax_38 + rdx_21 * 0x10)
        zmm0_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        var_208_1 = zmm2
    label_14179d891:
        int64_t rdi_1 = sx.q(rbx_1[1].d)
        float var_178_1[0x4] = zmm0_1
        float var_2c8_1 = (*(*(r8_7 + 0x2c0) + (rdi_1 << 2)))[0]
        int128_t* rax_40
        int512_t zmm8_1
        int512_t zmm9_1
        int512_t zmm10_2
        int512_t zmm11_1
        int512_t zmm12_2
        int512_t zmm13_1
        int512_t zmm14_2
        rax_40, zmm8_1, zmm9_1, zmm10_2, zmm11_1, zmm12_2, zmm13_1, zmm14_2 =
            sub_141762af0(&var_258, &var_128, &data_14399f6e0)
        int64_t rbx_2 = *(r8_7 + 0x290)
        float zmm7_1[0x4] = *(rax_40 + 4)
        zmm10_2.o = rax_40[1].d
        zmm11_1.o = rax_40[2].d
        zmm12_2.o = rax_40[3].d
        zmm8_1.o = *(rax_40 + 0x24)
        zmm9_1.o = *(rax_40 + 0x34)
        zmm13_1.o = *(rax_40 + 0x18)
        zmm14_2.o = *(rax_40 + 0x28)
        zmm15 = *(rax_40 + 0x38)
        float var_1a8_1[0x4] = *rax_40
        float var_198_1[0x4] = *(rax_40 + 8)
        var_318.o = *(rax_40 + 0xc)
        var_2b8 = (*(rax_40 + 0x1c))[0]
        float var_2e8_1 = (*(rax_40 + 0x2c))[0]
        *(rax_40 + 0x14)
        float var_2d8_1 = (*(rax_40 + 0x3c))[0]
        float (* rax_41)[0x4]
        rax_41, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 =
            sub_141762af0(&var_258, &var_168, &data_14399f6e0)
        float (* rdi_3)[0x4] = (rdi_1 << 6) + rbx_2
        zmm2 = *rax_41
        float zmm4_3[0x4] = rdi_3[1]
        zmm3_1 = *rdi_3
        float zmm5_2[0x4] = rdi_3[2]
        zmm6_1 = rdi_3[3]
        float temp0_183[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        float temp0_184[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float temp0_187[0x4] =
            _mm_add_ps(_mm_mul_ps(temp0_183, zmm3_1), _mm_mul_ps(temp0_184, zmm4_3))
        float temp0_189[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm5_2)
        float temp0_191[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6_1)
        float temp0_193[0x4] = _mm_add_ps(_mm_add_ps(temp0_187, temp0_189), temp0_191)
        zmm2 = rax_41[1]
        float temp0_198[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm3_1), 
            _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm4_3))
        float temp0_199[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        float temp0_201[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6_1)
        float temp0_204[0x4] =
            _mm_add_ps(_mm_add_ps(temp0_198, _mm_mul_ps(temp0_199, zmm5_2)), temp0_201)
        zmm2 = rax_41[2]
        float temp0_209[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm3_1), 
            _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm4_3))
        float temp0_211[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm5_2)
        float temp0_213[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6_1)
        float temp0_215[0x4] = _mm_add_ps(_mm_add_ps(temp0_209, temp0_211), temp0_213)
        zmm2 = rax_41[3]
        float temp0_217[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm3_1)
        float temp0_219[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm4_3)
        float temp0_220[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xe1)
        temp0_220[0] = zmm7[0]
        float temp0_221[0x4] = _mm_shuffle_ps(temp0_220, temp0_220, 0xc6)
        float temp0_222[0x4] = _mm_add_ps(temp0_217, temp0_219)
        temp0_221[0] = zmm8[0]
        float temp0_223[0x4] = _mm_shuffle_ps(var_1a8_1, var_1a8_1, 0xe1)
        temp0_223[0] = zmm10[0]
        float temp0_224[0x4] = _mm_shuffle_ps(temp0_221, temp0_221, 0x27)
        zmm10 = var_318.o
        temp0_224[0] = zmm9[0]
        var_258 = temp0_222
        zmm0_1 = var_258
        float temp0_226[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm5_2)
        float temp0_227[0x4] = _mm_shuffle_ps(var_198_1, var_198_1, 0xe1)
        temp0_227[0] = zmm13[0]
        float temp0_228[0x4] = _mm_shuffle_ps(temp0_223, temp0_223, 0xc6)
        float temp0_229[0x4] = _mm_shuffle_ps(temp0_227, temp0_227, 0xc6)
        temp0_228[0] = zmm11[0]
        float temp0_230[0x4] = _mm_add_ps(zmm0_1, temp0_226)
        float temp0_232[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6_1)
        temp0_229[0] = zmm14[0]
        float temp0_233[0x4] = _mm_shuffle_ps(temp0_224, temp0_224, 0x39)
        float temp0_234[0x4] = _mm_shuffle_ps(temp0_228, temp0_228, 0x27)
        var_258 = temp0_230
        float temp0_235[0x4] = _mm_add_ps(temp0_230, temp0_232)
        float temp0_236[0x4] = _mm_shuffle_ps(temp0_229, temp0_229, 0x27)
        temp0_234[0] = zmm12[0]
        float temp0_237[0x4] = _mm_shuffle_ps(temp0_234, temp0_234, 0x39)
        float temp0_238[0x4] = _mm_shuffle_ps(temp0_193, temp0_193, 0x55)
        float temp0_239[0x4] = _mm_shuffle_ps(temp0_193, temp0_193, 0)
        float temp0_240[0x4] = _mm_mul_ps(temp0_238, temp0_233)
        temp0_236[0] = zmm15[0]
        float temp0_241[0x4] = _mm_mul_ps(temp0_239, temp0_237)
        float temp0_242[0x4] = _mm_shuffle_ps(temp0_193, temp0_193, 0xaa)
        float temp0_243[0x4] = _mm_shuffle_ps(temp0_236, temp0_236, 0x39)
        float temp0_244[0x4] = _mm_mul_ps(temp0_242, temp0_243)
        float temp0_245[0x4] = _mm_add_ps(temp0_240, temp0_241)
        float temp0_246[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xe1)
        temp0_246[0] = var_2b8[0]
        var_348.o = temp0_233
        var_358.o = temp0_237
        float temp0_247[0x4] = _mm_add_ps(temp0_245, temp0_244)
        var_338.o = temp0_243
        float temp0_248[0x4] = _mm_shuffle_ps(temp0_193, temp0_193, 0xff)
        float (* rsi_3)[0x4] = &var_1e8
        float temp0_249[0x4] = _mm_shuffle_ps(temp0_246, temp0_246, 0xc6)
        i = 0
        temp0_249[0] = var_2e8_1[0]
        float temp0_250[0x4] = _mm_shuffle_ps(temp0_249, temp0_249, 0x27)
        temp0_250[0] = var_2d8_1[0]
        float temp0_251[0x4] = _mm_shuffle_ps(temp0_250, temp0_250, 0x39)
        float temp0_253[0x4] = _mm_add_ps(temp0_247, _mm_mul_ps(temp0_248, temp0_251))
        float temp0_254[0x4] = _mm_shuffle_ps(temp0_204, temp0_204, 0)
        float temp0_255[0x4] = _mm_shuffle_ps(temp0_204, temp0_204, 0xaa)
        float temp0_256[0x4] = _mm_shuffle_ps(temp0_204, temp0_204, 0x55)
        float temp0_258[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_204, temp0_204, 0xff), temp0_251)
        float temp0_259[0x4] = _mm_mul_ps(temp0_256, temp0_233)
        float temp0_260[0x4] = _mm_mul_ps(temp0_254, temp0_237)
        float temp0_261[0x4] = _mm_mul_ps(temp0_255, temp0_243)
        var_1e8 = temp0_253
        float temp0_264[0x4] =
            _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_259, temp0_260), temp0_261), temp0_258)
        float temp0_266[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_215, temp0_215, 0x55), temp0_233)
        float temp0_267[0x4] = _mm_shuffle_ps(temp0_215, temp0_215, 0)
        float temp0_268[0x4] = _mm_shuffle_ps(temp0_215, temp0_215, 0xaa)
        float temp0_270[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_215, temp0_215, 0xff), temp0_251)
        float temp0_271[0x4] = _mm_mul_ps(temp0_267, temp0_237)
        float temp0_272[0x4] = _mm_mul_ps(temp0_268, temp0_243)
        var_1d8 = temp0_264
        float temp0_273[0x4] = _mm_add_ps(temp0_266, temp0_271)
        float temp0_275[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_235, temp0_235, 0), temp0_237)
        float temp0_276[0x4] = _mm_add_ps(temp0_273, temp0_272)
        float temp0_278[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_235, temp0_235, 0xaa), temp0_243)
        float temp0_279[0x4] = _mm_add_ps(temp0_276, temp0_270)
        float temp0_281[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_235, temp0_235, 0x55), temp0_233)
        float temp0_283[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_235, temp0_235, 0xff), temp0_251)
        var_1c8 = temp0_279
        var_1b8 = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_281, temp0_275), temp0_278), temp0_283)
        
        do
            int64_t j_1 = 0
            float (* rbx_3)[0x4] = rsi_3
            
            do
                if (_finite(_mm_cvtps_pd((*rbx_3)[0].q)[0].q) == 0)
                    i = zx.q(i_6)
                    goto label_14179de82
                
                j_1 += 1
                rbx_3 = &(*rbx_3)[1]
            while (j_1 s< 4)
            
            i += 1
            rsi_3 = &rsi_3[1]
        while (i s< 4)
        
        i.b = 1
        float (* r10_4)[0x4] = (sx.q(arg1[1].d) << 6) + *(*arg1 + 0x290)
        int64_t i_8 = 4
        void* rcx_25 = &var_1e8 - r10_4
        i_6 = 1
        void* rdx_25 = &var_358 - r10_4
        arg_20 = 1
        void* r8_8 = &var_1e8[1] - r10_4
        void* rax_44 = &(*r10_4)[2]
        void* r9_7 = &var_358:4 - r10_4
        int64_t i_5
        
        do
            zmm0_1 = *(rcx_25 + rax_44 - 8)
            zmm0_1[0] = zmm0_1[0] f+ *(rax_44 - 8)
            zmm1 = *(r8_8 + rax_44 - 8)
            zmm1[0] = zmm1[0] f+ *(rax_44 - 4)
            *(rdx_25 + rax_44 - 8) = zmm0_1[0]
            zmm0_1 = *(rcx_25 + rax_44)
            zmm0_1[0] = zmm0_1[0] f+ *rax_44
            *(r9_7 + rax_44 - 8) = zmm1[0]
            zmm1 = *(r8_8 + rax_44)
            zmm1[0] = zmm1[0] f+ *(rax_44 + 4)
            *(rdx_25 + rax_44) = zmm0_1[0]
            *(r9_7 + rax_44) = zmm1[0]
            rax_44 += 0x10
            i_5 = i_8
            i_8 -= 1
        while (i_5 != 1)
        zmm3_1 = var_2c8_1
        *r10_4 = var_358.o
        r10_4[1] = var_348.o
        r10_4[2] = var_338.o
        r10_4[3] = temp0_251
        int64_t rdx_26 = sx.q(arg1[1].d)
        int64_t rcx_26 = *(*arg1 + 0x2c0)
        zmm3_1[0] = zmm3_1[0] f+ *(rcx_26 + (rdx_26 << 2))
        *(rcx_26 + (rdx_26 << 2)) = zmm3_1[0]
        int64_t rax_46 = sx.q(arg1[1].d)
        var_208_1[0] = var_208_1[0] * zmm3_1[0]
        int64_t rdx_27 = rax_46 * 3
        int64_t rcx_27 = *(*arg1 + 0x28)
        var_208_1[0] = var_208_1[0] f+ *(rcx_27 + (rdx_27 << 2))
        *(rcx_27 + (rdx_27 << 2)) = var_208_1[0]
        var_178_1[0] = var_178_1[0] * zmm3_1[0]
        var_178_1[0] = var_178_1[0] f+ *(rcx_27 + (rdx_27 << 2) + 4)
        *(rcx_27 + (rdx_27 << 2) + 4) = var_178_1[0]
        zmm0_1 = var_1f8
        zmm0_1[0] = zmm0_1[0] * zmm3_1[0]
        zmm0_1[0] = zmm0_1[0] f+ *(rcx_27 + (rdx_27 << 2) + 8)
        *(rcx_27 + (rdx_27 << 2) + 8) = zmm0_1[0]
        int64_t rdx_28 = sx.q(r13_1[1].d) * 3
        int64_t rcx_28 = *(*r13_1 + 0x1b8)
        int64_t rax_50 = sx.q(arg1[1].d)
        zmm3_1[0] = zmm3_1[0] f* *(rcx_28 + (rdx_28 << 2))
        int64_t r9_8 = rax_50 * 3
        void* rax_51 = *arg1
        zmm1 = *(rcx_28 + (rdx_28 << 2) + 4)
        zmm2 = *(rcx_28 + (rdx_28 << 2) + 8)
        zmm1[0] = zmm1[0] * zmm3_1[0]
        int64_t r8_9 = *(rax_51 + 0x1b8)
        zmm2[0] = zmm2[0] * zmm3_1[0]
        zmm3_1[0] = zmm3_1[0] f+ *(r8_9 + (r9_8 << 2))
        zmm1[0] = zmm1[0] f+ *(r8_9 + (r9_8 << 2) + 4)
        zmm2[0] = zmm2[0] f+ *(r8_9 + (r9_8 << 2) + 8)
        *(r8_9 + (r9_8 << 2)) = zmm3_1[0]
        *(r8_9 + (r9_8 << 2) + 4) = zmm1[0]
        *(r8_9 + (r9_8 << 2) + 8) = zmm2[0]
        int64_t rdx_29 = sx.q(r13_1[1].d) * 3
        int64_t rcx_29 = *(*r13_1 + 0x1d0)
        zmm1 = *(rcx_29 + (rdx_29 << 2) + 4)
        zmm2 = *(rcx_29 + (rdx_29 << 2) + 8)
        int64_t r9_9 = sx.q(arg1[1].d) * 3
        void* rax_55 = *arg1
        zmm3_1[0] = zmm3_1[0] f* *(rcx_29 + (rdx_29 << 2))
        zmm1[0] = zmm1[0] * zmm3_1[0]
        int64_t r8_10 = *(rax_55 + 0x1d0)
        zmm2[0] = zmm2[0] * zmm3_1[0]
        zmm3_1[0] = zmm3_1[0] f+ *(r8_10 + (r9_9 << 2))
        zmm1[0] = zmm1[0] f+ *(r8_10 + (r9_9 << 2) + 4)
        zmm2[0] = zmm2[0] f+ *(r8_10 + (r9_9 << 2) + 8)
        *(r8_10 + (r9_9 << 2)) = zmm3_1[0]
        *(r8_10 + (r9_9 << 2) + 4) = zmm1[0]
        *(r8_10 + (r9_9 << 2) + 8) = zmm2[0]
    label_14179de82:
        zmm14 = zx.o(0)
    else if (r9_6[3][0].q == r13_1)
        void* rax_34 = *r13_1
        int64_t rcx_17 = sx.q(r13_1[1].d)
        zmm5_1 = r9_6[2]
        zmm12 = data_14399f668
        int64_t rdx_19 = *(rax_34 + 0x28)
        zmm15 = data_143ef8240
        int64_t r8_6 = rcx_17 * 3
        zmm2 = *(rdx_19 + (r8_6 << 2) + 4)
        zmm6_1 = *((rcx_17 << 4) + *(rax_34 + 0x68))
        float temp0_7[0x4] =
            _mm_unpacklo_ps(*(rdx_19 + (r8_6 << 2)), (*(rdx_19 + (r8_6 << 2) + 8))[0].q)
        float temp0_8[0x4] = _mm_unpacklo_ps(zmm12, data_14399f670[0].q)
        float temp0_10[0x4] = _mm_unpacklo_ps(temp0_7, _mm_unpacklo_ps(zmm2, zmm14[0].q)[0].q)
        float temp0_12[0x4] =
            _mm_unpacklo_ps(temp0_8, _mm_unpacklo_ps(data_14399f66c, zmm14[0].q)[0].q)
        var_2b8.o = zmm5_1
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm5_1, temp0_12), zmm15, 1)) == 0)
            zmm2 = *r9_6
            zmm3_1 = r9_6[1]
            float temp0_145[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
            float temp0_147[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0), temp0_145)
            float temp0_148[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
            float temp0_149[0x4] = _mm_mul_ps(zmm3_1, temp0_12)
            float temp0_150[0x4] = __mulps_xmmps_memps(temp0_147, data_143ef7f10)
            float temp0_151[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
            float temp0_153[0x4] = _mm_add_ps(temp0_150, _mm_mul_ps(temp0_151, zmm2))
            float temp0_155[0x4] = _mm_mul_ps(temp0_148, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
            float temp0_158[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
            float temp0_159[0x4] = __mulps_xmmps_memps(temp0_155, data_143ef7f00)
            float temp0_160[0x4] = _mm_shuffle_ps(temp0_149, temp0_149, 0xd2)
            float temp0_161[0x4] = __mulps_xmmps_memps(temp0_158, data_143ef7ef0)
            float temp0_162[0x4] = _mm_add_ps(temp0_153, temp0_159)
            float temp0_163[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2)
            float temp0_164[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9)
            float temp0_165[0x4] = _mm_mul_ps(temp0_160, temp0_164)
            zmm7 = _mm_add_ps(temp0_162, temp0_161)
            float temp0_169[0x4] = _mm_sub_ps(temp0_165, 
                _mm_mul_ps(_mm_shuffle_ps(temp0_149, temp0_149, 0xc9), temp0_163))
            float temp0_170[0x4] = _mm_add_ps(temp0_169, temp0_169)
            float temp0_171[0x4] = _mm_shuffle_ps(temp0_170, temp0_170, 0xd2)
            float temp0_172[0x4] = _mm_shuffle_ps(temp0_170, temp0_170, 0xc9)
            float temp0_173[0x4] = _mm_mul_ps(temp0_171, temp0_164)
            float temp0_174[0x4] = _mm_mul_ps(temp0_172, temp0_163)
            float temp0_175[0x4] = _mm_mul_ps(temp0_170, temp0_151)
            zmm5_1 = _mm_add_ps(
                _mm_add_ps(_mm_sub_ps(temp0_173, temp0_174), _mm_add_ps(temp0_175, temp0_149)), 
                temp0_10)
        else
            zmm10 = data_143ef7f20
            float temp0_16[0x4] = _mm_add_ps(zmm6_1, zmm6_1)
            float temp0_17[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 4)
            float temp0_18[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
            float temp0_19[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
            float temp0_20[0x4] = _mm_mul_ps(zmm6_1, temp0_16)
            float temp0_22[0x4] = _mm_mul_ps(temp0_17, _mm_shuffle_ps(temp0_16, temp0_16, 0x29))
            float temp0_23[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x12)
            float temp0_24[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x1a)
            float temp0_25[0x4] = _mm_mul_ps(temp0_19, temp0_23)
            float temp0_27[0x4] = _mm_add_ps(temp0_24, _mm_shuffle_ps(temp0_20, temp0_20, 1))
            float temp0_28[0x4] = _mm_add_ps(temp0_25, temp0_22)
            float temp0_29[0x4] = _mm_sub_ps(temp0_22, temp0_25)
            float temp0_30[0x4] = _mm_sub_ps(zmm10, temp0_27)
            float temp0_31[0x4] = _mm_mul_ps(temp0_28, temp0_12)
            float temp0_32[0x4] = _mm_mul_ps(temp0_18, temp0_29)
            zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_30, temp0_12), data_143ef7f30)
            float temp0_35[0x4] = _mm_shuffle_ps(temp0_32, zmm1, 0x32)
            float temp0_37[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_31, zmm1, 0), temp0_35, 0x82)
            float temp0_38[0x4] = _mm_shuffle_ps(temp0_31, zmm1, 0x31)
            float temp0_39[0x4] = _mm_shuffle_ps(temp0_31, temp0_32, 0x12)
            float temp0_41[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_32, zmm1, 0x10), temp0_38, 0x88)
            float temp0_42[0x4] = _mm_shuffle_ps(temp0_39, zmm1, 0xe8)
            zmm1 = *r9_6
            zmm10[0].q = temp0_10 u>> 0x40
            float temp0_43[0x4] = _mm_add_ps(zmm1, zmm1)
            float temp0_44[0x4] = _mm_shuffle_ps(temp0_10, zmm10, 0xc4)
            float temp0_45[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
            float temp0_46[0x4] = _mm_mul_ps(temp0_43, zmm1)
            float temp0_48[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_43, temp0_43, 0x29), temp0_45)
            float temp0_49[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
            float temp0_50[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0x1a)
            float temp0_52[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_43, temp0_43, 0x12), temp0_49)
            float temp0_54[0x4] = _mm_add_ps(temp0_50, _mm_shuffle_ps(temp0_46, temp0_46, 1))
            float temp0_55[0x4] = _mm_add_ps(temp0_52, temp0_48)
            float temp0_56[0x4] = _mm_sub_ps(temp0_48, temp0_52)
            float temp0_57[0x4] = _mm_sub_ps(zmm10, temp0_54)
            float temp0_58[0x4] = _mm_mul_ps(temp0_55, zmm5_1)
            float temp0_59[0x4] = __mulps_xmmps_memps(temp0_57, var_2b8.o)
            float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9), temp0_56)
            zmm1 = __andps_xmmxud_memxud(temp0_59, data_143ef7f30)
            float temp0_65[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_58, zmm1, 0), 
                _mm_shuffle_ps(temp0_61, zmm1, 0x32), 0x82)
            float temp0_66[0x4] = _mm_shuffle_ps(temp0_58, zmm1, 0x31)
            float temp0_67[0x4] = _mm_shuffle_ps(temp0_61, zmm1, 0x10)
            float temp0_68[0x4] = _mm_shuffle_ps(temp0_58, temp0_61, 0x12)
            float temp0_69[0x4] = _mm_shuffle_ps(temp0_67, temp0_66, 0x88)
            float temp0_70[0x4] = _mm_shuffle_ps(temp0_68, zmm1, 0xe8)
            zmm5_1 = r9_6[1]
            float temp0_71[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xaa)
            float temp0_72[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
            float temp0_73[0x4] = _mm_mul_ps(temp0_71, temp0_42)
            float temp0_74[0x4] = _mm_mul_ps(temp0_72, temp0_41)
            zmm10[0].q = zmm5_1 u>> 0x40
            float temp0_75[0x4] = _mm_shuffle_ps(zmm5_1, zmm10, 0xc4)
            float temp0_76[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0)
            float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xff), temp0_44)
            float temp0_80[0x4] = _mm_add_ps(temp0_74, _mm_mul_ps(temp0_76, temp0_37))
            float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0), temp0_37)
            float temp0_83[0x4] = _mm_add_ps(temp0_80, temp0_73)
            float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xaa), temp0_42)
            float temp0_86[0x4] = _mm_add_ps(temp0_83, temp0_78)
            float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0x55), temp0_41)
            float temp0_89[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0xff)
            var_358.o = temp0_86
            float temp0_90[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0x55)
            float temp0_91[0x4] = _mm_add_ps(temp0_88, temp0_82)
            float temp0_92[0x4] = _mm_mul_ps(temp0_90, temp0_41)
            float temp0_93[0x4] = _mm_mul_ps(temp0_89, temp0_44)
            float temp0_94[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0)
            float temp0_95[0x4] = _mm_add_ps(temp0_91, temp0_85)
            float temp0_96[0x4] = _mm_mul_ps(temp0_94, temp0_37)
            float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_70, temp0_70, 0xaa), temp0_42)
            float temp0_99[0x4] = _mm_add_ps(temp0_95, temp0_93)
            float temp0_100[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0xff)
            float temp0_101[0x4] = _mm_add_ps(temp0_92, temp0_96)
            float temp0_102[0x4] = _mm_mul_ps(temp0_100, temp0_44)
            float temp0_103[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0)
            var_348.o = temp0_99
            float temp0_104[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0x55)
            float temp0_105[0x4] = _mm_add_ps(temp0_101, temp0_98)
            float temp0_106[0x4] = _mm_mul_ps(temp0_104, temp0_41)
            float temp0_108[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0xaa), temp0_42)
            float temp0_109[0x4] = _mm_mul_ps(temp0_103, temp0_37)
            float temp0_110[0x4] = _mm_add_ps(temp0_105, temp0_102)
            float temp0_112[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0xff), temp0_44)
            var_338.o = temp0_110
            int96_t var_328_1 =
                _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_106, temp0_109), temp0_108), temp0_112)[0].12
            int128_t zmm10_1
            float zmm12_1[0x4]
            int64_t zmm14_1
            zmm10_1, zmm12_1, zmm14_1, zmm15 = sub_1407740e0(&var_358, 0x322bcc77)
            float zmm2_1[0x4] = var_358.d
            float zmm1_1 = var_358:4.d
            float zmm0_2[0x4] = var_350
            zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, _mm_mul_ps(var_2b8.o, zmm12_1), 2), 
                data_143ef8230 ^ zmm10_1) ^ data_143ef8230
            zmm2_1[0] = zmm2_1[0] * zmm15[0]
            zmm1_1 = zmm1_1 * zmm15[0]
            var_358.d = zmm2_1[0]
            zmm0_2[0] = zmm0_2[0] * zmm15[0]
            var_358:4.d = zmm1_1
            float temp0_119[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
            zmm1_1 = var_348:4.d * temp0_119[0]
            var_350 = zmm0_2[0]
            zmm0_2 = var_340
            zmm0_2[0] = zmm0_2[0] * temp0_119[0]
            float zmm3_2 = var_348.d * temp0_119[0]
            zmm2_1 = var_338.d
            var_348:4.d = zmm1_1
            var_340 = zmm0_2[0]
            zmm0_2 = var_330
            float temp0_120[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
            zmm1_1 = var_338:4.d * temp0_120[0]
            zmm0_2[0] = zmm0_2[0] * temp0_120[0]
            zmm2_1[0] = zmm2_1[0] * temp0_120[0]
            var_338:4.d = zmm1_1
            var_330 = zmm0_2[0]
            var_348.d = zmm3_2
            var_338.d = zmm2_1[0]
            uint32_t var_188[0x4]
            sub_14077e4a0(&var_188, &var_358)
            zmm5_1 = var_188
            zmm7 = data_143ef7ee0
            float temp0_121[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
            float temp0_123[0x4] = _mm_add_ps(temp0_121, _mm_shuffle_ps(temp0_121, temp0_121, 0x4e))
            float temp0_125[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_123, temp0_123, 0x39), temp0_123)
            float temp0_126[0x4] = _mm_rsqrt_ps(temp0_125)
            float temp0_127[0x4] = _mm_mul_ps(temp0_125, zmm7)
            float temp0_132[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(temp0_126, temp0_126), temp0_127)), 
                    temp0_126), 
                temp0_126)
            float temp0_135[0x4] =
                _mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(temp0_132, temp0_132), temp0_127))
            float temp0_137[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_125, 2)
            float temp0_139[0x4] = _mm_add_ps(_mm_mul_ps(temp0_135, temp0_132), temp0_132)
            float temp0_140[0x4] = _mm_unpacklo_ps(var_328_1:4.d, zmm14_1)
            zmm7 = _mm_and_ps(_mm_mul_ps(temp0_139, zmm5_1) ^ data_143ef7ed0, temp0_137)
                ^ data_143ef7ed0
            zmm5_1 =
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_328_1.d, var_328_1:8.d[0].q), temp0_140[0].q)
            var_188 = zmm7
        
        r8_7 = *rbx_1
        var_1f8 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa)
        var_208_1 = zmm5_1
        zmm0_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
        var_258 = zmm7
        goto label_14179d891
    var_310[2] &= not.d(var_2a8[3])
    sub_14059bdd0(&var_2a8[2])
    r10_1 = var_278
    rdx_17 = var_260
    rbx = arg2
