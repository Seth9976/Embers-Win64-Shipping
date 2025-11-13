// 函数: sub_141a01300
// 地址: 0x141a01300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1
float performanceCount_11[0x4]
float performanceCount_24[0x4] = performanceCount_11
float performanceCount_32[0x4]
float performanceCount_53[0x4] = performanceCount_32
float performanceCount_33[0x4]
float performanceCount_52[0x4] = performanceCount_33
float performanceCount_34[0x4]
float performanceCount_51[0x4] = performanceCount_34
int64_t performanceCount_1[0xa]
performanceCount_1[0] = arg1
float performanceCount_61[0x4]
float performanceCount_68[0x4] = performanceCount_61
float performanceCount_69[0x4]
float performanceCount_72[0x4] = performanceCount_69
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
bool cond:0 = *(rdi + 0x16c) == 0
float performanceCount_4[0x4] = zx.o(0)
int32_t r13 = *(rdi + 0x98)
performanceCount_4[0].q = float.d(performanceCount)
float (* var_2f0)[0x4] = nullptr
int64_t var_2e8 = 0
float performanceCount_31[0x4] = 0x3f800000
performanceCount_4[0].q = performanceCount_4[0].q f* data_143d796f8
float performanceCount_12[0x4] = 0x3f800000
uint128_t performanceCount_7 = _mm_cvtepi32_ps(zx.o(r13))
performanceCount = performanceCount_4.q
performanceCount_12[0] = 1f f/ performanceCount_7.d
float performanceCount_15 = performanceCount_12[0]
char var_3d8
int32_t performanceCount_14
float performanceCount_16
void* var_318
int32_t var_310
int32_t performanceCount_18
int64_t var_2d8
int32_t var_2c8[0x4]
int64_t i_4
int64_t var_2b0
int64_t var_268
int16_t var_398
float performanceCount_44[0x4]
uint128_t performanceCount_5
uint128_t performanceCount_17
uint128_t performanceCount_45
float performanceCount_19
int32_t performanceCount_20
float performanceCount_46
int32_t performanceCount_47
float var_278
int32_t performanceCount_21
int64_t var_218
int64_t var_210
float performanceCount_26[0x4]
uint128_t performanceCount_28
float performanceCount_59[0x4]
float performanceCount_8[0x4]
float performanceCount_30[0x4]

