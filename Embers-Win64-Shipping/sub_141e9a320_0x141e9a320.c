// 函数: sub_141e9a320
// 地址: 0x141e9a320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d38
int64_t rax_1 = __security_cookie ^ &var_d38
uint64_t r13 = arg6
int64_t* var_c28 = arg1
int64_t* rbx = arg3
uint64_t var_c40 = r13
void* r12 = r13 + 0x3c0
int32_t rax_3 = *(r13 + 0x260) - *(r13 + 0x258)
int64_t* r15 = arg1
int32_t rsi = 0
int32_t rax_5 = *(r13 + 0x264) - *(r13 + 0x25c)
uint64_t rax_6 = zx.q(*(arg2 + 0xa0))
int64_t* var_c20 = rbx
void* var_c58 = r12
int64_t var_2a8
__builtin_memset(&var_2a8, 0, 0x2c)
int64_t var_278 = 0
int32_t var_270 = 0
int16_t var_26c = 0
char var_26a = 0
int16_t var_268 = 0
int32_t var_2ac = rax_6.d
int128_t var_308
__builtin_memset(&var_308, 0, 0x30)
int128_t var_2c0 = zx.o(0)

if (rax_6.d != 0)
    do
        uint64_t rbx_1 = zx.q(rsi)
        uint64_t r14_1 = rbx_1 * 3
        int64_t* rcx = *(arg2 + (r14_1 << 3) + 0xa8)
        
        if (rcx == 0)
            *(&var_2a8 + rbx_1) = 0
            rax_6.b = 0
        else
            *(&var_2a8 + rbx_1) = (*(rcx + 0x3c)).b
            int64_t var_2a0
            *(&var_2a0 + (rbx_1 << 2)) = rcx[8].d
            int64_t rax_10 = (*(*rcx + 0x10))()
            
            if (rax_10 != 0)
                var_26c:1.b = 1
            
            if (rax_10 == 0 || *(rax_10 + 0x68) u<= 1)
                var_26c:1.b = 0
            
            rax_6 = zx.q(*(&var_2a8 + rbx_1))
        
        if (rax_6.b != 0)
            var_270.w = (*(*(arg2 + (r14_1 << 3) + 0xa8) + 0x38)).w
        
        rsi += 1
    while (rsi u< var_2ac)
    
    rbx = var_c20

int64_t* rcx_2 = *(arg2 + 0x168)
int32_t var_280

if (rcx_2 == 0)
    var_280 = 0
else
    var_280 = *(rcx_2 + 0x3c)
    var_280 = rcx_2[8].d
    void* rax_14 = (*(*rcx_2 + 0x10))()
    
    if (rax_14 == 0 || *(rax_14 + 0x68) u<= 1)
        var_26c:1.b = 0
    else
        var_26c:1.b = 1

var_278.b = *(arg2 + 0x170)
var_278:1.b = *(arg2 + 0x171)
var_278:2.b = *(arg2 + 0x172)
var_278:3.b = *(arg2 + 0x173)
var_278:4.d = *(arg2 + 0x174)

if (var_280 != 0)
    var_270.w = (*(*(arg2 + 0x168) + 0x38)).w

int32_t rsi_1 = rbx[7].d
var_270:2.b = *(arg2 + 0x178)
var_270:3.b = *(arg2 + 0x179)
char var_26a_1 = *(arg2 + 0x17a)
int64_t var_2d8 = *rbx
int64_t var_2c8 = rbx[1]
int64_t var_2d0 = data_14395da18
int32_t var_c98 = rsi_1
TEB* gsbase

