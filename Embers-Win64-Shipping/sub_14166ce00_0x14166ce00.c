// 函数: sub_14166ce00
// 地址: 0x14166ce00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
float zmm9[0x4] = *arg3
float zmm15[0x4] = 0x80000000
int32_t* r10 = arg1
float zmm3[0x4] = zmm9 ^ 0x80000000
float var_338[0x4] = arg3[1]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
int32_t var_188 = 0
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
int32_t* var_2c0 = r10
float var_170[0x4] = data_142d3f7e0
float (* rsi)[0x4] = arg4
float temp0_1[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xff)
float temp0_2[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
int64_t rbx = arg2
float var_2f4 = temp0_2[0]
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r13 = zx.q(var_188)
float var_2ec = temp0_1[0]
float var_238[0x4] = temp0_2
temp0[0] = (temp0_2 ^ 0x80000000)[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
float temp0_4[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
float var_2a8[0x4]
int128_t* var_1e0 = &var_2a8
float var_2f8
int32_t* var_1d8 = &var_2f8
float zmm6[0x4] = *(arg10 + 4)
float zmm5[0x4] = *arg10
float zmm7[0x4] = *(arg10 + 8)
temp0_4[0] = (temp0_3 ^ 0x80000000)[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0_1[0]
var_2f8 = zmm9[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
var_2a8 = temp0_6
var_2a8 = temp0_6
float var_2f0 = temp0_3[0]
zmm6[0] = zmm6[0] f* r10[1]
zmm5[0] = zmm5[0] f* *r10
zmm6[0] = zmm6[0] + zmm5[0]
float var_1f8[0x4] = zmm9
float var_208[0x4] = temp0_3
int64_t var_1e8 = arg2
zmm7[0] = zmm7[0] f* r10[2]
zmm5[0] = zmm5[0] f* r10[3]
zmm6[0] = zmm6[0] f* r10[4]
zmm6[0] = zmm6[0] + zmm7[0]
zmm7[0] = zmm7[0] f* r10[5]
zmm6[0] = zmm6[0] f* r10[7]
zmm6[0] = zmm6[0] + zmm5[0]
zmm5[0] = zmm5[0] f* r10[6]
zmm6[0] = zmm6[0] + zmm7[0]
zmm7[0] = zmm7[0] f* r10[8]
zmm6[0] = zmm6[0] + zmm5[0]
bool cond:0 = zmm6[0] < zmm6[0]
zmm6[0] = zmm6[0] + zmm7[0]
int32_t rax_4
float zmm0[0x4]

if (not(cond:0) && not(zmm6[0] < zmm6[0]))
    zmm0 = zx.o(*r10)
    rax_4 = r10[2]
else if (zmm6[0] < zmm6[0] || zmm6[0] < zmm6[0])
    zmm0 = zx.o(*(r10 + 0x18))
    rax_4 = r10[8]
else
    zmm0 = zx.o(*(r10 + 0xc))
    rax_4 = r10[5]

int64_t var_308 = zmm0.q
float var_328 = (zmm5 ^ 0x80000000)[0]
float var_324 = (zmm6 ^ 0x80000000)[0]
float var_320 = (zmm7 ^ 0x80000000)[0]
int64_t var_130 = zmm0.q
int32_t var_128 = rax_4
float var_2d4
float* rax_5
uint128_t zmm11_1
rax_5, zmm11_1 = sub_14170bcf0(&var_1e8, &var_2d4, &var_328)
float zmm5_1[0x4] = var_338[0]
float zmm12[0x4] = zx.o(0)
float zmm10[0x4] = var_338[1]
float zmm3_1[0x4] = var_338[2]
float zmm13[0x4] = zmm10
uint128_t zmm2_1 = zx.o(*rax_5)
float zmm14[0x4] = zmm3_1
int32_t rcx_1 = rax_5[2]
float zmm7_1[0x4] = zmm5_1
float zmm1_1[0x4] = var_308:4.d
uint128_t zmm0_1
zmm0_1.d = var_308.d.d f- zmm2_1.d
uint32_t result = zx.d(arg9)
float zmm8[0x4] = zmm10
int64_t var_100 = zmm2_1.q
float zmm9_1[0x4] = zmm3_1
uint64_t var_268 = zmm2_1.q
uint128_t zmm6_1
zmm6_1.d = zmm5_1.d f- zmm0_1.d
float var_344 = zmm5_1[0]
float var_298 = zmm5_1[0]
zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
zmm1_1[0] = zmm1_1[0] f- zmm0_1.d
float var_340 = zmm10[0]
zmm0_1.d = rax_4.d f- rcx_1
float var_294 = zmm10[0]
float var_2c8 = zmm3_1[0]
zmm13[0] = zmm13[0] - zmm1_1[0]
float result_2 = zmm3_1[0]
int32_t var_f8 = rcx_1
zmm14[0] = zmm14[0] f- zmm0_1.d
int64_t var_288 = 0
float var_280 = 1f
zmm0_1.d = zmm6_1.d f* zmm6_1.d
zmm2_1.d = zmm13.d f* zmm13[0]
zmm14[0] = zmm14[0] * zmm14[0]
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm2_1.d = zmm2_1.d f+ zmm14[0]
int32_t rdi

if (zmm2_1.d f>= 9.99999997e-07f || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

int32_t rcx_2 = 0
int64_t r12
r12.b = 0
int32_t var_318 = 0x7f7fffff
int32_t var_2d8 = 0
char rdx_1 = rdi.b
char var_348 = rdx_1
float var_314
int64_t var_250
float result_1
float zmm4_1[0x4]

if (rdi.b != 0)
label_14166dd16:
    bool cond:1_1 = zmm12[0] f<= zmm11_1.d
    float* rdi_3 = arg6
    *rdi_3 = zmm12[0]
    
    if (not(cond:1_1))
        zmm3_1 = zmm11_1
        zmm4_1 = zmm11_1
        *arg8 = var_288
        arg8[1].d = var_280
        
        if (r13.d s> 0)
            int128_t* rcx_18 = &var_170
            uint64_t i_2 = zx.q(r13.d)
            int32_t* rax_22 = &var_f8
            uint64_t i
            
            do
                zmm2_1 = *rcx_18
                rcx_18 += 4
                zmm1_1 = zmm2_1
                zmm0_1.d = zmm2_1.d f* rax_22[-2]
                zmm1_1[0] = zmm1_1[0] f* rax_22[-1]
                zmm2_1.d = zmm2_1.d f* *rax_22
                rax_22 = &rax_22[3]
                zmm11_1.d = zmm11_1.d f+ zmm0_1.d
                zmm3_1[0] = zmm3_1[0] + zmm1_1[0]
                zmm4_1[0] = zmm4_1[0] f+ zmm2_1.d
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        zmm0_1.d = zmm12.d f* *arg4
        zmm12[0] = zmm12[0] f* arg4[1]
        zmm12[0] = zmm12[0] f* arg4[2]
        zmm0_1.d = zmm0_1.d f+ zmm5_1[0]
        zmm12[0] = zmm12[0] + zmm10[0]
        zmm12[0] = zmm12[0] + var_338[2]
        zmm0_1.d = zmm0_1.d f+ zmm11_1.d
        zmm12[0] = zmm12[0] + zmm3_1[0]
        zmm12[0] = zmm12[0] + zmm4_1[0]
        *arg7 = (_mm_unpacklo_ps(zmm0_1, zmm12[0].q)).q
        arg7[1].d = zmm12[0]
    else if (result.b != 0)
        var_338[0].q = 0
        var_338[2].q = 0
        var_170[0].q = 0
        var_170[2].q = 0
        sub_14083ad30(&var_338, 8)
        
        if (var_170[3] s< 8)
            sub_14083ad30(&var_170, 8)
        
        float rax_31
        float zmm0_2[0x4]
        
        if (var_2d8 == 0)
            int32_t var_2cc_3 = 0x3f800000
            rax_31 = 1f
            zmm0_2 = _mm_unpacklo_ps(zmm11_1, zmm11_1.q)
        label_14166dfd0:
            zmm2_1 = var_130:4.d
            zmm1_1 = var_130.d
            *rdi_3 = 0f
            *arg8 = zmm0_2.q
            zmm0_2 = var_128
            arg8[1].d = rax_31
            float temp0_16[0x4] = _mm_unpacklo_ps(zmm1_1, zmm2_1.q)
            result = zmm0_2[0]
            *arg7 = temp0_16.q
        else
            if (r13.d s> 0)
                int64_t rdi_4 = 0
                uint64_t i_3 = zx.q(r13.d)
                uint64_t i_1
                
                do
                    int64_t rbx_2 = sx.q(var_338[2])
                    int32_t rax_24 = (rbx_2 + 1).d
                    var_338[2] = rax_24
                    
                    if (rax_24 s> var_338[3])
                        sub_14083a7e0(&var_338)
                    
                    int64_t rcx_22 = var_338[0].q
                    int64_t rdx_10 = rbx_2 * 3
                    zmm0_2 = zx.o(*(&var_130 + rdi_4))
                    int32_t rax_25 = *(&var_128 + rdi_4)
                    zmm8[0] = zmm8[0] f+ *(&var_100:4 + rdi_4)
                    *(rcx_22 + (rdx_10 << 2)) = zmm0_2.q
                    zmm7_1[0] = zmm7_1[0] f+ *(&var_100 + rdi_4)
                    *(rcx_22 + (rdx_10 << 2) + 8) = rax_25
                    int64_t rbx_3 = sx.q(var_170[2])
                    float var_324_2 = zmm8[0]
                    var_328 = zmm7_1[0]
                    zmm9_1[0] = zmm9_1[0] f+ *(&var_f8 + rdi_4)
                    int32_t rax_26 = (rbx_3 + 1).d
                    var_170[2] = rax_26
                    var_320 = zmm9_1[0]
                    
                    if (rax_26 s> var_170[3])
                        sub_14083a7e0(&var_170)
                    
                    int64_t rcx_24 = var_170[0].q
                    int64_t rdx_12 = rbx_3 * 3
                    rdi_4 += 0xc
                    *(rcx_24 + (rdx_12 << 2)) = var_328.q
                    *(rcx_24 + (rdx_12 << 2) + 8) = var_320
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            var_188.q = &var_2a8
            int64_t var_180_1 = arg2
            int128_t* var_178_1 = arg3
            int32_t rax_30
            int128_t zmm15_1
            rax_30, zmm15_1 = sub_1415824d0(&var_338, &var_170, &var_2c0, &var_188, zmm14, zmm15, 
                &var_314, &var_328, &var_250, &var_1e8)
            zmm0_2 = zx.o(var_328.q)
            rax_31 = var_320
            
            if (rax_30 == 2)
                goto label_14166dfd0
            
            *arg8 = zmm0_2.q
            arg8[1].d = rax_31
            result = result_1
            *rdi_3 = (var_314 ^ zmm15_1)[0]
            *arg7 = var_250
        int64_t rcx_26 = var_170[0].q
        arg7[1].d = result
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        int64_t rcx_27 = var_338[0].q
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
    
    result.b = 1
else
    while (true)
        var_2d8 = rcx_2 + 1
        
        if (rcx_2 s>= 0x20)
            zmm7_1 = var_344
            zmm8 = var_340
            result = zx.d(arg9)
        else
            zmm5_1 = 0x3f000000
            zmm3_1 = zx.o(0)
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm0_1.d = zmm6_1.d f* zmm6_1.d
            zmm2_1.d = zmm13.d f* zmm13[0]
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            zmm2_1.d = zmm2_1.d f+ zmm14[0]
            zmm3_1[0] = zmm2_1.d
            float temp0_8[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
            zmm3_1[0] = zmm3_1[0] * 0.5f
            zmm0_1.d = temp0_8.d f* temp0_8[0]
            zmm3_1[0] = zmm3_1[0] f* zmm0_1.d
            zmm2_1.d = 0.5f - zmm3_1[0]
            zmm0_1.d = temp0_8.d f* zmm2_1.d
            temp0_8[0] = temp0_8[0] f+ zmm0_1.d
            temp0_8[0] = temp0_8[0] * temp0_8[0]
            zmm3_1[0] = zmm3_1[0] * temp0_8[0]
            zmm5_1[0] = 0.5f - zmm3_1[0]
            zmm0_1.d = temp0_8.d f* zmm5_1[0]
            temp0_8[0] = temp0_8[0] f+ zmm0_1.d
            zmm14[0] = zmm14[0] * temp0_8[0]
            zmm13[0] = zmm13[0] * temp0_8[0]
            var_314 = temp0_8[0]
            zmm14[0] = zmm14[0] f* r10[2]
            temp0_8[0] = temp0_8[0] f* zmm6_1.d
            zmm2_1.d = zmm13.d f* r10[1]
            zmm13[0] = zmm13[0] f* r10[4]
            zmm13[0] = zmm13[0] f* r10[7]
            zmm0_1.d = temp0_8.d f* *r10
            var_314 = temp0_8[0]
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            zmm0_1.d = temp0_8.d f* r10[3]
            zmm2_1.d = zmm2_1.d f+ zmm14[0]
            zmm14[0] = zmm14[0] f* r10[5]
            zmm13[0] = zmm13[0] f+ zmm0_1.d
            zmm0_1.d = temp0_8.d f* r10[6]
            zmm13[0] = zmm13[0] + zmm14[0]
            zmm14[0] = zmm14[0] f* r10[8]
            zmm13[0] = zmm13[0] f+ zmm0_1.d
            bool cond:2_1 = zmm2_1.d f< zmm13[0]
            zmm13[0] = zmm13[0] + zmm14[0]
            int32_t rax_7
            
            if (not(cond:2_1) && not(zmm2_1.d f< zmm13[0]))
                zmm0_1 = zx.o(*r10)
                rax_7 = r10[2]
            else if (zmm13[0] f< zmm2_1.d || zmm13[0] < zmm13[0])
                zmm0_1 = zx.o(*(r10 + 0x18))
                rax_7 = r10[8]
            else
                zmm0_1 = zx.o(*(r10 + 0xc))
                rax_7 = r10[5]
            
            zmm9_1 = var_2a8[1]
            zmm7_1 = var_2a8[2]
            zmm10 = temp0_8 ^ zmm15
            zmm2_1 = var_2a8[3]
            uint64_t var_2b8_1 = zmm0_1.q
            zmm0_1 = var_2b8_1.d
            zmm4_1 = zmm13 ^ zmm15
            zmm1_1 = var_2b8_1:4.d
            int32_t var_258_1 = zmm0_1.d
            var_308.d = zmm0_1.d
            zmm6_1 = zmm14 ^ zmm15
            zmm15 = var_2a8[0]
            zmm0_1.d = zmm7_1.d f* zmm4_1[0]
            zmm3_1 = rax_7
            float var_254_1 = zmm1_1[0]
            var_308:4.d = zmm1_1[0]
            float var_2dc_1 = zmm3_1[0]
            float var_300_1 = zmm3_1[0]
            zmm15[0] = zmm15[0] * zmm4_1[0]
            zmm9_1[0] = zmm9_1[0] f* zmm6_1.d
            zmm7_1[0] = zmm7_1[0] * zmm10[0]
            zmm9_1[0] = zmm9_1[0] f- zmm0_1.d
            zmm0_1.d = zmm15.d f* zmm6_1.d
            zmm7_1[0] = zmm7_1[0] f- zmm0_1.d
            zmm0_1.d = zmm9_1.d f* zmm10[0]
            zmm9_1[0] = zmm9_1[0] + zmm9_1[0]
            zmm15[0] = zmm15[0] f- zmm0_1.d
            zmm7_1[0] = zmm7_1[0] * zmm9_1[0]
            zmm7_1[0] = zmm7_1[0] + zmm7_1[0]
            zmm15[0] = zmm15[0] + zmm15[0]
            zmm15[0] = zmm15[0] * zmm7_1[0]
            zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
            zmm0_1.d = zmm15.d f* zmm15[0]
            zmm7_1[0] = zmm7_1[0] f- zmm0_1.d
            zmm9_1[0] = zmm9_1[0] * zmm15[0]
            zmm0_1.d = zmm9_1.d f* zmm9_1[0]
            float var_310_1 = zmm7_1[0]
            zmm9_1[0] = zmm9_1[0] - zmm7_1[0]
            zmm1_1 = zmm2_1
            zmm1_1[0] = zmm1_1[0] * zmm7_1[0]
            zmm15[0] = zmm15[0] f- zmm0_1.d
            zmm1_1[0] = zmm1_1[0] + zmm4_1[0]
            zmm4_1 = var_310_1
            zmm4_1[0] = zmm4_1[0] + zmm1_1[0]
            zmm1_1 = zmm2_1
            zmm2_1.d = zmm2_1.d f* zmm9_1[0]
            zmm1_1[0] = zmm1_1[0] * zmm15[0]
            zmm2_1.d = zmm2_1.d f+ zmm10[0]
            zmm1_1[0] = zmm1_1[0] f+ zmm6_1.d
            zmm9_1[0] = zmm9_1[0] f+ zmm2_1.d
            zmm15[0] = zmm15[0] + zmm1_1[0]
            
            if (zmm9_1[0] f>= zmm11_1.d)
                zmm7_1 = *(rbx + 0x1c)
            else
                zmm7_1 = *(rbx + 0x10)
            
            if (zmm4_1[0] f>= zmm11_1.d)
                zmm2_1 = *(rbx + 0x20)
            else
                zmm2_1 = *(rbx + 0x14)
            
            if (zmm15[0] f>= zmm11_1.d)
                zmm1_1 = *(rbx + 0x24)
            else
                zmm1_1 = *(rbx + 0x18)
            
            zmm4_1 = zmm2_1
            zmm3_1 = var_2ec
            zmm0_1.d = zmm2_1.d f* var_208[0]
            zmm6_1.d = var_238.d f* zmm1_1[0]
            float var_310_2 = zmm1_1[0]
            var_208[0] = var_208[0] * zmm7_1[0]
            (&var_184)[sx.q(r13.d)] = r13.d
            zmm6_1.d = zmm6_1.d f- zmm0_1.d
            zmm4_1[0] = zmm4_1[0] * var_1f8[0]
            r13 = sx.q(var_188)
            zmm0_1.d = var_1f8.d f* zmm1_1[0]
            zmm6_1.d = zmm6_1.d f+ zmm6_1.d
            var_208[0] = var_208[0] f- zmm0_1.d
            uint64_t rcx_5 = r13 * 3
            zmm0_1.d = zmm7_1.d f* var_238[0]
            zmm3_1[0] = zmm3_1[0] f* zmm6_1.d
            zmm4_1[0] = zmm4_1[0] f- zmm0_1.d
            var_208[0] = var_208[0] + var_208[0]
            zmm3_1[0] = zmm3_1[0] + zmm7_1[0]
            zmm15 = var_254_1
            var_208[0] = var_208[0] f* zmm6_1.d
            zmm0_1.d = var_208.d f* var_208[0]
            zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
            var_238[0] = var_238[0] * zmm4_1[0]
            var_238[0] = var_238[0] f- zmm0_1.d
            zmm0_1.d = var_1f8.d f* zmm4_1[0]
            var_208[0] = var_208[0] f- zmm0_1.d
            zmm10 = var_258_1
            var_238[0] = var_238[0] + zmm3_1[0]
            zmm0_1.d = var_238.d f* zmm6_1.d
            zmm3_1[0] = zmm3_1[0] * zmm4_1[0]
            zmm4_1 = var_344
            zmm10[0] = zmm10[0] - var_238[0]
            zmm3_1[0] = zmm3_1[0] * var_208[0]
            zmm3_1[0] = zmm3_1[0] + var_310_2
            zmm3_1[0] = zmm3_1[0] f+ zmm2_1.d
            zmm9_1 = var_2c8
            zmm4_1[0] = zmm4_1[0] - zmm10[0]
            zmm2_1.d = var_1f8.d f* var_208[0]
            var_208[0] = var_208[0] + zmm3_1[0]
            zmm2_1.d = zmm2_1.d f- zmm0_1.d
            var_328 = zmm4_1[0]
            zmm15[0] = zmm15[0] - var_208[0]
            zmm2_1.d = zmm2_1.d f+ zmm3_1[0]
            zmm0_1.d = var_2dc_1.d f- zmm2_1.d
            uint32_t var_1b4_1 = zmm2_1.d
            zmm2_1.d = var_340.d f- zmm15[0]
            zmm9_1[0] = zmm9_1[0] f- zmm0_1.d
            int32_t var_2dc_2 = zmm0_1.d
            *(&var_130 + (rcx_5 << 2)) = var_308
            zmm0_1 = _mm_unpacklo_ps(var_238, var_208[0].q)
            (&var_128)[rcx_5] = var_300_1
            *(&var_100 + (rcx_5 << 2)) = zmm0_1.q
            (&var_f8)[rcx_5] = var_1b4_1
            int32_t var_324_1 = zmm2_1.d
            var_320 = zmm9_1[0]
            zmm6_1 = var_314
            zmm13[0] = zmm13[0] f* zmm2_1.d
            zmm0_1.d = zmm6_1.d f* zmm4_1[0]
            zmm14[0] = zmm14[0] * zmm9_1[0]
            zmm13[0] = zmm13[0] f+ zmm0_1.d
            zmm13[0] = zmm13[0] + zmm14[0]
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm13[0] f<= zmm11_1.d)
                r13 = zx.q(r13.d + 1)
                *(&var_160 + (rcx_5 << 2)) = var_328.q
                *(&var_160:8 + (rcx_5 << 2)) = var_320
                var_188 = r13.d
            label_14166d8bd:
                zmm10 = var_318
                zmm7_1 = var_344
                zmm8 = var_340
                
                if (rdx_1 == 0)
                    zmm15 = 0x358637bd
                else
                    zmm15 = 0x358637bd
                    
                    if (not(zmm13[0] f< zmm11_1.d))
                        zmm13[0] = zmm13[0] * zmm13[0]
                        zmm13[0] = zmm13[0] + 9.99999997e-07f
                        rdi.b = zmm13[0] >= zmm10[0]
            else
                zmm8 = (*rsi)[1]
                zmm7_1 = *rsi
                zmm3_1 = (*rsi)[2]
                zmm2_1.d = zmm6_1.d f* zmm7_1[0]
                zmm0_1.d = zmm13.d f* zmm8[0]
                zmm14[0] = zmm14[0] * zmm3_1[0]
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                zmm2_1.d = zmm2_1.d f+ zmm14[0]
                
                if (zmm2_1.d f>= zmm11_1.d)
                    result.b = 0
                    break
                
                zmm0_1.d = zmm13.d f/ zmm2_1.d
                zmm12[0] = zmm12[0] f- zmm0_1.d
                
                if (zmm12[0] <= zmm12[0])
                    goto label_14166d8bd
                
                if (zmm12[0] f> arg5)
                    result.b = 0
                    break
                
                zmm1_1 = zx.o(var_298.q)
                zmm9_1 = zmm3_1
                zmm0_1 = zmm1_1
                zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                r13 = zx.q(r13.d + 1)
                var_250 = zmm1_1.q
                zmm7_1[0] = zmm7_1[0] * zmm12[0]
                result_1 = result_2
                zmm8[0] = zmm8[0] * zmm12[0]
                var_188 = r13.d
                zmm7_1[0] = zmm7_1[0] + var_338[0]
                zmm9_1[0] = zmm9_1[0] * zmm12[0]
                var_348 = 0
                zmm8[0] = zmm8[0] + var_338[1]
                var_288.d = zmm6_1.d
                zmm9_1[0] = zmm9_1[0] + var_338[2]
                var_344 = zmm7_1[0]
                zmm7_1[0] = zmm7_1[0] - zmm1_1[0]
                var_298 = zmm7_1[0]
                zmm1_1 = var_160:4.d
                zmm8[0] = zmm8[0] f- zmm0_1.d
                var_340 = zmm8[0]
                zmm2_1.d = zmm9_1.d f- result_1
                zmm0_1.d = var_160.d.d f+ zmm7_1[0]
                var_2c8 = zmm9_1[0]
                float var_294_1 = zmm8[0]
                zmm1_1[0] = zmm1_1[0] + zmm8[0]
                result_2 = zmm9_1[0]
                var_288:4.d = zmm13[0]
                var_280 = zmm14[0]
                var_160.d = zmm0_1.d
                zmm0_1.d = var_160:8.d.d f+ zmm2_1.d
                var_160:4.d = zmm1_1[0]
                zmm1_1 = var_160:0xc.d
                zmm1_1[0] = zmm1_1[0] + zmm7_1[0]
                var_160:8.d = zmm0_1.d
                var_160:0xc.d = zmm1_1[0]
                zmm0_1.d = var_150_1.d.d f+ zmm8[0]
                zmm1_1 = var_150_1:4.d
                zmm1_1[0] = zmm1_1[0] f+ zmm2_1.d
                var_150_1.d = zmm0_1.d
                zmm0_1 = var_150_1:8.d
                var_150_1:4.d = zmm1_1[0]
                zmm0_1.d = zmm0_1.d f+ zmm7_1[0]
                zmm1_1 = var_150_1:0xc.d
                zmm1_1[0] = zmm1_1[0] + zmm8[0]
                var_150_1:8.d = zmm0_1.d
                zmm0_1.d = var_140_1.d f+ zmm2_1.d
                var_150_1:0xc.d = zmm1_1[0]
                zmm7_1[0] = zmm7_1[0] - zmm10[0]
                zmm10 = 0x7f7fffff
                zmm2_1.d = zmm8.d f- zmm15[0]
                var_318 = 0x7f7fffff
                var_140_1 = zmm0_1.d
                zmm0_1.d = zmm9_1.d f- var_2dc_2
                *(&var_160 + (rcx_5 << 2)) = (_mm_unpacklo_ps(zmm7_1, zmm2_1.q)).q
                *(&var_160:8 + (rcx_5 << 2)) = zmm0_1.d
                zmm15 = 0x358637bd
            
            if (rdi.b != 0)
                int64_t* rax_19
                rax_19, zmm7_1, zmm8, zmm9_1, zmm11_1, zmm12 =
                    sub_1416f4530(&var_1e8, &var_160, &var_188, &var_170, &var_130, &var_100)
                r13 = zx.q(var_188)
                zmm1_1 = zx.o(*rax_19)
                int32_t rax_20 = rax_19[1].d
                r10 = var_2c0
                var_238 = var_2f4
                var_1f8 = var_2f8
                zmm0_1 = zmm1_1
                zmm13 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                zmm14 = rax_20
                zmm6_1 = zmm1_1.d
                var_208 = var_2f0
            else
                int32_t rcx_6 = r13.d
                uint64_t var_2e8_1
                int32_t rax_12
                
                if (rcx_6 == 1)
                    int64_t rax_15 = sx.q(var_184)
                    int64_t rcx_13 = rax_15 * 3
                    var_170[rax_15] = 0x3f800000
                    rax_12 = *(&var_160:8 + (rcx_13 << 2))
                    var_2e8_1 = *(&var_160 + (rcx_13 << 2))
                else
                    uint64_t* rax_14
                    
                    if (rcx_6 == 2)
                        void var_198
                        rax_14, zmm7_1, zmm8, zmm9_1 =
                            sub_1416e69d0(&var_198, &var_160, &var_184, &var_188, &var_170)
                    label_14166d92c:
                        rax_12 = rax_14[1].d
                        r13 = zx.q(var_188)
                        r10 = var_2c0
                        var_2e8_1 = *rax_14
                        var_238 = var_2f4
                        var_1f8 = var_2f8
                        var_208 = var_2f0
                    else
                        if (rcx_6 == 3)
                            uint64_t var_1a4
                            rax_14, zmm7_1, zmm8, zmm9_1, zmm10, zmm11_1, zmm12, zmm15 =
                                sub_1416fa750(&var_1a4, &var_160, &var_188, &var_170)
                            goto label_14166d92c
                        
                        if (rcx_6 == 4)
                            uint64_t var_1b0
                            rax_14, zmm7_1, zmm8, zmm9_1, zmm10, zmm11_1, zmm12, zmm15 =
                                sub_1416f9c90(&var_1b0, &var_160, &var_188, &var_170)
                            goto label_14166d92c
                        
                        int32_t var_2cc_1 = 0
                        rax_12 = 0
                        var_2e8_1 = (_mm_unpacklo_ps(zmm11_1, zmm11_1.q)).q
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                int64_t rbx_1 = sx.q(var_184)
                int64_t var_180
                int64_t r11_1 = sx.q(var_180.d)
                int64_t r9_3 = sx.q(var_180:4.d)
                zmm6_1 = var_2e8_1.d
                int64_t rsi_1 = rdi_1 * 3
                r12 = rbx_1 * 3
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r9_3 * 3
                int32_t rdx_5 = *(&var_160:8 + (r15_1 << 2))
                int32_t rcx_14 = *(&var_160:8 + (r14_1 << 2))
                int32_t r8_4 = *(&var_160:8 + (r12 << 2))
                zmm13 = var_2e8_1:4.d
                int32_t rax_16 = *(&var_160:8 + (rsi_1 << 2))
                zmm14 = rax_12
                var_160:0xc.q = *(&var_160 + (r15_1 << 2))
                var_140_1:4.q = *(&var_160 + (rsi_1 << 2))
                zmm0_1 = var_170[rbx_1]
                var_150_1:8.q = *(&var_160 + (r14_1 << 2))
                zmm1_1 = var_170[r11_1]
                var_160.q = *(&var_160 + (r12 << 2))
                zmm3_1 = var_170[rdi_1]
                int32_t rdi_2 = (&var_128)[r12]
                var_170[2] = var_170[r9_3].d
                zmm2_1 = zx.o(*(&var_130 + (r15_1 << 2)))
                var_170[0] = zmm0_1.d
                zmm0_1 = zx.o(*(&var_130 + (rsi_1 << 2)))
                var_170[1] = zmm1_1[0]
                zmm1_1 = zx.o(*(&var_130 + (r14_1 << 2)))
                var_170[3] = zmm3_1[0]
                zmm3_1 = zx.o(*(&var_130 + (r12 << 2)))
                var_150_1:4.d = rdx_5
                int32_t rdx_6 = (&var_128)[r15_1]
                var_140_1 = rcx_14
                int32_t rcx_15 = (&var_128)[r14_1]
                var_140_1 = rax_16
                int32_t rax_17 = (&var_128)[rsi_1]
                var_124_1.q = zmm2_1.q
                zmm2_1 = zx.o(*(&var_100 + (r15_1 << 2)))
                int128_t var_114_1
                var_114_1:8.q = zmm0_1.q
                zmm0_1 = zx.o(*(&var_100 + (rsi_1 << 2)))
                var_124_1:0xc.q = zmm1_1.q
                zmm1_1 = zx.o(*(&var_100 + (r14_1 << 2)))
                var_128 = rdi_2
                rdi = (&var_f8)[r12]
                var_130 = zmm3_1.q
                zmm3_1 = zx.o(*(&var_100 + (r12 << 2)))
                var_124_1:8.d = rdx_6
                int32_t rdx_7 = (&var_f8)[r15_1]
                var_114_1:4.d = rcx_15
                int32_t rcx_16 = (&var_f8)[r14_1]
                int32_t var_104_1 = rax_17
                int32_t rax_18 = (&var_f8)[rsi_1]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_1.q
                var_184.o = data_142e11d00
                var_f8 = rdi
                zmm2_1.d = zmm13.d f* zmm13[0]
                var_160:8.d = r8_4
                var_f4_1:0xc.q = zmm1_1.q
                zmm0_1.d = zmm6_1.d f* zmm6_1.d
                var_f4_1:8.d = rdx_7
                zmm14[0] = zmm14[0] * zmm14[0]
                var_e4_1:4.d = rcx_16
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                var_100 = zmm3_1.q
                int32_t var_d4_1 = rax_18
                zmm2_1.d = zmm2_1.d f+ zmm14[0]
                zmm2_1.d f- zmm15[0]
                rdi.b = zmm2_1.d f< zmm15[0]
                var_318 = zmm2_1.d
                r12.b = zmm2_1.d f>= zmm10[0]
            
            result = zx.d(arg9)
            zmm15 = 0x80000000
            
            if (rdi.b == 0 && r12.b == 0)
                rbx = arg2
                rsi = arg4
                rcx_2 = var_2d8
                rdx_1 = var_348
                continue
        
        zmm10 = var_338[1]
        zmm5_1 = var_338[0]
        goto label_14166dd16
__security_check_cookie(rax_1 ^ &var_388)
return result
