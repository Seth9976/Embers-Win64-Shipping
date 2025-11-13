// 函数: sub_1411cd390
// 地址: 0x1411cd390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
bool cond:0 = data_1439b6158 s> 0
int32_t* rbx = arg4
int32_t r13 = arg3[1].d
int32_t var_3f8 = r13

if (r13 != 0)
    void** result_3 = nullptr
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    int32_t r9 = 0
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    int32_t r8 = 0
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    int32_t rcx = 0
    uint128_t zmm11
    uint128_t var_98_1 = zmm11
    *arg9 = 0
    uint64_t* rdi_1 = *arg3
    void** result_1 = nullptr
    int128_t zmm6
    zmm6.d = float.s(zx.q(arg7))
    int64_t rax_1 = sx.q(arg3[1].d)
    void** result_4 = nullptr
    int32_t var_440_1 = 0
    int32_t var_444_1 = 0
    zmm6.d = zmm6.d f* arg6
    int32_t var_3d0_1 = zmm6.d
    void* r12_2 = rax_1 * 0xe0 + rdi_1
    int32_t var_438
    int32_t var_3e8
    
    if (rdi_1 != r12_2)
        void* rbx_1 = rdi_1 + 0xb4
        int128_t zmm12
        int128_t var_a8_1 = zmm12
        uint128_t zmm0
        zmm0.d = 1f f/ zmm6.d
        float zmm13[0x4]
        float var_b8_1[0x4] = zmm13
        int32_t var_3f4_1 = zmm0.d
        
        do
            zmm13 = data_1439b6118
            
            if (zmm13[0] >= 0.00999999978f)
                zmm13 = _mm_min_ss(zmm13[0], 0x41200000)
            else
                zmm13 = 0x3c23d70a
            
            uint128_t zmm2 = *(rbx_1 - 0xc)
            zmm6 = *(rbx_1 - 0x14)
            zmm0.d = zmm2.d f- *rbx_1
            zmm9 = *(rbx_1 - 0x10)
            zmm7.d = zmm2.d f+ *rbx_1
            int128_t zmm3
            zmm3.d = zmm6.d f- *(rbx_1 - 8)
            zmm0.d = zmm0.d f- zmm2.d
            zmm7.d = zmm7.d f- zmm2.d
            zmm3.d = zmm3.d f- zmm6.d
            zmm0.d = zmm0.d f* zmm13[0]
            zmm7.d = zmm7.d f* zmm13[0]
            zmm10.d = zmm0.d f+ zmm2.d
            zmm3.d = zmm3.d f* zmm13[0]
            zmm7.d = zmm7.d f- zmm0.d
            float zmm4 = (zmm9.d f- *(rbx_1 - 4) f- zmm9.d) * zmm13[0]
            float zmm1 = (zmm6.d f+ *(rbx_1 - 8) f- zmm6.d) * zmm13[0] f- zmm3.d
            zmm2.d = zmm9.d f+ *(rbx_1 - 4)
            zmm11.d = zmm9.d f+ zmm4
            int32_t var_430_1 = zmm10.d
            zmm12 = zmm3
            zmm3 = var_3f4_1
            zmm12.d = zmm12.d f+ zmm6.d
            zmm6 = var_3d0_1
            zmm1 = zmm1 f* zmm3.d
            zmm2.d = zmm2.d f- zmm9.d
            int32_t var_434_1 = zmm11.d
            var_438 = zmm12.d
            zmm2.d = zmm2.d f* zmm13[0]
            zmm2.d = zmm2.d f- zmm4
            zmm0.d = -0.5f - (zmm1 + zmm1)
            zmm1 = zmm3.d f* zmm7.d
            zmm2.d = zmm2.d f* zmm3.d
            zmm2.d = zmm2.d f+ zmm2.d
            int32_t r15_3 = neg.d(int.d(zmm0.d) s>> 1)
            zmm0.d = -0.5f f- zmm2.d
            int32_t rax_2 = int.d(zmm0.d)
            zmm0.d = -0.5f - (zmm1 + zmm1)
            int32_t rax_4 = neg.d(rax_2 s>> 1)
            int32_t rcx_1 = int.d(zmm0.d)
            zmm0.d = float.s(r15_3)
            int32_t rcx_3 = neg.d(rcx_1 s>> 1)
            zmm2.d = float.s(rcx_3)
            zmm0.d = zmm0.d f* zmm6.d
            zmm2.d = zmm2.d f* zmm6.d
            zmm0.d = zmm0.d f+ zmm12.d
            zmm2.d = zmm2.d f+ zmm10.d
            var_3e8 = zmm0.d
            int32_t var_3e0_1 = zmm2.d
            float var_3e4_1 = float.s(rax_4) f* zmm6.d f+ zmm11.d
            int64_t r13_1 = sx.q(r9)
            r9 = (r13_1 + 1).d
            
            if (r9 s> r8)
                sub_1411ec700(&result_4)
                r8 = var_444_1
                result_3 = result_4
            
            zmm0 = zx.o(var_438.q)
            uint64_t* rdx_4 = &result_3[r13_1 * 6]
            *(rdx_4 + 0x2c) = *(rbx_1 + 0x18)
            *rdx_4 = zmm0.q
            rdx_4[1].d = var_430_1
            *(rdx_4 + 0xc) = var_3e8.q
            *(rdx_4 + 0x14) = var_3e0_1
            rdx_4[4].d = rcx_3
            rdx_4[3].d = r15_3
            *(rdx_4 + 0x1c) = rax_4
            int32_t rcx_6 = rcx_3 * rax_4 * r15_3
            *(rdx_4 + 0x24) = rcx_6
            rdx_4[5].d = *arg9
            *arg9 += rcx_6
            *rdi_1 = *rdx_4
            rdi_1[1].d = rdx_4[1].d
            rdi_1 = &rdi_1[0x1c]
            *(rbx_1 - 0xa8) = *(rdx_4 + 0xc)
            *(rbx_1 - 0xa0) = *(rdx_4 + 0x14)
            *(rbx_1 - 0x9c) = rdx_4[3].d
            *(rbx_1 - 0x98) = *(rdx_4 + 0x1c)
            *(rbx_1 - 0x94) = rdx_4[4].d
            rbx_1 += 0xe0
        while (rdi_1 != r12_2)
        
        rcx = *arg9
        rbx = arg4
        r13 = var_3f8
        result_1 = result_3
        var_440_1 = r9
    
    if (cond:0 != 0)
        int32_t rax_15 = data_1439b615c
        rcx = rax_15 * rax_15 * rax_15
        *arg9 = rcx
    
    result_4:4.d = rcx
    int64_t var_448_1 = 0x209
    result_4.d = 4
    void** result_14 = sub_14081d830(0x48, *(arg1 + 8), 1, 0)
    void** result_20 = result_14
    void** result_9 = result_14
    
    if (result_14 == 0)
        result_9 = nullptr
        result_20 = nullptr
    else
        int128_t zmm0_1 = result_4.o
        result_9[2] = 0
        result_9[1] = u"PageIndexBuffer"
        result_9[3].b = 0
        *(result_9 + 0x1c) = 0
        result_9[4] = 0
        result_9[5].w = 0x200
        *result_9 = &data_142f285d0
        *(result_9 + 0x30) = zmm0_1
        result_9[8] = 0
    
    int64_t var_448_2 = 0x209
    result_4.d = 4
    result_4:4.d = *arg9
    void*** rax_17 = sub_14081d830(0x48, *(arg1 + 8), 1, 0)
    void*** var_390_1 = rax_17
    
    if (rax_17 == 0)
        var_390_1 = nullptr
    else
        int128_t zmm0_2 = result_4.o
        rax_17[2] = 0
        rax_17[1] = u"PageIndexCoordBuffer"
        rax_17[3].b = 0
        *(rax_17 + 0x1c) = 0
        rax_17[4] = 0
        rax_17[5].w = 0x200
        *rax_17 = &data_142f285d0
        *(rax_17 + 0x30) = zmm0_2
        rax_17[8] = 0
    
    int64_t var_448_3 = 0x209
    result_4.d = 4
    result_4:4.d = 2
    void** result_15 = sub_14081d830(0x48, *(arg1 + 8), 1, 0)
    void** result_19 = result_15
    void** result_11 = result_15
    
    if (result_15 == 0)
        result_11 = nullptr
        result_19 = nullptr
    else
        int128_t zmm0_3 = result_4.o
        result_11[1] = u"PageIndexGlobalCounter"
        result_11[2] = 0
        result_11[3].b = 0
        *(result_11 + 0x1c) = 0
        result_11[4] = 0
        result_11[5].w = 0x200
        *result_11 = &data_142f285d0
        *(result_11 + 0x30) = zmm0_3
        result_11[8] = 0
    
    int32_t var_444_2 = 2
    var_448_3.d = 0x209
    result_4.d = 0x20
    result_4:4.d = r13
    void*** rax_18 = sub_14081d830(0x48, *(arg1 + 8), 1, 0)
    void*** var_388_1 = rax_18
    
    if (rax_18 == 0)
        var_388_1 = nullptr
    else
        int128_t zmm0_4 = result_4.o
        rax_18[1] = u"VirtualVoxelNodeDescBuffer"
        rax_18[2] = 0
        rax_18[3].b = 0
        *(rax_18 + 0x1c) = 0
        rax_18[4] = 0
        rax_18[5].w = 0x200
        *rax_18 = &data_142f285d0
        *(rax_18 + 0x30) = zmm0_4
        rax_18[8] = 0
    
    int64_t var_448_4 = 0x309
    result_4.d = 0xc
    result_4:4.d = r13
    void*** rax_19 = sub_14081d830(0x48, *(arg1 + 8), 1, 0)
    void*** var_328_1 = rax_19
    void*** r13_2 = rax_19
    
    if (rax_19 == 0)
        r13_2 = nullptr
        var_328_1 = nullptr
    else
        int128_t zmm0_5 = result_4.o
        r13_2[2] = 0
        r13_2[1] = u"VirtualVoxelIndirectArgsBuffer"
        r13_2[3].b = 0
        *(r13_2 + 0x1c) = 0
        r13_2[4] = 0
        r13_2[5].w = 0x200
        *r13_2 = &data_142f285d0
        *(r13_2 + 0x30) = zmm0_5
        r13_2[8] = 0
    
    int64_t var_448_5 = 0x209
    result_4.d = 4
    result_4:4.d = rbx[2] * rbx[1] * *rbx
    void*** rax_23 = sub_14081d830(0x48, *(arg1 + 8), 1, 0)
    void*** var_370_1 = rax_23
    
    if (rax_23 == 0)
        var_370_1 = nullptr
    else
        int128_t zmm0_6 = result_4.o
        rax_23[1] = u"PageToPageIndexBuffer"
        rax_23[2] = 0
        rax_23[3].b = 0
        *(rax_23 + 0x1c) = 0
        rax_23[4] = 0
        rax_23[5].w = 0x200
        *rax_23 = &data_142f285d0
        *(rax_23 + 0x30) = zmm0_6
        rax_23[8] = 0
    
    int64_t* rdx_11 = *(arg1 + 8)
    result_4 = result_9
    var_448_5.d = 0x1c
    var_444_2.w = 0
    void*** rax_24 = sub_14081d830(0x28, rdx_11, 1, 0)
    var_3d0_1.q = rax_24
    
    if (rax_24 == 0)
        var_3d0_1.q = rax_24
    else
        int128_t zmm0_7 = result_4.o
        rax_24[1] = result_9[1]
        rax_24[2] = 0
        *(rax_24 + 0x18) = zmm0_7
        *rax_24 = &data_142f285c0
    
    int64_t* rdx_12 = *(arg1 + 8)
    result_4 = result_11
    var_448_5.d = 0x1c
    var_444_2.w = 0
    void*** rax_25 = sub_14081d830(0x28, rdx_12, 1, 0)
    void*** var_398_1 = rax_25
    
    if (rax_25 == 0)
        var_398_1 = nullptr
    else
        int128_t zmm0_8 = result_4.o
        rax_25[1] = result_11[1]
        rax_25[2] = 0
        *rax_25 = &data_142f285c0
        *(rax_25 + 0x18) = zmm0_8
    
    int32_t var_444_3 = 2
    var_448_5.d = 0x209
    result_4.d = 0x60
    result_4:4.d = var_3f8
    void*** result_16 = sub_14081d830(0x48, *(arg1 + 8), 1, 0)
    void*** result_6 = result_16
    
    if (result_16 == 0)
        result_6 = nullptr
    else
        int128_t zmm0_9 = result_4.o
        result_16[2] = 0
        result_16[1] = u"VoxelizationViewInfo"
        result_16[3].b = 0
        *(result_16 + 0x1c) = 0
        result_16[4] = 0
        result_16[5].w = 0x200
        *result_16 = &data_142f285d0
        *(result_16 + 0x30) = zmm0_9
        result_16[8] = 0
    
    int64_t var_448_6 = 0x209
    result_4.d = var_3f8 << 4
    result_4:4.d = *arg9
    void*** result_17 = sub_14081d830(0x48, *(arg1 + 8), 1, 0)
    void*** result_8 = result_17
    
    if (result_17 == 0)
        result_8 = nullptr
    else
        int128_t zmm0_10 = result_4.o
        result_8[1] = u"PageIndexResolutionBuffer"
        result_8[2] = 0
        result_8[3].b = 0
        *(result_8 + 0x1c) = 0
        result_8[4] = 0
        result_8[5].w = 0x200
        *result_8 = &data_142f285d0
        *(result_8 + 0x30) = zmm0_10
        result_8[8] = 0
    
    void*** result_7 = sub_141193740(arg1, &arg3[0x25], u"HairInstanceGroupAABBs", 0)
    int64_t var_448_7 = 0x309
    result_4.d = 0xc
    result_4:4.d = var_3f8
    void** result_18 = sub_14081d830(0x48, *(arg1 + 8), 1, 0)
    void** result_21 = result_18
    void** result_10 = result_18
    
    if (result_18 == 0)
        result_10 = nullptr
        result_21 = nullptr
    else
        int128_t zmm0_11 = result_4.o
        result_10[1] = u"PageIndexAllocationIndirectBufferArgs"
        result_10[2] = 0
        result_10[3].b = 0
        *(result_10 + 0x1c) = 0
        result_10[4] = 0
        result_10[5].w = 0x200
        *result_10 = &data_142f285d0
        *(result_10 + 0x30) = zmm0_11
        result_10[8] = 0
    
    sub_1419965b0(arg1, rax_24)
    sub_1419965b0(arg1, var_398_1)
    int32_t* rax_29
    int32_t zmm6_1
    rax_29, zmm6_1 = sub_14081d830(0x70, *(arg1 + 8), 1, 0)
    int32_t* rbx_3 = rax_29
    
    if (rax_29 == 0)
        rbx_3 = nullptr
    else
        __builtin_memset(&rbx_3[0x14], 0, 0x20)
    
    memset(&rbx_3[1], 0, 0x6c)
    *rbx_3 = zmm6_1
    rbx_3[1] = *arg9
    rbx_3[2] = arg7
    rbx_3[3] = var_3f8
    int64_t* rdx_21 = *(arg1 + 8)
    result_4 = result_7
    var_448_7.d = 0x1d
    var_444_3.w = 0
    void*** rax_33 = sub_14081d830(0x28, rdx_21, 1, 0)
    
    if (rax_33 == 0)
        rax_33 = nullptr
    else
        int128_t zmm0_12 = result_4.o
        rax_33[1] = result_7[1]
        rax_33[2] = 0
        *(rax_33 + 0x18) = zmm0_12
        *rax_33 = &data_142f285c0
    
    *(rbx_3 + 0x50) = rax_33
    rbx_3[4] = 0x20
    int64_t* rdx_22 = *(arg1 + 8)
    result_4 = result_8
    var_448_7.d = 0x30
    var_444_3.w = 0
    void*** rax_34 = sub_14081d830(0x28, rdx_22, 1, 0)
    
    if (rax_34 == 0)
        rax_34 = nullptr
    else
        int128_t zmm0_13 = result_4.o
        rax_34[1] = result_8[1]
        rax_34[2] = 0
        *(rax_34 + 0x18) = zmm0_13
        *rax_34 = &data_142f285c0
    
    *(rbx_3 + 0x58) = rax_34
    int32_t rax_35 = 0
    int64_t* rdx_23 = *(arg1 + 8)
    result_4 = result_6
    var_444_3.w = 0
    
    if ((result_6[7].d & 0x100) != 0)
        rax_35 = 0x1c
    
    var_448_7.d = rax_35
    void*** rax_36 = sub_14081d830(0x28, rdx_23, 1, 0)
    
    if (rax_36 == 0)
        rax_36 = nullptr
    else
        int128_t zmm0_14 = result_4.o
        rax_36[1] = result_6[1]
        rax_36[2] = 0
        *(rax_36 + 0x18) = zmm0_14
        *rax_36 = &data_142f285c0
    
    *(rbx_3 + 0x60) = rax_36
    int32_t rax_37 = 0
    int64_t* rdx_24 = *(arg1 + 8)
    
    if ((result_10[7].d & 0x100) != 0)
        rax_37 = 0x1c
    
    result_4 = result_10
    var_444_3.w = 0
    var_448_7.d = rax_37
    void*** rax_38
    int512_t zmm6_2
    rax_38, zmm6_2 = sub_14081d830(0x28, rdx_24, 1, 0)
    
    if (rax_38 == 0)
        rax_38 = nullptr
    else
        uint128_t zmm0_15 = result_4.o
        rax_38[1] = result_10[1]
        rax_38[2] = 0
        *(rax_38 + 0x18) = zmm0_15
        *rax_38 = &data_142f285c0
    
    *(rbx_3 + 0x68) = rax_38
    
    if (data_1439b6158 == 2)
        int32_t* rdx_25 = &data_143dbb1f8
        rbx_3[0x13] = 1
        int32_t* result_2 = &data_143dbb1f8
        
        if (var_440_1 s> 0)
            result_2 = result_1
        
        *(rbx_3 + 0x20) = *result_2
        rbx_3[0xa] = result_2[2]
        
        if (var_440_1 s> 0)
            rdx_25 = result_1 + 0xc
        
        *(rbx_3 + 0x30) = *rdx_25
        rbx_3[0xe] = rdx_25[2]
        uint32_t rax_42
        int32_t rcx_20
        int32_t rdx_26
        
        if (var_440_1 s<= 0)
            rcx_20 = 0
            rax_42 = 0
            rdx_26 = 0
        else
            rdx_26 = result_1[4].d
            var_438.q = result_1[3]
            rcx_20 = var_438
            rax_42 = (var_438.q u>> 0x20).d
        
        rbx_3[0x10] = rcx_20
        rbx_3[0x11] = rax_42
        rbx_3[0x12] = rdx_26
    
    uint128_t var_3a8
    char rcx_23 = sub_1419a2ec0(*(arg2 + 0x5150), &var_3a8, &data_143e788c0, 0)
    zmm7 = var_3a8
    zmm6_2.o = zx.o(0)
    var_438 = 1
    int32_t var_434_2 = 1
    int128_t var_268_1 = sub_1411e4540(rcx_23)
    sub_141998c50(zmm7.q, &data_143e7ded0, rbx_3)
    int32_t var_400_1 = 1
    int64_t var_408_1 = var_438.q
    void*** rax_43
    char rcx_25
    rax_43, rcx_25 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
    void*** r14_3 = rax_43
    void var_428
    int32_t* var_358
    
    if (rax_43 == 0)
        r14_3 = nullptr
    else
        var_358 = rbx_3
        sub_1411e4540(rcx_25)
        void* var_350_1 = &data_143e7df00
        var_3a8 = var_358.o
        sub_141992bd0(r14_3, &var_428, &var_3a8, 2)
        *r14_3 = &data_142f38aa8
        *(r14_3 + 0x38) = rbx_3.o
        *(r14_3 + 0x48) = zmm7
        r14_3[0xb] = var_400_1.q
    
    sub_1419968d0(arg1, r14_3)
    int32_t var_3c8
    var_3c8.q = sub_141188b30(arg1, result_8, 0x30)
    uint64_t r12_4 = 0
    int32_t var_440_3 = 0
    int32_t r14_4 = 0
    
    if (var_3f8 != 0)
        int64_t* rax_45 = arg3
        
        do
            int64_t rdx_32 = sx.q(r14_4) * 0xe0
            int64_t rcx_30 = *rax_45
            int32_t* rbx_4 = *(rdx_32 + rcx_30 + 0x90)
            void* rdi_6 = &rbx_4[sx.q(*(rdx_32 + rcx_30 + 0x98)) * 2]
            
            if (rbx_4 != rdi_6)
                do
                    sub_14118ce10(&var_3a8, *rbx_4)
                    int64_t rcx_33 = var_3a8.q
                    r12_4 = zx.q(r12_4.d + *(rcx_33 + sx.q(rbx_4[1]) * 0x18 + 0x10))
                    
                    if (rcx_33 != 0)
                        sub_140a74f90(rcx_33)
                    
                    rbx_4 = &rbx_4[2]
                while (rbx_4 != rdi_6)
                
                rax_45 = arg3
                var_440_3 = r12_4.d
            
            r14_4 += 1
        while (r14_4 u< var_3f8)
    
    int32_t rax_47 = 0
    int32_t var_3f4_2 = 0
    
    if (var_3f8 != 0)
        bool rdx_35 = cond:0
        var_438 = 1
        int32_t var_434_3 = 1
        zmm11 = zx.o(var_438.q)
        var_3e8 = 1
        int32_t var_3e4_2 = 1
        zmm9 = zx.o(var_3e8.q)
        
        do
            int64_t rax_48 = sx.q(rax_47)
            void* r15_8 = rax_48 * 0xe0 + *arg3
            void* r13_5 = &result_1[rax_48 * 6]
            var_438.q = r13_5
            void*** result_23
            int64_t r12_7
            
            if (data_1439b6160 s<= 0 || rdx_35 == 0)
                int32_t* r14_7 = *(r15_8 + 0x90)
                void* r12_8 = &r14_7[sx.q(*(r15_8 + 0x98)) * 2]
                
                if (r14_7 != r12_8)
                    int32_t var_214_1 = 1
                    
                    do
                        int64_t var_188
                        sub_14118ce10(&var_188, *r14_7)
                        int64_t r15_11 = var_188
                        int64_t rdi_9 = sx.q(r14_7[1]) * 3
                        int32_t* rax_85
                        int512_t zmm6_10
                        rax_85, zmm6_10 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
                        int32_t* rbx_11 = rax_85
                        
                        if (rax_85 == 0)
                            rbx_11 = nullptr
                        else
                            __builtin_memset(&rbx_11[0xe], 0, 0x20)
                        
                        memset(rbx_11, 0, 0x60)
                        rbx_11[0xc] = *(r15_8 + 0xcc)
                        rbx_11[7] = *(r15_11 + (rdi_9 << 3) + 0x10)
                        *rbx_11 = *(r13_5 + 0x18)
                        rbx_11[1] = *(r13_5 + 0x1c)
                        rbx_11[2] = *(r13_5 + 0x20)
                        rbx_11[0xb] = *(r13_5 + 0x28)
                        *(rbx_11 + 0x10) = *r13_5
                        rbx_11[6] = *(r13_5 + 8)
                        *(rbx_11 + 0x20) = *(r13_5 + 0xc)
                        rbx_11[0xa] = *(r13_5 + 0x14)
                        int64_t rcx_69 = *(*(r15_11 + (rdi_9 << 3)) + 0x10)
                        *(rbx_11 + 0x50) = var_3d0_1.q
                        *(rbx_11 + 0x38) = rcx_69
                        
                        if (cond:0 != 0)
                            void*** result_12 = result_7
                            int32_t var_230_1 = data_1439c8a7c
                            int32_t var_22c_1 = 0x1d
                            void*** rax_98
                            rax_98, zmm6_10 = sub_1411e0330(arg1, &result_12)
                            *(rbx_11 + 0x40) = rax_98
                            *(rbx_11 + 0x48) = var_3c8.q
                        
                        uint32_t rax_102 = (*(r15_11 + (rdi_9 << 3) + 0x10) + 0x1f) u>> 5
                        int128_t var_108
                        char rcx_72 =
                            sub_1419a2ec0(*(arg2 + 0x5150), &var_108, &data_143e789c0, zx.d(cond:0))
                        zmm6_10.o = var_108
                        int128_t zmm6_11 = sub_1411e4b00(rcx_72)
                        var_438.o = zx.o(0)
                        sub_141998c50(zmm6_11.q, &data_143e7e150, rbx_11)
                        int32_t var_400_5 = 1
                        int64_t var_408_4 = rax_102.q
                        void*** rax_104
                        char rcx_74
                        rax_104, rcx_74 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
                        void*** rdi_10 = rax_104
                        
                        if (rax_104 == 0)
                            rdi_10 = nullptr
                        else
                            sub_1411e4b00(rcx_74)
                            void* var_190_1 = &data_143e7e180
                            var_438.o = rbx_11.o
                            void var_3d6
                            sub_141992bd0(rdi_10, &var_3d6, &var_438, 2)
                            *rdi_10 = &data_142f38ae8
                            *(rdi_10 + 0x38) = rbx_11.o
                            *(rdi_10 + 0x48) = zmm6_11
                            rdi_10[0xb] = var_400_5.q
                        
                        sub_1419968d0(arg1, rdi_10)
                        int64_t rcx_77 = var_188
                        
                        if (rcx_77 != 0)
                            sub_140a74f90(rcx_77)
                        
                        r14_7 = &r14_7[2]
                    while (r14_7 != r12_8)
                
                r12_7 = var_3c8.q
            else
                int64_t var_318_1 = 0x209
                int32_t var_320_1 = 4
                int32_t var_31c_1 = 1
                void*** rax_49 = sub_14081d830(0x48, *(arg1 + 8), 1, 0)
                void*** var_340_1 = rax_49
                void*** r12_5 = rax_49
                
                if (rax_49 == 0)
                    r12_5 = nullptr
                    var_340_1 = nullptr
                else
                    rax_49[1] = u"PageScatterCounter"
                    rax_49[2] = 0
                    rax_49[3].b = 0
                    *(rax_49 + 0x1c) = 0
                    rax_49[4] = 0
                    rax_49[5].w = 0x200
                    *(rax_49 + 0x30) = var_320_1.o
                    *rax_49 = &data_142f285d0
                    rax_49[8] = 0
                
                int64_t var_308_1 = 0x209
                int32_t var_310_1 = 8
                uint32_t var_30c_1 = (r12_4 << 3).d
                void*** result_25 = sub_14081d830(0x48, *(arg1 + 8), 1, 0)
                result_23 = result_25
                void*** result_27 = result_25
                
                if (result_25 == 0)
                    result_27 = nullptr
                    result_23 = nullptr
                else
                    result_27[2] = 0
                    result_27[1] = u"PageScatterBuffer"
                    result_27[3].b = 0
                    *(result_27 + 0x1c) = 0
                    result_27[4] = 0
                    result_27[5].w = 0x200
                    *result_27 = &data_142f285d0
                    *(result_27 + 0x30) = var_310_1.o
                    result_27[8] = 0
                
                int32_t var_2f8_1 = 0x1c
                int16_t var_2f4_1 = 0
                void*** rax_50 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
                void*** var_338_1 = rax_50
                void*** rbx_6 = rax_50
                
                if (rax_50 == 0)
                    rbx_6 = nullptr
                    var_338_1 = nullptr
                else
                    rax_50[1] = r12_5[1]
                    rax_50[2] = 0
                    *(rax_50 + 0x18) = r12_5.o
                    *rax_50 = &data_142f285c0
                
                int32_t var_2e8_1 = 0x44
                int16_t var_2e4_1 = 0
                void*** rax_51 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
                void*** var_368 = rax_51
                
                if (rax_51 == 0)
                    var_368 = nullptr
                else
                    rax_51[1] = result_27[1]
                    rax_51[2] = 0
                    *(rax_51 + 0x18) = result_27.o
                    *rax_51 = &data_142f285c0
                
                sub_1419965b0(arg1, rbx_6)
                int32_t* i = *(r15_8 + 0x90)
                void* rax_53 = &i[sx.q(*(r15_8 + 0x98)) * 2]
                var_3e8.q = rax_53
                
                if (i != rax_53)
                    void*** r12_6 = var_368
                    int32_t var_1ec_1 = 0x1d
                    int32_t var_1e4_1 = 1
                    
                    do
                        int64_t var_1d8
                        sub_14118ce10(&var_1d8, *i)
                        int64_t r15_9 = var_1d8
                        int64_t rdi_7 = sx.q(i[1]) * 3
                        int32_t* rax_56 = sub_14081d830(0x40, *(arg1 + 8), 1, 0)
                        int32_t* rbx_7 = rax_56
                        
                        if (rax_56 == 0)
                            rbx_7 = nullptr
                        else
                            *(rbx_7 + 0x10) = 0
                            __builtin_memset(&rbx_7[6], 0, 0x28)
                        
                        __builtin_memset(rbx_7, 0, 0x40)
                        *rbx_7 = *(r15_9 + (rdi_7 << 3) + 0x10)
                        rbx_7[1] = *(r15_8 + 0xcc)
                        rbx_7[2] = var_440_3 << 3
                        *(rbx_7 + 0x10) = *(*(r15_9 + (rdi_7 << 3)) + 0x10)
                        int32_t var_1f0_1 = data_1439c8a7c
                        void*** rax_63
                        int512_t zmm6_4
                        rax_63, zmm6_4 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
                        
                        if (rax_63 != 0)
                            rax_63[1] = result_7[1]
                            *rax_63 = &data_142f285c0
                            rax_63[2] = 0
                            *(rax_63 + 0x18) = result_7.o
                        
                        *(rbx_7 + 0x18) = rax_63
                        *(rbx_7 + 0x20) = var_3c8.q
                        *(rbx_7 + 0x28) = var_3d0_1.q
                        *(rbx_7 + 0x30) = var_338_1
                        *(rbx_7 + 0x38) = r12_6
                        uint32_t rax_68 = (*(r15_9 + (rdi_7 << 3) + 0x10) + 0x1f) u>> 5
                        int128_t var_138
                        char rcx_44 = sub_1419a2ec0(*(arg2 + 0x5150), &var_138, &data_143e785c0, 0)
                        zmm6_4.o = var_138
                        int128_t zmm6_5 = sub_1411e4de0(rcx_44)
                        var_368.o = zx.o(0)
                        sub_141998c50(zmm6_5.q, &data_143e7df70, rbx_7)
                        int32_t var_400_2 = 1
                        int64_t var_408_2 = rax_68.q
                        void*** rax_70
                        char rcx_46
                        rax_70, rcx_46 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
                        void*** rdi_8 = rax_70
                        
                        if (rax_70 == 0)
                            rdi_8 = nullptr
                        else
                            sub_1411e4de0(rcx_46)
                            void* var_150_1 = &data_143e7dfa0
                            var_368.o = rbx_7.o
                            sub_141992bd0(rdi_8, &var_428, &var_368, 2)
                            *rdi_8 = &data_142f38ab8
                            *(rdi_8 + 0x38) = rbx_7.o
                            *(rdi_8 + 0x48) = zmm6_5
                            rdi_8[0xb] = var_400_2.q
                        
                        sub_1419968d0(arg1, rdi_8)
                        int64_t rcx_49 = var_1d8
                        
                        if (rcx_49 != 0)
                            sub_140a74f90(rcx_49)
                        
                        i = &i[2]
                    while (i != var_3e8.q)
                    
                    r12_5 = var_340_1
                    result_27 = result_23
                
                int32_t rax_71 = data_1439c8a54
                void*** var_258 = r12_5
                int32_t var_24c_1 = 0x1c
                int32_t var_250_1 = rax_71
                void*** rax_72 = sub_1411e0330(arg1, &var_258)
                int64_t var_2d8_1 = 0x309
                int32_t var_2e0_1 = 0xc
                int32_t var_2dc_1 = 1
                void*** result_30 = sub_14081d830(0x48, *(arg1 + 8), 1, 0)
                void*** result_26 = result_30
                
                if (result_30 == 0)
                    result_26 = nullptr
                else
                    result_26[2] = 0
                    result_26[1] = u"PageScatterIndirectArgs"
                    result_26[3].b = 0
                    *(result_26 + 0x1c) = 0
                    result_26[4] = 0
                    result_26[5].w = 0x200
                    *result_26 = &data_142f285d0
                    *(result_26 + 0x30) = var_2e0_1.o
                    result_26[8] = 0
                
                void**** rax_73 = sub_14081d830(0x10, *(arg1 + 8), 1, 0)
                int32_t rcx_51 = 0
                rax_73[1] = 0
                *rax_73 = rax_72
                
                if ((result_26[7].d & 0x100) != 0)
                    rcx_51 = 0x1c
                
                int32_t var_2c8_1 = rcx_51
                int16_t var_2c4_1 = 0
                void*** rax_74
                int512_t zmm6_6
                rax_74, zmm6_6 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
                
                if (rax_74 == 0)
                    rax_74 = nullptr
                else
                    rax_74[1] = result_26[1]
                    *rax_74 = &data_142f285c0
                    rax_74[2] = 0
                    *(rax_74 + 0x18) = result_26.o
                
                rax_73[1] = rax_74
                int32_t var_208_1 = 1
                int32_t var_204_1 = 1
                uint128_t var_128
                char rcx_54 = sub_1419a2ec0(*(arg2 + 0x5150), &var_128, &data_143e786c0, 0)
                zmm7 = var_128
                zmm6_6.o = zx.o(0)
                var_3e8.o = sub_1411e4c70(rcx_54)
                sub_141998c50(zmm7.q, &data_143e7e010, rax_73)
                int32_t var_400_3 = 1
                int64_t var_408_3 = var_208_1.q
                void*** rax_76
                char rcx_56
                rax_76, rcx_56 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
                void*** rbx_8 = rax_76
                
                if (rax_76 == 0)
                    rbx_8 = nullptr
                else
                    sub_1411e4c70(rcx_56)
                    void* var_1c0_1 = &data_143e7e040
                    var_3e8.o = rax_73.o
                    void var_3d8
                    sub_141992bd0(rbx_8, &var_3d8, &var_3e8, 2)
                    *rbx_8 = &data_142f38ac8
                    *(rbx_8 + 0x38) = rax_73.o
                    *(rbx_8 + 0x48) = zmm7
                    rbx_8[0xb] = var_400_3.q
                
                sub_1419968d0(arg1, rbx_8)
                int32_t var_240_1 = data_1439c9094
                void*** result_29 = result_27
                int32_t var_23c_1 = 0x44
                void*** rax_78 = sub_1411e0330(arg1, &result_29)
                int64_t* rax_79
                int512_t zmm6_8
                rax_79, zmm6_8 = sub_14081d830(0x30, *(arg1 + 8), 1, 0)
                rax_79[5] = 0
                r12_7 = var_3c8.q
                rax_79[1] = r12_7
                *rax_79 = result_26
                rax_79[2] = rax_72
                rax_79[3] = rax_78
                rax_79[4] = var_3d0_1.q
                int128_t var_118
                char rcx_61 = sub_1419a2ec0(*(arg2 + 0x5150), &var_118, &data_143e787c0, 0)
                zmm6_8.o = var_118
                void**** var_1b8_1 = &result_23
                int32_t* var_1b0_1 = &var_3e8
                result_23 = result_26
                int128_t zmm6_9 = sub_1411e4f50(rcx_61)
                var_3e8.o = var_1b8_1.o
                sub_141998c50(zmm6_9.q, &data_143e7e0b0, rax_79)
                void*** result_28 = result_26
                int32_t var_400_4 = 0
                void*** rax_82
                char rcx_63
                rax_82, rcx_63 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
                void*** rbx_10 = rax_82
                
                if (rax_82 == 0)
                    rbx_10 = nullptr
                else
                    sub_1411e4f50(rcx_63)
                    void* var_1a0_1 = &data_143e7e0e0
                    var_3e8.o = rax_79.o
                    void var_3d7
                    sub_141992bd0(rbx_10, &var_3d7, &var_3e8, 2)
                    *rbx_10 = &data_142f38ad8
                    *(rbx_10 + 0x38) = rax_79.o
                    *(rbx_10 + 0x48) = zmm6_9
                    rbx_10[0xb] = var_400_4.q
                
                sub_1419968d0(arg1, rbx_10)
                r13_5 = var_438.q
            
            int64_t* rax_105 = sub_14081d830(0x50, *(arg1 + 8), 1, 0)
            int64_t* rbx_12 = rax_105
            
            if (rax_105 == 0)
                rbx_12 = nullptr
            else
                __builtin_memset(&rax_105[6], 0, 0x18)
            
            memset(rbx_12, 0, 0x50)
            *(rbx_12 + 0x1c) = *(r15_8 + 0xcc)
            *rbx_12 = *r13_5
            rbx_12[1].d = *(r13_5 + 8)
            rbx_12[2] = *(r13_5 + 0xc)
            rbx_12[3].d = *(r13_5 + 0x14)
            rbx_12[4].d = *(r13_5 + 0x18)
            *(rbx_12 + 0x24) = *(r13_5 + 0x1c)
            rbx_12[5].d = *(r13_5 + 0x20)
            *(rbx_12 + 0xc) = *(r13_5 + 0x28)
            int32_t rax_113 = 0
            
            if ((var_388_1[7].d & 0x100) != 0)
                rax_113 = 0x1c
            
            int16_t var_2b4_1 = 0
            int32_t var_2b8_1 = rax_113
            void*** rax_114
            int512_t zmm6_12
            rax_114, zmm6_12 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
            
            if (rax_114 != 0)
                rax_114[1] = var_388_1[1]
                *rax_114 = &data_142f285c0
                rax_114[2] = 0
                *(rax_114 + 0x18) = var_388_1.o
            
            rbx_12[8] = rax_114
            
            if (cond:0 != 0)
                void*** result_13 = result_7
                int32_t var_220_1 = data_1439c8a7c
                int32_t var_21c_1 = 0x1d
                void*** rax_117
                rax_117, zmm6_12 = sub_1411e0330(arg1, &result_13)
                rbx_12[6] = rax_117
                rbx_12[7] = r12_7
            
            uint32_t r14_8 = zx.d(cond:0)
            int128_t var_f8
            char rcx_82 = sub_1419a2ec0(*(arg2 + 0x5150), &var_f8, &data_143e78bc0, r14_8)
            zmm6_12.o = var_f8
            int128_t zmm6_13 = sub_1411e43d0(rcx_82)
            var_438.o = zx.o(0)
            sub_141998c50(zmm6_13.q, &data_143e7e290, rbx_12)
            int32_t var_400_6 = 1
            uint64_t var_408_5 = zmm11.q
            void*** rax_119
            char rcx_84
            rax_119, rcx_84 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
            void*** rdi_13 = rax_119
            
            if (rax_119 == 0)
                rdi_13 = nullptr
            else
                sub_1411e43d0(rcx_84)
                void* var_170_1 = &data_143e7e2c0
                var_438.o = rbx_12.o
                void var_3d5
                sub_141992bd0(rdi_13, &var_3d5, &var_438, 2)
                *rdi_13 = &data_142f38af8
                *(rdi_13 + 0x38) = rbx_12.o
                *(rdi_13 + 0x48) = zmm6_13
                rdi_13[0xb] = var_400_6.q
            
            sub_1419968d0(arg1, rdi_13)
            int32_t* rax_120 = sub_14081d830(0x50, *(arg1 + 8), 1, 0)
            int32_t* rdi_14 = rax_120
            
            if (rax_120 == 0)
                rdi_14 = nullptr
            else
                __builtin_memset(&rax_120[8], 0, 0x30)
            
            memset(rdi_14, 0, 0x50)
            rdi_14[3] = *(r15_8 + 0xcc)
            rdi_14[4] = arg5
            rdi_14[5] = *(r13_5 + 0x24)
            *rdi_14 = *(r13_5 + 0x18)
            rdi_14[1] = *(r13_5 + 0x1c)
            rdi_14[2] = *(r13_5 + 0x20)
            rdi_14[6] = *(r13_5 + 0x28)
            *(rdi_14 + 0x30) = var_398_1
            *(rdi_14 + 0x38) = var_3d0_1.q
            void*** var_2b0 = var_370_1
            int32_t var_2a8_1 = 0x1c
            int16_t var_2a4_1 = 0
            *(rdi_14 + 0x40) = sub_1411e0330(arg1, &var_2b0)
            void*** var_2a0 = var_390_1
            int32_t var_298_1 = 0x3c
            int16_t var_294_1 = 0
            void*** rax_133
            int512_t zmm6_14
            rax_133, zmm6_14 = sub_1411e0330(arg1, &var_2a0)
            *(rdi_14 + 0x48) = rax_133
            void* r14_9 = arg2
            char rcx_91 = sub_1419a2ec0(*(r14_9 + 0x5150), &var_358, &data_143e78ac0, r14_8)
            zmm7 = var_358.o
            
            if (cond:0 == 0)
                zmm6_14.o = zx.o(0)
                result_4:4.d = 1
                result_4.d = (*(r13_5 + 0x24) + 0x1f) u>> 5
                var_438.o = sub_1411e46b0(rcx_91)
                sub_141998c50(var_358, &data_143e7e1f0, rdi_14)
                int32_t var_400_8 = 1
                void** result_5 = result_4
                void*** rax_139
                char rcx_98
                rax_139, rcx_98 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
                void*** rbx_16 = rax_139
                
                if (rax_139 == 0)
                    rbx_16 = nullptr
                else
                    var_268_1.q = rdi_14
                    sub_1411e46b0(rcx_98)
                    var_268_1:8.q = &data_143e7e220
                    var_438.o = var_268_1
                    void var_3d3
                    sub_141992bd0(rbx_16, &var_3d3, &var_438, 2)
                    *rbx_16 = &data_142f38b18
                    *(rbx_16 + 0x38) = rdi_14.o
                    *(rbx_16 + 0x48) = zmm7
                    rbx_16[0xb] = var_400_8.q
                
                sub_1419968d0(arg1, rbx_16)
            else
                *(rdi_14 + 0x20) = result_21
                *(rdi_14 + 0x28) = r12_7
                uint64_t rax_134 = zx.q(*(r15_8 + 0xcc))
                result_23 = result_21
                void**** var_168_1 = &result_23
                int32_t* var_160_1 = &var_3e8
                sub_1411e46b0(rcx_91)
                var_438.o = var_168_1.o
                sub_141998c50(var_358, &data_143e7e1f0, rdi_14)
                void** result_22 = result_21
                void*** rax_135
                char rcx_93
                rax_135, rcx_93 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
                
                if (rax_135 == 0)
                    sub_1419968d0(arg1, nullptr)
                    r14_9 = arg2
                else
                    sub_1411e46b0(rcx_93)
                    void* var_140_1 = &data_143e7e220
                    var_438.o = rdi_14.o
                    void var_3d4
                    sub_141992bd0(rax_135, &var_3d4, &var_438, 2)
                    *rax_135 = &data_142f38b08
                    *(rax_135 + 0x38) = rdi_14.o
                    *(rax_135 + 0x48) = zmm7
                    rax_135[0xb] = ((rax_134 * 3).d << 2).q
                    sub_1419968d0(arg1, rax_135)
                    r14_9 = arg2
            
            int32_t* rax_140 = sub_14081d830(0x20, *(arg1 + 8), 1, 0)
            int32_t* rbx_17 = rax_140
            
            if (rax_140 == 0)
                rbx_17 = nullptr
            else
                *(rax_140 + 0x10) = 0
                *(rax_140 + 0x18) = 0
            
            int16_t var_284_1 = 0
            __builtin_memset(rbx_17, 0, 0x20)
            *rbx_17 = *(r15_8 + 0xcc)
            rbx_17[2] = arg7
            rbx_17[1] = arg8
            void** result_24 = result_19
            int32_t var_288_1 = 0x1c
            r13_2 = var_328_1
            *(rbx_17 + 0x10) = sub_1411e0330(arg1, &result_24)
            int32_t rax_146 = 0
            int16_t var_274_1 = 0
            
            if ((r13_2[7].d & 0x100) != 0)
                rax_146 = 0x1c
            
            int32_t var_278_1 = rax_146
            void*** rax_147
            int512_t zmm6_16
            rax_147, zmm6_16 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)
            
            if (rax_147 == 0)
                rax_147 = nullptr
            else
                rax_147[1] = r13_2[1]
                *rax_147 = &data_142f285c0
                rax_147[2] = 0
                *(rax_147 + 0x18) = r13_2.o
            
            *(rbx_17 + 0x18) = rax_147
            int128_t var_e8
            char rcx_104 = sub_1419a2ec0(*(r14_9 + 0x5150), &var_e8, &data_143e78cc0, 0)
            zmm6_16.o = var_e8
            int128_t zmm6_17 = sub_1411e4260(rcx_104)
            var_438.o = zx.o(0)
            sub_141998c50(zmm6_17.q, &data_143e7e330, rbx_17)
            int32_t var_400_9 = 1
            uint64_t var_408_6 = zmm9.q
            void*** rax_148
            char rcx_106
            rax_148, rcx_106 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
            void*** rdi_15 = rax_148
            
            if (rax_148 == 0)
                rdi_15 = nullptr
            else
                var_3a8.q = rbx_17
                sub_1411e4260(rcx_106)
                var_3a8:8.q = &data_143e7e360
                var_438.o = var_3a8
                void var_3d2
                sub_141992bd0(rdi_15, &var_3d2, &var_438, 2)
                *rdi_15 = &data_142f38b28
                *(rdi_15 + 0x38) = rbx_17.o
                *(rdi_15 + 0x48) = zmm6_17
                rdi_15[0xb] = var_400_9.q
            
            sub_1419968d0(arg1, rdi_15)
            r12_4 = zx.q(var_440_3)
            rax_47 = var_3f4_2 + 1
            rdx_35 = cond:0
            var_3f4_2 = rax_47
        while (rax_47 u< var_3f8)
    
    *arg10 = result_20
    *arg11 = var_370_1
    *arg12 = var_390_1
    *arg13 = var_388_1
    *arg14 = r13_2
    *arg15 = result_19
    *arg16 = result_6
    result = result_1
    
    if (result != 0)
        return sub_140a74f90(result)

return result
