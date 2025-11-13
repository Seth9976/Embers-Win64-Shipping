// 函数: sub_142042740
// 地址: 0x142042740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_28[0x4] = arg5
uint32_t var_38[0x4] = arg6
float var_48[0x4] = arg7
void var_338
int64_t rax_1 = __security_cookie ^ &var_338
uint32_t zmm14[0x4] = arg10
float var_58[0x4] = arg8
uint32_t var_2c8
(*(*arg1 + 0x520))(arg1, &var_2c8)
uint64_t var_2d8
int32_t var_2c0
uint128_t zmm0
float zmm1[0x4]
uint128_t zmm2
uint128_t zmm3
uint32_t zmm4[0x4]
float zmm5_1[0x4]
int32_t var_2c4

if ((*(arg1 + 0x214) & 2) == 0)
label_14204286b:
    zmm2 = var_2c0
    zmm3 = var_2c4
    zmm4 = var_2c8
else
    int64_t* rdi_1 = arg1[0x14]
    
    if (rdi_1 == 0)
        goto label_14204286b
    
    void* rax_3 = sub_14255d000()
    void* rdx_1 = rdi_1[2]
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
        goto label_14204286b
    
    (*(*rdi_1 + 0x6c8))(rdi_1, &var_2d8)
    zmm4 = var_2c8
    zmm5_1 = var_2d8.d
    zmm2 = var_2c0
    zmm3 = var_2c4
    int32_t var_2d0
    zmm0 = var_2d0
    zmm1 = var_2d8:4.d
    char rax_7
    
    if (zmm4[0] f!= zmm5_1[0] || zmm3.d f!= zmm1[0] || zmm2.d f!= zmm0.d)
        rax_7 = 1
    else
        rax_7 = 0
    
    if (rax_7 != 0)
        var_2c8 = zmm5_1[0]
        zmm4 = zmm5_1
        float var_2c4_1 = zmm1[0]
        zmm3 = zmm1
        var_2c0 = zmm0.d
        zmm2 = zmm0

if ((*(arg1 + 0x14c) & 8) == 0)
    int32_t rax_8 = arg1[0x26].d
    char rax_9 = (*(arg1 + 0x214)).b
    var_2d8 = arg1[0x25]
    
    if ((rax_9 & 4) == 0)
        zmm4 = var_2d8.d
        var_2c8 = zmm4[0]
    
    if ((rax_9 & 8) == 0)
        zmm3 = var_2d8:4.d
        int32_t var_2c4_2 = zmm3.d
    
    if ((rax_9 & 0x10) == 0)
        zmm2 = rax_8
        var_2c0 = zmm2.d

int128_t zmm10 = 0x38d1b717
float var_78[0x4] = arg9
int128_t zmm15 = zx.o(0)
float var_298[0x4]
float var_288[0x4]
int32_t rcx_6

if (arg4 == 0)
    rcx_6 = var_2c0
    zmm1 = zx.o(var_2c8.q)
