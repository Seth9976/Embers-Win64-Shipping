// 函数: sub_141642e40
// 地址: 0x141642e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358
float zmm3[0x4] = *arg3
float zmm0[0x4] = arg3[1]
int32_t r13 = 0
float (* rbx)[0x4] = arg4
float var_1f8 = zmm3[0]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float var_2f8[0x4] = zmm0
float var_1ec = temp0[0]
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
void* var_260 = arg1
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
int32_t var_188 = 0
float var_170[0x4] = data_142d3f7e0
int32_t* var_270 = rbx
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float var_1f4 = temp0_1[0]
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm3 ^= 0x80000000
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_3[0] = (temp0_1 ^ 0x80000000)[0]
float var_1f0 = temp0_2[0]
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r12 = zx.q(var_188)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = (temp0_2 ^ 0x80000000)[0]
float var_1d8[0x4]
int128_t* var_240 = &var_1d8
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0[0]
int32_t* var_238 = &var_1f8
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
var_1d8 = temp0_6
float zmm9[0x4] = *(arg1 + 0x28)
float zmm4[0x4] = (*arg10)[1]
float zmm5[0x4] = (*arg10)[2]
int128_t zmm10 = *(arg1 + 0x2c)
int128_t zmm14 = *(arg1 + 0x30)
float var_258[0x4] = temp0_6
zmm3 = *arg10
void* rax_4 = *(arg1 + 0x10)
zmm3[0] = zmm3[0] * zmm9[0]
float (* var_248)[0x4] = arg2
zmm4[0] = zmm4[0] f* zmm10.d
bool cond:0 = zmm3[0] >= 0f
zmm5[0] = zmm5[0] f* zmm14.d
int128_t zmm7

if (cond:0)
    zmm7 = *(rax_4 + 0x1c)
else
    zmm7 = *(rax_4 + 0x10)

float zmm1[0x4]

if (zmm4[0] >= 0f)
    zmm1 = *(rax_4 + 0x20)
else
    zmm1 = *(rax_4 + 0x14)

if (zmm5[0] >= 0f)
    zmm0 = *(rax_4 + 0x24)
else
    zmm0 = *(rax_4 + 0x18)

zmm14.d = zmm14.d f* zmm0[0]
zmm10.d = zmm10.d f* zmm1[0]
zmm9[0] = zmm9[0] f* zmm7.d
int32_t var_218 = zmm14.d
float var_310 = (zmm3 ^ 0x80000000)[0]
int64_t var_130 = (_mm_unpacklo_ps(zmm9, zmm10.q)).q
float var_30c = (zmm4 ^ 0x80000000)[0]
float var_308 = (zmm5 ^ 0x80000000)[0]
int32_t var_128 = var_218
float var_2d0
float* rax_6
uint128_t zmm6
uint128_t zmm9_1
uint128_t zmm10_1
rax_6, zmm6, zmm9_1, zmm10_1 = sub_14170eae0(&var_248, &var_2d0, &var_310)
uint128_t zmm2_1 = var_2f8[1]
uint128_t zmm7_1 = zx.o(0)
uint128_t zmm5_1 = var_2f8[0]
float zmm12[0x4] = zmm2_1
uint128_t zmm3_1 = var_2f8[2]
uint128_t zmm1_1 = zx.o(*rax_6)
uint128_t zmm11 = zmm5_1
int32_t rcx_1 = rax_6[2]
zmm9_1.d = zmm9_1.d f- zmm1_1.d
int32_t var_2bc = zmm2_1.d
uint32_t result = zx.d(arg9)
zmm10_1.d = zmm10_1.d f- _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55).d
int64_t var_100 = zmm1_1.q
uint128_t zmm13 = zmm3_1
uint128_t zmm8
zmm8.d = zmm5_1.d f- zmm9_1.d
zmm14.d = zmm14.d f- rcx_1
int32_t var_2c0 = zmm5_1.d
zmm9_1.d = zmm2_1.d f- zmm10_1.d
uint32_t result_2 = zmm3_1.d
int32_t var_f8 = rcx_1
int64_t var_2b0 = 0
zmm10_1.d = zmm3_1.d f- zmm14.d
uint128_t zmm0_1
zmm0_1.d = zmm8.d f* zmm8.d
int32_t var_2a8 = 0x3f800000
zmm2_1.d = zmm9_1.d f* zmm9_1.d
zmm1_1.d = zmm10_1.d f* zmm10_1.d
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm2_1.d = zmm2_1.d f+ zmm1_1.d
int32_t rdi

