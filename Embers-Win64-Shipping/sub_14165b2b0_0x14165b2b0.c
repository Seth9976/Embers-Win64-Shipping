// 函数: sub_14165b2b0
// 地址: 0x14165b2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358
float zmm3[0x4] = *arg3
float zmm0[0x4] = arg3[1]
float var_258 = zmm3[0]
uint128_t* rsi = arg4
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float var_2f8[0x4] = zmm0
int64_t var_218 = arg1
int128_t var_12c_1
__builtin_memset(&var_12c_1, 0, 0x24)
int128_t var_fc_1
__builtin_memset(&var_fc_1, 0, 0x24)
int32_t var_190 = 0
float var_178[0x4] = data_142d3f7e0
float var_24c = temp0[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float var_254 = temp0_1[0]
int128_t var_168
__builtin_memset(&var_168, 0, 0x24)
int64_t var_1e8 = arg2
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm3 ^= 0x80000000
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_3[0] = (temp0_1 ^ 0x80000000)[0]
float var_250 = temp0_2[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = (temp0_2 ^ 0x80000000)[0]
int32_t var_18c
__builtin_memset(&var_18c, 0, 0x10)
uint64_t r12 = zx.q(var_190)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0[0]
float var_2a8[0x4]
int128_t* var_1e0 = &var_2a8
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
var_2a8 = temp0_6
var_2a8 = temp0_6
zmm0 = *(arg1 + 0x28)
zmm0[0] = zmm0[0] f* *arg10
void* rcx = *(arg1 + 0x10)
float zmm1[0x4] = *(arg1 + 0x30)
zmm1[0] = zmm1[0] f* *(arg10 + 8)
int32_t* var_1d8 = &var_258
float var_310 = zmm0[0]
zmm0 = *(arg1 + 0x2c)
zmm0[0] = zmm0[0] f* *(arg10 + 4)
float var_308 = zmm1[0]
float var_30c = zmm0[0]
float var_2c8
int128_t zmm9 = sub_141758e70(rcx, &var_2c8, &var_310, zx.o(0))
float zmm6[0x4] = var_2c8
int128_t zmm1_1 = *(arg10 + 4)
zmm6[0] = zmm6[0] f* *(arg1 + 0x28)
int32_t var_2c4
int64_t zmm7
zmm7.d = var_2c4.d f* *(arg1 + 0x2c)
float var_2c0
float zmm8 = var_2c0 f* *(arg1 + 0x30)
float temp0_7[0x4] = _mm_unpacklo_ps(zmm6, zmm7)
int64_t var_298 = temp0_7.q
int64_t var_138 = temp0_7.q
var_310 = (*arg10 ^ zmm9)[0]
int32_t var_30c_1 = (zmm1_1 ^ zmm9).d
float var_308_1 = (*(arg10 + 8) ^ zmm9)[0]
float var_130 = zmm8
float var_2b8
float* rax_4
uint128_t zmm6_1
uint128_t zmm7_1
float zmm8_1
float zmm12_1[0x4]
rax_4, zmm6_1, zmm7_1, zmm8_1, zmm12_1 = sub_14170bcf0(&var_1e8, &var_2b8, &var_310)
uint128_t zmm2_1 = var_2f8[1]
uint128_t zmm13 = zx.o(0)
float zmm3_1[0x4] = var_2f8[2]
uint128_t zmm15 = zmm2_1
uint128_t zmm5 = var_2f8[0]
uint128_t zmm9_1 = zmm3_1
uint128_t zmm1_2 = zx.o(*rax_4)
float rcx_2 = rax_4[2]
zmm6_1.d = zmm6_1.d f- zmm1_2.d
int32_t var_284 = zmm2_1.d
uint32_t result = zx.d(arg9)
uint128_t zmm14 = zmm5
zmm7_1.d = zmm7_1.d f- _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55).d
int64_t var_108 = zmm1_2.q
uint128_t zmm10
zmm10.d = zmm5.d f- zmm6_1.d
uint64_t var_268 = zmm1_2.q
int32_t var_288 = zmm5.d
zmm6_1.d = zmm2_1.d f- zmm7_1.d
float var_300 = zmm3_1[0]
float result_2 = zmm3_1[0]
float var_100 = rcx_2
zmm7_1.d = zmm3_1.d f- (zmm8_1 - rcx_2)
uint128_t zmm0_2
zmm0_2.d = zmm10.d f* zmm10.d
var_2c8.q = 0
float var_2c0_1 = 1f
zmm2_1.d = zmm6_1.d f* zmm6_1.d
zmm1_2.d = zmm7_1.d f* zmm7_1.d
zmm2_1.d = zmm2_1.d f+ zmm0_2.d
zmm2_1.d = zmm2_1.d f+ zmm1_2.d
int64_t rbx

if (zmm2_1.d f>= 9.99999997e-07f || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rbx.b = 0
else
    rbx.b = 1

int32_t rdi_1 = 0
int32_t var_2e8 = 0x7f7fffff
char var_317 = 0
char var_318 = rbx.b
float var_2e0
int64_t var_240
float result_1

if (rbx.b != 0)
label_14165c07c:
    bool cond:0_1 = zmm13.d f<= zmm12_1[0]
    int32_t* rbx_1 = arg6
    *rbx_1 = zmm13.d
    
    if (not(cond:0_1))
        *arg8 = var_2c8.q
        arg8[1].d = var_2c0_1
        
        if (r12.d s> 0)
            int128_t* rcx_17 = &var_178
            uint64_t i_2 = zx.q(r12.d)
            int32_t* rax_22 = &var_100
            uint64_t i
            
            do
                zmm2_1 = *rcx_17
                rcx_17 += 4
                zmm0_2.d = zmm2_1.d f* rax_22[-2]
                zmm1_2.d = zmm2_1.d f* rax_22[-1]
                zmm2_1.d = zmm2_1.d f* *rax_22
                rax_22 = &rax_22[3]
                zmm12_1[0] = zmm12_1[0] f+ zmm0_2.d
                zmm12_1[0] = zmm12_1[0] f+ zmm1_2.d
                zmm12_1[0] = zmm12_1[0] f+ zmm2_1.d
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        zmm0_2.d = zmm13.d f* *arg4
        zmm1_2.d = zmm13.d f* arg4[1]
        zmm13.d = zmm13.d f* arg4[2]
        zmm0_2.d = zmm0_2.d f+ zmm5.d
        zmm1_2.d = zmm1_2.d f+ var_2f8[1]
        zmm13.d = zmm13.d f+ var_2f8[2]
        zmm0_2.d = zmm0_2.d f+ zmm12_1[0]
        zmm1_2.d = zmm1_2.d f+ zmm12_1[0]
        zmm13.d = zmm13.d f+ zmm12_1[0]
        *arg7 = (_mm_unpacklo_ps(zmm0_2, zmm1_2.q)).q
        arg7[1].d = zmm13.d
    else if (result.b != 0)
        uint64_t i_3 = 0
        var_178[0].q = 0
        var_178[2].q = 0
        var_2f8[0].q = 0
        var_2f8[2].q = 0
        sub_14083ad30(&var_178, 8)
        
        if (var_2f8[3] s< 8)
            sub_14083ad30(&var_2f8, 8)
        
        float rax_30
        uint128_t zmm0_3
        
        if (rdi_1 == 0)
            int32_t var_2b0_3 = 0x3f800000
            rax_30 = 1f
            zmm0_3 = _mm_unpacklo_ps(zmm12_1, zmm12_1[0].q)
        label_14165c328:
            zmm2_1 = var_138:4.d
            zmm1_2 = var_138.d
            *rbx_1 = i_3.d
            *arg8 = zmm0_3.q
            arg8[1].d = rax_30
            result = var_130.d
            *arg7 = (_mm_unpacklo_ps(zmm1_2, zmm2_1.q)).q
        else
            if (r12.d s> 0)
                int64_t rdi_6 = 0
                i_3 = zx.q(r12.d)
                uint64_t i_1
                
                do
                    int64_t rbx_2 = sx.q(var_178[2])
                    int32_t rax_24 = (rbx_2 + 1).d
                    var_178[2] = rax_24
                    
                    if (rax_24 s> var_178[3])
                        sub_14083a7e0(&var_178)
                    
                    int64_t rcx_21 = var_178[0].q
                    int64_t rdx_11 = rbx_2 * 3
                    int32_t rax_25 = *(&var_130 + rdi_6)
                    zmm1_2.d = zmm15.d f+ *(&var_108:4 + rdi_6)
                    *(rcx_21 + (rdx_11 << 2)) = *(&var_138 + rdi_6)
                    zmm0_3.d = zmm14.d f+ *(&var_108 + rdi_6)
                    *(rcx_21 + (rdx_11 << 2) + 8) = rax_25
                    int64_t rbx_3 = sx.q(var_2f8[2])
                    int32_t var_30c_3 = zmm1_2.d
                    var_310 = zmm0_3.d
                    zmm0_3.d = zmm9_1.d f+ *(&var_100 + rdi_6)
                    int32_t rax_26 = (rbx_3 + 1).d
                    var_2f8[2] = rax_26
                    var_308_1 = zmm0_3.d
                    
                    if (rax_26 s> var_2f8[3])
                        sub_14083a7e0(&var_2f8)
                    
                    int64_t rcx_23 = var_2f8[0].q
                    int64_t rdx_13 = rbx_3 * 3
                    rdi_6 += 0xc
                    *(rcx_23 + (rdx_13 << 2)) = var_310.q
                    *(rcx_23 + (rdx_13 << 2) + 8) = var_308_1
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
                rbx_1 = arg6
            
            int64_t var_188_1 = arg2
            var_190.q = &var_2a8
            int128_t* var_180_1 = arg3
            int32_t rax_29 = sub_1415714c0(&var_178, &var_2f8, &var_218, &var_190, &var_2e0, 
                &var_310, &var_240, &var_1e8)
            zmm0_3 = zx.o(var_310.q)
            rax_30 = var_308_1
            
            if (rax_29 == 2)
                goto label_14165c328
            
            *arg8 = zmm0_3.q
            arg8[1].d = rax_30
            result = result_1
            *rbx_1 = (var_2e0 ^ data_142d3f780).d
            *arg7 = var_240
        int64_t rcx_25 = var_2f8[0].q
        arg7[1].d = result
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        int64_t rcx_26 = var_178[0].q
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
    
    result.b = 1
else
    while (true)
        int32_t rax_5 = rdi_1
        rdi_1 += 1
        
        if (rax_5 s>= 0x20)
            zmm9_1 = var_300
            result = zx.d(arg9)
        else
            int64_t rdi_2 = var_218
            zmm3_1 = zx.o(0)
            zmm2_1.d = zmm6_1.d f* zmm6_1.d
            zmm0_2.d = zmm10.d f* zmm10.d
            void* rcx_3 = *(rdi_2 + 0x10)
            zmm1_2.d = zmm7_1.d f* zmm7_1.d
            zmm2_1.d = zmm2_1.d f+ zmm0_2.d
            zmm2_1.d = zmm2_1.d f+ zmm1_2.d
            zmm3_1[0] = zmm2_1.d
            float temp0_9[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
            zmm3_1[0] = zmm3_1[0] * 0.5f
            zmm0_2.d = temp0_9.d f* temp0_9[0]
            zmm1_2.d = zmm3_1.d f* zmm0_2.d
            zmm2_1.d = 0.5f f- zmm1_2.d
            zmm0_2.d = temp0_9.d f* zmm2_1.d
            temp0_9[0] = temp0_9[0] f+ zmm0_2.d
            zmm1_2.d = temp0_9.d f* temp0_9[0]
            zmm3_1[0] = zmm3_1[0] f* zmm1_2.d
            zmm5.d = 0.5f - zmm3_1[0]
            zmm0_2.d = temp0_9.d f* zmm5.d
            temp0_9[0] = temp0_9[0] f+ zmm0_2.d
            zmm10.d = zmm10.d f* temp0_9[0]
            zmm6_1.d = zmm6_1.d f* temp0_9[0]
            zmm7_1.d = zmm7_1.d f* temp0_9[0]
            zmm0_2.d = zmm10.d f* *(rdi_2 + 0x28)
            zmm1_2.d = zmm6_1.d f* *(rdi_2 + 0x2c)
            int32_t var_208 = zmm0_2.d
            zmm0_2.d = zmm7_1.d f* *(rdi_2 + 0x30)
            var_2e0 = temp0_9[0]
            int32_t var_248_1 = zmm10.d
            int32_t var_200_1 = zmm0_2.d
            int32_t var_228_1 = zmm6_1.d
            var_2e0 = zmm7_1.d
            int32_t var_204_1 = zmm1_2.d
            float var_1fc
            zmm6_1, zmm7_1, zmm10 = sub_141758e70(rcx_3, &var_1fc, &var_208, zmm12_1)
            zmm0_2.d = var_1fc.d f* *(rdi_2 + 0x28)
            uint128_t zmm8_2 = var_2a8[2]
            zmm9_1 = var_2a8[1]
            int32_t var_1f8
            zmm1_2.d = var_1f8.d f* *(rdi_2 + 0x2c)
            int32_t var_1f4
            zmm2_1.d = var_1f4.d f* *(rdi_2 + 0x30)
            zmm3_1 = var_2a8[0]
            int32_t var_230_1 = zmm0_2.d
            var_298.d = zmm0_2.d
            zmm7_1 ^= 0x80000000
            int32_t var_22c_1 = zmm1_2.d
            uint128_t zmm11_1 = zmm10 ^ 0x80000000
            int32_t var_2d0_1 = zmm2_1.d
            float zmm4_1[0x4] = zmm6_1 ^ 0x80000000
            var_298:4.d = zmm1_2.d
            int32_t var_290_1 = zmm2_1.d
            zmm0_2.d = zmm4_1.d f* zmm8_2.d
            zmm10.d = zmm7_1.d f* zmm9_1.d
            zmm5.d = zmm11_1.d f* zmm8_2.d
            zmm10.d = zmm10.d f- zmm0_2.d
            zmm2_1 = var_2a8[3]
            zmm10.d = zmm10.d f+ zmm10.d
            zmm0_2.d = zmm7_1.d f* zmm3_1[0]
            zmm6_1.d = zmm4_1.d f* zmm3_1[0]
            zmm5.d = zmm5.d f- zmm0_2.d
            zmm1_2.d = zmm10.d f* zmm8_2.d
            zmm0_2.d = zmm11_1.d f* zmm9_1.d
            zmm5.d = zmm5.d f+ zmm5.d
            zmm6_1.d = zmm6_1.d f- zmm0_2.d
            zmm6_1.d = zmm6_1.d f+ zmm6_1.d
            zmm0_2.d = zmm6_1.d f* zmm3_1[0]
            zmm1_2.d = zmm1_2.d f- zmm0_2.d
            zmm0_2.d = zmm10.d f* zmm9_1.d
            zmm10.d = zmm10.d f* zmm2_1.d
            int32_t var_2fc_1 = zmm1_2.d
            zmm1_2.d = zmm5.d f* zmm2_1.d
            zmm10.d = zmm10.d f+ zmm11_1.d
            zmm1_2.d = zmm1_2.d f+ zmm4_1[0]
            zmm4_1 = var_2fc_1
            zmm4_1[0] = zmm4_1[0] f+ zmm1_2.d
            zmm1_2.d = zmm5.d f* zmm3_1[0]
            zmm5.d = zmm5.d f* zmm8_2.d
            zmm1_2.d = zmm1_2.d f- zmm0_2.d
            int32_t var_2fc_2 = zmm1_2.d
            zmm1_2 = zmm6_1
            zmm6_1.d = zmm6_1.d f* zmm9_1.d
            zmm1_2.d = zmm1_2.d f* zmm2_1.d
            zmm6_1.d = zmm6_1.d f- zmm5.d
            zmm1_2.d = zmm1_2.d f+ zmm7_1.d
            zmm6_1.d = zmm6_1.d f+ zmm10.d
            zmm0_2.d = var_2fc_2.d f+ zmm1_2.d
            
            if (zmm6_1.d f>= zmm12_1[0])
                zmm1_2 = *(arg2 + 0x1c)
            else
                zmm1_2 = *(arg2 + 0x10)
            
            int32_t var_2fc_3 = zmm1_2.d
            
            if (zmm4_1[0] >= zmm12_1[0])
                zmm11_1 = *(arg2 + 0x20)
            else
                zmm11_1 = *(arg2 + 0x14)
            
            if (zmm0_2.d f>= zmm12_1[0])
                zmm10 = *(arg2 + 0x24)
            else
                zmm10 = *(arg2 + 0x18)
            
            zmm6_1 = var_254
            zmm9_1 = var_250
            zmm7_1 = var_258
            zmm2_1 = var_24c
            zmm4_1 = zmm9_1
            zmm0_2.d = zmm9_1.d f* zmm11_1.d
            zmm3_1 = zmm7_1
            zmm4_1[0] = zmm4_1[0] f* zmm1_2.d
            zmm8_2 = zmm6_1
            zmm3_1[0] = zmm3_1[0] f* zmm11_1.d
            (&var_18c)[sx.q(r12.d)] = r12.d
            r12 = sx.q(var_190)
            zmm5.d = zmm6_1.d f* zmm10.d
            uint64_t rcx_4 = r12 * 3
            zmm5.d = zmm5.d f- zmm0_2.d
            zmm0_2.d = zmm7_1.d f* zmm10.d
            zmm4_1[0] = zmm4_1[0] f- zmm0_2.d
            zmm0_2.d = zmm6_1.d f* zmm1_2.d
            zmm5.d = zmm5.d f+ zmm5.d
            zmm3_1[0] = zmm3_1[0] f- zmm0_2.d
            zmm0_2 = zmm9_1
            zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
            zmm1_2.d = zmm2_1.d f* zmm5.d
            zmm9_1.d = zmm9_1.d f* zmm5.d
            zmm1_2.d = zmm1_2.d f+ var_2fc_3
            zmm0_2.d = zmm0_2.d f* zmm4_1[0]
            zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
            zmm6_1.d = zmm6_1.d f* zmm5.d
            zmm5 = var_248_1
            zmm8_2.d = zmm8_2.d f* zmm3_1[0]
            zmm8_2.d = zmm8_2.d f- zmm0_2.d
            zmm0_2.d = zmm7_1.d f* zmm3_1[0]
            zmm7_1.d = zmm7_1.d f* zmm4_1[0]
            zmm9_1.d = zmm9_1.d f- zmm0_2.d
            zmm8_2.d = zmm8_2.d f+ zmm1_2.d
            zmm1_2 = zmm2_1
            zmm2_1.d = zmm2_1.d f* zmm3_1[0]
            zmm7_1.d = zmm7_1.d f- zmm6_1.d
            zmm6_1 = var_228_1
            zmm3_1 = zmm14
            zmm1_2.d = zmm1_2.d f* zmm4_1[0]
            zmm4_1 = zmm15
            zmm2_1.d = zmm2_1.d f+ zmm10.d
            zmm10.d = var_230_1.d f- zmm8_2.d
            zmm1_2.d = zmm1_2.d f+ zmm11_1.d
            zmm7_1.d = zmm7_1.d f+ zmm2_1.d
            zmm3_1[0] = zmm3_1[0] f- zmm10.d
            zmm9_1.d = zmm9_1.d f+ zmm1_2.d
            zmm0_2.d = var_2d0_1.d f- zmm7_1.d
            uint32_t var_1c8_1 = zmm7_1.d
            var_310 = zmm3_1[0]
            zmm3_1[0] = zmm3_1[0] f* zmm5.d
            zmm11_1.d = var_22c_1.d f- zmm9_1.d
            zmm2_1.d = var_300.d f- zmm0_2.d
            int32_t var_2d0_2 = zmm0_2.d
            zmm4_1[0] = zmm4_1[0] f- zmm11_1.d
            *(&var_138 + (rcx_4 << 2)) = var_298
            (&var_130)[rcx_4] = var_290_1
            *(&var_108 + (rcx_4 << 2)) = (_mm_unpacklo_ps(zmm8_2, zmm9_1.q)).q
            float var_30c_2 = zmm4_1[0]
            zmm4_1[0] = zmm4_1[0] f* zmm6_1.d
            (&var_100)[rcx_4] = var_1c8_1
            var_308_1 = zmm2_1.d
            zmm4_1[0] = zmm4_1[0] + zmm3_1[0]
            zmm3_1 = var_2e0
            zmm2_1.d = zmm2_1.d f* zmm3_1[0]
            zmm4_1[0] = zmm4_1[0] f+ zmm2_1.d
            int128_t var_158_1
            int32_t var_148_1
            
            if (zmm4_1[0] <= zmm12_1[0])
                r12 = zx.q(r12.d + 1)
                *(&var_168 + (rcx_4 << 2)) = var_310.q
                *(&var_168:8 + (rcx_4 << 2)) = var_308_1
                var_190 = r12.d
            label_14165bc88:
                zmm8_2 = var_2e8
                zmm9_1 = var_300
                
                if (var_318 == 0)
                    zmm11_1 = 0x358637bd
                else
                    zmm11_1 = 0x358637bd
                    
                    if (not(zmm4_1[0] < zmm12_1[0]))
                        zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
                        zmm4_1[0] = zmm4_1[0] + 9.99999997e-07f
                        rbx.b = zmm4_1[0] f>= zmm8_2.d
            else
                zmm7_1 = *(rsi + 4)
                zmm8_2 = *rsi
                zmm9_1 = *(rsi + 8)
                zmm2_1.d = zmm5.d f* zmm8_2.d
                zmm0_2.d = zmm6_1.d f* zmm7_1.d
                zmm1_2.d = zmm3_1.d f* zmm9_1.d
                zmm2_1.d = zmm2_1.d f+ zmm0_2.d
                zmm2_1.d = zmm2_1.d f+ zmm1_2.d
                
                if (zmm2_1.d f>= zmm12_1[0])
                    result.b = 0
                    break
                
                zmm1_2 = zmm13
                zmm0_2.d = zmm4_1.d f/ zmm2_1.d
                zmm13.d = zmm13.d f- zmm0_2.d
                
                if (zmm13.d f<= zmm1_2.d)
                    goto label_14165bc88
                
                if (zmm13.d f> arg5)
                    result.b = 0
                    break
                
                zmm1_2 = zx.o(var_288.q)
                zmm14 = zmm8_2
                zmm8_2 = 0x7f7fffff
                zmm0_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
                r12 = zx.q(r12.d + 1)
                var_240 = zmm1_2.q
                zmm14.d = zmm14.d f* zmm13.d
                result_1 = result_2
                zmm15.d = zmm7_1.d f* zmm13.d
                var_190 = r12.d
                zmm14.d = zmm14.d f+ var_2f8[0]
                zmm9_1.d = zmm9_1.d f* zmm13.d
                var_318 = 0
                zmm15.d = zmm15.d f+ var_2f8[1]
                var_2c0_1 = zmm3_1[0]
                zmm9_1.d = zmm9_1.d f+ var_2f8[2]
                zmm3_1 = zmm14
                var_288 = zmm14.d
                zmm3_1[0] = zmm3_1[0] f- zmm1_2.d
                var_2c8 = zmm5.d
                zmm1_2 = var_168:4.d
                zmm4_1 = zmm15
                zmm4_1[0] = zmm4_1[0] f- zmm0_2.d
                int32_t var_284_1 = zmm15.d
                zmm2_1.d = zmm9_1.d f- result_1
                zmm0_2.d = var_168.d.d f+ zmm3_1[0]
                var_300 = zmm9_1.d
                result_2 = zmm9_1.d
                zmm1_2.d = zmm1_2.d f+ zmm4_1[0]
                int32_t var_2c4_1 = zmm6_1.d
                var_2e8 = 0x7f7fffff
                var_168.d = zmm0_2.d
                zmm0_2.d = var_168:8.d.d f+ zmm2_1.d
                var_168:4.d = zmm1_2.d
                zmm1_2.d = var_168:0xc.d.d f+ zmm3_1[0]
                var_168:8.d = zmm0_2.d
                var_168:0xc.d = zmm1_2.d
                zmm0_2.d = var_158_1.d.d f+ zmm4_1[0]
                zmm1_2.d = var_158_1:4.d.d f+ zmm2_1.d
                var_158_1.d = zmm0_2.d
                zmm0_2 = var_158_1:8.d
                var_158_1:4.d = zmm1_2.d
                zmm0_2.d = zmm0_2.d f+ zmm3_1[0]
                zmm1_2.d = var_158_1:0xc.d.d f+ zmm4_1[0]
                var_158_1:8.d = zmm0_2.d
                zmm0_2.d = var_148_1.d f+ zmm2_1.d
                var_158_1:0xc.d = zmm1_2.d
                zmm1_2.d = zmm14.d f- zmm10.d
                zmm2_1.d = zmm15.d f- zmm11_1.d
                var_148_1 = zmm0_2.d
                zmm0_2.d = zmm9_1.d f- var_2d0_2
                *(&var_168 + (rcx_4 << 2)) = (_mm_unpacklo_ps(zmm1_2, zmm2_1.q)).q
                *(&var_168:8 + (rcx_4 << 2)) = zmm0_2.d
                zmm11_1 = 0x358637bd
            
            uint32_t rcx_15
            
            if (rbx.b != 0)
                int64_t* rax_19
                rax_19, zmm9_1, zmm12_1, zmm13, zmm14, zmm15 =
                    sub_1416f4530(&var_1e8, &var_168, &var_190, &var_178, &var_138, &var_108)
                r12 = zx.q(var_190)
                rcx_15 = zx.d(var_317)
                zmm1_2 = zx.o(*rax_19)
                int32_t rax_20 = rax_19[1].d
                zmm6_1 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
                zmm7_1 = rax_20
                zmm10 = zmm1_2.d
            else
                int32_t rcx_5 = r12.d
                int32_t rax_10
                
                if (rcx_5 == 1)
                    int64_t rax_15 = sx.q(var_18c)
                    int64_t rcx_12 = rax_15 * 3
                    var_178[rax_15] = 0x3f800000
                    zmm0_2 = zx.o(*(&var_168 + (rcx_12 << 2)))
                    rax_10 = *(&var_168:8 + (rcx_12 << 2))
                else if (rcx_5 == 2)
                    uint64_t var_1ac
                    uint64_t* rax_14
                    rax_14, zmm8_2, zmm9_1 =
                        sub_1416e69d0(&var_1ac, &var_168, &var_18c, &var_190, &var_178)
                    r12 = zx.q(var_190)
                    zmm0_2 = zx.o(*rax_14)
                    rax_10 = rax_14[1].d
                else if (rcx_5 == 3)
                    void var_1a0
                    uint64_t* rax_13
                    rax_13, zmm8_2, zmm9_1, zmm11_1, zmm12_1, zmm13, zmm14, zmm15 =
                        sub_1416fa750(&var_1a0, &var_168, &var_190, &var_178)
                    r12 = zx.q(var_190)
                    zmm0_2 = zx.o(*rax_13)
                    rax_10 = rax_13[1].d
                else if (rcx_5 == 4)
                    uint64_t var_1b8
                    uint64_t* rax_12
                    rax_12, zmm8_2, zmm9_1, zmm11_1, zmm12_1, zmm13, zmm14, zmm15 =
                        sub_1416f9c90(&var_1b8, &var_168, &var_190, &var_178)
                    r12 = zx.q(var_190)
                    zmm0_2 = zx.o(*rax_12)
                    rax_10 = rax_12[1].d
                else
                    int32_t var_2b0_1 = 0
                    rax_10 = 0
                    zmm0_2 = _mm_unpacklo_ps(zmm12_1, zmm12_1[0].q)
                
                int32_t var_180
                int64_t rdi_3 = sx.q(var_180)
                int64_t r11_1 = sx.q(var_18c)
                int64_t var_188
                int64_t r10_1 = sx.q(var_188.d)
                int64_t r9_3 = sx.q(var_188:4.d)
                rbx = rdi_3 * 3
                uint64_t var_2dc_1 = zmm0_2.q
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                int64_t rsi_1 = r9_3 * 3
                int32_t rdx_6 = *(&var_168:8 + (r14_1 << 2))
                int32_t rcx_13 = *(&var_168:8 + (rsi_1 << 2))
                int32_t r8_6 = *(&var_168:8 + (r15_1 << 2))
                zmm10 = var_2dc_1.d
                zmm6_1 = var_2dc_1:4.d
                int32_t rax_16 = *(&var_168:8 + (rbx << 2))
                zmm7_1 = rax_10
                var_168:0xc.q = *(&var_168 + (r14_1 << 2))
                var_148_1:4.q = *(&var_168 + (rbx << 2))
                zmm0_2 = var_178[r11_1]
                var_158_1:8.q = *(&var_168 + (rsi_1 << 2))
                zmm1_2 = var_178[r10_1]
                var_168.q = *(&var_168 + (r15_1 << 2))
                zmm3_1 = var_178[rdi_3]
                float rdi_4 = (&var_130)[r15_1]
                var_178[2] = var_178[r9_3].d
                zmm2_1 = zx.o(*(&var_138 + (r14_1 << 2)))
                var_178[0] = zmm0_2.d
                zmm0_2 = zx.o(*(&var_138 + (rbx << 2)))
                var_178[1] = zmm1_2.d
                zmm1_2 = zx.o(*(&var_138 + (rsi_1 << 2)))
                var_178[3] = zmm3_1[0]
                var_158_1:4.d = rdx_6
                int32_t rdx_7 = (&var_130)[r14_1]
                var_148_1 = rcx_13
                int32_t rcx_14 = (&var_130)[rsi_1]
                var_148_1 = rax_16
                int32_t rax_17 = (&var_130)[rbx]
                var_12c_1.q = zmm2_1.q
                zmm2_1 = zx.o(*(&var_108 + (r14_1 << 2)))
                int128_t var_11c_1
                var_11c_1:8.q = zmm0_2.q
                zmm0_2 = zx.o(*(&var_108 + (rbx << 2)))
                var_12c_1:0xc.q = zmm1_2.q
                zmm1_2 = zx.o(*(&var_108 + (rsi_1 << 2)))
                var_138 = *(&var_138 + (r15_1 << 2))
                zmm3_1 = zx.o(*(&var_108 + (r15_1 << 2)))
                var_130 = rdi_4
                var_12c_1:8.d = rdx_7
                int32_t rdx_8 = (&var_100)[r14_1]
                var_11c_1:4.d = rcx_14
                rcx_15 = (&var_100)[rsi_1]
                int32_t var_10c_1 = rax_17
                int32_t rax_18 = (&var_100)[rbx]
                var_fc_1.q = zmm2_1.q
                int128_t var_ec_1
                var_ec_1:8.q = zmm0_2.q
                var_18c.o = data_142e11d00
                var_168:8.d = r8_6
                zmm2_1.d = zmm6_1.d f* zmm6_1.d
                var_100 = (&var_100)[r15_1]
                var_fc_1:0xc.q = zmm1_2.q
                zmm0_2.d = zmm10.d f* zmm10.d
                var_fc_1:8.d = rdx_8
                zmm1_2.d = zmm7_1.d f* zmm7_1.d
                var_ec_1:4.d = rcx_15
                zmm2_1.d = zmm2_1.d f+ zmm0_2.d
                var_108 = zmm3_1.q
                int32_t var_dc_1 = rax_18
                zmm2_1.d = zmm2_1.d f+ zmm1_2.d
                zmm2_1.d f- zmm11_1.d
                rbx.b = zmm2_1.d f< zmm11_1.d
                var_2e8 = zmm2_1.d
                rcx_15.b = zmm2_1.d f>= zmm8_2.d
                var_317 = rcx_15.b
            
            result = zx.d(arg9)
            
            if (rbx.b == 0 && rcx_15.b == 0)
                rsi = arg4
                continue
        
        zmm5 = var_2f8[0]
        goto label_14165c07c
__security_check_cookie(rax_1 ^ &var_358)
return result