else
    float var_268[0x4]
    float var_258[0x4]
    float var_248[0x4]
    float var_238[0x4]
    
    if ((*(arg1 + 0x214) & 0x80) == 0 || zmm14[0] f<= arg1[0x44].d || 0f f>= *(arg1 + 0x21c))
        var_288 = *sub_140ade170(&var_2c8, &var_238)
        float (* rax_16)[0x4]
        float zmm7_1[0x4]
        rax_16, zmm7_1 = sub_140ade170(&arg1[0x4a], &var_248)
        int32_t zmm1_2 = *(arg1 + 0x21c)
        var_268 = *rax_16
        float (* rax_17)[0x4]
        rax_17, zmm10 = sub_140adde90(&var_258, &var_268, &var_288, zmm14, zmm7_1, zmm1_2)
        int64_t* rax_18 = sub_140acd070(&var_298, rax_17)
        zmm1 = zx.o(*rax_18)
        var_2c8.q = zmm1.q
        rcx_6 = rax_18[1].d
        int32_t var_2c0_2 = rcx_6
    else
        bool cond:4_1 = zmm14[0] f<= 9.99999975e-05f
        int32_t var_2d0_2 = arg1[0x4b].d
        arg5 = data_143f404b0
        zmm2.d = zmm2.d f- arg1[0x4b].d
        zmm3.d = zmm3.d f- *(arg1 + 0x254)
        zmm4[0] = zmm4[0] f- arg1[0x4a].d
        arg6 = zmm14
        zmm0 = zmm2
        zmm2 = zmm3
        zmm3 = data_143f404d0
        zmm2 = _mm_unpacklo_ps(zmm2, zx.o(0)[0].q)
        zmm5_1 = zmm4
        zmm4 = data_143f404c0
        float temp0_3[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5_1, zmm0.q), zmm2.q)
        zmm2 = _mm_div_ps(temp0_3, arg5)
        zmm0 = _mm_and_ps(zmm2, zmm4)
        uint32_t temp0_6[0x4] = _mm_and_ps(zmm4, arg5)
        zmm3 = _mm_cmpeq_ps(zmm3, zmm0, 2)
        float temp0_9[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm2))
        zmm3 = _mm_and_ps(zmm3, zmm2 ^ temp0_9) ^ temp0_9
        float temp0_15[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_6), 
            _mm_min_ps(_mm_sub_ps(temp0_3, _mm_mul_ps(zmm3, arg5)), temp0_6))
        zmm2 = _mm_cmpeq_ps(zx.o(0), temp0_15, 2)
        float temp0_17[0x4] = _mm_add_ps(temp0_15, arg5)
        arg7 = temp0_17 ^ _mm_and_ps(temp0_17 ^ temp0_15, zmm2)
        zmm0 = _mm_cmpeq_ps(data_143f404a0, arg7, 1)
        arg7 ^= _mm_and_ps(_mm_sub_ps(arg7, arg5) ^ arg7, zmm0)
        zmm0.d = 1f f/ zmm14[0]
        arg8 = _mm_shuffle_ps(arg7, arg7, 0xaa)
        float temp0_23[0x4] = _mm_shuffle_ps(arg7, arg7, 0x55)
        arg8[0] = arg8[0] f* zmm0.d
        temp0_23[0] = temp0_23[0] f* zmm0.d
        arg7[0] = arg7[0] f* zmm0.d
        var_2d8 = arg1[0x4a]
        
        if (cond:4_1)
            rcx_6 = var_2c0
            zmm1 = zx.o(var_2c8.q)
        else
            bool cond:6_1
            
            do
                zmm0 = var_2d8.d
                float temp0_24[0x4] = _mm_min_ss(arg1[0x44].d[0], arg6[0])
                arg7[0] = arg7[0] * temp0_24[0]
                arg6[0] = arg6[0] f- temp0_24[0]
                zmm3.d = arg8.d f* temp0_24[0]
                zmm0.d = zmm0.d f+ arg7[0]
                zmm2.d = temp0_23.d f* temp0_24[0]
                zmm1 = var_2d8:4.d
                zmm1[0] = zmm1[0] f+ zmm2.d
                var_2d8.d = zmm0.d
                zmm0.d = var_2d0_2.d f+ zmm3.d
                var_2d8:4.d = zmm1[0]
                var_2d0_2 = zmm0.d
                var_268 = *sub_140ade170(&var_2d8, &var_258)
                float (* rax_12)[0x4]
                uint32_t zmm6[0x4]
                float zmm7[0x4]
                rax_12, zmm6, zmm7 = sub_140ade170(&arg1[0x4a], &var_248)
                int32_t zmm1_1 = *(arg1 + 0x21c)
                var_288 = *rax_12
                float (* rax_13)[0x4]
                rax_13, zmm10 = sub_140adde90(&var_238, &var_288, &var_268, zmm6, zmm7, zmm1_1)
                int64_t* rax_14
                rax_14, arg6, arg7, arg8 = sub_140acd070(&var_298, rax_13)
                cond:6_1 = arg6[0] f> zmm10.d
                zmm1 = zx.o(*rax_14)
                var_2c8.q = zmm1.q
                rcx_6 = rax_14[1].d
                arg1[0x4a] = zmm1.q
                arg1[0x4b].d = rcx_6
                int32_t var_2c0_1 = rcx_6
            while (cond:6_1)