if (zmm2_1.d f>= 9.99999997e-07f || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

char rsi = rdi.b
int32_t var_2e8 = 0x7f7fffff
char var_318 = 0
char var_317 = rdi.b
float var_2e0
int64_t var_290
uint32_t result_1
float zmm4_1[0x4]

if (rdi.b != 0)
label_141643a53:
    int32_t* rdi_3 = arg6
    *rdi_3 = zmm7_1.d
    
    if (not(zmm7_1.d f<= zmm6.d))
        zmm3_1 = zmm6
        zmm4_1 = zmm6
        *arg8 = var_2b0
        arg8[1].d = var_2a8
        
        if (r12.d s> 0)
            int128_t* rcx_18 = &var_170
            uint64_t i_2 = zx.q(r12.d)
            int32_t* rax_26 = &var_f8
            uint64_t i
            
            do
                zmm2_1 = *rcx_18
                rcx_18 += 4
                zmm0_1.d = zmm2_1.d f* rax_26[-2]
                zmm1_1.d = zmm2_1.d f* rax_26[-1]
                zmm2_1.d = zmm2_1.d f* *rax_26
                rax_26 = &rax_26[3]
                zmm6.d = zmm6.d f+ zmm0_1.d
                zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                zmm4_1[0] = zmm4_1[0] f+ zmm2_1.d
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        zmm0_1.d = zmm7_1.d f* *var_270
        zmm1_1.d = zmm7_1.d f* var_270[1]
        zmm7_1.d = zmm7_1.d f* var_270[2]
        zmm0_1.d = zmm0_1.d f+ zmm5_1.d
        zmm1_1.d = zmm1_1.d f+ var_2f8[1]
        zmm7_1.d = zmm7_1.d f+ var_2f8[2]
        zmm0_1.d = zmm0_1.d f+ zmm6.d
        zmm1_1.d = zmm1_1.d f+ zmm3_1.d
        zmm7_1.d = zmm7_1.d f+ zmm4_1[0]
        *arg7 = (_mm_unpacklo_ps(zmm0_1, zmm1_1.q)).q
        arg7[1].d = zmm7_1.d
    else if (result.b != 0)
        var_170[0].q = 0
        var_170[2].q = 0
        var_2f8[0].q = 0
        var_2f8[2].q = 0
        sub_14083ad30(&var_170, 8)
        
        if (var_2f8[3] s< 8)
            sub_14083ad30(&var_2f8, 8)
        
        float rax_35
        uint128_t zmm0_2
        
        if (r13 == 0)
            int32_t var_2c8_3 = 0x3f800000
            rax_35 = 1f
            zmm0_2 = _mm_unpacklo_ps(zmm6, zmm6.q)
        label_141643ce0:
            zmm2_1 = var_130:4.d
            zmm1_1 = var_130.d
            *rdi_3 = 0
            *arg8 = zmm0_2.q
            arg8[1].d = rax_35
            result = var_128.d
            *arg7 = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
        else
            if (r12.d s> 0)
                int64_t rdi_4 = 0
                uint64_t i_3 = zx.q(r12.d)
                uint64_t i_1
                
                do
                    int64_t rbx_2 = sx.q(var_170[2])
                    int32_t rax_28 = (rbx_2 + 1).d
                    var_170[2] = rax_28
                    
                    if (rax_28 s> var_170[3])
                        sub_14083a7e0(&var_170)
                    
                    int64_t rcx_22 = var_170[0].q
                    int64_t rdx_11 = rbx_2 * 3
                    int32_t rax_29 = *(&var_128 + rdi_4)
                    zmm1_1.d = zmm12.d f+ *(&var_100:4 + rdi_4)
                    *(rcx_22 + (rdx_11 << 2)) = *(&var_130 + rdi_4)
                    zmm0_2.d = zmm11.d f+ *(&var_100 + rdi_4)
                    *(rcx_22 + (rdx_11 << 2) + 8) = rax_29
                    int64_t rbx_3 = sx.q(var_2f8[2])
                    int32_t var_30c_2 = zmm1_1.d
                    var_310 = zmm0_2.d
                    zmm0_2.d = zmm13.d f+ *(&var_f8 + rdi_4)
                    int32_t rax_30 = (rbx_3 + 1).d
                    var_2f8[2] = rax_30
                    var_308 = zmm0_2.d
                    
                    if (rax_30 s> var_2f8[3])
                        sub_14083a7e0(&var_2f8)
                    
                    int64_t rcx_24 = var_2f8[0].q
                    int64_t rdx_13 = rbx_3 * 3
                    rdi_4 += 0xc
                    *(rcx_24 + (rdx_13 << 2)) = var_310.q
                    *(rcx_24 + (rdx_13 << 2) + 8) = var_308
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            var_248 = &var_1d8
            float (* var_240_1)[0x4] = arg2
            int128_t* var_238_1 = arg3
            int32_t rax_34
            int128_t zmm15_1
            rax_34, zmm15_1 = sub_1415a7070(&var_170, &var_2f8, &var_260, &var_248, &var_2e0, 
                &var_310, &var_290, &var_258)
            zmm0_2 = zx.o(var_310.q)
            rax_35 = var_308
            
            if (rax_34 == 2)
                goto label_141643ce0
            
            *arg8 = zmm0_2.q
            arg8[1].d = rax_35
            result = result_1
            *rdi_3 = (var_2e0 ^ zmm15_1).d
            *arg7 = var_290
        int64_t rcx_26 = var_2f8[0].q
        arg7[1].d = result
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        int64_t rcx_27 = var_170[0].q
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
    
    result.b = 1
else
    while (true)
        int32_t rax_7 = r13
        r13 += 1
        
        if (rax_7 s>= 0x20)
            result = zx.d(arg9)
        else
            void* rax_8 = var_260
            zmm0_1.d = zmm9_1.d f* zmm9_1.d
            zmm2_1.d = zmm8.d f* zmm8.d
            void* rcx_2 = *(rax_8 + 0x10)
            uint128_t zmm15 = *(rax_8 + 0x28)
            zmm14 = *(rax_8 + 0x30)
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            zmm1_1.d = zmm10_1.d f* zmm10_1.d
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            float temp0_9[0x4] = _mm_rsqrt_ss(zmm2_1[0], zmm2_1.d)
            zmm3_1.d = zmm2_1.d f* 0.5f
            zmm0_1.d = temp0_9.d f* temp0_9[0]
            zmm1_1.d = zmm3_1.d f* zmm0_1.d
            zmm2_1.d = 0.5f f- zmm1_1.d
            zmm0_1.d = temp0_9.d f* zmm2_1.d
            zmm2_1 = *(rax_8 + 0x2c)
            temp0_9[0] = temp0_9[0] f+ zmm0_1.d
            zmm1_1.d = temp0_9.d f* temp0_9[0]
            zmm3_1.d = zmm3_1.d f* zmm1_1.d
            zmm5_1.d = 0.5f f- zmm3_1.d
            zmm0_1.d = temp0_9.d f* zmm5_1.d
            temp0_9[0] = temp0_9[0] f+ zmm0_1.d
            zmm8.d = zmm8.d f* temp0_9[0]
            zmm9_1.d = zmm9_1.d f* temp0_9[0]
            zmm10_1.d = zmm10_1.d f* temp0_9[0]
            zmm0_1.d = zmm8.d f* zmm15.d
            var_2e0 = temp0_9[0]
            zmm1_1.d = zmm9_1.d f* zmm2_1.d
            zmm3_1.d = zmm10_1.d f* zmm14.d
            
            if (zmm0_1.d f>= zmm6.d)
                zmm4_1 = *(rcx_2 + 0x1c)
            else
                zmm4_1 = *(rcx_2 + 0x10)
            
            if (zmm1_1.d f>= zmm6.d)
                zmm1_1 = *(rcx_2 + 0x20)
            else
                zmm1_1 = *(rcx_2 + 0x14)
            
            if (zmm3_1.d f>= zmm6.d)
                zmm0_1 = *(rcx_2 + 0x24)
            else
                zmm0_1 = *(rcx_2 + 0x18)
            
            zmm14.d = zmm14.d f* zmm0_1.d
            zmm2_1.d = zmm2_1.d f* zmm1_1.d
            zmm15.d = zmm15.d f* zmm4_1[0]
            int32_t var_218_1 = zmm14.d
            int32_t var_2e4_1 = zmm2_1.d
            int32_t var_230 = (zmm8 ^ 0x80000000).d
            int32_t var_22c_1 = (zmm9_1 ^ 0x80000000).d
            int32_t var_228_1 = (zmm10_1 ^ 0x80000000).d
            float var_1bc
            float* rax_9
            rax_9, zmm6, zmm7_1, zmm8, zmm9_1, zmm10_1, zmm11, zmm12, zmm13 =
                sub_14170eae0(&var_248, &var_1bc, &var_230)
            zmm5_1 = var_2e4_1
            zmm1_1 = zx.o(*rax_9)
            int32_t rcx_4 = rax_9[2]
            zmm2_1.d = zmm15.d f- zmm1_1.d
            zmm3_1.d = zmm5_1.d f- _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55).d
            zmm14.d = zmm14.d f- rcx_4
            (&var_184)[sx.q(r12.d)] = r12.d
            r12 = sx.q(var_188)
            zmm0_1 = _mm_unpacklo_ps(zmm15, zmm5_1.q)
            int32_t var_2e4_2 = zmm3_1.d
            zmm12[0] = zmm12[0] f- var_2e4_2
            zmm3_1.d = zmm11.d f- zmm2_1.d
            var_2e0 = zmm2_1.d
            uint64_t rcx_5 = r12 * 3
            *(&var_130 + (rcx_5 << 2)) = zmm0_1.q
            zmm2_1.d = zmm13.d f- zmm14.d
            (&var_128)[rcx_5] = var_218_1
            result = rax_9[2]
            zmm5_1.d = zmm8.d f* zmm3_1.d
            float var_30c_1 = zmm12[0]
            zmm12[0] = zmm12[0] f* zmm9_1.d
            zmm0_1.d = zmm10_1.d f* zmm2_1.d
            zmm5_1.d = zmm5_1.d f+ zmm12[0]
            *(&var_100 + (rcx_5 << 2)) = zmm1_1.q
            var_310 = zmm3_1.d
            var_308 = zmm2_1.d
            (&var_f8)[rcx_5] = result
            zmm5_1.d = zmm5_1.d f+ zmm0_1.d
            int128_t var_150_1
            int32_t var_140_1
            
            if (zmm5_1.d f<= zmm6.d)
                r12 = zx.q(r12.d + 1)
                *(&var_160 + (rcx_5 << 2)) = var_310.q
                *(&var_160:8 + (rcx_5 << 2)) = var_308
                var_188 = r12.d
            label_14164365b:
                zmm14 = var_2e8
                
                if (rsi == 0)
                    zmm15 = 0x358637bd
                else
                    zmm15 = 0x358637bd
                    
                    if (not(zmm5_1.d f< zmm6.d))
                        zmm5_1.d = zmm5_1.d f* zmm5_1.d
                        zmm5_1.d = zmm5_1.d f+ 9.99999997e-07f
                        rdi.b = zmm5_1.d f>= zmm14.d
            else
                zmm3_1 = (*rbx)[1]
                zmm4_1 = *rbx
                zmm15 = (*rbx)[2]
                zmm2_1.d = zmm8.d f* zmm4_1[0]
                zmm0_1.d = zmm9_1.d f* zmm3_1.d
                zmm1_1.d = zmm10_1.d f* zmm15.d
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                
                if (zmm2_1.d f>= zmm6.d)
                    result.b = 0
                    break
                
                zmm1_1 = zmm7_1
                zmm0_1.d = zmm5_1.d f/ zmm2_1.d
                zmm7_1.d = zmm7_1.d f- zmm0_1.d
                
                if (zmm7_1.d f<= zmm1_1.d)
                    goto label_14164365b
                
                if (zmm7_1.d f> arg5)
                    result.b = 0
                    break
                
                zmm1_1 = zx.o(var_2c0.q)
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                zmm12 = zmm7_1
                var_290 = zmm1_1.q
                zmm11.d = zmm7_1.d f* zmm4_1[0]
                r12 = zx.q(r12.d + 1)
                result_1 = result_2
                zmm12[0] = zmm12[0] f* zmm3_1.d
                var_188 = r12.d
                zmm11.d = zmm11.d f+ var_2f8[0]
                zmm13.d = zmm7_1.d f* zmm15.d
                var_317 = 0
                zmm12[0] = zmm12[0] + var_2f8[1]
                var_2b0.d = zmm8.d
                zmm13.d = zmm13.d f+ var_2f8[2]
                var_2c0 = zmm11.d
                zmm3_1.d = zmm11.d f- zmm1_1.d
                var_2b0:4.d = zmm9_1.d
                zmm1_1 = var_160:4.d
                zmm12[0] = zmm12[0] f- zmm0_1.d
                float var_2bc_1 = zmm12[0]
                zmm2_1.d = zmm13.d f- result_1
                zmm0_1.d = var_160.d.d f+ zmm3_1.d
                result_2 = zmm13.d
                var_2a8 = zmm10_1.d
                zmm1_1.d = zmm1_1.d f+ zmm12[0]
                var_160.d = zmm0_1.d
                zmm0_1.d = var_160:8.d.d f+ zmm2_1.d
                var_160:4.d = zmm1_1.d
                zmm1_1.d = var_160:0xc.d.d f+ zmm3_1.d
                var_160:8.d = zmm0_1.d
                var_160:0xc.d = zmm1_1.d
                zmm0_1.d = var_150_1.d.d f+ zmm12[0]
                zmm1_1.d = var_150_1:4.d.d f+ zmm2_1.d
                var_150_1.d = zmm0_1.d
                zmm0_1 = var_150_1:8.d
                var_150_1:4.d = zmm1_1.d
                zmm0_1.d = zmm0_1.d f+ zmm3_1.d
                zmm1_1.d = var_150_1:0xc.d.d f+ zmm12[0]
                var_150_1:8.d = zmm0_1.d
                zmm0_1.d = var_140_1.d f+ zmm2_1.d
                var_150_1:0xc.d = zmm1_1.d
                zmm1_1.d = zmm11.d f- var_2e0
                zmm2_1.d = zmm12.d f- var_2e4_2
                var_140_1 = zmm0_1.d
                zmm0_1.d = zmm13.d f- zmm14.d
                zmm14 = 0x7f7fffff
                var_2e8 = 0x7f7fffff
                *(&var_160 + (rcx_5 << 2)) = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
                *(&var_160:8 + (rcx_5 << 2)) = zmm0_1.d
                zmm15 = 0x358637bd
            
            uint32_t rcx_16
            
            if (rdi.b != 0)
                int64_t* rax_23
                rax_23, zmm6, zmm7_1, zmm11, zmm12, zmm13 =
                    sub_1416f4530(&var_258, &var_160, &var_188, &var_170, &var_130, &var_100)
                r12 = zx.q(var_188)
                rcx_16 = zx.d(var_318)
                zmm1_1 = zx.o(*rax_23)
                int32_t rax_24 = rax_23[1].d
                zmm9_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                zmm10_1 = rax_24
                zmm8 = zmm1_1.d
            else
                int32_t rcx_6 = r12.d
                int32_t rax_14
                
                if (rcx_6 == 1)
                    int64_t rax_19 = sx.q(var_184)
                    int64_t rcx_13 = rax_19 * 3
                    var_170[rax_19] = 0x3f800000
                    zmm0_1 = zx.o(*(&var_160 + (rcx_13 << 2)))
                    rax_14 = *(&var_160:8 + (rcx_13 << 2))
                else if (rcx_6 == 2)
                    void var_198
                    uint64_t* rax_18
                    rax_18, zmm6, zmm7_1 =
                        sub_1416e69d0(&var_198, &var_160, &var_184, &var_188, &var_170)
                    r12 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_18)
                    rax_14 = rax_18[1].d
                else if (rcx_6 == 3)
                    uint64_t var_1a4
                    uint64_t* rax_17
                    rax_17, zmm6, zmm7_1, zmm11, zmm12, zmm13, zmm14, zmm15 =
                        sub_1416fa750(&var_1a4, &var_160, &var_188, &var_170)
                    r12 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_17)
                    rax_14 = rax_17[1].d
                else if (rcx_6 == 4)
                    uint64_t var_1b0
                    uint64_t* rax_16
                    rax_16, zmm6, zmm7_1, zmm11, zmm12, zmm13, zmm14, zmm15 =
                        sub_1416f9c90(&var_1b0, &var_160, &var_188, &var_170)
                    r12 = zx.q(var_188)
                    zmm0_1 = zx.o(*rax_16)
                    rax_14 = rax_16[1].d
                else
                    int32_t var_2c8_1 = 0
                    rax_14 = 0
                    zmm0_1 = _mm_unpacklo_ps(zmm6, zmm6.q)
                
                int32_t var_178
                int64_t rdi_1 = sx.q(var_178)
                int64_t r11_1 = sx.q(var_184)
                int32_t var_180
                int64_t r10_1 = sx.q(var_180)
                int32_t var_17c
                int64_t r9_4 = sx.q(var_17c)
                int64_t rbx_1 = rdi_1 * 3
                uint64_t var_2dc_1 = zmm0_1.q
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r10_1 * 3
                int64_t rsi_1 = r9_4 * 3
                int32_t rdx_6 = *(&var_160:8 + (r14_1 << 2))
                int32_t rcx_14 = *(&var_160:8 + (rsi_1 << 2))
                int32_t r8_5 = *(&var_160:8 + (r15_1 << 2))
                zmm8 = var_2dc_1.d
                zmm9_1 = var_2dc_1:4.d
                int32_t rax_20 = *(&var_160:8 + (rbx_1 << 2))
                zmm10_1 = rax_14
                var_160:0xc.q = *(&var_160 + (r14_1 << 2))
                var_140_1:4.q = *(&var_160 + (rbx_1 << 2))
                zmm0_1 = var_170[r11_1]
                var_150_1:8.q = *(&var_160 + (rsi_1 << 2))
                zmm1_1 = var_170[r10_1]
                var_160.q = *(&var_160 + (r15_1 << 2))
                zmm3_1 = var_170[rdi_1]
                int32_t rdi_2 = (&var_128)[r15_1]
                var_170[2] = var_170[r9_4].d
                zmm2_1 = zx.o(*(&var_130 + (r14_1 << 2)))
                var_170[0] = zmm0_1.d
                zmm0_1 = zx.o(*(&var_130 + (rbx_1 << 2)))
                var_170[1] = zmm1_1.d
                zmm1_1 = zx.o(*(&var_130 + (rsi_1 << 2)))
                var_170[3] = zmm3_1.d
                zmm3_1 = zx.o(*(&var_130 + (r15_1 << 2)))
                var_150_1:4.d = rdx_6
                int32_t rdx_7 = (&var_128)[r14_1]
                var_140_1 = rcx_14
                int32_t rcx_15 = (&var_128)[rsi_1]
                var_140_1 = rax_20
                int32_t rax_21 = (&var_128)[rbx_1]
                var_124_1.q = zmm2_1.q
                zmm2_1 = zx.o(*(&var_100 + (r14_1 << 2)))
                int128_t var_114_1
                var_114_1:8.q = zmm0_1.q
                zmm0_1 = zx.o(*(&var_100 + (rbx_1 << 2)))
                var_124_1:0xc.q = zmm1_1.q
                zmm1_1 = zx.o(*(&var_100 + (rsi_1 << 2)))
                var_128 = rdi_2
                rdi = (&var_f8)[r15_1]
                var_130 = zmm3_1.q
                zmm3_1 = zx.o(*(&var_100 + (r15_1 << 2)))
                var_124_1:8.d = rdx_7
                int32_t rdx_8 = (&var_f8)[r14_1]
                var_114_1:4.d = rcx_15
                rcx_16 = (&var_f8)[rsi_1]
                int32_t var_104_1 = rax_21
                int32_t rax_22 = (&var_f8)[rbx_1]
                var_f4_1.q = zmm2_1.q
                int128_t var_e4_1
                var_e4_1:8.q = zmm0_1.q
                var_184.o = data_142e11d00
                var_f8 = rdi
                zmm2_1.d = zmm9_1.d f* zmm9_1.d
                var_160:8.d = r8_5
                var_f4_1:0xc.q = zmm1_1.q
                zmm0_1.d = zmm8.d f* zmm8.d
                var_f4_1:8.d = rdx_8
                zmm1_1.d = zmm10_1.d f* zmm10_1.d
                var_e4_1:4.d = rcx_16
                zmm2_1.d = zmm2_1.d f+ zmm0_1.d
                var_100 = zmm3_1.q
                int32_t var_d4_1 = rax_22
                zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                zmm2_1.d f- zmm15.d
                rdi.b = zmm2_1.d f< zmm15.d
                var_2e8 = zmm2_1.d
                rcx_16.b = zmm2_1.d f>= zmm14.d
                var_318 = rcx_16.b
            
            result = zx.d(arg9)
            
            if (rdi.b == 0 && rcx_16.b == 0)
                rbx = var_270
                rsi = var_317
                continue
        
        zmm5_1 = var_2f8[0]
        goto label_141643a53
__security_check_cookie(rax_1 ^ &var_358)
return result
