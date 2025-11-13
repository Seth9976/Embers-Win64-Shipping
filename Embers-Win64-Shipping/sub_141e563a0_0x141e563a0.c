// 函数: sub_141e563a0
// 地址: 0x141e563a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int32_t var_270 = 0
int16_t* var_268
int64_t var_250
int64_t* rcx_7
uint64_t rdx
int32_t r14

if (arg2 == 0)
    r14 = 2
    var_250 = 0
    int32_t var_248_1 = 0
    sub_1405947f0(&var_250, 8)
    int32_t rax_3 = var_248_1 + 8
    var_248_1 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_250)
    
    rdx = sub_1405a7220(var_250, 8, "Windows", 8, 0x3f)
    rcx_7 = &var_250
else
    r14 = 1
    rdx = 0
    int32_t rcx = 0
    int32_t var_260_1 = 0
    int32_t var_25c_1 = 0
    var_268 = nullptr
    
    if (*arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_268, rbx_1.d + 1)
            rcx = var_25c_1
            rdx = zx.q(var_260_1)
        
        int32_t rax_2 = rdx.d + rbx_1.d + 1
        int32_t var_260_2 = rax_2
        
        if (rax_2 s> rcx)
            sub_140594770(&var_268)
        
        rdx = UnDecorator::getReferenceType(var_268, arg2, (rbx_1.d + 1) * 2)
    
    rcx_7 = &var_268

int16_t* rax_4 = *rcx_7
*rcx_7 = 0
int16_t* var_240 = rax_4
int32_t rax_5 = rcx_7[1].d
int32_t var_234 = *(rcx_7 + 0xc)
rcx_7[1] = 0

if ((r14.b & 2) != 0)
    int64_t rcx_8 = var_250
    r14 &= 0xfffffffd
    
    if (rcx_8 != 0)
        rdx = sub_140a74f90(rcx_8)

if ((r14.b & 1) != 0)
    int16_t* rcx_9 = var_268
    
    if (rcx_9 != 0)
        rdx = sub_140a74f90(rcx_9)

int64_t* rax_7
int512_t zmm2
uint32_t zmm6[0x4]
int128_t zmm7
rax_7, zmm2, zmm6, zmm7 = sub_140b1a910(&var_240, rdx, arg3)
int16_t* rsi_1 = nullptr
var_268 = nullptr
int32_t rbx_3 = rax_7[4].d
int64_t r14_1 = rax_7[3]

if (rbx_3 != 0)
    sub_1405a4c70(&var_268, rbx_3, 0)
    rsi_1 = var_268
    memcpy(rsi_1, r14_1, rbx_3 * 2)

void* result

if (rbx_3 == 0 || rbx_3 == 0 || rbx_3 == 1)
    void var_e8
    char* rax_34 = sub_141e4f410(&var_e8)
    *arg1 = *rax_34
    
    if (&arg1[8] != &rax_34[8])
        sub_140780e10(&arg1[8], &rax_34[8])
        
        if (*(rax_34 + 0x48) == 0)
            memmove(&arg1[0x40], &rax_34[0x40], 4)
        
        int64_t rcx_66 = *(arg1 + 0x48)
        
        if (rcx_66 != 0)
            sub_140a74f90(rcx_66)
        
        *(arg1 + 0x48) = *(rax_34 + 0x48)
        *(rax_34 + 0x48) = 0
        *(arg1 + 0x50) = *(rax_34 + 0x50)
        *(rax_34 + 0x50) = 0
    
    *(arg1 + 0x58) = *(rax_34 + 0x58)
    *(arg1 + 0x5c) = *(rax_34 + 0x5c)
    *(arg1 + 0x60) = *(rax_34 + 0x60)
    arg1[0x64] = rax_34[0x64]
    *(arg1 + 0x68) = *(rax_34 + 0x68)
    *(arg1 + 0x70) = *(rax_34 + 0x70)
    void var_e0
    result = sub_1405ae180(&var_e0)
