// 函数: sub_1417743d0
// 地址: 0x1417743d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t arg_8 = 0
int64_t rdi = sx.q(*(arg4 + 8))
int64_t rcx = 0
int64_t var_218 = 0
int32_t var_20c = 0
int32_t var_210 = rdi.d

if (rdi.d s> 0)
    sub_1406105e0(&var_218)
    rcx = var_218

memset(rcx, 0, rdi << 2)
int64_t rdi_1 = sx.q(*(arg4 + 8))
void* rcx_2 = nullptr
void* var_208 = nullptr
int32_t var_1fc = 0
int32_t var_200 = rdi_1.d

if (rdi_1.d s> 0)
    sub_1406105e0(&var_208)
    rcx_2 = var_208

memset(rcx_2, 0, rdi_1 << 2)
int32_t zmm0 = *(arg1 + 0x34)
int32_t zmm1 = *(arg1 + 0x38)

if (zmm0 f<= zmm1 || not(zmm0 f> *(arg1 + 0x3c)))
    zmm0 = _mm_max_ss(*(arg1 + 0x3c), zmm1)

int32_t rcx_4 = *(arg4 + 8)
int32_t* var_1e0 = &arg_8
float zmm7[0x4]
float var_58[0x4] = zmm7
int64_t* var_1d8 = &var_218
arg_8 = zmm0
int64_t* var_1d0 = &var_208
int64_t (* var_1c8)(int64_t* arg1, int32_t* arg2) = sub_14176ff60
int64_t var_1f8
int32_t var_1c0 = &var_1f8
uint128_t zmm8
uint128_t var_68 = zmm8
var_1f8 = arg4
int64_t var_1f0 = arg2
void* var_1e8 = arg1
sub_14077b750(rcx_4, &var_1c8, 0)
int32_t r9 = *(arg4 + 8)
float zmm10[0x4] = zx.o(0)
float zmm4[0x4] = 0xff7fffff
float result[0x4] = zx.o(0)
int64_t rbx_1 = var_218
float zmm6[0x4] = zx.o(0)
void* r10 = var_208
int32_t i = 0
uint128_t zmm0_1
float zmm1_1[0x4]
uint128_t zmm2
float zmm3[0x4]
float zmm5_1[0x4]

