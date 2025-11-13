// 函数: sub_141f0ae40
// 地址: 0x141f0ae40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
int64_t r10 = sx.q((*U"1111")[sx.q(data_1439c7a08)])
uint64_t rax_3 = data_143f025b8

if (((r10.d u> 0x18 || not(test_bit(0x100a040, r10.d))) && *(r10 * 0x14 + &data_143f025f0) != rax_3)
        || ((r10.d u> 0x1e || not(test_bit(0x6562c800, r10.d)))
        && (*(r10 * 0x14 + &data_143f025fc) & 1) == 0) || (r10.d u<= 0x1b && test_bit(0x857c041, r10.d)))
    rax_3.b = 0
else
    int64_t r8 = r10 * 5
    int32_t rdx_2 = *((r8 << 2) + &data_143f025fc)
    
    if (((rdx_2 u>> 2).b & 1) != 0 || r10.d == 0xb || r10.d == 0x1e)
        rax_3.b = 0
    else
        int64_t rcx_2 = *((r8 << 2) + &data_143f025f0)
        
        if ((rcx_2 != rax_3 || (rdx_2.b & 1) == 0)
                && (r10.d u> 0x30 || not(test_bit(0x1000030200000, r10)))
                && rcx_2 != data_143f025c0 && (r10 - 0x19).d u> 1)
            if (sub_1422eb710().b != 0)
                rax_3.b = 0
            else
                rax_3.b = 1
        else
            rax_3.b = 0

char rbx = arg2 ^ rax_3.b
void* rdi = nullptr
int32_t rdx_3 = 6
int32_t rbx_1 = 0
void* var_278 = nullptr
int32_t var_268 = 0
int32_t var_264 = 6
int32_t var_358_5
uint128_t var_2f8
uint128_t var_138
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2
uint128_t zmm3
uint128_t zmm4
uint128_t zmm5
uint128_t zmm6
uint128_t zmm8
uint128_t zmm9
uint128_t zmm10
uint128_t zmm11
uint128_t zmm12
uint128_t zmm13
uint128_t zmm14
uint128_t zmm15

