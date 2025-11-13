// 函数: sub_14182aff0
// 地址: 0x14182aff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x12f0)
void var_1308
int64_t rax_1 = __security_cookie ^ &var_1308
int32_t var_1180 = 0
int32_t rsi = 0
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
bool var_12c4

if (data_143de5480 == 0)
    var_12c4 = true
else
    var_12c4 = GetCurrentThreadId() == data_143de5470

BOOL result

if (arg1[0x62] s> 1)
    sub_140a464c0()
    int16_t* const rdx_1
    
    if (arg1[0x5e] == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *(arg1 + 0x170)
    
    int64_t r8_1
    r8_1.b = 1
    (*(data_14399ea08 + 0x58))(&data_14399ea08, rdx_1, r8_1)
    sub_140a464c0()
    arg1[0x5e]
    result = (*(data_14399ea08 + 0x50))()

if (arg1[0x62] s<= 1 || result.b == 0)
    result.b = 0
else
    int64_t performanceCount_5[0x2]
    QueryPerformanceCounter(&performanceCount_5)
    void* rcx_2 = data_143ddb400
    int32_t var_1240 = 0x42020000
    int32_t var_1298 = 0x41200000
    sub_140af3b00(rcx_2, BuildPatchServices", GenerationScannerSizeMegabytes", &var_1240, 
        &data_143de5780)
    int16_t** var_12e8_2 = &data_143de5780
    int128_t zmm2_1
    int128_t zmm3_1
    int32_t zmm6_1
    int128_t zmm7_1
    zmm2_1, zmm3_1, zmm6_1, zmm7_1 =
        sub_140af3b00(data_143ddb400, BuildPatchServices", StatsLoggerTimeSeconds"
        , &var_1298, var_12e8_2)
    int32_t zmm0_1 = var_1240
    
    if (not(zmm0_1 f>= zmm6_1))
        var_1240 = zmm6_1
        zmm0_1 = zmm6_1
    else if (not(zmm0_1 f< 500f))
        var_1240 = 0x43fa0000
        zmm0_1 = 0x43fa0000
    
    int32_t zmm1_1 = var_1298
    
    if (not(zmm1_1 f>= 1f))
        var_1298 = 0x3f800000
    else if (not(zmm1_1 f< 60f))
        var_1298 = 0x42700000
    
    zmm0_1 = zmm0_1 f* 1048576f
    int64_t rax_4 = 0
    
    if (not(zmm0_1 f< 9.22337204e+18f))
        zmm0_1 = zmm0_1 f- 9.22337204e+18f
        
        if (not(zmm0_1 f>= 9.22337204e+18f))
            rax_4 = -0x8000000000000000
    
    int64_t rcx_5 = int.q(zmm0_1) + rax_4
    void*** rax_5 = j_sub_140a82f30(0x148)
    void*** var_1250_1 = rax_5
    void*** r14_1 = rax_5
    
    if (rax_5 == 0)
        r14_1 = nullptr
        var_1250_1 = nullptr
    else
        *r14_1 = &data_142fe55f0
        InitializeCriticalSection(&r14_1[1])
        SetCriticalSectionSpinCount(&r14_1[1], 0xfa0)
        void* rcx_8 = &r14_1[8]
        r14_1[6] = 0
        r14_1[7] = 0
        *(rcx_8 + 0x10) = 0
        *(rcx_8 + 0x18) = 0
        *(rcx_8 + 0x1c) = 0x80
        void* rax_6 = *(rcx_8 + 0x10)
        
        if (rax_6 != 0)
            rcx_8 = rax_6
        
        *rcx_8 = 0
        *(rcx_8 + 8) = 0
        void* rcx_9 = &r14_1[0x12]
        r14_1[0xc].d = 0xffffffff
        *(r14_1 + 0x64) = 0
        r14_1[0xe] = 0
        r14_1[0xf].d = 0
        r14_1[0x10] = 0
        r14_1[0x11] = 0
        *(rcx_9 + 0x10) = 0
        *(rcx_9 + 0x18) = 0
        *(rcx_9 + 0x1c) = 0x80
        void* rax_7 = *(rcx_9 + 0x10)
        
        if (rax_7 != 0)
            rcx_9 = rax_7
        
        *rcx_9 = 0
        *(rcx_9 + 8) = 0
        void* rcx_10 = &r14_1[0x1c]
        r14_1[0x16].d = 0xffffffff
        *(r14_1 + 0xb4) = 0
        r14_1[0x18] = 0
        r14_1[0x19].d = 0
        r14_1[0x1a] = 0
        r14_1[0x1b] = 0
        *(rcx_10 + 0x10) = 0
        *(rcx_10 + 0x18) = 0
        *(rcx_10 + 0x1c) = 0x80
        void* rax_8 = *(rcx_10 + 0x10)
        
        if (rax_8 != 0)
            rcx_10 = rax_8
        
        *rcx_10 = 0
        *(rcx_10 + 8) = 0
        r14_1[0x20].d = 0xffffffff
        *(r14_1 + 0x104) = 0
        r14_1[0x22] = 0
        r14_1[0x23].d = 0
        int64_t performanceCount_2
        QueryPerformanceCounter(&performanceCount_2)
        r14_1[0x24] = performanceCount_2
        r14_1[0x25].d = 0
        sub_140a95a00(r14_1 + 0x12c)
        *(r14_1 + 0x13c) = 2
        r14_1[0x28].d = 2
    
    int64_t var_1170 = 0
    int32_t var_1168_1 = 0
    sub_1405947f0(&var_1170, 0x17)
    int32_t rax_10 = var_1168_1 + 0x17
    var_1168_1 = rax_10
    
    if (rax_10 s> 0)
        sub_140594770(&var_1170)
    
    UnDecorator::getReferenceType(var_1170, u"Generation: Total Time", 0x2e)
    int64_t* rax_12 = (*r14_1)[1](r14_1, &var_1170, 0, 0)
    int64_t rcx_17 = var_1170
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    int64_t var_1160 = 0
    int32_t var_1158_1 = 0
    sub_1405947f0(&var_1160, 0x13)
    int32_t rax_13 = var_1158_1 + 0x13
    var_1158_1 = rax_13
    
    if (rax_13 s> 0)
        sub_140594770(&var_1160)
    
    UnDecorator::getReferenceType(var_1160, u"Generation: Layers", 0x26)
    int64_t r8_2
    r8_2.b = 4
    uint64_t* rax_15 = (*r14_1)[1](r14_1, &var_1160, r8_2, 0)
    int64_t rcx_22 = var_1160
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    int64_t var_1150 = 0
    int32_t var_1148_1 = 0
    sub_1405947f0(&var_1150, 0x1c)
    int32_t rax_16 = var_1148_1 + 0x1c
    var_1148_1 = rax_16
    
    if (rax_16 s> 0)
        sub_140594770(&var_1150)
    
    UnDecorator::getReferenceType(var_1150, u"Generation: Scanner Backlog", 0x38)
    int64_t r8_3
    r8_3.b = 4
    int64_t* rax_18 = (*r14_1)[1](r14_1, &var_1150, r8_3, 0)
    int64_t rcx_27 = var_1150
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)
    
    int64_t var_1140 = 0
    int32_t var_1138_1 = 0
    sub_1405947f0(&var_1140, 0x29)
    int32_t rax_19 = var_1138_1 + 0x29
    var_1138_1 = rax_19
    
    if (rax_19 s> 0)
        sub_140594770(&var_1140)
    
    UnDecorator::getReferenceType(var_1140, u"Generation: Unmatched Buffers Allocation", 0x52)
    int64_t r8_4
    r8_4.b = 1
    int64_t* rax_21 = (*r14_1)[1](r14_1, &var_1140, r8_4, 0)
    int64_t rcx_32 = var_1140
    
    if (rcx_32 != 0)
        sub_140a74f90(rcx_32)
    
    int64_t var_1130 = 0
    int32_t var_1128_1 = 0
    sub_1405947f0(&var_1130, 0x22)
    int32_t rax_22 = var_1128_1 + 0x22
    var_1128_1 = rax_22
    
    if (rax_22 s> 0)
        sub_140594770(&var_1130)
    
    UnDecorator::getReferenceType(var_1130, u"Generation: Unmatched Buffers Use", 0x44)
    int64_t r8_5
    r8_5.b = 1
    int64_t* rax_24 = (*r14_1)[1](r14_1, &var_1130, r8_5, 0)
    int64_t rcx_37 = var_1130
    
    if (rcx_37 != 0)
        sub_140a74f90(rcx_37)
    
    uint64_t i_6 = 0
    int64_t* rax_25 = j_sub_140a82f30(0x18)
    int64_t* var_1108_1 = rax_25
    void*** r13_1 = rax_25
    
    if (rax_25 == 0)
        r13_1 = nullptr
        var_1108_1 = nullptr
    else
        *r13_1 = &data_142fe5510
        sub_140a464c0()
        r13_1[1] = &data_14399ea08
        sub_140b6b7d0()
        r13_1[2] = &data_1439a9568
    
    int32_t rbx_1 = *arg1
    void*** rax_26 = j_sub_140a82f30(0x18)
    void*** var_1080_1 = rax_26
    
    if (rax_26 == 0)
        var_1080_1 = rax_26
    else
        rax_26[1] = r13_1
        *rax_26 = &data_142fe5900
        rax_26[2].d = rbx_1
        rax_26 = nullptr
    
    int32_t rbx_2 = arg1[0x5e]
    int32_t rdx_12 = 5
    int32_t zmm0_2 = 0x40a00000
    int32_t r8_6 = 0x32
    int64_t rdi_2 = *(arg1 + 0x170)
    int32_t r9_3 = 8
    int32_t var_fdc_1 = 0x40a00000
    int32_t var_fe0_1 = 5
    int32_t var_fd8_1 = 0x32
    int32_t var_fd4_1 = 8
    uint64_t var_fd0 = rax_26
    int32_t rcx_38
    void*** rdi_3
    
    if (rbx_2 != 0)
        sub_1405a4c70(&var_fd0, rbx_2, 0)
        rdi_3 = var_fd0
        memcpy(rdi_3, rdi_2, rbx_2 * 2)
        int32_t var_fc4
        rcx_38 = var_fc4
        r9_3 = var_fd4_1
        r8_6 = var_fd8_1
        zmm0_2 = var_fdc_1
        rdx_12 = var_fe0_1
    else
        rcx_38 = rax_26.d
        int32_t var_fc4_1 = rax_26.d
        rdi_3 = rax_26
    
    int32_t rax_27 = *arg1
    int32_t var_c70 = rdx_12
    int32_t var_c68_1 = r8_6
    int32_t var_c64_1 = r9_3
    int32_t var_c54_1 = rcx_38
    int32_t var_c6c_1 = zmm0_2
    int32_t var_fc0_1 = rax_27
    void*** var_c60_1 = rdi_3
    int32_t var_c58_1 = rbx_2
    int32_t var_c50_1 = rax_27
    void*** rax_28
    int128_t zmm2_2
    int128_t zmm3_2
    rax_28, zmm2_2, zmm3_2 = sub_14187cc00(&var_c70, r13_1, var_1080_1, zmm3_1, zmm2_1)
    void*** rdi_4 = rax_28
    int32_t var_408
    sub_141820a80(&var_408)
    var_408 = *arg1
    int32_t var_404_1 = arg1[6]
    uint64_t var_400
    
    if (&var_400 != &arg1[8])
        int32_t rbx_3 = arg1[0xa]
        int64_t r14_2 = *(arg1 + 0x20)
        int32_t var_3f8_1 = rbx_3
        int32_t var_3f4
        
        if (rbx_3 != 0 || var_3f4 != 0)
            sub_1405a4c70(&var_400, rbx_3, var_3f4)
            memcpy(var_400, r14_2, rbx_3 * 2)
        else
            int32_t var_3f4_1 = 0
    
    uint64_t var_3f0
    
    if (&var_3f0 != &arg1[0xc])
        int32_t rbx_4 = arg1[0xe]
        int64_t r14_3 = *(arg1 + 0x30)
        int32_t var_3e8_1 = rbx_4
        int32_t var_3e4
        
        if (rbx_4 != 0 || var_3e4 != 0)
            sub_1405a4c70(&var_3f0, rbx_4, var_3e4)
            memcpy(var_3f0, r14_3, rbx_4 * 2)
        else
            int32_t var_3e4_1 = 0
    
    uint64_t var_3e0
    
    if (&var_3e0 != &arg1[0x10])
        int32_t rbx_5 = arg1[0x12]
        int64_t r14_4 = *(arg1 + 0x40)
        int32_t var_3d8_1 = rbx_5
        int32_t var_3d4
        
        if (rbx_5 != 0 || var_3d4 != 0)
            sub_1405a4c70(&var_3e0, rbx_5, var_3d4)
            memcpy(var_3e0, r14_4, rbx_5 * 2)
        else
            int32_t var_3d4_1 = 0
    
    uint64_t var_3d0
    
    if (&var_3d0 != &arg1[0x14])
        int32_t rbx_6 = arg1[0x16]
        int64_t r14_5 = *(arg1 + 0x50)
        int32_t var_3c8_1 = rbx_6
        int32_t var_3c4
        
        if (rbx_6 != 0 || var_3c4 != 0)
            sub_1405a4c70(&var_3d0, rbx_6, var_3c4)
            memcpy(var_3d0, r14_5, rbx_6 * 2)
        else
            int32_t var_3c4_1 = 0
    
    void var_3c0
    
    if (&var_3c0 != &arg1[0x24])
        int64_t rbx_7 = sx.q(arg1[0x36])
        void var_388
        sub_1405a4aa0(&var_388, 0, rbx_7.d, 4)
        void* rax_35 = *(arg1 + 0xd0)
        void* rdx_24 = &arg1[0x32]
        void* rcx_52 = &var_388
        
        if (rax_35 != 0)
            rdx_24 = rax_35
        
        void* var_380
        
        if (var_380 != 0)
            rcx_52 = var_380
        
        memcpy(rcx_52, rdx_24, (rbx_7 << 2).d)
        int32_t var_378_1 = rbx_7.d
        sub_141823c70(&var_3c0, &arg1[0x24])
    
    uint64_t var_370
    
    if (&var_370 != &arg1[0x38])
        int32_t rbx_8 = arg1[0x3a]
        int64_t r14_7 = *(arg1 + 0xe0)
        int32_t var_368_1 = rbx_8
        int32_t var_364
        
        if (rbx_8 != 0 || var_364 != 0)
            sub_1405a4c70(&var_370, rbx_8, var_364)
            memcpy(var_370, r14_7, rbx_8 * 2)
        else
            int32_t var_364_1 = 0
    
    uint64_t var_360
    
    if (&var_360 != &arg1[0x3c])
        int32_t rbx_9 = arg1[0x3e]
        int64_t r14_8 = *(arg1 + 0xf0)
        int32_t var_358_1 = rbx_9
        int32_t var_354
        
        if (rbx_9 != 0 || var_354 != 0)
            sub_1405a4c70(&var_360, rbx_9, var_354)
            memcpy(var_360, r14_8, rbx_9 * 2)
        else
            int32_t var_354_1 = 0
    
    uint64_t var_350
    
    if (&var_350 != &arg1[0x40])
        int32_t rbx_10 = arg1[0x42]
        int64_t r14_9 = *(arg1 + 0x100)
        int32_t var_348_1 = rbx_10
        int32_t var_344
        
        if (rbx_10 != 0 || var_344 != 0)
            sub_1405a4c70(&var_350, rbx_10, var_344)
            memcpy(var_350, r14_9, rbx_10 * 2)
        else
            int32_t var_344_1 = 0
    
    void var_340
    
    if (&var_340 != &arg1[0x48])
        int64_t rbx_11 = sx.q(arg1[0x5a])
        void var_308
        sub_1405a4aa0(&var_308, 0, rbx_11.d, 4)
        void* rax_39 = *(arg1 + 0x160)
        void* rdx_32 = &arg1[0x56]
        void* rcx_61 = &var_308
        
        if (rax_39 != 0)
            rdx_32 = rax_39
        
        void* var_300
        
        if (var_300 != 0)
            rcx_61 = var_300
        
        memcpy(rcx_61, rdx_32, (rbx_11 << 2).d)
        int32_t var_2f8_1 = rbx_11.d
        sub_141823aa0(&var_340, &arg1[0x48])
    
    void* r13_2
    
    if (arg1[0x22] s<= 1)
    label_14182bbd9:
        int64_t rcx_73
        
        if (arg1[0x45].b == 0)
            rcx_73 = 0
        else
            double zmm6_2[0x2] = _mm_cvtps_pd(arg1[0x44][0])
            void var_af8
            int64_t* rax_51 = sub_140b29d90(&var_af8)
            zmm6_2[0] = zmm6_2[0] * 864000000000.0
            zmm6_2[0] = zmm6_2[0] + 0.5
            int64_t rcx_70 = int.q(zmm6_2[0])
            
            if (rcx_70 != -0x8000000000000000 && not(float.d(rcx_70) f== zmm6_2[0]))
                uint32_t temp0_7 = _mm_movemask_pd(_mm_unpacklo_pd(zmm6_2, zmm6_2[0]))
                zmm6_2 = zx.o(0)
                zmm6_2[0] = float.d(rcx_70 - (zx.q(temp0_7) & 1))
            
            rcx_73 = *rax_51 - int.q(zmm6_2[0])
        
        int64_t var_e80 = rcx_73
        int64_t* rax_55
        int128_t zmm2_3
        int128_t zmm3_3
        rax_55, zmm2_3, zmm3_3 =
            sub_14187c740(&arg1[0x5c], &var_e80, arg1, var_1250_1, zmm2_2, zmm3_2)
        int64_t* rbx_13 = rax_55
        int64_t var_bb8
        sub_140596d10(&var_bb8, &arg1[2])
        int64_t var_ba8
        sub_140596d10(&var_ba8, &arg1[0x18])
        int64_t var_b98
        sub_140596d10(&var_b98, &arg1[0x1c])
        void var_b88
        sub_140596d10(&var_b88, &var_bb8)
        void var_b78
        sub_140596d10(&var_b78, &var_ba8)
        void var_b68
        sub_140596d10(&var_b68, &var_b98)
        int64_t rcx_81 = var_b98
        
        if (rcx_81 != 0)
            sub_140a74f90(rcx_81)
        
        int64_t rcx_82 = var_ba8
        
        if (rcx_82 != 0)
            sub_140a74f90(rcx_82)
        
        int64_t rcx_83 = var_bb8
        
        if (rcx_83 != 0)
            sub_140a74f90(rcx_83)
        
        int64_t* var_1270_1 = var_1108_1
        int128_t var_b28 = var_1250_1.o
        void var_a40
        sub_140596d10(&var_a40, &var_b88)
        void var_a30
        sub_140596d10(&var_a30, &var_b78)
        void var_a20
        sub_140596d10(&var_a20, &var_b68)
        void*** rax_58 = sub_14187bc80(&var_a40, &var_b28, zmm2_3, zmm3_3)
        void*** r14_12 = rax_58
        void var_d78
        (*rax_58)[5](r14_12, &var_d78)
        char var_12d8_1
        uint64_t var_fa8
        char rax_62
        
        if (arg1[0x12] s> 1)
            int16_t* const var_f38
            int16_t* const rax_61
            
            if (arg1[4] == 0)
                rax_61 = &data_142d40450
                var_f38 = &data_142d40450
            else
                var_f38 = *(arg1 + 8)
                rax_61 = &data_142d40450
            
            if (arg1[0x12] != 0)
                rax_61 = *(arg1 + 0x40)
            
            int16_t* const var_f30_1 = rax_61
            var_fa8 = 0
            int64_t var_fa0_1 = 0
            sub_140b0f5f0(&var_fa8, &var_f38, 2)
            rsi = 1
            rax_62 = sub_1405a71a0(&var_d78, &var_fa8)
            var_12d8_1 = 1
        
        if (arg1[0x12] s<= 1 || rax_62 != 0)
            var_12d8_1 = 0
        
        if ((rsi.b & 1) != 0)
            uint64_t rcx_92 = var_fa8
            rsi &= 0xfffffffe
            
            if (rcx_92 != 0)
                sub_140a74f90(rcx_92)
        
        if (var_12d8_1 != 0)
            r13_2.b = 0
        else
            uint64_t var_f98
            void* r15_1
            
            if (arg1[0x3e] s<= 1)
                r13_2 = nullptr
                r15_1.b = 0
            else
                rsi |= 2
                int16_t* const var_f28
                int16_t* const rax_65
                
                if (arg1[4] == 0)
                    rax_65 = &data_142d40450
                    var_f28 = &data_142d40450
                else
                    var_f28 = *(arg1 + 8)
                    rax_65 = &data_142d40450
                
                if (arg1[0x3e] != 0)
                    rax_65 = *(arg1 + 0xf0)
                
                r13_2 = nullptr
                int16_t* const var_f20_1 = rax_65
                var_f98 = 0
                int64_t var_f90_1 = 0
                sub_140b0f5f0(&var_f98, &var_f28, 2)
                
                if (sub_1405a71a0(&var_d78, &var_f98) != 0)
                    r15_1.b = 0
                else
                    r15_1.b = 1
            
            if ((rsi.b & 2) != 0)
                uint64_t rcx_95 = var_f98
                
                if (rcx_95 != 0)
                    sub_140a74f90(rcx_95)
            
            if (r15_1.b != 0)
                r13_2.b = 0
            else
                int128_t var_48_1 = zmm7_1
                
                if ((*(*rbx_13 + 8))(rbx_13) == 0)
                    char i
                    
                    do
                        if (var_12c4 != 0)
                            sub_140b19e60()
                            void* rdx_54 = data_1439a8bd0
                            (*(rdx_54 + 0x48))(&data_1439a8bd0, rdx_54)
                        
                        int64_t performanceCount_3
                        QueryPerformanceCounter(&performanceCount_3)
                        *rax_12 = performanceCount_3 - performanceCount
                        (*var_1250_1)[2](var_1250_1, var_1298)
                        sub_140b73230(0x3c23d70a)
                        i = (*(*rbx_13 + 8))(rbx_13)
                    while (i == 0)
                    rdi_4 = rax_28
                    r14_12 = rax_58
                
                int32_t* r15_2 = arg1
                int32_t* var_1238 = nullptr
                int64_t var_1230_1 = 0
                
                if (r15_2[0x47].b == 0)
                    var_1230_1.d = 1
                    sub_1405a4cf0(&var_1238)
                    *var_1238 = r15_2[0x46]
                else
                    void* rax_74 = (*(*rbx_13 + 0x10))(rbx_13)
                    void* var_1120 = nullptr
                    int32_t rsi_2 = 0
                    int64_t var_1118_1 = 0
                    int32_t rdx_56 = *(rax_74 + 8) - *(rax_74 + 0x34)
                    
                    if (rdx_56 s> 0)
                        sub_1405dadb0(&var_1120, rdx_56)
                        rsi_2 = var_1118_1.d
                        r13_2 = var_1120
                    
                    bool cond:1_1 = *(rax_74 + 0x28) == 0
                    int32_t var_ee8 = 0
                    int32_t var_ee4_1 = 1
                    int32_t var_ed8_1 = 0xffffffff
                    int64_t var_ed4_1 = 0
                    
                    if (not(cond:1_1))
                        sub_14059bdd0(&var_ee8)
                    
                    double zmm2_4[0x2] = var_ed8_1.o
                    double var_11d0_1[0x2] = zmm2_4
                    double var_11e0_1[0x2] = var_ee8.o
                    double var_ec8[0x2] = rax_74.o
                    uint32_t rax_76 = (zmm2_4[0] u>> 0x20).d
                    int64_t var_ea8_1 = (_mm_unpackhi_pd(zmm2_4, zmm2_4[0])).q
                    
                    if (rax_76 s< *(rax_74 + 0x28))
                        int32_t i_1 = var_11e0_1[1]:4.d
                        
                        do
                            int64_t r15_4 = sx.q(rsi_2)
                            int64_t rax_78 = *var_ec8[0]
                            rsi_2 = (r15_4 + 1).d
                            var_1118_1.d = rsi_2
                            
                            if (rsi_2 s> var_1118_1:4.d)
                                sub_1405a4cf0(&var_1120)
                                rsi_2 = var_1118_1.d
                                r13_2 = var_1120
                            
                            *(r13_2 + (r15_4 << 2)) = *(rax_78 + sx.q(i_1) * 0xc)
                            var_11e0_1[1].d &= not.d(var_ec8[1]:4.d)
                            sub_14059bdd0(&var_ec8[1])
                            i_1 = var_11e0_1[1]:4.d
                        while (i_1 s< *(var_11e0_1[0] i+ 0x18))
                        
                        rdi_4 = rax_28
                    
                    if (rsi_2 != 0)
                        int32_t rax_85 = var_1230_1.d
                        int32_t rdx_58 = rsi_2 + rax_85
                        
                        if (rdx_58 s> var_1230_1:4.d)
                            sub_1405dadb0(&var_1238, rdx_58)
                            rax_85 = var_1230_1.d
                        
                        memmove(&var_1238[sx.q(rax_85)], r13_2, rsi_2 << 2)
                        var_1230_1.d += rsi_2
                    
                    if (r13_2 != 0)
                        sub_140a74f90(r13_2)
                    
                    r15_2 = arg1
                
                sub_14181b2b0(var_1238, var_1230_1.d)
                int32_t rcx_111
                
                if (var_1230_1.d s<= 0)
                    rcx_111 = 0
                else
                    rcx_111 = *var_1238
                
                int32_t rax_89 = r15_2[0x46]
                
                if (rax_89 u>= rcx_111)
                    rcx_111 = rax_89
                
                void*** rax_91 = sub_14187c130()
                void*** rsi_3 = rax_91
                int64_t var_868
                __builtin_memset(&var_868, 0, 0x2c)
                int32_t var_83c_1 = 0x80
                int32_t var_838_1 = 0xffffffff
                int32_t var_834_1 = 0
                int64_t var_828_1 = 0
                int32_t var_820_1 = 0
                int64_t var_598
                __builtin_memset(&var_598, 0, 0x2c)
                int32_t var_56c_1 = 0x80
                int32_t var_568_1 = 0xffffffff
                int32_t var_564_1 = 0
                int64_t var_558_1 = 0
                int32_t var_550_1 = 0
                int64_t var_5e8
                __builtin_memset(&var_5e8, 0, 0x2c)
                int32_t var_5bc_1 = 0x80
                int32_t var_5b8_1 = 0xffffffff
                int32_t var_5b4_1 = 0
                int64_t var_5a8_1 = 0
                int32_t var_5a0_1 = 0
                int64_t var_638
                __builtin_memset(&var_638, 0, 0x2c)
                int32_t var_60c_1 = 0x80
                int32_t var_608_1 = 0xffffffff
                int32_t var_604_1 = 0
                int64_t var_5f8_1 = 0
                int32_t var_5f0_1 = 0
                int64_t var_458
                __builtin_memset(&var_458, 0, 0x2c)
                int32_t var_42c_1 = 0x80
                int32_t var_428_1 = 0xffffffff
                int32_t var_424_1 = 0
                int64_t var_418_1 = 0
                int32_t var_410_1 = 0
                int64_t var_6d8
                __builtin_memset(&var_6d8, 0, 0x2c)
                int32_t var_6ac_1 = 0x80
                int32_t var_6a8_1 = 0xffffffff
                int32_t var_6a4_1 = 0
                int64_t var_698_1 = 0
                int32_t var_690_1 = 0
                int64_t var_7c8
                __builtin_memset(&var_7c8, 0, 0x2c)
                int32_t var_79c_1 = 0x80
                int32_t var_798_1 = 0xffffffff
                int32_t var_794_1 = 0
                int64_t var_788_1 = 0
                int32_t var_780_1 = 0
                int64_t var_688
                __builtin_memset(&var_688, 0, 0x2c)
                int32_t var_65c_1 = 0x80
                int32_t var_658_1 = 0xffffffff
                int32_t var_654_1 = 0
                int64_t var_648_1 = 0
                int32_t var_640_1 = 0
                int64_t var_8d8
                __builtin_memset(&var_8d8, 0, 0x2c)
                int32_t var_8ac_1 = 0x80
                int32_t var_8a8_1 = 0xffffffff
                int32_t var_8a4_1 = 0
                int64_t var_898_1 = 0
                int32_t var_890_1 = 0
                int64_t var_928
                __builtin_memset(&var_928, 0, 0x2c)
                int32_t var_8fc_1 = 0x80
                int32_t var_8f8_1 = 0xffffffff
                int32_t var_8f4_1 = 0
                int64_t var_8e8_1 = 0
                int32_t var_8e0_1 = 0
                int64_t var_548
                __builtin_memset(&var_548, 0, 0x2c)
                int32_t var_51c_1 = 0x80
                int32_t var_518_1 = 0xffffffff
                int32_t var_514_1 = 0
                int64_t var_508_1 = 0
                int32_t var_500_1 = 0
                char var_12b8
                sub_141864930(&var_12b8)
                var_12b8 = r15_2[0x64].b
                void*** var_fb8
                sub_14187cb30(&var_fb8, var_1108_1, &var_12b8, &var_408)
                int64_t var_818
                __builtin_memset(&var_818, 0, 0x2c)
                int512_t zmm1_3
                zmm1_3.o = zx.o(0)
                int128_t var_c08 = zx.o(0)
                int128_t var_bc8 = zx.o(0)
                int32_t var_7ec_1 = 0x80
                int32_t var_7e8_1 = 0xffffffff
                int32_t var_7e4_1 = 0
                int64_t var_7d8_1 = 0
                int32_t var_7d0_1 = 0
                int64_t var_728
                __builtin_memset(&var_728, 0, 0x2c)
                int32_t var_6fc_1 = 0x80
                int32_t var_6f8_1 = 0xffffffff
                int32_t var_6f4_1 = 0
                int64_t var_6e8_1 = 0
                int32_t var_6e0_1 = 0
                char r15_5 = 1
                int64_t var_778
                __builtin_memset(&var_778, 0, 0x2c)
                int32_t var_74c_1 = 0x80
                int32_t var_748_1 = 0xffffffff
                int32_t var_744_1 = 0
                int64_t var_738_1 = 0
                int32_t var_730_1 = 0
                int64_t var_4f8
                __builtin_memset(&var_4f8, 0, 0x2c)
                int32_t var_4cc_1 = 0x80
                int32_t var_4c8_1 = 0xffffffff
                int32_t var_4c4_1 = 0
                int64_t var_4b8_1 = 0
                int32_t var_4b0_1 = 0
                int64_t var_4a8
                __builtin_memset(&var_4a8, 0, 0x2c)
                int32_t var_47c_1 = 0x80
                int32_t var_478_1 = 0xffffffff
                int32_t var_474_1 = 0
                int64_t var_468_1 = 0
                int32_t var_460_1 = 0
                void** rax_93 = *r14_12
                int64_t var_12b0 = 0
                int32_t var_12d4_1 = 0
                int64_t var_12a8_1 = 0
                int64_t var_1100_1 = 0
                int32_t** var_1268 = nullptr
                int64_t var_1260_1 = 0
                void*** r15_36
                
                if (rax_93[8](r14_12, zmm1_3) != 0)
                label_14182e5c2:
                    r15_36 = var_1250_1
                label_14182e5cc:
                    
                    if ((*r14_12)[8](r14_12) == 0)
                        void var_158
                        (*rdi_4)[2](rdi_4, &var_158)
                        int64_t performanceCount_1
                        QueryPerformanceCounter(&performanceCount_1)
                        zmm1_3.o = zx.o(0)
                        *rax_12 = performanceCount_1 - performanceCount
                        (*r15_36)[2](r15_36, zmm1_3)
                        void var_1f8
                        sub_14181d690(&var_1f8)
                        int64_t var_1b8_1 = 0
                        int32_t var_1b0_1 = 0
                        int64_t* rax_271 = (*(*rbx_13 + 0x20))(rbx_13)
                        int64_t var_298
                        sub_14181d690(&var_298)
                        int64_t var_258_1 = 0
                        int32_t var_250_1 = 0
                        sub_1418233a0(&var_298, rax_271)
                        int64_t* rax_273 = (*(*rbx_13 + 0x30))(rbx_13)
                        int64_t var_248
                        sub_14181d690(&var_248)
                        int64_t var_208_1 = 0
                        int32_t var_200_1 = 0
                        sub_141823260(&var_248, rax_273)
                        void var_150
                        sub_141814260(&var_298, &var_150)
                        void* rax_275 = (*(*rbx_13 + 0x18))(rbx_13)
                        void* r15_39 = rax_275 + 0x10
                        int32_t var_9b0[0x8]
                        int32_t* rax_276 = sub_1406c8970(&var_9b0, r15_39, 0)
                        int32_t r8_165 = *(rax_275 + 0x28)
                        int32_t var_aac_1 = r8_165
                        double zmm2_7[0x2] = *(rax_276 + 0x10)
                        int128_t var_11e0_4 = *rax_276
                        double var_11d0_4[0x2] = zmm2_7
                        zmm2_7 = _mm_unpackhi_pd(zmm2_7, zmm2_7[0])
                        int128_t var_d10 = rax_275.o
                        int128_t var_d00_1 = var_11e0_4
                        int64_t var_cf0_1 = zmm2_7.q
                        
                        while (true)
                            int64_t rax_277 = sx.q(var_d00_1:0xc.d)
                            int64_t rcx_384 = var_d10.q
                            
                            if (rax_277.d == ((0xffffffff << (r8_165.b & 0x1f)).q u>> 0x20).d
                                    && var_d00_1.q == r15_39 && rcx_384 == rax_275)
                                break
                            
                            int64_t* r12_20 = rax_277 * 0x60 + *rcx_384
                            int64_t rcx_385 = *r12_20
                            void* rax_280 = sub_14181a1b0(&var_868, 
                                (rcx_385 u>> 0x20).d * 0x17 + rcx_385.d, r12_20)
                            void var_1a8
                            sub_140b30de0(rax_280, sub_141851b40(rax_280, &var_1a8, &r12_20[1]))
                            int32_t var_160_1 = 0
                            int64_t var_168
                            
                            if (var_168 != 0)
                                sub_140a74f90(var_168)
                            
                            sub_14094b3a0(&var_1a8)
                            var_d00_1:8.d &= not.d(var_d10:0xc.d)
                            sub_14059bdd0(&var_d10:8)
                            r15_39 = rax_275 + 0x10
                        
                        sub_141813fc0(&var_598, (*(*rax_55 + 0x28))(rax_55))
                        int32_t var_990[0x8]
                        int64_t var_858
                        int32_t* rax_286 = sub_1406c8970(&var_990, &var_858, 0)
                        int32_t var_840
                        int32_t var_a8c_1 = var_840
                        double zmm2_8[0x2] = *(rax_286 + 0x10)
                        int128_t var_11e0_5 = *rax_286
                        uint64_t performanceCount_6 = (0xffffffff << (var_840.b & 0x1f)).q u>> 0x20
                        double var_11d0_5[0x2] = zmm2_8
                        performanceCount_1 = performanceCount_6
                        zmm2_8 = _mm_unpackhi_pd(zmm2_8, zmm2_8[0])
                        int128_t var_cc0 = (&var_868).o
                        int128_t var_cb0_1 = var_11e0_5
                        int64_t var_ca0_1 = zmm2_8.q
                        
                        while (true)
                            int64_t rax_287 = sx.q(var_cb0_1:0xc.d)
                            int64_t rcx_397 = var_cc0.q
                            
                            if (rax_287.d == performanceCount_6.d && var_cb0_1.q == &var_858
                                    && rcx_397 == &var_868)
                                break
                            
                            int64_t* r12_23 = rax_287 * 0x60 + *rcx_397
                            int32_t var_970[0x8]
                            int128_t* rax_288 = sub_1406c8970(&var_970, &r12_23[3], 0)
                            int32_t r8_169 = r12_23[6].d
                            zmm2_8 = rax_288[1]
                            int128_t var_11e0_6 = *rax_288
                            int32_t var_a6c_1 = r8_169
                            double var_11d0_6[0x2] = zmm2_8
                            zmm2_8 = _mm_unpackhi_pd(zmm2_8, zmm2_8[0])
                            int128_t var_ce8 = (&r12_23[1]).o
                            int128_t var_cd8_1 = var_11e0_6
                            int64_t var_cc8_1 = zmm2_8.q
                            
                            while (true)
                                int64_t rax_289 = sx.q(var_cd8_1:0xc.d)
                                int64_t* rdx_233 = var_ce8.q
                                
                                if (rax_289.d == ((0xffffffff << (r8_169.b & 0x1f)).q u>> 0x20).d
                                        && var_cd8_1.q == &r12_23[3] && rdx_233 == &r12_23[1])
                                    break
                                
                                int32_t* r15_41 = *rdx_233 + rax_289 * 0x18
                                void var_e98
                                void var_e94
                                
                                if (*sub_1418390c0(&var_598, &var_e98, r15_41) != 0xffffffff
                                        && *sub_140cba0f0(&var_298, &var_e94, r15_41)
                                        != 0xffffffff)
                                    void* rax_294 =
                                        sub_14181a090(&var_1f8, sub_140a6b260(r15_41, 0x10), r15_41)
                                    *rax_294 = *r15_41
                                    *(rax_294 + 0x10) = *r12_23
                                    int32_t var_108c
                                    sub_1418390c0(&var_598, &var_108c, r15_41)
                                    int64_t rcx_408 = sx.q(var_108c)
                                    void* const rcx_410
                                    
                                    if (rcx_408.d == 0xffffffff)
                                        rcx_410 = nullptr
                                    else
                                        rcx_410 = rcx_408 * 0x2c + var_598
                                    
                                    *(rax_294 + 0x18) = *(rcx_410 + 0x10)
                                    *(rax_294 + 0x28) = *(rcx_410 + 0x20)
                                    int32_t var_1094
                                    sub_140cba0f0(&var_298, &var_1094, r15_41)
                                    int64_t rax_296 = sx.q(var_1094)
                                    void* const rax_298
                                    
                                    if (rax_296.d == 0xffffffff)
                                        rax_298 = nullptr
                                    else
                                        rax_298 = (rax_296 << 5) + var_298
                                    
                                    *(rax_294 + 0x38) = *(rax_298 + 0x10)
                                    *(rax_294 + 0x2c) = (sub_140b21160(r15_41, 0x10, 0) u% 0x64).b
                                    void var_e90
                                    int32_t rcx_416
                                    
                                    if (*sub_141838ff0(&var_248, &var_e90, r15_41) == 0xffffffff)
                                        rcx_416 = arg1[0x46]
                                    else
                                        sub_141838ff0(&var_248, &var_1180, r15_41)
                                        int64_t rax_303 = sx.q(var_1180)
                                        
                                        if (rax_303.d == 0xffffffff)
                                            rcx_416 = *0x10
                                        else
                                            rcx_416 = *(rax_303 * 0x1c + var_248 + 0x10)
                                    
                                    *(rax_294 + 0x30) = rcx_416
                                
                                var_cd8_1:8.d &= not.d(var_ce8:0xc.d)
                                sub_14059bdd0(&var_ce8:8)
                            
                            var_cb0_1:8.d &= not.d(var_cc0:0xc.d)
                            sub_14059bdd0(&var_cc0:8)
                            performanceCount_6 = performanceCount_1
                        
                        uint64_t var_1000 = 0
                        int64_t var_ff8_1 = 0
                        sub_14181a250(&var_1f8, &var_1000)
                        r14_12 = rax_58
                        void*** r12_24 = var_fb8
                        uint64_t var_d98 = var_1000
                        int32_t var_d90_1 = var_ff8_1.d
                        int32_t var_d8c_1 = var_ff8_1:4.d
                        int32_t i_9
                        int32_t i_7 = i_9
                        void* var_d88
                        bool cond:6_1 =
                            (*r12_24)[2](r12_24, (*r14_12)[7](r14_12, &var_d88), &var_d98) == 0
                        void* r15_43 = var_d88
                        rbx_13 = rax_55
                        r13_2.b = cond:6_1
                        rdi_4 = rax_28
                        rsi_3 = rax_91
                        
                        if (i_7 != 0)
                            int32_t i_2
                            
                            do
                                int64_t rcx_422 = *(r15_43 + 0x38)
                                
                                if (rcx_422 != 0)
                                    sub_140a74f90(rcx_422)
                                
                                int64_t rcx_423 = *r15_43
                                
                                if (rcx_423 != 0)
                                    sub_140a74f90(rcx_423)
                                
                                r15_43 += 0x48
                                i_2 = i_7
                                i_7 -= 1
                            while (i_2 != 1)
                            r15_43 = var_d88
                        
                        if (r15_43 != 0)
                            sub_140a74f90(r15_43)
                        
                        if (r13_2.b == 0)
                            int32_t var_950[0xa]
                            int64_t var_808
                            int32_t* rax_316 = sub_1406c8970(&var_950, &var_808, 0)
                            double zmm2_9[0x2] = *(rax_316 + 0x10)
                            int128_t var_11e0_7 = *rax_316
                            double var_11d0_7[0x2] = zmm2_9
                            zmm2_9 = _mm_unpackhi_pd(zmm2_9, zmm2_9[0])
                            int128_t var_c98 = (&var_818).o
                            int128_t var_c88_1 = var_11e0_7
                            int64_t var_c78_1 = zmm2_9.q
                            int32_t var_a10[0x8]
                            int32_t var_7f0
                            int32_t* rax_317 = sub_1406c8970(&var_a10, &var_808, var_7f0)
                            uint32_t r15_45 = (*(rax_317 + 0x10) u>> 0x20).d
                            int64_t r12_25 = (*rax_317):8.q
                            
                            while (true)
                                int64_t rax_318 = sx.q(var_c88_1:0xc.d)
                                int64_t* rdx_248 = var_c98.q
                                
                                if (rax_318.d == r15_45 && var_c88_1.q == r12_25
                                        && rdx_248 == &var_818)
                                    break
                                
                                void var_e8c
                                sub_140cba0f0(&var_150, &var_e8c, *rdx_248 + rax_318 * 0x18)
                                var_c88_1:8.d &= not.d(var_c98:0xc.d)
                                sub_14059bdd0(&var_c98:8)
                            
                            int32_t rax_322 = arg1[0x62]
                            int32_t r8_180 = arg1[0x5e]
                            int32_t r15_46 = rax_322 - 1
                            
                            if (rax_322 == 0)
                                r15_46 = 0
                            
                            int32_t rax_324
                            
                            if (r8_180 == 0)
                                rax_324 = 2
                            
                            if (r8_180 != 0 || r15_46 == 0xffffffff)
                                rax_324 = 1
                            
                            uint64_t var_ef8 = 0
                            var_12e8_2.d = rax_324 + r15_46
                            sub_140596860(&var_ef8, *(arg1 + 0x170), r8_180, 0, var_12e8_2.d)
                            sub_140a2cf70(&var_ef8, *(arg1 + 0x180), r15_46)
                            void*** rcx_432 = var_fb8
                            char rax_327 = (*rcx_432)[3](rcx_432, &var_ef8)
                            uint64_t rcx_433 = var_ef8
                            r13_2.b = rax_327 != 0
                            
                            if (rcx_433 != 0)
                                sub_140a74f90(rcx_433)
                        else
                            r13_2.b = 0
                        
                        sub_140f23e90(&var_248)
                        sub_1405ae100(&var_298)
                        sub_1418219b0(&var_1f8)
                        void var_b0
                        sub_141821a30(&var_b0)
                        int32_t var_b8_1 = 0
                        int64_t var_c0
                        
                        if (var_c0 != 0)
                            sub_140a74f90(var_c0)
                        
                        uint64_t var_100[0x8]
                        sub_141821e20(&var_100)
                        sub_1405ae100(&var_150)
                    else
                    label_14182e5d3:
                        r13_2.b = 0
                else
                    while (true)
                        if ((*r14_12)[2](r14_12) == 0)
                        label_14182c85c:
                            
                            if (var_1260_1.d s> 0)
                                goto label_14182c866
                        else
                            if (var_1260_1.d s<= 0)
                                if (r15_5 == 0)
                                    goto label_14182e5c2
                                
                                goto label_14182c85c
                            
                        label_14182c866:
                            int32_t** r15_6 = var_1268
                            int64_t* rcx_118 = *(*r15_6 + 0x40)
                            
                            if ((*(*rcx_118 + 8))(rcx_118) != 0)
                                int32_t* r12_2 = *r15_6
                                int64_t* rcx_119 = *(r12_2 + 0x40)
                                void* var_f08
                                (*(*rcx_119 + 0x10))(rcx_119, &var_f08)
                                void* r15_7 = var_f08
                                int32_t var_f00
                                void* rax_103 = (sx.q(var_f00) << 5) + r15_7
                                
                                if (r15_7 != rax_103)
                                    int64_t* rax_104 = &r12_2[0xc]
                                    int32_t* r15_8 = r15_7 + 0x18
                                    int128_t var_f48
                                    
                                    while (true)
                                        int64_t rdx_65 = *(r15_8 - 0x18)
                                        uint64_t r8_43 = zx.q(*r15_8)
                                        var_f48 = zx.o(0)
                                        void* rax_105 =
                                            sub_14184deb0(rax_104, rdx_65, r8_43, &var_f48)
                                        
                                        if (r12_2[4].b == 0 && rax_105 != zx.q(*r15_8))
                                            break
                                        
                                        *(r15_8 - 0x18) += *(r12_2 + 8)
                                        
                                        if (zx.q(*r15_8) != rax_105)
                                            sub_141818040(&var_548, &r15_8[-4], r15_8)
                                        
                                        int128_t zmm0_7 = var_f48
                                        *r15_8 = rax_105.d
                                        void** rax_106 = *rsi_3
                                        uint64_t rdx_67 = zx.q(*r12_2)
                                        int128_t var_b18 = zmm0_7
                                        var_f48 = zx.o(0)
                                        rax_106[1](rsi_3, rdx_67, &r15_8[-6], &var_b18, var_12e8_2)
                                        sub_1418221b0(&var_f48)
                                        r15_8 = &r15_8[8]
                                        rax_104 = &r12_2[0xc]
                                        
                                        if (&r15_8[-6] == rax_103)
                                            goto label_14182c9a6
                                    
                                    sub_1418221b0(&var_f48)
                                    void* rcx_366 = var_f08
                                    
                                    if (rcx_366 == 0)
                                        goto label_14182e5d3
                                    
                                    sub_140a74f90(rcx_366)
                                    r13_2.b = 0
                                    break
                                
                            label_14182c9a6:
                                void var_c48
                                sub_1418426d0(sub_141819fa0(&var_638, *r12_2, r12_2), &var_c48, 
                                    &r12_2[0xc])
                                sub_1418283e0(sub_141819fa0(&var_638, *r12_2, r12_2), &r12_2[0xc], 
                                    0)
                                int64_t rcx_131 = *(r12_2 + 8)
                                uint64_t rax_110 = zx.q(rcx_111 - 1)
                                uint64_t rdx_72 = zx.q(rax_110.d)
                                
                                if (rcx_131 == 0)
                                    rax_110 = 0
                                
                                int64_t r13_3 = sx.q(r12_2[0xa])
                                
                                if (rcx_131 != 0)
                                    r13_3 -= rdx_72
                                
                                void* rax_113 = sub_141819f40(&var_928, *r12_2, r12_2)
                                int128_t var_e28 = zx.o(0)
                                int64_t r15_9 = *(r12_2 + 0x20)
                                sub_1418286b0(&var_e28, rax_110 + *(r12_2 + 8), r13_3, 0)
                                sub_141828940(rax_113, &var_e28, rax_110 + r15_9, r13_3.d)
                                sub_1418221b0(&var_e28)
                                int64_t rax_115 = sx.q(r12_2[0xa]) - *(r12_2 + 0x18)
                                int64_t rcx_138 = *(r12_2 + 8)
                                int64_t r8_53
                                
                                if (r12_2[4].b == 0)
                                    r8_53 = rcx_138 - 1 + rax_115 - zx.q(rcx_111 - 1)
                                else
                                    r8_53 = rax_115 + rcx_138
                                
                                void** rax_117 = *rsi_3
                                uint64_t rdx_77 = zx.q(*r12_2)
                                int64_t var_e70 = r8_53
                                rax_117[2](rsi_3, rdx_77, r8_53)
                                
                                if (r12_2[4].b != 0)
                                    sub_141817f30(&var_7c8, r12_2, &var_e70)
                                
                                void* rax_118 = sub_14181a030(&var_5e8, *r12_2, r12_2)
                                *rax_118 -= 1
                                sub_1418468a0(&var_1268, 0, 1, 1)
                                sub_1418221b0(&var_c48)
                                void* rcx_144 = var_f08
                                
                                if (rcx_144 != 0)
                                    sub_140a74f90(rcx_144)
                        
                        uint64_t i_3 = i_6
                        int32_t var_12c0 = 0
                        uint32_t count_3
                        
                        if (i_3 s>= 0)
                            int32_t rcx_145 = 0
                            
                            do
                                void* var_10d8 = nullptr
                                int32_t j_9 = 0
                                void* rax_119 = sub_141819fa0(&var_638, rcx_145, &var_12c0)
                                int32_t r14_14 = var_12c0
                                void* rax_120 = sub_141819e10(&var_6d8, r14_14, &var_12c0)
                                void* var_1258_2
                                
                                if (rax_120 == 0)
                                    void* rax_121 = sub_1418190f0(&var_6d8, r14_14, &var_12c0)
                                    r14_14 = var_12c0
                                    var_1258_2 = rax_121
                                else
                                    var_1258_2 = rax_120 + 8
                                
                                int64_t var_1050
                                (*rsi_3)[3](rsi_3, &var_1050, zx.q(r14_14), &var_10d8, var_12e8_2)
                                int64_t var_1048
                                int64_t r15_11 = var_1048
                                
                                if (r15_11 != 0)
                                    int32_t* rax_122 = sub_141819d90(&var_928, r14_14, &var_12c0)
                                    void* r14_15
                                    
                                    if (rax_122 == 0)
                                        r15_11 = var_1048
                                        r14_15 = sub_141818fe0(&var_928, r14_14, &var_12c0)
                                    else
                                        r14_15 = &rax_122[2]
                                    
                                    int64_t rdx_86 = var_1050
                                    int128_t var_ff0 = zx.o(0)
                                    int128_t var_f78 = zx.o(0)
                                    sub_1418286b0(&var_f78, rdx_86, r15_11, 0)
                                    int64_t rdx_87 = var_1050
                                    int128_t var_f18 = zx.o(0)
                                    sub_14184deb0(rax_119, rdx_87, var_1048, &var_f18)
                                    void* r13_5 = var_10d8
                                    void* j = sx.q(j_9) * 0x30 + r13_5
                                    
                                    if (r13_5 != j)
                                        int64_t* r13_6 = r13_5 + 8
                                        int64_t* var_1288_2 = r13_6
                                        
                                        do
                                            uint64_t r8_66 = zx.q(r13_6[2].d)
                                            int64_t rdx_88 = r13_6[-1]
                                            int128_t var_f88 = zx.o(0)
                                            sub_1418286b0(&var_f88, rdx_88, r8_66, 0)
                                            sub_1418283e0(&var_c08, &r13_6[3], 0)
                                            sub_141846480(&var_f18, &r13_6[3], 0)
                                            void*** rcx_157 = var_fb8
                                            (*rcx_157)[1](rcx_157, r13_6, &r13_6[3])
                                            
                                            if ((*(*rbx_13 + 0x38))(rbx_13, r13_6) == 0)
                                                int64_t var_1210 = 0
                                                int64_t var_1208_1 = 0
                                                int32_t r12_5 = 0
                                                int64_t* k_12
                                                sub_14184e710(&k_12, r14_15, &var_f88)
                                                int64_t* k = k_12
                                                
                                                if (k != 0)
                                                    do
                                                        int64_t rax_130 = *(r14_15 + 0x10)
                                                        int64_t rax_131 = *k
                                                        uint32_t count = k[1].d
                                                        int64_t r13_7 = sx.q(r12_5)
                                                        count_3 = count
                                                        r12_5 = count + r13_7.d
                                                        var_1208_1.d = r12_5
                                                        
                                                        if (r12_5 s> var_1208_1:4.d)
                                                            sub_1405daba0(&var_1210)
                                                            count = count_3
                                                            r12_5 = var_1208_1.d
                                                        
                                                        memcpy(r13_7 + var_1210, rax_130 + rax_131, 
                                                            count)
                                                        k = k[3]
                                                    while (k != 0)
                                                    
                                                    r13_6 = var_1288_2
                                                
                                                sub_1418221b0(&k_12)
                                                void var_e68
                                                int32_t rdx_99
                                                
                                                if (*sub_141838ff0(&var_548, &var_e68, r13_6)
                                                        == 0xffffffff)
                                                    rdx_99 = r13_6[2].d
                                                else
                                                    int32_t var_10a4
                                                    sub_141838ff0(&var_548, &var_10a4, r13_6)
                                                    int64_t rax_133 = sx.q(var_10a4)
                                                    
                                                    if (rax_133.d == 0xffffffff)
                                                        rdx_99 = *0x10
                                                    else
                                                        rdx_99 = *(rax_133 * 0x1c + var_548 + 0x10)
                                                
                                                if (rdx_99 s> r12_5)
                                                    sub_140820180(&var_1210, rdx_99 - r12_5)
                                                    r12_5 = var_1208_1.d
                                                else if (rdx_99 s< r12_5)
                                                    sub_141846830(&var_1210, rdx_99, 
                                                        r12_5 - rdx_99, 1)
                                                    r12_5 = var_1208_1.d
                                                
                                                int64_t rax_138 = (*(*rbx_13 + 0x40))(rbx_13, r13_6)
                                                int64_t r8_73 = *rbx_13
                                                int16_t** rax_139 =
                                                    (*(r8_73 + 0x48))(rbx_13, r13_6, r8_73)
                                                void** r10_2 = *rdi_4
                                                int64_t var_e18 = var_1210
                                                int32_t var_e0c_1 = var_1208_1:4.d
                                                int64_t var_1208_2 = 0
                                                var_1210 = 0
                                                int32_t var_e10_1 = r12_5
                                                var_12e8_2 = rax_139
                                                r10_2[1](rdi_4, &var_e18, r13_6, rax_138, 
                                                    var_12e8_2)
                                            
                                            sub_141846480(&var_f78, &var_f88, 0)
                                            sub_1418283e0(&var_ff0, &var_f88, 0)
                                            sub_1418221b0(&var_f88)
                                            r13_6 = &r13_6[6]
                                            var_1288_2 = r13_6
                                        while (&r13_6[-1] != j)
                                        
                                        rsi_3 = rax_91
                                    
                                    void var_e08
                                    sub_14184e710(&var_e08, r14_15, &var_ff0)
                                    void var_b08
                                    sub_1418426d0(r14_15, &var_b08, &var_ff0)
                                    sub_1418221b0(&var_b08)
                                    int32_t* j_6
                                    
                                    for (int32_t* j_1 = j_6; j_1 != 0; j_1 = *(j_1 + 0x10))
                                        sub_141846830(r14_15 + 0x10, *j_1, j_1[2], 0)
                                    
                                    sub_141846480(r14_15, &var_ff0, 0)
                                    sub_1418221b0(&var_e08)
                                    void* rax_141 = sub_141819fa0(&var_688, var_12c0, &var_12c0)
                                    void* rax_142 = sub_141819fa0(&var_8d8, var_12c0, &var_12c0)
                                    sub_1418283e0(rax_141, &var_f78, 0)
                                    sub_1418283e0(rax_142, &var_f18, 0)
                                    *var_1258_2 = var_1048 + var_1050
                                    sub_1418221b0(&var_f18)
                                    sub_1418221b0(&var_f78)
                                    sub_1418221b0(&var_ff0)
                                    r14_14 = var_12c0
                                
                                int32_t j_8 = j_9
                                
                                if (j_8 != 0)
                                    int64_t* r15_15 = var_10d8 + 0x20
                                    int32_t j_2
                                    
                                    do
                                        sub_1418221b0(r15_15)
                                        r15_15 = &r15_15[6]
                                        j_2 = j_8
                                        j_8 -= 1
                                    while (j_2 != 1)
                                
                                void* rcx_192 = var_10d8
                                
                                if (rcx_192 != 0)
                                    sub_140a74f90(rcx_192)
                                
                                i_3 = i_6
                                rcx_145 = r14_14 + 1
                                var_12c0 = rcx_145
                            while (sx.q(rcx_145) s<= i_3)
                            
                            r14_12 = rax_58
                        
                        count_3 = 0
                        
                        if (i_3 s>= 0)
                            uint32_t count_4 = 0
                            
                            do
                                int64_t** rax_145 = sub_141819fa0(&var_688, count_4, &count_3)
                                int64_t** rbx_14 = rax_145
                                int64_t* rax_146 = sub_141819fa0(&var_8d8, count_3, &count_3)
                                uint32_t count_5 = count_3
                                void* rax_147 = sub_141819e10(&var_6d8, count_5, &count_3)
                                int64_t* rsi_5
                                
                                if (rax_147 == 0)
                                    int64_t* rax_148 = sub_1418190f0(&var_6d8, count_5, &count_3)
                                    count_5 = count_3
                                    rsi_5 = rax_148
                                else
                                    rsi_5 = rax_147 + 8
                                
                                void var_d68
                                int32_t* rax_149 = sub_141838f70(&var_7c8, &var_d68, count_5)
                                void* const rax_152
                                
                                if (*rax_149 != 0xffffffff)
                                    int32_t var_10a0
                                    sub_141838f70(&var_7c8, &var_10a0, count_5)
                                    int64_t rax_150 = sx.q(var_10a0)
                                    
                                    if (rax_150.d == 0xffffffff)
                                        rax_152 = nullptr
                                    else
                                        rax_152 = var_7c8 + rax_150 * 0x18
                                
                                if (*rax_149 == 0xffffffff || *rsi_5 u< *(rax_152 + 8))
                                    rax_149.b = 0
                                else
                                    rax_149.b = 1
                                
                                int64_t* j_3 = *rbx_14
                                int64_t* j_5 = j_3
                                int128_t var_dc8
                                __builtin_memset(&var_dc8, 0, 0x20)
                                char var_12d8_2
                                
                                if (rax_149.b != 0 && j_3 != 0)
                                    var_12d8_2 = 1
                                
                                if (rax_149.b == 0 || j_3 == 0 || j_3 != rbx_14[1])
                                    var_12d8_2 = 0
                                
                                void* var_1258_3 = nullptr
                                int32_t* rax_153 = sub_141819d90(&var_928, count_5, &count_3)
                                void* r14_16
                                
                                if (rax_153 == 0)
                                    void* rax_154 = sub_141818fe0(&var_928, count_5, &count_3)
                                    count_5 = count_3
                                    r14_16 = rax_154
                                else
                                    r14_16 = &rax_153[2]
                                
                                int128_t var_1010 = zx.o(0)
                                int128_t var_db8
                                
                                if (j_3 != 0)
                                    uint64_t rcx_201 = zx.q(rcx_111)
                                    void* r13_8 = var_1258_3
                                    char rax_155 = var_12d8_2
                                    uint64_t var_1178_1 = rcx_201
                                    
                                    do
                                        void* r15_16 = *j_3
                                        i_3.b = 0
                                        void* rbx_15 = j_3[1]
                                        void* var_1288_3 = r15_16
                                        
                                        while (true)
                                            if (rbx_15 u< rcx_201)
                                                if (rax_155 == 0)
                                                    break
                                                
                                                if (i_3.b != 0)
                                                    break
                                            
                                            int32_t* rsi_6 = arg1
                                            void* r8_88 = rbx_15
                                            int128_t var_1020 = zx.o(0)
                                            void* rax_156 = zx.q(rsi_6[0x46])
                                            
                                            if (rax_156 u<= rbx_15)
                                                r8_88 = rax_156
                                            
                                            sub_1418286b0(&var_1020, r15_16, r8_88, 0)
                                            void* var_1220 = nullptr
                                            int64_t var_1218_1 = 0
                                            i_3 = 0
                                            int64_t* k_9
                                            sub_14184e710(&k_9, r14_16, &var_1020)
                                            int64_t* k_16 = k_9
                                            int64_t* k_1 = k_16
                                            
                                            if (k_16 != 0)
                                                void* rsi_7 = var_1220
                                                
                                                do
                                                    int64_t rax_157 = *(r14_16 + 0x10)
                                                    uint32_t count_2 = k_1[1].d
                                                    int64_t rax_158 = *k_1
                                                    int32_t rax_159 = i_3.d
                                                    i_3 = zx.q(i_3.d + count_2)
                                                    var_1218_1.d = i_3.d
                                                    
                                                    if (i_3.d s> var_1218_1:4.d)
                                                        sub_1405daba0(&var_1220)
                                                        i_3 = zx.q(var_1218_1.d)
                                                        rsi_7 = var_1220
                                                    
                                                    memcpy(sx.q(rax_159) + rsi_7, 
                                                        rax_158 + rax_157, count_2)
                                                    k_1 = k_1[3]
                                                while (k_1 != 0)
                                                
                                                int64_t* k_2
                                                
                                                do
                                                    k_2 = k_16[3]
                                                    k_16[2] = 0
                                                    int64_t* k_10 = k_2
                                                    k_16[3] = 0
                                                    j_sub_140a74f90(k_16)
                                                    k_16 = k_2
                                                while (k_2 != 0)
                                                
                                                rdi_4 = rax_28
                                                rsi_6 = arg1
                                                k_9 = k_2
                                            
                                            int32_t rdx_129 = rsi_6[0x46]
                                            
                                            if (rdx_129 s> i_3.d)
                                                sub_140820180(&var_1220, rdx_129 - i_3.d)
                                                i_3 = zx.q(var_1218_1.d)
                                            else if (rdx_129 s< i_3.d)
                                                sub_141846830(&var_1220, rdx_129, i_3.d - rdx_129, 
                                                    1)
                                                i_3 = zx.q(var_1218_1.d)
                                            
                                            void var_f68
                                            sub_140b214c0(&var_f68)
                                            uint64_t r9_17 = zx.q(rsi_6[0x46])
                                            void* r15_17 = var_1220
                                            int64_t rcx_211 = 0
                                            
                                            if (r9_17.d != 0)
                                                void* rdx_131 = r15_17
                                                uint64_t k_15 = zx.q(r9_17.d)
                                                uint64_t k_3
                                                
                                                do
                                                    uint64_t rax_160 = zx.q(*rdx_131)
                                                    rdx_131 += 1
                                                    rcx_211 = rol.q(rcx_211, 1)
                                                        ^ *(&data_143efa090 + (rax_160 << 3))
                                                    k_3 = k_15
                                                    k_15 -= 1
                                                while (k_3 != 1)
                                            
                                            int64_t var_1070 = rcx_211
                                            int16_t* var_888
                                            __builtin_memset(&var_888, 0, 0x14)
                                            sub_140b3f690(r15_17, r9_17, &var_888)
                                            int32_t var_ddc_1 = var_1218_1:4.d
                                            void** rax_162 = *rdi_4
                                            var_12e8_2 = &var_888
                                            void* var_de8 = r15_17
                                            var_1220 = nullptr
                                            int32_t var_de0_1 = i_3.d
                                            int64_t var_1218_2 = 0
                                            rax_162[1](rdi_4, &var_de8, &var_f68, &var_1070, 
                                                var_12e8_2)
                                            sub_141818190(&var_598, &var_f68, &var_888)
                                            int64_t rcx_216 = var_1070
                                            void var_d64
                                            sub_140acafe0(
                                                sub_14181a1b0(&var_868, 
                                                    (rcx_216 u>> 0x20).d * 0x17 + rcx_216.d, 
                                                    &var_1070), 
                                                &var_d64, &var_f68, nullptr)
                                            sub_1418283e0(&var_1010, &var_1020, 0)
                                            uint64_t r8_97 = zx.q(rsi_6[0x46])
                                            int128_t var_10f8 = zx.o(0)
                                            void* rax_166 =
                                                sub_14184deb0(rax_146, var_1258_3, r8_97, &var_10f8)
                                            
                                            if (var_12d8_2 == 0 || rbx_15 != rax_166)
                                                i_3.b = 0
                                            else
                                                i_3.b = 1
                                            
                                            sub_1418283e0(&var_bc8, &var_10f8, 0)
                                            void var_ea0
                                            sub_140acafe0(&var_818, &var_ea0, &var_f68, nullptr)
                                            sub_1418283e0(
                                                sub_141819fa0(&var_4f8, count_3, &count_3), 
                                                &var_10f8, 0)
                                            void*** rcx_225 = var_fb8
                                            (*rcx_225)[1](rcx_225, &var_f68, &var_10f8)
                                            sub_1418286b0(&var_db8, var_1288_3, rax_166, 0)
                                            sub_1418283e0(&var_dc8, &var_10f8, 0)
                                            void* k_4 = var_10f8.q
                                            r15_16 = var_1288_3 + rax_166
                                            r13_8 = var_1258_3 + rax_166
                                            var_1288_3 = r15_16
                                            rbx_15 -= rax_166
                                            var_1258_3 = r13_8
                                            
                                            while (k_4 != 0)
                                                var_10f8:8.q = *(k_4 + 0x18)
                                                *(k_4 + 0x10) = 0
                                                *(k_4 + 0x18) = 0
                                                j_sub_140a74f90(k_4)
                                                k_4 = var_10f8:8.q
                                                var_10f8.q = k_4
                                            
                                            void* k_14 = var_1020.q
                                            
                                            if (k_14 != 0)
                                                void* k_5
                                                
                                                do
                                                    k_5 = *(k_14 + 0x18)
                                                    *(k_14 + 0x10) = 0
                                                    var_1020:8.q = k_5
                                                    *(k_14 + 0x18) = 0
                                                    j_sub_140a74f90(k_14)
                                                    k_14 = k_5
                                                while (k_5 != 0)
                                                r15_16 = var_1288_3
                                                rcx_201 = var_1178_1
                                                var_1020.q = k_14
                                                rax_155 = var_12d8_2
                                            else
                                                rax_155 = var_12d8_2
                                                rcx_201 = var_1178_1
                                        
                                        r13_8 += rbx_15
                                        var_1258_3 = r13_8
                                        j_3 = j_5[3]
                                        j_5 = j_3
                                    while (j_3 != 0)
                                    
                                    count_5 = count_3
                                    rbx_14 = rax_145
                                    i_3 = i_6
                                
                                sub_141846480(rbx_14, &var_db8, 0)
                                sub_141846480(rax_146, &var_dc8, 0)
                                void var_dd8
                                sub_14184e710(&var_dd8, r14_16, &var_1010)
                                void var_af0
                                sub_1418426d0(r14_16, &var_af0, &var_1010)
                                sub_1418221b0(&var_af0)
                                int32_t* j_7
                                
                                for (int32_t* j_4 = j_7; j_4 != 0; j_4 = *(j_4 + 0x10))
                                    sub_141846830(r14_16 + 0x10, *j_4, j_4[2], 0)
                                
                                sub_141846480(r14_16, &var_1010, 0)
                                sub_1418221b0(&var_dd8)
                                sub_1418221b0(&var_1010)
                                sub_1418221b0(&var_dc8)
                                sub_1418221b0(&var_db8)
                                count_4 = count_5 + 1
                                count_3 = count_4
                            while (sx.q(count_4) s<= i_3)
                            
                            rbx_13 = rax_55
                            rsi_3 = rax_91
                            r14_12 = rax_58
                        
                        char i_4
                        int128_t zmm2_5
                        int128_t zmm3_4
                        i_4, zmm2_5, zmm3_4 = sub_14184dd60(&var_1268)
                        int32_t r12_10
                        
                        if (i_4 != 0)
                            r12_10 = var_12d4_1
                        else
                            do
                                int32_t var_12bc = 0
                                char var_12d0_1 = 0
                                
                                if (i_3 s< 0)
                                    break
                                
                                int32_t r15_19 = 0
                                
                                do
                                    int32_t i_11 = r15_19 + 1
                                    int32_t i_12 = i_11
                                    int32_t* rax_171 = sub_141819d90(&var_928, i_11, &i_12)
                                    void* rax_172
                                    
                                    if (rax_171 == 0)
                                        rax_172 = sub_141818fe0(&var_928, i_11, &i_12)
                                        i_11 = i_12
                                    else
                                        rax_172 = &rax_171[2]
                                    
                                    if (*(rax_172 + 0x18) u> 0x40000000)
                                        break
                                    
                                    void* rax_173 = sub_141819fa0(&var_688, r15_19, &var_12bc)
                                    void* rax_174 = sub_141819fa0(&var_8d8, var_12bc, &var_12bc)
                                    int32_t r15_20 = var_12bc
                                    int32_t* rax_175 = sub_141819d90(&var_928, r15_20, &var_12bc)
                                    void* rdi_6
                                    
                                    if (rax_175 == 0)
                                        void* rax_176 = sub_141818fe0(&var_928, r15_20, &var_12bc)
                                        r15_20 = var_12bc
                                        rdi_6 = rax_176
                                    else
                                        rdi_6 = &rax_175[2]
                                    
                                    void* rax_177 = sub_141819e10(&var_6d8, r15_20, &var_12bc)
                                    void* r14_17
                                    
                                    if (rax_177 == 0)
                                        void* rax_178 = sub_1418190f0(&var_6d8, r15_20, &var_12bc)
                                        r15_20 = var_12bc
                                        r14_17 = rax_178
                                    else
                                        r14_17 = rax_177 + 8
                                    
                                    void var_e9c
                                    int32_t* rax_179 = sub_141838f70(&var_7c8, &var_e9c, r15_20)
                                    void* const rax_182
                                    
                                    if (*rax_179 != 0xffffffff)
                                        int32_t var_1078
                                        sub_141838f70(&var_7c8, &var_1078, r15_20)
                                        int64_t rax_180 = sx.q(var_1078)
                                        
                                        if (rax_180.d == 0xffffffff)
                                            rax_182 = nullptr
                                        else
                                            rax_182 = var_7c8 + rax_180 * 0x18
                                    
                                    if (*rax_179 == 0xffffffff || *r14_17 u< *(rax_182 + 8))
                                        i_3.b = 0
                                    else
                                        i_3.b = 1
                                    
                                    char var_12d8_3 = i_3.b
                                    int128_t var_10e8 = zx.o(0)
                                    int128_t var_11b8 = zx.o(0)
                                    void* rax_184 = sub_14184deb0(rax_174, 0, rcx_5, &var_10e8)
                                    void* r13_11 = rax_184
                                    int64_t r14_18 = 0
                                    int64_t var_1290_5 = 0
                                    void* k_6 = *rax_174
                                    
                                    if (k_6 != 0)
                                        do
                                            r14_18 += *(k_6 + 8)
                                            k_6 = *(k_6 + 0x18)
                                        while (k_6 != 0)
                                        
                                        var_1290_5 = r14_18
                                    
                                    if (i_3.b != 0 || r14_18 u> zx.q(rcx_111) + rcx_5)
                                        if (r13_11 == rcx_5)
                                        label_14182d972:
                                            sub_14184deb0(rax_173, 0, rcx_5, &var_11b8)
                                            var_12d0_1 = 1
                                            void* rax_188 = sub_141819e10(&var_5e8, i_11, &i_12)
                                            void* rax_189
                                            
                                            if (rax_188 == 0)
                                                rax_189 = sub_1418190f0(&var_5e8, i_11, &i_12)
                                                i_11 = i_12
                                            else
                                                rax_189 = rax_188 + 8
                                            
                                            *rax_189 += 1
                                            uint64_t i_10 = sx.q(i_11)
                                            
                                            if (i_6 s>= i_10)
                                                i_10 = i_6
                                            
                                            i_6 = i_10
                                            *rax_15
                                            *rax_15 = i_10
                                            int32_t i_13 = i_12
                                            void* rax_191 = sub_141819e10(&var_458, i_13, &i_12)
                                            void* rax_192
                                            
                                            if (rax_191 == 0)
                                                rax_192 = sub_1418190f0(&var_458, i_13, &i_12)
                                            else
                                                rax_192 = rax_191 + 8
                                            
                                            int64_t var_1200 = 0
                                            int32_t r15_21 = 0
                                            int32_t var_11f4_1 = 0
                                            int32_t rsi_10 = 0
                                            int64_t* k_13
                                            sub_14184e710(&k_13, rdi_6, &var_11b8)
                                            int64_t* k_7 = k_13
                                            
                                            if (k_7 != 0)
                                                int64_t rsi_11 = var_1200
                                                int32_t r14_19 = 0
                                                
                                                do
                                                    int64_t rax_193 = *(rdi_6 + 0x10)
                                                    int64_t rax_194 = *k_7
                                                    uint32_t count_1 = k_7[1].d
                                                    int64_t r13_12 = sx.q(r15_21)
                                                    r15_21 = count_1 + r13_12.d
                                                    
                                                    if (r15_21 s> r14_19)
                                                        sub_1405daba0(&var_1200)
                                                        r14_19 = var_11f4_1
                                                        rsi_11 = var_1200
                                                    
                                                    memcpy(rsi_11 + r13_12, rax_194 + rax_193, 
                                                        count_1)
                                                    k_7 = k_7[3]
                                                while (k_7 != 0)
                                                
                                                r13_11 = rax_184
                                                rsi_10 = r14_19
                                                r14_18 = var_1290_5
                                            
                                            sub_1418221b0(&k_13)
                                            char rax_196
                                            
                                            if (var_12d8_3 == 0 || r14_18 u> r13_11)
                                                rax_196 = 0
                                            else
                                                rax_196 = 1
                                            
                                            uint64_t r13_13 = 0
                                            
                                            if (rax_196 != 0)
                                                r13_13 = zx.q(rcx_111 - 1)
                                            
                                            int32_t r14_20 = r15_21 + r13_13.d
                                            int32_t var_12d4_2 = r14_20
                                            
                                            if (r14_20 s> rsi_10)
                                                sub_1405daba0(&var_1200)
                                                rsi_10 = var_11f4_1
                                                var_12d4_2 = r14_20
                                            
                                            int64_t r12_9 = var_1200
                                            memset(sx.q(r15_21) + r12_9, 0, sx.q(r13_13.d))
                                            void var_bf8
                                            sub_1418426d0(sub_141819fa0(&var_728, i_12, &i_12), 
                                                &var_bf8, &var_10e8)
                                            void var_c28
                                            sub_1418426d0(sub_141819fa0(&var_778, i_12, &i_12), 
                                                &var_c28, &var_11b8)
                                            sub_1418283e0(sub_141819fa0(&var_728, i_12, &i_12), 
                                                &var_10e8, 0)
                                            sub_1418283e0(sub_141819fa0(&var_778, i_12, &i_12), 
                                                &var_11b8, 0)
                                            
                                            if (rax_196 != 0)
                                                char var_12a0 = 1
                                                sub_141817fc0(&var_4a8, &i_12, &var_12a0)
                                            
                                            int32_t* rax_202 = j_sub_140a82f30(0x48)
                                            int32_t* r14_21 = rax_202
                                            
                                            if (rax_202 == 0)
                                                r14_21 = rax_202
                                            else
                                                int128_t var_f58 = zx.o(0)
                                                sub_1418283e0(&var_f58, &var_10e8, 1)
                                                var_1200 = 0
                                                int64_t r8_131 = r12_9
                                                r12_9 = 0
                                                int32_t var_11f8_2
                                                var_11f8_2.q = 0
                                                int64_t rcx_278 = *rax_192
                                                *r14_21 = i_12
                                                *(r14_21 + 8) = rcx_278
                                                r14_21[4].b = rax_196
                                                *(r14_21 + 0x18) = r13_13
                                                *(r14_21 + 0x20) = r8_131
                                                r14_21[0xa] = var_12d4_2
                                                int64_t rax_205 = var_f58.q
                                                r14_21[0xb] = rsi_10
                                                *(r14_21 + 0x30) = rax_205
                                                *(r14_21 + 0x38) = var_f58:8.q
                                                var_f58 = zx.o(0)
                                                void*** rax_207
                                                rax_207, zmm2_5, zmm3_4 = sub_14187c7a0(&var_1238, 
                                                    &r14_21[8], rbx_13, var_1250_1, zmm2_5, zmm3_4)
                                                *(r14_21 + 0x40) = rax_207
                                                sub_1418221b0(&var_f58)
                                            
                                            int64_t rsi_12 = sx.q(var_1260_1.d)
                                            int32_t rax_208 = (rsi_12 + 1).d
                                            var_1260_1.d = rax_208
                                            
                                            if (rax_208 s> var_1260_1:4.d)
                                                sub_1405a4d70(&var_1268)
                                            
                                            uint64_t rcx_282 = zx.q(rcx_111 - 1)
                                            var_1268[rsi_12] = r14_21
                                            *rax_192 += rcx_5 - rcx_282
                                            sub_1418221b0(&var_10e8)
                                            sub_1418221b0(&var_11b8)
                                            int64_t r15_23 = rcx_5
                                            
                                            if (rax_196 == 0)
                                                r15_23 = rcx_5 - zx.q(rcx_282.d)
                                            
                                            sub_14184deb0(rax_174, 0, r15_23, &var_10e8)
                                            sub_14184deb0(rax_173, 0, r15_23, &var_11b8)
                                            sub_141846480(rax_174, &var_10e8, 0)
                                            sub_141846480(rax_173, &var_11b8, 0)
                                            void var_da8
                                            sub_14184e710(&var_da8, rdi_6, &var_11b8)
                                            void var_b58
                                            sub_1418426d0(rdi_6, &var_b58, &var_11b8)
                                            sub_1418221b0(&var_b58)
                                            int32_t* k_11
                                            
                                            for (int32_t* k_8 = k_11; k_8 != 0; k_8 = *(k_8 + 0x10))
                                                sub_141846830(rdi_6 + 0x10, *k_8, k_8[2], 0)
                                            
                                            sub_141846480(rdi_6, &var_11b8, 0)
                                            sub_1418221b0(&var_da8)
                                            sub_1418221b0(&var_c28)
                                            sub_1418221b0(&var_bf8)
                                            
                                            if (r12_9 != 0)
                                                sub_140a74f90(r12_9)
                                            
                                            r15_20 = var_12bc
                                        else if (i_3.b != 0 && r13_11 != 0)
                                            goto label_14182d972
                                    
                                    sub_1418221b0(&var_11b8)
                                    sub_1418221b0(&var_10e8)
                                    i_3 = i_6
                                    r15_19 = r15_20 + 1
                                    var_12bc = r15_19
                                while (sx.q(r15_19) s<= i_3)
                                
                                if (var_12d0_1 == 0)
                                    break
                                
                                i_4, zmm2_5, zmm3_4 = sub_14184dd60(&var_1268)
                            while (i_4 == 0)
                            
                            r12_10 = var_12a8_1.d
                            rdi_4 = rax_28
                            rsi_3 = rax_91
                            r14_12 = rax_58
                            var_12d4_1 = r12_10
                        
                        void* rax_215
                        double zmm2_6[0x2]
                        int128_t zmm3_5
                        rax_215, zmm2_6, zmm3_5, zmm7_1 = sub_14184dd60(&var_1268)
                        int64_t r12_16
                        
                        if (rax_215.b != 0)
                            r12_16 = 0
                        else
                            int32_t var_11a4 = 0
                            int32_t* rax_216 = sub_141819d90(&var_928, 0, &var_11a4)
                            
                            if (rax_216 == 0)
                                rax_215 = sub_141818fe0(&var_928, 0, &var_11a4)
                            else
                                rax_215 = &rax_216[2]
                            
                            if (*(rax_215 + 0x18) u> 0x40000000)
                                r12_16 = 0
                            else if ((*r14_12)[2](r14_12).b != 0)
                                r12_16 = 0
                            else
                                if (r12_10 s> 0)
                                    uint64_t rcx_306 = zx.q(rcx_111 - 1)
                                    int64_t r15_25 = sx.q(r12_10) - rcx_306
                                    int64_t rcx_307 = var_12b0
                                    memcpy(rcx_307, r15_25 + rcx_307, rcx_306.d)
                                    
                                    if (rcx_111 - 1 s> r12_10)
                                        int64_t rax_218 = sx.q(var_12d4_1)
                                        var_12d4_1 = rcx_111 - 1
                                        var_12a8_1.d = rcx_111 - 1
                                        
                                        if (rcx_111 - 1 s> var_12a8_1:4.d)
                                            sub_1405daba0(&var_12b0)
                                            var_12d4_1 = var_12a8_1.d
                                        
                                        memset(rax_218 + var_12b0, 0, sx.q(rcx_111 - 1 - rax_218.d))
                                        r12_10 = var_12d4_1
                                    else if (rcx_111 - 1 s< r12_10)
                                        sub_141846830(&var_12b0, rcx_111 - 1, 
                                            r12_10 - (rcx_111 - 1), 0)
                                        r12_10 = var_12a8_1.d
                                        var_12d4_1 = r12_10
                                    
                                    var_1100_1 += r15_25
                                
                                int32_t r13_15 = rcx_5.d
                                int64_t r15_26 = sx.q(r12_10)
                                
                                if (r13_15 s> r15_26.d)
                                    r12_10 = r13_15
                                    var_12d4_1 = r13_15
                                    var_12a8_1.d = r13_15
                                    
                                    if (r13_15 s> var_12a8_1:4.d)
                                        sub_1405daba0(&var_12b0)
                                        r12_10 = var_12a8_1.d
                                        var_12d4_1 = r12_10
                                else if (r13_15 s< r15_26.d)
                                    sub_141846830(&var_12b0, r13_15, r15_26.d - r13_15, 1)
                                    r12_10 = var_12a8_1.d
                                    var_12d4_1 = r12_10
                                
                                rax_215 = (*r14_12)[1](r14_12, r15_26 + var_12b0, 
                                    zx.q(r13_15 - r15_26.d), 1, var_12e8_2)
                                int32_t r15_27 = r15_26.d + rax_215.d
                                
                                if (r15_27 s> r12_10)
                                    int32_t r15_28 = r15_27 - r12_10
                                    int32_t rax_222 = r12_10 + r15_28
                                    var_12d4_1 = rax_222
                                    var_12a8_1.d = rax_222
                                    
                                    if (rax_222 s> var_12a8_1:4.d)
                                        sub_1405daba0(&var_12b0)
                                        var_12d4_1 = var_12a8_1.d
                                    
                                    memset(sx.q(r12_10) + var_12b0, 0, sx.q(r15_28))
                                    r12_10 = var_12d4_1
                                else if (r15_27 s< r12_10)
                                    sub_141846830(&var_12b0, r15_27, r12_10 - r15_27, 0)
                                    r12_10 = var_12a8_1.d
                                    var_12d4_1 = r12_10
                                
                                if (rax_215.d == 0)
                                    r12_16 = 0
                                else
                                    uint64_t r13_17 = 0
                                    
                                    if ((*r14_12)[2](r14_12) != 0)
                                        r13_17 = zx.q(rcx_111 - 1)
                                    
                                    uint32_t r12_15 = r12_10 + r13_17.d
                                    var_12a8_1.d = r12_15
                                    
                                    if (r12_15 s> var_12a8_1:4.d)
                                        sub_1405daba0(&var_12b0)
                                        r12_15 = var_12a8_1.d
                                    
                                    memset(sx.q(var_12d4_1) + var_12b0, 0, sx.q(r13_17.d))
                                    char rax_227 = (*r14_12)[2](r14_12)
                                    uint128_t var_10c8 = zx.o(0)
                                    sub_1418286b0(&var_10c8, var_1100_1, sx.q(r12_15) - r13_17, 0)
                                    int32_t var_109c = 0
                                    void var_bd8
                                    sub_1418426d0(sub_141819fa0(&var_728, 0, &var_109c), &var_bd8, 
                                        &var_10c8)
                                    int32_t var_1088 = 0
                                    void var_be8
                                    sub_1418426d0(sub_141819fa0(&var_778, 0, &var_1088), &var_be8, 
                                        &var_10c8)
                                    int32_t var_10a8 = 0
                                    sub_1418283e0(sub_141819fa0(&var_728, 0, &var_10a8), &var_10c8, 
                                        0)
                                    int32_t var_1068 = 0
                                    sub_1418283e0(sub_141819fa0(&var_778, 0, &var_1068), &var_10c8, 
                                        0)
                                    
                                    if (rax_227 != 0)
                                        char var_12c3 = 1
                                        int32_t var_1090 = 0
                                        sub_141817fc0(&var_4a8, &var_1090, &var_12c3)
                                    
                                    int32_t* rax_232 = j_sub_140a82f30(0x48)
                                    int32_t* r15_31 = rax_232
                                    
                                    if (rax_232 == 0)
                                        r12_16 = 0
                                        r15_31 = nullptr
                                    else
                                        uint128_t zmm6_3 = var_10c8
                                        int64_t rdx_209 = var_12b0
                                        int64_t var_1038 = 0
                                        var_10c8 = zx.o(0)
                                        var_12e8_2.d = 0
                                        sub_141817b70(&var_1038, rdx_209, r12_15, 0, var_12e8_2.d)
                                        char rax_234 = (*r14_12)[2](r14_12)
                                        r12_16 = 0
                                        *r15_31 = 0
                                        *(r15_31 + 8) = var_1100_1
                                        r15_31[4].b = rax_234
                                        int64_t rax_235 = var_1038
                                        *(r15_31 + 0x18) = r13_17
                                        *(r15_31 + 0x20) = rax_235
                                        int32_t var_1030
                                        r15_31[0xa] = var_1030
                                        int32_t var_102c
                                        r15_31[0xb] = var_102c
                                        *(r15_31 + 0x30) = zmm6_3.q
                                        *(r15_31 + 0x38) = _mm_bsrli_si128(zmm6_3, 8).q
                                        var_1038 = 0
                                        var_1030.q = 0
                                        int128_t var_b48 = zx.o(0)
                                        *(r15_31 + 0x40) = sub_14187c7a0(&var_1238, &r15_31[8], 
                                            rbx_13, var_1250_1, zmm2_6, zmm3_5)
                                        sub_1418221b0(&var_b48)
                                    
                                    int64_t r13_18 = sx.q(var_1260_1.d)
                                    int32_t rax_239 = (r13_18 + 1).d
                                    var_1260_1.d = rax_239
                                    
                                    if (rax_239 s> var_1260_1:4.d)
                                        sub_1405a4d70(&var_1268)
                                    
                                    int32_t** rax_240 = var_1268
                                    int32_t var_11a0 = 0
                                    rax_240[r13_18] = r15_31
                                    void* rax_241 = sub_141819e10(&var_5e8, 0, &var_11a0)
                                    void* rax_242
                                    
                                    if (rax_241 == 0)
                                        rax_242 = sub_1418190f0(&var_5e8, 0, &var_11a0)
                                    else
                                        rax_242 = rax_241 + 8
                                    
                                    *rax_242 += 1
                                    sub_1418221b0(&var_be8)
                                    sub_1418221b0(&var_bd8)
                                    sub_1418221b0(&var_10c8)
                        
                        char var_12d0_2 = 0
                        int32_t var_9f0[0x8]
                        int64_t var_8c8
                        int32_t* rax_243 = sub_1406c8970(&var_9f0, &var_8c8, 0)
                        int32_t var_8b0
                        int32_t var_a4c_1 = var_8b0
                        zmm2_6 = *(rax_243 + 0x10)
                        int128_t var_11e0_2 = *rax_243
                        double var_11d0_2[0x2] = zmm2_6
                        zmm2_6 = _mm_unpackhi_pd(zmm2_6, zmm2_6[0])
                        int128_t var_d60 = (&var_8d8).o
                        int128_t var_d50_1 = var_11e0_2
                        int64_t var_d40_1 = zmm2_6.q
                        
                        while (true)
                            int64_t rcx_350 = sx.q(var_d50_1:0xc.d)
                            int64_t* rax_244 = var_d60.q
                            
                            if (rcx_350.d == ((0xffffffff << (var_8b0.b & 0x1f)).q u>> 0x20).d
                                    && var_d50_1.q == &var_8c8 && rax_244 == &var_8d8)
                                break
                            
                            if (*((rcx_350 << 5) + *rax_244 + 8) != 0)
                                var_12d0_2 = 1
                                break
                            
                            var_d50_1:8.d &= not.d(var_d60:0xc.d)
                            sub_14059bdd0(&var_d60:8)
                        
                        int64_t r15_34 = 0
                        int32_t var_9d0[0x8]
                        int64_t var_918
                        int32_t* rax_248 = sub_1406c8970(&var_9d0, &var_918, 0)
                        int32_t var_900
                        int32_t var_acc_1 = var_900
                        zmm2_6 = *(rax_248 + 0x10)
                        int128_t var_11e0_3 = *rax_248
                        double var_11d0_3[0x2] = zmm2_6
                        zmm2_6 = _mm_unpackhi_pd(zmm2_6, zmm2_6[0])
                        int128_t var_d38 = (&var_928).o
                        int128_t var_d28_1 = var_11e0_3
                        int64_t var_d18_1 = zmm2_6.q
                        
                        while (true)
                            int64_t rax_249 = sx.q(var_d28_1:0xc.d)
                            int64_t rdx_216 = var_d38.q
                            
                            if (rax_249.d == ((0xffffffff << (var_900.b & 0x1f)).q u>> 0x20).d
                                    && var_d28_1.q == &var_918 && rdx_216 == &var_928)
                                break
                            
                            void* rcx_358 = rax_249 * 0x30 + *rdx_216
                            r12_16 += sx.q(*(rcx_358 + 0x20))
                            r15_34 += zx.q(*(rcx_358 + 0x24))
                            var_d28_1:8.d &= not.d(var_d38:0xc.d)
                            sub_14059bdd0(&var_d38:8)
                        
                        *rax_21
                        *rax_21 = r15_34
                        *rax_24
                        *rax_24 = r12_16
                        *rax_18
                        *rax_18 = sx.q(var_1260_1.d)
                        
                        if (var_12c4 != 0)
                            sub_140b19e60()
                            void* rdx_217 = data_1439a8bd0
                            (*(rdx_217 + 0x48))(&data_1439a8bd0, rdx_217)
                        
                        int64_t performanceCount_4
                        QueryPerformanceCounter(&performanceCount_4)
                        r15_36 = var_1250_1
                        *rax_12 = performanceCount_4 - performanceCount
                        (*r15_36)[2](r15_36, var_1298)
                        sub_140b73230(zmm7_1)
                        
                        if ((*r14_12)[8](r14_12) != 0)
                            goto label_14182e5cc
                        
                        r15_5 = var_12d0_2
                        var_12d4_1 = var_12a8_1.d
                int32_t i_8 = var_1260_1.d
                int32_t** r15_47 = var_1268
                
                if (i_8 != 0)
                    int32_t i_5
                    
                    do
                        sub_1418277c0(r15_47, *r15_47)
                        r15_47 = &r15_47[1]
                        i_5 = i_8
                        i_8 -= 1
                    while (i_5 != 1)
                
                int32_t** r15_48 = var_1268
                
                if (r15_48 != 0)
                    sub_140a74f90(r15_48)
                
                int64_t rcx_443 = var_12b0
                
                if (rcx_443 != 0)
                    sub_140a74f90(rcx_443)
                
                sub_1405ae180(&var_4a8)
                int32_t var_4b0_2 = 0
                
                if (var_4b8_1 != 0)
                    sub_140a74f90(var_4b8_1)
                
                sub_141821c40(&var_4f8)
                int32_t var_730_2 = 0
                
                if (var_738_1 != 0)
                    sub_140a74f90(var_738_1)
                
                sub_141821c40(&var_778)
                int32_t var_6e0_2 = 0
                
                if (var_6e8_1 != 0)
                    sub_140a74f90(var_6e8_1)
                
                sub_141821c40(&var_728)
                int32_t var_7d0_2 = 0
                
                if (var_7d8_1 != 0)
                    sub_140a74f90(var_7d8_1)
                
                sub_14094b3a0(&var_818)
                sub_1418221b0(&var_bc8)
                sub_1418221b0(&var_c08)
                int64_t* var_fb0
                
                if (var_fb0 != 0)
                    var_fb0[1].d -= 1
                    
                    if (var_fb0[1].d == 1)
                        (**var_fb0)(var_fb0)
                        int32_t temp4_1 = *(var_fb0 + 0xc)
                        *(var_fb0 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*var_fb0 + 8))(var_fb0, 1)
                
                sub_140f23e90(&var_548)
                int32_t var_8e0_2 = 0
                
                if (var_8e8_1 != 0)
                    sub_140a74f90(var_8e8_1)
                
                sub_141821ab0(&var_928)
                int32_t var_890_2 = 0
                
                if (var_898_1 != 0)
                    sub_140a74f90(var_898_1)
                
                sub_141821c40(&var_8d8)
                int32_t var_640_2 = 0
                
                if (var_648_1 != 0)
                    sub_140a74f90(var_648_1)
                
                sub_141821c40(&var_688)
                sub_1405ae080(&var_7c8)
                sub_1405ae080(&var_6d8)
                sub_1405ae080(&var_458)
                int32_t var_5f0_2 = 0
                
                if (var_5f8_1 != 0)
                    sub_140a74f90(var_5f8_1)
                
                sub_141821c40(&var_638)
                sub_1405ae080(&var_5e8)
                sub_141821a30(&var_598)
                int32_t var_820_2 = 0
                
                if (var_828_1 != 0)
                    sub_140a74f90(var_828_1)
                
                sub_141821e80(&var_868)
                
                if (rsi_3 != 0)
                    (**rsi_3)(rsi_3, 1)
                
                int32_t* rcx_474 = var_1238
                
                if (rcx_474 != 0)
                    sub_140a74f90(rcx_474)
        
        sub_140597000(&var_d78)
        (**r14_12)(r14_12, 1)
        Set<unsigned long,class pdb_internal::HashClass<unsigned long,0> >::~Set<unsigned long,class pdb_internal::HashClass<unsigned long,0> >(
            &var_b88)
        
        if (rbx_13 != 0)
            (**rbx_13)(rbx_13, 1)
    else
        void*** var_e38
        sub_14187cab0(&var_e38, __crt_deferred_errno_cache::get(&data_143db7b00))
        void*** rcx_64 = var_e38
        int64_t* var_e30
        void var_2f0
        
        if ((**rcx_64)(rcx_64, &arg1[0x20], &var_2f0) != 0)
            if (var_e30 != 0)
                var_e30[1].d -= 1
                
                if (var_e30[1].d == 1)
                    (**var_e30)(var_e30)
                    int32_t rax_49 = *(var_e30 + 0xc)
                    *(var_e30 + 0xc) -= 1
                    
                    if (rax_49 == 1)
                        (*(*var_e30 + 8))(var_e30, 1)
            
            goto label_14182bbd9
        
        if (var_e30 != 0)
            var_e30[1].d -= 1
            
            if (var_e30[1].d == 1)
                (**var_e30)(var_e30)
                int32_t r12_1 = *(var_e30 + 0xc)
                *(var_e30 + 0xc) -= 1
                
                if (r12_1 == 1)
                    (*(*var_e30 + 8))(var_e30, zx.q(r12_1))
        
        r13_2.b = 0
    
    sub_141822b50(&var_408)
    
    if (rdi_4 != 0)
        (**rdi_4)(rdi_4, 1)
    
    if (var_1080_1 != 0)
        (**var_1080_1)(var_1080_1, 1)
    
    if (var_1108_1 != 0)
        int64_t r8_182 = *var_1108_1
        (*r8_182)(var_1108_1, 1, r8_182)
    
    void** r8_183 = *var_1250_1
    (*r8_183)(var_1250_1, 1, r8_183)
    result = zx.d(r13_2.b)

__security_check_cookie(rax_1 ^ &var_1308)
return result