if (cond:0)
    performanceCount_7 = *(rdi + 0xe8)
    int32_t performanceCount_57 = 0
    performanceCount_11 = zx.o(0)
    performanceCount_14 = 0
    
    if (performanceCount_7.d f>= 0f)
        performanceCount_7 = __minss_xmmss_memss(performanceCount_7.d, 0x3f7d70a4)
    else
        performanceCount_7 = zx.o(0)
    
    performanceCount_26 = *(rdi + 0x80)
    void* rcx_35 = nullptr
    performanceCount_28 = *(rdi + 0x84)
    performanceCount_32 = performanceCount_26
    performanceCount_59 = *(rdi + 0x88)
    performanceCount_33 = performanceCount_28
    performanceCount_30 = 0x3f000000
    performanceCount_7.d = performanceCount_7.d f* performanceCount_12[0]
    var_318 = nullptr
    int32_t var_30c_1 = 0
    performanceCount_7.d = performanceCount_7.d f* 0.5f
    performanceCount_32[0] = performanceCount_32[0] f* performanceCount_7.d
    performanceCount_33[0] = performanceCount_33[0] f* performanceCount_7.d
    performanceCount_7.d = performanceCount_12.d f* 0.5f
    float performanceCount_42 = performanceCount_32[0]
    float performanceCount_43 = performanceCount_33[0]
    performanceCount_26[0] = performanceCount_26[0] f* performanceCount_7.d
    performanceCount_28.d = performanceCount_28.d f* performanceCount_7.d
    performanceCount_26[0] = performanceCount_26[0] f+ *(rdi + 0x74)
    performanceCount_59[0] = performanceCount_59[0] f* performanceCount_7.d
    performanceCount_28.d = performanceCount_28.d f+ *(rdi + 0x78)
    performanceCount_59[0] = performanceCount_59[0] f+ *(rdi + 0x7c)
    *(rdi + 0x74) = performanceCount_26[0]
    *(rdi + 0x78) = performanceCount_28.d
    *(rdi + 0x7c) = performanceCount_59[0]
    int32_t r8_18 = *(rdi + 0x98)
    int32_t rax_58 = r8_18 * r8_18
    var_310 = rax_58
    
    if (rax_58 s> 0)
        sub_1405a4f90(&var_318)
        r8_18 = *(rdi + 0x98)
        rcx_35 = var_318
    
    int32_t r9_7 = 0
    int32_t var_308_2 = 0
    
    if (r8_18 s> 0)
        int64_t rdx_27 = 0
        var_2b0 = 0
        int32_t rax_59
        
        do
            int32_t r13_2 = 0
            rax_59 = r8_18
            
            if (r8_18 s> 0)
                uint128_t* rbx_9 = rcx_35 + 4 + (rdx_27 << 4)
                performanceCount_7.d = _mm_cvtepi32_ps(zx.o(r9_7)).d f* performanceCount_12[0]
                var_2c8[0] = performanceCount_7.d
                
                do
                    int32_t rcx_38 = *(rdi + 0xf0) * 0xbb38435 + 0x3619636b
                    performanceCount_4 = rcx_38 u>> 9 | 0x3f800000
                    performanceCount_4[0] = performanceCount_4[0] - 1f
                    performanceCount_4[0] = performanceCount_4[0] + performanceCount_4[0]
                    *(rdi + 0xf0) = rcx_38 * 0xbb38435 + 0x3619636b
                    performanceCount_7.d = performanceCount_7.d f* *(rdi + 0x80)
                    int32_t rsi_6 = *(rdi + 0xc0) - 1
                    performanceCount_4[0] = performanceCount_4[0] - 1f
                    performanceCount_7.d = performanceCount_7.d f+ *(rdi + 0x74)
                    i_4.d = (rcx_38 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
                    performanceCount_26 = i_4.d
                    performanceCount_26[0] = performanceCount_26[0] - 1f
                    performanceCount_4[0] = performanceCount_4[0] * performanceCount_32[0]
                    float performanceCount_37[0x4] = _mm_cvtepi32_ps(zx.o(r13_2))
                    performanceCount_4[0] = performanceCount_4[0] f+ performanceCount_7.d
                    performanceCount_7 = _mm_cvtepi32_ps(zx.o(*(rdi + 0x60)))
                    performanceCount_37[0] = performanceCount_37[0] * performanceCount_12[0]
                    performanceCount_26[0] = performanceCount_26[0] + performanceCount_26[0]
                    performanceCount_4[0] = performanceCount_4[0] f/ *(rdi + 8)
                    performanceCount_37[0] = performanceCount_37[0] f* *(rdi + 0x84)
                    performanceCount_26[0] = performanceCount_26[0] - 1f
                    performanceCount_4[0] = performanceCount_4[0] f- performanceCount_7.d
                    performanceCount_7 = _mm_cvtepi32_ps(zx.o(*(rdi + 0x64)))
                    performanceCount_37[0] = performanceCount_37[0] f+ *(rdi + 0x78)
                    performanceCount_26[0] = performanceCount_26[0] * performanceCount_33[0]
                    performanceCount_4[0] = performanceCount_4[0] + performanceCount_4[0]
                    performanceCount_37[0] = performanceCount_37[0] + performanceCount_26[0]
                    performanceCount_37[0] = performanceCount_37[0] f/ *(rdi + 0xc)
                    performanceCount_37[0] = performanceCount_37[0] f- performanceCount_7.d
                    performanceCount_7.d = performanceCount_4.d f- performanceCount_30[0]
                    int32_t r9_8 = int.d(performanceCount_7.d)
                    performanceCount_28.d = performanceCount_37.d f+ performanceCount_37[0]
                    performanceCount_7.d = performanceCount_28.d f- performanceCount_30[0]
                    int32_t r8_19 = int.d(performanceCount_7.d)
                    performanceCount_7.d = -0.5f - performanceCount_4[0]
                    int32_t r8_20 = r8_19 s>> 1
                    int32_t rcx_40 = int.d(performanceCount_7.d) s>> 1
                    performanceCount_7.d = -0.5f f- performanceCount_28.d
                    int32_t rcx_41 = neg.d(rcx_40)
                    int32_t rdx_30 = neg.d(int.d(performanceCount_7.d) s>> 1)
                    int32_t r9_9 = r9_8 s>> 1
                    int32_t r15_4
                    
                    if (r9_9 s>= 0)
                        r15_4 = rsi_6
                        
                        if (r9_9 s< rsi_6)
                            r15_4 = r9_9
                    else
                        r15_4 = 0
                    
                    int32_t r12_2
                    
                    if (r8_20 s>= 0)
                        r12_2 = rsi_6
                        
                        if (r8_20 s< rsi_6)
                            r12_2 = r8_20
                    else
                        r12_2 = 0
                    
                    int32_t r14_4
                    
                    if (rcx_41 s>= 0)
                        r14_4 = rsi_6
                        
                        if (rcx_41 s< rsi_6)
                            r14_4 = rcx_41
                    else
                        r14_4 = 0
                    
                    if (rdx_30 s< 0)
                        rsi_6 = 0
                    else if (rdx_30 s< rsi_6)
                        rsi_6 = rdx_30
                    
                    performanceCount_7 = performanceCount_4
                    truncf(performanceCount_7.d)
                    performanceCount_4[0] = performanceCount_4[0] f- performanceCount_7.d
                    performanceCount_7 = performanceCount_37
                    truncf(performanceCount_7.d)
                    int32_t r8_21 = *(rdi + 0xc0)
                    performanceCount_37[0] = performanceCount_37[0] f- performanceCount_7.d
                    performanceCount_30 = zx.o(0)
                    int32_t rcx_43 = r8_21 * r12_2
                    performanceCount_26 = zx.o(0)
                    int32_t r8_22 = r8_21 * rsi_6
                    performanceCount_59 = zx.o(0)
                    performanceCount_8 = zx.o(0)
                    int64_t r10_3 = sx.q(rcx_43 + r15_4)
                    void* rdx_31 = **(rdi + 0xb8)
                    performanceCount_7.d = float.s(zx.d(*(rdx_31 + r10_3)))
                    int64_t r11_2 = sx.q(r8_22 + r15_4)
                    performanceCount_7.d = performanceCount_7.d f* 0.00392156886f
                    performanceCount_26[0] = float.s(zx.d(*(rdx_31 + r11_2)))
                    int64_t r9_10 = sx.q(rcx_43 + r14_4)
                    uint32_t rax_75 = zx.d(*(rdx_31 + r9_10))
                    performanceCount_26[0] = performanceCount_26[0] * 0.00392156886f
                    performanceCount_28.d = float.s(rax_75)
                    int64_t r8_23 = sx.q(r8_22 + r14_4)
                    performanceCount_28.d = performanceCount_28.d f* 0.00392156886f
                    performanceCount_30[0] = float.s(zx.d(*(rdx_31 + r8_23)))
                    int32_t* rcx_44 = **(rdi + 0xb0)
                    performanceCount_28.d = performanceCount_28.d f- performanceCount_7.d
                    performanceCount_30[0] = performanceCount_30[0] * 0.00392156886f
                    uint32_t rax_79 = zx.d(*(rcx_44 + (r10_3 << 1)))
                    performanceCount_30[0] = performanceCount_30[0] - performanceCount_26[0]
                    performanceCount_28.d = performanceCount_28.d f* performanceCount_4[0]
                    performanceCount_8[0] = float.s(rax_79)
                    uint32_t rax_80 = zx.d(*(rcx_44 + (r9_10 << 1)))
                    performanceCount_28.d = performanceCount_28.d f+ performanceCount_7.d
                    performanceCount_30[0] = performanceCount_30[0] * performanceCount_4[0]
                    uint32_t rax_81 = zx.d(*(rcx_44 + (r11_2 << 1)))
                    performanceCount_8[0] = performanceCount_8[0] - 32768f
                    performanceCount_7.d = float.s(*(rdi + 0x68))
                    performanceCount_30[0] = performanceCount_30[0] + performanceCount_26[0]
                    performanceCount_26 = zx.o(0)
                    performanceCount_8[0] = performanceCount_8[0] * 0.0078125f
                    performanceCount_7.d = performanceCount_7.d f* *(rdi + 8)
                    performanceCount_30[0] = performanceCount_30[0] f- performanceCount_28.d
                    performanceCount_4[0] = performanceCount_4[0] f- performanceCount_7.d
                    int32_t zmm5_2 =
                        (float.s(rax_80) f- 32768f) f* 0.0078125f f- performanceCount_8[0]
                    performanceCount_30[0] = performanceCount_30[0] * performanceCount_37[0]
                    performanceCount_30[0] = performanceCount_30[0] f+ performanceCount_28.d
                    performanceCount_28.d = float.s(rax_81)
                    performanceCount_59[0] = float.s(zx.d(*(rcx_44 + (r8_23 << 1))))
                    *(rbx_9 - 4) = performanceCount_4[0]
                    performanceCount_28.d = performanceCount_28.d f- 32768f
                    performanceCount_26[0] = float.s(*(rdi + 0x6c))
                    performanceCount_59[0] = performanceCount_59[0] - 32768f
                    zmm5_2 = zmm5_2 f* performanceCount_4[0]
                    performanceCount_26[0] = performanceCount_26[0] f* *(rdi + 0xc)
                    performanceCount_28.d = performanceCount_28.d f* 0.0078125f
                    zmm5_2 = zmm5_2 f+ performanceCount_8[0]
                    performanceCount_37[0] = performanceCount_37[0] - performanceCount_26[0]
                    performanceCount_59[0] = performanceCount_59[0] * 0.0078125f
                    performanceCount_59[0] = performanceCount_59[0] f- performanceCount_28.d
                    *rbx_9 = performanceCount_37[0]
                    bool cond:8_1 = performanceCount_30[0] <= 0f
                    performanceCount_59[0] = performanceCount_59[0] * performanceCount_4[0]
                    performanceCount_59[0] = performanceCount_59[0] f+ performanceCount_28.d
                    performanceCount_59[0] = performanceCount_59[0] f- zmm5_2
                    performanceCount_59[0] = performanceCount_59[0] * performanceCount_37[0]
                    performanceCount_59[0] = performanceCount_59[0] f+ zmm5_2
                    performanceCount_59[0] = performanceCount_59[0] f* *(rdi + 0x10)
                    *(rbx_9 + 4) = performanceCount_59[0]
                    
                    if (not(cond:8_1))
                        int32_t rax_84 = *(rdi + 0xf0) * 0xbb38435 + 0x3619636b
                        *(rdi + 0xf0) = rax_84
                        performanceCount_7.d = (rax_84 u>> 9 | 0x3f800000).d f- 1f
                    
                    if (cond:8_1 || performanceCount_30[0] f< performanceCount_7.d)
                    label_141a02f19:
                        rcx_44.b = 0
                    else
                        rcx_44 = *(rdi + 0x1a8)
                        void* rdx_33 = sx.q(*(rdi + 0x1b0)) * 0x1c + rcx_44
                        
                        if (rcx_44 != rdx_33)
                            performanceCount_26 = *(rbx_9 - 4)
                            
                            do
                                if (not(performanceCount_26[0] f<= *rcx_44)
                                        && not(performanceCount_26[0] f>= rcx_44[3]))
                                    performanceCount_7 = *rbx_9
                                    
                                    if (not(performanceCount_7.d f<= rcx_44[1])
                                            && not(performanceCount_7.d f>= rcx_44[4]))
                                        performanceCount_7 = *(rbx_9 + 4)
                                        
                                        if (not(performanceCount_7.d f<= rcx_44[2])
                                                && performanceCount_7.d f< rcx_44[5])
                                            goto label_141a02f19
                                
                                rcx_44 = &rcx_44[7]
                            while (rcx_44 != rdx_33)
                        
                        rcx_44.b = 1
                    
                    int32_t performanceCount_58 = performanceCount_14
                    performanceCount_30 = 0x3f000000
                    performanceCount_7 = var_2c8[0]
                    performanceCount_12 = performanceCount_15
                    int32_t performanceCount_55 = performanceCount_58 + 1
                    performanceCount_32 = performanceCount_42
                    
                    if (rcx_44.b == 0)
                        performanceCount_55 = performanceCount_58
                    
                    performanceCount_33 = performanceCount_43
                    rdx_27 = var_2b0 + 1
                    *(rbx_9 + 8) = rcx_44.b
                    performanceCount_57 = performanceCount_55
                    performanceCount_14 = performanceCount_55
                    rbx_9 = &rbx_9[1]
                    rax_59 = *(rdi + 0x98)
                    r13_2 += 1
                    var_2b0 = rdx_27
                while (r13_2 s< rax_59)
                
                r9_7 = var_308_2
                performanceCount_14 = performanceCount_57
            
            rcx_35 = var_318
            r9_7 += 1
            var_308_2 = r9_7
            r8_18 = rax_59
        while (r9_7 s< rax_59)
        
        if (performanceCount_57 != 0)
            int32_t rax_88 = performanceCount_57 + var_2e8.d
            var_2e8.d = rax_88
            
            if (rax_88 s> 0)
                sub_1405c4fe0(&var_2f0)
            
            *(rdi + 0x168) += performanceCount_57
            var_3d8 = 1
            sub_141a00920(rdi + 0x1b8, performanceCount_57, 0, 3, 1)
            int32_t r8_24 = *(rdi + 0x98)
            int32_t r14_5 = 0
            int32_t r12_3 = 0
            int32_t r13_3 = 0
            
            if (r8_24 s> 0)
                int64_t rdx_37 = 0
                int64_t rcx_47 = 0
                var_218 = 0
                var_210 = 0
                int32_t rax_89
                
                do
                    int32_t r15_5 = 0
                    rax_89 = r8_24
                    
                    if (r8_24 s> 0)
                        void* r8_25 = var_318
                        rax_89 = *(rdi + 0x98)
                        int64_t rsi_8 = rdx_37 << 6
                        int32_t* rbx_12 = (rcx_47 << 4) + r8_25
                        
                        do
                            if (rbx_12[3].b != 0)
                                float* rax_97
                                
                                if (*(rdi + 0xe5) == 0)
                                    var_268.d = 0x3f800000
                                    rax_97 = &var_268
                                    var_268:4.d = 0x3f800000
                                    int64_t var_260
                                    var_260.d = 0x3f800000
                                else
                                    uint32_t rcx_48 = zx.d(*(rdi + 0xc8))
                                    var_278 = 1f
                                    int32_t var_274_1 = 0x3f800000
                                    int32_t var_270_1 = 0x3f800000
                                    
                                    if (rcx_48 == 0)
                                        int32_t rax_105 = *(rdi + 0xf0) * 0xbb38435 + 0x3619636b
                                        *(rdi + 0xf0) = rax_105
                                        performanceCount_28 = *(rdi + 0xcc)
                                        performanceCount_26 = *(rdi + 0xd0)
                                        
                                        if (performanceCount_28.d f> performanceCount_26[0])
                                            performanceCount_26 = performanceCount_11
                                        else
                                            performanceCount_26[0] =
                                                performanceCount_26[0] f- performanceCount_28.d
                                            performanceCount_7.d = (rax_105 u>> 9 | 0x3f800000).d
                                                f- performanceCount_31[0]
                                            performanceCount_26[0] =
                                                performanceCount_26[0] f* performanceCount_7.d
                                            performanceCount_26[0] =
                                                performanceCount_26[0] f+ performanceCount_28.d
                                        
                                        var_278 = performanceCount_26[0]
                                        float var_274_3 = performanceCount_26[0]
                                        float var_270_4 = performanceCount_26[0]
                                        rax_97 = &var_278
                                    else
                                        int32_t rax_93
                                        
                                        if (rcx_48 == 1)
                                            int32_t rcx_53 = *(rdi + 0xf0) * 0xbb38435 + 0x3619636b
                                            *(rdi + 0xf0) = rcx_53
                                            performanceCount_28 = *(rdi + 0xcc)
                                            performanceCount_26 = *(rdi + 0xd0)
                                            
                                            if (performanceCount_28.d f> performanceCount_26[0])
                                                performanceCount_26 = performanceCount_11
                                            else
                                                performanceCount_26[0] =
                                                    performanceCount_26[0] f- performanceCount_28.d
                                                performanceCount_7.d = (rcx_53 u>> 9 | 0x3f800000).d
                                                    f- performanceCount_31[0]
                                                performanceCount_26[0] =
                                                    performanceCount_26[0] f* performanceCount_7.d
                                                performanceCount_26[0] =
                                                    performanceCount_26[0] f+ performanceCount_28.d
                                            
                                            var_278 = performanceCount_26[0]
                                            *(rdi + 0xf0) = rcx_53 * 0xbb38435 + 0x3619636b
                                            performanceCount_28 = *(rdi + 0xd4)
                                            performanceCount_26 = *(rdi + 0xd8)
                                            
                                            if (performanceCount_28.d f> performanceCount_26[0])
                                                performanceCount_26 = performanceCount_11
                                                rax_93 =
                                                    (rcx_53 * 0xbb38435 + 0x3619636b) * 0xbb38435
                                            else
                                                performanceCount_26[0] =
                                                    performanceCount_26[0] f- performanceCount_28.d
                                                performanceCount_7.d = (
                                                    (rcx_53 * 0xbb38435 + 0x3619636b) u>> 9
                                                    | 0x3f800000).d f- performanceCount_31[0]
                                                rax_93 =
                                                    (rcx_53 * 0xbb38435 + 0x3619636b) * 0xbb38435
                                                performanceCount_26[0] =
                                                    performanceCount_26[0] f* performanceCount_7.d
                                                performanceCount_26[0] =
                                                    performanceCount_26[0] f+ performanceCount_28.d
                                            
                                        label_141a030ef:
                                            float var_274_2 = performanceCount_26[0]
                                            *(rdi + 0xf0) = rax_93 + 0x3619636b
                                            performanceCount_26 = *(rdi + 0xe0)
                                            performanceCount_28 = *(rdi + 0xdc)
                                            
                                            if (performanceCount_28.d f> performanceCount_26[0])
                                                rax_97 = &var_278
                                                float var_270_3 = performanceCount_11[0]
                                            else
                                                performanceCount_26[0] =
                                                    performanceCount_26[0] f- performanceCount_28.d
                                                performanceCount_7.d =
                                                    ((rax_93 + 0x3619636b) u>> 9 | 0x3f800000).d
                                                    f- performanceCount_31[0]
                                                rax_97 = &var_278
                                                performanceCount_26[0] =
                                                    performanceCount_26[0] f* performanceCount_7.d
                                                performanceCount_26[0] =
                                                    performanceCount_26[0] f+ performanceCount_28.d
                                                float var_270_2 = performanceCount_26[0]
                                        else
                                            if (rcx_48 == 2)
                                                int32_t rcx_51 =
                                                    *(rdi + 0xf0) * 0xbb38435 + 0x3619636b
                                                *(rdi + 0xf0) = rcx_51
                                                performanceCount_28 = *(rdi + 0xcc)
                                                performanceCount_26 = *(rdi + 0xd0)
                                                
                                                if (performanceCount_28.d f> performanceCount_26[0])
                                                    performanceCount_26 = performanceCount_11
                                                else
                                                    performanceCount_26[0] = performanceCount_26[0]
                                                        f- performanceCount_28.d
                                                    performanceCount_7.d =
                                                        (rcx_51 u>> 9 | 0x3f800000).d
                                                        f- performanceCount_31[0]
                                                    performanceCount_26[0] = performanceCount_26[0]
                                                        f* performanceCount_7.d
                                                    performanceCount_26[0] = performanceCount_26[0]
                                                        f+ performanceCount_28.d
                                                
                                                var_278 = performanceCount_26[0]
                                                rax_93 = rcx_51 * 0xbb38435
                                                goto label_141a030ef
                                            
                                            rax_97 = &var_278
                                
                                int32_t performanceCount_56 = rax_97[2]
                                uint64_t var_168_1 = *rax_97
                                
                                if (*(rdi + 0xe4) == 0)
                                    performanceCount_30 = performanceCount_11
                                else
                                    int32_t rax_109 = *(rdi + 0xf0) * 0xbb38435 + 0x3619636b
                                    *(rdi + 0xf0) = rax_109
                                    performanceCount_30 = rax_109 u>> 9 | 0x3f800000
                                    performanceCount_30[0] =
                                        performanceCount_30[0] - performanceCount_31[0]
                                    performanceCount_30[0] = performanceCount_30[0] * 360f
                                
                                sub_141a0e800(&performanceCount_46, &var_2c8, performanceCount_11)
                                sub_141a0e800(&var_2b0, &i_4, performanceCount_30)
                                sub_141a0e800(&performanceCount_20, &performanceCount_47, 
                                    performanceCount_11)
                                float performanceCount_9[0x4] = var_2b0.d
                                float performanceCount_10[0x4] = i_4.d
                                performanceCount_30 = var_2c8[0]
                                performanceCount_4 = performanceCount_10
                                performanceCount_32 = performanceCount_20
                                float performanceCount_27[0x4] = var_168_1.d
                                float performanceCount_29[0x4] = performanceCount_46
                                performanceCount_34 = performanceCount_47
                                performanceCount_9[0] =
                                    performanceCount_9[0] * performanceCount_30[0]
                                int32_t var_1ec_2 = 0
                                performanceCount_32[0] =
                                    performanceCount_32[0] * performanceCount_29[0]
                                int32_t var_1dc_2 = 0
                                performanceCount_9[0] =
                                    performanceCount_9[0] * performanceCount_27[0]
                                int32_t var_1cc_2 = 0
                                performanceCount_28.d =
                                    performanceCount_34.d f* performanceCount_29[0]
                                float var_380_4 = performanceCount_9[0]
                                float var_1f4_1 = performanceCount_9[0]
                                performanceCount_34[0] =
                                    performanceCount_34[0] * performanceCount_9[0]
                                performanceCount_33 = performanceCount_28
                                performanceCount_32[0] =
                                    performanceCount_32[0] * performanceCount_9[0]
                                performanceCount_33[0] =
                                    performanceCount_33[0] * performanceCount_10[0]
                                performanceCount_32[0] =
                                    performanceCount_32[0] * performanceCount_10[0]
                                performanceCount_28.d =
                                    performanceCount_28.d f* performanceCount_9[0]
                                performanceCount_32[0] =
                                    performanceCount_32[0] - performanceCount_34[0]
                                performanceCount_32[0] =
                                    performanceCount_32[0] * performanceCount_30[0]
                                performanceCount_4[0] =
                                    performanceCount_4[0] * performanceCount_30[0]
                                performanceCount_34[0] =
                                    performanceCount_34[0] * performanceCount_10[0]
                                performanceCount_4[0] =
                                    performanceCount_4[0] * performanceCount_27[0]
                                performanceCount_27[0] =
                                    performanceCount_27[0] * performanceCount_29[0]
                                performanceCount_32[0] =
                                    performanceCount_32[0] + performanceCount_34[0]
                                performanceCount_29 = data_143dbb1f8
                                performanceCount_32[0] =
                                    performanceCount_32[0] * performanceCount_9[0]
                                performanceCount_9 = data_143dbb1fc
                                performanceCount_32[0] =
                                    performanceCount_32[0] * performanceCount_10[0]
                                performanceCount_33[0] =
                                    performanceCount_33[0] + performanceCount_32[0]
                                float var_370_2 = performanceCount_27[0]
                                float var_1f0_1 = performanceCount_27[0]
                                performanceCount_27 = var_168_1:4.d
                                performanceCount_32[0] =
                                    performanceCount_32[0] f- performanceCount_28.d
                                performanceCount_32[0] =
                                    performanceCount_32[0] * performanceCount_27[0]
                                performanceCount_32[0] =
                                    performanceCount_32[0] * performanceCount_27[0]
                                performanceCount_32[0] =
                                    performanceCount_32[0] * performanceCount_27[0]
                                performanceCount_27 = performanceCount_56
                                performanceCount_34[0] =
                                    performanceCount_34[0] * performanceCount_30[0]
                                performanceCount_69 = performanceCount_32 ^ data_142d3f780
                                performanceCount_33[0] =
                                    performanceCount_33[0] * performanceCount_27[0]
                                performanceCount_32[0] =
                                    performanceCount_32[0] * performanceCount_27[0]
                                performanceCount_33 ^= data_142d3f780
                                performanceCount_34[0] =
                                    performanceCount_34[0] * performanceCount_27[0]
                                float var_1d8_1 = performanceCount_33[0]
                                performanceCount_19 = performanceCount_4[0]
                                float var_1f8_1 = performanceCount_4[0]
                                float var_1e8_1 = performanceCount_32[0]
                                float var_1e4_1 = performanceCount_32[0]
                                float var_1e0_1 = performanceCount_69[0]
                                float var_1d4_1 = performanceCount_32[0]
                                float var_1d0_1 = performanceCount_34[0]
                                performanceCount_15 = performanceCount_29[0]
                                float var_1c8_1 = performanceCount_29[0]
                                performanceCount_14 = performanceCount_9[0]
                                float var_1c4_1 = performanceCount_9[0]
                                performanceCount_10 = data_143dbb200
                                var_398.d = performanceCount_10[0]
                                float var_1c0_1 = performanceCount_10[0]
                                int32_t var_1bc_2 = 0x3f800000
                                float performanceCount_25[0x4]
                                
                                if (*(rdi + 0xe6) == 0)
                                    int32_t var_34c_6 = 0
                                    performanceCount_28.d = performanceCount_4[0]
                                label_141a03cb1:
                                    performanceCount_30 = *(rdi + 0x130)
                                    performanceCount_29[0] = performanceCount_29[0] f+ *rbx_12
                                    performanceCount_9[0] = performanceCount_9[0] f+ rbx_12[1]
                                    performanceCount_10[0] = performanceCount_10[0] f+ rbx_12[2]
                                    _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xe1)
                                    performanceCount_28.d = var_380_4[0]
                                    int32_t var_33c_5 = 0
                                    _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc6)
                                    performanceCount_28.d = var_370_2[0]
                                    performanceCount_15 = performanceCount_29[0]
                                    performanceCount_29 = *(rdi + 0x100)
                                    performanceCount_28 = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0xc9)
                                    performanceCount_44 = performanceCount_28
                                    float temp0_366[0x4] = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0x55)
                                    float temp0_367[0x4] =
                                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0)
                                    float temp0_368[0x4] = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0xaa)
                                    performanceCount_28 = _mm_mul_ps(
                                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 
                                            0xff), 
                                        performanceCount_30)
                                    int32_t var_32c_5 = 0
                                    float temp0_371[0x4] =
                                        _mm_mul_ps(temp0_367, performanceCount_29)
                                    int32_t var_31c_5 = 0x3f800000
                                    performanceCount_14 = performanceCount_9[0]
                                    performanceCount_9 = *(rdi + 0x110)
                                    float temp0_372[0x4] = _mm_mul_ps(temp0_366, performanceCount_9)
                                    var_398.d = performanceCount_10[0]
                                    performanceCount_10 = *(rdi + 0x120)
                                    float temp0_373[0x4] =
                                        _mm_mul_ps(temp0_368, performanceCount_10)
                                    performanceCount_4 = _mm_add_ps(
                                        _mm_add_ps(_mm_add_ps(temp0_371, temp0_372), temp0_373), 
                                        performanceCount_28)
                                    performanceCount_28.d = performanceCount_32[0]
                                    _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xe1)
                                    performanceCount_28.d = performanceCount_32[0]
                                    _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc6)
                                    performanceCount_28.d = performanceCount_69[0]
                                    performanceCount_28 = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0xc9)
                                    performanceCount_5 = performanceCount_28
                                    float temp0_380[0x4] = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0x55)
                                    float temp0_381[0x4] =
                                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0)
                                    float temp0_382[0x4] = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0xaa)
                                    performanceCount_28 = _mm_mul_ps(
                                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 
                                            0xff), 
                                        performanceCount_30)
                                    float temp0_385[0x4] = _mm_mul_ps(temp0_380, performanceCount_9)
                                    float temp0_386[0x4] =
                                        _mm_mul_ps(temp0_382, performanceCount_10)
                                    performanceCount_31 = _mm_add_ps(
                                        _mm_add_ps(
                                            _mm_add_ps(_mm_mul_ps(temp0_381, performanceCount_29), 
                                                temp0_385), 
                                            temp0_386), 
                                        performanceCount_28)
                                    performanceCount_28.d = performanceCount_33[0]
                                    _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xe1)
                                    performanceCount_28.d = performanceCount_32[0]
                                    _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc6)
                                    performanceCount_28.d = performanceCount_34[0]
                                    performanceCount_28 = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0xc9)
                                    performanceCount_17 = performanceCount_28
                                    float temp0_394[0x4] = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0x55)
                                    float temp0_395[0x4] =
                                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0)
                                    float temp0_396[0x4] = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0xaa)
                                    float temp0_397[0x4] =
                                        _mm_mul_ps(temp0_395, performanceCount_29)
                                    float temp0_398[0x4] = _mm_mul_ps(temp0_394, performanceCount_9)
                                    performanceCount_28 = _mm_mul_ps(
                                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 
                                            0xff), 
                                        performanceCount_30)
                                    performanceCount_11 = _mm_add_ps(
                                        _mm_add_ps(_mm_add_ps(temp0_397, temp0_398), 
                                            _mm_mul_ps(temp0_396, performanceCount_10)), 
                                        performanceCount_28)
                                    performanceCount_28.d = performanceCount_15[0]
                                    performanceCount_25 = performanceCount_14
                                    _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xe1)
                                    performanceCount_28.d = performanceCount_25[0]
                                    _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc6)
                                    performanceCount_28.d = var_398.d[0]
                                    performanceCount_28 = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0xc9)
                                    performanceCount_45 = performanceCount_28
                                    float temp0_408[0x4] = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0x55)
                                    float temp0_410[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 
                                            0), 
                                        performanceCount_29)
                                    float temp0_411[0x4] = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0xaa)
                                    float temp0_412[0x4] = _mm_mul_ps(temp0_408, performanceCount_9)
                                    float temp0_413[0x4] =
                                        _mm_mul_ps(temp0_411, performanceCount_10)
                                    performanceCount_28 = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0xff)
                                    float temp0_415[0x4] = _mm_add_ps(temp0_410, temp0_412)
                                    performanceCount_28 =
                                        _mm_mul_ps(performanceCount_28, performanceCount_30)
                                    performanceCount_12 = _mm_add_ps(
                                        _mm_add_ps(temp0_415, temp0_413), performanceCount_28)
                                else
                                    int32_t rdx_43 = *(rdi + 0x98)
                                    int32_t* rcx_59
                                    
                                    if (r13_3 == 0)
                                        rcx_59 = rbx_12
                                    else
                                        rcx_59 = (sx.q(r14_5 - rdx_43) << 4) + r8_25
                                    
                                    int64_t var_158_1 = *rcx_59
                                    int32_t* rcx_62
                                    
                                    if (r13_3 + 1 s>= rdx_43)
                                        rcx_62 = rbx_12
                                    else
                                        rcx_62 = (sx.q(rdx_43 + r14_5) << 4) + r8_25
                                    
                                    int32_t rax_117 = rcx_62[2]
                                    int64_t var_2a8_2 = *rcx_62
                                    int32_t* rcx_65
                                    
                                    if (r15_5 == 0)
                                        rcx_65 = rbx_12
                                    else
                                        rcx_65 = (sx.q(r14_5 - 1) << 4) + r8_25
                                    
                                    performanceCount_21.q = *rcx_65
                                    int32_t* rcx_68
                                    
                                    if (r15_5 + 1 s>= rdx_43)
                                        rcx_68 = rbx_12
                                    else
                                        rcx_68 = (sx.q(r14_5 + 1) << 4) + r8_25
                                    
                                    performanceCount_30 = var_158_1.d
                                    int32_t var_200_1 = rcx_68[2]
                                    performanceCount_4 = rcx_59[2]
                                    performanceCount_27 = var_158_1:4.d
                                    int64_t var_208_1 = *rcx_68
                                    float performanceCount_41
                                    int32_t rax_122
                                    
                                    if (performanceCount_30[0] f!= var_2a8_2.d
                                            || performanceCount_27[0] f!= var_2a8_2:4.d
                                            || not(performanceCount_4[0] f== rax_117))
                                        performanceCount_11 = performanceCount_21
                                        bool cond:22_1 = performanceCount_11[0] f!= var_208_1.d
                                        performanceCount_28 = rcx_65[2]
                                        int32_t performanceCount_48
                                        performanceCount_25 = performanceCount_48
                                        performanceCount_41 = performanceCount_11[0]
                                        performanceCount_11 = zx.o(0)
                                        
                                        if (cond:22_1 || performanceCount_25[0] f!= var_208_1:4.d
                                                || performanceCount_28.d f!= var_200_1)
                                            rax_122.b = 1
                                        else
                                            rax_122.b = 0
                                    
                                    if ((not(performanceCount_30[0] f!= var_2a8_2.d)
                                            && not(performanceCount_27[0] f!= var_2a8_2:4.d)
                                            && performanceCount_4[0] f== rax_117) || rax_122.b == 0)
                                        int32_t var_34c_5 = 0
                                        performanceCount_28.d = performanceCount_19[0]
                                        goto label_141a03cb1
                                    
                                    performanceCount_25[0] = performanceCount_25[0] f- var_208_1:4.d
                                    performanceCount_28.d = performanceCount_28.d f- var_200_1
                                    performanceCount_27[0] = performanceCount_27[0] f- var_2a8_2:4.d
                                    performanceCount_4[0] = performanceCount_4[0] f- rax_117
                                    performanceCount_30[0] = performanceCount_30[0] f- var_2a8_2.d
                                    performanceCount_33 = performanceCount_41
                                    performanceCount_33[0] = performanceCount_33[0] f- var_208_1.d
                                    performanceCount_12 = performanceCount_27
                                    float var_3a8_12 = performanceCount_25[0]
                                    performanceCount_4[0] = performanceCount_4[0] * var_3a8_12
                                    performanceCount_12[0] =
                                        performanceCount_12[0] f* performanceCount_28.d
                                    performanceCount_27[0] =
                                        performanceCount_27[0] * performanceCount_33[0]
                                    performanceCount_12[0] =
                                        performanceCount_12[0] - performanceCount_4[0]
                                    performanceCount_4[0] =
                                        performanceCount_4[0] * performanceCount_33[0]
                                    performanceCount_30[0] = performanceCount_30[0] * var_3a8_12
                                    performanceCount_30[0] =
                                        performanceCount_30[0] f* performanceCount_28.d
                                    performanceCount_30[0] =
                                        performanceCount_30[0] - performanceCount_27[0]
                                    performanceCount_4[0] =
                                        performanceCount_4[0] - performanceCount_30[0]
                                    performanceCount_12[0] =
                                        performanceCount_12[0] * performanceCount_12[0]
                                    performanceCount_30[0] =
                                        performanceCount_30[0] * performanceCount_30[0]
                                    performanceCount_28.d =
                                        performanceCount_4.d f* performanceCount_4[0]
                                    performanceCount_28.d =
                                        performanceCount_28.d f+ performanceCount_12[0]
                                    performanceCount_28.d =
                                        performanceCount_28.d f+ performanceCount_30[0]
                                    
                                    if (not(performanceCount_28.d f== performanceCount_31[0]))
                                        if (performanceCount_28.d f>= 9.99999994e-09f)
                                            performanceCount_9 = 0x3f000000
                                            performanceCount_25 = performanceCount_28
                                            float temp0_243[0x4] = _mm_rsqrt_ss(
                                                performanceCount_25[0], performanceCount_25[0])
                                            performanceCount_25[0] = performanceCount_25[0] * 0.5f
                                            temp0_243[0] = temp0_243[0] * temp0_243[0]
                                            performanceCount_25[0] =
                                                performanceCount_25[0] * temp0_243[0]
                                            performanceCount_28.d = 0.5f - performanceCount_25[0]
                                            temp0_243[0] = temp0_243[0] f* performanceCount_28.d
                                            temp0_243[0] = temp0_243[0] + temp0_243[0]
                                            temp0_243[0] = temp0_243[0] * temp0_243[0]
                                            performanceCount_25[0] =
                                                performanceCount_25[0] * temp0_243[0]
                                            performanceCount_9[0] = 0.5f - performanceCount_25[0]
                                            performanceCount_29 = performanceCount_15
                                            temp0_243[0] = temp0_243[0] * performanceCount_9[0]
                                            performanceCount_9 = performanceCount_14
                                            temp0_243[0] = temp0_243[0] + temp0_243[0]
                                            float var_3a8_13 = temp0_243[0]
                                            performanceCount_12[0] =
                                                performanceCount_12[0] * temp0_243[0]
                                            performanceCount_4[0] =
                                                performanceCount_4[0] * temp0_243[0]
                                            performanceCount_30[0] =
                                                performanceCount_30[0] * temp0_243[0]
                                            performanceCount_10 = var_398.d
                                        else
                                            performanceCount_12 = performanceCount_29
                                            performanceCount_4 = performanceCount_9
                                            performanceCount_30 = performanceCount_10
                                    
                                    performanceCount_30[0] - 0f
                                    
                                    if (not(performanceCount_30[0] <= 0f))
                                        performanceCount_33 = performanceCount_31
                                    else if (performanceCount_30[0] >= 0f)
                                        performanceCount_33 = zx.o(0)
                                    else
                                        performanceCount_33 = 0xbf800000
                                    
                                    performanceCount_33[0] =
                                        performanceCount_33[0] * performanceCount_12[0]
                                    performanceCount_33[0] =
                                        performanceCount_33[0] * performanceCount_30[0]
                                    performanceCount_33[0] =
                                        performanceCount_33[0] * performanceCount_4[0]
                                    performanceCount_33[0] =
                                        performanceCount_33[0] * performanceCount_33[0]
                                    performanceCount_32 = performanceCount_33 ^ data_142d3f780
                                    performanceCount_32[0] =
                                        performanceCount_32[0] * performanceCount_32[0]
                                    performanceCount_33[0] =
                                        performanceCount_33[0] + performanceCount_32[0]
                                    
                                    if (not(performanceCount_33[0] != performanceCount_31[0]))
                                        performanceCount_10 = performanceCount_33
                                    else if (performanceCount_33[0] >= 9.99999994e-09f)
                                        performanceCount_29 = zx.o(0)
                                        performanceCount_10 = 0x3f000000
                                        performanceCount_29[0] = performanceCount_33[0]
                                        float performanceCount_38[0x4] = _mm_rsqrt_ss(
                                            performanceCount_29[0], performanceCount_29[0])
                                        performanceCount_29[0] = performanceCount_29[0] * 0.5f
                                        performanceCount_38[0] =
                                            performanceCount_38[0] * performanceCount_38[0]
                                        performanceCount_29[0] =
                                            performanceCount_29[0] * performanceCount_38[0]
                                        performanceCount_28.d = 0.5f - performanceCount_29[0]
                                        performanceCount_38[0] =
                                            performanceCount_38[0] f* performanceCount_28.d
                                        performanceCount_38[0] =
                                            performanceCount_38[0] + performanceCount_38[0]
                                        performanceCount_38[0] =
                                            performanceCount_38[0] * performanceCount_38[0]
                                        performanceCount_29[0] =
                                            performanceCount_29[0] * performanceCount_38[0]
                                        performanceCount_10[0] = 0.5f - performanceCount_29[0]
                                        performanceCount_38[0] =
                                            performanceCount_38[0] * performanceCount_10[0]
                                        performanceCount_38[0] =
                                            performanceCount_38[0] + performanceCount_38[0]
                                        performanceCount_10 = performanceCount_38
                                        float var_3a8_14 = performanceCount_38[0]
                                        performanceCount_10[0] =
                                            performanceCount_10[0] * performanceCount_33[0]
                                        performanceCount_32[0] =
                                            performanceCount_32[0] * performanceCount_38[0]
                                    else
                                        performanceCount_32 = performanceCount_29
                                        performanceCount_11 = performanceCount_9
                                    
                                    performanceCount_9 = var_1f8_1.o
                                    performanceCount_10[0] =
                                        performanceCount_10[0] * performanceCount_33[0]
                                    int32_t var_34c_4 = 0
                                    float temp0_244[0x4] =
                                        _mm_shuffle_ps(performanceCount_9, performanceCount_9, 0x55)
                                    performanceCount_11[0] =
                                        performanceCount_11[0] * performanceCount_33[0]
                                    performanceCount_44[0] = performanceCount_32[0]
                                    int32_t var_33c_4 = 0
                                    float temp0_245[0x4] = _mm_shuffle_ps(performanceCount_44, 
                                        performanceCount_44, 0xe1)
                                    performanceCount_4 = performanceCount_5
                                    temp0_245[0] = performanceCount_11[0]
                                    performanceCount_10[0] =
                                        performanceCount_10[0] - performanceCount_11[0]
                                    performanceCount_11[0] =
                                        performanceCount_11[0] * performanceCount_33[0]
                                    int32_t var_32c_4 = 0
                                    performanceCount_25 = performanceCount_10
                                    performanceCount_28.d =
                                        performanceCount_32.d f* performanceCount_33[0]
                                    int32_t var_31c_4 = 0x3f800000
                                    performanceCount_25[0] =
                                        performanceCount_25[0] * performanceCount_33[0]
                                    performanceCount_4[0] = performanceCount_10[0]
                                    float temp0_246[0x4] =
                                        _mm_shuffle_ps(temp0_245, temp0_245, 0xc6)
                                    performanceCount_29 = performanceCount_45
                                    temp0_246[0] = performanceCount_10[0]
                                    performanceCount_10 = performanceCount_17
                                    performanceCount_28.d =
                                        performanceCount_28.d f- performanceCount_25[0]
                                    performanceCount_10[0] = performanceCount_33[0]
                                    float temp0_247[0x4] =
                                        _mm_shuffle_ps(performanceCount_4, performanceCount_4, 0xe1)
                                    float temp0_248[0x4] = _mm_shuffle_ps(performanceCount_10, 
                                        performanceCount_10, 0xe1)
                                    performanceCount_32[0] =
                                        performanceCount_32[0] * performanceCount_33[0]
                                    temp0_248[0] = performanceCount_33[0]
                                    temp0_247[0] = performanceCount_28.d
                                    float performanceCount_70[0x4] =
                                        _mm_shuffle_ps(temp0_246, temp0_246, 0xc9)
                                    performanceCount_28 = var_1e8_1.o
                                    performanceCount_11[0] =
                                        performanceCount_11[0] - performanceCount_32[0]
                                    float temp0_249[0x4] =
                                        _mm_shuffle_ps(temp0_247, temp0_247, 0xc6)
                                    float temp0_250[0x4] =
                                        _mm_shuffle_ps(temp0_248, temp0_248, 0xc6)
                                    float temp0_251[0x4] =
                                        _mm_shuffle_ps(performanceCount_9, performanceCount_9, 0)
                                    temp0_250[0] = performanceCount_33[0]
                                    float temp0_252[0x4] =
                                        _mm_mul_ps(temp0_251, performanceCount_70)
                                    temp0_249[0] = performanceCount_11[0]
                                    float performanceCount_62[0x4] =
                                        _mm_shuffle_ps(temp0_250, temp0_250, 0xc9)
                                    float performanceCount_39[0x4] =
                                        _mm_shuffle_ps(temp0_249, temp0_249, 0xc9)
                                    float temp0_254[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(performanceCount_9, performanceCount_9, 
                                            0xaa), 
                                        performanceCount_62)
                                    float temp0_255[0x4] =
                                        _mm_mul_ps(temp0_244, performanceCount_39)
                                    float temp0_256[0x4] = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0x55)
                                    float temp0_257[0x4] =
                                        _mm_shuffle_ps(performanceCount_9, performanceCount_9, 0xff)
                                    float temp0_258[0x4] =
                                        _mm_mul_ps(temp0_256, performanceCount_39)
                                    float temp0_259[0x4] = _mm_add_ps(temp0_255, temp0_252)
                                    performanceCount_5 = performanceCount_39
                                    performanceCount_29[0] = performanceCount_15[0]
                                    performanceCount_44 = performanceCount_70
                                    performanceCount_25 = performanceCount_14
                                    float temp0_260[0x4] = _mm_shuffle_ps(performanceCount_29, 
                                        performanceCount_29, 0xe1)
                                    temp0_260[0] = performanceCount_25[0]
                                    performanceCount_17 = performanceCount_62
                                    float temp0_261[0x4] = _mm_add_ps(temp0_259, temp0_254)
                                    float temp0_262[0x4] =
                                        _mm_shuffle_ps(temp0_260, temp0_260, 0xc6)
                                    temp0_262[0] = var_398.d[0]
                                    float temp0_263[0x4] = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0xaa)
                                    float performanceCount_71[0x4] =
                                        _mm_shuffle_ps(temp0_262, temp0_262, 0xc9)
                                    float temp0_264[0x4] =
                                        _mm_mul_ps(temp0_257, performanceCount_71)
                                    float temp0_266[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 
                                            0), 
                                        performanceCount_70)
                                    float temp0_267[0x4] = _mm_add_ps(temp0_261, temp0_264)
                                    performanceCount_45 = performanceCount_71
                                    float temp0_268[0x4] =
                                        _mm_mul_ps(temp0_263, performanceCount_62)
                                    float temp0_269[0x4] = _mm_add_ps(temp0_258, temp0_266)
                                    var_2d8.o = temp0_267
                                    performanceCount_33 = *(rdi + 0x110)
                                    float temp0_270[0x4] = _mm_add_ps(temp0_269, temp0_268)
                                    performanceCount_34 = *(rdi + 0x120)
                                    performanceCount_61 = *(rdi + 0x130)
                                    float performanceCount_63[0x4] = _mm_add_ps(temp0_270, 
                                        _mm_mul_ps(
                                            _mm_shuffle_ps(performanceCount_28, 
                                                performanceCount_28, 0xff), 
                                            performanceCount_71))
                                    performanceCount_28 = var_1d8_1.o
                                    float temp0_273[0x4] =
                                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0)
                                    float temp0_274[0x4] = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0x55)
                                    float temp0_275[0x4] =
                                        _mm_mul_ps(temp0_273, performanceCount_70)
                                    float temp0_276[0x4] = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0xaa)
                                    float temp0_277[0x4] =
                                        _mm_mul_ps(temp0_274, performanceCount_39)
                                    float temp0_278[0x4] =
                                        _mm_mul_ps(temp0_276, performanceCount_62)
                                    performanceCount_28 = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0xff)
                                    float temp0_280[0x4] = _mm_add_ps(temp0_277, temp0_275)
                                    performanceCount_28 =
                                        _mm_mul_ps(performanceCount_28, performanceCount_71)
                                    float temp0_282[0x4] = _mm_shuffle_ps(performanceCount_63, 
                                        performanceCount_63, 0xaa)
                                    float performanceCount_64[0x4] = _mm_add_ps(
                                        _mm_add_ps(temp0_280, temp0_278), performanceCount_28)
                                    performanceCount_28 = var_1c8_1.o
                                    float temp0_285[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 
                                            0), 
                                        performanceCount_70)
                                    float temp0_287[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 
                                            0x55), 
                                        performanceCount_39)
                                    float temp0_288[0x4] = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0xaa)
                                    float temp0_289[0x4] = _mm_shuffle_ps(performanceCount_64, 
                                        performanceCount_64, 0x55)
                                    float temp0_290[0x4] = _mm_add_ps(temp0_287, temp0_285)
                                    float temp0_291[0x4] = _mm_shuffle_ps(performanceCount_64, 
                                        performanceCount_64, 0xaa)
                                    float temp0_292[0x4] =
                                        _mm_mul_ps(temp0_288, performanceCount_62)
                                    float temp0_293[0x4] =
                                        _mm_shuffle_ps(temp0_267, temp0_267, 0x55)
                                    performanceCount_28 = _mm_mul_ps(
                                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 
                                            0xff), 
                                        performanceCount_71)
                                    float temp0_296[0x4] = _mm_add_ps(temp0_290, temp0_292)
                                    float temp0_297[0x4] = _mm_shuffle_ps(performanceCount_63, 
                                        performanceCount_63, 0x55)
                                    float temp0_298[0x4] = _mm_shuffle_ps(performanceCount_63, 
                                        performanceCount_63, 0xff)
                                    float temp0_299[0x4] =
                                        _mm_shuffle_ps(temp0_267, temp0_267, 0xaa)
                                    float temp0_300[0x4] = _mm_shuffle_ps(performanceCount_64, 
                                        performanceCount_64, 0xff)
                                    float temp0_301[0x4] =
                                        _mm_add_ps(temp0_296, performanceCount_28)
                                    performanceCount_28 = _mm_shuffle_ps(temp0_267, temp0_267, 0xff)
                                    float temp0_303[0x4] =
                                        _mm_shuffle_ps(temp0_301, temp0_301, 0x55)
                                    temp0_303[0] = temp0_303[0] f+ rbx_12[1]
                                    temp0_301[0] = temp0_301[0] f+ *rbx_12
                                    float temp0_304[0x4] =
                                        _mm_shuffle_ps(temp0_301, temp0_301, 0xaa)
                                    temp0_304[0] = temp0_304[0] f+ rbx_12[2]
                                    float temp0_305[0x4] =
                                        _mm_shuffle_ps(temp0_301, temp0_301, 0xff)
                                    performanceCount_11 = var_2d8.o
                                    float temp0_306[0x4] = _mm_shuffle_ps(performanceCount_11, 
                                        performanceCount_11, 0xe1)
                                    temp0_306[0] = temp0_293[0]
                                    performanceCount_32 = *(rdi + 0x100)
                                    float temp0_307[0x4] =
                                        _mm_shuffle_ps(temp0_306, temp0_306, 0xc6)
                                    temp0_307[0] = temp0_299[0]
                                    var_2d8.o = temp0_306
                                    float temp0_308[0x4] =
                                        _mm_shuffle_ps(temp0_307, temp0_307, 0x27)
                                    temp0_308[0] = performanceCount_28.d
                                    float performanceCount_65[0x4] =
                                        _mm_shuffle_ps(temp0_308, temp0_308, 0x39)
                                    var_2d8.o = performanceCount_65
                                    float temp0_309[0x4] =
                                        _mm_shuffle_ps(performanceCount_65, performanceCount_65, 0)
                                    performanceCount_28 = performanceCount_65
                                    float temp0_310[0x4] = _mm_shuffle_ps(performanceCount_65, 
                                        performanceCount_65, 0x55)
                                    float temp0_311[0x4] = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0xaa)
                                    performanceCount_28 = _mm_mul_ps(
                                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 
                                            0xff), 
                                        performanceCount_61)
                                    float temp0_314[0x4] =
                                        _mm_mul_ps(temp0_310, performanceCount_33)
                                    float temp0_315[0x4] =
                                        _mm_mul_ps(temp0_311, performanceCount_34)
                                    float temp0_316[0x4] =
                                        _mm_shuffle_ps(temp0_301, temp0_301, 0xe1)
                                    float temp0_320[0x4] = _mm_add_ps(
                                        _mm_add_ps(
                                            _mm_add_ps(_mm_mul_ps(temp0_309, performanceCount_32), 
                                                temp0_314), 
                                            temp0_315), 
                                        performanceCount_28)
                                    performanceCount_28 = performanceCount_63
                                    _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xe1)
                                    performanceCount_28.d = temp0_297[0]
                                    _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc6)
                                    performanceCount_28.d = temp0_282[0]
                                    _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0x27)
                                    performanceCount_28.d = temp0_298[0]
                                    var_2d8.o = temp0_320
                                    performanceCount_28 = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0x39)
                                    temp0_316[0] = temp0_303[0]
                                    float temp0_325[0x4] =
                                        _mm_shuffle_ps(temp0_316, temp0_316, 0xc6)
                                    float temp0_326[0x4] =
                                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0)
                                    float temp0_327[0x4] = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0x55)
                                    float temp0_328[0x4] = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0xaa)
                                    temp0_325[0] = temp0_304[0]
                                    performanceCount_28 = _mm_mul_ps(
                                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 
                                            0xff), 
                                        performanceCount_61)
                                    float temp0_331[0x4] =
                                        _mm_mul_ps(temp0_326, performanceCount_32)
                                    float temp0_332[0x4] =
                                        _mm_mul_ps(temp0_327, performanceCount_33)
                                    float temp0_333[0x4] =
                                        _mm_mul_ps(temp0_328, performanceCount_34)
                                    float temp0_334[0x4] =
                                        _mm_shuffle_ps(temp0_325, temp0_325, 0x27)
                                    float performanceCount_66[0x4] = _mm_add_ps(
                                        _mm_add_ps(_mm_add_ps(temp0_331, temp0_332), temp0_333), 
                                        performanceCount_28)
                                    performanceCount_28 = performanceCount_64
                                    _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xe1)
                                    performanceCount_28.d = temp0_289[0]
                                    _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc6)
                                    performanceCount_28.d = temp0_291[0]
                                    _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0x27)
                                    performanceCount_28.d = temp0_300[0]
                                    performanceCount_28 = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0x39)
                                    float temp0_341[0x4] = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0x55)
                                    float temp0_342[0x4] =
                                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0)
                                    float temp0_343[0x4] = _mm_shuffle_ps(performanceCount_28, 
                                        performanceCount_28, 0xaa)
                                    float temp0_344[0x4] =
                                        _mm_mul_ps(temp0_341, performanceCount_33)
                                    float temp0_345[0x4] =
                                        _mm_mul_ps(temp0_343, performanceCount_34)
                                    float temp0_346[0x4] =
                                        _mm_mul_ps(temp0_342, performanceCount_32)
                                    performanceCount_28 = _mm_mul_ps(
                                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 
                                            0xff), 
                                        performanceCount_61)
                                    float temp0_349[0x4] = _mm_add_ps(temp0_346, temp0_344)
                                    temp0_334[0] = temp0_305[0]
                                    float temp0_350[0x4] =
                                        _mm_shuffle_ps(temp0_334, temp0_334, 0x39)
                                    float temp0_351[0x4] = _mm_shuffle_ps(temp0_350, temp0_350, 0)
                                    float temp0_352[0x4] = _mm_add_ps(temp0_349, temp0_345)
                                    float temp0_353[0x4] =
                                        _mm_shuffle_ps(temp0_350, temp0_350, 0x55)
                                    float temp0_354[0x4] =
                                        _mm_mul_ps(temp0_351, performanceCount_32)
                                    float temp0_355[0x4] =
                                        _mm_shuffle_ps(temp0_350, temp0_350, 0xaa)
                                    float temp0_356[0x4] =
                                        _mm_mul_ps(temp0_353, performanceCount_33)
                                    float performanceCount_40[0x4] =
                                        _mm_add_ps(temp0_352, performanceCount_28)
                                    float temp0_357[0x4] =
                                        _mm_mul_ps(temp0_355, performanceCount_34)
                                    float temp0_358[0x4] =
                                        _mm_shuffle_ps(temp0_350, temp0_350, 0xff)
                                    float performanceCount_49[0x4] = performanceCount_40
                                    float temp0_360[0x4] =
                                        _mm_add_ps(_mm_add_ps(temp0_354, temp0_356), temp0_357)
                                    performanceCount_4 = var_2d8.o
                                    performanceCount_11 = performanceCount_40
                                    performanceCount_31 = performanceCount_66
                                    performanceCount_12 = _mm_add_ps(temp0_360, 
                                        _mm_mul_ps(temp0_358, performanceCount_61))
                                float (* rax_123)[0x4] = var_2f0
                                float performanceCount_50[0x4] = performanceCount_31
                                float performanceCount_6[0x4] = performanceCount_4
                                float performanceCount_22[0x4] = performanceCount_11
                                *(rax_123 + rsi_8) = performanceCount_4
                                *(rax_123 + rsi_8 + 0x10) = performanceCount_31
                                *(rax_123 + rsi_8 + 0x20) = performanceCount_11
                                *(rax_123 + rsi_8 + 0x30) = performanceCount_12
                                float performanceCount_23[0x4] = performanceCount_12
                                int32_t rax_125 = *(rdi + 0xf0) * 0xbb38435 + 0x3619636b
                                *(rdi + 0xf0) = rax_125
                                int32_t var_3a8_15 = rax_125 u>> 9 | 0x3f800000
                                performanceCount_31 = sub_141a14b90(rdi, r12_3, &performanceCount_6)
                                r12_3 += 1
                                rax_89 = *(rdi + 0x98)
                                rdx_37 = var_218 + 1
                                r8_25 = var_318
                                rsi_8 += 0x40
                                rcx_47 = var_210
                                performanceCount_11 = zx.o(0)
                                var_218 = rdx_37
                            
                            rcx_47 += 1
                            r14_5 += 1
                            rbx_12 = &rbx_12[4]
                            var_210 = rcx_47
                            r15_5 += 1
                        while (r15_5 s< rax_89)
                    
                    r13_3 += 1
                    r8_24 = rax_89
                while (r13_3 s< rax_89)
        
        performanceCount_4 = zx.o(performanceCount)
    
    void* rcx_70 = var_318
    
    if (rcx_70 != 0)
        sub_140a74f90(rcx_70)
