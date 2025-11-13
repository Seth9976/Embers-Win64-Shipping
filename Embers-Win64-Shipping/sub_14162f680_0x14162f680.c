// 函数: sub_14162f680
// 地址: 0x14162f680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_348
int64_t rax_1 = __security_cookie ^ &var_348
float zmm3[0x4] = *arg3
float zmm0[0x4] = arg3[1]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float var_1e8 = zmm3[0]
int96_t var_288 = zmm0[0].12
int32_t var_188 = 0
int128_t var_124_1
__builtin_memset(&var_124_1, 0, 0x24)
int128_t var_f4_1
__builtin_memset(&var_f4_1, 0, 0x24)
zmm0 = data_142d3f7e0
int32_t var_184
__builtin_memset(&var_184, 0, 0x10)
uint64_t r12 = zx.q(var_188)
float var_170[0x4] = zmm0
float var_1c8[0x4]
int128_t* var_220 = &var_1c8
float* var_218 = &var_1e8
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
int128_t var_160
__builtin_memset(&var_160, 0, 0x24)
float var_1e4 = temp0_1[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
zmm3 ^= 0x80000000
float var_1e0 = temp0_2[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_3[0] = (temp0_1 ^ 0x80000000)[0]
float var_1dc = temp0[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_4[0] = (temp0_2 ^ 0x80000000)[0]
void* var_240 = arg1
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0[0]
float (* var_228)[0x4] = arg2
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
float var_238[0x4] = temp0_6
var_1c8 = temp0_6
zmm3 = *arg10
int128_t zmm10

if (zmm3[0] >= 0f)
    zmm10 = *(arg1 + 0x1c)
else
    zmm10 = *(arg1 + 0x10)

float zmm2[0x4] = (*arg10)[1]
int128_t zmm9

if (zmm2[0] >= 0f)
    zmm9 = *(arg1 + 0x20)
else
    zmm9 = *(arg1 + 0x14)

float zmm1[0x4] = (*arg10)[2]
int32_t var_274 = zmm9.d
uint128_t zmm15

if (zmm1[0] >= 0f)
    zmm15 = *(arg1 + 0x24)
else
    zmm15 = *(arg1 + 0x18)

int32_t var_270 = zmm15.d
float var_300 = (zmm3 ^ 0x80000000)[0]
float var_2fc = (zmm2 ^ 0x80000000)[0]
float var_2f8 = (zmm1 ^ 0x80000000)[0]
int64_t var_130 = zmm10.d.q
int32_t var_128 = var_270
float var_2d8
float* rax_5
uint128_t zmm7
uint128_t zmm9_1
uint128_t zmm10_1
rax_5, zmm7, zmm9_1, zmm10_1 = sub_14170eae0(&var_228, &var_2d8, &var_300)
uint128_t zmm0_1 = var_288.d
uint128_t zmm8 = zx.o(0)
uint128_t zmm2_1 = var_288:4.d
uint128_t zmm3_1 = var_288:8.d
uint128_t zmm1_1 = zx.o(*rax_5)
uint128_t zmm12 = zmm0_1
int32_t rcx_1 = rax_5[2]
zmm10_1.d = zmm10_1.d f- zmm1_1.d
int32_t var_2b8 = zmm0_1.d
uint128_t zmm13 = zmm2_1
int32_t var_2b4 = zmm2_1.d
uint32_t result = zx.d(arg9)
zmm9_1.d = zmm9_1.d f- _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55).d
uint128_t zmm5
zmm5.d = zmm0_1.d f- zmm10_1.d
int64_t var_100 = zmm1_1.q
uint128_t zmm14 = zmm3_1
zmm15.d = zmm15.d f- rcx_1
uint128_t zmm11
zmm11.d = zmm2_1.d f- zmm9_1.d
uint32_t result_2 = zmm3_1.d
int32_t var_f8 = rcx_1
zmm0_1.d = zmm5.d f* zmm5.d
int64_t var_2a8 = 0
zmm15.d = zmm3_1.d f- zmm15.d
int32_t var_2a0 = 0x3f800000
zmm2_1.d = zmm11.d f* zmm11.d
zmm2_1.d = zmm2_1.d f+ zmm0_1.d
zmm1_1.d = zmm15.d f* zmm15.d
zmm2_1.d = zmm2_1.d f+ zmm1_1.d
int32_t rdi

if (zmm2_1.d f>= 9.99999997e-07f || (result.b != 0 && zmm2_1.d f>= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

int32_t rcx_2 = 0
int64_t rsi
rsi.b = 0
int32_t var_2f0 = 0x7f7fffff
int32_t var_2dc = 0
char rbx = rdi.b
char var_308 = rbx
int32_t var_2ec
uint64_t var_2c8
int64_t var_268
uint32_t result_1
uint128_t zmm4_1

if (rdi.b != 0)
label_141630219:
    int32_t* rdi_3 = arg6
    *rdi_3 = zmm8.d
    
    if (not(zmm8.d f<= zmm7.d))
        zmm3_1 = zmm7
        zmm4_1 = zmm7
        *arg8 = var_2a8
        arg8[1].d = var_2a0
        
        if (r12.d s> 0)
            float (* rcx_19)[0x4] = &var_170
            uint64_t i_2 = zx.q(r12.d)
            int32_t* rax_25 = &var_f8
            uint64_t i
            
            do
                zmm2_1 = *rcx_19
                rcx_19 = &(*rcx_19)[1]
                zmm0_1.d = zmm2_1.d f* rax_25[-2]
                zmm1_1.d = zmm2_1.d f* rax_25[-1]
                zmm2_1.d = zmm2_1.d f* *rax_25
                rax_25 = &rax_25[3]
                zmm7.d = zmm7.d f+ zmm0_1.d
                zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                zmm4_1.d = zmm4_1.d f+ zmm2_1.d
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        zmm0_1.d = zmm8.d f* *arg4
        zmm1_1.d = zmm8.d f* *(arg4 + 4)
        zmm8.d = zmm8.d f* *(arg4 + 8)
        zmm0_1.d = zmm0_1.d f+ var_288.d
        zmm1_1.d = zmm1_1.d f+ var_288:4.d
        zmm8.d = zmm8.d f+ var_288:8.d
        zmm0_1.d = zmm0_1.d f+ zmm7.d
        zmm1_1.d = zmm1_1.d f+ zmm3_1.d
        zmm8.d = zmm8.d f+ zmm4_1.d
        uint32_t var_2d0_2 = zmm8.d
        *arg7 = (_mm_unpacklo_ps(zmm0_1, zmm1_1.q)).q
        arg7[1].d = var_2d0_2
    else if (result.b != 0)
        var_2c8 = 0
        int64_t var_2c0_1 = 0
        var_170[0].q = 0
        var_170[2].q = 0
        sub_14083ad30(&var_2c8, 8)
        
        if (var_170[3] s< 8)
            sub_14083ad30(&var_170, 8)
        
        float rax_33
        float zmm0_2[0x4]
        
        if (var_2dc == 0)
            int32_t var_2d0_3 = 0x3f800000
            rax_33 = 1f
            zmm0_2 = _mm_unpacklo_ps(zmm7, zmm7.q)
        label_1416304bb:
            zmm2_1 = var_130:4.d
            zmm1_1 = var_130.d
            *rdi_3 = 0
            *arg8 = zmm0_2.q
            zmm0_2 = var_128
            arg8[1].d = rax_33
            zmm1_1 = _mm_unpacklo_ps(zmm1_1, zmm2_1.q)
            result = zmm0_2[0]
            *arg7 = zmm1_1.q
        else
            if (r12.d s> 0)
                int64_t rdi_4 = 0
                uint64_t i_3 = zx.q(r12.d)
                uint64_t i_1
                
                do
                    int64_t rbx_2 = sx.q(var_2c0_1.d)
                    int32_t rax_26 = (rbx_2 + 1).d
                    var_2c0_1.d = rax_26
                    
                    if (rax_26 s> var_2c0_1:4.d)
                        sub_14083a7e0(&var_2c8)
                    
                    uint64_t rcx_23 = var_2c8
                    int64_t rdx_11 = rbx_2 * 3
                    int32_t rax_27 = *(&var_128 + rdi_4)
                    zmm1_1.d = zmm13.d f+ *(&var_100:4 + rdi_4)
                    *(rcx_23 + (rdx_11 << 2)) = *(&var_130 + rdi_4)
                    zmm0_2 = zmm12
                    zmm0_2[0] = zmm0_2[0] f+ *(&var_100 + rdi_4)
                    *(rcx_23 + (rdx_11 << 2) + 8) = rax_27
                    int64_t rbx_3 = sx.q(var_170[2])
                    int32_t var_2fc_2 = zmm1_1.d
                    var_300 = zmm0_2[0]
                    zmm0_2 = zmm14
                    zmm0_2[0] = zmm0_2[0] f+ *(&var_f8 + rdi_4)
                    int32_t rax_28 = (rbx_3 + 1).d
                    var_170[2] = rax_28
                    var_2f8 = zmm0_2[0]
                    
                    if (rax_28 s> var_170[3])
                        sub_14083a7e0(&var_170)
                    
                    int64_t rcx_25 = var_170[0].q
                    int64_t rdx_13 = rbx_3 * 3
                    rdi_4 += 0xc
                    *(rcx_25 + (rdx_13 << 2)) = var_300.q
                    *(rcx_25 + (rdx_13 << 2) + 8) = var_2f8
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
                rdi_3 = arg6
            
            var_228 = &var_1c8
            float (* var_220_1)[0x4] = arg2
            int128_t* var_218_1 = arg3
            int32_t rax_32
            int128_t zmm6_2
            rax_32, zmm6_2 = sub_141560500(&var_2c8, &var_170, &var_240, &var_228, &var_2ec, 
                &var_300, &var_268, &var_238)
            zmm0_2 = zx.o(var_300.q)
            rax_33 = var_2f8
            
            if (rax_32 == 2)
                goto label_1416304bb
            
            *arg8 = zmm0_2.q
            arg8[1].d = rax_33
            result = result_1
            *rdi_3 = (var_2ec ^ zmm6_2)[0]
            *arg7 = var_268
        int64_t rcx_27 = var_170[0].q
        arg7[1].d = result
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        uint64_t rcx_28 = var_2c8
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
    
    result.b = 1
else
    while (true)
        var_2dc = rcx_2 + 1
        
        if (rcx_2 s>= 0x20)
            result = zx.d(arg9)
            goto label_141630219
        
        void* rax_7 = var_240
        zmm2_1.d = zmm11.d f* zmm11.d
        zmm0_1.d = zmm5.d f* zmm5.d
        zmm1_1.d = zmm15.d f* zmm15.d
        zmm2_1.d = zmm2_1.d f+ zmm0_1.d
        zmm2_1.d = zmm2_1.d f+ zmm1_1.d
        zmm3_1.d = zmm2_1.d
        uint128_t zmm6_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1.d)
        zmm3_1.d = zmm3_1.d f* 0.5f
        zmm0_1.d = zmm6_1.d f* zmm6_1.d
        zmm1_1.d = zmm3_1.d f* zmm0_1.d
        zmm2_1.d = 0.5f f- zmm1_1.d
        zmm0_1.d = zmm6_1.d f* zmm2_1.d
        zmm6_1.d = zmm6_1.d f+ zmm0_1.d
        zmm1_1.d = zmm6_1.d f* zmm6_1.d
        zmm3_1.d = zmm3_1.d f* zmm1_1.d
        zmm4_1.d = 0.5f f- zmm3_1.d
        zmm0_1.d = zmm6_1.d f* zmm4_1.d
        zmm6_1.d = zmm6_1.d f+ zmm0_1.d
        var_2ec = zmm6_1.d
        zmm10_1.d = zmm6_1.d f* zmm5.d
        zmm9_1.d = zmm6_1.d f* zmm11.d
        zmm6_1.d = zmm6_1.d f* zmm15.d
        
        if (zmm10_1.d f>= zmm7.d)
            zmm0_1 = *(rax_7 + 0x1c)
        else
            zmm0_1 = *(rax_7 + 0x10)
        
        int32_t var_304_1 = zmm0_1.d
        
        if (zmm9_1.d f>= zmm7.d)
            zmm15 = *(rax_7 + 0x20)
        else
            zmm15 = *(rax_7 + 0x14)
        
        if (zmm6_1.d f>= zmm7.d)
            zmm11 = *(rax_7 + 0x24)
        else
            zmm11 = *(rax_7 + 0x18)
        
        int32_t var_270_1 = zmm11.d
        int32_t var_210 = (zmm10_1 ^ 0x80000000).d
        int32_t var_208_1 = (zmm6_1 ^ 0x80000000).d
        int32_t var_20c_1 = (zmm9_1 ^ 0x80000000).d
        float var_194
        float* rax_8
        rax_8, zmm6_1, zmm7, zmm8, zmm9_1, zmm10_1, zmm11, zmm12, zmm13 =
            sub_14170eae0(&var_228, &var_194, &var_210)
        zmm5 = var_304_1
        zmm1_1 = zx.o(*rax_8)
        int32_t rcx_5 = rax_8[2]
        zmm2_1.d = zmm5.d f- zmm1_1.d
        zmm3_1.d = zmm15.d f- _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55).d
        zmm11.d = zmm11.d f- rcx_5
        (&var_184)[sx.q(r12.d)] = r12.d
        zmm4_1.d = zmm12.d f- zmm2_1.d
        r12 = sx.q(var_188)
        zmm0_1 = _mm_unpacklo_ps(zmm5, zmm15.q)
        var_2ec = zmm3_1.d
        int32_t var_304_2 = zmm2_1.d
        zmm2_1.d = zmm13.d f- zmm3_1.d
        var_300 = zmm4_1.d
        uint64_t rcx_6 = r12 * 3
        *(&var_130 + (rcx_6 << 2)) = zmm0_1.q
        zmm3_1.d = zmm14.d f- zmm11.d
        (&var_128)[rcx_6] = var_270_1
        result = rax_8[2]
        zmm5.d = zmm9_1.d f* zmm2_1.d
        zmm0_1.d = zmm10_1.d f* zmm4_1.d
        var_2f8 = zmm3_1.d
        zmm3_1.d = zmm3_1.d f* zmm6_1.d
        zmm5.d = zmm5.d f+ zmm0_1.d
        *(&var_100 + (rcx_6 << 2)) = zmm1_1.q
        int32_t var_2fc_1 = zmm2_1.d
        (&var_f8)[rcx_6] = result
        zmm5.d = zmm5.d f+ zmm3_1.d
        int128_t var_150_1
        int32_t var_140_1
        
        if (zmm5.d f<= zmm7.d)
            r12 = zx.q(r12.d + 1)
            *(&var_160 + (rcx_6 << 2)) = var_300.q
            *(&var_160:8 + (rcx_6 << 2)) = var_2f8
            var_188 = r12.d
        label_14162fe33:
            zmm9_1 = var_2f0
            
            if (rbx == 0)
                zmm10_1 = 0x358637bd
            else
                zmm10_1 = 0x358637bd
                
                if (not(zmm5.d f< zmm7.d))
                    zmm5.d = zmm5.d f* zmm5.d
                    zmm5.d = zmm5.d f+ 9.99999997e-07f
                    rdi.b = zmm5.d f>= zmm9_1.d
        else
            zmm3_1 = *(arg4 + 4)
            zmm4_1 = *arg4
            zmm15 = *(arg4 + 8)
            zmm2_1.d = zmm10_1.d f* zmm4_1.d
            zmm0_1.d = zmm9_1.d f* zmm3_1.d
            zmm1_1.d = zmm6_1.d f* zmm15.d
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            
            if (zmm2_1.d f>= zmm7.d)
                result.b = 0
                break
            
            zmm1_1 = zmm8
            zmm0_1.d = zmm5.d f/ zmm2_1.d
            zmm8.d = zmm8.d f- zmm0_1.d
            
            if (zmm8.d f<= zmm1_1.d)
                goto label_14162fe33
            
            if (zmm8.d f> arg5)
                result.b = 0
                break
            
            zmm1_1 = zx.o(var_2b8.q)
            zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            var_268 = zmm1_1.q
            zmm12.d = zmm4_1.d f* zmm8.d
            r12 = zx.q(r12.d + 1)
            result_1 = result_2
            zmm13.d = zmm3_1.d f* zmm8.d
            var_188 = r12.d
            zmm12.d = zmm12.d f+ var_288.d
            zmm14.d = zmm15.d f* zmm8.d
            var_308 = 0
            zmm13.d = zmm13.d f+ var_288:4.d
            var_2a8:4.d = zmm9_1.d
            zmm14.d = zmm14.d f+ var_288:8.d
            zmm9_1 = 0x7f7fffff
            zmm3_1.d = zmm12.d f- zmm1_1.d
            var_2b8 = zmm12.d
            zmm4_1.d = zmm13.d f- zmm0_1.d
            int32_t var_2b4_1 = zmm13.d
            zmm2_1.d = zmm14.d f- result_1
            zmm0_1.d = var_160.d.d f+ zmm3_1.d
            result_2 = zmm14.d
            var_2a8.d = zmm10_1.d
            zmm1_1.d = var_160:4.d.d f+ zmm4_1.d
            var_2a0 = zmm6_1.d
            var_2f0 = 0x7f7fffff
            var_160.d = zmm0_1.d
            zmm0_1.d = var_160:8.d.d f+ zmm2_1.d
            var_160:4.d = zmm1_1.d
            zmm1_1.d = var_160:0xc.d.d f+ zmm3_1.d
            var_160:8.d = zmm0_1.d
            var_160:0xc.d = zmm1_1.d
            zmm0_1.d = var_150_1.d.d f+ zmm4_1.d
            zmm1_1.d = var_150_1:4.d.d f+ zmm2_1.d
            var_150_1.d = zmm0_1.d
            zmm0_1 = var_150_1:8.d
            var_150_1:4.d = zmm1_1.d
            zmm0_1.d = zmm0_1.d f+ zmm3_1.d
            zmm1_1.d = var_150_1:0xc.d.d f+ zmm4_1.d
            var_150_1:8.d = zmm0_1.d
            zmm0_1.d = var_140_1.d f+ zmm2_1.d
            var_150_1:0xc.d = zmm1_1.d
            zmm1_1.d = zmm12.d f- var_304_2
            zmm2_1.d = zmm13.d f- var_2ec
            var_140_1 = zmm0_1.d
            zmm0_1.d = zmm14.d f- zmm11.d
            *(&var_160 + (rcx_6 << 2)) = (_mm_unpacklo_ps(zmm1_1, zmm2_1.q)).q
            *(&var_160:8 + (rcx_6 << 2)) = zmm0_1.d
            zmm10_1 = 0x358637bd
        
        if (rdi.b != 0)
            int64_t* rax_22
            rax_22, zmm7, zmm8, zmm12, zmm13, zmm14 =
                sub_1416f4530(&var_238, &var_160, &var_188, &var_170, &var_130, &var_100)
            r12 = zx.q(var_188)
            zmm1_1 = zx.o(*rax_22)
            int32_t rax_23 = rax_22[1].d
            zmm11 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
            zmm15 = rax_23
            zmm5 = zmm1_1.d
        else
            int32_t rcx_7 = r12.d
            int32_t rax_13
            
            if (rcx_7 == 1)
                int64_t rax_18 = sx.q(var_184)
                int64_t rcx_14 = rax_18 * 3
                var_170[rax_18] = 0x3f800000
                zmm0_1 = zx.o(*(&var_160 + (rcx_14 << 2)))
                rax_13 = *(&var_160:8 + (rcx_14 << 2))
            else if (rcx_7 == 2)
                uint64_t* rax_17
                rax_17, zmm7, zmm8, zmm9_1 =
                    sub_1416e69d0(&var_2c8, &var_160, &var_184, &var_188, &var_170)
                r12 = zx.q(var_188)
                zmm0_1 = zx.o(*rax_17)
                rax_13 = rax_17[1].d
            else if (rcx_7 == 3)
                uint64_t var_1a0
                uint64_t* rax_16
                rax_16, zmm7, zmm8, zmm9_1, zmm10_1, zmm12, zmm13, zmm14 =
                    sub_1416fa750(&var_1a0, &var_160, &var_188, &var_170)
                r12 = zx.q(var_188)
                zmm0_1 = zx.o(*rax_16)
                rax_13 = rax_16[1].d
            else if (rcx_7 == 4)
                uint64_t var_1ac
                uint64_t* rax_15
                rax_15, zmm7, zmm8, zmm9_1, zmm10_1, zmm12, zmm13, zmm14 =
                    sub_1416f9c90(&var_1ac, &var_160, &var_188, &var_170)
                r12 = zx.q(var_188)
                zmm0_1 = zx.o(*rax_15)
                rax_13 = rax_15[1].d
            else
                int32_t var_2d0_1 = 0
                rax_13 = 0
                zmm0_1 = _mm_unpacklo_ps(zmm7, zmm7.q)
            
            int32_t var_178
            int64_t rdi_1 = sx.q(var_178)
            int64_t r11_1 = sx.q(var_184)
            int32_t var_180
            int64_t r10_1 = sx.q(var_180)
            int32_t var_17c
            int64_t r9_3 = sx.q(var_17c)
            int64_t rbx_1 = rdi_1 * 3
            uint64_t var_2e8_1 = zmm0_1.q
            int64_t r15_1 = r11_1 * 3
            int64_t r14_1 = r10_1 * 3
            rsi = r9_3 * 3
            int32_t rdx_6 = *(&var_160:8 + (r14_1 << 2))
            int32_t rcx_15 = *(&var_160:8 + (rsi << 2))
            int32_t r8_5 = *(&var_160:8 + (r15_1 << 2))
            zmm5 = var_2e8_1.d
            zmm11 = var_2e8_1:4.d
            int32_t rax_19 = *(&var_160:8 + (rbx_1 << 2))
            zmm15 = rax_13
            var_160:0xc.q = *(&var_160 + (r14_1 << 2))
            var_140_1:4.q = *(&var_160 + (rbx_1 << 2))
            zmm0_1 = var_170[r11_1]
            var_150_1:8.q = *(&var_160 + (rsi << 2))
            zmm1_1 = var_170[r10_1]
            var_160.q = *(&var_160 + (r15_1 << 2))
            zmm3_1 = var_170[rdi_1]
            int32_t rdi_2 = (&var_128)[r15_1]
            var_170[2] = var_170[r9_3].d
            zmm2_1 = zx.o(*(&var_130 + (r14_1 << 2)))
            var_170[0] = zmm0_1.d
            zmm0_1 = zx.o(*(&var_130 + (rbx_1 << 2)))
            var_170[1] = zmm1_1.d
            zmm1_1 = zx.o(*(&var_130 + (rsi << 2)))
            var_170[3] = zmm3_1.d
            zmm3_1 = zx.o(*(&var_130 + (r15_1 << 2)))
            var_150_1:4.d = rdx_6
            int32_t rdx_7 = (&var_128)[r14_1]
            var_140_1 = rcx_15
            int32_t rcx_16 = (&var_128)[rsi]
            var_140_1 = rax_19
            int32_t rax_20 = (&var_128)[rbx_1]
            var_124_1.q = zmm2_1.q
            zmm2_1 = zx.o(*(&var_100 + (r14_1 << 2)))
            int128_t var_114_1
            var_114_1:8.q = zmm0_1.q
            zmm0_1 = zx.o(*(&var_100 + (rbx_1 << 2)))
            var_124_1:0xc.q = zmm1_1.q
            zmm1_1 = zx.o(*(&var_100 + (rsi << 2)))
            var_128 = rdi_2
            rdi = (&var_f8)[r15_1]
            var_130 = zmm3_1.q
            zmm3_1 = zx.o(*(&var_100 + (r15_1 << 2)))
            var_124_1:8.d = rdx_7
            int32_t rdx_8 = (&var_f8)[r14_1]
            var_114_1:4.d = rcx_16
            int32_t rcx_17 = (&var_f8)[rsi]
            int32_t var_104_1 = rax_20
            int32_t rax_21 = (&var_f8)[rbx_1]
            var_f4_1.q = zmm2_1.q
            int128_t var_e4_1
            var_e4_1:8.q = zmm0_1.q
            var_184.o = data_142e11d00
            var_f8 = rdi
            zmm2_1.d = zmm11.d f* zmm11.d
            var_160:8.d = r8_5
            var_f4_1:0xc.q = zmm1_1.q
            zmm0_1.d = zmm5.d f* zmm5.d
            var_f4_1:8.d = rdx_8
            zmm1_1.d = zmm15.d f* zmm15.d
            var_e4_1:4.d = rcx_17
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            var_100 = zmm3_1.q
            int32_t var_d4_1 = rax_21
            zmm2_1.d = zmm2_1.d f+ zmm1_1.d
            zmm2_1.d f- zmm10_1.d
            rdi.b = zmm2_1.d f< zmm10_1.d
            var_2f0 = zmm2_1.d
            rsi.b = zmm2_1.d f>= zmm9_1.d
        
        result = zx.d(arg9)
        
        if (rdi.b != 0)
            goto label_141630219
        
        if (rsi.b != 0)
            goto label_141630219
        
        rcx_2 = var_2dc
        rbx = var_308
__security_check_cookie(rax_1 ^ &var_348)
return result