if (rbx != 0)
    zmm3 = zx.o(arg3[3])
    zmm13 = zx.o(*arg3)
    zmm8.d = zmm3.d f- zmm13.d
    zmm4 = arg3[5].d
    zmm10 = data_143dbb200
    zmm5.d = (*(arg3 + 0x24)).d f- zmm13.d
    zmm11 = data_143dbb1fc
    zmm12 = data_143dbb1f8
    int32_t rax_23 = arg3[4].d
    zmm1 = *(arg3 + 0x2c)
    uint64_t var_318_6 = zmm3.q
    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    zmm15 = arg3[1].d
    zmm6.d = rax_23.d f- zmm15.d
    zmm14 = zmm13.q:4.d
    zmm1.d = zmm1.d f- zmm15.d
    zmm2.d = zmm2.d f- zmm14.d
    zmm4.d = zmm4.d f- zmm14.d
    zmm0 = zmm6
    zmm6.d = zmm6.d f* zmm5.d
    zmm9 = zmm2
    zmm2.d = zmm2.d f* zmm5.d
    zmm0.d = zmm0.d f* zmm4.d
    zmm9.d = zmm9.d f* zmm1.d
    zmm9.d = zmm9.d f- zmm0.d
    zmm0.d = zmm8.d f* zmm1.d
    zmm8.d = zmm8.d f* zmm4.d
    zmm6.d = zmm6.d f- zmm0.d
    zmm0.d = zmm9.d f* zmm9.d
    zmm8.d = zmm8.d f- zmm2.d
    zmm3.d = zmm6.d f* zmm6.d
    zmm1.d = zmm8.d f* zmm8.d
    zmm3.d = zmm3.d f+ zmm0.d
    zmm3.d = zmm3.d f+ zmm1.d
    int32_t var_358_6
    
    if (not(zmm3.d f!= 1f))
        var_358_6 = zmm9.d
        int32_t var_354_11 = zmm6.d
        int32_t var_350_13 = zmm8.d
    else if (zmm3.d f>= 9.99999994e-09f)
        zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
        zmm3.d = zmm3.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm1.d = zmm3.d f* zmm0.d
        zmm2.d = 0.5f f- zmm1.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1.d = zmm5.d f* zmm5.d
        zmm3.d = zmm3.d f* zmm1.d
        zmm4.d = 0.5f f- zmm3.d
        zmm0.d = zmm5.d f* zmm4.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm0.d = zmm5.d f* zmm9.d
        zmm1.d = zmm5.d f* zmm6.d
        zmm5.d = zmm5.d f* zmm8.d
        zmm9 = zmm0
        var_358_6 = zmm0.d
        zmm6 = zmm1
        int32_t var_354_13 = zmm1.d
        int32_t var_350_15 = zmm5.d
        zmm8 = zmm5
    else
        zmm6 = zmm11
        var_358_6 = zmm12.d
        int32_t var_354_12 = zmm6.d
        zmm9 = zmm12
        int32_t var_350_14 = zmm10.d
        zmm8 = zmm10
    
    zmm3 = zx.o(arg3[9])
    zmm0 = var_358_6.o
    zmm4 = arg3[0xb].d
    zmm5 = zx.o(*(arg3 + 0x54))
    zmm8.d = zmm8.d f* zmm15.d
    int32_t rax_26 = arg3[0xa].d
    zmm1 = *(arg3 + 0x5c)
    _mm_shuffle_ps(zmm0, zmm0, 0x93)
    zmm9.d = zmm9.d f* zmm13.d
    zmm13 = zx.o(arg3[3])
    zmm5.d = zmm5.d f- zmm13.d
    zmm6.d = zmm6.d f* zmm14.d
    zmm15 = arg3[4].d
    zmm1.d = zmm1.d f- zmm15.d
    uint64_t var_318_7 = zmm3.q
    zmm9.d = zmm9.d f+ zmm6.d
    zmm6.d = rax_26.d f- zmm15.d
    zmm14 = zmm13.q:4.d
    zmm2.d = _mm_shuffle_ps(zmm3, zmm3, 0x55).d f- zmm14.d
    zmm9.d = zmm9.d f+ zmm8.d
    zmm8.d = zmm3.d f- zmm13.d
    zmm4.d = zmm4.d f- zmm14.d
    zmm0.d = zmm9.d
    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x39)
    var_2f8 = zmm0
    var_358_6.o = zmm0
    var_138 = zmm0
    zmm0.d = zmm6.d f* zmm4.d
    zmm9.d = zmm2.d f* zmm1.d
    zmm6.d = zmm6.d f* zmm5.d
    zmm9.d = zmm9.d f- zmm0.d
    zmm2.d = zmm2.d f* zmm5.d
    zmm0 = zmm8
    zmm8.d = zmm8.d f* zmm4.d
    zmm0.d = zmm0.d f* zmm1.d
    zmm8.d = zmm8.d f- zmm2.d
    zmm6.d = zmm6.d f- zmm0.d
    zmm0.d = zmm9.d f* zmm9.d
    zmm1.d = zmm8.d f* zmm8.d
    zmm3.d = zmm6.d f* zmm6.d
    zmm3.d = zmm3.d f+ zmm0.d
    zmm3.d = zmm3.d f+ zmm1.d
    int32_t var_358_7
    int32_t var_350_17
    
    if (zmm3.d f== 1f)
        var_350_17 = zmm8.d
        var_358_7 = zmm9.d
    else if (zmm3.d f>= 9.99999994e-09f)
        zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
        zmm3.d = zmm3.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm1.d = zmm3.d f* zmm0.d
        zmm2.d = 0.5f f- zmm1.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1.d = zmm5.d f* zmm5.d
        zmm3.d = zmm3.d f* zmm1.d
        zmm4.d = 0.5f f- zmm3.d
        zmm0.d = zmm5.d f* zmm4.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm9.d = zmm9.d f* zmm5.d
        zmm6.d = zmm6.d f* zmm5.d
        zmm8.d = zmm8.d f* zmm5.d
        var_350_17 = zmm8.d
        var_358_7 = zmm9.d
    else
        var_358_7 = zmm12.d
        zmm9 = zmm12
        int32_t var_350_16 = zmm10.d
        zmm6 = zmm11
        zmm8 = zmm10
    zmm3 = *(arg3 + 4)
    zmm9.d = zmm9.d f* zmm13.d
    zmm13 = zx.o(*(arg3 + 0x3c))
    int32_t rax_29 = arg3[7].d
    zmm4.d = (*arg3).d f- zmm13.d
    zmm1 = arg3[1].d
    int32_t var_354_14 = zmm6.d
    zmm0 = var_358_7.o
    _mm_shuffle_ps(zmm0, zmm0, 0x93)
    zmm8.d = zmm8.d f* zmm15.d
    zmm6.d = zmm6.d f* zmm14.d
    zmm15 = *(arg3 + 0x44)
    zmm1.d = zmm1.d f- zmm15.d
    zmm14 = zmm13.q:4.d
    zmm9.d = zmm9.d f+ zmm6.d
    zmm3.d = zmm3.d f- zmm14.d
    zmm9.d = zmm9.d f+ zmm8.d
    zmm8.d = rax_29.d f- zmm15.d
    zmm0.d = zmm9.d
    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x39)
    var_358_7.o = zmm0
    uint128_t var_128_1 = zmm0
    zmm0 = zx.o(arg3[6])
    uint64_t var_318_8 = zmm0.q
    zmm2 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    zmm9.d = zmm0.d f- zmm13.d
    zmm0.d = zmm8.d f* zmm3.d
    zmm2.d = zmm2.d f- zmm14.d
    zmm8.d = zmm8.d f* zmm4.d
    zmm6 = zmm2
    zmm2.d = zmm2.d f* zmm4.d
    zmm6.d = zmm6.d f* zmm1.d
    zmm6.d = zmm6.d f- zmm0.d
    zmm0 = zmm9
    zmm9.d = zmm9.d f* zmm3.d
    zmm0.d = zmm0.d f* zmm1.d
    zmm9.d = zmm9.d f- zmm2.d
    zmm8.d = zmm8.d f- zmm0.d
    zmm0.d = zmm6.d f* zmm6.d
    zmm1.d = zmm9.d f* zmm9.d
    zmm3.d = zmm8.d f* zmm8.d
    zmm3.d = zmm3.d f+ zmm0.d
    zmm3.d = zmm3.d f+ zmm1.d
    int32_t var_354_16
    int32_t var_350_19
    
    if (zmm3.d f== 1f)
        var_350_19 = zmm9.d
        var_354_16 = zmm8.d
    else if (zmm3.d f>= 9.99999994e-09f)
        zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
        zmm3.d = zmm3.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm1.d = zmm3.d f* zmm0.d
        zmm2.d = 0.5f f- zmm1.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1.d = zmm5.d f* zmm5.d
        zmm3.d = zmm3.d f* zmm1.d
        zmm4.d = 0.5f f- zmm3.d
        zmm0.d = zmm5.d f* zmm4.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm6.d = zmm6.d f* zmm5.d
        zmm8.d = zmm8.d f* zmm5.d
        zmm9.d = zmm9.d f* zmm5.d
        var_350_19 = zmm9.d
        var_354_16 = zmm8.d
    else
        int32_t var_354_15 = zmm11.d
        zmm6 = zmm12
        int32_t var_350_18 = zmm10.d
        zmm8 = zmm11
        zmm9 = zmm10
    int32_t rax_31 = arg3[4].d
    zmm3 = *(arg3 + 0x1c)
    zmm4 = zx.o(arg3[3])
    zmm0 = zmm6.d.o
    _mm_shuffle_ps(zmm0, zmm0, 0x93)
    zmm9.d = zmm9.d f* zmm15.d
    zmm6.d = zmm6.d f* zmm13.d
    zmm13 = zx.o(arg3[6])
    zmm4.d = zmm4.d f- zmm13.d
    zmm8.d = zmm8.d f* zmm14.d
    zmm15 = arg3[7].d
    zmm1.d = rax_31.d f- zmm15.d
    zmm14 = zmm13.q:4.d
    zmm6.d = zmm6.d f+ zmm8.d
    zmm3.d = zmm3.d f- zmm14.d
    zmm8.d = arg3[0xa].d.d f- zmm15.d
    zmm6.d = zmm6.d f+ zmm9.d
    zmm0.d = zmm6.d
    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x39)
    int32_t var_358_8
    var_358_8.o = zmm0
    uint128_t var_118_1 = zmm0
    zmm0 = zx.o(arg3[9])
    uint64_t var_318_9 = zmm0.q
    zmm2 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    zmm9.d = zmm0.d f- zmm13.d
    zmm0.d = zmm8.d f* zmm3.d
    zmm2.d = zmm2.d f- zmm14.d
    zmm8.d = zmm8.d f* zmm4.d
    zmm6 = zmm2
    zmm2.d = zmm2.d f* zmm4.d
    zmm6.d = zmm6.d f* zmm1.d
    zmm6.d = zmm6.d f- zmm0.d
    zmm0 = zmm9
    zmm9.d = zmm9.d f* zmm3.d
    zmm0.d = zmm0.d f* zmm1.d
    zmm9.d = zmm9.d f- zmm2.d
    zmm8.d = zmm8.d f- zmm0.d
    zmm0.d = zmm6.d f* zmm6.d
    zmm1.d = zmm9.d f* zmm9.d
    zmm3.d = zmm8.d f* zmm8.d
    zmm3.d = zmm3.d f+ zmm0.d
    zmm3.d = zmm3.d f+ zmm1.d
    int32_t var_354_18
    int32_t var_350_21
    
    if (zmm3.d f== 1f)
        var_350_21 = zmm9.d
        var_354_18 = zmm8.d
    else if (zmm3.d f>= 9.99999994e-09f)
        zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
        zmm3.d = zmm3.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm1.d = zmm3.d f* zmm0.d
        zmm2.d = 0.5f f- zmm1.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1.d = zmm5.d f* zmm5.d
        zmm3.d = zmm3.d f* zmm1.d
        zmm4.d = 0.5f f- zmm3.d
        zmm0.d = zmm5.d f* zmm4.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm6.d = zmm6.d f* zmm5.d
        zmm8.d = zmm8.d f* zmm5.d
        zmm9.d = zmm9.d f* zmm5.d
        var_350_21 = zmm9.d
        var_354_18 = zmm8.d
    else
        int32_t var_354_17 = zmm11.d
        zmm6 = zmm12
        int32_t var_350_20 = zmm10.d
        zmm8 = zmm11
        zmm9 = zmm10
    int32_t rax_34 = *(arg3 + 0x44)
    zmm3 = arg3[8].d
    zmm4 = zx.o(*(arg3 + 0x3c))
    zmm0 = zmm6.d.o
    _mm_shuffle_ps(zmm0, zmm0, 0x93)
    zmm9.d = zmm9.d f* zmm15.d
    zmm6.d = zmm6.d f* zmm13.d
    zmm13 = zx.o(*(arg3 + 0x24))
    zmm4.d = zmm4.d f- zmm13.d
    zmm8.d = zmm8.d f* zmm14.d
    zmm15 = *(arg3 + 0x2c)
    zmm1.d = rax_34.d f- zmm15.d
    zmm14 = zmm13.q:4.d
    zmm6.d = zmm6.d f+ zmm8.d
    zmm3.d = zmm3.d f- zmm14.d
    zmm8.d = (*(arg3 + 0x5c)).d f- zmm15.d
    zmm6.d = zmm6.d f+ zmm9.d
    zmm0.d = zmm6.d
    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x39)
    int32_t var_358_9
    var_358_9.o = zmm0
    uint128_t var_108_1 = zmm0
    zmm0 = zx.o(*(arg3 + 0x54))
    uint64_t var_318_10 = zmm0.q
    zmm2 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    zmm9.d = zmm0.d f- zmm13.d
    zmm0.d = zmm8.d f* zmm3.d
    zmm2.d = zmm2.d f- zmm14.d
    zmm8.d = zmm8.d f* zmm4.d
    zmm6 = zmm2
    zmm2.d = zmm2.d f* zmm4.d
    zmm6.d = zmm6.d f* zmm1.d
    zmm6.d = zmm6.d f- zmm0.d
    zmm0 = zmm9
    zmm9.d = zmm9.d f* zmm3.d
    zmm0.d = zmm0.d f* zmm1.d
    zmm9.d = zmm9.d f- zmm2.d
    zmm8.d = zmm8.d f- zmm0.d
    zmm0.d = zmm6.d f* zmm6.d
    zmm1.d = zmm9.d f* zmm9.d
    zmm3.d = zmm8.d f* zmm8.d
    zmm3.d = zmm3.d f+ zmm0.d
    zmm3.d = zmm3.d f+ zmm1.d
    int32_t var_354_20
    int32_t var_350_23
    
    if (zmm3.d f== 1f)
        var_350_23 = zmm9.d
        var_354_20 = zmm8.d
    else if (zmm3.d f>= 9.99999994e-09f)
        zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
        zmm3.d = zmm3.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm1.d = zmm3.d f* zmm0.d
        zmm2.d = 0.5f f- zmm1.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1.d = zmm5.d f* zmm5.d
        zmm3.d = zmm3.d f* zmm1.d
        zmm4.d = 0.5f f- zmm3.d
        zmm0.d = zmm5.d f* zmm4.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm6.d = zmm6.d f* zmm5.d
        zmm8.d = zmm8.d f* zmm5.d
        zmm9.d = zmm9.d f* zmm5.d
        var_350_23 = zmm9.d
        var_354_20 = zmm8.d
    else
        int32_t var_354_19 = zmm11.d
        zmm6 = zmm12
        int32_t var_350_22 = zmm10.d
        zmm8 = zmm11
        zmm9 = zmm10
    int32_t rax_37 = arg3[7].d
    zmm3 = *(arg3 + 0x34)
    zmm4 = zx.o(arg3[6])
    zmm0 = zmm6.d.o
    _mm_shuffle_ps(zmm0, zmm0, 0x93)
    zmm9.d = zmm9.d f* zmm15.d
    zmm6.d = zmm6.d f* zmm13.d
    zmm13 = zx.o(*(arg3 + 0x54))
    zmm4.d = zmm4.d f- zmm13.d
    zmm8.d = zmm8.d f* zmm14.d
    zmm15 = *(arg3 + 0x5c)
    zmm1.d = rax_37.d f- zmm15.d
    zmm14 = zmm13.q:4.d
    zmm6.d = zmm6.d f+ zmm8.d
    zmm3.d = zmm3.d f- zmm14.d
    zmm8.d = arg3[0xa].d.d f- zmm15.d
    zmm6.d = zmm6.d f+ zmm9.d
    zmm0.d = zmm6.d
    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x39)
    int32_t var_358_10
    var_358_10.o = zmm0
    uint128_t var_f8_1 = zmm0
    zmm0 = zx.o(arg3[9])
    uint64_t var_318_11 = zmm0.q
    zmm2 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    zmm9.d = zmm0.d f- zmm13.d
    zmm0.d = zmm8.d f* zmm3.d
    zmm2.d = zmm2.d f- zmm14.d
    zmm8.d = zmm8.d f* zmm4.d
    zmm6 = zmm2
    zmm2.d = zmm2.d f* zmm4.d
    zmm6.d = zmm6.d f* zmm1.d
    zmm6.d = zmm6.d f- zmm0.d
    zmm0 = zmm9
    zmm9.d = zmm9.d f* zmm3.d
    zmm0.d = zmm0.d f* zmm1.d
    zmm9.d = zmm9.d f- zmm2.d
    zmm8.d = zmm8.d f- zmm0.d
    zmm0.d = zmm6.d f* zmm6.d
    zmm1.d = zmm9.d f* zmm9.d
    zmm3.d = zmm8.d f* zmm8.d
    zmm3.d = zmm3.d f+ zmm0.d
    zmm3.d = zmm3.d f+ zmm1.d
    
    if (zmm3.d f== 1f)
        goto label_141f0c493
    
    if (not(zmm3.d f>= 9.99999994e-09f))
        goto label_141f0c413
    
    zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
    zmm3.d = zmm3.d f* 0.5f
    zmm0.d = zmm5.d f* zmm5.d
    zmm1.d = zmm3.d f* zmm0.d
    zmm2.d = 0.5f f- zmm1.d
    zmm0.d = zmm5.d f* zmm2.d
    zmm5.d = zmm5.d f+ zmm0.d
    zmm1.d = zmm5.d f* zmm5.d
    zmm3.d = zmm3.d f* zmm1.d
    zmm4.d = 0.5f f- zmm3.d
    zmm0.d = zmm5.d f* zmm4.d
    zmm5.d = zmm5.d f+ zmm0.d
    zmm6.d = zmm6.d f* zmm5.d
    zmm8.d = zmm8.d f* zmm5.d
    zmm9.d = zmm9.d f* zmm5.d
