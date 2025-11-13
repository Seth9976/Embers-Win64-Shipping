// 函数: sub_14145ac90
// 地址: 0x14145ac90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xa8)
uint64_t r15 = arg2
void* rdi = arg1
int32_t r14 = 0

if (rax s> 0)
    int64_t rsi_1 = 0
    
    do
        int64_t rdi_1 = *(rdi + 0xa0)
        arg2 = sub_141438c70(*(rsi_1 + rdi_1 + 0x18b0), *(rsi_1 + rdi_1 + 0x18b8), arg1.b)
        void* rcx_1 = *(rsi_1 + rdi_1 + 8)
        rdi = arg1
        
        if (rcx_1 != 0)
            arg2 = sub_141245880(rcx_1, *(rdi + 8))
        
        rax = *(rdi + 0xa8)
        r14 += 1
        rsi_1 += 0x5240
    while (r14 s< rax)

void* rcx_3 = *(rdi + 8)
uint64_t r12
r12.b = 0
char arg_18 = 0

if (*(rcx_3 + 8) s<= 1)
    arg2 = 0
    
    if (rax s> 0)
        int64_t rcx_2 = 0
        
        do
            int64_t rax_1 = *(rdi + 0xa0)
            rcx_2 += 0x5240
            arg2 = zx.q(arg2.d + 1)
            *(rcx_2 + rax_1 - 0x1a0) = 0
            __builtin_memcpy(rcx_2 + rax_1 - 0x190, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00", 
                0x21)
        while (arg2.d s< *(rdi + 0xa8))
        
        rcx_3 = *(rdi + 8)
    
    if ((*(rdi + 0x3c) & 0x1000) == 0 || data_1439b635c == 0)
        r12.b = 0
    else
        r12.b = 1
    
    arg_18 = r12.b

uint64_t var_418
uint128_t zmm6

if (*(rcx_3 + 0x1148) s> 0 && data_1439b6db8 != 0)
    char rax_2
    rax_2, arg2 = sub_140a54810()
    
    if (rax_2 != 0)
        int64_t rdx_2 = *(rdi + 8)
        var_418 = r15
        arg2, zmm6 = sub_14123de20(rdx_2 + 0x1150, rdx_2, rdi, 1)

void*** r15_1 = nullptr
int64_t* r9_3 = *(rdi + 8) + 0xee8
int32_t var_354 = 1
int32_t r11 = r9_3[5].d
void* r10 = &r9_3[2]
void* var_350 = r10
int32_t rcx_5 = 0
int32_t var_358 = 0
int32_t r8_3 = 0
int32_t var_348 = 0xffffffff
int64_t var_344 = 0

