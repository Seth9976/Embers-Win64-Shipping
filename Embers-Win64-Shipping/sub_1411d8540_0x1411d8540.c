// 函数: sub_1411d8540
// 地址: 0x1411d8540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
arg1[4] = 1
__builtin_memset(&arg1[6], 0, 0x18)
int32_t rax_2 = data_1439b60f4
int32_t rdx

if (rax_2 s>= 1)
    rdx = 4
    
    if (rax_2 s< 4)
        rdx = rax_2
else
    rdx = 1

uint128_t zmm1 = data_142d3f670
arg1[4] = rdx
*arg1 = *arg5
arg1[1] = arg5[1]
int64_t rcx_1 = *arg5
int32_t rcx_2 = rcx_1.d * rdx
uint128_t var_18c = zmm1
int64_t var_308
var_308:4.d = rcx_1:4.d * rdx
var_308.d = rcx_2
arg1[3] = (var_308 u>> 0x20).d
arg1[2] = rcx_2
wchar16 const* const var_278 = u"UnknownTexture"
int32_t rax_9 = arg1[3]
int32_t var_2a4 = rcx_2
uint128_t temp0 = _mm_bsrli_si128(zmm1, 0xc)
int32_t var_2a0 = rax_9
int32_t var_298 = 1
int32_t var_294 = 0x10000
int16_t var_280 = 0x100
int16_t var_270 = 1
char var_26e = 0
int32_t var_29c = 0
int64_t var_28c = 0x1c
int16_t var_290 = 1
int32_t var_284 = 0x10009
int128_t var_2b8 = 1.o
int32_t var_2a8 = temp0.d
void*** rax_10 = sub_141188e50(arg2, &var_2b8, u"HairViewTransmittanceTexture", 0)
*(arg1 + 0x18) = rax_10
int16_t var_2f0 = 0
void*** rax_11 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)
void*** var_2e8 = rax_11

if (rax_11 == 0)
    var_2e8 = nullptr
else
    rax_11[1] = rax_10[1]
    rax_11[2] = 0
    *(rax_11 + 0x18) = rax_10.o
    *rax_11 = &data_142f285c0

uint128_t zmm1_1 = data_142d3f670
wchar16 const* const var_228 = u"UnknownTexture"
uint128_t var_174 = zmm1_1
int32_t var_254 = arg1[2]
int32_t rax_14 = arg1[3]
uint128_t temp0_1 = _mm_bsrli_si128(zmm1_1, 0xc)
int32_t var_248 = 1
int32_t var_244 = 0x10000
int128_t var_268 = 1.o
int16_t var_230 = 0x100
int16_t var_220 = 1
char var_21e = 0
int32_t var_250 = rax_14
int32_t var_24c = 0
int64_t var_23c = 0x1c
int16_t var_240 = 1
int32_t var_234 = 0x10009
int32_t var_258 = temp0_1.d
void*** rax_15 = sub_141188e50(arg2, &var_268, u"HairDepthTexture", 0)
*(arg1 + 0x20) = rax_15
int16_t var_2f0_1 = 0
void*** rax_16 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)
void*** var_2d0 = rax_16
void*** r12 = rax_16

if (rax_16 == 0)
    r12 = nullptr
    var_2d0 = nullptr
else
    r12[1] = rax_15[1]
    *r12 = &data_142f285c0
    r12[2] = 0
    *(r12 + 0x18) = rax_15.o

uint128_t zmm1_2 = data_142d3f670
wchar16 const* const var_1d8 = u"UnknownTexture"
int32_t var_204 = arg1[2]
uint128_t var_15c = zmm1_2
int32_t var_200 = arg1[3]
uint128_t temp0_2 = _mm_bsrli_si128(zmm1_2, 0xc)
int32_t var_1fc = 0
int32_t var_1f8 = 1
int32_t var_1f4 = 0x10000
int16_t var_1e0 = 0x100
int16_t var_1d0 = 1
char var_1ce = 0
int64_t var_1ec = 0x44
int16_t var_1f0 = 1
int32_t var_1e4 = 0x10009
int128_t var_218 = 1.o
int32_t var_208 = temp0_2.d
void*** rax_20 = sub_141188e50(arg2, &var_218, u"HairVisibilityTexture", 0)
*(arg1 + 0x28) = rax_20
int16_t var_2f0_2 = 0
void*** rax_21 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)
void*** var_2e0 = rax_21
void*** rsi_1 = rax_21

if (rax_21 == 0)
    rsi_1 = rax_21
    var_2e0 = rax_21
else
    rsi_1[1] = rax_20[1]
    rsi_1[2] = 0
    *rsi_1 = &data_142f285c0
    *(rsi_1 + 0x18) = rax_20.o

