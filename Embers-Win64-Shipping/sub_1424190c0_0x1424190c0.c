// 函数: sub_1424190c0
// 地址: 0x1424190c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
float zmm8[0x4] = *(arg2 + 0x34)
zmm8[0] = zmm8[0] * 0.75f
int32_t rcx = int.d(zmm8[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm8[0]))
    _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm8, zmm8[0].q)) & 1)))

char rax_5 = data_143de5480
*(arg2 + 0x30)
int64_t rdi = data_143f5bd60
int64_t rcx_2

if (rax_5 == 0)
    rcx_2 = 0
else
    bool cond:0_1 = GetCurrentThreadId() != data_143de5470
    rax_5 = data_143de5480
    rcx_2.b = cond:0_1

if (*(rdi + (rcx_2 << 2)) != 0)
    int64_t rdi_1 = data_143f5bd78
    int64_t rcx_3
    
    if (rax_5 == 0)
        rcx_3 = 0
    else
        bool cond:1_1 = GetCurrentThreadId() != data_143de5470
        rax_5 = data_143de5480
        rcx_3.b = cond:1_1
    
    int64_t rdi_2 = data_143f5bd90
    _mm_cvtepi32_ps(zx.o(*(rdi_1 + (rcx_3 << 2))))
    int64_t rcx_4
    
    if (rax_5 == 0)
        rcx_4 = 0
    else
        rcx_4.b = GetCurrentThreadId() != data_143de5470
    
    zmm8 = *(arg2 + 0x34)
    uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(*(rdi_2 + (rcx_4 << 2))))
    zmm8[0] = zmm8[0] f- zmm0.d

void* rax_8 = sub_1423de050()
void* rcx_5 = *(arg2 + 0x260)

if (*(rcx_5 + 0x94) == 0)
    *(rcx_5 + 0xa4)

int64_t var_330 = 0
int32_t var_328 = 0
sub_1405947f0(&var_330, 2)
int32_t rax_9 = var_328 + 2
var_328 = rax_9

if (rax_9 s> 0)
    sub_140594770(&var_330)

UnDecorator::getReferenceType(var_330, &(*42693578WOCbEVzoHuIMJxKLNP8Q2SgTUqaclefhjkmrvy469")[
    0x13], 4)
float var_348
void var_310
float zmm6_1
float zmm8_1
int32_t zmm9_1
float zmm11
int32_t zmm12_1
zmm6_1, zmm8_1, zmm9_1, zmm11, zmm12_1 =
    sub_1424232b0(arg2, rax_8, &var_330, &var_310, &var_348, 1, var_348.b)
int64_t rcx_10 = var_330

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int32_t* rdi_3 = *(arg2 + 0x260)
int32_t zmm1 = data_143dbb1f0:4.d
uint32_t rax_11 = zx.d(data_143a304c9)
float zmm10 = zmm11 / zmm6_1 * var_348
uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(data_143a304ca))
uint32_t rax_12 = zx.d(data_143a304c8)
zmm5.d = zmm5.d f* 0.00392156886f
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(rax_11))
_mm_shuffle_ps(zmm5, zmm5, 0xe1)
void* rax_13 = *(arg1 + 0x118)
zmm2.d = zmm2.d f* 0.00392156886f
uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(rax_12))
zmm5.d = zmm2.d
void* rax_14 = *(arg1 + 0x40)
float zmm4 = *(rax_13 + 0x50) * 0.00999999978f
_mm_shuffle_ps(zmm5, zmm5, 0xc6)
zmm3.d = zmm3.d f* 0.00392156886f
int64_t var_2b0 = *(rax_14 + 0x78)
int128_t var_2c8
__builtin_memcpy(&var_2c8, 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f", 0x14)
int128_t zmm0_1 = data_143dbb1f0.d
zmm5.d = zmm3.d
_mm_shuffle_ps(zmm5, zmm5, 0x27)
zmm5.d = zmm4
float var_2cc = zmm8_1 - zmm10
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0x39)
var_348 = zmm10
int32_t var_300 = zmm12_1
int32_t var_2d0 = zmm9_1
int32_t var_294 = zmm0_1.d
int32_t var_290 = zmm1
int64_t var_2fc = 0
char var_2f0 = 0
int64_t var_2e8 = 0
void** const var_308 = &data_1433443d0
int64_t var_2a8
__builtin_memset(&var_2a8, 0, 0x14)
uint128_t var_320 = zmm5
int32_t var_2f4 = 0xb
uint128_t var_2e0 = zmm5
int128_t zmm6_2
float zmm7_1
float zmm8_2
int128_t zmm10_1
int128_t zmm12_2
zmm6_2, zmm7_1, zmm8_2, zmm10_1, zmm12_2 = sub_142408260(&var_308, rdi_3)