else
    uint32_t var_48_1[0x4] = zmm6
    void var_228
    sub_140ae6a10(&var_228)
    int16_t* const r9_1 = &data_142d40450
    int16_t var_288
    var_288.b = 0
    
    if (rax_5 != 0)
        r9_1 = var_240
    
    sub_140af9680(&var_228, u"Engine", 1, r9_1, zmm2, var_288.b)
    int32_t var_258 = 0xffffffff
    
    if (sub_140af3c80(&var_228, rsi_1, u"SoundCueCookQualityIndex", &var_258) != 0)
        *(arg1 + 0x5c) = var_258
    
    sub_140af3040(&var_228, rsi_1, u"bUseAudioStreamCaching", &arg1[0x64])
    
    if (arg1[0x64] != 0)
        int32_t var_254 = 0x8000
        sub_140af3c80(&var_228, rsi_1, u"CacheSizeKB", &var_254)
        *(arg1 + 0x68) = var_254
        char var_274 = 0
        sub_140af3040(&var_228, rsi_1, u"bForceLegacyStreamChunking", &var_274)
        arg1[0x6c] = var_274
        var_270 = 0
        sub_140af3c80(&var_228, rsi_1, u"ZerothChunkSizeForLegacyStreamChunking", &var_270)
        *(arg1 + 0x70) = var_270
    
    sub_140af3040(&var_228, rsi_1, u"bResampleForDevice", arg1)
    sub_140af3b80(&var_228, rsi_1, u"CompressionQualityModifier", &arg1[0x58])
    sub_140af3b80(&var_228, rsi_1, u"AutoStreamingThreshold", &arg1[0x60])
    int32_t var_278 = 0xbf800000
    sub_140af3b80(&var_228, rsi_1, u"MaxSampleRate", &var_278)
    int512_t zmm7_1
    zmm7_1.o = 0x322bcc77
    
    if (*(arg1 + 0x10) == *(arg1 + 0x3c))
    label_141e56726:
        sub_14090a150(&arg1[8], &var_268)
        char* r9_11 = rbx_3.q
        char* var_280_1 = nullptr
        var_288.d = var_268.d
        *r9_11 = 0
        *(r9_11 + 4) = var_278
        *(r9_11 + 8) = 0xffffffff
        sub_141e5b8e0(&arg1[8], &var_270, zx.d(*r9_11), r9_11, var_288, var_280_1)
    else
        void* rax_15 = *(arg1 + 0x48)
        void* rcx_24 = &arg1[0x40]
        
        if (rax_15 != 0)
            rcx_24 = rax_15
        
        int32_t rax_16 = *rcx_24
        
        if (rax_16 == 0xffffffff)
            goto label_141e56726
        
        int64_t r8_6 = *(arg1 + 8)
        int64_t rdx_15
        
        while (true)
            rdx_15 = sx.q(rax_16)
            int64_t rcx_26 = rdx_15 * 2
            
            if (*(r8_6 + (rcx_26 << 3)) == 0)
                break
            
            rax_16 = *(r8_6 + (rcx_26 << 3) + 8)
            
            if (rax_16 == 0xffffffff)
                goto label_141e56726
        
        if (rax_16 == 0xffffffff)
            goto label_141e56726
        
        int64_t rdx_38 = rdx_15 << 4
        void* rdx_39 = rdx_38 + r8_6
        
        if (rdx_38 == neg.q(r8_6) || rdx_39 == -4)
            goto label_141e56726
        
        uint32_t zmm0[0x4] = *(rdx_39 + 4)
        int32_t zmm1_1 = var_278
        zmm0[0] = zmm0[0] f- zmm1_1
        
        if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f<= 9.99999994e-09f))
            *(rdx_39 + 4) = zmm1_1
    
    var_278 = 0xbf800000
    uint32_t zmm6_1[0x4] = sub_140af3b80(&var_228, rsi_1, u"HighSampleRate", &var_278)
    
    if (*(arg1 + 0x10) == *(arg1 + 0x3c))
    label_141e567d9:
        sub_14090a150(&arg1[8], &var_268)
        char* r9_13 = rbx_3.q
        char* var_280_2 = nullptr
        var_288.d = var_268.d
        *r9_13 = 1
        *(r9_13 + 4) = var_278
        *(r9_13 + 8) = 0xffffffff
        sub_141e5b8e0(&arg1[8], &var_270, zx.d(*r9_13), r9_13, var_288, var_280_2)
    else
        void* rax_19 = *(arg1 + 0x48)
        void* rdx_19 = &arg1[0x40]
        
        if (rax_19 != 0)
            rdx_19 = rax_19
        
        int32_t rax_20 = *(rdx_19 + ((zx.q(*(arg1 + 0x50) - 1) & 1) << 2))
        
        if (rax_20 == 0xffffffff)
            goto label_141e567d9
        
        int64_t r8_8 = *(arg1 + 8)
        int64_t rdx_20
        
        while (true)
            rdx_20 = sx.q(rax_20)
            int64_t rcx_34 = rdx_20 * 2
            
            if (*(r8_8 + (rcx_34 << 3)) == 1)
                break
            
            rax_20 = *(r8_8 + (rcx_34 << 3) + 8)
            
            if (rax_20 == 0xffffffff)
                goto label_141e567d9
        
        if (rax_20 == 0xffffffff)
            goto label_141e567d9
        
        int64_t rdx_41 = rdx_20 << 4
        void* rdx_42 = rdx_41 + r8_8
        
        if (rdx_41 == neg.q(r8_8) || rdx_42 == -4)
            goto label_141e567d9
        
        uint32_t zmm0_2[0x4] = *(rdx_42 + 4)
        int32_t zmm1_2 = var_278
        zmm0_2[0] = zmm0_2[0] f- zmm1_2
        
        if (not(_mm_and_ps(zmm0_2, zmm6_1)[0] f<= 9.99999994e-09f))
            *(rdx_42 + 4) = zmm1_2
    
    var_278 = 0xbf800000
    uint32_t zmm6_2[0x4] = sub_140af3b80(&var_228, rsi_1, u"MedSampleRate", &var_278)
    
    if (*(arg1 + 0x10) == *(arg1 + 0x3c))
    label_141e56897:
        sub_14090a150(&arg1[8], &var_268)
        char* r9_15 = rbx_3.q
        char* var_280_3 = nullptr
        var_288.d = var_268.d
        *r9_15 = 2
        *(r9_15 + 4) = var_278
        *(r9_15 + 8) = 0xffffffff
        sub_141e5b8e0(&arg1[8], &var_270, zx.d(*r9_15), r9_15, var_288, var_280_3)
    else
        void* rax_23 = *(arg1 + 0x48)
        void* rdx_24 = &arg1[0x40]
        
        if (rax_23 != 0)
            rdx_24 = rax_23
        
        int32_t rax_24 = *(rdx_24 + ((zx.q(*(arg1 + 0x50) - 1) & 2) << 2))
        
        if (rax_24 == 0xffffffff)
            goto label_141e56897
        
        int64_t r8_10 = *(arg1 + 8)
        int64_t rdx_25
        
        while (true)
            rdx_25 = sx.q(rax_24)
            int64_t rcx_42 = rdx_25 * 2
            
            if (*(r8_10 + (rcx_42 << 3)) == 2)
                break
            
            rax_24 = *(r8_10 + (rcx_42 << 3) + 8)
            
            if (rax_24 == 0xffffffff)
                goto label_141e56897
        
        if (rax_24 == 0xffffffff)
            goto label_141e56897
        
        int64_t rdx_44 = rdx_25 << 4
        void* rdx_45 = rdx_44 + r8_10
        
        if (rdx_44 == neg.q(r8_10) || rdx_45 == -4)
            goto label_141e56897
        
        uint32_t zmm0_4[0x4] = *(rdx_45 + 4)
        int32_t zmm1_3 = var_278
        zmm0_4[0] = zmm0_4[0] f- zmm1_3
        
        if (not(_mm_and_ps(zmm0_4, zmm6_2)[0] f<= 9.99999994e-09f))
            *(rdx_45 + 4) = zmm1_3
    
    var_278 = 0xbf800000
    uint32_t zmm6_3[0x4] = sub_140af3b80(&var_228, rsi_1, u"LowSampleRate", &var_278)
    
    if (*(arg1 + 0x10) == *(arg1 + 0x3c))
    label_141e56957:
        sub_14090a150(&arg1[8], &var_268)
        char* r9_17 = rbx_3.q
        char* var_280_4 = nullptr
        var_288.d = var_268.d
        *r9_17 = 3
        *(r9_17 + 4) = var_278
        *(r9_17 + 8) = 0xffffffff
        sub_141e5b8e0(&arg1[8], &var_270, zx.d(*r9_17), r9_17, var_288, var_280_4)
    else
        void* rax_27 = *(arg1 + 0x48)
        void* rdx_29 = &arg1[0x40]
        
        if (rax_27 != 0)
            rdx_29 = rax_27
        
        int32_t rax_28 = *(rdx_29 + ((zx.q(*(arg1 + 0x50) - 1) & 3) << 2))
        
        if (rax_28 == 0xffffffff)
            goto label_141e56957
        
        int64_t r8_12 = *(arg1 + 8)
        int64_t rdx_30
        
        while (true)
            rdx_30 = sx.q(rax_28)
            int64_t rcx_50 = rdx_30 * 2
            
            if (*(r8_12 + (rcx_50 << 3)) == 3)
                break
            
            rax_28 = *(r8_12 + (rcx_50 << 3) + 8)
            
            if (rax_28 == 0xffffffff)
                goto label_141e56957
        
        if (rax_28 == 0xffffffff)
            goto label_141e56957
        
        int64_t rdx_47 = rdx_30 << 4
        void* rdx_48 = rdx_47 + r8_12
        
        if (rdx_47 == neg.q(r8_12) || rdx_48 == -4)
            goto label_141e56957
        
        uint32_t zmm0_6[0x4] = *(rdx_48 + 4)
        int32_t zmm1_4 = var_278
        zmm0_6[0] = zmm0_6[0] f- zmm1_4
        
        if (not(_mm_and_ps(zmm0_6, zmm6_3)[0] f<= 9.99999994e-09f))
            *(rdx_48 + 4) = zmm1_4
    
    var_278 = 0xbf800000
    uint32_t zmm6_4[0x4] = sub_140af3b80(&var_228, rsi_1, u"MinSampleRate", &var_278)
    
    if (*(arg1 + 0x10) == *(arg1 + 0x3c))
    label_141e56a17:
        sub_14090a150(&arg1[8], &var_268)
        char* r9_19 = rbx_3.q
        char* var_280_5 = nullptr
        var_288.d = var_268.d
        *r9_19 = 4
        *(r9_19 + 4) = var_278
        *(r9_19 + 8) = 0xffffffff
        sub_141e5b8e0(&arg1[8], &var_270, zx.d(*r9_19), r9_19, var_288, var_280_5)
    else
        void* rax_31 = *(arg1 + 0x48)
        void* rdx_34 = &arg1[0x40]
        
        if (rax_31 != 0)
            rdx_34 = rax_31
        
        int32_t rax_32 = *(rdx_34 + ((zx.q(*(arg1 + 0x50) - 1) & 4) << 2))
        
        if (rax_32 == 0xffffffff)
            goto label_141e56a17
        
        int64_t r8_14 = *(arg1 + 8)
        int64_t rdx_35
        
        while (true)
            rdx_35 = sx.q(rax_32)
            int64_t rcx_58 = rdx_35 * 2
            
            if (*(r8_14 + (rcx_58 << 3)) == 4)
                break
            
            rax_32 = *(r8_14 + (rcx_58 << 3) + 8)
            
            if (rax_32 == 0xffffffff)
                goto label_141e56a17
        
        if (rax_32 == 0xffffffff)
            goto label_141e56a17
        
        int64_t rdx_50 = rdx_35 << 4
        void* rdx_51 = rdx_50 + r8_14
        
        if (rdx_50 == neg.q(r8_14) || rdx_51 == -4)
            goto label_141e56a17
        
        uint32_t zmm0_8[0x4] = *(rdx_51 + 4)
        int32_t zmm1_5 = var_278
        zmm0_8[0] = zmm0_8[0] f- zmm1_5
        
        if (not(_mm_and_ps(zmm0_8, zmm6_4)[0] f<= 9.99999994e-09f))
            *(rdx_51 + 4) = zmm1_5
    
    result = sub_140ae7280(&var_228)
    zmm7_1.o = zmm7

if (rsi_1 != 0)
    result = sub_140a74f90(rsi_1)

int16_t* rcx_69 = var_240

if (rcx_69 != 0)
    result = sub_140a74f90(rcx_69)

__security_check_cookie(rax_1 ^ &var_2a8)
return result