int64_t var_b8 = 0
int64_t var_b0 = 0
sub_141996630(arg2, var_2e8, &var_b8)
sub_141996630(arg2, r12, &var_b8)
sub_141996630(arg2, rsi_1, &var_b8)
void* r8_3 = *(arg3 + 0x15b0)
int128_t zmm6
int128_t zmm7
zmm6, zmm7 = sub_1411f3290(arg3, 0, r8_3 + 0xdc0, r8_3 + 0xdd0)
int64_t* rcx_10 = data_143f0f180
int64_t* var_2d8
(*(*rcx_10 + 0xf8))(rcx_10, &var_2d8, *(arg3 + 0x15b0), &data_143f55750, 1, 1, var_308)
int64_t* rbx_3 = var_2d8
int64_t* var_308_1 = rbx_3

if (rbx_3 != 0)
    rbx_3[1].d += 1
    int64_t* rbx_4 = var_2d8
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            char rax_25
            
            if (rbx_4[2].b == 0 && data_143f0f1d0 == 0)
                rax_25 = sub_1405949a0()
            
            if (rbx_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_25 != 0))
                (**rbx_4)(rbx_4, 1)
            else
                bool z_1
                
                if (0 == *(rbx_4 + 0xc))
                    *(rbx_4 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_4 + 0xc)
                    z_1 = false
                
                if (z_1)
                    zmm6 = sub_1405dcc10(&data_143f02390, rbx_4)
    
    rbx_3 = var_308_1

void* rax_28 = *(arg3 + 0x15a8)
int32_t var_300

if (rax_28 == 0)
    var_300 = 0
else
    var_300 = *(rax_28 + 0x4c8) & 7

int128_t var_148
sub_1419a2ec0(*(arg3 + 0x5150), &var_148, &data_143e781c0, 0)
void* r12_1 = *arg4
int128_t zmm8 = var_148
void* var_128 = zmm8.q
void* rax_33 = sx.q(arg4[1].d) * 0xe0 + r12_1