if (rdi_3[0x28] == 1)
    zmm6_2 = sub_14240e030(rdi_3, 0)

int32_t i = *(arg1 + 0x60) - *(arg1 + 0x64)
int32_t var_33c

if (*(arg1 + 0x58) != 0)
    void var_288
    sub_140acc920(&var_288, *(arg1 + 0x118) + 0x58)
    var_33c = zmm12_2.d
    var_320.q = 0
    var_320:8.q = 0
    float var_338_1 = zmm8_2 - 5f f- zmm10_1.d
    int64_t rax_15 = sub_1423dd950()
    void var_278
    void** var_248
    sub_1420767c0(&var_248, &var_33c, sub_140aae2f0(&var_278, &var_320), rax_15, &var_288)
    int64_t* var_270
    
    if (var_270 != 0)
        var_270[1].d -= 1
        
        if (var_270[1].d == 1)
            (**var_270)(var_270)
            int32_t rax_19 = *(var_270 + 0xc)
            *(var_270 + 0xc) -= 1
            
            if (rax_19 == 1)
                (*(*var_270 + 8))(var_270, 1)
        
        zmm7_1 = var_348
    
    int64_t rcx_19 = var_320.q
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    zmm10_1 ^= data_142d3f780
    int128_t var_220_1 = data_14399f5c0
    
    if (not(zmm6_2.d f<= zmm10_1.d))
        while (i s>= 0)
            if (i s< *(arg1 + 0x58))
                int64_t rbx_4 = sx.q(i) << 4
                float var_344
                float var_340
                int512_t zmm2_1
                int512_t zmm3_1
                int128_t zmm9_2
                float zmm11_1
                zmm2_1, zmm3_1, zmm6_2, zmm7_1, zmm8_2, zmm9_2, zmm10_1, zmm11_1, zmm12_2 =
                    sub_1424232b0(arg2, rax_8, *(arg1 + 0x50) + rbx_4, &var_344, &var_340, 1)
                float zmm1_1 = zmm11_1 * var_340
                var_344 = var_344 * zmm11_1
                var_340 = zmm1_1
                
                if (not(zmm1_1 <= zmm7_1))
                    zmm6_2.d = zmm6_2.d f- (zmm1_1 - zmm7_1)
                    zmm9_2 = zmm6_2
                
                void var_260
                int64_t* rax_21 = sub_140aae420(&var_260, *(arg1 + 0x50) + rbx_4)
                int64_t var_118
                int64_t rdx_10 = var_118
                var_118 = *rax_21
                *rax_21 = rdx_10
                int64_t var_110
                int64_t rdx_11 = var_110
                var_110 = rax_21[1]
                rax_21[1] = rdx_11
                int32_t var_108_1 = rax_21[2].d
                int64_t* var_258
                
                if (var_258 != 0)
                    var_258[1].d -= 1
                    
                    if (var_258[1].d == 1)
                        (**var_258)(var_258)
                        int32_t rax_25 = *(var_258 + 0xc)
                        *(var_258 + 0xc) -= 1
                        
                        if (rax_25 == 1)
                            (*(*var_258 + 8))(var_258, 1)
                    
                    zmm7_1 = var_348
                
                void* rbx_6 = *(arg2 + 0x260)
                zmm3_1.o = zmm9_2
                zmm2_1.o = zmm12_2
                var_248[1](&var_248, rbx_6, zmm2_1, zmm3_1)
                
                if (*(rbx_6 + 0xa0) == 1)
                    zmm6_2 = sub_14240e030(rbx_6, 0)
            
            zmm6_2.d = zmm6_2.d f- zmm7_1
            i -= 1
            
            if (not(zmm6_2.d f> zmm10_1.d))
                break
    
    sub_141fa61e0(&var_248)

var_33c = int.d(zmm12_2.d)
int32_t var_338_2 = int.d(zmm8_2 + 6f)
void** result = sub_1424197a0(arg1, arg2, var_33c.q)
__security_check_cookie(rax_1 ^ &var_378)
return result