arg6 = *(arg1 + 0x1d0)
arg1[0x4a] = zmm1.q
arg1[0x4b].d = rcx_6
arg7 = _mm_shuffle_ps(arg6, arg6, 0xaa)
arg7[0] = arg7[0] f+ arg1[0x41].d
arg8 = _mm_shuffle_ps(arg6, arg6, 0x55)
arg8[0] = arg8[0] f+ *(arg1 + 0x204)
arg6[0] = arg6[0] f+ arg1[0x40].d
float zmm12[0x4]
float var_88[0x4] = zmm12
uint32_t zmm13[0x4]
uint32_t var_98[0x4] = zmm13
float var_2ac = arg8[0]
float var_2a8 = arg7[0]
float var_2e4 = arg8[0]
float var_2e0 = arg7[0]
uint32_t var_2b0 = arg6[0]
uint32_t var_2e8 = arg6[0]
float rcx_12

if (arg3 == 0)
    zmm2 = zx.o(var_2e8.q)
    rcx_12 = var_2e0
else
    if ((*(arg1 + 0x214) & 0x80) == 0 || zmm14[0] f<= arg1[0x44].d || 0f f>= arg1[0x43].d)
        int64_t* rax_21 = sub_140ae3860(&var_298, &arg1[0x47], &var_2e8, zmm14, arg1[0x43].d.d)
        zmm2 = zx.o(*rax_21)
        var_2e8.q = zmm2.q
        rcx_12 = rax_21[1].d
        var_2e0 = rcx_12
    label_142042d5f:
        arg6 = var_2b0
        arg8 = var_2ac
        arg7 = var_2a8
    else
        bool cond:5_1 = zmm14[0] f<= zmm10.d
        int32_t var_2d0_3 = arg1[0x48].d
        arg7[0] = arg7[0] f- arg1[0x48].d
        zmm0.d = 1f f/ zmm14[0]
        arg8[0] = arg8[0] f- *(arg1 + 0x23c)
        arg6[0] = arg6[0] f- arg1[0x47].d
        arg7[0] = arg7[0] f* zmm0.d
        arg5 = zmm14
        arg8[0] = arg8[0] f* zmm0.d
        arg6[0] = arg6[0] f* zmm0.d
        var_2d8 = arg1[0x47]
        
        if (not(cond:5_1))
            bool cond:8_1
            
            do
                zmm0 = var_2d8.d
                zmm3 = _mm_min_ss(arg1[0x44].d.d, arg5[0])
                zmm1 = arg6
                zmm4 = arg7
                zmm1[0] = zmm1[0] f* zmm3.d
                arg5[0] = arg5[0] f- zmm3.d
                zmm4[0] = zmm4[0] f* zmm3.d
                zmm0.d = zmm0.d f+ zmm1[0]
                zmm2.d = arg8.d f* zmm3.d
                zmm1 = var_2d8:4.d
                zmm1[0] = zmm1[0] f+ zmm2.d
                var_2d8.d = zmm0.d
                zmm0.d = var_2d0_3.d f+ zmm4[0]
                var_2d8:4.d = zmm1[0]
                var_2d0_3 = zmm0.d
                int32_t* rax_20
                rax_20, arg5 = sub_140ae3860(&var_298, &arg1[0x47], &var_2d8, zmm3, arg1[0x43].d.d)
                cond:8_1 = arg5[0] f> zmm10.d
                zmm2 = zx.o(*rax_20)
                var_2e8.q = zmm2.q
                rcx_12 = rax_20[2]
                arg1[0x47] = zmm2.q
                arg1[0x48].d = rcx_12
                var_2e0 = rcx_12
            while (cond:8_1)
            goto label_142042d5f
        
        rcx_12 = var_2e0
        zmm2 = zx.o(var_2e8.q)
    
    zmm13 = *(arg1 + 0x224)
    
    if (not(zmm13[0] f<= 0f))
        zmm12 = var_2e4
        arg5 = var_2e8
        zmm12[0] = zmm12[0] - arg8[0]
        arg9 = var_2e0
        arg5[0] = arg5[0] f- arg6[0]
        arg9[0] = arg9[0] - arg7[0]
        zmm0.d = zmm12.d f* zmm12[0]
        zmm3.d = arg5.d f* arg5[0]
        arg9[0] = arg9[0] * arg9[0]
        zmm3.d = zmm3.d f+ zmm0.d
        zmm0.d = zmm13.d f* zmm13[0]
        zmm3.d = zmm3.d f+ arg9[0]
        
        if (not(zmm3.d f<= zmm0.d))
            if (not(zmm13[0] f>= zmm10.d))
                arg5 = data_143dbb1f8
                zmm2 = data_143dbb1fc
                zmm0 = data_143dbb200
            else if (zmm3.d f<= zmm0.d)
                zmm2 = zmm12
                zmm0 = arg9
            else
                zmm4 = 0x3f000000
                float temp0_28[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3.d)
                zmm1 = 0x3f000000
                zmm3.d = zmm3.d f* 0.5f
                zmm0.d = temp0_28.d f* temp0_28[0]
                zmm2.d = zmm3.d f* zmm0.d
                zmm1[0] = 0.5f f- zmm2.d
                zmm0.d = temp0_28.d f* zmm1[0]
                temp0_28[0] = temp0_28[0] f+ zmm0.d
                zmm0.d = temp0_28.d f* temp0_28[0]
                zmm3.d = zmm3.d f* zmm0.d
                zmm4[0] = 0.5f f- zmm3.d
                zmm0.d = temp0_28.d f* zmm4[0]
                temp0_28[0] = temp0_28[0] f+ zmm0.d
                temp0_28[0] = temp0_28[0] f* zmm13[0]
                arg5[0] = arg5[0] * temp0_28[0]
                zmm0.d = temp0_28.d f* arg9[0]
                zmm2.d = temp0_28.d f* zmm12[0]
            
            zmm1 = zx.o(var_2e8.q)
            zmm2.d = zmm2.d f+ arg8[0]
            arg5[0] = arg5[0] f+ arg6[0]
            zmm0.d = zmm0.d f+ arg7[0]
            zmm1[0] = arg5[0]
            float temp0_29[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
            temp0_29[0] = zmm2.d
            var_2e0 = zmm0.d
            float temp0_30[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xe1)
            var_2e8.q = temp0_30.q
            zmm2 = temp0_30
            rcx_12 = var_2e0

zmm0 = zx.o(var_2b0.q)
arg1[0x3e].d
arg1[0x47] = zmm2.q
arg1[0x48].d = rcx_12
*(arg1 + 0x244) = zmm0.q
*(arg1 + 0x24c) = var_2a8
int32_t* rax_23
float zmm6_1
int512_t zmm11
rax_23, zmm6_1, zmm11 = sub_140ae4210(&var_2c8, &var_298)
uint32_t zmm8 = var_2e8 f- zmm6_1 f* *rax_23
float zmm7_2 = var_2e0 - zmm6_1 f* rax_23[2]
zmm6_1 = var_2e4 - zmm6_1 f* rax_23[1]
var_2e8 = zmm8
float var_2e0_1 = zmm7_2
float var_2e4_1 = zmm6_1
void var_138
float* rax_24
int64_t zmm6_2
float zmm7_3
float zmm8_1[0x4]
int512_t zmm9
rax_24, zmm6_2, zmm7_3, zmm8_1, zmm9 = sub_14077e760(&var_138, &var_2c8)
float zmm1_4[0x4] = arg1[0x3f].d
float zmm2_1[0x4] = *(arg1 + 0x1fc)
zmm11.o = var_78
zmm9.o = var_58
int32_t var_28c = 0
float zmm3_3[0x4] = var_298
zmm3_3[0] = (*(arg1 + 0x1f4))[0]
var_2d8 = 0
float temp0_31[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xe1)
temp0_31[0] = zmm1_4[0]
int32_t var_2d0_4 = 0
float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xc6)
temp0_32[0] = zmm2_1[0]
float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc9)
var_298 = temp0_33
float temp0_35[0x4] =
    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_33, temp0_33, 0x55), *(rax_24 + 0x10))