if (r12_1 != rax_33)
    int128_t var_58_1 = zmm6
    int128_t var_68_1 = zmm7
    
    do
        void* r15_1 = *(r12_1 + 0x80)
        void* rax_35 = r15_1 + sx.q(*(r12_1 + 0x88)) * 0x28
        
        if (r15_1 != rax_35)
            zmm7 = zx.o(0)
            void*** var_2f8_2
            var_2f8_2.d = 0x40
            int128_t var_108_1 = zmm7
            
            do
                int32_t* rax_36 = sub_14081d830(0xb0, *(arg2 + 8), 1, 0)
                int32_t* rdi_1 = rax_36
                
                if (rax_36 == 0)
                    rdi_1 = nullptr
                else
                    __builtin_memset(&rdi_1[0x20], 0, 0x30)
                
                memset(rdi_1, 0, 0xb0)
                rdi_1[6] = arg1[2]
                rdi_1[7] = arg1[3]
                rdi_1[5] = arg1[4]
                *rdi_1 = *(r12_1 + 0xcc)
                rdi_1[1] = 0x40
                int32_t rcx_15 = data_1439b60f0
                int32_t rax_41
                
                if (rcx_15 s>= 1)
                    rax_41 = 0x100
                    
                    if (rcx_15 s< 0x100)
                        rax_41 = rcx_15
                else
                    rax_41 = 1
                
                rdi_1[2] = rax_41
                rdi_1[3] = var_300
                rdi_1[4] = *(r15_1 + 0x18)
                sub_1405d16e0(&rdi_1[0x2a], rbx_3)
                *(rdi_1 + 0x88) = arg6
                *(rdi_1 + 0x90) = var_2e8
                *(rdi_1 + 0x98) = var_2d0
                *(rdi_1 + 0xa0) = rsi_1
                void* rcx_17 = *r15_1
                void* rax_47 = *(rcx_17 + 0x68)
                
                if (rax_47 != 0)
                    rcx_17 = rax_47
                
                void* rdx_15 = *(rcx_17 + 0x28)
                *(rdi_1 + 0x80) = *(rdx_15 + 0x10)
                *(rdi_1 + 0x30) = *(rdx_15 + 0x18)
                rdi_1[0xe] = *(rdx_15 + 0x20)
                uint64_t rcx_18 = zx.q(*(rdx_15 + 0x24))
                rdi_1[0xf] = rcx_18.d
                rdi_1[9] = *(rdx_15 + 0x28)
                rdi_1[0xa] = *(rdx_15 + 0x2c)
                int32_t rax_52
                rax_52.b = *(rdx_15 + 0x34) != 0
                rdi_1[0xb] = rax_52
                rdi_1[8] = *(rdx_15 + 0x30)
                uint128_t zmm1_3 = *(rdx_15 + 0x40)
                float temp0_4[0x4] = _mm_add_ps(zmm1_3, zmm1_3)
                uint128_t zmm0_4 = _mm_shuffle_ps(zmm1_3, zmm1_3, 4)
                float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x29), zmm0_4)
                float temp0_8[0x4] = _mm_mul_ps(temp0_4, zmm1_3)
                zmm1_3 = _mm_shuffle_ps(zmm1_3, zmm1_3, 0xff)
                float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x12), zmm1_3)
                zmm1_3 = *(rdx_15 + 0x60)
                zmm0_4 = _mm_shuffle_ps(temp0_8, temp0_8, 0x1a)
                uint128_t zmm5_1 = _mm_shuffle_ps(zmm1_3, zmm1_3, 0xc9)
                float temp0_14[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 1)
                float temp0_15[0x4] = _mm_add_ps(temp0_11, temp0_7)
                float temp0_16[0x4] = _mm_sub_ps(temp0_7, temp0_11)
                zmm0_4 = _mm_add_ps(zmm0_4, temp0_14)
                float zmm4_1[0x4] = data_143e782c0
                float temp0_18[0x4] = _mm_mul_ps(temp0_15, zmm1_3)
                zmm5_1 = _mm_mul_ps(zmm5_1, temp0_16)
                float zmm2_1[0x4] = __andps_xmmxud_memxud(
                    _mm_mul_ps(_mm_sub_ps(zmm4_1, zmm0_4), zmm1_3), data_143e782d0)
                zmm0_4 = _mm_shuffle_ps(zmm5_1, zmm2_1, 0x32)
                float temp0_25[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_18, zmm2_1, 0), zmm0_4, 0x82)
                zmm0_4 = _mm_shuffle_ps(temp0_18, zmm2_1, 0x31)
                zmm1_3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm2_1, 0x10), zmm0_4, 0x88)
                uint128_t var_e8_1 = zmm1_3
                float var_f8_1[0x4] = temp0_25
                float temp0_29[0x4] = _mm_shuffle_ps(temp0_18, zmm5_1, 0x12)
                zmm0_4 = *(rdx_15 + 0x50)
                *(rdi_1 + 0x40) = temp0_25
                *(rdi_1 + 0x50) = zmm1_3
                zmm4_1[0].q = zmm0_4 u>> 0x40
                zmm0_4 = _mm_shuffle_ps(zmm0_4, zmm4_1, 0xc4)
                zmm1_3.d = float.s(rcx_18)
                float temp0_31[0x4] = _mm_shuffle_ps(temp0_29, zmm2_1, 0xe8)
                uint128_t var_c8_1 = zmm0_4
                zmm1_3.d = zmm1_3.d f* 0.00048828125f
                *(rdi_1 + 0x60) = temp0_31
                *(rdi_1 + 0x70) = zmm0_4
                zmm1_3.d = zmm1_3.d f+ zmm1_3.d
                float var_d8_1[0x4] = temp0_31
                zmm0_4.d = -0.5f f- zmm1_3.d
                var_2f8_2:4.d = neg.d(int.d(zmm0_4.d) s>> 1)
                sub_1411e40f0(rcx_18.b)
                int128_t var_138_1 = zmm7
                sub_141998c50(var_128, &data_143e7dcb0, rdi_1)
                int32_t var_198_1 = 1
                void*** var_1a0_1 = var_2f8_2
                void*** rax_57
                char rcx_20
                rax_57, rcx_20 = sub_14081d830(0x60, *(arg2 + 8), 1, 0)
                void*** rsi_2 = rax_57
                
                if (rax_57 == 0)
                    rsi_2 = nullptr
                else
                    sub_1411e40f0(rcx_20)
                    void* var_1c0_1 = &data_143e7dce0
                    int128_t var_118 = rdi_1.o
                    void var_2fc
                    sub_141992bd0(rsi_2, &var_2fc, &var_118, 2)
                    *rsi_2 = &data_142f38a88
                    *(rsi_2 + 0x38) = rdi_1.o
                    *(rsi_2 + 0x48) = zmm8
                    rsi_2[0xb] = var_198_1.q
                
                sub_1419968d0(arg2, rsi_2)
                rsi_1 = var_2e0
                r15_1 += 0x28
            while (r15_1 != rax_35)
        
        r12_1 += 0xe0
    while (r12_1 != rax_33)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        if (var_308_1[2].b != 0)
            (**var_308_1)(var_308_1, 1)
        else
            char rax_59
            
            if (data_143f0f1d0 == 0)
                rax_59 = sub_1405949a0()
            
            if (data_143f0f1d0 == 0 && rax_59 != 0)
                (**var_308_1)(var_308_1, 1)
            else
                bool z_2
                
                if (0 == *(var_308_1 + 0xc))
                    *(var_308_1 + 0xc) = 1
                    z_2 = true
                else
                    *(var_308_1 + 0xc)
                    z_2 = false
                
                if (z_2)
                    sub_1405dcc10(&data_143f02390, var_308_1)

__security_check_cookie(rax_1 ^ &var_338)
return arg1