label_141f0c493:
    int32_t var_354_22 = zmm8.d
    int32_t var_350_25 = zmm9.d
    var_358_5 = zmm6.d
else
    zmm0 = zx.o(*arg3)
    zmm13 = zx.o(*(arg3 + 0x24))
    zmm8.d = arg3[3].d f- zmm13.d
    zmm2 = zx.o(arg3[3])
    zmm5.d = zmm0.d f- zmm13.d
    zmm10 = data_143dbb200
    zmm11 = data_143dbb1fc
    zmm12 = data_143dbb1f8
    uint64_t var_318 = zmm0.q
    int32_t rax_5 = arg3[4].d
    zmm1 = arg3[1].d
    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    zmm15 = *(arg3 + 0x2c)
    zmm6.d = rax_5.d f- zmm15.d
    zmm14 = zmm13.q:4.d
    zmm1.d = zmm1.d f- zmm15.d
    zmm2.d = zmm2.d f- zmm14.d
    zmm4.d = _mm_shuffle_ps(zmm0, zmm0, 0x55).d f- zmm14.d
    zmm0 = zmm6
    zmm6.d = zmm6.d f* zmm5.d
    zmm9 = zmm2
    zmm2.d = zmm2.d f* zmm5.d
    zmm0.d = zmm0.d f* zmm4.d
    zmm9.d = zmm9.d f* zmm1.d
    zmm9.d = zmm9.d f- zmm0.d
    zmm0.d = zmm8.d f* zmm1.d
    zmm8.d = zmm8.d f* zmm4.d
    zmm6.d = zmm6.d f- zmm0.d
    zmm0.d = zmm9.d f* zmm9.d
    zmm8.d = zmm8.d f- zmm2.d
    zmm3.d = zmm6.d f* zmm6.d
    zmm1.d = zmm8.d f* zmm8.d
    zmm3.d = zmm3.d f+ zmm0.d
    zmm3.d = zmm3.d f+ zmm1.d
    int32_t var_358
    int32_t var_350_1
    
    if (zmm3.d f== 1f)
        var_350_1 = zmm8.d
        var_358 = zmm9.d
    else if (zmm3.d f>= 9.99999994e-09f)
        zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
        zmm3.d = zmm3.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm1.d = zmm3.d f* zmm0.d
        zmm2.d = 0.5f f- zmm1.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1.d = zmm5.d f* zmm5.d
        zmm3.d = zmm3.d f* zmm1.d
        zmm4.d = 0.5f f- zmm3.d
        zmm0.d = zmm5.d f* zmm4.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm9.d = zmm9.d f* zmm5.d
        zmm6.d = zmm6.d f* zmm5.d
        zmm8.d = zmm8.d f* zmm5.d
        var_350_1 = zmm8.d
        var_358 = zmm9.d
    else
        var_358 = zmm12.d
        zmm9 = zmm12
        int32_t var_350 = zmm10.d
        zmm6 = zmm11
        zmm8 = zmm10
    zmm3 = zx.o(arg3[9])
    zmm4 = *(arg3 + 0x1c)
    zmm5 = zx.o(arg3[3])
    int32_t var_354 = zmm6.d
    zmm0 = var_358.o
    zmm8.d = zmm8.d f* zmm15.d
    int32_t rax_8 = arg3[0xa].d
    zmm1 = arg3[4].d
    _mm_shuffle_ps(zmm0, zmm0, 0x93)
    zmm6.d = zmm6.d f* zmm14.d
    zmm9.d = zmm9.d f* zmm13.d
    zmm13 = zx.o(*(arg3 + 0x54))
    zmm15 = *(arg3 + 0x5c)
    zmm5.d = zmm5.d f- zmm13.d
    zmm6.d = zmm6.d f+ zmm9.d
    uint64_t var_318_1 = zmm3.q
    zmm1.d = zmm1.d f- zmm15.d
    zmm14 = zmm13.q:4.d
    zmm2.d = _mm_shuffle_ps(zmm3, zmm3, 0x55).d f- zmm14.d
    zmm6.d = zmm6.d f+ zmm8.d
    zmm8.d = zmm3.d f- zmm13.d
    zmm4.d = zmm4.d f- zmm14.d
    zmm9 = zmm2
    zmm2.d = zmm2.d f* zmm5.d
    zmm0.d = zmm6.d
    zmm9.d = zmm9.d f* zmm1.d
    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x39)
    zmm6.d = rax_8.d f- zmm15.d
    var_2f8 = zmm0
    var_358.o = zmm0
    var_138 = zmm0
    zmm0 = zmm6
    zmm6.d = zmm6.d f* zmm5.d
    zmm0.d = zmm0.d f* zmm4.d
    zmm9.d = zmm9.d f- zmm0.d
    zmm0.d = zmm8.d f* zmm1.d
    zmm8.d = zmm8.d f* zmm4.d
    zmm6.d = zmm6.d f- zmm0.d
    zmm0.d = zmm9.d f* zmm9.d
    zmm8.d = zmm8.d f- zmm2.d
    zmm3.d = zmm6.d f* zmm6.d
    zmm1.d = zmm8.d f* zmm8.d
    zmm3.d = zmm3.d f+ zmm0.d
    zmm3.d = zmm3.d f+ zmm1.d
    int32_t var_358_1
    int32_t var_350_3
    
    if (zmm3.d f== 1f)
        var_350_3 = zmm8.d
        var_358_1 = zmm9.d
    else if (zmm3.d f>= 9.99999994e-09f)
        zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
        zmm3.d = zmm3.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm1.d = zmm3.d f* zmm0.d
        zmm2.d = 0.5f f- zmm1.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1.d = zmm5.d f* zmm5.d
        zmm3.d = zmm3.d f* zmm1.d
        zmm4.d = 0.5f f- zmm3.d
        zmm0.d = zmm5.d f* zmm4.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm9.d = zmm9.d f* zmm5.d
        zmm6.d = zmm6.d f* zmm5.d
        zmm8.d = zmm8.d f* zmm5.d
        var_350_3 = zmm8.d
        var_358_1 = zmm9.d
    else
        var_358_1 = zmm12.d
        zmm9 = zmm12
        int32_t var_350_2 = zmm10.d
        zmm6 = zmm11
        zmm8 = zmm10
    zmm3 = zx.o(arg3[6])
    zmm4 = arg3[8].d
    zmm9.d = zmm9.d f* zmm13.d
    zmm13 = zx.o(*arg3)
    int32_t rax_11 = arg3[7].d
    zmm5.d = (*(arg3 + 0x3c)).d f- zmm13.d
    zmm1 = *(arg3 + 0x44)
    int32_t var_354_1 = zmm6.d
    zmm0 = var_358_1.o
    _mm_shuffle_ps(zmm0, zmm0, 0x93)
    zmm8.d = zmm8.d f* zmm15.d
    zmm6.d = zmm6.d f* zmm14.d
    zmm15 = arg3[1].d
    zmm1.d = zmm1.d f- zmm15.d
    uint64_t var_318_2 = zmm3.q
    zmm9.d = zmm9.d f+ zmm6.d
    zmm14 = zmm13.q:4.d
    zmm2.d = _mm_shuffle_ps(zmm3, zmm3, 0x55).d f- zmm14.d
    zmm4.d = zmm4.d f- zmm14.d
    zmm9.d = zmm9.d f+ zmm8.d
    zmm8.d = rax_11.d f- zmm15.d
    zmm6 = zmm2
    zmm2.d = zmm2.d f* zmm5.d
    zmm0.d = zmm9.d
    zmm6.d = zmm6.d f* zmm1.d
    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x39)
    var_358_1.o = zmm0
    zmm9.d = zmm3.d f- zmm13.d
    uint128_t var_128 = zmm0
    zmm0.d = zmm8.d f* zmm4.d
    zmm8.d = zmm8.d f* zmm5.d
    zmm6.d = zmm6.d f- zmm0.d
    zmm0.d = zmm9.d f* zmm1.d
    zmm9.d = zmm9.d f* zmm4.d
    zmm8.d = zmm8.d f- zmm0.d
    zmm0.d = zmm6.d f* zmm6.d
    zmm9.d = zmm9.d f- zmm2.d
    zmm3.d = zmm8.d f* zmm8.d
    zmm1.d = zmm9.d f* zmm9.d
    zmm3.d = zmm3.d f+ zmm0.d
    zmm3.d = zmm3.d f+ zmm1.d
    int32_t var_354_3
    int32_t var_350_5
    
    if (zmm3.d f== 1f)
        var_350_5 = zmm9.d
        var_354_3 = zmm8.d
    else if (zmm3.d f>= 9.99999994e-09f)
        zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
        zmm3.d = zmm3.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm1.d = zmm3.d f* zmm0.d
        zmm2.d = 0.5f f- zmm1.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1.d = zmm5.d f* zmm5.d
        zmm3.d = zmm3.d f* zmm1.d
        zmm4.d = 0.5f f- zmm3.d
        zmm0.d = zmm5.d f* zmm4.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm6.d = zmm6.d f* zmm5.d
        zmm8.d = zmm8.d f* zmm5.d
        zmm9.d = zmm9.d f* zmm5.d
        var_350_5 = zmm9.d
        var_354_3 = zmm8.d
    else
        int32_t var_354_2 = zmm11.d
        zmm6 = zmm12
        int32_t var_350_4 = zmm10.d
        zmm8 = zmm11
        zmm9 = zmm10
    int32_t rax_13 = arg3[7].d
    zmm3 = *(arg3 + 0x34)
    zmm4 = zx.o(arg3[6])
    zmm0 = zmm6.d.o
    _mm_shuffle_ps(zmm0, zmm0, 0x93)
    zmm9.d = zmm9.d f* zmm15.d
    zmm6.d = zmm6.d f* zmm13.d
    zmm13 = zx.o(arg3[3])
    zmm4.d = zmm4.d f- zmm13.d
    zmm8.d = zmm8.d f* zmm14.d
    zmm15 = arg3[4].d
    zmm1.d = rax_13.d f- zmm15.d
    zmm14 = zmm13.q:4.d
    zmm6.d = zmm6.d f+ zmm8.d
    zmm3.d = zmm3.d f- zmm14.d
    zmm8.d = arg3[0xa].d.d f- zmm15.d
    zmm6.d = zmm6.d f+ zmm9.d
    zmm0.d = zmm6.d
    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x39)
    int32_t var_358_2
    var_358_2.o = zmm0
    uint128_t var_118 = zmm0
    zmm0 = zx.o(arg3[9])
    uint64_t var_318_3 = zmm0.q
    zmm2 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    zmm9.d = zmm0.d f- zmm13.d
    zmm0.d = zmm8.d f* zmm3.d
    zmm2.d = zmm2.d f- zmm14.d
    zmm8.d = zmm8.d f* zmm4.d
    zmm6 = zmm2
    zmm2.d = zmm2.d f* zmm4.d
    zmm6.d = zmm6.d f* zmm1.d
    zmm6.d = zmm6.d f- zmm0.d
    zmm0 = zmm9
    zmm9.d = zmm9.d f* zmm3.d
    zmm0.d = zmm0.d f* zmm1.d
    zmm9.d = zmm9.d f- zmm2.d
    zmm8.d = zmm8.d f- zmm0.d
    zmm0.d = zmm6.d f* zmm6.d
    zmm1.d = zmm9.d f* zmm9.d
    zmm3.d = zmm8.d f* zmm8.d
    zmm3.d = zmm3.d f+ zmm0.d
    zmm3.d = zmm3.d f+ zmm1.d
    int32_t var_358_3
    
    if (not(zmm3.d f!= 1f))
        var_358_3 = zmm6.d
        int32_t var_354_4 = zmm8.d
        int32_t var_350_6 = zmm9.d
    else if (zmm3.d f>= 9.99999994e-09f)
        zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
        zmm3.d = zmm3.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm1.d = zmm3.d f* zmm0.d
        zmm2.d = 0.5f f- zmm1.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1.d = zmm5.d f* zmm5.d
        zmm3.d = zmm3.d f* zmm1.d
        zmm4.d = 0.5f f- zmm3.d
        zmm0.d = zmm5.d f* zmm4.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm0.d = zmm5.d f* zmm6.d
        zmm1.d = zmm5.d f* zmm8.d
        zmm5.d = zmm5.d f* zmm9.d
        zmm6 = zmm0
        var_358_3 = zmm0.d
        zmm8 = zmm1
        int32_t var_354_6 = zmm1.d
        int32_t var_350_8 = zmm5.d
        zmm9 = zmm5
    else
        zmm6 = zmm12
        int32_t var_354_5 = zmm11.d
        var_358_3 = zmm6.d
        zmm8 = zmm11
        int32_t var_350_7 = zmm10.d
        zmm9 = zmm10
    
    zmm0 = var_358_3.o
    int32_t rax_16 = *(arg3 + 0x2c)
    zmm3 = arg3[5].d
    zmm4 = zx.o(*(arg3 + 0x24))
    _mm_shuffle_ps(zmm0, zmm0, 0x93)
    zmm9.d = zmm9.d f* zmm15.d
    zmm6.d = zmm6.d f* zmm13.d
    zmm13 = zx.o(*(arg3 + 0x3c))
    zmm4.d = zmm4.d f- zmm13.d
    zmm8.d = zmm8.d f* zmm14.d
    zmm15 = *(arg3 + 0x44)
    zmm1.d = rax_16.d f- zmm15.d
    zmm14 = zmm13.q:4.d
    zmm6.d = zmm6.d f+ zmm8.d
    zmm3.d = zmm3.d f- zmm14.d
    zmm8.d = (*(arg3 + 0x5c)).d f- zmm15.d
    zmm6.d = zmm6.d f+ zmm9.d
    zmm0.d = zmm6.d
    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x39)
    var_358_3.o = zmm0
    uint128_t var_108 = zmm0
    zmm0 = zx.o(*(arg3 + 0x54))
    uint64_t var_318_4 = zmm0.q
    zmm2 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    zmm9.d = zmm0.d f- zmm13.d
    zmm0.d = zmm8.d f* zmm3.d
    zmm2.d = zmm2.d f- zmm14.d
    zmm8.d = zmm8.d f* zmm4.d
    zmm6 = zmm2
    zmm2.d = zmm2.d f* zmm4.d
    zmm6.d = zmm6.d f* zmm1.d
    zmm6.d = zmm6.d f- zmm0.d
    zmm0 = zmm9
    zmm9.d = zmm9.d f* zmm3.d
    zmm0.d = zmm0.d f* zmm1.d
    zmm9.d = zmm9.d f- zmm2.d
    zmm8.d = zmm8.d f- zmm0.d
    zmm0.d = zmm6.d f* zmm6.d
    zmm1.d = zmm9.d f* zmm9.d
    zmm3.d = zmm8.d f* zmm8.d
    zmm3.d = zmm3.d f+ zmm0.d
    zmm3.d = zmm3.d f+ zmm1.d
    int32_t var_358_4
    
    if (not(zmm3.d f!= 1f))
        var_358_4 = zmm6.d
        int32_t var_354_7 = zmm8.d
        int32_t var_350_9 = zmm9.d
    else if (zmm3.d f>= 9.99999994e-09f)
        zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
        zmm3.d = zmm3.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm1.d = zmm3.d f* zmm0.d
        zmm2.d = 0.5f f- zmm1.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1.d = zmm5.d f* zmm5.d
        zmm3.d = zmm3.d f* zmm1.d
        zmm4.d = 0.5f f- zmm3.d
        zmm0.d = zmm5.d f* zmm4.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm0.d = zmm5.d f* zmm6.d
        zmm1.d = zmm5.d f* zmm8.d
        zmm5.d = zmm5.d f* zmm9.d
        zmm6 = zmm0
        var_358_4 = zmm0.d
        zmm8 = zmm1
        int32_t var_354_9 = zmm1.d
        int32_t var_350_11 = zmm5.d
        zmm9 = zmm5
    else
        zmm6 = zmm12
        int32_t var_354_8 = zmm11.d
        var_358_4 = zmm6.d
        zmm8 = zmm11
        int32_t var_350_10 = zmm10.d
        zmm9 = zmm10
    
    zmm0 = var_358_4.o
    int32_t rax_19 = *(arg3 + 0x5c)
    zmm3 = arg3[0xb].d
    zmm4 = zx.o(*(arg3 + 0x54))
    _mm_shuffle_ps(zmm0, zmm0, 0x93)
    zmm9.d = zmm9.d f* zmm15.d
    zmm6.d = zmm6.d f* zmm13.d
    zmm13 = zx.o(arg3[6])
    zmm4.d = zmm4.d f- zmm13.d
    zmm8.d = zmm8.d f* zmm14.d
    zmm15 = arg3[7].d
    zmm1.d = rax_19.d f- zmm15.d
    zmm14 = zmm13.q:4.d
    zmm6.d = zmm6.d f+ zmm8.d
    zmm3.d = zmm3.d f- zmm14.d
    zmm8.d = arg3[0xa].d.d f- zmm15.d
    zmm6.d = zmm6.d f+ zmm9.d
    zmm0.d = zmm6.d
    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x39)
    var_358_4.o = zmm0
    uint128_t var_f8 = zmm0
    zmm0 = zx.o(arg3[9])
    uint64_t var_318_5 = zmm0.q
    zmm2 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    zmm9.d = zmm0.d f- zmm13.d
    zmm0.d = zmm8.d f* zmm3.d
    zmm2.d = zmm2.d f- zmm14.d
    zmm8.d = zmm8.d f* zmm4.d
    zmm6 = zmm2
    zmm2.d = zmm2.d f* zmm4.d
    zmm6.d = zmm6.d f* zmm1.d
    zmm6.d = zmm6.d f- zmm0.d
    zmm0 = zmm9
    zmm9.d = zmm9.d f* zmm3.d
    zmm0.d = zmm0.d f* zmm1.d
    zmm9.d = zmm9.d f- zmm2.d
    zmm8.d = zmm8.d f- zmm0.d
    zmm0.d = zmm6.d f* zmm6.d
    zmm1.d = zmm9.d f* zmm9.d
    zmm3.d = zmm8.d f* zmm8.d
    zmm3.d = zmm3.d f+ zmm0.d
    zmm3.d = zmm3.d f+ zmm1.d
    
    if (zmm3.d f== 1f)
        goto label_141f0c493
    
    if (zmm3.d f< 9.99999994e-09f)
    label_141f0c413:
        int32_t var_354_21 = zmm11.d
        zmm6 = zmm12
        int32_t var_350_24 = zmm10.d
        zmm8 = zmm11
        zmm9 = zmm10
        var_358_5 = zmm6.d
    else
        zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
        zmm3.d = zmm3.d f* 0.5f
        zmm0.d = zmm5.d f* zmm5.d
        zmm1.d = zmm3.d f* zmm0.d
        zmm2.d = 0.5f f- zmm1.d
        zmm0.d = zmm5.d f* zmm2.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm1.d = zmm5.d f* zmm5.d
        zmm3.d = zmm3.d f* zmm1.d
        zmm4.d = 0.5f f- zmm3.d
        zmm0.d = zmm5.d f* zmm4.d
        zmm5.d = zmm5.d f+ zmm0.d
        zmm0.d = zmm5.d f* zmm6.d
        zmm1.d = zmm5.d f* zmm8.d
        zmm5.d = zmm5.d f* zmm9.d
        zmm6 = zmm0
        var_358_5 = zmm0.d
        zmm8 = zmm1
        int32_t var_354_10 = zmm1.d
        int32_t var_350_12 = zmm5.d
        zmm9 = zmm5