else
    performanceCount_28 = *(rdi + 0x80)
    performanceCount_30 = zx.o(0)
    
    if (not(performanceCount_28.d f>= 0f))
        performanceCount_7.d = performanceCount_28.d f+ *(rdi + 0x74)
        *(rdi + 0x80) = (performanceCount_28 ^ 0x80000000).d
        *(rdi + 0x74) = performanceCount_7.d
    
    performanceCount_28 = *(rdi + 0x84)
    
    if (not(performanceCount_28.d f>= 0f))
        performanceCount_7.d = performanceCount_28.d f+ *(rdi + 0x78)
        *(rdi + 0x84) = (performanceCount_28 ^ 0x80000000).d
        *(rdi + 0x78) = performanceCount_7.d
    
    int32_t r13_1 = r13 * r13
    
    if (r13_1 s> 0)
        sub_1405a52a0(&var_2f0, r13_1)
    
    int32_t r12_1 = 0
    performanceCount_7.d = performanceCount_12.d f* *(rdi + 0x80)
    performanceCount_12[0] = performanceCount_12[0] f* *(rdi + 0x84)
    performanceCount_18 = performanceCount_7.d
    performanceCount_15 = performanceCount_12[0]
    
    if (r13_1 s> 0)
        performanceCount_69 = 0x3f000000
        performanceCount_28 = 0x3eaaaaab
        performanceCount_8 = 0xbf000000
        performanceCount_61 = 0x3b808081
        performanceCount_33 = 0x3c000000
        
        do
            performanceCount_12 = performanceCount_30
            int32_t i_5 = *(rdi + 0x16c) + r12_1
            int32_t i = i_5
            
            if (i_5 s> 0)
                do
                    int32_t rcx_3 = i & 0x80000001
                    
                    if (rcx_3 s< 0)
                        rcx_3 = ((rcx_3 - 1) | 0xfffffffe) + 1
                    
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(i)
                    i = (temp3_1 - temp2_1) s>> 1
                    performanceCount_7.d = _mm_cvtepi32_ps(zx.o(rcx_3)).d f* performanceCount_69[0]
                    performanceCount_69[0] = performanceCount_69[0] * performanceCount_69[0]
                    performanceCount_12[0] = performanceCount_12[0] f+ performanceCount_7.d
                while (i s> 0)
            
            performanceCount_34 = performanceCount_30
            performanceCount_26 = performanceCount_28
            
            if (i_5 s> 0)
                uint64_t rdx_4
                
                do
                    rdx_4 = zx.q(i_5 s/ 3)
                    performanceCount_7 = zx.o(i_5 - (rdx_4 * 3).d)
                    i_5 = rdx_4.d
                    performanceCount_7.d =
                        _mm_cvtepi32_ps(performanceCount_7).d f* performanceCount_26[0]
                    performanceCount_26[0] = performanceCount_26[0] f* performanceCount_28.d
                    performanceCount_34[0] = performanceCount_34[0] f+ performanceCount_7.d
                while (rdx_4.d s> 0)
            
            performanceCount_7 = zx.o(*(rdi + 0x60))
            performanceCount_4 = performanceCount_12
            performanceCount_4[0] = performanceCount_4[0] f* *(rdi + 0x80)
            int32_t rbx_1 = *(rdi + 0xc0)
            performanceCount_34[0] = performanceCount_34[0] f* *(rdi + 0x84)
            int32_t rbx_2 = rbx_1 - 1
            performanceCount_4[0] = performanceCount_4[0] f+ *(rdi + 0x74)
            performanceCount_7 = _mm_cvtepi32_ps(performanceCount_7)
            performanceCount_34[0] = performanceCount_34[0] f+ *(rdi + 0x78)
            performanceCount_16 = performanceCount_4[0]
            performanceCount_4[0] = performanceCount_4[0] f/ *(rdi + 8)
            performanceCount_34[0] = performanceCount_34[0] f/ *(rdi + 0xc)
            performanceCount_4[0] = performanceCount_4[0] f- performanceCount_7.d
            performanceCount_7 = _mm_cvtepi32_ps(zx.o(*(rdi + 0x64)))
            performanceCount_34[0] = performanceCount_34[0] f- performanceCount_7.d
            performanceCount_4[0] = performanceCount_4[0] + performanceCount_4[0]
            performanceCount_28.d = performanceCount_34.d f+ performanceCount_34[0]
            performanceCount_7.d = performanceCount_4.d f- performanceCount_69[0]
            int32_t r9_1 = int.d(performanceCount_7.d)
            performanceCount_7.d = performanceCount_28.d f- performanceCount_69[0]
            int32_t r8_3 = int.d(performanceCount_7.d)
            performanceCount_7.d = performanceCount_8.d f- performanceCount_4[0]
            int32_t r8_4 = r8_3 s>> 1
            int32_t rcx_6 = int.d(performanceCount_7.d)
            performanceCount_7.d = performanceCount_8.d f- performanceCount_28.d
            int32_t rcx_8 = neg.d(rcx_6 s>> 1)
            int32_t rdx_7 = neg.d(int.d(performanceCount_7.d) s>> 1)
            int32_t r9_2 = r9_1 s>> 1
            int32_t r14_1
            
            if (r9_2 s>= 0)
                r14_1 = rbx_2
                
                if (r9_2 s< rbx_2)
                    r14_1 = r9_2
            else
                r14_1 = 0
            
            int32_t r15_1
            
            if (r8_4 s>= 0)
                r15_1 = rbx_2
                
                if (r8_4 s< rbx_2)
                    r15_1 = r8_4
            else
                r15_1 = 0
            
            int32_t rsi_1
            
            if (rcx_8 s>= 0)
                rsi_1 = rbx_2
                
                if (rcx_8 s< rbx_2)
                    rsi_1 = rcx_8
            else
                rsi_1 = 0
            
            if (rdx_7 s< 0)
                rbx_2 = 0
            else if (rdx_7 s< rbx_2)
                rbx_2 = rdx_7
            
            performanceCount_7 = performanceCount_4
            truncf(performanceCount_7.d)
            performanceCount_4[0] = performanceCount_4[0] f- performanceCount_7.d
            performanceCount_7 = performanceCount_34
            truncf(performanceCount_7.d)
            int32_t r8_5 = *(rdi + 0xc0)
            performanceCount_34[0] = performanceCount_34[0] f- performanceCount_7.d
            performanceCount_8 = zx.o(0)
            performanceCount_26 = zx.o(0)
            int32_t rcx_10 = r8_5 * r15_1
            performanceCount_59 = zx.o(0)
            int32_t r8_6 = r8_5 * rbx_2
            int64_t r10_1 = sx.q(rcx_10 + r14_1)
            void* rdx_8 = **(rdi + 0xb8)
            performanceCount_7.d = float.s(zx.d(*(rdx_8 + r10_1)))
            int64_t r9_3 = sx.q(r8_6 + r14_1)
            performanceCount_7.d = performanceCount_7.d f* performanceCount_61[0]
            performanceCount_26[0] = float.s(zx.d(*(r9_3 + rdx_8)))
            int64_t r11_1 = sx.q(rcx_10 + rsi_1)
            uint32_t rax_12 = zx.d(*(r11_1 + rdx_8))
            performanceCount_26[0] = performanceCount_26[0] * performanceCount_61[0]
            performanceCount_28.d = float.s(rax_12)
            int64_t r8_7 = sx.q(r8_6 + rsi_1)
            performanceCount_28.d = performanceCount_28.d f* performanceCount_61[0]
            performanceCount_8[0] = float.s(zx.d(*(rdx_8 + r8_7)))
            int64_t rcx_11 = **(rdi + 0xb0)
            performanceCount_28.d = performanceCount_28.d f- performanceCount_7.d
            performanceCount_8[0] = performanceCount_8[0] * performanceCount_61[0]
            performanceCount_61 = performanceCount_34
            uint32_t rax_16 = zx.d(*(rcx_11 + (r10_1 << 1)))
            performanceCount_8[0] = performanceCount_8[0] - performanceCount_26[0]
            performanceCount_28.d = performanceCount_28.d f* performanceCount_4[0]
            performanceCount_28.d = performanceCount_28.d f+ performanceCount_7.d
            performanceCount_7.d = float.s(*(rdi + 0x68))
            performanceCount_8[0] = performanceCount_8[0] * performanceCount_4[0]
            performanceCount_7.d = performanceCount_7.d f* *(rdi + 8)
            performanceCount_8[0] = performanceCount_8[0] + performanceCount_26[0]
            performanceCount_26 = zx.o(0)
            performanceCount_26[0] = float.s(*(rdi + 0x6c))
            performanceCount_4[0] = performanceCount_4[0] f- performanceCount_7.d
            performanceCount_26[0] = performanceCount_26[0] f* *(rdi + 0xc)
            performanceCount_8[0] = performanceCount_8[0] f- performanceCount_28.d
            var_2b0.d = performanceCount_4[0]
            performanceCount_61[0] = performanceCount_61[0] - performanceCount_26[0]
            performanceCount_8[0] = performanceCount_8[0] * performanceCount_34[0]
            performanceCount_8[0] = performanceCount_8[0] f+ performanceCount_28.d
            performanceCount_28.d = float.s(rax_16)
            performanceCount_59[0] = float.s(zx.d(*(rcx_11 + (r9_3 << 1))))
            performanceCount_28.d = performanceCount_28.d f- 32768f
            performanceCount_7.d = float.s(zx.d(*(rcx_11 + (r11_1 << 1))))
            uint32_t rax_19 = zx.d(*(rcx_11 + (r8_7 << 1)))
            performanceCount_28.d = performanceCount_28.d f* performanceCount_33[0]
            performanceCount_59[0] = performanceCount_59[0] - 32768f
            performanceCount_7.d = performanceCount_7.d f- 32768f
            performanceCount_59[0] = performanceCount_59[0] * performanceCount_33[0]
            performanceCount_7.d = performanceCount_7.d f* performanceCount_33[0]
            performanceCount_33 = zx.o(0)
            performanceCount_33[0] = float.s(rax_19)
            performanceCount_7.d = performanceCount_7.d f- performanceCount_28.d
            performanceCount_33[0] = performanceCount_33[0] - 32768f
            performanceCount_7.d = performanceCount_7.d f* performanceCount_4[0]
            performanceCount_33[0] = performanceCount_33[0] * 0.0078125f
            performanceCount_7.d = performanceCount_7.d f+ performanceCount_28.d
            performanceCount_33[0] = performanceCount_33[0] - performanceCount_59[0]
            performanceCount_33[0] = performanceCount_33[0] * performanceCount_4[0]
            performanceCount_30 = zx.o(0)
            bool cond:10_1 = performanceCount_8[0] <= 0f
            performanceCount_33[0] = performanceCount_33[0] + performanceCount_59[0]
            performanceCount_33[0] = performanceCount_33[0] f- performanceCount_7.d
            performanceCount_33[0] = performanceCount_33[0] * performanceCount_34[0]
            performanceCount_33[0] = performanceCount_33[0] f+ performanceCount_7.d
            performanceCount_33[0] = performanceCount_33[0] f* *(rdi + 0x10)
            
            if (not(cond:10_1))
                int32_t rax_21 = *(rdi + 0xf0) * 0xbb38435 + 0x3619636b
                *(rdi + 0xf0) = rax_21
                performanceCount_7.d = (rax_21 u>> 9 | 0x3f800000).d f- performanceCount_31[0]
                
                if (not(performanceCount_8[0] f< performanceCount_7.d))
                    int32_t* i_1 = *(rdi + 0x1a8)
                    
                    for (void* rdx_10 = sx.q(*(rdi + 0x1b0)) * 0x1c + i_1; i_1 != rdx_10; 
                            i_1 = &i_1[7])
                        if (not(performanceCount_4[0] f<= *i_1)
                                && not(performanceCount_4[0] f>= i_1[3])
                                && not(performanceCount_61[0] f<= i_1[1])
                                && not(performanceCount_61[0] f>= i_1[4])
                                && not(performanceCount_33[0] f<= i_1[2])
                                && performanceCount_33[0] f< i_1[5])
                            goto label_141a0299c
                    
                    int32_t* rax_25
                    
                    if (*(rdi + 0xe5) == 0)
                        performanceCount_21 = 0x3f800000
                        rax_25 = &performanceCount_21
                        int32_t var_24c = 0x3f800000
                        int32_t var_248_1 = 0x3f800000
                    else
                        rax_25 = sub_141a0e480(rdi, &var_268)
                    
                    int32_t performanceCount_54 = rax_25[2]
                    uint64_t var_2a8_1 = *rax_25
                    
                    if (*(rdi + 0xe4) == 0)
                        performanceCount_11 = zx.o(0)
                    else
                        int32_t rax_27 = *(rdi + 0xf0) * 0xbb38435 + 0x3619636b
                        *(rdi + 0xf0) = rax_27
                        performanceCount_11 = rax_27 u>> 9 | 0x3f800000
                        performanceCount_11[0] = performanceCount_11[0] - performanceCount_31[0]
                        performanceCount_11[0] = performanceCount_11[0] * 360f
                    
                    sub_141a0e800(&performanceCount_47, &var_218, zx.o(0))
                    sub_141a0e800(&performanceCount_19, &var_210, performanceCount_11)
                    sub_141a0e800(&performanceCount_20, &performanceCount_14, zx.o(0))
                    uint128_t performanceCount_60 = var_210.d
                    performanceCount_8 = performanceCount_19
                    performanceCount_30 = var_218.d
                    performanceCount_26 = var_2a8_1.d
                    performanceCount_11 = performanceCount_20
                    performanceCount_59 = performanceCount_47
                    performanceCount_7.d = performanceCount_60.d f* performanceCount_30[0]
                    int32_t var_34c_1 = 0
                    performanceCount_28.d = performanceCount_11.d f* performanceCount_59[0]
                    int32_t var_33c_1 = 0
                    performanceCount_7.d = performanceCount_7.d f* performanceCount_26[0]
                    int32_t var_228_1 = performanceCount_7.d
                    performanceCount_44[0] = performanceCount_7.d
                    performanceCount_7.d = performanceCount_8.d f* performanceCount_30[0]
                    performanceCount_7.d = performanceCount_7.d f* performanceCount_26[0]
                    performanceCount_26[0] = performanceCount_26[0] * performanceCount_59[0]
                    int32_t var_230_1 = performanceCount_7.d
                    performanceCount_44[1] = performanceCount_7.d
                    performanceCount_7.d = performanceCount_14.d f* performanceCount_8[0]
                    float var_238_1 = performanceCount_26[0]
                    performanceCount_44[2] = performanceCount_26[0]
                    performanceCount_26 = performanceCount_28
                    performanceCount_28.d = performanceCount_28.d f* performanceCount_8[0]
                    performanceCount_26[0] = performanceCount_26[0] f* performanceCount_60.d
                    performanceCount_26[0] = performanceCount_26[0] f- performanceCount_7.d
                    var_398.d = performanceCount_26[0]
                    performanceCount_26 = var_2a8_1:4.d
                    performanceCount_7.d = var_398.d.d f* performanceCount_26[0]
                    var_398.d = performanceCount_7.d
                    performanceCount_5.d = performanceCount_7.d
                    performanceCount_7.d = performanceCount_14.d f* performanceCount_60.d
                    performanceCount_28.d = performanceCount_28.d f+ performanceCount_7.d
                    performanceCount_7.d = performanceCount_11.d f* performanceCount_30[0]
                    performanceCount_7.d = performanceCount_7.d f* performanceCount_26[0]
                    performanceCount_28.d = performanceCount_28.d f* performanceCount_26[0]
                    performanceCount_7 ^= data_142d3f780
                    performanceCount_26 = performanceCount_54
                    int32_t var_258_1 = performanceCount_7.d
                    performanceCount_5:8.d = performanceCount_7.d
                    performanceCount_7.d = performanceCount_11.d f* performanceCount_8[0]
                    int32_t var_240_1 = performanceCount_28.d
                    performanceCount_5:4.d = performanceCount_28.d
                    performanceCount_28.d = performanceCount_14.d f* performanceCount_59[0]
                    performanceCount_11[0] = performanceCount_11[0] f* performanceCount_60.d
                    performanceCount_59 = performanceCount_28
                    performanceCount_28.d = performanceCount_28.d f* performanceCount_8[0]
                    performanceCount_59[0] = performanceCount_59[0] f* performanceCount_60.d
                    performanceCount_11[0] = performanceCount_11[0] f- performanceCount_28.d
                    performanceCount_59[0] = performanceCount_59[0] f+ performanceCount_7.d
                    performanceCount_7.d = performanceCount_14.d f* performanceCount_30[0]
                    performanceCount_11[0] = performanceCount_11[0] * performanceCount_26[0]
                    performanceCount_59[0] = performanceCount_59[0] * performanceCount_26[0]
                    performanceCount_7.d = performanceCount_7.d f* performanceCount_26[0]
                    performanceCount_59 ^= data_142d3f780
                    float var_308_1 = performanceCount_59[0]
                    performanceCount_17.d = performanceCount_59[0]
                    int32_t var_380_3 = performanceCount_7.d
                    float var_370_1 = performanceCount_11[0]
                    performanceCount_17:4.d = performanceCount_11[0]
                    bool cond:21_1 = *(rdi + 0xe6) == 0
                    performanceCount_26 = data_143dbb1fc
                    performanceCount_28 = data_143dbb200
                    performanceCount_17:8.d = performanceCount_7.d
                    performanceCount_7 = data_143dbb1f8
                    var_2c8[0] = performanceCount_7.d
                    performanceCount_45.d = performanceCount_7.d
                    i_4.d = performanceCount_26[0]
                    performanceCount_45:4.d = performanceCount_26[0]
                    int32_t performanceCount_67 = performanceCount_28.d
                    performanceCount_45:8.d = performanceCount_28.d
                    int32_t var_32c_1 = 0
                    int32_t var_31c_1 = 0x3f800000
                    
                    if (cond:21_1)
                        performanceCount_8 = *(rdi + 0x110)
                        performanceCount_33[0] = performanceCount_33[0] f+ performanceCount_28.d
                        performanceCount_59 = *(rdi + 0x100)
                        performanceCount_4[0] = performanceCount_4[0] f+ performanceCount_7.d
                        performanceCount_61[0] = performanceCount_61[0] + performanceCount_26[0]
                        performanceCount_60 = *(rdi + 0x120)
                        performanceCount_30 = *(rdi + 0x130)
                        int32_t var_34c_3 = 0
                        performanceCount_28.d = var_228_1.d
                        int32_t var_33c_3 = 0
                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xe1)
                        performanceCount_28.d = var_230_1.d
                        int32_t var_32c_3 = 0
                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc6)
                        performanceCount_28.d = var_238_1.d
                        int32_t var_31c_3 = 0x3f800000
                        performanceCount_28 =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc9)
                        performanceCount_44 = performanceCount_28
                        float temp0_187[0x4] =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0)
                        performanceCount_7 =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0x55)
                        float temp0_189[0x4] =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xaa)
                        performanceCount_28 = _mm_mul_ps(
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xff), 
                            performanceCount_30)
                        performanceCount_7 = _mm_mul_ps(performanceCount_7, performanceCount_8)
                        float temp0_193[0x4] = _mm_mul_ps(temp0_189, performanceCount_60)
                        performanceCount_11 = _mm_add_ps(
                            _mm_add_ps(
                                _mm_add_ps(_mm_mul_ps(temp0_187, performanceCount_59), 
                                    performanceCount_7), 
                                temp0_193), 
                            performanceCount_28)
                        performanceCount_28.d = var_398.d.d
                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xe1)
                        performanceCount_28.d = var_240_1.d
                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc6)
                        performanceCount_28.d = var_258_1.d
                        performanceCount_28 =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc9)
                        performanceCount_5 = performanceCount_28
                        float temp0_201[0x4] =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0)
                        performanceCount_7 =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0x55)
                        float temp0_203[0x4] =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xaa)
                        performanceCount_28 = _mm_mul_ps(
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xff), 
                            performanceCount_30)
                        performanceCount_7 = _mm_mul_ps(performanceCount_7, performanceCount_8)
                        float temp0_207[0x4] = _mm_mul_ps(temp0_201, performanceCount_59)
                        float temp0_208[0x4] = _mm_mul_ps(temp0_203, performanceCount_60)
                        performanceCount_12 = _mm_add_ps(
                            _mm_add_ps(_mm_add_ps(temp0_207, performanceCount_7), temp0_208), 
                            performanceCount_28)
                        performanceCount_28.d = var_308_1.d
                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xe1)
                        performanceCount_28.d = var_370_1.d
                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc6)
                        performanceCount_28.d = var_380_3.d
                        performanceCount_28 =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc9)
                        performanceCount_17 = performanceCount_28
                        float temp0_215[0x4] =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0)
                        performanceCount_7 =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0x55)
                        float temp0_217[0x4] = _mm_mul_ps(temp0_215, performanceCount_59)
                        performanceCount_7 = _mm_mul_ps(performanceCount_7, performanceCount_8)
                        float temp0_219[0x4] =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xaa)
                        float temp0_220[0x4] = _mm_add_ps(temp0_217, performanceCount_7)
                        performanceCount_28 = _mm_mul_ps(
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xff), 
                            performanceCount_30)
                        float performanceCount_13[0x4] = _mm_add_ps(
                            _mm_add_ps(temp0_220, _mm_mul_ps(temp0_219, performanceCount_60)), 
                            performanceCount_28)
                        performanceCount_28.d = performanceCount_4[0]
                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xe1)
                        performanceCount_28.d = performanceCount_61[0]
                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc6)
                        performanceCount_28.d = performanceCount_33[0]
                        var_2d8.o = performanceCount_13
                        performanceCount_4 = performanceCount_13
                    label_141a02922:
                        performanceCount_28 =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc9)
                        performanceCount_45 = performanceCount_28
                        performanceCount_7 =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0x55)
                        float temp0_230[0x4] = _mm_mul_ps(
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0), 
                            performanceCount_59)
                        float temp0_231[0x4] =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xaa)
                        performanceCount_7 = _mm_mul_ps(performanceCount_7, performanceCount_8)
                        float temp0_233[0x4] = _mm_mul_ps(temp0_231, performanceCount_60)
                        performanceCount_28 =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xff)
                        float temp0_235[0x4] = _mm_add_ps(temp0_230, performanceCount_7)
                        performanceCount_28 = _mm_mul_ps(performanceCount_28, performanceCount_30)
                        performanceCount_32 =
                            _mm_add_ps(_mm_add_ps(temp0_235, temp0_233), performanceCount_28)
                    else
                        performanceCount_7 = performanceCount_18
                        
                        if (not(performanceCount_12[0] < performanceCount_69[0]))
                            performanceCount_7 ^= data_142d3f780
                        
                        performanceCount_26 = performanceCount_16
                        performanceCount_12 = *(rdi + 0x74)
                        performanceCount_26[0] = performanceCount_26[0] f+ performanceCount_7.d
                        
                        if (not(performanceCount_26[0] < performanceCount_12[0]))
                            performanceCount_12[0] = performanceCount_12[0] f+ *(rdi + 0x80)
                            performanceCount_12 =
                                _mm_min_ss(performanceCount_12[0], performanceCount_26[0])
                        
                        performanceCount_7 = zx.o(*(rdi + 0x60))
                        performanceCount_12[0] = performanceCount_12[0] f/ *(rdi + 8)
                        int32_t rbx_4 = *(rdi + 0xc0) - 1
                        performanceCount_34[0] = performanceCount_34[0] f/ *(rdi + 0xc)
                        performanceCount_7 = _mm_cvtepi32_ps(performanceCount_7)
                        performanceCount_12[0] = performanceCount_12[0] f- performanceCount_7.d
                        performanceCount_7 = _mm_cvtepi32_ps(zx.o(*(rdi + 0x64)))
                        performanceCount_34[0] = performanceCount_34[0] f- performanceCount_7.d
                        performanceCount_12[0] = performanceCount_12[0] + performanceCount_12[0]
                        performanceCount_28.d = performanceCount_34.d f+ performanceCount_34[0]
                        performanceCount_7.d = performanceCount_12.d f- performanceCount_69[0]
                        int32_t r9_4 = int.d(performanceCount_7.d)
                        performanceCount_7.d = performanceCount_28.d f- performanceCount_69[0]
                        int32_t r8_8 = int.d(performanceCount_7.d)
                        performanceCount_7.d = -0.5f - performanceCount_12[0]
                        int32_t r8_9 = r8_8 s>> 1
                        int32_t rcx_17 = int.d(performanceCount_7.d) s>> 1
                        performanceCount_7.d = -0.5f f- performanceCount_28.d
                        int32_t rcx_18 = neg.d(rcx_17)
                        int32_t rdx_17 = neg.d(int.d(performanceCount_7.d) s>> 1)
                        int32_t r9_5 = r9_4 s>> 1
                        int32_t r14_2
                        
                        if (r9_5 s>= 0)
                            r14_2 = rbx_4
                            
                            if (r9_5 s< rbx_4)
                                r14_2 = r9_5
                        else
                            r14_2 = 0
                        
                        int32_t r15_2
                        
                        if (r8_9 s>= 0)
                            r15_2 = rbx_4
                            
                            if (r8_9 s< rbx_4)
                                r15_2 = r8_9
                        else
                            r15_2 = 0
                        
                        int32_t rsi_2
                        
                        if (rcx_18 s>= 0)
                            rsi_2 = rbx_4
                            
                            if (rcx_18 s< rbx_4)
                                rsi_2 = rcx_18
                        else
                            rsi_2 = 0
                        
                        if (rdx_17 s< 0)
                            rbx_4 = 0
                        else if (rdx_17 s< rbx_4)
                            rbx_4 = rdx_17
                        
                        performanceCount_7 = performanceCount_12
                        truncf(performanceCount_7.d)
                        performanceCount_12[0] = performanceCount_12[0] f- performanceCount_7.d
                        performanceCount_7 = performanceCount_34
                        truncf(performanceCount_7.d)
                        int32_t r10_2 = *(rdi + 0xc0)
                        performanceCount_34[0] = performanceCount_34[0] f- performanceCount_7.d
                        performanceCount_26 = zx.o(0)
                        performanceCount_7.d = float.s(*(rdi + 0x68))
                        int64_t r9_6 = **(rdi + 0xb0)
                        performanceCount_7.d = performanceCount_7.d f* *(rdi + 8)
                        float zmm5_1 = performanceCount_34[0]
                        performanceCount_46 = performanceCount_34[0]
                        performanceCount_30 = zx.o(0)
                        int32_t rdx_19 = r10_2 * r15_2
                        performanceCount_12[0] = performanceCount_12[0] f- performanceCount_7.d
                        int32_t r8_11 = r10_2 * rbx_4
                        bool cond:28_1 = performanceCount_34[0] < performanceCount_69[0]
                        performanceCount_7.d = float.s(*(rdi + 0x6c))
                        performanceCount_26[0] =
                            float.s(zx.d(*(r9_6 + (sx.q(r14_2 + rdx_19) << 1))))
                        performanceCount_7.d = performanceCount_7.d f* *(rdi + 0xc)
                        uint32_t rax_34 = zx.d(*(r9_6 + (sx.q(r14_2 + r8_11) << 1)))
                        performanceCount_26[0] = performanceCount_26[0] - 32768f
                        performanceCount_28.d = float.s(rax_34)
                        performanceCount_26[0] = performanceCount_26[0] * 0.0078125f
                        performanceCount_28.d = performanceCount_28.d f- 32768f
                        int16_t var_2dc
                        var_2dc.d = zmm5_1 f- performanceCount_7.d
                        performanceCount_7.d = float.s(zx.d(*(r9_6 + (sx.q(rsi_2 + rdx_19) << 1))))
                        performanceCount_28.d = performanceCount_28.d f* 0.0078125f
                        performanceCount_7.d = performanceCount_7.d f- 32768f
                        performanceCount_30[0] = float.s(zx.d(*(r9_6 + (sx.q(rsi_2 + r8_11) << 1))))
                        performanceCount_7.d = performanceCount_7.d f* 0.0078125f
                        performanceCount_30[0] = performanceCount_30[0] - 32768f
                        performanceCount_7.d = performanceCount_7.d f- performanceCount_26[0]
                        performanceCount_30[0] = performanceCount_30[0] * 0.0078125f
                        performanceCount_7.d = performanceCount_7.d f* performanceCount_12[0]
                        performanceCount_30[0] = performanceCount_30[0] f- performanceCount_28.d
                        performanceCount_7.d = performanceCount_7.d f+ performanceCount_26[0]
                        performanceCount_30[0] = performanceCount_30[0] * performanceCount_12[0]
                        performanceCount_30[0] = performanceCount_30[0] f+ performanceCount_28.d
                        performanceCount_30[0] = performanceCount_30[0] f- performanceCount_7.d
                        performanceCount_30[0] = performanceCount_30[0] * performanceCount_46
                        performanceCount_30[0] = performanceCount_30[0] f+ performanceCount_7.d
                        performanceCount_7 = performanceCount_15
                        performanceCount_30[0] = performanceCount_30[0] f* *(rdi + 0x10)
                        
                        if (not(cond:28_1))
                            performanceCount_7 ^= data_142d3f780
                        
                        performanceCount_11 = *(rdi + 0x78)
                        performanceCount_34[0] = performanceCount_34[0] f+ performanceCount_7.d
                        
                        if (not(performanceCount_34[0] < performanceCount_11[0]))
                            performanceCount_11[0] = performanceCount_11[0] f+ *(rdi + 0x84)
                            performanceCount_11 =
                                _mm_min_ss(performanceCount_11[0], performanceCount_34[0])
                        
                        performanceCount_34 = performanceCount_16
                        int32_t rbx_5 = r10_2 - 1
                        performanceCount_7 = zx.o(*(rdi + 0x60))
                        performanceCount_11[0] = performanceCount_11[0] f/ *(rdi + 0xc)
                        performanceCount_7 = _mm_cvtepi32_ps(performanceCount_7)
                        performanceCount_34[0] = performanceCount_34[0] f/ *(rdi + 8)
                        performanceCount_34[0] = performanceCount_34[0] f- performanceCount_7.d
                        performanceCount_7 = _mm_cvtepi32_ps(zx.o(*(rdi + 0x64)))
                        performanceCount_11[0] = performanceCount_11[0] f- performanceCount_7.d
                        performanceCount_34[0] = performanceCount_34[0] + performanceCount_34[0]
                        performanceCount_16 = performanceCount_11[0]
                        performanceCount_28.d = performanceCount_11.d f+ performanceCount_11[0]
                        performanceCount_7.d = performanceCount_34.d f- performanceCount_69[0]
                        int32_t r8_12 = int.d(performanceCount_7.d)
                        performanceCount_7.d = performanceCount_28.d f- performanceCount_69[0]
                        int32_t rdx_20 = int.d(performanceCount_7.d)
                        performanceCount_7.d = -0.5f - performanceCount_34[0]
                        int32_t rdx_21 = rdx_20 s>> 1
                        int32_t rax_40 = int.d(performanceCount_7.d) s>> 1
                        performanceCount_7.d = -0.5f f- performanceCount_28.d
                        int32_t rax_41 = neg.d(rax_40)
                        int32_t rcx_25 = neg.d(int.d(performanceCount_7.d) s>> 1)
                        int32_t r8_13 = r8_12 s>> 1
                        int32_t r15_3
                        
                        if (r8_13 s>= 0)
                            r15_3 = rbx_5
                            
                            if (r8_13 s< rbx_5)
                                r15_3 = r8_13
                        else
                            r15_3 = 0
                        
                        int32_t rsi_3
                        
                        if (rdx_21 s>= 0)
                            rsi_3 = rbx_5
                            
                            if (rdx_21 s< rbx_5)
                                rsi_3 = rdx_21
                        else
                            rsi_3 = 0
                        
                        int32_t r14_3
                        
                        if (rax_41 s>= 0)
                            r14_3 = rbx_5
                            
                            if (rax_41 s< rbx_5)
                                r14_3 = rax_41
                        else
                            r14_3 = 0
                        
                        if (rcx_25 s< 0)
                            rbx_5 = 0
                        else if (rcx_25 s< rbx_5)
                            rbx_5 = rcx_25
                        
                        performanceCount_7 = performanceCount_34
                        truncf(performanceCount_7.d)
                        performanceCount_34[0] = performanceCount_34[0] f- performanceCount_7.d
                        performanceCount_7 = performanceCount_16
                        truncf(performanceCount_7.d)
                        int32_t rdx_22 = *(rdi + 0xc0)
                        performanceCount_59 = zx.o(0)
                        int64_t* rax_42 = *(rdi + 0xb0)
                        performanceCount_26 = zx.o(0)
                        performanceCount_8 = performanceCount_16
                        performanceCount_26[0] = float.s(*(rdi + 0x6c))
                        int64_t r8_14 = *rax_42
                        performanceCount_8[0] = performanceCount_8[0] f- performanceCount_7.d
                        int32_t rsi_4 = rsi_3 * rdx_22
                        performanceCount_26[0] = performanceCount_26[0] f* *(rdi + 0xc)
                        performanceCount_7.d = float.s(*(rdi + 0x68))
                        int32_t rbx_6 = rbx_5 * rdx_22
                        performanceCount_11[0] = performanceCount_11[0] - performanceCount_26[0]
                        bool cond:32_1 = performanceCount_4[0] != performanceCount_12[0]
                        performanceCount_7.d = performanceCount_7.d f* *(rdi + 8)
                        performanceCount_28.d = float.s(zx.d(*(r8_14 + (sx.q(r15_3 + rsi_4) << 1))))
                        performanceCount_34[0] = performanceCount_34[0] f- performanceCount_7.d
                        performanceCount_28.d = performanceCount_28.d f- 32768f
                        performanceCount_59[0] =
                            float.s(zx.d(*(r8_14 + (sx.q(r15_3 + rbx_6) << 1))))
                        performanceCount_28.d = performanceCount_28.d f* 0.0078125f
                        uint32_t rax_48 = zx.d(*(r8_14 + (sx.q(r14_3 + rsi_4) << 1)))
                        performanceCount_59[0] = performanceCount_59[0] - 32768f
                        performanceCount_7.d = float.s(rax_48)
                        performanceCount_59[0] = performanceCount_59[0] * 0.0078125f
                        performanceCount_7.d = performanceCount_7.d f- 32768f
                        performanceCount_7.d = performanceCount_7.d f* 0.0078125f
                        performanceCount_7.d = performanceCount_7.d f- performanceCount_28.d
                        performanceCount_7.d = performanceCount_7.d f* performanceCount_34[0]
                        performanceCount_7.d = performanceCount_7.d f+ performanceCount_28.d
                        performanceCount_28.d = float.s(zx.d(*(r8_14 + (sx.q(r14_3 + rbx_6) << 1))))
                        performanceCount_28.d = performanceCount_28.d f- 32768f
                        performanceCount_28.d = performanceCount_28.d f* 0.0078125f
                        performanceCount_28.d = performanceCount_28.d f- performanceCount_59[0]
                        performanceCount_28.d = performanceCount_28.d f* performanceCount_34[0]
                        performanceCount_28.d = performanceCount_28.d f+ performanceCount_59[0]
                        performanceCount_28.d = performanceCount_28.d f- performanceCount_7.d
                        performanceCount_28.d = performanceCount_28.d f* performanceCount_8[0]
                        performanceCount_28.d = performanceCount_28.d f+ performanceCount_7.d
                        performanceCount_7 = var_2dc.d
                        performanceCount_28.d = performanceCount_28.d f* *(rdi + 0x10)
                        uint32_t rax_50
                        
                        if (cond:32_1 || performanceCount_61[0] f!= performanceCount_7.d
                                || not(performanceCount_33[0] == performanceCount_30[0]))
                            if (performanceCount_4[0] != performanceCount_34[0]
                                    || performanceCount_61[0] != performanceCount_11[0]
                                    || performanceCount_33[0] f!= performanceCount_28.d)
                                rax_50.b = 1
                            else
                                rax_50.b = 0
                        
                        if ((not(cond:32_1) && not(performanceCount_61[0] f!= performanceCount_7.d)
                                && performanceCount_33[0] == performanceCount_30[0]) || rax_50.b == 0)
                            performanceCount_8 = *(rdi + 0x110)
                            performanceCount_59 = *(rdi + 0x100)
                            performanceCount_60 = *(rdi + 0x120)
                            performanceCount_30 = *(rdi + 0x130)
                            performanceCount_32 = var_2c8[0]
                            performanceCount_34 = i_4.d
                            performanceCount_32[0] = performanceCount_32[0] + performanceCount_4[0]
                            int32_t var_34c_2 = 0
                            performanceCount_34[0] = performanceCount_34[0] + performanceCount_61[0]
                            performanceCount_28.d = var_228_1.d
                            performanceCount_61 = performanceCount_67
                            performanceCount_61[0] = performanceCount_61[0] + performanceCount_33[0]
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xe1)
                            performanceCount_28.d = var_230_1.d
                            int32_t var_33c_2 = 0
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc6)
                            performanceCount_28.d = var_238_1.d
                            int32_t var_32c_2 = 0
                            performanceCount_28 =
                                _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc9)
                            performanceCount_44 = performanceCount_28
                            float temp0_143[0x4] =
                                _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0)
                            performanceCount_7 =
                                _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0x55)
                            float temp0_145[0x4] =
                                _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xaa)
                            performanceCount_28 = _mm_mul_ps(
                                _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xff), 
                                performanceCount_30)
                            int32_t var_31c_2 = 0x3f800000
                            performanceCount_7 = _mm_mul_ps(performanceCount_7, performanceCount_8)
                            float temp0_149[0x4] = _mm_mul_ps(temp0_145, performanceCount_60)
                            performanceCount_11 = _mm_add_ps(
                                _mm_add_ps(
                                    _mm_add_ps(_mm_mul_ps(temp0_143, performanceCount_59), 
                                        performanceCount_7), 
                                    temp0_149), 
                                performanceCount_28)
                            performanceCount_28.d = var_398.d.d
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xe1)
                            performanceCount_28.d = var_240_1.d
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc6)
                            performanceCount_28.d = var_258_1.d
                            performanceCount_28 =
                                _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc9)
                            performanceCount_5 = performanceCount_28
                            float temp0_157[0x4] =
                                _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0)
                            performanceCount_7 =
                                _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0x55)
                            float temp0_159[0x4] =
                                _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xaa)
                            performanceCount_28 = _mm_mul_ps(
                                _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xff), 
                                performanceCount_30)
                            performanceCount_7 = _mm_mul_ps(performanceCount_7, performanceCount_8)
                            float temp0_163[0x4] = _mm_mul_ps(temp0_157, performanceCount_59)
                            float temp0_164[0x4] = _mm_mul_ps(temp0_159, performanceCount_60)
                            performanceCount_12 = _mm_add_ps(
                                _mm_add_ps(_mm_add_ps(temp0_163, performanceCount_7), temp0_164), 
                                performanceCount_28)
                            performanceCount_28.d = var_308_1.d
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xe1)
                            performanceCount_28.d = var_370_1.d
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc6)
                            performanceCount_28.d = var_380_3.d
                            performanceCount_28 =
                                _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc9)
                            performanceCount_17 = performanceCount_28
                            float temp0_171[0x4] =
                                _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0)
                            performanceCount_7 =
                                _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0x55)
                            float temp0_175[0x4] = _mm_add_ps(
                                _mm_mul_ps(temp0_171, performanceCount_59), 
                                _mm_mul_ps(performanceCount_7, performanceCount_8))
                            float temp0_176[0x4] =
                                _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xaa)
                            performanceCount_28 = _mm_mul_ps(
                                _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xff), 
                                performanceCount_30)
                            performanceCount_4 = _mm_add_ps(
                                _mm_add_ps(temp0_175, _mm_mul_ps(temp0_176, performanceCount_60)), 
                                performanceCount_28)
                            performanceCount_28.d = performanceCount_32[0]
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xe1)
                            performanceCount_28.d = performanceCount_34[0]
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc6)
                            performanceCount_28.d = performanceCount_61[0]
                            goto label_141a02922
                        
                        performanceCount_60 = 0x322bcc77
                        performanceCount_33[0] = performanceCount_33[0] f- performanceCount_28.d
                        performanceCount_61[0] = performanceCount_61[0] - performanceCount_11[0]
                        performanceCount_28.d = performanceCount_61.d f- performanceCount_7.d
                        performanceCount_11 = performanceCount_4
                        performanceCount_11[0] = performanceCount_11[0] - performanceCount_12[0]
                        performanceCount_4[0] = performanceCount_4[0] - performanceCount_34[0]
                        performanceCount_34 = performanceCount_33
                        performanceCount_34[0] = performanceCount_34[0] - performanceCount_30[0]
                        performanceCount_32 = performanceCount_28
                        performanceCount_32[0] = performanceCount_32[0] * performanceCount_33[0]
                        performanceCount_28.d = performanceCount_28.d f* performanceCount_4[0]
                        performanceCount_7.d = performanceCount_34.d f* performanceCount_61[0]
                        performanceCount_34[0] = performanceCount_34[0] * performanceCount_4[0]
                        performanceCount_32[0] = performanceCount_32[0] f- performanceCount_7.d
                        performanceCount_11[0] = performanceCount_11[0] * performanceCount_61[0]
                        performanceCount_7.d = performanceCount_11.d f* performanceCount_33[0]
                        performanceCount_11[0] = performanceCount_11[0] f- performanceCount_28.d
                        performanceCount_34[0] = performanceCount_34[0] f- performanceCount_7.d
                        performanceCount_7.d = performanceCount_32.d f* performanceCount_32[0]
                        performanceCount_11[0] = performanceCount_11[0] * performanceCount_11[0]
                        performanceCount_34[0] = performanceCount_34[0] * performanceCount_34[0]
                        performanceCount_34[0] = performanceCount_34[0] f+ performanceCount_7.d
                        performanceCount_34[0] = performanceCount_34[0] + performanceCount_11[0]
                        
                        if (performanceCount_34[0] == performanceCount_31[0])
                            goto label_141a02050
                        
                        if (performanceCount_34[0] >= 9.99999994e-09f)
                            performanceCount_8 = zx.o(0)
                            performanceCount_8[0] = performanceCount_69.d
                            performanceCount_59 = zx.o(0)
                            performanceCount_59[0] = performanceCount_34.d
                            performanceCount_60 =
                                _mm_rsqrt_ss(performanceCount_59.d, performanceCount_59[0])
                            performanceCount_59[0] = performanceCount_59[0] * performanceCount_8[0]
                            performanceCount_7.d = performanceCount_60.d f* performanceCount_60.d
                            performanceCount_59[0] = performanceCount_59[0] f* performanceCount_7.d
                            performanceCount_28.d = performanceCount_8.d f- performanceCount_59[0]
                            performanceCount_7.d = performanceCount_60.d f* performanceCount_28.d
                            performanceCount_60.d = performanceCount_60.d f+ performanceCount_7.d
                            performanceCount_26 = performanceCount_60
                            performanceCount_26[0] = performanceCount_26[0] f* performanceCount_60.d
                            performanceCount_59[0] = performanceCount_59[0] * performanceCount_26[0]
                            performanceCount_8[0] = performanceCount_8[0] - performanceCount_59[0]
                            performanceCount_7.d = performanceCount_60.d f* performanceCount_8[0]
                            performanceCount_60.d = performanceCount_60.d f+ performanceCount_7.d
                            int32_t var_3a8_1 = performanceCount_60.d
                            performanceCount_32[0] = performanceCount_32[0] f* performanceCount_60.d
                            performanceCount_34[0] = performanceCount_34[0] f* performanceCount_60.d
                            performanceCount_11[0] = performanceCount_11[0] f* performanceCount_60.d
                            performanceCount_60 = 0x322bcc77
                        label_141a02050:
                            performanceCount_8 = data_143dbb1f8
                            performanceCount_59 = data_143dbb1fc
                            performanceCount_28 = data_143dbb200
                        else
                            performanceCount_8 = data_143dbb1f8
                            performanceCount_59 = data_143dbb1fc
                            performanceCount_32 = performanceCount_8
                            performanceCount_28 = data_143dbb200
                            performanceCount_34 = performanceCount_59
                            performanceCount_11 = performanceCount_28
                        
                        performanceCount_30 = zx.o(0)
                        performanceCount_11[0] - performanceCount_30[0]
                        
                        if (not(performanceCount_11[0] <= performanceCount_30[0]))
                            performanceCount_7 = performanceCount_31
                        else if (performanceCount_11[0] >= performanceCount_30[0])
                            performanceCount_7 = zx.o(0)
                        else
                            performanceCount_7 = 0xbf800000
                        
                        performanceCount_32[0] = performanceCount_32[0] f* performanceCount_7.d
                        performanceCount_11[0] = performanceCount_11[0] f* performanceCount_7.d
                        performanceCount_34[0] = performanceCount_34[0] f* performanceCount_7.d
                        performanceCount_32[0] = performanceCount_32[0] * performanceCount_32[0]
                        performanceCount_4 = performanceCount_11 ^ data_142d3f780
                        var_398.d = performanceCount_4[0]
                        performanceCount_7.d = performanceCount_4.d f* performanceCount_4[0]
                        performanceCount_32[0] = performanceCount_32[0] f+ performanceCount_7.d
                        
                        if (not(performanceCount_32[0] != performanceCount_31[0]))
                            performanceCount_31 = performanceCount_32
                            performanceCount_69 = zx.o(0)
                        else if (performanceCount_32[0] f>= performanceCount_60.d)
                            performanceCount_59 = zx.o(0)
                            performanceCount_8 = zx.o(0)
                            performanceCount_31 = performanceCount_32
                            performanceCount_8[0] = performanceCount_69.d
                            performanceCount_59[0] = performanceCount_32.d
                            performanceCount_60 =
                                _mm_rsqrt_ss(performanceCount_59.d, performanceCount_59[0])
                            performanceCount_59[0] = performanceCount_59[0] * performanceCount_8[0]
                            performanceCount_7.d = performanceCount_60.d f* performanceCount_60.d
                            performanceCount_59[0] = performanceCount_59[0] f* performanceCount_7.d
                            performanceCount_28.d = performanceCount_8.d f- performanceCount_59[0]
                            performanceCount_7.d = performanceCount_60.d f* performanceCount_28.d
                            performanceCount_60.d = performanceCount_60.d f+ performanceCount_7.d
                            performanceCount_26 = performanceCount_60
                            performanceCount_26[0] = performanceCount_26[0] f* performanceCount_60.d
                            performanceCount_59[0] = performanceCount_59[0] * performanceCount_26[0]
                            performanceCount_8[0] = performanceCount_8[0] - performanceCount_59[0]
                            performanceCount_7.d = performanceCount_60.d f* performanceCount_8[0]
                            performanceCount_60.d = performanceCount_60.d f+ performanceCount_7.d
                            int32_t var_3a8_2 = performanceCount_60.d
                            performanceCount_7.d = performanceCount_60.d f* performanceCount_4[0]
                            performanceCount_31[0] = performanceCount_31[0] f* performanceCount_60.d
                            var_398.d = performanceCount_7.d
                            performanceCount_4 = performanceCount_7
                            performanceCount_69 = zx.o(0)
                        else
                            var_398.d = performanceCount_8[0]
                            performanceCount_4 = performanceCount_8
                            performanceCount_69 = performanceCount_59
                            performanceCount_31 = performanceCount_28
                        
                        performanceCount_34[0] = performanceCount_34[0] * performanceCount_31[0]
                        int32_t var_1dc_1 = 0
                        performanceCount_7.d = performanceCount_11.d f* performanceCount_69[0]
                        int32_t var_1ec_1 = 0
                        performanceCount_28.d = performanceCount_11.d f* performanceCount_4[0]
                        int32_t var_1cc_1 = 0
                        int32_t var_1f8
                        performanceCount_30 = var_1f8.o
                        performanceCount_34[0] = performanceCount_34[0] f- performanceCount_7.d
                        performanceCount_32[0] = performanceCount_32[0] * performanceCount_69[0]
                        performanceCount_60.d = performanceCount_32[0]
                        int32_t var_1bc_1 = 0x3f800000
                        float temp0_14[0x4] =
                            _mm_shuffle_ps(performanceCount_44, performanceCount_44, 0x55)
                        performanceCount_7.d = performanceCount_32.d f* performanceCount_31[0]
                        _mm_shuffle_ps(performanceCount_60, performanceCount_60, 0xe1)
                        performanceCount_60.d = performanceCount_34[0]
                        performanceCount_28.d = performanceCount_28.d f- performanceCount_7.d
                        _mm_shuffle_ps(performanceCount_60, performanceCount_60, 0xc6)
                        performanceCount_60.d = performanceCount_11[0]
                        performanceCount_7.d = performanceCount_34.d f* performanceCount_4[0]
                        int32_t var_1e8
                        performanceCount_4 = var_1e8.o
                        performanceCount_4[0] = performanceCount_34[0]
                        performanceCount_60 =
                            _mm_shuffle_ps(performanceCount_60, performanceCount_60, 0xc9)
                        int32_t var_1c8
                        performanceCount_59 = var_1c8.o
                        performanceCount_32[0] = performanceCount_32[0] f- performanceCount_7.d
                        float temp0_18[0x4] =
                            _mm_shuffle_ps(performanceCount_4, performanceCount_4, 0xe1)
                        performanceCount_7 =
                            _mm_shuffle_ps(performanceCount_44, performanceCount_44, 0)
                        temp0_18[0] = performanceCount_28.d
                        float temp0_20[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc6)
                        temp0_20[0] = performanceCount_32[0]
                        int32_t var_1d8
                        var_1d8.o = performanceCount_60
                        performanceCount_30[0] = var_398.d[0]
                        float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xc9)
                        float temp0_22[0x4] =
                            _mm_shuffle_ps(performanceCount_30, performanceCount_30, 0xe1)
                        float temp0_23[0x4] =
                            _mm_shuffle_ps(performanceCount_44, performanceCount_44, 0xaa)
                        temp0_22[0] = performanceCount_69[0]
                        float temp0_24[0x4] = _mm_mul_ps(temp0_14, temp0_21)
                        float temp0_25[0x4] = _mm_mul_ps(temp0_23, performanceCount_60)
                        float temp0_26[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xc6)
                        temp0_26[0] = performanceCount_31[0]
                        float temp0_27[0x4] =
                            _mm_shuffle_ps(performanceCount_44, performanceCount_44, 0xff)
                        float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xc9)
                        performanceCount_7 = _mm_mul_ps(performanceCount_7, temp0_28)
                        float temp0_31[0x4] = _mm_mul_ps(
                            _mm_shuffle_ps(performanceCount_5, performanceCount_5, 0x55), temp0_21)
                        float temp0_32[0x4] = _mm_add_ps(temp0_24, performanceCount_7)
                        var_1e8.o = temp0_21
                        performanceCount_59[0] = data_143dbb1f8.d
                        var_1f8.o = temp0_28
                        performanceCount_7 = data_143dbb1fc
                        float temp0_33[0x4] =
                            _mm_shuffle_ps(performanceCount_59, performanceCount_59, 0xe1)
                        temp0_33[0] = performanceCount_7.d
                        float temp0_34[0x4] = _mm_add_ps(temp0_32, temp0_25)
                        performanceCount_7 = data_143dbb200
                        float temp0_35[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xc6)
                        temp0_35[0] = performanceCount_7.d
                        float temp0_36[0x4] =
                            _mm_shuffle_ps(performanceCount_5, performanceCount_5, 0xaa)
                        float temp0_37[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xc9)
                        float temp0_38[0x4] = _mm_mul_ps(temp0_27, temp0_37)
                        performanceCount_7 = _mm_mul_ps(
                            _mm_shuffle_ps(performanceCount_5, performanceCount_5, 0), temp0_28)
                        float temp0_41[0x4] = _mm_add_ps(temp0_34, temp0_38)
                        var_1c8.o = temp0_37
                        float temp0_42[0x4] = _mm_add_ps(temp0_31, performanceCount_7)
                        var_318.o = temp0_41
                        performanceCount_34 = *(rdi + 0x120)
                        float temp0_43[0x4] = _mm_mul_ps(temp0_36, performanceCount_60)
                        performanceCount_28 = _mm_mul_ps(
                            _mm_shuffle_ps(performanceCount_5, performanceCount_5, 0xff), temp0_37)
                        float temp0_47[0x4] =
                            _mm_add_ps(_mm_add_ps(temp0_42, temp0_43), performanceCount_28)
                        performanceCount_7 =
                            _mm_shuffle_ps(performanceCount_17, performanceCount_17, 0)
                        float temp0_49[0x4] =
                            _mm_shuffle_ps(performanceCount_17, performanceCount_17, 0x55)
                        performanceCount_7 = _mm_mul_ps(performanceCount_7, temp0_28)
                        float temp0_51[0x4] =
                            _mm_shuffle_ps(performanceCount_17, performanceCount_17, 0xaa)
                        float temp0_52[0x4] = _mm_mul_ps(temp0_49, temp0_21)
                        float temp0_53[0x4] = _mm_mul_ps(temp0_51, performanceCount_60)
                        performanceCount_28 =
                            _mm_shuffle_ps(performanceCount_17, performanceCount_17, 0xff)
                        float temp0_55[0x4] = _mm_add_ps(temp0_52, performanceCount_7)
                        performanceCount_28 = _mm_mul_ps(performanceCount_28, temp0_37)
                        var_2d8.o = temp0_47
                        float temp0_57[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0xaa)
                        float temp0_59[0x4] =
                            _mm_add_ps(_mm_add_ps(temp0_55, temp0_53), performanceCount_28)
                        performanceCount_7 = _mm_mul_ps(
                            _mm_shuffle_ps(performanceCount_45, performanceCount_45, 0), temp0_28)
                        float temp0_63[0x4] = _mm_mul_ps(
                            _mm_shuffle_ps(performanceCount_45, performanceCount_45, 0x55), 
                            temp0_21)
                        float temp0_64[0x4] =
                            _mm_shuffle_ps(performanceCount_45, performanceCount_45, 0xaa)
                        int64_t var_158
                        var_158.o = temp0_59
                        float temp0_65[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0x55)
                        float temp0_66[0x4] = _mm_add_ps(temp0_63, performanceCount_7)
                        float temp0_67[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xaa)
                        float temp0_68[0x4] = _mm_mul_ps(temp0_64, performanceCount_60)
                        performanceCount_7 = _mm_shuffle_ps(temp0_41, temp0_41, 0x55)
                        performanceCount_28 = _mm_mul_ps(
                            _mm_shuffle_ps(performanceCount_45, performanceCount_45, 0xff), 
                            temp0_37)
                        float temp0_72[0x4] = _mm_add_ps(temp0_66, temp0_68)
                        float temp0_73[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0x55)
                        performanceCount_60 = _mm_shuffle_ps(temp0_47, temp0_47, 0xff)
                        float temp0_75[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xaa)
                        float temp0_76[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xff)
                        float temp0_77[0x4] = _mm_add_ps(temp0_72, performanceCount_28)
                        performanceCount_28 = _mm_shuffle_ps(temp0_41, temp0_41, 0xff)
                        float temp0_79[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0x55)
                        temp0_77[0] = temp0_77[0] f+ var_2b0.d
                        temp0_79[0] = temp0_79[0] + performanceCount_61[0]
                        float temp0_80[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0xaa)
                        performanceCount_61 = *(rdi + 0x130)
                        temp0_80[0] = temp0_80[0] + performanceCount_33[0]
                        performanceCount_33 = *(rdi + 0x110)
                        int64_t var_208
                        var_208.o = _mm_shuffle_ps(temp0_77, temp0_77, 0xff)
                        performanceCount_32 = *(rdi + 0x100)
                        int64_t var_168
                        var_168.o = temp0_79
                        performanceCount_11 = var_318.o
                        float performanceCount_35[0x4] =
                            _mm_shuffle_ps(performanceCount_11, performanceCount_11, 0xe1)
                        performanceCount_35[0] = performanceCount_7.d
                        performanceCount_7 = performanceCount_35
                        var_318.o = performanceCount_35
                        _mm_shuffle_ps(performanceCount_7, performanceCount_7, 0xc6)
                        performanceCount_7.d = temp0_75[0]
                        _mm_shuffle_ps(performanceCount_7, performanceCount_7, 0x27)
                        performanceCount_7.d = performanceCount_28.d
                        performanceCount_7 =
                            _mm_shuffle_ps(performanceCount_7, performanceCount_7, 0x39)
                        var_318.o = performanceCount_7
                        float temp0_85[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0xe1)
                        float temp0_86[0x4] =
                            _mm_shuffle_ps(performanceCount_7, performanceCount_7, 0xaa)
                        performanceCount_28 = _mm_mul_ps(
                            _mm_shuffle_ps(performanceCount_7, performanceCount_7, 0xff), 
                            performanceCount_61)
                        float temp0_89[0x4] =
                            _mm_shuffle_ps(performanceCount_7, performanceCount_7, 0)
                        performanceCount_7 = _mm_mul_ps(
                            _mm_shuffle_ps(performanceCount_7, performanceCount_7, 0x55), 
                            performanceCount_33)
                        float temp0_92[0x4] = _mm_mul_ps(temp0_86, performanceCount_34)
                        float temp0_96[0x4] = _mm_add_ps(
                            _mm_add_ps(
                                _mm_add_ps(_mm_mul_ps(temp0_89, performanceCount_32), 
                                    performanceCount_7), 
                                temp0_92), 
                            performanceCount_28)
                        performanceCount_28 = var_2d8.o
                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xe1)
                        performanceCount_28.d = temp0_73[0]
                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc6)
                        performanceCount_28.d = temp0_57[0]
                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0x27)
                        performanceCount_28.d = performanceCount_60.d
                        var_318.o = temp0_96
                        performanceCount_28 =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0x39)
                        temp0_85[0] = var_168.o[0]
                        float temp0_101[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0xc6)
                        float temp0_102[0x4] =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0)
                        performanceCount_7 =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0x55)
                        float temp0_104[0x4] =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xaa)
                        temp0_101[0] = temp0_80[0]
                        performanceCount_7 = _mm_mul_ps(performanceCount_7, performanceCount_33)
                        performanceCount_28 = _mm_mul_ps(
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xff), 
                            performanceCount_61)
                        float temp0_108[0x4] = _mm_mul_ps(temp0_104, performanceCount_34)
                        float temp0_109[0x4] = _mm_mul_ps(temp0_102, performanceCount_32)
                        float temp0_110[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0x27)
                        float performanceCount_36[0x4] = _mm_add_ps(
                            _mm_add_ps(_mm_add_ps(temp0_109, performanceCount_7), temp0_108), 
                            performanceCount_28)
                        performanceCount_28 = var_158.o
                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xe1)
                        performanceCount_28.d = temp0_65[0]
                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xc6)
                        performanceCount_28.d = temp0_67[0]
                        _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0x27)
                        performanceCount_28.d = temp0_76[0]
                        var_278.o = performanceCount_36
                        performanceCount_28 =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0x39)
                        performanceCount_7 = _mm_mul_ps(
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0x55), 
                            performanceCount_33)
                        float temp0_119[0x4] =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0)
                        float temp0_120[0x4] =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xaa)
                        float temp0_121[0x4] = _mm_mul_ps(temp0_119, performanceCount_32)
                        float temp0_122[0x4] = _mm_mul_ps(temp0_120, performanceCount_34)
                        performanceCount_28 =
                            _mm_shuffle_ps(performanceCount_28, performanceCount_28, 0xff)
                        float temp0_124[0x4] = _mm_add_ps(temp0_121, performanceCount_7)
                        performanceCount_28 = _mm_mul_ps(performanceCount_28, performanceCount_61)
                        temp0_110[0] = var_208.o.d
                        float temp0_126[0x4] = _mm_shuffle_ps(temp0_110, temp0_110, 0x39)
                        float temp0_127[0x4] = _mm_add_ps(temp0_124, temp0_122)
                        performanceCount_7 =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_126, temp0_126, 0), performanceCount_32)
                        float temp0_130[0x4] = _mm_shuffle_ps(temp0_126, temp0_126, 0xaa)
                        performanceCount_4 = _mm_add_ps(temp0_127, performanceCount_28)
                        float temp0_132[0x4] = _mm_mul_ps(temp0_130, performanceCount_34)
                        var_2d8.o = performanceCount_7
                        performanceCount_31 = 0x3f800000
                        float temp0_136[0x4] = _mm_add_ps(
                            _mm_add_ps(var_2d8.o, 
                                _mm_mul_ps(_mm_shuffle_ps(temp0_126, temp0_126, 0x55), 
                                    performanceCount_33)), 
                            temp0_132)
                        performanceCount_11 = var_318.o
                        performanceCount_12 = performanceCount_36
                        performanceCount_32 = _mm_add_ps(temp0_136, 
                            _mm_mul_ps(_mm_shuffle_ps(temp0_126, temp0_126, 0xff), 
                                performanceCount_61))
                        performanceCount_69 = 0x3f000000
                    
                    int64_t rbx_7 = sx.q(var_2e8.d)
                    int32_t rax_51 = (rbx_7 + 1).d
                    var_2e8.d = rax_51
                    
                    if (rax_51 s> var_2e8:4.d)
                        sub_1405c4fe0(&var_2f0)
                    
                    float (* rax_52)[0x4] = var_2f0
                    performanceCount_30 = zx.o(0)
                    rax_52[rbx_7 * 4] = performanceCount_11
                    rax_52[rbx_7 * 4 + 1] = performanceCount_12
                    rax_52[rbx_7 * 4 + 2] = performanceCount_4
                    rax_52[rbx_7 * 4 + 3] = performanceCount_32
            
        label_141a0299c:
            performanceCount_33 = 0x3c000000
            r12_1 += 1
            performanceCount_8 = 0xbf000000
            performanceCount_28 = 0x3eaaaaab
            performanceCount_61 = 0x3b808081
        while (r12_1 s< r13_1)
        
        performanceCount_4 = zx.o(performanceCount)
    
    int32_t rdx_24 = var_2e8.d
    
    if (rdx_24 != 0)
        *(rdi + 0x168) += rdx_24
        var_3d8 = 1
        sub_141a00920(rdi + 0x1b8, rdx_24, 0, 3, 1)
        int32_t i_2 = 0
        
        if (var_2e8.d s> 0)
            do
                int32_t rax_54 = *(rdi + 0xf0) * 0xbb38435 + 0x3619636b
                *(rdi + 0xf0) = rax_54
                int32_t var_3a8_3 = rax_54 u>> 9 | 0x3f800000
                performanceCount_4 = sub_141a14b90(rdi, i_2, &var_2f0[sx.q(i_2) * 4])
                i_2 += 1
            while (i_2 s< var_2e8.d)