if (r11 != 0)
    void* rax_3 = *(r10 + 0x10)
    
    if (rax_3 != 0)
        r10 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    arg2 = zx.q(*r10)
    
    if (arg2.d != 0)
    label_14145ae78:
        int32_t rax_10 = neg.d(arg2.d) & arg2.d
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_354_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_344.d = r8_3 - rax_11 + 0x1f
        
        if (r8_3 - rax_11 + 0x1f s> r11)
            var_344.d = r11
    else
        while (true)
            arg2 = sx.q(rcx_5)
            r8_3 += 0x20
            rcx_5 += 1
            var_344:4.d = r8_3
            var_358 = rcx_5
            
            if (arg2.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            arg2 = zx.q(*(r10 + (arg2 << 2) + 4))
            int32_t var_348_1 = 0xffffffff
            
            if (arg2.d != 0)
                goto label_14145ae78
        
        var_344.d = r11

int64_t* var_1a8 = r9_3
float var_1a0[0x4] = var_358.o
int64_t var_190 = 0xffffffff

if (0 s< r11)
    arg2 = 0
    uint128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    float zmm8[0x4] = 0x3951b717
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    float zmm10[0x4] = 0x3f800000
    float zmm11[0x4] = 0x7fffffff
    float zmm12[0x4] = 0x3f400000
    float zmm13[0x4]
    float var_b8_1[0x4] = zmm13
    float zmm14[0x4] = 0x3f000000
    uint128_t zmm15 = zx.o(0)
    int32_t var_3b0_1 = 0
    
    while (true)
        void* r13_1 = *(*r9_3 + sx.q(arg2.d) * 0x30 + 0x20)
        int32_t i = r15_1.d
        void*** rax_15 = r15_1
        int32_t i_1 = i
        void*** var_2a0_1 = rax_15
        
        if (*(rdi + 0xa8) s> 0)
            do
                int64_t* r14_1 = *(r13_1 + 0x20)
                void* rsi_3 = rax_15 * 0x5240 + *(rdi + 0xa0)
                void* rdi_3 = sx.q(arg2.d) * 0x78 + *(rsi_3 + 0x18d0)
                float zmm0[0x4]
                float zmm1[0x4]
                float zmm2[0x4]
                uint128_t zmm3
                
                if (*(r14_1 + 0x13c) - 1 u<= 2)
                    void var_120
                    (*(*r14_1 + 0x10))(r14_1, &var_120)
                    void var_114
                    
                    if (sub_141f8daa0(rsi_3 + 0xbf0, &var_120, &var_114) != 0)
                        if (zmm10[0] f<= *(rsi_3 + 0x2bc))
                            *(rdi_3 + 0x40) |= 1
                        else
                            int32_t var_218
                            (*(*r14_1 + 0x10))(r14_1, &var_218)
                            zmm1 = var_218
                            int32_t var_214
                            zmm6.d = var_214.d f- *(rsi_3 + 0x610)
                            zmm1[0] = zmm1[0] f- *(rsi_3 + 0x60c)
                            int32_t var_210
                            zmm0 = var_210
                            zmm0[0] = zmm0[0] f- *(rsi_3 + 0x614)
                            int64_t rax_23 = *r14_1
                            zmm6.d = zmm6.d f* zmm6.d
                            zmm1[0] = zmm1[0] * zmm1[0]
                            zmm0[0] = zmm0[0] * zmm0[0]
                            zmm6.d = zmm6.d f+ zmm1[0]
                            zmm6.d = zmm6.d f+ zmm0[0]
                            (*(rax_23 + 0xf0))(r14_1)
                            (*(*r14_1 + 0xf0))(r14_1)
                            zmm2 = data_1439b6da8
                            int32_t var_20c
                            zmm2[0] = zmm2[0] f/ var_20c
                            zmm7.d = zmm0.d f* zmm0[0]
                            zmm2 = _mm_min_ss(zmm2[0], zmm8[0])
                            zmm7.d = zmm7.d f* data_1439b6dcc
                            zmm2[0] = zmm2[0] f* *(rsi_3 + 0xd5c)
                            zmm7.d = zmm7.d f* data_1439b6dcc
                            zmm2[0] = zmm2[0] * zmm2[0]
                            zmm2[0] = zmm2[0] f* zmm6.d
                            
                            if (zmm2[0] >= zmm10[0]
                                    || (not(zmm7.d f== zmm15.d) && zmm6.d f>= zmm7.d))
                                *(rdi_3 + 0x40) &= 0xfffffffe
                                *(rdi_3 + 0x40) |= r15_1.d
                            else
                                *(rdi_3 + 0x40) &= 0xfffffffe
                                *(rdi_3 + 0x40) |= 1
                    
                    i = i_1
                else
                    *(rdi_3 + 0x40) |= 1
                    
                    if (r12.b != 0 && (*(r13_1 + 0x64) & 4) != 0)
                        zmm1 = *(*(r13_1 + 0x20) + 0x20)
                        float var_370 = zmm1[0]
                        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        float var_368_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                        float var_36c_1 = zmm0[0]
                        int32_t var_228
                        sub_1422f9c00(rsi_3, &var_228, &var_370)
                        zmm0 = *(rsi_3 + 0x614)
                        zmm0[0] = zmm0[0] - var_368_1
                        zmm1 = *(rsi_3 + 0x60c)
                        zmm2 = *(rsi_3 + 0x610)
                        zmm2[0] = zmm2[0] - var_36c_1
                        zmm1[0] = zmm1[0] - var_370
                        zmm0[0] = zmm0[0] * zmm0[0]
                        zmm2[0] = zmm2[0] * zmm2[0]
                        zmm1[0] = zmm1[0] * zmm1[0]
                        zmm2[0] = zmm2[0] + zmm1[0]
                        zmm2[0] = zmm2[0] + zmm0[0]
                        int32_t var_21c
                        zmm0 = var_21c
                        bool cond:2_1 = zmm0[0] f< zmm15.d
                        zmm6.d = _mm_sqrt_ss(zx.o(0).d, zmm2[0]).d f+ 200f
                        
                        if (not(cond:2_1))
                            int64_t* rcx_10 = *(r13_1 + 0x20)
                            
                            if (*(rcx_10 + 0x13c) == 0)
                                goto label_14145b0ab
                            
                            (*(*rcx_10 + 0x18))(rcx_10, zmm0)
                            zmm0[0] = zmm0[0] * 5f
                            
                            if (not(zmm6.d f>= zmm0[0]))
                                zmm0 = var_21c
                            label_14145b0ab:
                                *(rsi_3 + 0x50d0) = 1
                                zmm10[0] = zmm10[0] / zmm0[0]
                                int32_t var_224
                                zmm10[0] = zmm10[0] f* var_224
                                zmm10[0] = zmm10[0] f* var_228
                                *(rsi_3 + 0x50a4) = zmm10[0]
                                *(rsi_3 + 0x50a0) = zmm10[0]
                                int128_t var_110
                                sub_140acc920(&var_110, r13_1 + 0x74)
                                *(rsi_3 + 0x50b0) = var_110
                                float var_100[0x4]
                                sub_140acc920(&var_100, r13_1 + 0x74)
                                *(rsi_3 + 0x50c0) = var_100
                                zmm2 = *(r13_1 + 0x68)
                                zmm2[0] = zmm2[0] f* *(rsi_3 + 0x50b0)
                                *(rsi_3 + 0x50b0) = zmm2[0]
                                zmm2[0] = zmm2[0] f* *(rsi_3 + 0x50b4)
                                *(rsi_3 + 0x50b4) = zmm2[0]
                                zmm2[0] = zmm2[0] f* *(rsi_3 + 0x50b8)
                                *(rsi_3 + 0x50b8) = zmm2[0]
                                zmm3 = *(r13_1 + 0x68)
                                zmm0 = zmm3
                                zmm1 = zmm3
                                zmm0[0] = zmm0[0] f* *(rsi_3 + 0x50c0)
                                *(rsi_3 + 0x50c0) = zmm0[0]
                                zmm1[0] = zmm1[0] f* *(rsi_3 + 0x50c4)
                                *(rsi_3 + 0x50c4) = zmm1[0]
                                zmm3.d = zmm3.d f* *(rsi_3 + 0x50c8)
                                *(rsi_3 + 0x50c8) = zmm3.d
                        
                        i = i_1
                
                if (*(rsi_3 + 0xd74) != 0 && (*(rdi_3 + 0x40) & 1) != 0 && (r14_1[0x27].b & 4) != 0
                        && *(r14_1 + 0x13c) != 0)
                    zmm8 = r14_1[0x16].d
                    zmm7 = *(r14_1 + 0xb4)
                    zmm6 = r14_1[0x17].d
                    int64_t rax_26 = *r14_1
                    float var_3d8 = zmm8[0]
                    zmm8[0] = zmm8[0] f- *(rsi_3 + 0x60c)
                    int32_t var_3d4_1 = zmm7.d
                    zmm7.d = zmm7.d f- *(rsi_3 + 0x610)
                    int32_t var_3d0_1 = zmm6.d
                    zmm6.d = zmm6.d f- *(rsi_3 + 0x614)
                    float var_3c0 = zmm8[0]
                    zmm8[0] = zmm8[0] * zmm8[0]
                    int32_t var_3bc_1 = zmm7.d
                    zmm9.d = zmm7.d f* zmm7.d
                    zmm1 = zmm6
                    zmm1[0] = zmm1[0] f* zmm6.d
                    zmm9.d = zmm9.d f+ zmm8[0]
                    int32_t var_3b8_1 = zmm6.d
                    zmm9.d = zmm9.d f+ zmm1[0]
                    (*(rax_26 + 0x18))(r14_1, zmm1)
                    zmm8[0] = zmm8[0] * zmm8[0]
                    
                    if (not(zmm9.d f>= zmm8[0]))
                        void*** var_1b0_1 = r15_1
                        void var_208
                        (*(*r14_1 + 0x68))(r14_1, &var_208)
                        int64_t* rcx_20 = data_143db18d0
                        
                        if (rcx_20 == 0)
                            sub_140a53c40()
                            rcx_20 = data_143db18d0
                        
                        int64_t r8_7
                        r8_7.b = 1
                        int64_t* rax_29 =
                            (*(*rcx_20 + 0xb0))(rcx_20, r.ReflectionCaptureResolution", r8_7)
                        void*** rbx_2
                        
                        if (rax_29 == 0)
                            rbx_2 = r15_1
                        else
                            int64_t rdx_12 = *rax_29
                            rbx_2 = (*(rdx_12 + 0x58))(rax_29, rdx_12)
                        
                        void*** rcx_22
                        
                        if (data_143de5480 == 0)
                            rcx_22 = r15_1
                        else
                            rcx_22.b = GetCurrentThreadId() != data_143de5470
                        
                        zmm3 = zx.o(*(rbx_2 + (rcx_22 << 2)))
                        zmm0 = _mm_sqrt_ss(0, zmm9.d)
                        zmm3 = _mm_cvtepi32_ps(zmm3)
                        zmm0[0] = zmm0[0] * zmm12[0]
                        zmm0[0] = zmm0[0] f/ zmm3.d
                        float var_1cc
                        
                        if (not(zmm0[0] < var_1cc))
                            var_1cc = zmm0[0]
                        
                        zmm8 = _mm_and_ps(zmm8, zmm11)
                        zmm7 = _mm_and_ps(zmm7, zmm11)
                        bool cond:4_1 = zmm8[0] f<= zmm7.d
                        zmm6 = _mm_and_ps(zmm6, zmm11)
                        float var_298 = zmm8[0]
                        int32_t var_294_1 = zmm7.d
                        int32_t var_290_1 = zmm6.d
                        uint64_t rcx_23
                        
                        if (cond:4_1)
                            int32_t rcx_24
                            rcx_24.b = zmm7.d f<= zmm6.d
                            rcx_23 = zx.q(rcx_24 + 1)
                        else
                            rcx_23 = 2
                            
                            if (zmm8[0] f> zmm6.d)
                                rcx_23 = zx.q(r15_1.d)
                        
                        int32_t zmm5_1 = (&var_298)[rcx_23]
                        int32_t r8_8 = (rcx_23 + 1).d
                        zmm1 = zmm10
                        zmm3.d = zmm3.d f* zmm14[0]
                        zmm1[0] = zmm1[0] f/ zmm5_1
                        int64_t rdx_15 = sx.q(r8_8 u% 3)
                        float zmm4_1 = zmm10[0]
                        zmm2 = zmm1
                        zmm2[0] = zmm2[0] * (&var_3c0)[rdx_15]
                        zmm4_1 = zmm4_1 f/ zmm3.d
                        zmm2[0] = zmm2[0] f* zmm3.d
                        int32_t rcx_27 = int.d(zmm2[0])
                        
                        if (rcx_27 != 0x80000000
                                && not(_mm_cvtepi32_ps(zx.o(rcx_27))[0] == zmm2[0]))
                            zmm2 = _mm_cvtepi32_ps(zx.o(rcx_27
                                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
                        
                        zmm2[0] = zmm2[0] + zmm14[0]
                        zmm2[0] = zmm2[0] * zmm4_1
                        zmm2[0] = zmm2[0] f* zmm5_1
                        (&var_3c0)[rdx_15] = zmm2[0]
                        int64_t rdx_18 = sx.q((r8_8 + 1) u% 3)
                        zmm1[0] = zmm1[0] * (&var_3c0)[rdx_18]
                        zmm1[0] = zmm1[0] f* zmm3.d
                        int32_t rcx_31 = int.d(zmm1[0])
                        
                        if (rcx_31 != 0x80000000
                                && not(_mm_cvtepi32_ps(zx.o(rcx_31))[0] == zmm1[0]))
                            zmm1 = _mm_cvtepi32_ps(zx.o(rcx_31
                                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
                        
                        int32_t var_1f8
                        zmm6 = var_1f8
                        zmm1[0] = zmm1[0] + zmm14[0]
                        int32_t var_1f4
                        zmm7 = var_1f4
                        int32_t var_1f0
                        zmm8 = var_1f0
                        int64_t rax_38 = *r14_1
                        int32_t var_3a8_1 = zmm6.d
                        zmm1[0] = zmm1[0] * zmm4_1
                        int32_t var_3a4_1 = zmm7.d
                        float var_3a0_1 = zmm8[0]
                        zmm1[0] = zmm1[0] f* zmm5_1
                        (&var_3c0)[rdx_18] = zmm1[0]
                        zmm11 = var_3c0
                        zmm12 = var_3bc_1
                        zmm11[0] = zmm11[0] f+ *(rsi_3 + 0x60c)
                        zmm13 = var_3b8_1
                        zmm1 = zmm12
                        zmm1[0] = zmm1[0] f+ *(rsi_3 + 0x610)
                        zmm13[0] = zmm13[0] f+ *(rsi_3 + 0x614)
                        var_3d8 = zmm11[0]
                        float var_3d4_2 = zmm1[0]
                        float var_3d0_2 = zmm13[0]
                        char rax_39 = (*(rax_38 + 0x38))(r14_1)
                        float var_1bc
                        
                        if (rax_39 == 0)
                            zmm0 = var_1cc
                            zmm1 = zmm0
                            zmm0[0] = zmm0[0] * zmm0[0]
                            zmm1[0] = zmm1[0] * 6.28318548f
                            zmm0[0] = zmm0[0] * 12.566371f
                            zmm1[0] = zmm1[0] * var_1bc
                            zmm1[0] = zmm1[0] + zmm0[0]
                            zmm0 = 0x40800000
                            zmm0[0] = 4f / zmm1[0]
                            zmm6.d = zmm6.d f* zmm0[0]
                            zmm7.d = zmm7.d f* zmm0[0]
                            zmm8[0] = zmm8[0] * zmm0[0]
                            var_3a8_1 = zmm6.d
                            int32_t var_3a4_2 = zmm7.d
                            float var_3a0_2 = zmm8[0]
                        
                        int32_t var_1fc
                        
                        if ((*(*r14_1 + 0x30))(r14_1, zmm1) == 0)
                            zmm1 = var_1fc
                            zmm0 = zmm9
                            zmm0[0] = zmm0[0] + zmm10[0]
                            zmm1[0] = zmm1[0] * zmm1[0]
                            zmm1[0] = zmm1[0] f* zmm9.d
                            zmm6.d = zmm6.d f* zmm0[0]
                            zmm7.d = zmm7.d f* zmm0[0]
                            zmm8[0] = zmm8[0] * zmm0[0]
                            zmm10[0] = zmm10[0] - zmm1[0]
                            var_3a8_1 = zmm6.d
                            int32_t var_3a4_3 = zmm7.d
                            float var_3a0_3 = zmm8[0]
                            int32_t var_1ec
                            zmm6 = powf(zmm10[0], var_1ec[0])
                        else
                            zmm0 = var_1fc
                            zmm0[0] = zmm0[0] * zmm0[0]
                            zmm0[0] = zmm0[0] f* zmm9.d
                            zmm0[0] = zmm0[0] * zmm0[0]
                            zmm6.d = zmm10.d f- zmm0[0]
                            zmm6.d = zmm6.d f* zmm6.d
                        zmm3.d = zmm12.d f* zmm12[0]
                        zmm11[0] = zmm11[0] * zmm11[0]
                        zmm13[0] = zmm13[0] * zmm13[0]
                        zmm3.d = zmm3.d f+ zmm11[0]
                        zmm3.d = zmm3.d f+ zmm13[0]
                        
                        if (not(zmm3.d f== zmm10[0]))
                            if (zmm3.d f>= 9.99999994e-09f)
                                float zmm4_2[0x4] = zx.o(0)
                                zmm4_2[0] = zmm14[0]
                                zmm0 = zmm3
                                zmm3 = zmm0
                                float zmm5_2[0x4] = _mm_rsqrt_ss(zmm0[0], zmm3.d)
                                zmm3.d = zmm3.d f* zmm4_2[0]
                                zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                                zmm1 = zmm3
                                zmm1[0] = zmm1[0] * zmm5_2[0]
                                zmm4_2[0] = zmm4_2[0] - zmm1[0]
                                zmm5_2[0] = zmm5_2[0] * zmm4_2[0]
                                zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
                                zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
                                zmm3.d = zmm3.d f* zmm5_2[0]
                                zmm4_2[0] = zmm4_2[0] f- zmm3.d
                                zmm5_2[0] = zmm5_2[0] * zmm4_2[0]
                                zmm5_2[0] = zmm5_2[0] + zmm5_2[0]
                                float var_3e4_1 = zmm5_2[0]
                                zmm5_2[0] = zmm5_2[0] * zmm11[0]
                                zmm5_2[0] = zmm5_2[0] * zmm12[0]
                                zmm5_2[0] = zmm5_2[0] * zmm13[0]
                                zmm11 = zmm5_2
                                zmm12 = zmm5_2
                                zmm13 = zmm5_2
                            else
                                zmm11 = data_143dbb1f8
                                zmm12 = data_143dbb1fc
                                zmm13 = data_143dbb200
                        
                        int32_t var_1e8
                        zmm2 = var_1e8
                        int32_t var_1e4
                        zmm0 = var_1e4
                        int32_t var_1e0
                        zmm1 = var_1e0
                        zmm0[0] = zmm0[0] * zmm12[0]
                        zmm2[0] = zmm2[0] * zmm11[0]
                        zmm1[0] = zmm1[0] * zmm13[0]
                        zmm2[0] = zmm2[0] + zmm0[0]
                        zmm2[0] = zmm2[0] + zmm1[0]
                        int32_t var_1c8
                        zmm2[0] = zmm2[0] f- var_1c8
                        int32_t var_1c4
                        zmm2[0] = zmm2[0] f* var_1c4
                        
                        if (zmm2[0] f>= zmm15.d)
                            zmm0 = _mm_min_ss(zmm2[0], zmm10[0])
                        else
                            zmm0 = zmm15
                        
                        zmm0[0] = zmm0[0] * zmm0[0]
                        zmm0[0] = zmm0[0] f* zmm6.d
                        int32_t var_1dc
                        zmm0[0] = zmm0[0] f* var_1dc
                        float var_39c_1 = zmm0[0]
                        void*** rdi_6
                        
                        if (rax_39 == 0)
                        label_14145ba6a:
                            char var_3e0 = 0
                            char* var_128_1 = &var_3e0
                            void*** (* var_130)() = j_sub_140597fc0
                            void* rax_51 = sub_140a756e0(&var_130, &data_143958018)
                            rdi_6 = (*(rax_51 + 0x10) + 0xf) & 0xfffffffffffffff0
                            void* rax_52 = &rdi_6[0x36]
                            
                            if (rax_52 u> *(rax_51 + 0x18))
                                sub_140b0e3d0(rax_51 + 0x10, 0x1c0)
                                rdi_6 = (*(rax_51 + 0x10) + 0xf) & 0xfffffffffffffff0
                                rax_52 = &rdi_6[0x36]
                            
                            *(rax_51 + 0x10) = rax_52
                            
                            if (rdi_6 == 0)
                                goto label_14145b914
                            
                            int32_t var_2b4_1 = r15_1.d
                            void var_17c
                            int32_t rcx_46 = *sub_140b5e500(&var_17c, 0x3e)
                            int64_t* rcx_47 = *(data_143f5b298 + 0x3a8)
                            int64_t rax_56 = (*(*rcx_47 + 0x280))(rcx_47)
                            sub_142118c70(rdi_6)
                            rdi_6[0x32] = rax_56
                            *rdi_6 = &data_142e0eff8
                            rdi_6[0x35] = rcx_46.q
                            *(rdi_6 + 0x198) = var_3a8_1.o
                        label_14145b917:
                            zmm9 = *(r14_1 + 0x80)
                            zmm2 = *(r14_1 + 0xa0)
                            zmm11 = *(r14_1 + 0x90)
                            zmm6 = 0x3f000000
                            uint128_t var_2c8_1 = *(r14_1 + 0xb0)
                            zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                            uint128_t zmm1_1
                            zmm1_1.d = zmm2.d f* zmm2[0]
                            int32_t var_e8_1 = zmm3.d
                            uint128_t zmm5_3
                            zmm5_3.d = zmm9.d f* zmm9.d
                            zmm12 = _mm_shuffle_ps(zmm9, zmm9, 0x55)
                            zmm13 = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
                            uint128_t zmm0_2
                            zmm0_2.d = zmm12.d f* zmm12[0]
                            zmm14 = _mm_shuffle_ps(zmm11, zmm11, 0x55)
                            zmm7.d = zmm11.d f* zmm11[0]
                            zmm5_3.d = zmm5_3.d f+ zmm0_2.d
                            zmm15 = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
                            int96_t var_2d8_1 = zmm2[0].12
                            zmm0_2.d = zmm13.d f* zmm13[0]
                            float var_2f8[0x4] = zmm9
                            int96_t var_2e8_1 = zmm11[0].12
                            zmm5_3.d = zmm5_3.d f+ zmm0_2.d
                            zmm0_2.d = zmm14.d f* zmm14[0]
                            zmm7.d = zmm7.d f+ zmm0_2.d
                            zmm0_2.d = zmm15.d f* zmm15.d
                            zmm7.d = zmm7.d f+ zmm0_2.d
                            zmm0_2.d = zmm3.d f* zmm3.d
                            zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                            zmm2 = 0x3f000000
                            var_358.o = zmm3
                            zmm1_1.d = zmm1_1.d f+ zmm0_2.d
                            zmm0_2.d = zmm3.d f* zmm3.d
                            zmm1_1.d = zmm1_1.d f+ zmm0_2.d
                            zmm3.d = zmm5_3.d
                            uint128_t zmm4_3 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                            int32_t var_3e4_2 = zmm1_1.d
                            zmm3.d = zmm3.d f* 0.5f
                            zmm0_2.d = zmm4_3.d f* zmm4_3.d
                            zmm1_1.d = zmm3.d f* zmm0_2.d
                            zmm2[0] = 0.5f f- zmm1_1.d
                            zmm0_2.d = zmm4_3.d f* zmm2[0]
                            zmm4_3.d = zmm4_3.d f+ zmm0_2.d
                            zmm1_1.d = zmm4_3.d f* zmm4_3.d
                            zmm3.d = zmm3.d f* zmm1_1.d
                            zmm0_2.d = 0.5f f- zmm3.d
                            zmm1_1.d = zmm4_3.d f* zmm0_2.d
                            zmm4_3.d = zmm4_3.d f+ zmm1_1.d
                            
                            if (zmm5_3.d f< 9.99999994e-09f)
                                zmm8 = zmm10
                            else
                                zmm8 = zmm4_3.d
                            
                            zmm3.d = zmm7.d
                            zmm2 = 0x3f000000
                            zmm4_3 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                            zmm3.d = zmm3.d f* 0.5f
                            zmm0_2.d = zmm4_3.d f* zmm4_3.d
                            zmm1_1.d = zmm3.d f* zmm0_2.d
                            zmm2[0] = 0.5f f- zmm1_1.d
                            zmm0_2.d = zmm4_3.d f* zmm2[0]
                            zmm4_3.d = zmm4_3.d f+ zmm0_2.d
                            zmm1_1.d = zmm4_3.d f* zmm4_3.d
                            zmm3.d = zmm3.d f* zmm1_1.d
                            zmm0_2.d = 0.5f f- zmm3.d
                            zmm1_1.d = zmm4_3.d f* zmm0_2.d
                            zmm4_3.d = zmm4_3.d f+ zmm1_1.d
                            
                            if (zmm7.d f< 9.99999994e-09f)
                                zmm7 = zmm10
                            else
                                zmm7 = zmm4_3.d
                            
                            zmm5_3 = var_3e4_2
                            zmm2 = 0x3f000000
                            zmm4_3 = _mm_rsqrt_ss(zmm5_3.d, zmm5_3.d)
                            zmm3.d = zmm5_3.d f* 0.5f
                            zmm0_2.d = zmm4_3.d f* zmm4_3.d
                            zmm1_1.d = zmm3.d f* zmm0_2.d
                            zmm2[0] = 0.5f f- zmm1_1.d
                            zmm0_2.d = zmm4_3.d f* zmm2[0]
                            zmm4_3.d = zmm4_3.d f+ zmm0_2.d
                            zmm1_1.d = zmm4_3.d f* zmm4_3.d
                            zmm3.d = zmm3.d f* zmm1_1.d
                            zmm0_2.d = 0.5f f- zmm3.d
                            zmm1_1.d = zmm4_3.d f* zmm0_2.d
                            zmm4_3.d = zmm4_3.d f+ zmm1_1.d
                            
                            if (zmm5_3.d f< 9.99999994e-09f)
                                zmm5_3 = zmm10
                            else
                                zmm5_3 = zmm4_3.d
                            
                            zmm9.d = zmm9.d f* zmm8[0]
                            void** const var_170 = &data_142f29fd0
                            zmm12[0] = zmm12[0] * zmm8[0]
                            void* var_168_1 = rsi_3
                            zmm13[0] = zmm13[0] * zmm8[0]
                            zmm8 = zmm5_3
                            void* var_160_1 = rsi_3
                            zmm8[0] = zmm8[0] f* var_e8_1
                            void* var_148_1 = rsi_3 + 0x26f0
                            zmm11[0] = zmm11[0] f* zmm7.d
                            zmm14[0] = zmm14[0] f* zmm7.d
                            zmm15.d = zmm15.d f* zmm7.d
                            zmm7.d = zmm5_3.d f* r14_1[0x14].d
                            zmm5_3.d = zmm5_3.d f* var_358
                            var_2d8_1:4.d = zmm8[0]
                            var_2d8_1.d = zmm7.d
                            var_2f8[0] = zmm9.d
                            var_2f8[1] = zmm12[0]
                            var_2f8[2] = zmm13[0]
                            var_2e8_1.d = zmm11[0]
                            var_2e8_1:4.d = zmm14[0]
                            var_2e8_1:8.d = zmm15.d
                            var_2d8_1:8.d = zmm5_3.d
                            int64_t var_158_1 = (zx.o(0)).q
                            
                            if (rax_39 == 0)
                                zmm2 = var_1cc
                                zmm15 = zx.o(0)
                                zmm9 = var_1bc
                                zmm0_2.d = zmm2.d f* data_14399f668
                                zmm1_1.d = zmm2.d f* data_14399f66c
                                zmm2[0] = zmm2[0] f* data_14399f670
                                
                                if (zmm9.d f<= 0f)
                                    var_418.d = 0x24
                                    int32_t var_234 = zmm0_2.d
                                    int32_t var_230_1 = zmm1_1.d
                                    float var_22c_1 = zmm2[0]
                                    zmm10, zmm15 = sub_142299d90(&var_170, &var_3d8, 
                                        &data_143dbb208, &var_234, zmm6, zmm7, zmm8, zmm9, zmm10, 
                                        zmm11, zmm12, zmm13, zmm15, 0x24, 0x18, rdi_6.b, 0, 0)
                                    zmm14 = 0x3f000000
                                else
                                    float var_268_1 = zmm2[0]
                                    int32_t var_270 = zmm0_2.d
                                    zmm8[0] = zmm8[0] * zmm8[0]
                                    int32_t var_26c_1 = zmm1_1.d
                                    zmm0_2.d = zmm7.d f* zmm7.d
                                    zmm1_1.d = zmm5_3.d f* zmm5_3.d
                                    zmm8[0] = zmm8[0] f+ zmm0_2.d
                                    int32_t var_338_1 = zmm7.d
                                    float var_334_1 = zmm8[0]
                                    int32_t var_330_1 = zmm5_3.d
                                    zmm8[0] = zmm8[0] f+ zmm1_1.d
                                    
                                    if (not(zmm8[0] != zmm10[0]))
                                        zmm0_2 = zx.o(var_338_1.q)
                                        zmm5_3 = var_330_1
                                        zmm7 = zmm0_2.d
                                        zmm1_1 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
                                    else if (zmm8[0] >= 9.99999994e-09f)
                                        zmm3.d = zmm8.d
                                        zmm2 = 0x3f000000
                                        zmm4_3 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                                        zmm3.d = zmm3.d f* 0.5f
                                        zmm0_2.d = zmm4_3.d f* zmm4_3.d
                                        zmm1_1.d = zmm3.d f* zmm0_2.d
                                        zmm2[0] = 0.5f f- zmm1_1.d
                                        zmm0_2.d = zmm4_3.d f* zmm2[0]
                                        zmm4_3.d = zmm4_3.d f+ zmm0_2.d
                                        zmm1_1.d = zmm4_3.d f* zmm4_3.d
                                        zmm3.d = zmm3.d f* zmm1_1.d
                                        zmm0_2.d = 0.5f f- zmm3.d
                                        zmm1_1.d = zmm4_3.d f* zmm0_2.d
                                        zmm4_3.d = zmm4_3.d f+ zmm1_1.d
                                        zmm8[0] = zmm8[0] f* zmm4_3.d
                                        int32_t var_3e4_4 = zmm4_3.d
                                        zmm7.d = zmm7.d f* zmm4_3.d
                                        zmm1_1 = zmm8
                                        zmm5_3.d = zmm5_3.d f* zmm4_3.d
                                    else
                                        zmm7 = data_143dbb1f8
                                        zmm1_1 = data_143dbb1fc
                                        zmm5_3 = data_143dbb200
                                    
                                    zmm9.d = zmm9.d f* 0.5f
                                    zmm1_1.d = zmm1_1.d f* zmm9.d
                                    zmm5_3.d = zmm5_3.d f* zmm9.d
                                    zmm1_1.d = zmm1_1.d f+ var_3d4_2
                                    zmm7.d = zmm7.d f* zmm9.d
                                    zmm5_3.d = zmm5_3.d f+ var_3d0_2
                                    zmm7.d = zmm7.d f+ var_3d8
                                    int32_t var_260_1 = zmm1_1.d
                                    int32_t var_25c_1 = zmm5_3.d
                                    int32_t var_264 = zmm7.d
                                    uint128_t zmm6_1
                                    uint128_t zmm9_1
                                    float zmm10_1[0x4]
                                    float zmm11_1[0x4]
                                    float zmm12_1[0x4]
                                    float zmm13_1[0x4]
                                    float zmm14_1
                                    uint128_t zmm15_1
                                    zmm6_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, 
                                        zmm15_1 = sub_142299d90(&var_170, &var_264, &data_143dbb208, 
                                        &var_270, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, 
                                        0x322bcc77, zmm15, 0x24, 0x18, rdi_6.b, 0, 0)
                                    uint128_t zmm2_1 = var_1cc
                                    uint128_t zmm7_1 = var_2d8_1.d
                                    float zmm0_3[0x4] = zmm2_1
                                    zmm0_3[0] = zmm0_3[0] f* data_14399f668
                                    float zmm1_2 = zmm2_1.d
                                    zmm2_1.d = zmm2_1.d f* data_14399f670
                                    float zmm8_1[0x4] = var_2d8_1:4.d
                                    zmm1_2 = zmm1_2 f* data_14399f66c
                                    float zmm5_4 = var_2d8_1:8.d
                                    int32_t var_244_1 = zmm2_1.d
                                    float var_24c = zmm0_3[0]
                                    zmm2_1.d = zmm7_1.d f* zmm7_1.d
                                    float var_248_1 = zmm1_2
                                    zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
                                    zmm2_1.d = zmm2_1.d f+ zmm8_1[0]
                                    float var_328_1 = zmm8_1[0]
                                    zmm2_1.d = zmm2_1.d f+ zmm5_4 * zmm5_4
                                    
                                    if (not(zmm2_1.d f!= zmm10_1[0]))
                                        zmm0_3 = zx.o(zmm7_1.d.q)
                                        zmm2_1 = zmm0_3
                                        zmm7_1 = zmm0_3.d
                                        zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                                    else if (zmm2_1.d f>= zmm13_1[0])
                                        zmm0_3 = zmm2_1
                                        float zmm3_1 = zmm0_3[0]
                                        float zmm4_4[0x4] = _mm_rsqrt_ss(zmm0_3[0], zmm3_1)
                                        zmm3_1 = zmm3_1 f* zmm6_1.d
                                        zmm4_4[0] = zmm4_4[0] * zmm4_4[0]
                                        zmm2_1.d = zmm6_1.d f- zmm3_1 * zmm4_4[0]
                                        zmm4_4[0] = zmm4_4[0] f* zmm2_1.d
                                        zmm4_4[0] = zmm4_4[0] + zmm4_4[0]
                                        zmm0_3 = zmm6_1
                                        zmm1_2 = zmm4_4[0]
                                        zmm0_3[0] = zmm0_3[0] - zmm3_1 * zmm4_4[0] * zmm4_4[0]
                                        zmm4_4[0] = zmm4_4[0] + zmm1_2 * zmm0_3[0]
                                        zmm8_1[0] = zmm8_1[0] * zmm4_4[0]
                                        float var_3e4_5 = zmm4_4[0]
                                        zmm7_1.d = zmm7_1.d f* zmm4_4[0]
                                        zmm2_1 = zmm8_1
                                        zmm5_4 = zmm5_4 * zmm4_4[0]
                                    else
                                        zmm7_1 = data_143dbb1f8
                                        zmm2_1 = data_143dbb1fc
                                        zmm5_4 = data_143dbb200
                                    
                                    zmm0_3 = var_3d8
                                    zmm1_2 = var_1bc * zmm14_1
                                    char var_3f8_1 = 0
                                    zmm7_1.d = zmm7_1.d f* zmm1_2
                                    zmm2_1.d = zmm2_1.d f* zmm1_2
                                    zmm0_3[0] = zmm0_3[0] f- zmm7_1.d
                                    float var_240 = zmm0_3[0]
                                    zmm0_3 = var_3d4_2
                                    zmm0_3[0] = zmm0_3[0] f- zmm2_1.d
                                    float var_23c_1 = zmm0_3[0]
                                    zmm0_3 = var_3d0_2
                                    zmm0_3[0] = zmm0_3[0] - zmm5_4 * zmm1_2
                                    float var_238_1 = zmm0_3[0]
                                    uint128_t zmm6_2
                                    int32_t zmm10_2
                                    int32_t zmm13_2
                                    int32_t zmm14_2
                                    zmm6_2, zmm10_2, zmm13_2, zmm14_2 = sub_142299d90(&var_170, 
                                        &var_240, &data_143dbb208, &var_24c, zmm6_1, zmm7_1, 
                                        zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, 
                                        zmm15_1, 0x24, 0x18, rdi_6.d.b, 0, 0)
                                    uint128_t zmm5_5 = var_2d8_1.d
                                    uint128_t zmm7_2 = var_2d8_1:4.d
                                    float zmm8_2 = var_2d8_1:8.d
                                    int32_t zmm9_2 = data_143dbb200
                                    int32_t zmm11_2 = data_143dbb1fc
                                    int32_t zmm12_2 = data_143dbb1f8
                                    uint128_t zmm2_2
                                    zmm2_2.d = zmm5_5.d f* zmm5_5.d
                                    uint128_t zmm0_4
                                    zmm0_4.d = zmm7_2.d f* zmm7_2.d
                                    zmm2_2.d = zmm2_2.d f+ zmm0_4.d
                                    int32_t var_31c_1 = zmm7_2.d
                                    zmm2_2.d = zmm2_2.d f+ zmm8_2 * zmm8_2
                                    uint64_t var_398
                                    float zmm3_2
                                    uint128_t zmm4_5
                                    
                                    if (not(zmm2_2.d f!= zmm10_2))
                                        var_398 = zmm5_5.d.q
                                        float var_390_1 = zmm8_2
                                    else if (zmm2_2.d f>= zmm13_2)
                                        zmm3_2 = zmm2_2.d
                                        zmm4_5 = _mm_rsqrt_ss(zmm2_2.d, zmm3_2)
                                        zmm3_2 = zmm3_2 f* zmm6_2.d
                                        zmm0_4.d = zmm4_5.d f* zmm4_5.d
                                        zmm2_2.d = zmm6_2.d f- zmm3_2 f* zmm0_4.d
                                        zmm0_4.d = zmm4_5.d f* zmm2_2.d
                                        zmm4_5.d = zmm4_5.d f+ zmm0_4.d
                                        zmm0_4.d = zmm6_2.d f- zmm3_2 * zmm4_5.d f* zmm4_5.d
                                        zmm4_5.d = zmm4_5.d f+ zmm4_5.d f* zmm0_4.d
                                        zmm5_5.d = zmm5_5.d f* zmm4_5.d
                                        zmm7_2.d = zmm7_2.d f* zmm4_5.d
                                        var_398.d = zmm5_5.d
                                        var_398:4.d = zmm7_2.d
                                        float var_390_3 = zmm8_2 f* zmm4_5.d
                                        int32_t var_3e4_6 = zmm4_5.d
                                    else
                                        var_398.d = zmm12_2
                                        var_398:4.d = zmm11_2
                                        int32_t var_390_2 = zmm9_2
                                    
                                    zmm5_5 = var_2e8_1.d
                                    zmm7_2 = var_2e8_1:4.d
                                    zmm8_2 = var_2e8_1:8.d
                                    zmm2_2.d = zmm5_5.d f* zmm5_5.d
                                    zmm0_4.d = zmm7_2.d f* zmm7_2.d
                                    zmm2_2.d = zmm2_2.d f+ zmm0_4.d
                                    int32_t var_310_1 = zmm7_2.d
                                    zmm2_2.d = zmm2_2.d f+ zmm8_2 * zmm8_2
                                    uint64_t var_38c
                                    
                                    if (not(zmm2_2.d f!= zmm10_2))
                                        var_38c = zmm5_5.d.q
                                        float var_384_1 = zmm8_2
                                    else if (zmm2_2.d f>= zmm13_2)
                                        zmm3_2 = zmm2_2.d
                                        zmm4_5 = _mm_rsqrt_ss(zmm2_2.d, zmm3_2)
                                        zmm3_2 = zmm3_2 f* zmm6_2.d
                                        zmm0_4.d = zmm4_5.d f* zmm4_5.d
                                        zmm2_2.d = zmm6_2.d f- zmm3_2 f* zmm0_4.d
                                        zmm0_4.d = zmm4_5.d f* zmm2_2.d
                                        zmm4_5.d = zmm4_5.d f+ zmm0_4.d
                                        zmm0_4.d = zmm6_2.d f- zmm3_2 * zmm4_5.d f* zmm4_5.d
                                        zmm4_5.d = zmm4_5.d f+ zmm4_5.d f* zmm0_4.d
                                        zmm5_5.d = zmm5_5.d f* zmm4_5.d
                                        zmm7_2.d = zmm7_2.d f* zmm4_5.d
                                        var_38c.d = zmm5_5.d
                                        var_38c:4.d = zmm7_2.d
                                        float var_384_3 = zmm8_2 f* zmm4_5.d
                                        int32_t var_3e4_7 = zmm4_5.d
                                    else
                                        var_38c.d = zmm12_2
                                        var_38c:4.d = zmm11_2
                                        int32_t var_384_2 = zmm9_2
                                    
                                    zmm5_5 = var_2f8[0]
                                    zmm7_2 = var_2f8[1]
                                    zmm8_2 = var_2f8[2]
                                    zmm2_2.d = zmm5_5.d f* zmm5_5.d
                                    zmm0_4.d = zmm7_2.d f* zmm7_2.d
                                    zmm2_2.d = zmm2_2.d f+ zmm0_4.d
                                    int32_t var_304_1 = zmm7_2.d
                                    zmm2_2.d = zmm2_2.d f+ zmm8_2 * zmm8_2
                                    uint64_t var_380
                                    
                                    if (not(zmm2_2.d f!= zmm10_2))
                                        var_380 = zmm5_5.d.q
                                        float var_378_1 = zmm8_2
                                    else if (zmm2_2.d f>= zmm13_2)
                                        zmm3_2 = zmm2_2.d
                                        zmm4_5 = _mm_rsqrt_ss(zmm2_2.d, zmm3_2)
                                        zmm3_2 = zmm3_2 f* zmm6_2.d
                                        zmm0_4.d = zmm4_5.d f* zmm4_5.d
                                        zmm2_2.d = zmm6_2.d f- zmm3_2 f* zmm0_4.d
                                        zmm0_4.d = zmm4_5.d f* zmm2_2.d
                                        zmm4_5.d = zmm4_5.d f+ zmm0_4.d
                                        zmm6_2.d = zmm6_2.d f- zmm3_2 * zmm4_5.d f* zmm4_5.d
                                        zmm0_4.d = zmm4_5.d f* zmm6_2.d
                                        zmm4_5.d = zmm4_5.d f+ zmm0_4.d
                                        zmm5_5.d = zmm5_5.d f* zmm4_5.d
                                        zmm7_2.d = zmm7_2.d f* zmm4_5.d
                                        var_380.d = zmm5_5.d
                                        var_380:4.d = zmm7_2.d
                                        float var_378_3 = zmm8_2 f* zmm4_5.d
                                        int32_t var_3e4_8 = zmm4_5.d
                                    else
                                        var_380.d = zmm12_2
                                        var_380:4.d = zmm11_2
                                        int32_t var_378_2 = zmm9_2
                                    
                                    var_3f8_1.q = rdi_6
                                    zmm0_4.d = var_1bc.d f* zmm14_2
                                    zmm10, zmm14, zmm15 = sub_142298c60(&var_170, &var_3d8, 
                                        &var_380, &var_38c, &var_398, var_1cc.d, zmm0_4.d, 0x24, 0, 
                                        0)
                            else
                                int32_t var_284_1 = var_1cc.d
                                int32_t var_280_1 = var_1bc.d
                                int32_t var_288 = 0
                                var_418.b = 0
                                zmm10 = sub_142298220(&var_170, &var_2f8, &var_288, zmm10, zmm11, 
                                    zmm12, rdi_6.b)
                                zmm15 = zx.o(0)
                                zmm14 = 0x3f000000
                            
                            if (var_158_1 != 0)
                                int32_t temp6_1 = *(var_158_1 + 8)
                                *(var_158_1 + 8) -= 1
                                
                                if (temp6_1 == 1)
                                    (**var_158_1)(var_158_1, 1)
                        else if (not(zmm2[0] f< zmm15.d))
                            r15_1 = r14_1[0x33]
                            
                            if (r15_1 == 0)
                                goto label_14145ba6a
                            
                            char arg_20 = 0
                            char* var_138_1 = &arg_20
                            void*** (* var_140)() = j_sub_140597fc0
                            void* rax_42 = sub_140a756e0(&var_140, &data_143958018)
                            rdi_6 = (*(rax_42 + 0x10) + 0xf) & 0xfffffffffffffff0
                            void* rax_43 = &rdi_6[0x38]
                            
                            if (rax_43 u> *(rax_42 + 0x18))
                                sub_140b0e3d0(rax_42 + 0x10, 0x1d0)
                                rdi_6 = (*(rax_42 + 0x10) + 0xf) & 0xfffffffffffffff0
                                rax_43 = &rdi_6[0x38]
                            
                            *(rax_42 + 0x10) = rax_43
                            
                            if (rdi_6 == 0)
                                r15_1 = nullptr
                            label_14145b914:
                                rdi_6 = r15_1
                                goto label_14145b917
                            
                            int32_t var_2a4_1 = 0
                            void var_180
                            int32_t rcx_38 = *sub_140b5e500(&var_180, 0x41)
                            int32_t var_2ac_1 = 0
                            void var_178
                            int32_t rcx_40 = *sub_140b5e500(&var_178, 0x3e)
                            int64_t* rcx_41 = *(data_143f5b298 + 0x3a8)
                            int64_t rax_48 = (*(*rcx_41 + 0x280))(rcx_41)
                            sub_142118c70(rdi_6)
                            rdi_6[0x35] = rcx_40.q
                            *rdi_6 = &data_142f84f60
                            rdi_6[0x36] = r15_1
                            r15_1 = nullptr
                            rdi_6[0x37] = rcx_38.q
                            rdi_6[0x32] = rax_48
                            *(rdi_6 + 0x198) = var_3a8_1.o
                            goto label_14145b917
                        zmm12 = 0x3f400000
                        zmm11 = 0x7fffffff
                    
                    zmm8 = 0x3951b717
                    i = i_1
                
                i += 1
                rdi = arg1
                rax_15 = var_2a0_1 + 1
                arg2 = zx.q(var_3b0_1)
                r12 = zx.q(arg_18)
                i_1 = i
                var_2a0_1 = rax_15
            while (i s< *(rdi + 0xa8))
        
        var_190.d &= not.d(var_1a0[1])
        sub_14059bdd0(&var_1a0)
        arg2 = zx.q(var_190:4.d)
        var_3b0_1 = arg2.d
        
        if (arg2.d s>= *(var_1a0[2].q + 0x18))
            break
        
        r9_3 = var_1a8
        r12 = zx.q(arg_18)

return sub_141124e60(rdi, arg2.d) __tailcall