float temp0_37[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_33, temp0_33, 0), *rax_24)
float temp0_39[0x4] =
    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_33, temp0_33, 0xff), *(rax_24 + 0x30))
float temp0_40[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xaa)
float temp0_41[0x4] = _mm_add_ps(temp0_37, temp0_35)
float temp0_44[0x4] =
    _mm_add_ps(_mm_add_ps(__mulps_xmmps_memps(temp0_40, *(rax_24 + 0x20)), temp0_39), temp0_41)
zmm8_1[0] = zmm8_1[0] + temp0_44[0]
float temp0_45[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0x55)
float temp0_46[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0xaa)
zmm6_2.d = zmm6_2.d f+ temp0_45[0]
zmm7_3 = zmm7_3 + temp0_46[0]
var_2e8 = zmm8_1[0]
int32_t var_2e4_2 = zmm6_2.d

if (arg2 == 0 || 0f f== arg1[0x3e].d)
    *(arg1 + 0x22c) = (_mm_unpacklo_ps(zmm8_1, zmm6_2)).q
    *(arg1 + 0x234) = zmm7_3
    arg1[0x45].b = 0
else
    int64_t rdi_4 = arg1[0x14]
    arg1[0x45].b = 1
    TEB* gsbase
    
    if (data_143f406d8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f406d8)
        
        if (data_143f406d8 == 0xffffffff)
            sub_140b58170(&data_143f406d0, "SpringArm", 1)
            _Init_thread_footer(&data_143f406d8)
    
    int32_t var_318
    var_318.q = rdi_4
    void var_2b8
    sub_141eb54c0(&var_138, data_143f406d0, &var_2b8, 0, var_318)
    char var_228
    memset(&var_228, 0, 0x88)
    void* rax_27 = arg1[0x15]
    char rdi_5 = arg1[0x42].b
    var_298[1] = *(arg1 + 0x20c)
    int32_t var_220_1 = 0x3f800000
    var_298[0] = 2
    
    if (rax_27 == 0)
        rax_27 = sub_141ee69e0(arg1)
    
    var_318.q = &data_14399f720
    int32_t zmm14_1
    zmm14_1, zmm15 = sub_141ecd380(rax_27, &var_228, &var_2b0, &var_2e8, var_318, rdi_5, &var_298, 
        &var_138, &data_143f3a660)
    int64_t r10_1 = *arg1
    *(arg1 + 0x22c) = var_2e8.q
    *(arg1 + 0x234) = zmm7_3
    var_318.b = var_228 & 1
    void var_218
    int64_t* rax_30 = (*(r10_1 + 0x530))(arg1, &var_298, &var_2e8, &var_218, var_318, zmm14_1)
    uint128_t zmm0_8 = zx.o(*rax_30)
    int32_t rax_31 = rax_30[1].d
    var_2d8 = zmm0_8.q
    
    if (var_2d8.d f!= var_2e8 || _mm_shuffle_ps(zmm0_8, zmm0_8, 0x55).d f!= var_2e4_2
            || rax_31 f!= zmm7_3)
        rax_31.b = 0
    else
        rax_31.b = 1
    
    if (rax_31.b != 0)
        arg1[0x45].b = 0
    
    int64_t var_d8
    
    if (var_d8 != 0)
        sub_140a74f90(var_d8)
    
    int64_t var_f8
    
    if (var_f8 != 0)
        sub_140a74f90(var_f8)