int32_t rbx_13 = var_2e8.d
int32_t var_3a8_16 = rbx_13

if (rbx_13 != 0)
    int32_t rax_128 = *(rdi + 0x15c)
    var_268 = 0
    var_3d8.q = rdi + 0x208
    int64_t var_260_1 = 0
    var_318 = nullptr
    var_310.q = 0
    var_2d8 = 0
    int64_t var_2d0_1 = 0
    performanceCount_4 = sub_142050b90(&var_2f0, &var_2d8, 0, rdi + 0x140, var_3d8, &var_268, 
        &var_318, rdi + 0x218, rax_128, 0)
    int32_t rsi_9 = 0
    int32_t var_370_3 = 0
    
    if (rbx_13 s> 0)
        int64_t i_3 = 0
        int64_t performanceCount_2 = 0
        int64_t r13_4 = 0
        i_4 = 0
        var_2c8[0].q = 0
        performanceCount = 0
        
        do
            int64_t r12_4 = sx.q(*(var_268 + (i_3 << 2)))
            int32_t var_380_5 = r12_4.d
            
            if (r12_4.d != rsi_9)
                int128_t* rbx_14 = *(rdi + 0x1d0)
                int64_t rdx_48 = *(**(rdi + 0x1c8) + 0x28)
                int64_t r14_7
                
                if (*(rdi + 0x200) == 0)
                    rdx_48()
                    int64_t* rcx_77 = *(rdi + 0x1c8)
                    (*(*rcx_77 + 0x20))(rcx_77)
                    int128_t zmm2_4 = *(rbx_14 + r13_4)
                    r14_7 = r12_4
                    int128_t zmm3 = *(rbx_14 + r13_4 + 0x10)
                    int64_t rax_149 = r12_4 * 6
                    int128_t zmm4_2 = *(rbx_14 + r13_4 + 0x20)
                    *(rbx_14 + r13_4) = *(rbx_14 + (rax_149 << 3))
                    *(rbx_14 + r13_4 + 0x10) = *(rbx_14 + (rax_149 << 3) + 0x10)
                    *(rbx_14 + r13_4 + 0x20) = *(rbx_14 + (rax_149 << 3) + 0x20)
                    *(rbx_14 + (rax_149 << 3)) = zmm2_4
                    *(rbx_14 + (rax_149 << 3) + 0x10) = zmm3
                    *(rbx_14 + (rax_149 << 3) + 0x20) = zmm4_2
                else
                    rdx_48()
                    int64_t* rcx_74 = *(rdi + 0x1c8)
                    (*(*rcx_74 + 0x20))(rcx_74)
                    int64_t rcx_75 = sx.q(rsi_9) * 3
                    int16_t rax_133 = *(rbx_14 + (rcx_75 << 3))
                    int16_t r12_5 = *(rbx_14 + (rcx_75 << 3) + 8)
                    int16_t* rcx_76 = rbx_14 + (rcx_75 << 3)
                    int16_t r13_5 = rcx_76[5]
                    int16_t rdi_1 = rcx_76[8]
                    int16_t rsi_10 = rcx_76[9]
                    int16_t r14_6 = rcx_76[0xa]
                    int16_t r15_6 = rcx_76[0xb]
                    performanceCount_16.w = rcx_76[1]
                    performanceCount_18.w = rcx_76[2]
                    int16_t rax_136 = rcx_76[3]
                    performanceCount_14.w = rcx_76[6]
                    performanceCount_15.w = rcx_76[7]
                    int64_t rax_139 = sx.q(var_380_5)
                    var_2b0 = rax_139
                    int16_t* rbx_15 = rbx_14 + rax_139 * 0x18
                    sub_1419fdcc0(rcx_76, rbx_15)
                    *rbx_15 = rax_133
                    rbx_15[1] = performanceCount_16.w
                    rbx_15[2] = performanceCount_18.w
                    rbx_15[3] = rax_136
                    rbx_15[6] = performanceCount_14.w
                    rbx_15[4] = r12_5
                    r12_4 = zx.q(var_380_5)
                    rbx_15[5] = r13_5
                    r13_4 = var_2c8[0].q
                    rbx_15[7] = performanceCount_15.w
                    rbx_15[8] = rdi_1
                    rdi = performanceCount_1[0]
                    rbx_15[9] = rsi_10
                    rsi_9 = var_370_3
                    rbx_15[0xa] = r14_6
                    r14_7 = var_2b0
                    rbx_15[0xb] = r15_6
                    i_3 = i_4
                
                int64_t* rcx_78 = *(rdi + 0x1b8)
                uint128_t* rbx_16 = *(rdi + 0x1c0)
                (*(*rcx_78 + 0x28))(rcx_78)
                int64_t* rcx_79 = *(rdi + 0x1b8)
                (*(*rcx_79 + 0x20))(rcx_79)
                int64_t performanceCount_3 = performanceCount
                int64_t rax_153 = r14_7 * 2
                int128_t zmm1 = *(rbx_16 + performanceCount_3)
                *(rbx_16 + performanceCount_3) = *(rbx_16 + (rax_153 << 3))
                *(rbx_16 + (rax_153 << 3)) = zmm1
                int64_t* rcx_80 = *(rdi + 0x1d8)
                int64_t rbx_17 = *(rdi + 0x1e0)
                (*(*rcx_80 + 0x28))(rcx_80)
                int64_t* rcx_81 = *(rdi + 0x1d8)
                (*(*rcx_81 + 0x20))(rcx_81)
                int64_t rax_156 = *(rbx_17 + (i_3 << 3))
                *(rbx_17 + (i_3 << 3)) = *(rbx_17 + (r14_7 << 3))
                *(rbx_17 + (r14_7 << 3)) = rax_156
                int64_t* rcx_83 = *(rdi + 0x1e8)
                int64_t rbx_18 = *(rdi + 0x1f0)
                (*(*rcx_83 + 0x28))(rcx_83)
                int64_t* rcx_84 = *(rdi + 0x1e8)
                (*(*rcx_84 + 0x20))(rcx_84)
                int32_t rcx_85 = *(rdi + 0x1fc)
                int32_t r8_27 = 0
                
                if (rcx_85 s> 0)
                    do
                        int64_t rcx_88 = sx.q(rcx_85 * r12_4.d + r8_27)
                        int64_t rdx_50 = sx.q(rcx_85 * rsi_9 + r8_27)
                        r8_27 += 1
                        performanceCount_7 = *(rbx_18 + (rdx_50 << 2))
                        *(rbx_18 + (rdx_50 << 2)) = *(rbx_18 + (rcx_88 << 2))
                        *(rbx_18 + (rcx_88 << 2)) = performanceCount_7.d
                        rcx_85 = *(rdi + 0x1fc)
                    while (r8_27 s< rcx_85)
                
                performanceCount_2 = performanceCount
                rbx_13 = var_3a8_16
                int64_t rdx_51 = sx.q(*(var_318 + (i_3 << 2)))
                *(var_268 + (rdx_51 << 2)) = r12_4.d
                *(var_318 + (r14_7 << 2)) = rdx_51.d
                *(var_318 + (i_3 << 2)) = rsi_9
                *(var_268 + (i_3 << 2)) = rsi_9
            
            rsi_9 += 1
            i_3 += 1
            var_370_3 = rsi_9
            r13_4 += 0x30
            i_4 = i_3
            performanceCount_2 += 0x10
            var_2c8[0].q = r13_4
            performanceCount = performanceCount_2
        while (i_3 s< sx.q(rbx_13))
    
    int64_t rcx_89 = var_2d8
    
    if (rcx_89 != 0)
        sub_140a74f90(rcx_89)
    
    void* rcx_90 = var_318
    
    if (rcx_90 != 0)
        sub_140a74f90(rcx_90)
    
    int64_t rcx_91 = var_268
    
    if (rcx_91 != 0)
        sub_140a74f90(rcx_91)

int64_t result = QueryPerformanceCounter(&performanceCount_1)
float (* rcx_93)[0x4] = var_2f0
performanceCount_7.q = float.d(performanceCount_1[0])
performanceCount_7.q = performanceCount_7.q f* data_143d796f8
performanceCount_7.q = performanceCount_7.q f- performanceCount_4[0].q
*(rdi + 0x160) = performanceCount_7.q

if (rcx_93 == 0)
    return result

return sub_140a74f90(rcx_93)