if (r9 s> 0)
    if (r9 u>= 8)
        int32_t rax_2 = r9 & 0x80000007
        
        if (rax_2 s< 0)
            rax_2 = ((rax_2 - 1) | 0xfffffff8) + 1
        
        zmm5_1 = data_142fc73d0
        float (* rcx_6)[0x4] = rbx_1 - r10
        void* rax_5 = r10 + 0x10
        zmm3 = zx.o(0)
        zmm8 = zx.o(0)
        zmm4 = zmm5_1
        zmm7 = zx.o(0)
        
        do
            zmm1_1 = *(rcx_6 + rax_5 - 0x10)
            i += 8
            zmm2 = *(rax_5 - 0x10)
            zmm5_1 = _mm_max_ps(zmm5_1, zmm1_1)
            zmm7 = _mm_add_ps(zmm7, zmm2)
            zmm0_1 = _mm_mul_ps(zmm2, zmm1_1)
            zmm1_1 = *(rcx_6 + rax_5)
            zmm3 = _mm_add_ps(zmm3, zmm0_1)
            zmm0_1 = *rax_5
            rax_5 += 0x20
            zmm4 = _mm_max_ps(zmm4, zmm1_1)
            float temp0_7[0x4] = _mm_mul_ps(zmm1_1, zmm0_1)
            zmm6 = _mm_add_ps(zmm6, zmm0_1)
            zmm8 = _mm_add_ps(zmm8, temp0_7)
        while (i s< r9 - rax_2)
        
        float temp0_10[0x4] = _mm_max_ps(zmm5_1, zmm4)
        float temp0_11[0x4] = _mm_add_ps(zmm7, zmm6)
        float temp0_12[0x4] = _mm_add_ps(zmm3, zmm8)
        temp0_10[0].q = temp0_10 u>> 0x40
        float temp0_13[0x4] = _mm_max_ps(temp0_10, temp0_10)
        temp0_11[0].q = temp0_11 u>> 0x40
        zmm0_1 = _mm_shuffle_ps(temp0_13, temp0_13, 0xf5)
        zmm6 = _mm_add_ps(temp0_11, temp0_11)
        zmm4 = _mm_max_ss(temp0_13[0], zmm0_1.d)
        temp0_12[0].q = temp0_12 u>> 0x40
        result = _mm_add_ps(temp0_12, temp0_12)
        zmm0_1 = _mm_shuffle_ps(zmm6, zmm6, 0xf5)
        zmm6[0] = zmm6[0] f+ zmm0_1.d
        zmm0_1 = _mm_shuffle_ps(result, result, 0xf5)
        result[0] = result[0] f+ zmm0_1.d
    
    if (i s< r9)
        if (r9 - i s>= 4)
            void* r8_7 = rbx_1 - r10
            uint64_t rax_12 = zx.q(((r9 - i - 4) u>> 2) + 1)
            void* rcx_9 = r10 + ((sx.q(i) + 1) << 2)
            uint64_t i_5 = zx.q(rax_12.d)
            i += (rax_12 << 2).d
            uint64_t i_1
            
            do
                zmm1_1 = *(rcx_9 - 4)
                zmm2 = *(r8_7 + rcx_9 - 4)
                zmm6[0] = zmm6[0] + zmm1_1[0]
                zmm0_1 = zmm1_1
                zmm1_1 = *(rcx_9 + 4)
                float temp0_20[0x4] = _mm_max_ss(zmm2[0], zmm4[0])
                zmm0_1.d = zmm0_1.d f* zmm2.d
                zmm2 = *(rcx_9 + r8_7)
                zmm6[0] = zmm6[0] f+ *rcx_9
                result[0] = result[0] f+ zmm0_1.d
                zmm4 = zmm2
                zmm2.d = zmm2.d f* *rcx_9
                float temp0_21[0x4] = _mm_max_ss(zmm4[0], temp0_20[0])
                zmm3 = *(r8_7 + rcx_9 + 8)
                zmm6[0] = zmm6[0] + zmm1_1[0]
                result[0] = result[0] f+ zmm2.d
                zmm2 = *(r8_7 + rcx_9 + 4)
                zmm0_1.d = zmm1_1.d f* zmm2.d
                zmm5_1 = zmm2
                zmm2 = *(rcx_9 + 8)
                float temp0_22[0x4] = _mm_max_ss(zmm5_1[0], temp0_21[0])
                zmm1_1 = zmm2
                zmm6[0] = zmm6[0] f+ zmm2.d
                result[0] = result[0] f+ zmm0_1.d
                zmm1_1[0] = zmm1_1[0] * zmm3[0]
                rcx_9 += 0x10
                zmm0_1 = _mm_max_ss(zmm3.d, temp0_22[0])
                result[0] = result[0] + zmm1_1[0]
                zmm4 = zmm0_1
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
        
        if (i s< r9)
            uint128_t* rcx_10 = r10 + (sx.q(i) << 2)
            int64_t i_4 = sx.q(r9 - i)
            int64_t i_2
            
            do
                zmm2 = *(rcx_10 + rbx_1 - r10)
                zmm6[0] = zmm6[0] f+ *rcx_10
                zmm0_1 = zmm2
                zmm2.d = zmm2.d f* *rcx_10
                rcx_10 += 4
                zmm0_1 = _mm_max_ss(zmm0_1.d, zmm4[0])
                result[0] = result[0] f+ zmm2.d
                zmm4 = zmm0_1
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)

zmm3 = 0x3ee4f8b588e368f1
zmm0_1.q = fconvert.d(zmm6[0])