float zmm6_4[0x4]
int64_t zmm7_5
float zmm8_3[0x4]
zmm6_4, zmm7_5, zmm8_3 = sub_140ade170(&var_2c8, &var_288)
float zmm2_2[0x4] = data_14399f66c
float var_198[0x4] = var_288
float temp0_49[0x4] = _mm_unpacklo_ps(zmm2_2, zmm15.q)
float temp0_50[0x4] = _mm_unpacklo_ps(zmm6_4, zmm15.q)
float var_188[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8_3, zmm7_5), temp0_50[0].q)
float var_178[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), temp0_49[0].q)
float var_168[0x4]
sub_140ad7d70(&var_198, &var_168, &arg1[0x38])
float var_158[0x4]
float var_2d0_7 = _mm_shuffle_ps(var_158, var_158, 0xaa)[0]
*(arg1 + 0x25c) = (_mm_unpacklo_ps(var_158, _mm_shuffle_ps(var_158, var_158, 0x55)[0].q)).q
*(arg1 + 0x270) = var_168
*(arg1 + 0x264) = var_2d0_7
int64_t result
int512_t zmm6_5
int512_t zmm7_6
int512_t zmm8_4
result, zmm6_5, zmm7_6, zmm8_4 = sub_141f4d0f0(arg1, 0, 0)
__security_check_cookie(rax_1 ^ &var_338)
zmm6_5.o = var_28
zmm7_6.o = var_38
zmm8_4.o = var_48
return result