if (data_143cd80cc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        _Init_thread_footer(&data_143cd80cc)

uint64_t result

if (data_143de5426 == 0)
    if (data_143cd80c8 == 0 && (r15[1].d != 0 || r15[3].d != 0 || r15[0xb].d != 0
            || r15[0x26].d != 0 || r15[9].d != 0 || r15[5].d s> 0))
        goto label_141e9a680
    
    result.b = 0
else if (data_143de5427 == 0 || data_143cd80c8 != 0 || (r15[1].d == 0 && r15[3].d == 0
        && r15[0xb].d == 0 && r15[0x26].d == 0 && r15[9].d == 0 && r15[5].d s<= 0))
    result.b = 0
else
label_141e9a680:
    uint32_t var_378[0x4]
    sub_140631b10(r12, &var_378)
    float zmm2_1[0x4] = data_142d4cc00
    float zmm7_1[0x4] = zx.o(0)
    uint32_t zmm13_1[0x4] = var_378
    float temp0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
    float var_358[0x4]
    float temp0_4[0x4] = _mm_mul_ps(temp0_2, var_358)
    int64_t var_968_1 = 0
    float var_368[0x4]
    float temp0_5[0x4] = _mm_mul_ps(temp0_1, var_368)
    int32_t var_960_1 = 0
    float var_338_1[0x4] = zmm2_1
    float var_348[0x4]
    float temp0_6[0x4] = _mm_mul_ps(temp0_3, var_348)
    float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), zmm13_1)
    float temp0_11[0x4] = _mm_add_ps(_mm_add_ps(temp0_6, temp0_4), _mm_add_ps(temp0_5, temp0_8))
    var_968_1.o = temp0_11
    temp0_11[0] = temp0_11[0] * temp0_11[0]
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x55)
    float temp0_13[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xaa)
    temp0_12[0] = temp0_12[0] * temp0_12[0]
    temp0_12[0] = temp0_12[0] + temp0_11[0]
    temp0_13[0] = temp0_13[0] * temp0_13[0]
    temp0_12[0] = temp0_12[0] + temp0_13[0]
    float zmm0_1[0x4]
    float zmm1_1[0x4]
    float zmm3_1[0x4]
    float zmm4_1[0x4]
    float zmm5_1[0x4]
    
    if (temp0_12[0] <= 9.99999994e-09f)
        zmm0_1 = zx.o(0)
        zmm1_1 = zx.o(0)
        zmm5_1 = zx.o(0)
    else
        zmm3_1 = zx.o(0)
        zmm4_1 = 0x3f000000
        zmm3_1[0] = temp0_12[0]
        zmm2_1 = 0x3f000000
        zmm5_1 = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
        zmm3_1[0] = zmm3_1[0] * 0.5f
        zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
        zmm3_1[0] = zmm3_1[0] * zmm5_1[0]
        zmm2_1[0] = 0.5f - zmm3_1[0]
        zmm5_1[0] = zmm5_1[0] * zmm2_1[0]
        zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
        zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
        zmm3_1[0] = zmm3_1[0] * zmm5_1[0]
        zmm4_1[0] = 0.5f - zmm3_1[0]
        zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
        zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
        zmm0_1 = zmm5_1
        float var_970_1 = zmm5_1[0]
        zmm1_1 = zmm5_1
        zmm0_1[0] = zmm0_1[0] * temp0_11[0]
        zmm1_1[0] = zmm1_1[0] * temp0_12[0]
        zmm5_1[0] = zmm5_1[0] * temp0_13[0]
    
    zmm2_1 = data_142d4cc20
    float var_c74_1 = zmm1_1[0]
    float var_c78 = zmm0_1[0]
    float temp0_15[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    float temp0_16[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    float temp0_17[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
    float temp0_18[0x4] = _mm_mul_ps(temp0_16, var_358)
    int64_t var_958_1 = 0
    float temp0_19[0x4] = _mm_mul_ps(temp0_15, var_368)
    int32_t var_950_1 = 0
    float var_328_1[0x4] = zmm2_1
    float temp0_20[0x4] = _mm_mul_ps(temp0_17, var_348)
    float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), zmm13_1)
    float temp0_23[0x4] = _mm_add_ps(temp0_20, temp0_18)
    float var_c70_1 = zmm5_1[0]
    float temp0_25[0x4] = _mm_add_ps(temp0_23, _mm_add_ps(temp0_19, temp0_22))
    var_958_1.o = temp0_25
    temp0_25[0] = temp0_25[0] * temp0_25[0]
    float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
    float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
    temp0_26[0] = temp0_26[0] * temp0_26[0]
    temp0_26[0] = temp0_26[0] + temp0_25[0]
    temp0_27[0] = temp0_27[0] * temp0_27[0]
    temp0_26[0] = temp0_26[0] + temp0_27[0]
    
    if (temp0_26[0] <= 9.99999994e-09f)
        zmm0_1 = zx.o(0)
        zmm5_1 = zx.o(0)
    else
        zmm3_1 = zx.o(0)
        zmm4_1 = 0x3f000000
        zmm3_1[0] = temp0_26[0]
        zmm2_1 = 0x3f000000
        zmm5_1 = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
        zmm3_1[0] = zmm3_1[0] * 0.5f
        zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
        zmm3_1[0] = zmm3_1[0] * zmm5_1[0]
        zmm2_1[0] = 0.5f - zmm3_1[0]
        zmm5_1[0] = zmm5_1[0] * zmm2_1[0]
        zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
        zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
        zmm3_1[0] = zmm3_1[0] * zmm5_1[0]
        zmm4_1[0] = 0.5f - zmm3_1[0]
        zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
        zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
        zmm7_1 = zmm5_1
        float var_978_1 = zmm5_1[0]
        zmm0_1 = zmm5_1
        zmm7_1[0] = zmm7_1[0] * temp0_25[0]
        zmm0_1[0] = zmm0_1[0] * temp0_26[0]
        zmm5_1[0] = zmm5_1[0] * temp0_27[0]
    
    zmm2_1 = data_142d4cc30
    float var_c64_1 = zmm0_1[0]
    float temp0_29[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
    float temp0_30[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    float temp0_32[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), var_368)
    int64_t var_948_1 = 0
    float temp0_33[0x4] = _mm_mul_ps(temp0_29, var_348)
    int32_t var_940_1 = 0
    float temp0_34[0x4] = _mm_mul_ps(temp0_30, var_358)
    float var_318_1[0x4] = zmm2_1
    float temp0_36[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), zmm13_1)
    float temp0_37[0x4] = _mm_add_ps(temp0_33, temp0_34)
    float var_c68 = zmm7_1[0]
    float var_c60_1 = zmm5_1[0]
    float temp0_39[0x4] = _mm_add_ps(temp0_37, _mm_add_ps(temp0_32, temp0_36))
    var_948_1.o = temp0_39
    float temp0_40[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x55)
    temp0_39[0] = temp0_39[0] * temp0_39[0]
    temp0_40[0] = temp0_40[0] * temp0_40[0]
    float temp0_41[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xaa)
    temp0_41[0] = temp0_41[0] * temp0_41[0]
    temp0_40[0] = temp0_40[0] + temp0_39[0]
    temp0_40[0] = temp0_40[0] + temp0_41[0]
    
    if (not(temp0_40[0] <= 9.99999994e-09f))
        zmm3_1 = zx.o(0)
        zmm5_1 = 0x3f000000
        zmm3_1[0] = temp0_40[0]
        zmm2_1 = 0x3f000000
        float temp0_42[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
        zmm3_1[0] = zmm3_1[0] * 0.5f
        temp0_42[0] = temp0_42[0] * temp0_42[0]
        zmm3_1[0] = zmm3_1[0] * temp0_42[0]
        zmm2_1[0] = 0.5f - zmm3_1[0]
        temp0_42[0] = temp0_42[0] * zmm2_1[0]
        temp0_42[0] = temp0_42[0] + temp0_42[0]
        temp0_42[0] = temp0_42[0] * temp0_42[0]
        zmm3_1[0] = zmm3_1[0] * temp0_42[0]
        zmm5_1[0] = 0.5f - zmm3_1[0]
        temp0_42[0] = temp0_42[0] * zmm5_1[0]
        temp0_42[0] = temp0_42[0] + temp0_42[0]
        float var_974_1 = temp0_42[0]
    
    float zmm6_1[0x4] = arg8
    char rbx_2 = arg7
    int64_t var_2d0_1 = data_14395da18
    result = zx.q(r15[1].d)
    int32_t var_2b0_1 = 0
    char r14_2 = arg5
    char var_d08
    int64_t* var_d00
    int64_t* var_cf8
    char var_cf0
    uint32_t var_ce8
    int128_t* var_ce0
    uint64_t var_cd8
    float var_c18[0x4]
    float var_c08[0x4]
    float var_bf8[0x4]
    float var_be8[0x4]
    float var_bd8[0x4]
    float var_bc8[0x4]
    float zmm8_1[0x4]
    float zmm14_1[0x4]
    float zmm15_1[0x4]
    
    if ((result.d s> 0 || r15[3].d s> 0 || r15[9].d s> 0 || r15[5].d s> 0) && (arg9.b & 1) != 0)
        if (result.d s> 0)
            int32_t var_2b0_2 = 2
            sub_141ea9790(r15.b, arg2, &var_308, arg4, 0, r12, r14_2, nullptr, data_143f10dc8, 
                rbx_2, zmm6_1[0], nullptr, r13)
            void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_30 = &rcx_11[3]
            
            if (rax_30 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x20)
                rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_30 = &rcx_11[3]
            
            *(arg2 + 0x30) = rax_30
            *(arg2 + 0x14) += 1
            **(arg2 + 8) = rcx_11
            *(arg2 + 8) = &rcx_11[1]
            rcx_11[1] = 0
            *rcx_11 = &data_142f18bb8
            rcx_11[2].d = rsi_1
            int128_t zmm1_2 = data_143dbb1e0
            int64_t* rcx_16 = data_143f0f180
            int32_t var_1d4_1 = (1 << (data_1439c7a34).b) - 1
            uint64_t rax_35 = zx.q(r15[1].d)
            char var_1d0_1 = 0
            int64_t var_1c8_1 = 0
            int32_t var_1c0_1 = 0
            int128_t var_1f8 = zx.o(0)
            int32_t var_1e8_1 = 1
            int128_t var_1e4_1 = zmm1_2
            int64_t* var_c80
            (*(*rcx_16 + 0x498))(rcx_16, &var_c80, &data_143f02b98, zx.q((rax_35 * 3).d << 4), 4, 
                &var_1f8)
            int64_t* rcx_17 = data_143f0f180
            int128_t* var_d10_2
            var_d10_2.d = 1
            memcpy(
                (*(*rcx_17 + 0x130))(rcx_17, &data_143f02b98, var_c80, 0, r15[1].d * 0x30, 
                    var_d10_2), 
                *r15, r15[1].d * 0x30)
            int64_t* rcx_20 = data_143f0f180
            (*(*rcx_20 + 0x138))(rcx_20, &data_143f02b98, var_c80)
            int64_t* rsi_2 = var_c80
            void*** rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_41 = &rcx_23[5]
            
            if (rax_41 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_41 = &rcx_23[5]
            
            *(arg2 + 0x30) = rax_41
            *(arg2 + 0x14) += 1
            **(arg2 + 8) = rcx_23
            *(arg2 + 8) = &rcx_23[1]
            rcx_23[1] = 0
            *rcx_23 = &data_142d56618
            rcx_23[3] = rsi_2
            int32_t rsi_3 = 0
            rcx_23[2].d = 0
            rcx_23[4].d = 0
            int64_t rax_44
            int64_t rdx_4
            rdx_4:rax_44 = mulu.dp.q(-0x5555555555555555, sx.q(data_1439c7a2c))
            uint32_t rax_45 = 0x10000
            uint32_t rdx_7 = (rdx_4 u>> 6).d * 2
            
            if (rdx_7 s<= 0x10000)
                rax_45 = rdx_7
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(r15[1].d)
            int32_t rax_50 = ((temp2_1 - temp1_1) s>> 1) * 2
            
            if (rax_50 s> 0)
                do
                    uint32_t rax_52 = rax_50 - rsi_3
                    
                    if (rax_45 s<= rax_52)
                        rax_52 = rax_45
                    
                    int32_t temp5_1
                    int32_t temp6_1
                    temp5_1:temp6_1 = sx.q(rax_52)
                    void*** rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    uint64_t r14_3 = zx.q((temp6_1 - temp5_1) s>> 1)
                    void* rdx_10 = &rcx_30[4]
                    
                    if (rdx_10 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x28)
                        rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rdx_10 = &rcx_30[4]
                    
                    *(arg2 + 0x30) = rdx_10
                    void**** rax_56 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_56 = rcx_30
                    *(arg2 + 8) = &rcx_30[1]
                    rcx_30[2].d = rsi_3
                    rsi_3 += (r14_3 << 1).d
                    rcx_30[1] = 0
                    *rcx_30 = &data_142d54988
                    *(rcx_30 + 0x14) = r14_3.d
                    rcx_30[3].d = 1
                while (rsi_3 s< rax_50)
                
                r15 = var_c28
                r12 = var_c58
                r13 = var_c40
                r14_2 = arg5
            
            int64_t* rbx_3 = var_c80
            var_c80 = nullptr
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    char rax_59
                    
                    if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                        rax_59 = sub_1405949a0()
                    
                    if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_59 != 0))
                        (**rbx_3)(rbx_3, 1)
                    else
                        bool z_1
                        
                        if (0 == *(rbx_3 + 0xc))
                            *(rbx_3 + 0xc) = 1
                            z_1 = true
                        else
                            *(rbx_3 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_61 = sub_140a20af0()
                            uint64_t rdx_11 = zx.q(rax_61)
                            void* const rax_62
                            
                            if (rax_61 != 0)
                                rax_62 = *(&data_143cf0bf8 + (rdx_11 u>> 0xe << 3))
                                    + (zx.q(rdx_11.d) & 0x3fff) * 0x18
                            else
                                rax_62 = nullptr
                            
                            *(rax_62 + 8) = rbx_3
                            sub_1405a42f0(&data_143f02390, rdx_11.d)
            
            zmm6_1 = sub_1405d1550(&var_c80)
            rbx_2 = arg7
            rsi_1 = var_c98
        
        var_cd8 = r13
        var_ce0 = nullptr
        var_ce8 = zmm6_1[0]
        var_cf0 = rbx_2
        var_cf8 = data_143f10dc8
        var_d00 = nullptr
        int32_t var_2b0_3 = 0
        float zmm3_2[0x4] = sub_141ea9790(r15.b, arg2, &var_308, arg4, 0, r12, r14_2, var_d00, 
            var_cf8, var_cf0, var_ce8, var_ce0, var_cd8)
        void* r14_4 = arg2 + 0x30
        void*** rcx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_68 = &rcx_42[3]
        
        if (rax_68 u> *(r14_4 + 8))
            sub_140b0e3d0(r14_4, 0x20)
            rcx_42 = (*r14_4 + 7) & 0xfffffffffffffff8
            rax_68 = &rcx_42[3]
        
        *r14_4 = rax_68
        int64_t* rax_69 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_69 = rcx_42
        *(arg2 + 8) = &rcx_42[1]
        rcx_42[1] = 0
        *rcx_42 = &data_142f18bb8
        var_d08.q = &var_c68
        rcx_42[2].d = rsi_1
        zmm6_1, zmm8_1 = sub_141e9dbc0(r15, arg2, r12, rax_3, zmm3_2, rax_5, &var_c78)
        result = zx.q(r15[9].d)
        
        if (result.d s> 0)
            float var_ca8_1 = zmm8_1[0]
            
            if (not(zmm8_1[0] f> *(r13 + 0x2bc)))
                zmm8_1[0] = zmm8_1[0] f/ *(r13 + 0x280)
                var_ca8_1 = zmm8_1[0]
            
            int32_t i = 0
            
            if (result.d s> 0)
                int64_t r13_2 = 0
                
                do
                    void* r8_7 = r15[8]
                    float (* rsi_4)[0x4] = r13_2 * 0x38
                    int32_t i_8 = i + 1
                    r13_2 += 1
                    int32_t i_4 = i_8
                    zmm0_1 = *(r8_7 + rsi_4 + 0x30)
                    
                    if (i_8 s< result.d)
                        int32_t rdx_14 = 1
                        int32_t* r8_9 = r8_7 + 0x30 + r13_2 * 0x38
                        
                        while (not(zmm0_1[0] f!= *r8_9))
                            if (rdx_14 s>= 0x800)
                                break
                            
                            i_8 += 1
                            rdx_14 += 1
                            r13_2 += 1
                            r8_9 = &r8_9[0xe]
                            
                            if (r13_2 s>= sx.q(result.d))
                                break
                        
                        i_4 = i_8
                    
                    float var_248_1 = zmm0_1[0]
                    int64_t* rcx_47 = data_143f0f180
                    int16_t var_250 = 2
                    int32_t var_24c_1 = 0
                    uint64_t rbx_5 = zx.q(i_8 - i)
                    int16_t var_244_1 = 1
                    int32_t j_3 = rbx_5.d
                    (*(*rcx_47 + 0x30))(rcx_47, &var_c28, &var_250)
                    int64_t* var_2d0_2 = var_c28
                    var_cd8 = var_c40
                    var_ce0 = nullptr
                    var_ce8 = zmm6_1[0]
                    var_cf0 = arg7
                    var_cf8 = data_143f10dc8
                    var_d00 = nullptr
                    var_d08 = arg5
                    float zmm9_1[0x4]
                    zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_141ea9790(r15.b, arg2, &var_308, arg4, 
                        0xb, r12, var_d08, var_d00, var_cf8, var_cf0, var_ce8, var_ce0, var_cd8)
                    void*** rcx_51 = (*r14_4 + 7) & 0xfffffffffffffff8
                    void* rax_79 = &rcx_51[3]
                    
                    if (rax_79 u> *(r14_4 + 8))
                        zmm6_1 = sub_140b0e3d0(r14_4, 0x20)
                        rcx_51 = (*r14_4 + 7) & 0xfffffffffffffff8
                        rax_79 = &rcx_51[3]
                    
                    *r14_4 = rax_79
                    *(arg2 + 0x14) += 1
                    uint32_t rbx_7 = (rbx_5 * 9).d << 7
                    **(arg2 + 8) = rcx_51
                    *(arg2 + 8) = &rcx_51[1]
                    rcx_51[1] = 0
                    *rcx_51 = &data_142f18bb8
                    rcx_51[2].d = var_c98
                    zmm1_1 = data_143dbb1e0
                    int32_t var_1a8_1 = 1
                    int64_t* rcx_56 = data_143f0f180
                    int32_t rax_84 = (1 << (data_1439c7a34).b) - 1
                    char var_190_1 = 0
                    int64_t var_188_1 = 0
                    int32_t var_180_1 = 0
                    float var_1b8[0x4]
                    int128_t* var_d10_6 = &var_1b8
                    var_1b8 = zx.o(0)
                    float var_1a4_1[0x4] = zmm1_1
                    int32_t var_194_1 = rax_84
                    int64_t* var_bb8
                    (*(*rcx_56 + 0x498))(rcx_56, &var_bb8, &data_143f02b98, zx.q(rbx_7), 4, 
                        var_d10_6)
                    int64_t* rcx_57 = data_143f0f180
                    var_d10_6.d = 1
                    void* rax_87 =
                        (*(*rcx_57 + 0x130))(rcx_57, &data_143f02b98, var_bb8, 0, rbx_7, var_d10_6)
                    int64_t j_2 = sx.q(j_3)
                    int64_t j_1 = j_2
                    
                    if (j_2.d s> 0)
                        void* var_cc0_1 = rax_87 + 0x60
                        int32_t var_97c_1 = 0x3f800000
                        int32_t var_98c_1 = 0x3f800000
                        int32_t var_b9c_1 = 0x3f800000
                        int32_t var_99c_1 = 0x3f800000
                        int32_t var_9bc_1 = 0x3f800000
                        int32_t var_9cc_1 = 0x3f800000
                        int32_t var_9ac_1 = 0x3f800000
                        int32_t var_a8c_1 = 0x3f800000
                        int32_t var_a7c_1 = 0x3f800000
                        int32_t var_a6c_1 = 0x3f800000
                        int32_t var_a9c_1 = 0x3f800000
                        int32_t var_a4c_1 = 0x3f800000
                        int32_t var_a3c_1 = 0x3f800000
                        int32_t var_a2c_1 = 0x3f800000
                        int32_t var_a1c_1 = 0x3f800000
                        int32_t var_a0c_1 = 0x3f800000
                        int32_t var_9fc_1 = 0x3f800000
                        int32_t var_9ec_1 = 0x3f800000
                        int32_t var_a5c_1 = 0x3f800000
                        int32_t var_9dc_1 = 0x3f800000
                        int32_t var_bec_1 = 0x3f800000
                        int32_t var_bfc_1 = 0x3f800000
                        int32_t var_c0c_1 = 0x3f800000
                        int32_t var_bbc_1 = 0x3f800000
                        int32_t var_bcc_1 = 0x3f800000
                        int32_t var_bdc_1 = 0x3f800000
                        int64_t j
                        
                        do
                            int64_t rbx_8 = r15[8]
                            bool cond:9_1 = *(rsi_4 + rbx_8 + 0x34) == 0
                            zmm1_1 = *(rsi_4 + rbx_8 + 4)
                            zmm0_1 = _mm_and_ps(*(rsi_4 + rbx_8 + 0x18), zmm7_1)
                            float zmm2_2[0x4] = *(rsi_4 + rbx_8 + 8)
                            float var_cc8_1 = zmm0_1[0]
                            float var_988[0x4]
                            var_988[0] = (*(rsi_4 + rbx_8))[0]
                            float temp0_45[0x4] = _mm_shuffle_ps(var_988, var_988, 0xe1)
                            temp0_45[0] = zmm1_1[0]
                            float temp0_46[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0xc6)
                            temp0_46[0] = zmm2_2[0]
                            float temp0_47[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0xc9)
                            var_988 = temp0_47
                            float temp0_49[0x4] =
                                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_47, temp0_47, 0), *r12)
                            float temp0_51[0x4] = __mulps_xmmps_memps(
                                _mm_shuffle_ps(temp0_47, temp0_47, 0xaa), *(r12 + 0x20))
                            float temp0_53[0x4] = __mulps_xmmps_memps(
                                _mm_shuffle_ps(temp0_47, temp0_47, 0x55), *(r12 + 0x10))
                            float temp0_55[0x4] = __mulps_xmmps_memps(
                                _mm_shuffle_ps(temp0_47, temp0_47, 0xff), *(r12 + 0x30))
                            float temp0_56[0x4] = _mm_add_ps(temp0_49, temp0_53)
                            zmm0_1 = *(rsi_4 + rbx_8 + 0xc)
                            float temp0_57[0x4] = _mm_add_ps(temp0_51, temp0_55)
                            float var_998[0x4]
                            var_998[0] = zmm0_1[0]
                            float temp0_58[0x4] = _mm_shuffle_ps(var_998, var_998, 0xe1)
                            float temp0_59[0x4] = _mm_add_ps(temp0_56, temp0_57)
                            temp0_58[0] = (*(rsi_4 + rbx_8 + 0x10))[0]
                            float temp0_60[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xc6)
                            float var_938_1[0x4] = temp0_59
                            temp0_60[0] = (*(rsi_4 + rbx_8 + 0x14))[0]
                            float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xc9)
                            var_998 = temp0_61
                            float temp0_63[0x4] =
                                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_61, temp0_61, 0), *r12)
                            float temp0_65[0x4] = __mulps_xmmps_memps(
                                _mm_shuffle_ps(temp0_61, temp0_61, 0xaa), *(r12 + 0x20))
                            float temp0_67[0x4] = __mulps_xmmps_memps(
                                _mm_shuffle_ps(temp0_61, temp0_61, 0x55), *(r12 + 0x10))
                            float temp0_69[0x4] = __mulps_xmmps_memps(
                                _mm_shuffle_ps(temp0_61, temp0_61, 0xff), *(r12 + 0x30))
                            float zmm3_3[0x4] = var_cc8_1
                            float var_928_1[0x4] = _mm_add_ps(_mm_add_ps(temp0_63, temp0_67), 
                                _mm_add_ps(temp0_65, temp0_69))
                            
                            if (cond:9_1)
                                var_ca8_1 = zmm8_1[0]
                                zmm2_2 = zmm8_1
                                zmm9_1 = zmm8_1
                            else
                                zmm0_1 = zx.o(0)
                                zmm3_3[0] = zmm3_3[0] + zmm3_3[0]
                                zmm0_1[0] = float.s(zx.q(rax_3))
                                zmm8_1[0] = zmm8_1[0] / zmm0_1[0]
                                zmm2_2 = zmm8_1
                                zmm8_1[0] = zmm8_1[0] * 1f
                                zmm2_2[0] = zmm2_2[0] * 1f
                            
                            zmm15_1 = var_c70_1
                            zmm14_1 = var_c68
                            zmm13_1 = var_c64_1
                            float zmm12_1[0x4] = var_c60_1
                            zmm7_1 = zmm13_1
                            int32_t rax_89 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm3_3[0] = zmm3_3[0] * zmm9_1[0]
                            int32_t var_b98 = rax_89
                            int64_t var_818_1 = 0x3f800000
                            zmm3_3[0] = zmm3_3[0] * zmm8_1[0]
                            zmm1_1 = var_c74_1
                            zmm3_3[0] = zmm3_3[0] * zmm2_2[0]
                            float zmm10_1[0x4] = zmm1_1
                            zmm2_2 = var_c78
                            float zmm11_1[0x4] = zmm2_2
                            zmm1_1[0] = zmm1_1[0] * zmm3_3[0]
                            zmm11_1[0] = zmm11_1[0] * zmm3_3[0]
                            zmm10_1[0] = zmm10_1[0] * zmm3_3[0]
                            zmm15_1[0] = zmm15_1[0] * zmm3_3[0]
                            zmm14_1[0] = zmm14_1[0] * zmm3_3[0]
                            zmm7_1[0] = zmm7_1[0] * zmm3_3[0]
                            zmm12_1[0] = zmm12_1[0] * zmm3_3[0]
                            int64_t var_ba8
                            zmm0_1 = var_ba8.o
                            zmm2_2[0] = zmm2_2[0] * zmm3_3[0]
                            zmm1_1[0] = zmm1_1[0] * 0.5f
                            zmm15_1[0] = zmm15_1[0] * zmm3_3[0]
                            zmm14_1[0] = zmm14_1[0] * zmm3_3[0]
                            zmm13_1[0] = zmm13_1[0] f* zmm3_3[0]
                            zmm12_1[0] = zmm12_1[0] * zmm3_3[0]
                            zmm2_2[0] = zmm2_2[0] * 0.5f
                            float var_cc8_2 = zmm1_1[0]
                            zmm11_1[0] = zmm11_1[0] * 0.5f
                            float var_cb8 = zmm2_2[0]
                            zmm10_1[0] = zmm10_1[0] * 0.5f
                            zmm15_1[0] = zmm15_1[0] * 0.5f
                            zmm11_1[0] = zmm11_1[0] f+ *(rsi_4 + rbx_8)
                            zmm14_1[0] = zmm14_1[0] * 0.5f
                            zmm10_1[0] = zmm10_1[0] f+ *(rsi_4 + rbx_8 + 4)
                            zmm7_1[0] = zmm7_1[0] * 0.5f
                            zmm15_1[0] = zmm15_1[0] f+ *(rsi_4 + rbx_8 + 8)
                            zmm11_1[0] = zmm11_1[0] - zmm14_1[0]
                            zmm12_1[0] = zmm12_1[0] * 0.5f
                            zmm10_1[0] = zmm10_1[0] - zmm7_1[0]
                            zmm15_1[0] = zmm15_1[0] * 0.5f
                            zmm15_1[0] = zmm15_1[0] - zmm12_1[0]
                            zmm14_1[0] = zmm14_1[0] * 0.5f
                            zmm0_1[0] = zmm11_1[0]
                            zmm13_1[0] = zmm13_1[0] f* 0.5f
                            float temp0_73[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
                            temp0_73[0] = zmm10_1[0]
                            zmm12_1[0] = zmm12_1[0] * 0.5f
                            float temp0_74[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0xc6)
                            temp0_74[0] = zmm15_1[0]
                            float temp0_75[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0xc9)
                            var_ba8.o = temp0_75
                            float var_810_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_800
                            sub_14208ca90(&var_b98, &var_800)
                            *(var_cc0_1 - 0x60) = temp0_75
                            *(var_cc0_1 - 0x50) = var_818_1.o
                            *(var_cc0_1 - 0x40) = var_810_1
                            zmm11_1[0] = zmm11_1[0] f+ *(rsi_4 + rbx_8)
                            zmm10_1[0] = zmm10_1[0] f+ *(rsi_4 + rbx_8 + 4)
                            zmm11_1[0] = zmm11_1[0] + zmm14_1[0]
                            zmm10_1[0] = zmm10_1[0] + zmm7_1[0]
                            int32_t rax_91 = *(rsi_4 + rbx_8 + 0x2c)
                            float var_9a8[0x4]
                            var_9a8[0] = zmm11_1[0]
                            int32_t var_b90 = rax_91
                            float temp0_76[0x4] = _mm_shuffle_ps(var_9a8, var_9a8, 0xe1)
                            int32_t var_7e8_1 = 0x3f800000
                            zmm15_1[0] = zmm15_1[0] f+ *(rsi_4 + rbx_8 + 8)
                            temp0_76[0] = zmm10_1[0]
                            int32_t var_7e4_1 = 0x3f800000
                            float temp0_77[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0xc6)
                            zmm15_1[0] = zmm15_1[0] + zmm12_1[0]
                            temp0_77[0] = zmm15_1[0]
                            float temp0_78[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0xc9)
                            var_9a8 = temp0_78
                            float var_7e0_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_7d0
                            sub_14208ca90(&var_b90, &var_7d0)
                            int64_t var_7b8_1 = 0
                            *(var_cc0_1 - 0x30) = temp0_78
                            *(var_cc0_1 - 0x20) = var_7e8_1.o
                            *(var_cc0_1 - 0x10) = var_7e0_1
                            zmm3_3 = *(rsi_4 + rbx_8)
                            zmm1_1 = *(rsi_4 + rbx_8 + 4)
                            zmm3_3[0] = zmm3_3[0] - zmm11_1[0]
                            zmm2_2 = *(rsi_4 + rbx_8 + 8)
                            zmm1_1[0] = zmm1_1[0] - zmm10_1[0]
                            int32_t rax_93 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm2_2[0] = zmm2_2[0] - zmm15_1[0]
                            int32_t var_b88 = rax_93
                            zmm3_3[0] = zmm3_3[0] - zmm14_1[0]
                            zmm1_1[0] = zmm1_1[0] - zmm7_1[0]
                            zmm2_2[0] = zmm2_2[0] - zmm12_1[0]
                            float var_9c8[0x4]
                            var_9c8[0] = zmm3_3[0]
                            float temp0_79[0x4] = _mm_shuffle_ps(var_9c8, var_9c8, 0xe1)
                            temp0_79[0] = zmm1_1[0]
                            float temp0_80[0x4] = _mm_shuffle_ps(temp0_79, temp0_79, 0xc6)
                            temp0_80[0] = zmm2_2[0]
                            float temp0_81[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0xc9)
                            var_9c8 = temp0_81
                            float var_7b0_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_7a0
                            sub_14208ca90(&var_b88, &var_7a0)
                            float zmm4_2 = zmm12_1[0]
                            *var_cc0_1 = temp0_81
                            *(var_cc0_1 + 0x10) = var_7b8_1.o
                            *(var_cc0_1 + 0x20) = var_7b0_1
                            zmm15_1[0] = zmm15_1[0] f+ *(rsi_4 + rbx_8 + 8)
                            zmm11_1[0] = zmm11_1[0] f+ *(rsi_4 + rbx_8)
                            zmm10_1[0] = zmm10_1[0] f+ *(rsi_4 + rbx_8 + 4)
                            int32_t var_b80 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm4_2 = zmm4_2 + zmm15_1[0]
                            zmm11_1[0] = zmm11_1[0] + zmm14_1[0]
                            zmm7_1[0] = zmm7_1[0] + zmm10_1[0]
                            float var_9d8[0x4]
                            var_9d8[0] = zmm11_1[0]
                            float temp0_82[0x4] = _mm_shuffle_ps(var_9d8, var_9d8, 0xe1)
                            temp0_82[0] = zmm7_1[0]
                            float temp0_83[0x4] = _mm_shuffle_ps(temp0_82, temp0_82, 0xc6)
                            temp0_83[0] = zmm4_2
                            float temp0_84[0x4] = _mm_shuffle_ps(temp0_83, temp0_83, 0xc9)
                            var_9d8 = temp0_84
                            int32_t var_788_1 = 0x3f800000
                            int32_t var_784_1 = 0x3f800000
                            float var_780_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_770
                            sub_14208ca90(&var_b80, &var_770)
                            int64_t var_758_1 = 0
                            *(var_cc0_1 + 0x30) = temp0_84
                            *(var_cc0_1 + 0x40) = var_788_1.o
                            *(var_cc0_1 + 0x50) = var_780_1
                            zmm1_1 = *(rsi_4 + rbx_8)
                            zmm2_2 = *(rsi_4 + rbx_8 + 4)
                            zmm1_1[0] = zmm1_1[0] - zmm11_1[0]
                            zmm3_3 = *(rsi_4 + rbx_8 + 8)
                            zmm2_2[0] = zmm2_2[0] - zmm10_1[0]
                            int32_t rax_97 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm3_3[0] = zmm3_3[0] - zmm15_1[0]
                            int32_t var_b78 = rax_97
                            zmm1_1[0] = zmm1_1[0] - zmm14_1[0]
                            zmm2_2[0] = zmm2_2[0] - zmm7_1[0]
                            zmm3_3[0] = zmm3_3[0] - zmm12_1[0]
                            float var_9b8[0x4]
                            var_9b8[0] = zmm1_1[0]
                            float temp0_85[0x4] = _mm_shuffle_ps(var_9b8, var_9b8, 0xe1)
                            temp0_85[0] = zmm2_2[0]
                            float temp0_86[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0xc6)
                            temp0_86[0] = zmm3_3[0]
                            float temp0_87[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0xc9)
                            var_9b8 = temp0_87
                            float var_750_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_740
                            sub_14208ca90(&var_b78, &var_740)
                            zmm4_2 = zmm7_1[0]
                            int32_t var_728_1 = 0
                            *(var_cc0_1 + 0x60) = temp0_87
                            *(var_cc0_1 + 0x70) = var_758_1.o
                            *(var_cc0_1 + 0x80) = var_750_1
                            zmm1_1 = *(rsi_4 + rbx_8)
                            zmm0_1 = *(rsi_4 + rbx_8 + 4)
                            zmm1_1[0] = zmm1_1[0] - zmm11_1[0]
                            zmm2_2 = *(rsi_4 + rbx_8 + 8)
                            zmm0_1[0] = zmm0_1[0] - zmm10_1[0]
                            int32_t rax_99 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm2_2[0] = zmm2_2[0] - zmm15_1[0]
                            int32_t var_b70 = rax_99
                            int32_t var_724_1 = 0x3f800000
                            zmm14_1[0] = zmm14_1[0] + zmm1_1[0]
                            zmm4_2 = zmm4_2 + zmm0_1[0]
                            zmm12_1[0] = zmm12_1[0] + zmm2_2[0]
                            float var_a98[0x4]
                            var_a98[0] = zmm14_1[0]
                            float temp0_88[0x4] = _mm_shuffle_ps(var_a98, var_a98, 0xe1)
                            temp0_88[0] = zmm4_2
                            float temp0_89[0x4] = _mm_shuffle_ps(temp0_88, temp0_88, 0xc6)
                            temp0_89[0] = zmm12_1[0]
                            float temp0_90[0x4] = _mm_shuffle_ps(temp0_89, temp0_89, 0xc9)
                            var_a98 = temp0_90
                            float var_720_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_710
                            sub_14208ca90(&var_b70, &var_710)
                            zmm2_2 = var_cc8_2
                            int64_t var_6f8_1 = 0x3f800000
                            *(var_cc0_1 + 0x90) = temp0_90
                            *(var_cc0_1 + 0xa0) = var_728_1.o
                            zmm1_1 = var_cb8
                            *(var_cc0_1 + 0xb0) = var_720_1
                            zmm1_1[0] = zmm1_1[0] f+ *(rsi_4 + rbx_8 + 0xc)
                            zmm2_2[0] = zmm2_2[0] f+ *(rsi_4 + rbx_8 + 0x10)
                            zmm15_1[0] = zmm15_1[0] f+ *(rsi_4 + rbx_8 + 0x14)
                            int32_t var_ab0 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm1_1[0] = zmm1_1[0] - zmm14_1[0]
                            zmm2_2[0] = zmm2_2[0] f- zmm13_1[0]
                            zmm15_1[0] = zmm15_1[0] - zmm12_1[0]
                            float var_a88[0x4]
                            var_a88[0] = zmm1_1[0]
                            float temp0_91[0x4] = _mm_shuffle_ps(var_a88, var_a88, 0xe1)
                            temp0_91[0] = zmm2_2[0]
                            float temp0_92[0x4] = _mm_shuffle_ps(temp0_91, temp0_91, 0xc6)
                            temp0_92[0] = zmm15_1[0]
                            float temp0_93[0x4] = _mm_shuffle_ps(temp0_92, temp0_92, 0xc9)
                            var_a88 = temp0_93
                            float var_6f0_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_6e0
                            sub_14208ca90(&var_ab0, &var_6e0)
                            int32_t var_6c8_1 = 0x3f800000
                            *(var_cc0_1 + 0xc0) = temp0_93
                            zmm4_2 = zmm13_1[0]
                            float zmm5_2 = zmm12_1[0]
                            *(var_cc0_1 + 0xd0) = var_6f8_1.o
                            zmm1_1 = var_cc8_2
                            *(var_cc0_1 + 0xe0) = var_6f0_1
                            zmm0_1 = var_cb8
                            zmm0_1[0] = zmm0_1[0] f+ *(rsi_4 + rbx_8 + 0xc)
                            zmm1_1[0] = zmm1_1[0] f+ *(rsi_4 + rbx_8 + 0x10)
                            zmm15_1[0] = zmm15_1[0] f+ *(rsi_4 + rbx_8 + 0x14)
                            int32_t var_b68 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm14_1[0] = zmm14_1[0] + zmm0_1[0]
                            int32_t var_6c4_1 = 0x3f800000
                            zmm4_2 = zmm4_2 + zmm1_1[0]
                            zmm5_2 = zmm5_2 + zmm15_1[0]
                            float var_a78[0x4]
                            var_a78[0] = zmm14_1[0]
                            float temp0_94[0x4] = _mm_shuffle_ps(var_a78, var_a78, 0xe1)
                            temp0_94[0] = zmm4_2
                            float temp0_95[0x4] = _mm_shuffle_ps(temp0_94, temp0_94, 0xc6)
                            temp0_95[0] = zmm5_2
                            float temp0_96[0x4] = _mm_shuffle_ps(temp0_95, temp0_95, 0xc9)
                            var_a78 = temp0_96
                            float var_6c0_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_6b0
                            sub_14208ca90(&var_b68, &var_6b0)
                            *(var_cc0_1 + 0xf0) = temp0_96
                            *(var_cc0_1 + 0x100) = var_6c8_1.o
                            *(var_cc0_1 + 0x110) = var_6c0_1
                            zmm1_1 = *(rsi_4 + rbx_8 + 0xc)
                            zmm2_2 = *(rsi_4 + rbx_8 + 0x10)
                            zmm1_1[0] = zmm1_1[0] - var_cb8
                            zmm2_2[0] = zmm2_2[0] - var_cc8_2
                            zmm3_3 = *(rsi_4 + rbx_8 + 0x14)
                            zmm1_1[0] = zmm1_1[0] - zmm14_1[0]
                            int32_t rax_105 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm3_3[0] = zmm3_3[0] - zmm15_1[0]
                            zmm2_2[0] = zmm2_2[0] f- zmm13_1[0]
                            int32_t var_b60 = rax_105
                            int64_t var_698_1 = 0
                            float var_aa8[0x4]
                            var_aa8[0] = zmm1_1[0]
                            float temp0_97[0x4] = _mm_shuffle_ps(var_aa8, var_aa8, 0xe1)
                            zmm3_3[0] = zmm3_3[0] - zmm12_1[0]
                            temp0_97[0] = zmm2_2[0]
                            float temp0_98[0x4] = _mm_shuffle_ps(temp0_97, temp0_97, 0xc6)
                            temp0_98[0] = zmm3_3[0]
                            float temp0_99[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0xc9)
                            var_aa8 = temp0_99
                            float var_690_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_680
                            sub_14208ca90(&var_b60, &var_680)
                            int32_t var_668_1 = 0x3f800000
                            *(var_cc0_1 + 0x120) = temp0_99
                            zmm4_2 = zmm13_1[0]
                            zmm5_2 = zmm12_1[0]
                            *(var_cc0_1 + 0x130) = var_698_1.o
                            zmm1_1 = var_cc8_2
                            *(var_cc0_1 + 0x140) = var_690_1
                            zmm0_1 = var_cb8
                            zmm0_1[0] = zmm0_1[0] f+ *(rsi_4 + rbx_8 + 0xc)
                            zmm1_1[0] = zmm1_1[0] f+ *(rsi_4 + rbx_8 + 0x10)
                            zmm15_1[0] = zmm15_1[0] f+ *(rsi_4 + rbx_8 + 0x14)
                            int32_t var_b58 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm14_1[0] = zmm14_1[0] + zmm0_1[0]
                            int32_t var_664_1 = 0x3f800000
                            zmm4_2 = zmm4_2 + zmm1_1[0]
                            zmm5_2 = zmm5_2 + zmm15_1[0]
                            float var_a58[0x4]
                            var_a58[0] = zmm14_1[0]
                            float temp0_100[0x4] = _mm_shuffle_ps(var_a58, var_a58, 0xe1)
                            temp0_100[0] = zmm4_2
                            float temp0_101[0x4] = _mm_shuffle_ps(temp0_100, temp0_100, 0xc6)
                            temp0_101[0] = zmm5_2
                            float temp0_102[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0xc9)
                            var_a58 = temp0_102
                            float var_660_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_650
                            sub_14208ca90(&var_b58, &var_650)
                            *(var_cc0_1 + 0x150) = temp0_102
                            *(var_cc0_1 + 0x160) = var_668_1.o
                            *(var_cc0_1 + 0x170) = var_660_1
                            zmm1_1 = *(rsi_4 + rbx_8 + 0xc)
                            zmm1_1[0] = zmm1_1[0] - var_cb8
                            zmm2_2 = *(rsi_4 + rbx_8 + 0x10)
                            zmm2_2[0] = zmm2_2[0] - var_cc8_2
                            zmm3_3 = *(rsi_4 + rbx_8 + 0x14)
                            zmm3_3[0] = zmm3_3[0] - zmm15_1[0]
                            int32_t rax_109 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm1_1[0] = zmm1_1[0] - zmm14_1[0]
                            int32_t var_b50 = rax_109
                            zmm2_2[0] = zmm2_2[0] f- zmm13_1[0]
                            zmm3_3[0] = zmm3_3[0] - zmm12_1[0]
                            float var_a48[0x4]
                            var_a48[0] = zmm1_1[0]
                            float temp0_103[0x4] = _mm_shuffle_ps(var_a48, var_a48, 0xe1)
                            temp0_103[0] = zmm2_2[0]
                            float temp0_104[0x4] = _mm_shuffle_ps(temp0_103, temp0_103, 0xc6)
                            temp0_104[0] = zmm3_3[0]
                            int64_t var_638_1 = 0
                            float temp0_105[0x4] = _mm_shuffle_ps(temp0_104, temp0_104, 0xc9)
                            var_a48 = temp0_105
                            float var_630_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_620
                            sub_14208ca90(&var_b50, &var_620)
                            zmm4_2 = zmm13_1[0]
                            int32_t var_608_1 = 0
                            *(var_cc0_1 + 0x180) = temp0_105
                            zmm5_2 = zmm12_1[0]
                            *(var_cc0_1 + 0x190) = var_638_1.o
                            *(var_cc0_1 + 0x1a0) = var_630_1
                            zmm0_1 = *(rsi_4 + rbx_8 + 0xc)
                            zmm0_1[0] = zmm0_1[0] - var_cb8
                            zmm1_1 = *(rsi_4 + rbx_8 + 0x10)
                            zmm1_1[0] = zmm1_1[0] - var_cc8_2
                            zmm2_2 = *(rsi_4 + rbx_8 + 0x14)
                            int32_t rax_111 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm2_2[0] = zmm2_2[0] - zmm15_1[0]
                            zmm14_1[0] = zmm14_1[0] + zmm0_1[0]
                            int32_t var_b48 = rax_111
                            zmm4_2 = zmm4_2 + zmm1_1[0]
                            int32_t var_604_1 = 0x3f800000
                            zmm5_2 = zmm5_2 + zmm2_2[0]
                            float var_a38[0x4]
                            var_a38[0] = zmm14_1[0]
                            float temp0_106[0x4] = _mm_shuffle_ps(var_a38, var_a38, 0xe1)
                            temp0_106[0] = zmm4_2
                            float temp0_107[0x4] = _mm_shuffle_ps(temp0_106, temp0_106, 0xc6)
                            temp0_107[0] = zmm5_2
                            float temp0_108[0x4] = _mm_shuffle_ps(temp0_107, temp0_107, 0xc9)
                            var_a38 = temp0_108
                            float var_600_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_5f0
                            sub_14208ca90(&var_b48, &var_5f0)
                            int64_t var_5d8_1 = 0
                            *(var_cc0_1 + 0x1b0) = temp0_108
                            *(var_cc0_1 + 0x1c0) = var_608_1.o
                            *(var_cc0_1 + 0x1d0) = var_600_1
                            zmm1_1 = *(rsi_4 + rbx_8)
                            zmm2_2 = *(rsi_4 + rbx_8 + 4)
                            zmm1_1[0] = zmm1_1[0] - zmm11_1[0]
                            zmm3_3 = *(rsi_4 + rbx_8 + 8)
                            zmm2_2[0] = zmm2_2[0] - zmm10_1[0]
                            int32_t rax_113 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm3_3[0] = zmm3_3[0] - zmm15_1[0]
                            int32_t var_b40 = rax_113
                            zmm1_1[0] = zmm1_1[0] - zmm14_1[0]
                            zmm2_2[0] = zmm2_2[0] - zmm7_1[0]
                            zmm3_3[0] = zmm3_3[0] - zmm12_1[0]
                            float var_a28[0x4]
                            var_a28[0] = zmm1_1[0]
                            float temp0_109[0x4] = _mm_shuffle_ps(var_a28, var_a28, 0xe1)
                            temp0_109[0] = zmm2_2[0]
                            float temp0_110[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0xc6)
                            temp0_110[0] = zmm3_3[0]
                            float temp0_111[0x4] = _mm_shuffle_ps(temp0_110, temp0_110, 0xc9)
                            var_a28 = temp0_111
                            float var_5d0_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_5c0
                            sub_14208ca90(&var_b40, &var_5c0)
                            int32_t var_5a8_1 = 0x3f800000
                            int32_t var_5a4_1 = 0x3f800000
                            *(var_cc0_1 + 0x1e0) = temp0_111
                            zmm4_2 = zmm7_1[0]
                            *(var_cc0_1 + 0x1f0) = var_5d8_1.o
                            *(var_cc0_1 + 0x200) = var_5d0_1
                            zmm10_1[0] = zmm10_1[0] f+ *(rsi_4 + rbx_8 + 4)
                            zmm11_1[0] = zmm11_1[0] f+ *(rsi_4 + rbx_8)
                            zmm15_1[0] = zmm15_1[0] f+ *(rsi_4 + rbx_8 + 8)
                            int32_t var_b38 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm4_2 = zmm4_2 + zmm10_1[0]
                            zmm14_1[0] = zmm14_1[0] + zmm11_1[0]
                            zmm12_1[0] = zmm12_1[0] + zmm15_1[0]
                            float var_a18[0x4]
                            var_a18[0] = zmm14_1[0]
                            float temp0_112[0x4] = _mm_shuffle_ps(var_a18, var_a18, 0xe1)
                            temp0_112[0] = zmm4_2
                            float temp0_113[0x4] = _mm_shuffle_ps(temp0_112, temp0_112, 0xc6)
                            temp0_113[0] = zmm12_1[0]
                            float temp0_114[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0xc9)
                            var_a18 = temp0_114
                            float var_5a0_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_590
                            sub_14208ca90(&var_b38, &var_590)
                            int64_t var_578_1 = 0
                            *(var_cc0_1 + 0x210) = temp0_114
                            *(var_cc0_1 + 0x220) = var_5a8_1.o
                            *(var_cc0_1 + 0x230) = var_5a0_1
                            zmm1_1 = *(rsi_4 + rbx_8 + 0xc)
                            zmm1_1[0] = zmm1_1[0] - var_cb8
                            zmm2_2 = *(rsi_4 + rbx_8 + 0x10)
                            zmm2_2[0] = zmm2_2[0] - var_cc8_2
                            zmm3_3 = *(rsi_4 + rbx_8 + 0x14)
                            int32_t rax_117 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm3_3[0] = zmm3_3[0] - zmm15_1[0]
                            zmm1_1[0] = zmm1_1[0] - zmm14_1[0]
                            int32_t var_b30 = rax_117
                            zmm2_2[0] = zmm2_2[0] f- zmm13_1[0]
                            zmm3_3[0] = zmm3_3[0] - zmm12_1[0]
                            float var_a08[0x4]
                            var_a08[0] = zmm1_1[0]
                            float temp0_115[0x4] = _mm_shuffle_ps(var_a08, var_a08, 0xe1)
                            temp0_115[0] = zmm2_2[0]
                            float temp0_116[0x4] = _mm_shuffle_ps(temp0_115, temp0_115, 0xc6)
                            temp0_116[0] = zmm3_3[0]
                            float temp0_117[0x4] = _mm_shuffle_ps(temp0_116, temp0_116, 0xc9)
                            var_a08 = temp0_117
                            float var_570_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_560
                            sub_14208ca90(&var_b30, &var_560)
                            *(var_cc0_1 + 0x240) = temp0_117
                            *(var_cc0_1 + 0x250) = var_578_1.o
                            *(var_cc0_1 + 0x260) = var_570_1
                            zmm10_1[0] = zmm10_1[0] f+ *(rsi_4 + rbx_8 + 4)
                            zmm11_1[0] = zmm11_1[0] f+ *(rsi_4 + rbx_8)
                            zmm15_1[0] = zmm15_1[0] f+ *(rsi_4 + rbx_8 + 8)
                            int32_t var_b28 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm14_1[0] = zmm14_1[0] + zmm11_1[0]
                            int32_t var_548_1 = 0x3f800000
                            int32_t var_544_1 = 0x3f800000
                            zmm4_2 = zmm7_1[0] + zmm10_1[0]
                            zmm12_1[0] = zmm12_1[0] + zmm15_1[0]
                            float var_9f8[0x4]
                            var_9f8[0] = zmm14_1[0]
                            float temp0_118[0x4] = _mm_shuffle_ps(var_9f8, var_9f8, 0xe1)
                            temp0_118[0] = zmm4_2
                            float temp0_119[0x4] = _mm_shuffle_ps(temp0_118, temp0_118, 0xc6)
                            temp0_119[0] = zmm12_1[0]
                            float temp0_120[0x4] = _mm_shuffle_ps(temp0_119, temp0_119, 0xc9)
                            var_9f8 = temp0_120
                            float var_540_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_530
                            sub_14208ca90(&var_b28, &var_530)
                            int32_t var_518_1 = 0x3f800000
                            *(var_cc0_1 + 0x270) = temp0_120
                            zmm4_2 = zmm13_1[0]
                            zmm5_2 = zmm12_1[0]
                            *(var_cc0_1 + 0x280) = var_548_1.o
                            zmm1_1 = var_cc8_2
                            *(var_cc0_1 + 0x290) = var_540_1
                            zmm0_1 = var_cb8
                            zmm0_1[0] = zmm0_1[0] f+ *(rsi_4 + rbx_8 + 0xc)
                            zmm1_1[0] = zmm1_1[0] f+ *(rsi_4 + rbx_8 + 0x10)
                            zmm15_1[0] = zmm15_1[0] f+ *(rsi_4 + rbx_8 + 0x14)
                            int32_t var_b20 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm14_1[0] = zmm14_1[0] + zmm0_1[0]
                            int32_t var_514_1 = 0x3f800000
                            zmm4_2 = zmm4_2 + zmm1_1[0]
                            zmm5_2 = zmm5_2 + zmm15_1[0]
                            float var_a68[0x4]
                            var_a68[0] = zmm14_1[0]
                            float temp0_121[0x4] = _mm_shuffle_ps(var_a68, var_a68, 0xe1)
                            temp0_121[0] = zmm4_2
                            float temp0_122[0x4] = _mm_shuffle_ps(temp0_121, temp0_121, 0xc6)
                            temp0_122[0] = zmm5_2
                            float temp0_123[0x4] = _mm_shuffle_ps(temp0_122, temp0_122, 0xc9)
                            var_a68 = temp0_123
                            float var_510_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_500
                            sub_14208ca90(&var_b20, &var_500)
                            *(var_cc0_1 + 0x2a0) = temp0_123
                            *(var_cc0_1 + 0x2b0) = var_518_1.o
                            *(var_cc0_1 + 0x2c0) = var_510_1
                            zmm1_1 = *(rsi_4 + rbx_8 + 0xc)
                            zmm2_2 = *(rsi_4 + rbx_8 + 0x10)
                            zmm3_3 = *(rsi_4 + rbx_8 + 0x14)
                            zmm1_1[0] = zmm1_1[0] - var_cb8
                            zmm2_2[0] = zmm2_2[0] - var_cc8_2
                            int32_t rax_123 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm3_3[0] = zmm3_3[0] - zmm15_1[0]
                            int32_t var_b18 = rax_123
                            zmm1_1[0] = zmm1_1[0] - zmm14_1[0]
                            zmm2_2[0] = zmm2_2[0] f- zmm13_1[0]
                            zmm3_3[0] = zmm3_3[0] - zmm12_1[0]
                            float var_9e8[0x4]
                            var_9e8[0] = zmm1_1[0]
                            int64_t var_4e8_1 = 0
                            float temp0_124[0x4] = _mm_shuffle_ps(var_9e8, var_9e8, 0xe1)
                            temp0_124[0] = zmm2_2[0]
                            float temp0_125[0x4] = _mm_shuffle_ps(temp0_124, temp0_124, 0xc6)
                            temp0_125[0] = zmm3_3[0]
                            float temp0_126[0x4] = _mm_shuffle_ps(temp0_125, temp0_125, 0xc9)
                            var_9e8 = temp0_126
                            float var_4e0_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_4d0
                            sub_14208ca90(&var_b18, &var_4d0)
                            zmm4_2 = zmm7_1[0]
                            int32_t var_4b8_1 = 0
                            *(var_cc0_1 + 0x2d0) = temp0_126
                            *(var_cc0_1 + 0x2e0) = var_4e8_1.o
                            *(var_cc0_1 + 0x2f0) = var_4e0_1
                            zmm1_1 = *(rsi_4 + rbx_8)
                            zmm0_1 = *(rsi_4 + rbx_8 + 4)
                            zmm1_1[0] = zmm1_1[0] - zmm11_1[0]
                            zmm2_2 = *(rsi_4 + rbx_8 + 8)
                            zmm0_1[0] = zmm0_1[0] - zmm10_1[0]
                            int32_t rax_125 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm2_2[0] = zmm2_2[0] - zmm15_1[0]
                            int32_t var_b10 = rax_125
                            int32_t var_4b4_1 = 0x3f800000
                            zmm14_1[0] = zmm14_1[0] + zmm1_1[0]
                            zmm4_2 = zmm4_2 + zmm0_1[0]
                            zmm12_1[0] = zmm12_1[0] + zmm2_2[0]
                            var_bf8[0] = zmm14_1[0]
                            float temp0_127[0x4] = _mm_shuffle_ps(var_bf8, var_bf8, 0xe1)
                            temp0_127[0] = zmm4_2
                            float temp0_128[0x4] = _mm_shuffle_ps(temp0_127, temp0_127, 0xc6)
                            temp0_128[0] = zmm12_1[0]
                            float temp0_129[0x4] = _mm_shuffle_ps(temp0_128, temp0_128, 0xc9)
                            var_bf8 = temp0_129
                            float var_4b0_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_4a0
                            sub_14208ca90(&var_b10, &var_4a0)
                            int64_t var_488_1 = 0x3f800000
                            *(var_cc0_1 + 0x300) = temp0_129
                            *(var_cc0_1 + 0x310) = var_4b8_1.o
                            *(var_cc0_1 + 0x320) = var_4b0_1
                            zmm11_1[0] = zmm11_1[0] f+ *(rsi_4 + rbx_8)
                            zmm10_1[0] = zmm10_1[0] f+ *(rsi_4 + rbx_8 + 4)
                            zmm15_1[0] = zmm15_1[0] f+ *(rsi_4 + rbx_8 + 8)
                            int32_t var_b08 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm11_1[0] = zmm11_1[0] - zmm14_1[0]
                            zmm10_1[0] = zmm10_1[0] - zmm7_1[0]
                            zmm15_1[0] = zmm15_1[0] - zmm12_1[0]
                            var_c08[0] = zmm11_1[0]
                            float temp0_130[0x4] = _mm_shuffle_ps(var_c08, var_c08, 0xe1)
                            temp0_130[0] = zmm10_1[0]
                            float temp0_131[0x4] = _mm_shuffle_ps(temp0_130, temp0_130, 0xc6)
                            temp0_131[0] = zmm15_1[0]
                            float temp0_132[0x4] = _mm_shuffle_ps(temp0_131, temp0_131, 0xc9)
                            var_c08 = temp0_132
                            float var_480_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_470
                            sub_14208ca90(&var_b08, &var_470)
                            zmm4_2 = zmm13_1[0]
                            int32_t var_458_1 = 0
                            *(var_cc0_1 + 0x330) = temp0_132
                            zmm5_2 = zmm12_1[0]
                            *(var_cc0_1 + 0x340) = var_488_1.o
                            *(var_cc0_1 + 0x350) = var_480_1
                            zmm0_1 = *(rsi_4 + rbx_8 + 0xc)
                            zmm0_1[0] = zmm0_1[0] - var_cb8
                            zmm1_1 = *(rsi_4 + rbx_8 + 0x10)
                            zmm1_1[0] = zmm1_1[0] - var_cc8_2
                            zmm2_2 = *(rsi_4 + rbx_8 + 0x14)
                            int32_t rax_129 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm2_2[0] = zmm2_2[0] - zmm15_1[0]
                            zmm14_1[0] = zmm14_1[0] + zmm0_1[0]
                            int32_t var_b00 = rax_129
                            zmm4_2 = zmm4_2 + zmm1_1[0]
                            int32_t var_454_1 = 0x3f800000
                            zmm5_2 = zmm5_2 + zmm2_2[0]
                            var_c18[0] = zmm14_1[0]
                            float temp0_133[0x4] = _mm_shuffle_ps(var_c18, var_c18, 0xe1)
                            temp0_133[0] = zmm4_2
                            float temp0_134[0x4] = _mm_shuffle_ps(temp0_133, temp0_133, 0xc6)
                            temp0_134[0] = zmm5_2
                            float temp0_135[0x4] = _mm_shuffle_ps(temp0_134, temp0_134, 0xc9)
                            var_c18 = temp0_135
                            float var_450_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_440
                            sub_14208ca90(&var_b00, &var_440)
                            int64_t var_428_1 = 0x3f800000
                            *(var_cc0_1 + 0x360) = temp0_135
                            *(var_cc0_1 + 0x370) = var_458_1.o
                            *(var_cc0_1 + 0x380) = var_450_1
                            zmm11_1[0] = zmm11_1[0] f+ *(rsi_4 + rbx_8)
                            zmm10_1[0] = zmm10_1[0] f+ *(rsi_4 + rbx_8 + 4)
                            zmm15_1[0] = zmm15_1[0] f+ *(rsi_4 + rbx_8 + 8)
                            int32_t var_af8 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm11_1[0] = zmm11_1[0] - zmm14_1[0]
                            zmm10_1[0] = zmm10_1[0] - zmm7_1[0]
                            zmm15_1[0] = zmm15_1[0] - zmm12_1[0]
                            var_bc8[0] = zmm11_1[0]
                            float temp0_136[0x4] = _mm_shuffle_ps(var_bc8, var_bc8, 0xe1)
                            temp0_136[0] = zmm10_1[0]
                            float temp0_137[0x4] = _mm_shuffle_ps(temp0_136, temp0_136, 0xc6)
                            temp0_137[0] = zmm15_1[0]
                            float temp0_138[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xc9)
                            var_bc8 = temp0_138
                            float var_420_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_410
                            sub_14208ca90(&var_af8, &var_410)
                            zmm7_1 = var_cb8
                            zmm6_1 = var_cc8_2
                            *(var_cc0_1 + 0x390) = temp0_138
                            *(var_cc0_1 + 0x3a0) = var_428_1.o
                            *(var_cc0_1 + 0x3b0) = var_420_1
                            zmm7_1[0] = zmm7_1[0] f+ *(rsi_4 + rbx_8 + 0xc)
                            zmm7_1[0] = zmm7_1[0] - zmm14_1[0]
                            var_cb8 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm6_1[0] = zmm6_1[0] f+ *(rsi_4 + rbx_8 + 0x10)
                            int64_t var_3f8_1 = 0x3f800000
                            zmm15_1[0] = zmm15_1[0] f+ *(rsi_4 + rbx_8 + 0x14)
                            var_bd8[0] = zmm7_1[0]
                            float temp0_139[0x4] = _mm_shuffle_ps(var_bd8, var_bd8, 0xe1)
                            zmm6_1[0] = zmm6_1[0] f- zmm13_1[0]
                            zmm15_1[0] = zmm15_1[0] - zmm12_1[0]
                            temp0_139[0] = zmm6_1[0]
                            float temp0_140[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0xc6)
                            temp0_140[0] = zmm15_1[0]
                            float temp0_141[0x4] = _mm_shuffle_ps(temp0_140, temp0_140, 0xc9)
                            var_bd8 = temp0_141
                            float var_3f0_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_3e0
                            sub_14208ca90(&var_cb8, &var_3e0)
                            int32_t var_3c8_1 = 0
                            *(var_cc0_1 + 0x3c0) = temp0_141
                            *(var_cc0_1 + 0x3d0) = var_3f8_1.o
                            *(var_cc0_1 + 0x3e0) = var_3f0_1
                            zmm1_1 = *(rsi_4 + rbx_8 + 0xc)
                            zmm2_2 = *(rsi_4 + rbx_8 + 0x10)
                            zmm1_1[0] = zmm1_1[0] - zmm7_1[0]
                            zmm3_3 = *(rsi_4 + rbx_8 + 0x14)
                            zmm2_2[0] = zmm2_2[0] - zmm6_1[0]
                            int32_t rax_135 = *(rsi_4 + rbx_8 + 0x2c)
                            zmm3_3[0] = zmm3_3[0] - zmm15_1[0]
                            int32_t var_af0 = rax_135
                            int32_t var_3c4_1 = 0x3f800000
                            zmm1_1[0] = zmm1_1[0] + zmm14_1[0]
                            zmm2_2[0] = zmm2_2[0] f+ zmm13_1[0]
                            zmm3_3[0] = zmm3_3[0] + zmm12_1[0]
                            var_be8[0] = zmm1_1[0]
                            float temp0_142[0x4] = _mm_shuffle_ps(var_be8, var_be8, 0xe1)
                            temp0_142[0] = zmm2_2[0]
                            float temp0_143[0x4] = _mm_shuffle_ps(temp0_142, temp0_142, 0xc6)
                            temp0_143[0] = zmm3_3[0]
                            float temp0_144[0x4] = _mm_shuffle_ps(temp0_143, temp0_143, 0xc9)
                            var_be8 = temp0_144
                            float var_3c0_1[0x4] = *(rsi_4 + rbx_8 + 0x1c)
                            void var_3b0
                            sub_14208ca90(&var_af0, &var_3b0)
                            rsi_4 = &(*rsi_4)[0xe]
                            zmm8_1 = 0x3f800000
                            zmm9_1 = var_ca8_1
                            zmm7_1 = 0x7fffffff
                            *(var_cc0_1 + 0x3f0) = temp0_144
                            *(var_cc0_1 + 0x400) = var_3c8_1.o
                            *(var_cc0_1 + 0x410) = var_3c0_1
                            j = j_1
                            j_1 -= 1
                            var_cc0_1 += 0x480
                        while (j != 1)
                        zmm6_1 = arg8
                        r14_4 = arg2 + 0x30
                        j_2 = zx.q(j_3)
                    
                    int64_t* rcx_82 = data_143f0f180
                    (*(*rcx_82 + 0x138))(rcx_82, &data_143f02b98, var_bb8)
                    int64_t* rsi_5 = var_bb8
                    void*** rcx_85 = (*r14_4 + 7) & 0xfffffffffffffff8
                    void* rax_139 = &rcx_85[5]
                    
                    if (rax_139 u> *(r14_4 + 8))
                        zmm6_1 = sub_140b0e3d0(r14_4, 0x30)
                        rcx_85 = (*r14_4 + 7) & 0xfffffffffffffff8
                        rax_139 = &rcx_85[5]
                    
                    *r14_4 = rax_139
                    int64_t* rax_140 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_140 = rcx_85
                    *(arg2 + 8) = &rcx_85[1]
                    rcx_85[1] = 0
                    *rcx_85 = &data_142d56618
                    rcx_85[2].d = 0
                    rcx_85[3] = rsi_5
                    rcx_85[4].d = 0
                    void*** rcx_91 = (*r14_4 + 7) & 0xfffffffffffffff8
                    void* rax_142 = &rcx_91[4]
                    
                    if (rax_142 u> *(r14_4 + 8))
                        zmm6_1 = sub_140b0e3d0(r14_4, 0x28)
                        rcx_91 = (*r14_4 + 7) & 0xfffffffffffffff8
                        rax_142 = &rcx_91[4]
                    
                    *r14_4 = rax_142
                    void**** rax_143 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_143 = rcx_91
                    *(arg2 + 8) = &rcx_91[1]
                    rcx_91[1] = 0
                    *rcx_91 = &data_142d54988
                    rcx_91[2].d = 0
                    *(rcx_91 + 0x14) = (j_2 << 3).d
                    rcx_91[3].d = 1
                    int64_t* rbx_10 = var_bb8
                    
                    if (rbx_10 != 0)
                        rbx_10[1].d -= 1
                        
                        if (rbx_10[1].d == 1)
                            char rax_146
                            
                            if (rbx_10[2].b == 0 && data_143f0f1d0 == 0)
                                rax_146 = sub_1405949a0()
                            
                            if (rbx_10[2].b != 0 || (data_143f0f1d0 == 0 && rax_146 != 0))
                                (**rbx_10)(rbx_10, 1)
                            else
                                bool z_2
                                
                                if (0 == *(rbx_10 + 0xc))
                                    *(rbx_10 + 0xc) = 1
                                    z_2 = true
                                else
                                    *(rbx_10 + 0xc)
                                    z_2 = false
                                
                                if (z_2)
                                    zmm6_1 = sub_1405dcc10(&data_143f02390, rbx_10)
                    
                    int64_t* rbx_11 = var_c28
                    
                    if (rbx_11 != 0)
                        rbx_11[1].d -= 1
                        
                        if (rbx_11[1].d == 1)
                            char rax_150
                            
                            if (rbx_11[2].b == 0 && data_143f0f1d0 == 0)
                                rax_150 = sub_1405949a0()
                            
                            if (rbx_11[2].b != 0 || (data_143f0f1d0 == 0 && rax_150 != 0))
                                (**rbx_11)(rbx_11, 1)
                            else
                                bool z_3
                                
                                if (0 == *(rbx_11 + 0xc))
                                    *(rbx_11 + 0xc) = 1
                                    z_3 = true
                                else
                                    *(rbx_11 + 0xc)
                                    z_3 = false
                                
                                if (z_3)
                                    zmm6_1 = sub_1405dcc10(&data_143f02390, rbx_11)
                    
                    result = zx.q(r15[9].d)
                    i = i_4
                while (i s< result.d)
                
                rbx_2 = arg7
            
            uint64_t var_2d0_3 = data_14395da18
        
        if (r15[5].d s> 0)
            zmm1_1 = data_143dbb1e0
            char var_150_1 = 0
            int32_t var_168_1 = 1
            int64_t* rcx_98 = data_143f0f180
            int32_t var_154_1 = (1 << (data_1439c7a34).b) - 1
            uint64_t rax_155 = zx.q(r15[7].d)
            uint64_t i_14 = 0
            int128_t var_178 = zx.o(0)
            float var_164_1[0x4] = zmm1_1
            int64_t var_148_1 = 0
            int32_t var_140_1 = 0
            int64_t var_c50
            (*(*rcx_98 + 0x498))(zx.o(0), &var_c50, &data_143f02b98, zx.q((rax_155 * 3).d << 4), 4, 
                &var_178, var_d08, var_d00, var_cf8, var_cf0, var_ce8, var_ce0, var_cd8)
            int64_t* rcx_99 = data_143f0f180
            int128_t* var_d10_7
            var_d10_7.d = 1
            memcpy(
                (*(*rcx_99 + 0x130))(rcx_99, &data_143f02b98, var_c50, 0, r15[7].d * 0x30, 
                    var_d10_7), 
                r15[6], r15[7].d * 0x30)
            int64_t* rcx_102 = data_143f0f180
            (*(*rcx_102 + 0x138))(rcx_102, &data_143f02b98, var_c50)
            int64_t rsi_6 = var_c50
            void*** rcx_105 = (*r14_4 + 7) & 0xfffffffffffffff8
            void* rax_161 = &rcx_105[5]
            
            if (rax_161 u> *(r14_4 + 8))
                zmm6_1 = sub_140b0e3d0(r14_4, 0x30)
                rcx_105 = (*r14_4 + 7) & 0xfffffffffffffff8
                rax_161 = &rcx_105[5]
            
            *r14_4 = rax_161
            *(arg2 + 0x14) += 1
            **(arg2 + 8) = rcx_105
            *(arg2 + 8) = &rcx_105[1]
            rcx_105[1] = 0
            *rcx_105 = &data_142d56618
            rcx_105[2].d = 0
            rcx_105[3] = rsi_6
            rcx_105[4].d = 0
            int64_t rax_164
            int64_t rdx_46
            rdx_46:rax_164 = mulu.dp.q(-0x5555555555555555, sx.q(data_1439c7a2c))
            uint32_t rcx_110 = 0x10000
            int16_t var_260 = 1
            int64_t var_25c_1 = 0
            int16_t var_254_1 = 1
            uint32_t rax_166 = (rdx_46 u/ 0x60 * 3).d
            
            if (rax_166 s<= 0x10000)
                rcx_110 = rax_166
            
            int32_t i_13 = r15[5].d
            int32_t i_15 = i_13
            int32_t rdx_51 = rcx_110 s/ 3
            int32_t var_cac_2 = rdx_51
            
            if (i_13 s> 0)
                int32_t i_10
                
                do
                    int32_t i_12 = rdx_51 + i_14.d
                    i_10 = i_13
                    int32_t i_6 = (i_14 + 1).d
                    int64_t rcx_111 = r15[4]
                    
                    if (i_12 s<= i_13)
                        i_10 = i_12
                    
                    int32_t zmm0_3 = *(rcx_111 + (sx.q(i_14.d) << 2))
                    
                    if (i_6 s< i_10)
                        int64_t i_1 = sx.q(i_6)
                        int32_t* rcx_112 = rcx_111 + (i_1 << 2)
                        
                        do
                            if (zmm0_3 f!= *rcx_112)
                                i_10 = i_6
                                break
                            
                            i_6 += 1
                            i_1 += 1
                            rcx_112 = &rcx_112[1]
                        while (i_1 s< sx.q(i_10))
                    
                    int64_t* rcx_113 = data_143f0f180
                    var_25c_1.d = zmm0_3
                    (*(*rcx_113 + 0x30))(rcx_113, &var_c20, &var_260)
                    int64_t* var_2d0_4 = var_c20
                    var_cd8 = var_c40
                    var_ce0 = nullptr
                    var_ce8 = zmm6_1[0]
                    var_cf0 = rbx_2
                    var_cf8 = data_143f10dc8
                    var_d00 = nullptr
                    var_d08 = arg5
                    zmm6_1 = sub_141ea9790(r15.b, arg2, &var_308, arg4, 0, r12, var_d08, var_d00, 
                        var_cf8, var_cf0, var_ce8, var_ce0, var_cd8)
                    void*** rcx_117 = (*r14_4 + 7) & 0xfffffffffffffff8
                    void* rax_175 = &rcx_117[3]
                    
                    if (rax_175 u> *(r14_4 + 8))
                        zmm6_1 = sub_140b0e3d0(r14_4, 0x20)
                        rcx_117 = (*r14_4 + 7) & 0xfffffffffffffff8
                        rax_175 = &rcx_117[3]
                    
                    *r14_4 = rax_175
                    int64_t* rax_176 = *(arg2 + 8)
                    int32_t rbx_13 = i_10 - i_14.d
                    *(arg2 + 0x14) += 1
                    *rax_176 = rcx_117
                    *(arg2 + 8) = &rcx_117[1]
                    rcx_117[1] = 0
                    *rcx_117 = &data_142f18bb8
                    rcx_117[2].d = var_c98
                    void*** rcx_123 = (*r14_4 + 7) & 0xfffffffffffffff8
                    void* rax_179 = &rcx_123[4]
                    
                    if (rax_179 u> *(r14_4 + 8))
                        zmm6_1 = sub_140b0e3d0(r14_4, 0x28)
                        rcx_123 = (*r14_4 + 7) & 0xfffffffffffffff8
                        rax_179 = &rcx_123[4]
                    
                    *r14_4 = rax_179
                    void**** rax_180 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_180 = rcx_123
                    *(arg2 + 8) = &rcx_123[1]
                    rcx_123[1] = 0
                    *rcx_123 = &data_142d54988
                    rcx_123[2].d = (i_14 * 3).d
                    i_14 = zx.q(i_10)
                    rcx_123[3].d = 1
                    *(rcx_123 + 0x14) = rbx_13
                    int64_t* rbx_14 = var_c20
                    
                    if (rbx_14 != 0)
                        rbx_14[1].d -= 1
                        
                        if (rbx_14[1].d == 1)
                            char rax_183
                            
                            if (rbx_14[2].b == 0 && data_143f0f1d0 == 0)
                                rax_183 = sub_1405949a0()
                            
                            if (rbx_14[2].b != 0 || (data_143f0f1d0 == 0 && rax_183 != 0))
                                (**rbx_14)(rbx_14, 1)
                            else
                                bool z_4
                                
                                if (0 == *(rbx_14 + 0xc))
                                    *(rbx_14 + 0xc) = 1
                                    z_4 = true
                                else
                                    *(rbx_14 + 0xc)
                                    z_4 = false
                                
                                if (z_4)
                                    zmm6_1 = sub_1405dcc10(&data_143f02390, rbx_14)
                    
                    i_13 = i_15
                    rbx_2 = arg7
                    rdx_51 = var_cac_2
                while (i_10 s< i_13)
            
            sub_1405d16e0(&var_c50, nullptr)
            int64_t var_2d0_5 = data_14395da18
            sub_1405d1550(&var_c50)
    
    int32_t rsi_7 = arg9
    
    if (r15[0xb].d s<= 0)
        zmm6_1 = arg8
    else
        int32_t rdx_55 = r15[0xb].d
        int64_t rcx_130 = r15[0xa]
        int32_t var_ae8 = rsi_7
        char var_c88
        sub_141e8edd0(rcx_130, rdx_55, var_c88, &var_ae8)
        result = sx.q(r15[0xb].d)
        uint64_t r13_4 = 0
        
        if (result.d s<= 0)
            zmm6_1 = arg8
        else
            int64_t rdx_56 = 0
            uint64_t result_1 = result
            char* rcx_132 = r15[0xa] + 0x44
            
            do
                char rax_187 = *rcx_132
                
                if ((rax_187 & 0xfa) != 0 || rax_187 == 4)
                    result = 2
                
                if (((rax_187 & 0xfa) == 0 && rax_187 != 4) || rax_187 == 6)
                    result = 1
                
                if ((rsi_7 & result.d) == 0)
                    break
                
                r13_4 = zx.q(r13_4.d + 1)
                rdx_56 += 1
                rcx_132 = &rcx_132[0x48]
            while (rdx_56 s< result_1)
            
            r12 = var_c58
            
            if (r13_4.d s<= 0)
                zmm6_1 = arg8
            else
                zmm1_1 = data_143dbb1e0
                int128_t var_138
                int128_t* var_d10_9 = &var_138
                char var_110_1 = 0
                int32_t var_128_1 = 1
                int64_t* rcx_134 = data_143f0f180
                int64_t var_108_1 = 0
                int32_t var_114_1 = (1 << (data_1439c7a34).b) - 1
                var_138 = zx.o(0)
                float var_124_1[0x4] = zmm1_1
                int32_t var_100_1 = 0
                int32_t rbx_17 = ((r13_4 << 3).d + r13_4.d) << 5
                int64_t var_c48
                (*(*rcx_134 + 0x498))(zx.o(0), &var_c48, &data_143f02b98, zx.q(rbx_17), 4, 
                    var_d10_9, var_d08, var_d00, var_cf8, var_cf0, var_ce8, var_ce0, var_cd8)
                int64_t* rcx_135 = data_143f0f180
                var_d10_9.d = 1
                void* rax_192 =
                    (*(*rcx_135 + 0x130))(rcx_135, &data_143f02b98, var_c48, 0, rbx_17, var_d10_9)
                int64_t i_9 = sx.q(r13_4.d)
                int64_t i_11 = i_9
                
                if (r13_4.d s> 0)
                    int32_t var_bdc_2 = 0x3f800000
                    void* r14_6 = rax_192 + 0x60
                    int32_t var_bcc_2 = 0x3f800000
                    float* rsi_8 = nullptr
                    int32_t var_bbc_2 = 0x3f800000
                    int64_t i_7 = i_9
                    int32_t var_c0c_2 = 0x3f800000
                    int32_t var_bfc_2 = 0x3f800000
                    int32_t var_bec_2 = 0x3f800000
                    int64_t i_2
                    
                    do
                        int64_t rbx_18 = r15[0xa]
                        zmm0_1 = data_1439c7a1c
                        zmm15_1 = *(rsi_8 + rbx_18 + 0x10) ^ data_142d3f780
                        zmm14_1 = *(rsi_8 + rbx_18 + 0xc)
                        zmm13_1 = zmm15_1
                        int64_t* rcx_136 = *(rsi_8 + rbx_18 + 0x18)
                        zmm13_1[0] = zmm13_1[0] f* var_c68
                        zmm15_1[0] = zmm15_1[0] * var_c64_1
                        int64_t rax_193 = *rcx_136
                        zmm15_1[0] = zmm15_1[0] * var_c60_1
                        zmm14_1[0] = zmm14_1[0] * var_c78
                        zmm14_1[0] = zmm14_1[0] * var_c74_1
                        zmm14_1[0] = zmm14_1[0] * var_c70_1
                        zmm13_1[0] = zmm13_1[0] f* zmm0_1[0]
                        zmm15_1[0] = zmm15_1[0] * zmm0_1[0]
                        zmm15_1[0] = zmm15_1[0] * zmm0_1[0]
                        int32_t rax_194 = (*(rax_193 + 0x40))(rcx_136)
                        zmm6_1 = *(rsi_8 + rbx_18 + 0x34)
                        zmm0_1 = zx.o(0)
                        int64_t* rcx_137 = *(rsi_8 + rbx_18 + 0x18)
                        zmm6_1[0] = zmm6_1[0] f+ *(rsi_8 + rbx_18 + 0x38)
                        zmm0_1[0] = float.s(zx.q(rax_194))
                        int64_t rax_196 = *rcx_137
                        zmm6_1[0] = zmm6_1[0] / zmm0_1[0]
                        int32_t rax_197 = (*(rax_196 + 0x40))(rcx_137)
                        int64_t* rcx_138 = *(rsi_8 + rbx_18 + 0x18)
                        zmm0_1 = zx.o(0)
                        zmm0_1[0] = float.s(zx.q(rax_197))
                        int64_t rax_199 = *rcx_138
                        zmm6_1[0] = zmm6_1[0] / zmm0_1[0]
                        int32_t rax_200 = (*(rax_199 + 0x48))(rcx_138)
                        zmm8_1 = *(rsi_8 + rbx_18 + 0x3c)
                        zmm0_1 = zx.o(0)
                        int64_t* rcx_139 = *(rsi_8 + rbx_18 + 0x18)
                        zmm8_1[0] = zmm8_1[0] f+ *(rsi_8 + rbx_18 + 0x40)
                        zmm0_1[0] = float.s(zx.q(rax_200))
                        int64_t rax_202 = *rcx_139
                        zmm8_1[0] = zmm8_1[0] / zmm0_1[0]
                        int32_t rax_203 = (*(rax_202 + 0x48))(rcx_139)
                        zmm0_1 = zx.o(0)
                        float var_398_1 = zmm6_1[0]
                        float var_394_1 = zmm8_1[0]
                        float zmm3_4 = zmm14_1[0] f+ *(rsi_8 + rbx_18)
                        float zmm2_3 = zmm14_1[0] f+ *(rsi_8 + rbx_18 + 4)
                        zmm0_1[0] = float.s(zx.q(rax_203))
                        int32_t var_ae0 = *(rsi_8 + rbx_18 + 0x30)
                        zmm3_4 = zmm3_4 f- zmm13_1[0]
                        zmm14_1[0] = zmm14_1[0] f+ *(rsi_8 + rbx_18 + 8)
                        zmm8_1[0] = zmm8_1[0] / zmm0_1[0]
                        zmm2_3 = zmm2_3 - zmm15_1[0]
                        var_be8[0] = zmm3_4
                        zmm14_1[0] = zmm14_1[0] - zmm15_1[0]
                        float temp0_148[0x4] = _mm_shuffle_ps(var_be8, var_be8, 0xe1)
                        temp0_148[0] = zmm2_3
                        float temp0_149[0x4] = _mm_shuffle_ps(temp0_148, temp0_148, 0xc6)
                        temp0_149[0] = zmm14_1[0]
                        float temp0_150[0x4] = _mm_shuffle_ps(temp0_149, temp0_149, 0xc9)
                        var_be8 = temp0_150
                        float var_390_1[0x4] = *(rsi_8 + rbx_18 + 0x20)
                        void var_380
                        sub_14208ca90(&var_ae0, &var_380)
                        *(r14_6 - 0x60) = temp0_150
                        *(r14_6 - 0x50) = var_398_1.o
                        zmm3_4 = zmm14_1[0]
                        *(r14_6 - 0x40) = var_390_1
                        zmm2_3 = zmm14_1[0]
                        zmm3_4 = zmm3_4 f+ *(rsi_8 + rbx_18)
                        zmm14_1[0] = zmm14_1[0] f+ *(rsi_8 + rbx_18 + 4)
                        zmm2_3 = zmm2_3 f+ *(rsi_8 + rbx_18 + 8)
                        int32_t rax_206 = *(rsi_8 + rbx_18 + 0x30)
                        float var_908_1 = zmm6_1[0]
                        zmm3_4 = zmm3_4 f+ zmm13_1[0]
                        float var_904_1 = zmm8_1[0]
                        zmm14_1[0] = zmm14_1[0] + zmm15_1[0]
                        int32_t var_ad8 = rax_206
                        zmm2_3 = zmm2_3 + zmm15_1[0]
                        var_bd8[0] = zmm3_4
                        float temp0_151[0x4] = _mm_shuffle_ps(var_bd8, var_bd8, 0xe1)
                        temp0_151[0] = zmm14_1[0]
                        float temp0_152[0x4] = _mm_shuffle_ps(temp0_151, temp0_151, 0xc6)
                        temp0_152[0] = zmm2_3
                        float temp0_153[0x4] = _mm_shuffle_ps(temp0_152, temp0_152, 0xc9)
                        var_bd8 = temp0_153
                        float var_900_1[0x4] = *(rsi_8 + rbx_18 + 0x20)
                        void var_8f0
                        sub_14208ca90(&var_ad8, &var_8f0)
                        *(r14_6 - 0x30) = temp0_153
                        *(r14_6 - 0x20) = var_908_1.o
                        *(r14_6 - 0x10) = var_900_1
                        zmm1_1 = *(rsi_8 + rbx_18 + 4)
                        zmm3_4 = *(rsi_8 + rbx_18) - zmm14_1[0]
                        zmm2_3 = *(rsi_8 + rbx_18 + 8)
                        zmm1_1[0] = zmm1_1[0] - zmm14_1[0]
                        zmm2_3 = zmm2_3 - zmm14_1[0]
                        float var_8d8_1 = zmm6_1[0]
                        float var_8d4_1 = zmm8_1[0]
                        zmm3_4 = zmm3_4 f- zmm13_1[0]
                        int32_t var_ad0 = *(rsi_8 + rbx_18 + 0x30)
                        zmm1_1[0] = zmm1_1[0] - zmm15_1[0]
                        zmm2_3 = zmm2_3 - zmm15_1[0]
                        var_bc8[0] = zmm3_4
                        float temp0_154[0x4] = _mm_shuffle_ps(var_bc8, var_bc8, 0xe1)
                        temp0_154[0] = zmm1_1[0]
                        float temp0_155[0x4] = _mm_shuffle_ps(temp0_154, temp0_154, 0xc6)
                        temp0_155[0] = zmm2_3
                        float temp0_156[0x4] = _mm_shuffle_ps(temp0_155, temp0_155, 0xc9)
                        var_bc8 = temp0_156
                        float var_8d0_1[0x4] = *(rsi_8 + rbx_18 + 0x20)
                        void var_8c0
                        sub_14208ca90(&var_ad0, &var_8c0)
                        zmm3_4 = zmm13_1[0]
                        zmm2_3 = zmm14_1[0]
                        *r14_6 = temp0_156
                        float zmm4_3 = zmm15_1[0]
                        *(r14_6 + 0x10) = var_8d8_1.o
                        *(r14_6 + 0x20) = var_8d0_1
                        zmm14_1[0] = zmm14_1[0] f+ *(rsi_8 + rbx_18)
                        zmm14_1[0] = zmm14_1[0] f+ *(rsi_8 + rbx_18 + 4)
                        zmm3_4 = zmm3_4 + zmm14_1[0]
                        zmm4_3 = zmm4_3 + zmm14_1[0]
                        zmm15_1[0] = zmm15_1[0] + zmm2_3 f+ *(rsi_8 + rbx_18 + 8)
                        int32_t rax_208 = *(rsi_8 + rbx_18 + 0x30)
                        var_c18[0] = zmm3_4
                        float var_8a8_1 = zmm6_1[0]
                        float temp0_157[0x4] = _mm_shuffle_ps(var_c18, var_c18, 0xe1)
                        temp0_157[0] = zmm4_3
                        float var_8a4_1 = zmm8_1[0]
                        float temp0_158[0x4] = _mm_shuffle_ps(temp0_157, temp0_157, 0xc6)
                        temp0_158[0] = zmm15_1[0]
                        int32_t var_ac8 = rax_208
                        float temp0_159[0x4] = _mm_shuffle_ps(temp0_158, temp0_158, 0xc9)
                        var_c18 = temp0_159
                        float var_8a0_1[0x4] = *(rsi_8 + rbx_18 + 0x20)
                        void var_890
                        sub_14208ca90(&var_ac8, &var_890)
                        *(r14_6 + 0x30) = temp0_159
                        *(r14_6 + 0x40) = var_8a8_1.o
                        *(r14_6 + 0x50) = var_8a0_1
                        zmm1_1 = *(rsi_8 + rbx_18)
                        zmm2_3 = *(rsi_8 + rbx_18 + 4)
                        zmm1_1[0] = zmm1_1[0] - zmm14_1[0]
                        zmm2_3 = zmm2_3 - zmm14_1[0]
                        int32_t rax_209 = *(rsi_8 + rbx_18 + 0x30)
                        zmm3_4 = *(rsi_8 + rbx_18 + 8) - zmm14_1[0]
                        float var_878_1 = zmm6_1[0]
                        float var_874_1 = zmm8_1[0]
                        zmm1_1[0] = zmm1_1[0] f- zmm13_1[0]
                        int32_t var_ac0 = rax_209
                        zmm2_3 = zmm2_3 - zmm15_1[0]
                        zmm3_4 = zmm3_4 - zmm15_1[0]
                        var_c08[0] = zmm1_1[0]
                        float temp0_160[0x4] = _mm_shuffle_ps(var_c08, var_c08, 0xe1)
                        temp0_160[0] = zmm2_3
                        float temp0_161[0x4] = _mm_shuffle_ps(temp0_160, temp0_160, 0xc6)
                        temp0_161[0] = zmm3_4
                        float temp0_162[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xc9)
                        var_c08 = temp0_162
                        float var_870_1[0x4] = *(rsi_8 + rbx_18 + 0x20)
                        void var_860
                        sub_14208ca90(&var_ac0, &var_860)
                        *(r14_6 + 0x60) = temp0_162
                        *(r14_6 + 0x70) = var_878_1.o
                        *(r14_6 + 0x80) = var_870_1
                        zmm0_1 = *(rsi_8 + rbx_18 + 4)
                        zmm1_1 = *(rsi_8 + rbx_18)
                        zmm0_1[0] = zmm0_1[0] - zmm14_1[0]
                        zmm2_3 = *(rsi_8 + rbx_18 + 8)
                        zmm1_1[0] = zmm1_1[0] - zmm14_1[0]
                        int32_t rax_210 = *(rsi_8 + rbx_18 + 0x30)
                        zmm2_3 = zmm2_3 - zmm14_1[0]
                        float var_848_1 = zmm6_1[0]
                        float var_844_1 = zmm8_1[0]
                        zmm15_1[0] = zmm15_1[0] + zmm0_1[0]
                        int32_t var_ab8 = rax_210
                        zmm13_1[0] = zmm13_1[0] f+ zmm1_1[0]
                        zmm15_1[0] = zmm15_1[0] + zmm2_3
                        var_bf8[0] = zmm13_1[0]
                        float temp0_163[0x4] = _mm_shuffle_ps(var_bf8, var_bf8, 0xe1)
                        temp0_163[0] = zmm15_1[0]
                        float temp0_164[0x4] = _mm_shuffle_ps(temp0_163, temp0_163, 0xc6)
                        temp0_164[0] = zmm15_1[0]
                        float temp0_165[0x4] = _mm_shuffle_ps(temp0_164, temp0_164, 0xc9)
                        var_bf8 = temp0_165
                        float var_840_1[0x4] = *(rsi_8 + rbx_18 + 0x20)
                        void var_830
                        sub_14208ca90(&var_ab8, &var_830)
                        rsi_8 = &rsi_8[0x12]
                        *(r14_6 + 0x90) = temp0_165
                        *(r14_6 + 0xa0) = var_848_1.o
                        *(r14_6 + 0xb0) = var_840_1
                        r14_6 += 0x120
                        i_2 = i_7
                        i_7 -= 1
                    while (i_2 != 1)
                    r12 = var_c58
                    i_9 = sx.q(r13_4.d)
                
                int64_t* rcx_146 = data_143f0f180
                (*(*rcx_146 + 0x138))(rcx_146, &data_143f02b98, var_c48)
                void* rax_212 = r15[0xa]
                zmm6_1 = arg8
                int32_t r10_6 = 0
                int32_t var_c9c_1 = 0
                int64_t* rdx_64 = *(rax_212 + 0x18)
                uint32_t r8_24 = zx.d(*(rax_212 + 0x44))
                int32_t rax_213 = (r13_4 + 1).d
                int64_t* var_c90_1 = rdx_64
                int32_t r13_5 = 1
                uint32_t var_cac_3 = r8_24
                
                if (rax_213 s> 1)
                    int32_t r9_13 = rax_213
                    int64_t rax_214 = 1
                    int32_t rcx_147 = 6
                    int64_t var_cc0_2 = 1
                    int32_t var_cc8_3 = 6
                    int64_t rsi_9 = 0x48
                    int32_t var_cb0_1 = 0
                    
                    do
                        int64_t rax_215
                        
                        if (rax_214 != i_9)
                            rax_215 = r15[0xa]
                        
                        int64_t rax_232
                        
                        if (rax_214 == i_9 || rdx_64 != *(rax_215 + rsi_9 + 0x18)
                                || r8_24 != zx.d(*(rax_215 + rsi_9 + 0x44)))
                            var_cd8 = var_c40
                            var_ce0 = nullptr
                            var_ce8 = zmm6_1[0]
                            var_cf0 = arg7
                            var_cf8 = rdx_64
                            var_d00 = nullptr
                            var_d08 = arg5
                            zmm6_1 = sub_141ea9790(r15.b, arg2, &var_308, arg4, r8_24, r12, 
                                var_d08, var_d00, var_cf8, var_cf0, var_ce8, var_ce0, var_cd8)
                            void*** rcx_151 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_220 = &rcx_151[3]
                            
                            if (rax_220 u> *(arg2 + 0x38))
                                zmm6_1 = sub_140b0e3d0(arg2 + 0x30, 0x20)
                                rcx_151 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_220 = &rcx_151[3]
                            
                            *(arg2 + 0x30) = rax_220
                            int64_t* rax_221 = *(arg2 + 8)
                            *(arg2 + 0x14) += 1
                            *rax_221 = rcx_151
                            *(arg2 + 8) = &rcx_151[1]
                            rcx_151[1] = 0
                            *rcx_151 = &data_142f18bb8
                            rcx_151[2].d = var_c98
                            int64_t rax_224 = var_c48
                            void*** rcx_157 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_225 = &rcx_157[5]
                            
                            if (rax_225 u> *(arg2 + 0x38))
                                zmm6_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                                rcx_157 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_225 = &rcx_157[5]
                            
                            *(arg2 + 0x30) = rax_225
                            int64_t* rax_226 = *(arg2 + 8)
                            *(arg2 + 0x14) += 1
                            *rax_226 = rcx_157
                            *(arg2 + 8) = &rcx_157[1]
                            rcx_157[1] = 0
                            *rcx_157 = &data_142d56618
                            rcx_157[3] = rax_224
                            rcx_157[2].d = 0
                            rcx_157[4].d = 0
                            void*** rcx_163 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_229 = &rcx_163[4]
                            
                            if (rax_229 u> *(arg2 + 0x38))
                                zmm6_1 = sub_140b0e3d0(arg2 + 0x30, 0x28)
                                rcx_163 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_229 = &rcx_163[4]
                            
                            *(arg2 + 0x30) = rax_229
                            int64_t* rax_230 = *(arg2 + 8)
                            *(arg2 + 0x14) += 1
                            i_9 = i_11
                            *rax_230 = rcx_163
                            *(arg2 + 8) = &rcx_163[1]
                            rcx_163[1] = 0
                            *rcx_163 = &data_142d54988
                            rcx_163[3].d = 1
                            rax_232 = var_cc0_2
                            rcx_163[2].d = var_cb0_1
                            r9_13 = rax_213
                            *(rcx_163 + 0x14) = (r13_5 - r10_6) * 2
                            rcx_147 = var_cc8_3
                            
                            if (rax_232 s>= i_9)
                                rdx_64 = var_c90_1
                                r8_24 = var_cac_3
                                r10_6 = var_c9c_1
                            else
                                int64_t rax_233 = r15[0xa]
                                r10_6 = r13_5
                                var_c9c_1 = r13_5
                                var_cb0_1 = rcx_147
                                rdx_64 = *(rax_233 + rsi_9 + 0x18)
                                r8_24 = zx.d(*(rax_233 + rsi_9 + 0x44))
                                var_c90_1 = rdx_64
                                var_cac_3 = r8_24
                                rax_232 = var_cc0_2
                        else
                            rax_232 = var_cc0_2
                        
                        rcx_147 += 6
                        rax_214 = rax_232 + 1
                        r13_5 += 1
                        var_cc8_3 = rcx_147
                        rsi_9 += 0x48
                        var_cc0_2 = rax_214
                    while (r13_5 s< r9_13)
                
                sub_1405d16e0(&var_c48, nullptr)
                result, zmm6_1 = sub_1405d1550(&var_c48)
                rsi_7 = arg9
    
    if (r15[0x26].d s> 0)
        zmm1_1 = data_143dbb1e0
        char var_210_1 = 0
        int32_t var_228_1 = 1
        int64_t* rcx_170 = data_143f0f180
        int32_t var_214_1 = (1 << (data_1439c7a34).b) - 1
        uint64_t rax_236 = zx.q(r15[0x42].d)
        int128_t var_238 = zx.o(0)
        float var_224_1[0x4] = zmm1_1
        int64_t var_208_1 = 0
        int32_t var_200_1 = 0
        int64_t var_c30
        (*(*rcx_170 + 0x498))(zx.o(0), &var_c30, &data_143f02b98, zx.q((rax_236 * 3).d << 4), 4, 
            &var_238, var_d08, var_d00, var_cf8, var_cf0, var_ce8, var_ce0, var_cd8)
        int64_t* rcx_171 = data_143f0f180
        int128_t* var_d10_11
        var_d10_11.d = 1
        int64_t rax_240 = (*(*rcx_171 + 0x130))(rcx_171, &data_143f02b98, var_c30, 0, 
            r15[0x42].d * 0x30, var_d10_11)
        void* rdx_67 = &r15[0x28]
        void* r9_18 = *(rdx_67 + 0xc0)
        
        if (r9_18 != 0)
            rdx_67 = r9_18
        
        memcpy(rax_240, rdx_67, r15[0x42].d * 0x30)
        int64_t* rcx_174 = data_143f0f180
        (*(*rcx_174 + 0x138))(rcx_174, &data_143f02b98, var_c30)
        int32_t i_5 = 0
        
        if (r15[0x26].d s> 0)
            int64_t rdx_68 = 0
            void* rcx_175 = &r15[0xd]
            int64_t var_c90_2 = 0
            int32_t i_3
            
            do
                void* rax_242 = *(rcx_175 + 0xc0)
                void* rbx_19 = rcx_175
                
                if (rax_242 != 0)
                    rbx_19 = rax_242
                
                void* rbx_20 = rbx_19 + rdx_68
                uint32_t rdx_69 = *(rbx_20 + 0x38)
                int32_t rax_244
                
                if (rdx_69 u> 1)
                    rax_244 = 2
                
                if (rdx_69 u<= 1 || rdx_69 - 5 u<= 1)
                    rax_244 = 1
                
                if ((rsi_7 & rax_244) != 0)
                    sub_141ea9790(r15.b, arg2, &var_308, arg4, rdx_69, r12, arg5, *(rbx_20 + 0x30), 
                        *(rbx_20 + 0x28), arg7, zmm6_1[0], rbx_20 + 0x3c, var_c40)
                    void*** rcx_180 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_250 = &rcx_180[3]
                    
                    if (rax_250 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rcx_180 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_250 = &rcx_180[3]
                    
                    *(arg2 + 0x30) = rax_250
                    *(arg2 + 0x14) += 1
                    char var_d08_2
                    var_d08_2.q = &var_238
                    void* var_d10_12
                    var_d10_12.d = 4
                    **(arg2 + 8) = rcx_180
                    *(arg2 + 8) = &rcx_180[1]
                    rcx_180[1] = 0
                    *rcx_180 = &data_142f18bb8
                    rcx_180[2].d = var_c98
                    int64_t* rcx_184 = data_143f0f180
                    int64_t* var_c38
                    (*(*rcx_184 + 0x4d8))(rcx_184, &var_c38, &data_143f02b98, 2, 
                        *(rbx_20 + 0x20) * 2, var_d10_12, var_d08_2)
                    int64_t* rcx_185 = data_143f0f180
                    var_d10_12.d = 1
                    int64_t rax_258 = (*(*rcx_185 + 0x110))(rcx_185, &data_143f02b98, var_c38, 0, 
                        *(rbx_20 + 0x20) * 2, var_d10_12)
                    void* rcx_186 = *(rbx_20 + 0x18)
                    void* rdx_72 = rbx_20 + 8
                    
                    if (rcx_186 != 0)
                        rdx_72 = rcx_186
                    
                    memcpy(rax_258, rdx_72, *(rbx_20 + 0x20) * 2)
                    int64_t* rcx_188 = data_143f0f180
                    int64_t r9_20 = (*(*rcx_188 + 0x118))(rcx_188, &data_143f02b98, var_c38)
                    uint64_t rax_260 = zx.q(*rbx_20)
                    int64_t r13_6 = var_c30
                    void*** rcx_191 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_261 = &rcx_191[5]
                    
                    if (rax_261 u> *(arg2 + 0x38))
                        r9_20 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                        rcx_191 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_261 = &rcx_191[5]
                    
                    *(arg2 + 0x30) = rax_261
                    *(arg2 + 0x14) += 1
                    **(arg2 + 8) = rcx_191
                    *(arg2 + 8) = &rcx_191[1]
                    rcx_191[3] = r13_6
                    rcx_191[1] = 0
                    *rcx_191 = &data_142d56618
                    rcx_191[4].d = (rax_260 * 3).d << 4
                    rcx_191[2].d = 0
                    int32_t temp9_1
                    int32_t temp10_1
                    temp9_1:temp10_1 = muls.dp.d(0x55555556, *(rbx_20 + 0x20))
                    int64_t* rcx_195 = var_c38
                    int32_t r14_14 = *(rbx_20 + 4) - *rbx_20 + 1
                    
                    if (rcx_195 == 0)
                        sub_140af98a0("Unknown", 0xbc8, 
                            Tried to call DrawIndexedPrimitive with null IndexBuffer!", r9_20)
                        sub_140afbb40()
                    
                    void*** rcx_198 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_265 = &rcx_198[6]
                    
                    if (rax_265 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x38)
                        rcx_198 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_265 = &rcx_198[6]
                    
                    *(arg2 + 0x30) = rax_265
                    int64_t* rax_266 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_266 = rcx_198
                    *(arg2 + 8) = &rcx_198[1]
                    rcx_198[1] = 0
                    *rcx_198 = &data_142f11598
                    rcx_198[4].d = r14_14
                    rcx_198[2] = rcx_195
                    rcx_198[3] = 0
                    *(rcx_198 + 0x24) = 0
                    rcx_198[5].d = (temp9_1 u>> 0x1f) + temp9_1
                    *(rcx_198 + 0x2c) = 1
                    zmm6_1 = sub_14081d930(&var_c38, nullptr)
                    int64_t* rbx_21 = var_c38
                    
                    if (rbx_21 != 0)
                        rbx_21[1].d -= 1
                        
                        if (rbx_21[1].d == 1)
                            char rax_270
                            
                            if (rbx_21[2].b == 0 && data_143f0f1d0 == 0)
                                rax_270 = sub_1405949a0()
                            
                            if (rbx_21[2].b != 0 || (data_143f0f1d0 == 0 && rax_270 != 0))
                                (**rbx_21)(rbx_21, 1)
                            else
                                bool z_5
                                
                                if (0 == *(rbx_21 + 0xc))
                                    *(rbx_21 + 0xc) = 1
                                    z_5 = true
                                else
                                    *(rbx_21 + 0xc)
                                    z_5 = false
                                
                                if (z_5)
                                    zmm6_1 = sub_1405dcc10(&data_143f02390, rbx_21)
                    
                    rsi_7 = arg9
                    rcx_175 = &r15[0xd]
                
                i_3 = i_5 + 1
                rdx_68 = var_c90_2 + 0x60
                i_5 = i_3
                var_c90_2 = rdx_68
            while (i_3 s< r15[0x26].d)
        
        sub_1405d16e0(&var_c30, nullptr)
        sub_1405d1550(&var_c30)
    
    result.b = 1

__security_check_cookie(rax_1 ^ &var_d38)
return result