zmm0 = var_358_5.o
zmm8.d = zmm8.d f* zmm14.d
zmm6.d = zmm6.d f* zmm13.d
_mm_shuffle_ps(zmm0, zmm0, 0x93)
*arg6 = var_2f8
uint128_t* rsi_1 = &var_138
zmm6.d = zmm6.d f+ zmm8.d
zmm9.d = zmm9.d f* zmm15.d
zmm8 = zx.o(0)
zmm6.d = zmm6.d f+ zmm9.d
zmm0.d = zmm6.d
zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x39)
*arg7 = zmm0
int64_t i_2 = 6
uint128_t var_e8 = zmm0
var_358_5.o = zmm0
void var_2d8
int64_t i

do
    zmm0.d = (*(rsi_1 + 4)).d f* arg4[1]
    zmm2.d = (*rsi_1).d f* *arg4
    zmm2.d = zmm2.d f+ zmm0.d
    zmm0.d = (*(rsi_1 + 8)).d f* arg4[2]
    zmm2.d = zmm2.d f+ zmm0.d
    
    if (not(zmm2.d f>= 0f))
        if (rbx_1 + 1 s> rdx_3)
            sub_14149c260(&var_2d8, rbx_1)
            rdi = var_278
        
        void* rcx_4 = &var_2d8
        
        if (rdi != 0)
            rcx_4 = rdi
        
        *(rcx_4 + sx.q(rbx_1) * 0x10) = *rsi_1
        rdx_3 = var_264
        rbx_1 += 1
        rdi = var_278
    
    rsi_1 = &rsi_1[1]
    i = i_2
    i_2 -= 1