if (zmm0_1.q f>= zmm3[0].q)
    zmm2.d = (*(arg1 + 0x90)).d f- *(arg1 + 0x84)
    zmm0_1.d = (*(arg1 + 0x8c)).d f- *(arg1 + 0x80)
    zmm1_1 = *(arg1 + 0x94)
    zmm1_1[0] = zmm1_1[0] f- *(arg1 + 0x88)
    zmm2.d = zmm2.d f+ zmm0_1.d
    zmm2.d = zmm2.d f+ zmm1_1[0]
    zmm2.d = zmm2.d f* 0.333333343f
    
    if (_mm_cvtps_pd(zmm2.q).q f>= zmm3[0].q)
        int32_t i_3 = 0
        float zmm11[0x4] = 0x3f800000
        result[0] = result[0] / zmm6[0]
        float zmm12[0x4] = 0xbf800000
        zmm0_1.d = 1f f/ zmm2.d
        int128_t zmm13 = 0x80000000
        result[0] = result[0] f* zmm0_1.d
        zmm0_1.d = zmm0_1.d f* zmm4[0]
        float result_1[0x4] = result
        *arg6 = zmm0_1.d
        zmm1_1 = zx.o(*(arg1 + 0x98))
        zmm2 = zx.o(*(arg1 + 0xa4))
        float r14_1 = *(arg1 + 0xa0)
        float r12_1 = *(arg1 + 0xac)
        var_1f8 = zmm1_1.q
        float zmm15[0x4] = var_1f8:4.d
        var_1f0.d = r14_1
        uint128_t zmm14 = var_1f0.d
        var_1e8:4.d = r12_1
        result = var_1e8:4.d
        int64_t arg_20 = zmm1_1.q
        uint64_t var_120_1 = zmm2.q
        var_1f0 = zmm2.q
        
        do
            int64_t var_228
            float var_220_1
            
            if (i_3 s> 3)
                var_228 = zmm2.q
                var_220_1 = r12_1
                
                if (i_3 == 5)
                    var_228.d = var_1f8.d[0]
                else if (i_3 == 6)
                    var_228:4.d = zmm15[0]
                else if (i_3 == 7)
                    var_220_1 = zmm14.d
            else
                var_228 = zmm1_1.q
                var_220_1 = r14_1
                
                if (i_3 == 1)
                    var_228.d = var_1f0:4.d[0]
                else if (i_3 == 2)
                    var_228:4.d = var_1e8.d[0]
                else if (i_3 == 3)
                    var_220_1 = result[0]
            
            zmm5_1 = var_228.d
            bool cond:0_1 = zmm5_1[0] f> var_1f0:4.d
            zmm1_1 = var_228:4.d
            zmm7 = zmm5_1
            zmm4 = var_220_1
            zmm15[0] = zmm15[0] - zmm1_1[0]
            zmm0_1 = var_1f8.d
            zmm7[0] = zmm7[0] f- var_1f0:4.d
            zmm2.d = zmm1_1.d f- var_1e8.d
            zmm6 = zmm4
            zmm0_1.d = zmm0_1.d f- zmm5_1[0]
            float var_1b4_1 = zmm15[0]
            zmm6[0] = zmm6[0] - result[0]
            zmm8.d = zmm14.d f- zmm4[0]
            float var_1a8_1 = zmm7[0]
            int32_t var_1a4_1 = zmm2.d
            int32_t var_1b8 = zmm0_1.d
            float var_1a0_1 = zmm6[0]
            int32_t var_1b0_1 = zmm8.d
            
            if (cond:0_1 || zmm1_1[0] f> var_1e8.d || zmm4[0] > result[0] || zmm5_1[0] f< var_1f8.d
                    || zmm1_1[0] < zmm15[0] || zmm4[0] f< zmm14.d)
                if (not(zmm7[0] > zmm10[0]))
                    if (zmm0_1.d f<= zmm10[0])
                        zmm7 = zmm10
                    else
                        zmm7 = zmm0_1 ^ zmm13
                
                if (not(zmm2.d f> zmm10[0]))
                    if (zmm15[0] <= zmm10[0])
                        zmm2 = zmm10
                    else
                        zmm2 = zmm15 ^ zmm13
                
                if (not(zmm6[0] > zmm10[0]))
                    if (zmm8.d f<= zmm10[0])
                        zmm6 = zmm10
                    else
                        zmm6 = zmm8 ^ zmm13
                
                zmm3 = zmm2
                zmm3[0] = zmm3[0] f* zmm2.d
                zmm0_1.d = zmm7.d f* zmm7[0]
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm3[0] = zmm3[0] f+ zmm0_1.d
                zmm3[0] = zmm3[0] + zmm6[0]
                
                if (not(zmm3[0] >= 9.99999975e-05f))
                    int32_t rsi_6 = rsi | 0x800
                    zmm7 = zmm11
                    int32_t rcx_24 = rsi_6 & 0xffffbfff
                    zmm8 = zmm10
                    zmm6 = zmm10
                    
                    if ((rsi_6 & 0x4000) == 0)
                        rcx_24 = rsi_6
                    
                    int32_t rdx_13 = rcx_24 & 0xffffdfff
                    
                    if ((rcx_24 & 0x2000) == 0)
                        rdx_13 = rcx_24
                    
                    int32_t rsi_8 = rdx_13 & 0xffffefff
                    
                    if ((rdx_13 & 0x1000) == 0)
                        rsi_8 = rdx_13
                    
                    rsi = rsi_8 & 0xfffff7ff
                    goto label_141774c97
                
                float temp0_31[0x4] = _mm_sqrt_ss(zx.o(0)[0], zmm3[0])
                bool cond:1_1 = temp0_31[0] >= 9.99999975e-05f
                zmm0_1.d = zmm11.d f/ temp0_31[0]
                zmm2.d = zmm2.d f* zmm0_1.d
                zmm7[0] = zmm7[0] f* zmm0_1.d
                zmm8 = zmm2
                zmm6[0] = zmm6[0] f* zmm0_1.d
                
                if (not(cond:1_1))
                label_141774c97:
                    zmm7[0] - zmm10[0]
                    
                    if (not(zmm7[0] <= zmm10[0]))
                        zmm7 = zmm11
                    else if (not(zmm7[0] >= zmm10[0]))
                        zmm7 = zmm12
                    
                    zmm8.d f- zmm10[0]
                    
                    if (not(zmm8.d f<= zmm10[0]))
                        zmm8 = zmm11
                    else if (not(zmm8.d f>= zmm10[0]))
                        zmm8 = zmm12
                    
                    zmm6[0] - zmm10[0]
                    
                    if (not(zmm6[0] <= zmm10[0]))
                        zmm6 = zmm11
                    else if (not(zmm6[0] >= zmm10[0]))
                        zmm6 = zmm12
                    
                    zmm2.d = zmm7.d f* zmm7[0]
                    zmm0_1.d = zmm8.d f* zmm8.d
                    zmm6[0] = zmm6[0] * zmm6[0]
                    zmm2.d = zmm2.d f+ zmm0_1.d
                    zmm2.d = zmm2.d f+ zmm6[0]
                    
                    if (not(zmm2.d f<= 9.99999994e-09f))
                        zmm5_1 = 0x3f000000
                        zmm3 = zx.o(0)
                        zmm3[0] = zmm2.d
                        float temp0_32[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                        zmm3[0] = zmm3[0] * 0.5f
                        zmm0_1.d = temp0_32.d f* temp0_32[0]
                        zmm3[0] = zmm3[0] f* zmm0_1.d
                        zmm2.d = 0.5f - zmm3[0]
                        zmm0_1.d = temp0_32.d f* zmm2.d
                        temp0_32[0] = temp0_32[0] f+ zmm0_1.d
                        temp0_32[0] = temp0_32[0] * temp0_32[0]
                        zmm3[0] = zmm3[0] * temp0_32[0]
                        zmm5_1[0] = 0.5f - zmm3[0]
                        zmm0_1.d = temp0_32.d f* zmm5_1[0]
                        temp0_32[0] = temp0_32[0] f+ zmm0_1.d
                        zmm7[0] = zmm7[0] * temp0_32[0]
                        zmm8.d = zmm8.d f* temp0_32[0]
                        zmm6[0] = zmm6[0] * temp0_32[0]
            else
                zmm2 = _mm_max_ss(zmm2.d, zmm15[0])
                zmm0_1 = _mm_max_ss(zmm0_1.d, zmm7[0])
                float temp0_28[0x4] = _mm_max_ss(zmm6[0], zmm8.d)
                uint64_t rax_15
                
                if (zmm0_1.d f<= zmm2.d)
                    int32_t rax_16
                    rax_16.b = zmm2.d f<= temp0_28[0]
                    rax_15 = zx.q(rax_16 + 1)
                else
                    rax_15 = 2
                    
                    if (zmm0_1.d f> temp0_28[0])
                        rax_15 = 0
                
                int32_t rcx_11 = rax_15.d
                int32_t var_1a8
                int32_t rcx_16
                int32_t rdx_6
                int64_t* r8_10
                bool cond:11_1
                
                if ((&var_1b8)[rax_15].d f>= (&var_1a8)[rax_15])
                    int64_t* rax_25
                    int32_t rcx_17
                    
                    if (rax_15.d != 0)
                        int32_t* rax_26
                        
                        if (rcx_11 != 1)
                            int64_t var_15c = 0
                            rax_26 = &var_15c
                            int32_t var_154_1 = 0x3f800000
                            rcx_17 = 0x604
                        else
                            int32_t var_168 = 0
                            rax_26 = &var_168
                            int64_t var_164_1 = 0x3f800000
                            rcx_17 = 0x504
                        
                        int32_t var_f8_1 = rax_26[2]
                        uint64_t var_100
                        rax_25 = &var_100
                        var_100 = *rax_26
                    else
                        int64_t var_174 = 0x3f800000
                        rax_25 = &var_174
                        int32_t var_16c_1 = 0
                        rcx_17 = 0x84
                    
                    zmm2 = zx.o(*rax_25)
                    int32_t var_150
                    r8_10 = &var_150
                    int32_t rax_28 = rax_25[1].d
                    int32_t rsi_4 = rsi | 2 | rcx_17
                    int32_t rcx_19 = rsi_4 & 0xfffffbff
                    var_150 = (zmm2 ^ zmm13).d
                    zmm1_1 = zmm2
                    float temp0_29[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                    
                    if ((rsi_4 & 0x400) == 0)
                        rcx_19 = rsi_4
                    
                    int32_t var_148_1 = (rax_28 ^ zmm13).d
                    int32_t rdx_8 = rcx_19 & 0xfffffdff
                    float var_14c_1 = (temp0_29 ^ zmm13)[0]
                    
                    if ((rcx_19 & 0x200) == 0)
                        rdx_8 = rcx_19
                    
                    rcx_16 = rdx_8 & 0xfffffeff
                    
                    if ((rdx_8 & 0x100) == 0)
                        rcx_16 = rdx_8
                    
                    rdx_6 = rcx_16 & 0xffffff7f
                    cond:11_1 = (rcx_16.b & 0x80) == 0
                else
                    int64_t* rax_17
                    int32_t rcx_12
                    
                    if (rax_15.d != 0)
                        int32_t* rax_18
                        
                        if (rcx_11 != 1)
                            int64_t var_180 = 0
                            rax_18 = &var_180
                            int32_t var_178_1 = 0x3f800000
                            rcx_12 = 0x60
                        else
                            int32_t var_18c = 0
                            rax_18 = &var_18c
                            int64_t var_188_1 = 0x3f800000
                            rcx_12 = 0x50
                        
                        int32_t var_110_1 = rax_18[2]
                        uint64_t var_118
                        rax_17 = &var_118
                        var_118 = *rax_18
                    else
                        int64_t var_198 = 0x3f800000
                        rax_17 = &var_198
                        int32_t var_190_1 = 0
                        rcx_12 = 8
                    
                    uint64_t var_10c
                    r8_10 = &var_10c
                    int32_t rsi_2 = rsi | 1 | rcx_12
                    int32_t var_104_1 = rax_17[1].d
                    int32_t rcx_14 = rsi_2 & 0xffffffbf
                    var_10c = *rax_17
                    
                    if ((rsi_2.b & 0x40) == 0)
                        rcx_14 = rsi_2
                    
                    int32_t rdx_4 = rcx_14 & 0xffffffdf
                    
                    if ((rcx_14.b & 0x20) == 0)
                        rdx_4 = rcx_14
                    
                    rcx_16 = rdx_4 & 0xffffffef
                    
                    if ((rdx_4.b & 0x10) == 0)
                        rcx_16 = rdx_4
                    
                    rdx_6 = rcx_16 & 0xfffffff7
                    cond:11_1 = (rcx_16.b & 8) == 0
                
                if (cond:11_1)
                    rdx_6 = rcx_16
                
                zmm0_1 = zx.o(*r8_10)
                int32_t var_138_1 = r8_10[1].d
                int32_t rcx_22 = rdx_6 & 0xfffffffb
                uint32_t var_140_1 = zmm0_1.d
                
                if ((rdx_6.b & 4) == 0)
                    rcx_22 = rdx_6
                
                _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                int32_t rdx_11 = rcx_22 & 0xfffffffd
                
                if ((rcx_22.b & 2) == 0)
                    rdx_11 = rcx_22
                
                rsi = rdx_11 & 0xfffffffe
                
                if ((rdx_11.b & 1) == 0)
                    rsi = rdx_11
            
            float var_130
            zmm6, zmm7, zmm8, result, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                sub_14177c630(arg1, &var_228, &var_130)
            int32_t var_128
            zmm1_1 = var_128
            int32_t var_12c
            zmm2.d = var_12c.d f* zmm8.d
            zmm0_1.d = var_130.d f* zmm7[0]
            zmm1_1[0] = zmm1_1[0] * zmm6[0]
            zmm2.d = zmm2.d f+ zmm0_1.d
            zmm2.d = zmm2.d f+ zmm1_1[0]
            
            if (not(zmm2.d f>= zmm10[0]))
                if (zmm2.d f>= zmm12[0])
                    zmm2 = _mm_min_ss(zmm2.d, zmm11[0])
                else
                    zmm2 = zmm12
                
                zmm0_1.d = __andps_xmmxud_memxud(acosf(zmm2.d), data_142d3f770).d f+ *arg5
                *arg5 = zmm0_1.d
            
            zmm1_1 = zx.o(arg_20)
            i_3 += 1
            zmm2 = zx.o(var_120_1)
        while (i_3 s< 8)
        
        rbx_1 = var_218
        r10 = var_208
        result = result_1
    else
        result = 0x7f7fffff
        *arg6 = 0x7f7fffff
else
    result = 0x7f7fffff
    *arg6 = 0x7f7fffff

if (r10 != 0)
    sub_140a74f90(r10)
    rbx_1 = var_218

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

return result