while (i != 1)

for (int64_t i_1 = 0; i_1 s< 0x60; i_1 += 8)
    zmm6 = arg4[1]
    zmm4 = *arg4
    uint128_t zmm7 = arg4[2]
    int64_t rax_45 = sx.q(*(i_1 + 0x14326a310)) * 2
    zmm2 = zx.o(*(&var_138 + (rax_45 << 3)))
    int32_t rax_46 = *(&var_138:8 + (rax_45 << 3))
    zmm1.d = zmm6.d f* _mm_shuffle_ps(zmm2, zmm2, 0x55).d
    zmm5.d = zmm4.d f* zmm2.d
    zmm0.d = zmm7.d f* rax_46
    int64_t rax_48 = sx.q(*(i_1 + 0x14326a314)) * 2
    zmm5.d = zmm5.d f+ zmm1.d
    zmm3 = zx.o(*(&var_138 + (rax_48 << 3)))
    int32_t rax_49 = *(&var_138:8 + (rax_48 << 3))
    zmm2.d = zmm4.d f* zmm3.d
    zmm5.d = zmm5.d f+ zmm0.d
    zmm1.d = zmm6.d f* _mm_shuffle_ps(zmm3, zmm3, 0x55).d
    zmm0.d = zmm7.d f* rax_49
    zmm2.d = zmm2.d f+ zmm1.d
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f* zmm5.d
    
    if (not(zmm2.d f>= zmm8.d))
        int64_t rcx_5 = sx.q(*(i_1 + 0x14326a370)) * 3
        zmm13 = zx.o(*(arg3 + (rcx_5 << 2)))
        zmm15 = *(arg3 + (rcx_5 << 2) + 8)
        zmm14 = zmm13.q:4.d
        int64_t rcx_6 = sx.q(*(i_1 + 0x14326a374)) * 3
        zmm7 = zx.o(*(arg3 + (rcx_6 << 2)))
        zmm10.d = zmm13.d f- zmm7.d
        zmm8 = *(arg3 + (rcx_6 << 2) + 8)
        zmm9.d = zmm15.d f- zmm8.d
        zmm11 = zmm7.q:4.d
        zmm12.d = zmm14.d f- zmm11.d
        zmm0.d = zmm10.d f* zmm10.d
        zmm1.d = zmm9.d f* zmm9.d
        zmm2.d = zmm12.d f* zmm12.d
        zmm2.d = zmm2.d f+ zmm0.d
        zmm2.d = zmm2.d f+ zmm1.d
        int32_t rax_53
        rax_53.b = zmm5.d f>= 0f
        zmm3 = _mm_sqrt_ss(0, zmm2.d)
        zmm1 = zmm3
        zmm4.d = zmm3.d f* *arg4
        zmm3.d = zmm3.d f* arg4[2]
        zmm1.d = zmm1.d f* zmm6.d
        zmm4.d = zmm4.d f+ zmm13.d
        zmm3.d = zmm3.d f+ zmm15.d
        zmm1.d = zmm1.d f+ zmm14.d
        int32_t var_268_2
        
        if (rax_53.b == rbx)
            zmm1.d = zmm1.d f- zmm11.d
            zmm3.d = zmm3.d f- zmm8.d
            zmm4.d = zmm4.d f- zmm7.d
            zmm0.d = zmm9.d f* zmm1.d
            zmm6.d = zmm12.d f* zmm3.d
            zmm9.d = zmm9.d f* zmm4.d
            zmm6.d = zmm6.d f- zmm0.d
            zmm12.d = zmm12.d f* zmm4.d
            zmm0 = zmm10
            zmm10.d = zmm10.d f* zmm1.d
            zmm0.d = zmm0.d f* zmm3.d
            zmm10.d = zmm10.d f- zmm12.d
            zmm9.d = zmm9.d f- zmm0.d
            zmm0.d = zmm6.d f* zmm6.d
            zmm1.d = zmm10.d f* zmm10.d
            zmm2.d = zmm9.d f* zmm9.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm2.d = zmm2.d f+ zmm1.d
            
            if (not(zmm2.d f!= 1f))
                var_2f8.d = zmm6.d
                var_2f8:4.d = zmm9.d
                var_2f8:8.d = zmm10.d
            else if (zmm2.d f>= 9.99999994e-09f)
                zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                zmm3.d = zmm2.d f* 0.5f
                zmm0.d = zmm5.d f* zmm5.d
                zmm1.d = zmm3.d f* zmm0.d
                zmm2.d = 0.5f f- zmm1.d
                zmm0.d = zmm5.d f* zmm2.d
                zmm5.d = zmm5.d f+ zmm0.d
                zmm1.d = zmm5.d f* zmm5.d
                zmm3.d = zmm3.d f* zmm1.d
                zmm4.d = 0.5f f- zmm3.d
                zmm0.d = zmm5.d f* zmm4.d
                zmm5.d = zmm5.d f+ zmm0.d
                zmm0.d = zmm5.d f* zmm6.d
                zmm1.d = zmm5.d f* zmm9.d
                zmm5.d = zmm5.d f* zmm10.d
                zmm6 = zmm0
                var_2f8.d = zmm0.d
                zmm9 = zmm1
                var_2f8:4.d = zmm1.d
                var_2f8:8.d = zmm5.d
                zmm10 = zmm5
            else
                zmm6 = data_143dbb1f8
                zmm9 = data_143dbb1fc
                zmm10 = data_143dbb200
                var_2f8.d = zmm6.d
                var_2f8:4.d = zmm9.d
                var_2f8:8.d = zmm10.d
            
            zmm6.d = zmm6.d f* zmm7.d
            var_268_2 = rbx_1 + 1
            zmm9.d = zmm9.d f* zmm11.d
            zmm10.d = zmm10.d f* zmm8.d
            zmm6.d = zmm6.d f+ zmm9.d
            zmm6.d = zmm6.d f+ zmm10.d
            var_2f8:0xc.d = zmm6.d
            
            if (rbx_1 + 1 s> rdx_3)
                sub_14149c260(&var_2d8, rbx_1)
                rdi = var_278
            
            zmm0 = var_2f8
        else
            zmm8.d = zmm8.d f- zmm15.d
            zmm1.d = zmm1.d f- zmm14.d
            zmm7.d = zmm7.d f- zmm13.d
            zmm11.d = zmm11.d f- zmm14.d
            zmm3.d = zmm3.d f- zmm15.d
            zmm4.d = zmm4.d f- zmm13.d
            zmm0.d = zmm8.d f* zmm1.d
            zmm6.d = zmm11.d f* zmm3.d
            zmm8.d = zmm8.d f* zmm4.d
            zmm6.d = zmm6.d f- zmm0.d
            zmm11.d = zmm11.d f* zmm4.d
            zmm0 = zmm7
            zmm7.d = zmm7.d f* zmm1.d
            zmm0.d = zmm0.d f* zmm3.d
            zmm7.d = zmm7.d f- zmm11.d
            zmm8.d = zmm8.d f- zmm0.d
            zmm0.d = zmm6.d f* zmm6.d
            zmm1.d = zmm7.d f* zmm7.d
            zmm2.d = zmm8.d f* zmm8.d
            zmm2.d = zmm2.d f+ zmm0.d
            zmm2.d = zmm2.d f+ zmm1.d
            int32_t var_2e8_1
            
            if (not(zmm2.d f!= 1f))
                var_2e8_1 = zmm6.d
                int32_t var_2e4_1 = zmm8.d
                int32_t var_2e0_1 = zmm7.d
            else if (zmm2.d f>= 9.99999994e-09f)
                zmm5 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                zmm3.d = zmm2.d f* 0.5f
                zmm0.d = zmm5.d f* zmm5.d
                zmm1.d = zmm3.d f* zmm0.d
                zmm2.d = 0.5f f- zmm1.d
                zmm0.d = zmm5.d f* zmm2.d
                zmm5.d = zmm5.d f+ zmm0.d
                zmm1.d = zmm5.d f* zmm5.d
                zmm3.d = zmm3.d f* zmm1.d
                zmm4.d = 0.5f f- zmm3.d
                zmm0.d = zmm5.d f* zmm4.d
                zmm5.d = zmm5.d f+ zmm0.d
                zmm0.d = zmm5.d f* zmm6.d
                zmm1.d = zmm5.d f* zmm8.d
                zmm5.d = zmm5.d f* zmm7.d
                zmm6 = zmm0
                var_2e8_1 = zmm0.d
                zmm8 = zmm1
                int32_t var_2e4_3 = zmm1.d
                int32_t var_2e0_3 = zmm5.d
                zmm7 = zmm5
            else
                zmm6 = data_143dbb1f8
                zmm8 = data_143dbb1fc
                zmm7 = data_143dbb200
                var_2e8_1 = zmm6.d
                int32_t var_2e4_2 = zmm8.d
                int32_t var_2e0_2 = zmm7.d
            
            zmm6.d = zmm6.d f* zmm13.d
            var_268_2 = rbx_1 + 1
            zmm8.d = zmm8.d f* zmm14.d
            zmm7.d = zmm7.d f* zmm15.d
            zmm6.d = zmm6.d f+ zmm8.d
            zmm6.d = zmm6.d f+ zmm7.d
            int32_t var_2dc_1 = zmm6.d
            
            if (rbx_1 + 1 s> rdx_3)
                sub_14149c260(&var_2d8, rbx_1)
                rdi = var_278
            
            zmm0 = var_2e8_1.o
        
        void* rcx_9 = &var_2d8
        zmm8 = zx.o(0)
        
        if (rdi != 0)
            rcx_9 = rdi
        
        *(rcx_9 + sx.q(rbx_1) * 0x10) = zmm0
        rdi = var_278
        rbx_1 = var_268_2
        rdx_3 = var_264

void* var_1f8 = nullptr
void var_258
int32_t var_1e4

if (rbx_1 != 0)
    sub_1413f6990(&var_258, rbx_1, 0)
    void* rdx_8 = &var_2d8
    void* rcx_11 = &var_258
    
    if (rdi != 0)
        rdx_8 = rdi
    
    if (var_1f8 != 0)
        rcx_11 = var_1f8
    
    memcpy(rcx_11, rdx_8, rbx_1 << 4)
else
    var_1e4 = 6

int64_t var_158 = 0
int32_t var_148 = 0
int32_t result_1 = 8
sub_141f8cbb0(&var_258)

if (arg5 != &var_258)
    void* rbx_2 = var_1f8
    
    if (rbx_2 == 0)
        memmove(arg5, &var_258, (rbx_2 + 0x60).d)
    
    int64_t rcx_14 = *(arg5 + 0x60)
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
        rbx_2 = var_1f8
    
    *(arg5 + 0x60) = rbx_2
    *(arg5 + 0x70) = rbx_1
    *(arg5 + 0x74) = var_1e4
    int32_t var_1e4_1 = 6
    var_1f8 = nullptr
    int32_t var_1e8_1 = 0

void var_1d8
int32_t result = &var_1d8

if (arg5 + 0x80 != &var_1d8)
    int64_t rdi_1 = var_158
    
    if (rdi_1 == 0)
        memmove(arg5 + 0x80, &var_1d8, 0x80)
    
    int64_t rcx_16 = *(arg5 + 0x100)
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
        rdi_1 = var_158
    
    *(arg5 + 0x100) = rdi_1
    *(arg5 + 0x110) = var_148
    result = result_1
    *(arg5 + 0x114) = result
    int32_t var_144 = 8
    int64_t var_158_1 = 0
    int32_t var_148_1 = 0
else if (var_158 != 0)
    result = sub_140a74f90(var_158)

if (var_1f8 != 0)
    result = sub_140a74f90(var_1f8)

if (var_278 != 0)
    result = sub_140a74f90(var_278)

__security_check_cookie(rax_1 ^ &var_378)
return result
