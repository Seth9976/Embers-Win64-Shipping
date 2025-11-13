// 函数: sub_1408eee10
// 地址: 0x1408eee10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1
int32_t var_428 = 0
int16_t* rdi

if (arg2[1].d == 0)
    rdi = &data_142d40450
else
    rdi = *arg2

*arg1 = 0
int64_t rsi = -1
arg1[1] = 0

if (rdi != 0 && *rdi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rdi[rbx_1] != 0)
    
    int32_t rdx = 0
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(arg1, rbx_1.d + 1)
        rdx = result[1].d
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    result[1].d = rax_1
    
    if (rax_1 s> *(result + 0xc))
        sub_140594770(result)
    
    UnDecorator::getReferenceType(*result, rdi, (rbx_1.d + 1) * 2)

result[2] = 0
result[3] = 0
sub_1405947f0(&result[2], 3)
int32_t rax_2 = result[3].d + 3
result[3].d = rax_2

if (rax_2 s> *(result + 0x1c))
    sub_140594770(&result[2])

UnDecorator::getReferenceType(result[2], &data_142e14130, 6)
int64_t* r12 = arg4
result[4] = 0
int32_t rdi_1 = 1
result[5] = 0
void* var_380 = &result[4]
int32_t rbx_3 = r12[1].d
uint64_t var_3f0
int64_t var_200
int64_t* rcx_7

if (rbx_3 s> 1)
    int64_t rdi_2 = *r12
    var_3f0 = 0
    int32_t var_3e8_1 = rbx_3
    
    if (rbx_3 != 0)
        sub_1405a4c70(&var_3f0, rbx_3, 0)
        memcpy(var_3f0, rdi_2, rbx_3 * 2)
    else
        int32_t var_3e4_1 = 0
    
    rcx_7 = &var_3f0
    rdi_1 = 2
else
    int64_t var_220 = *(data_143f5e920 + 0x18)
    arg3 = sub_140b63b70(&var_220, &var_200)
    rcx_7 = &var_200

result[6] = *rcx_7
*rcx_7 = 0
result[7].d = rcx_7[1].d
*(result + 0x3c) = *(rcx_7 + 0xc)
rcx_7[1] = 0

if ((rdi_1.b & 2) != 0)
    uint64_t rcx_10 = var_3f0
    rdi_1 &= 0xfffffffd
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

if ((rdi_1.b & 1) != 0)
    int64_t rcx_11 = var_200
    rdi_1 &= 0xfffffffe
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

sub_140d3a3a0(&result[8], data_143f5e920)
result[9] = 0
result[0xa] = 0
void* rax_9 = data_143f5b298

if (rax_9 == 0 || *(rax_9 + 0x788) == 0)
    int64_t var_a8_1 = 0
    void** const var_98_1 = &data_142da2668
    int64_t (* var_b8)(int64_t* arg1) = sub_1408f16f0
    int64_t* result_1 = result
    sub_140a20980(sub_140b18f30(), &var_380, 
        FAutomationUtilsGameplayScreenshotInstanceAutoCleanup", 0x3dcccccd, &var_b8)
else
    sub_1419a21e0(0)
    int64_t* rax_10 = sub_140a84c80(0, 0x30, 0)
    int64_t* var_3e0 = rax_10
    void*** rbx_4 = rax_10
    int32_t var_3d8_1 = 3
    
    if (rax_10 != 0)
        rbx_4[1] = result
        *rbx_4 = &data_142d3fe58
        rbx_4[2] = sub_1408f1c50
        rbx_4[4] = sub_140a387b0()
        *rbx_4 = &data_142d3feb0
        void var_158
        sub_1408d6c30(&data_143a2e078, &var_158, &var_3e0)
        int64_t* rax_13
        
        if (var_3d8_1 == 0)
            rax_13 = var_3e0
        label_1408ef10f:
            
            if (rax_13 != 0)
                sub_140a74f90(rax_13)
        else
            int64_t* rbx_5 = var_3e0
            
            if (rbx_5 != 0)
                (*(*rbx_5 + 0x38))(rbx_5, 0)
                rax_13 = sub_140a84c80(rbx_5, 0, 0)
                var_3e0 = rax_13
                goto label_1408ef10f
    
    int64_t* rax_14 = sub_140a84c80(0, 0x30, 0)
    int64_t* var_3d0 = rax_14
    void*** rbx_6 = rax_14
    int32_t var_3c8_1 = 3
    
    if (rax_14 != 0)
        rbx_6[1] = result
        *rbx_6 = &data_142d3fe58
        rbx_6[2] = sub_1408f2600
        rbx_6[4] = sub_140a387b0()
        *rbx_6 = &data_142d3feb0
        void var_150
        sub_1408d6c30(&data_143a30728, &var_150, &var_3d0)
        int64_t* rax_17
        
        if (var_3c8_1 == 0)
            rax_17 = var_3d0
        label_1408ef1ca:
            
            if (rax_17 != 0)
                sub_140a74f90(rax_17)
        else
            int64_t* rbx_7 = var_3d0
            
            if (rbx_7 != 0)
                (*(*rbx_7 + 0x38))(rbx_7, 0)
                rax_17 = sub_140a84c80(rbx_7, 0, 0)
                var_3d0 = rax_17
                goto label_1408ef1ca
    
    int64_t* rax_18 = j_sub_140a82f30(0x50)
    int64_t* rbx_8 = rax_18
    
    if (rax_18 == 0)
        rbx_8 = nullptr
    else
        *rax_18 = 0
        void* rcx_19 = &rax_18[2]
        rax_18[1] = 0
        *(rcx_19 + 0x10) = 0
        *(rcx_19 + 0x18) = 0
        *(rcx_19 + 0x1c) = 0x80
        void* rax_19 = *(rcx_19 + 0x10)
        
        if (rax_19 != 0)
            rcx_19 = rax_19
        
        *rcx_19 = 0
        *(rcx_19 + 8) = 0
        rbx_8[6].d = 0xffffffff
        *(rbx_8 + 0x34) = 0
        rbx_8[8] = 0
        rbx_8[9].d = 0
    
    void*** rax_20 = j_sub_140a82f30(0x18)
    
    if (rax_20 == 0)
        rax_20 = nullptr
    else
        rax_20[2] = rbx_8
        rax_20[1].d = 1
        *(rax_20 + 0xc) = 1
        *rax_20 = &data_142d86160
    
    int64_t* var_728 = rbx_8
    int64_t var_698 = 0
    int32_t var_690_1 = 0
    sub_1405947f0(&var_698, 5)
    int32_t rax_21 = var_690_1 + 5
    var_690_1 = rax_21
    
    if (rax_21 s> 0)
        sub_140594770(&var_698)
    
    UnDecorator::getReferenceType(var_698, u"name", 0xa)
    int64_t var_148
    sub_140b75b80(var_728, &var_698, sub_140b20ee0(&var_148, result, 0x5f))
    int64_t rcx_25 = var_148
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)
    
    int64_t rcx_26 = var_698
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    int64_t var_688 = 0
    int32_t var_680_1 = 0
    sub_1405947f0(&var_688, 8)
    int32_t rax_23 = var_680_1 + 8
    var_680_1 = rax_23
    
    if (rax_23 s> 0)
        sub_140594770(&var_688)
    
    UnDecorator::getReferenceType(var_688, u"context", 0x10)
    sub_140b75b80(var_728, &var_688, &result[6])
    int64_t rcx_31 = var_688
    
    if (rcx_31 != 0)
        sub_140a74f90(rcx_31)
    
    int64_t var_678 = 0
    int32_t var_670_1 = 0
    sub_1405947f0(&var_678, 3)
    int32_t rax_24 = var_670_1 + 3
    var_670_1 = rax_24
    
    if (rax_24 s> 0)
        sub_140594770(&var_678)
    
    UnDecorator::getReferenceType(var_678, &data_142e14158, 6)
    int64_t var_1f0
    void var_78
    sub_140b291e0(sub_140b214c0(&var_78), &var_1f0, 0)
    sub_140b75b80(var_728, &var_678, &var_1f0)
    int64_t rcx_38 = var_1f0
    
    if (rcx_38 != 0)
        sub_140a74f90(rcx_38)
    
    int64_t rcx_39 = var_678
    
    if (rcx_39 != 0)
        sub_140a74f90(rcx_39)
    
    int64_t var_340
    int64_t var_2d0
    int32_t rax_30
    int64_t* rbx_10
    
    if (sub_140b1b930(j_sub_140b17d00()) == 0)
        var_2d0 = 0
        rbx_10 = &var_2d0
        int64_t var_2c8_1 = 0
        rax_30 = 8
    else
        int32_t rax_29 = sub_140b187d0(j_sub_140b17d00())
        var_340 = 0
        int64_t var_338_1 = 0
        sub_140a20c40(&var_340, rax_29)
        rax_30 = 4
        rbx_10 = &var_340
    
    int64_t var_668 = 0
    int32_t var_660_1 = 0
    int32_t rdi_3 = rdi_1 | rax_30
    sub_1405947f0(&var_668, 7)
    int32_t rax_31 = var_660_1 + 7
    var_660_1 = rax_31
    
    if (rax_31 s> 0)
        sub_140594770(&var_668)
    
    UnDecorator::getReferenceType(var_668, u"Commit", 0xe)
    sub_140b75b80(var_728, &var_668, rbx_10)
    int64_t rcx_47 = var_668
    
    if (rcx_47 != 0)
        sub_140a74f90(rcx_47)
    
    if ((rdi_3.b & 8) != 0)
        int64_t rcx_48 = var_2d0
        rdi_3 &= 0xfffffff7
        
        if (rcx_48 != 0)
            sub_140a74f90(rcx_48)
    
    if ((rdi_3.b & 4) != 0)
        int64_t rcx_49 = var_340
        
        if (rcx_49 != 0)
            sub_140a74f90(rcx_49)
    
    sub_14202bf60(*(data_143f5b298 + 0x788), &var_428)
    int64_t var_708 = 0
    int32_t var_700_1 = 0
    sub_1405947f0(&var_708, 6)
    int32_t rax_32 = var_700_1 + 6
    var_700_1 = rax_32
    
    if (rax_32 s> 0)
        sub_140594770(&var_708)
    
    UnDecorator::getReferenceType(var_708, u"width", 0xc)
    sub_140b75830(var_728, &var_708, _mm_cvtps_pd(var_428.q))
    int64_t rcx_56 = var_708
    
    if (rcx_56 != 0)
        sub_140a74f90(rcx_56)
    
    int64_t var_648 = 0
    int32_t var_640_1 = 0
    sub_1405947f0(&var_648, 7)
    int32_t rax_33 = var_640_1 + 7
    var_640_1 = rax_33
    
    if (rax_33 s> 0)
        sub_140594770(&var_648)
    
    UnDecorator::getReferenceType(var_648, u"height", 0xe)
    int32_t var_424
    sub_140b75830(var_728, &var_648, _mm_cvtps_pd(var_424.q))
    int64_t rcx_61 = var_648
    
    if (rcx_61 != 0)
        sub_140a74f90(rcx_61)
    
    int64_t var_628 = 0
    int32_t var_620_1 = 0
    sub_1405947f0(&var_628, 8)
    int32_t rax_34 = var_620_1 + 8
    var_620_1 = rax_34
    
    if (rax_34 s> 0)
        sub_140594770(&var_628)
    
    sub_1405a7220(var_628, 8, "Windows", 8, 0x3f)
    int64_t var_638 = 0
    int32_t var_630_1 = 0
    sub_1405947f0(&var_638, 9)
    int32_t rax_35 = var_630_1 + 9
    var_630_1 = rax_35
    
    if (rax_35 s> 0)
        sub_140594770(&var_638)
    
    UnDecorator::getReferenceType(var_638, u"platform", 0x12)
    sub_140b75b80(var_728, &var_638, &var_628)
    int64_t rcx_69 = var_638
    
    if (rcx_69 != 0)
        sub_140a74f90(rcx_69)
    
    int64_t rcx_70 = var_628
    
    if (rcx_70 != 0)
        sub_140a74f90(rcx_70)
    
    int64_t var_618 = 0
    int32_t var_610_1 = 0
    sub_1405947f0(&var_618, 4)
    int32_t rax_36 = var_610_1 + 4
    var_610_1 = rax_36
    
    if (rax_36 s> 0)
        sub_140594770(&var_618)
    
    UnDecorator::getReferenceType(var_618, &data_142e141a8, 8)
    int64_t var_138
    sub_140b75b80(var_728, &var_618, sub_14205da60(&var_138, data_143f426f8))
    int64_t rcx_76 = var_138
    
    if (rcx_76 != 0)
        sub_140a74f90(rcx_76)
    
    int64_t rcx_77 = var_618
    
    if (rcx_77 != 0)
        sub_140a74f90(rcx_77)
    
    int32_t rcx_78 = data_1439c7a08
    int64_t var_498 = 0
    int32_t var_490_1 = 0
    sub_141972a50(rcx_78, &var_498)
    int64_t var_608 = 0
    int32_t var_600_1 = 0
    sub_1405947f0(&var_608, 0xd)
    int32_t rax_38 = var_600_1 + 0xd
    var_600_1 = rax_38
    
    if (rax_38 s> 0)
        sub_140594770(&var_608)
    
    UnDecorator::getReferenceType(var_608, u"featureLevel", 0x1a)
    sub_140b75b80(var_728, &var_608, &var_498)
    int64_t rcx_83 = var_608
    
    if (rcx_83 != 0)
        sub_140a74f90(rcx_83)
    
    int64_t* rcx_84 = *(data_143f5b298 + 0xaf8)
    char rbx_12
    
    if (rcx_84 == 0)
        rbx_12 = 0
    else
        rbx_12 = (*(*rcx_84 + 8))(rcx_84)
    
    int64_t var_5f8 = 0
    int32_t var_5f0_1 = 0
    sub_1405947f0(&var_5f8, 0xa)
    int32_t rax_42 = var_5f0_1 + 0xa
    var_5f0_1 = rax_42
    
    if (rax_42 s> 0)
        sub_140594770(&var_5f8)
    
    UnDecorator::getReferenceType(var_5f8, u"bIsStereo", 0x14)
    sub_140b75710(var_728, &var_5f8, rbx_12)
    int64_t rcx_89 = var_5f8
    
    if (rcx_89 != 0)
        sub_140a74f90(rcx_89)
    
    int16_t* rax_43 = sub_1419811d0()
    int64_t var_5d8 = 0
    int32_t rdx_38 = 0
    int32_t var_5d0_1 = 0
    int32_t rcx_90 = 0
    int32_t var_5cc_1 = 0
    
    if (rax_43 != 0 && *rax_43 != 0)
        do
            rsi += 1
        while (rax_43[rsi] != 0)
        
        if (rsi.d + 1 s> 0)
            sub_1405947f0(&var_5d8, rsi.d + 1)
            rcx_90 = var_5cc_1
            rdx_38 = var_5d0_1
        
        int32_t rax_44 = rsi.d + 1 + rdx_38
        int32_t var_5d0_2 = rax_44
        
        if (rax_44 s> rcx_90)
            sub_140594770(&var_5d8)
        
        UnDecorator::getReferenceType(var_5d8, rax_43, (rsi.d + 1) * 2)
    
    int64_t var_5e8 = 0
    int32_t var_5e0_1 = 0
    sub_1405947f0(&var_5e8, 7)
    int32_t rax_45 = var_5e0_1 + 7
    var_5e0_1 = rax_45
    
    if (rax_45 s> 0)
        sub_140594770(&var_5e8)
    
    UnDecorator::getReferenceType(var_5e8, u"vendor", 0xe)
    sub_140b75b80(var_728, &var_5e8, &var_5d8)
    int64_t rcx_98 = var_5e8
    
    if (rcx_98 != 0)
        sub_140a74f90(rcx_98)
    
    int64_t rcx_99 = var_5d8
    
    if (rcx_99 != 0)
        sub_140a74f90(rcx_99)
    
    int64_t var_5c8 = 0
    int32_t var_5c0_1 = 0
    sub_1405947f0(&var_5c8, 0xc)
    int32_t rax_46 = var_5c0_1 + 0xc
    var_5c0_1 = rax_46
    
    if (rax_46 s> 0)
        sub_140594770(&var_5c8)
    
    UnDecorator::getReferenceType(var_5c8, u"adapterName", 0x18)
    sub_140b75b80(var_728, &var_5c8, &data_143f024b8)
    int64_t rcx_104 = var_5c8
    
    if (rcx_104 != 0)
        sub_140a74f90(rcx_104)
    
    int64_t var_5b8 = 0
    int32_t var_5b0_1 = 0
    sub_1405947f0(&var_5b8, 0x1d)
    int32_t rax_47 = var_5b0_1 + 0x1d
    var_5b0_1 = rax_47
    
    if (rax_47 s> 0)
        sub_140594770(&var_5b8)
    
    UnDecorator::getReferenceType(var_5b8, u"adapterInternalDriverVersion", 0x3a)
    sub_140b75b80(var_728, &var_5b8, &data_143f024c8)
    int64_t rcx_109 = var_5b8
    
    if (rcx_109 != 0)
        sub_140a74f90(rcx_109)
    
    int64_t var_5a8 = 0
    int32_t var_5a0_1 = 0
    sub_1405947f0(&var_5a8, 0x19)
    int32_t rax_48 = var_5a0_1 + 0x19
    var_5a0_1 = rax_48
    
    if (rax_48 s> 0)
        sub_140594770(&var_5a8)
    
    UnDecorator::getReferenceType(var_5a8, u"adapterUserDriverVersion", 0x32)
    sub_140b75b80(var_728, &var_5a8, &data_143f024d8)
    int64_t rcx_114 = var_5a8
    
    if (rcx_114 != 0)
        sub_140a74f90(rcx_114)
    
    int64_t var_598 = 0
    int32_t var_590_1 = 0
    sub_1405947f0(&var_598, 0xf)
    int32_t rax_49 = var_590_1 + 0xf
    var_590_1 = rax_49
    
    if (rax_49 s> 0)
        sub_140594770(&var_598)
    
    UnDecorator::getReferenceType(var_598, u"uniqueDeviceId", 0x1e)
    int64_t var_128
    sub_140b75b80(var_728, &var_598, sub_140a47220(&var_128))
    int64_t rcx_120 = var_128
    
    if (rcx_120 != 0)
        sub_140a74f90(rcx_120)
    
    int64_t rcx_121 = var_598
    
    if (rcx_121 != 0)
        sub_140a74f90(rcx_121)
    
    int32_t var_1a8
    int32_t zmm7_1
    int32_t zmm8_1
    zmm7_1, zmm8_1 = sub_1422e5800(&var_1a8)
    int64_t var_658 = 0
    int32_t var_650_1 = 0
    sub_1405947f0(&var_658, 0x12)
    int32_t rax_51 = var_650_1 + 0x12
    var_650_1 = rax_51
    
    if (rax_51 s> 0)
        sub_140594770(&var_658)
    
    UnDecorator::getReferenceType(var_658, u"resolutionQuality", 0x24)
    sub_140b75830(var_728, &var_658, _mm_cvtps_pd(var_1a8.q))
    int64_t rcx_127 = var_658
    
    if (rcx_127 != 0)
        sub_140a74f90(rcx_127)
    
    int64_t var_588 = 0
    int32_t var_580_1 = 0
    sub_1405947f0(&var_588, 0x14)
    int32_t rax_52 = var_580_1 + 0x14
    var_580_1 = rax_52
    
    if (rax_52 s> 0)
        sub_140594770(&var_588)
    
    UnDecorator::getReferenceType(var_588, u"viewDistanceQuality", 0x28)
    int32_t var_1a4
    sub_140b75830(var_728, &var_588, _mm_cvtepi32_pd(zx.q(var_1a4)))
    int64_t rcx_132 = var_588
    
    if (rcx_132 != 0)
        sub_140a74f90(rcx_132)
    
    int64_t var_578 = 0
    int32_t var_570_1 = 0
    sub_1405947f0(&var_578, 0x14)
    int32_t rax_53 = var_570_1 + 0x14
    var_570_1 = rax_53
    
    if (rax_53 s> 0)
        sub_140594770(&var_578)
    
    UnDecorator::getReferenceType(var_578, u"antiAliasingQuality", 0x28)
    int32_t var_1a0
    sub_140b75830(var_728, &var_578, _mm_cvtepi32_pd(zx.q(var_1a0)))
    int64_t rcx_137 = var_578
    
    if (rcx_137 != 0)
        sub_140a74f90(rcx_137)
    
    int64_t var_568 = 0
    int32_t var_560_1 = 0
    sub_1405947f0(&var_568, 0xe)
    int32_t rax_54 = var_560_1 + 0xe
    var_560_1 = rax_54
    
    if (rax_54 s> 0)
        sub_140594770(&var_568)
    
    UnDecorator::getReferenceType(var_568, u"shadowQuality", 0x1c)
    int32_t var_19c
    sub_140b75830(var_728, &var_568, _mm_cvtepi32_pd(zx.q(var_19c)))
    int64_t rcx_142 = var_568
    
    if (rcx_142 != 0)
        sub_140a74f90(rcx_142)
    
    int64_t var_558 = 0
    int32_t var_550_1 = 0
    sub_1405947f0(&var_558, 0x13)
    int32_t rax_55 = var_550_1 + 0x13
    var_550_1 = rax_55
    
    if (rax_55 s> 0)
        sub_140594770(&var_558)
    
    UnDecorator::getReferenceType(var_558, u"postProcessQuality", 0x26)
    int32_t var_198
    sub_140b75830(var_728, &var_558, _mm_cvtepi32_pd(zx.q(var_198)))
    int64_t rcx_147 = var_558
    
    if (rcx_147 != 0)
        sub_140a74f90(rcx_147)
    
    int64_t var_548 = 0
    int32_t var_540_1 = 0
    sub_1405947f0(&var_548, 0xf)
    int32_t rax_56 = var_540_1 + 0xf
    var_540_1 = rax_56
    
    if (rax_56 s> 0)
        sub_140594770(&var_548)
    
    UnDecorator::getReferenceType(var_548, u"textureQuality", 0x1e)
    int32_t var_194
    sub_140b75830(var_728, &var_548, _mm_cvtepi32_pd(zx.q(var_194)))
    int64_t rcx_152 = var_548
    
    if (rcx_152 != 0)
        sub_140a74f90(rcx_152)
    
    int64_t var_538 = 0
    int32_t var_530_1 = 0
    sub_1405947f0(&var_538, 0xf)
    int32_t rax_57 = var_530_1 + 0xf
    var_530_1 = rax_57
    
    if (rax_57 s> 0)
        sub_140594770(&var_538)
    
    UnDecorator::getReferenceType(var_538, u"effectsQuality", 0x1e)
    int32_t var_190
    sub_140b75830(var_728, &var_538, _mm_cvtepi32_pd(zx.q(var_190)))
    int64_t rcx_157 = var_538
    
    if (rcx_157 != 0)
        sub_140a74f90(rcx_157)
    
    int64_t var_528 = 0
    int32_t var_520_1 = 0
    sub_1405947f0(&var_528, 0xf)
    int32_t rax_58 = var_520_1 + 0xf
    var_520_1 = rax_58
    
    if (rax_58 s> 0)
        sub_140594770(&var_528)
    
    UnDecorator::getReferenceType(var_528, u"foliageQuality", 0x1e)
    int32_t var_18c
    sub_140b75830(var_728, &var_528, _mm_cvtepi32_pd(zx.q(var_18c)))
    int64_t rcx_162 = var_528
    
    if (rcx_162 != 0)
        sub_140a74f90(rcx_162)
    
    int64_t var_518 = 0
    int32_t var_510_1 = 0
    sub_1405947f0(&var_518, 0xf)
    int32_t rax_59 = var_510_1 + 0xf
    var_510_1 = rax_59
    
    if (rax_59 s> 0)
        sub_140594770(&var_518)
    
    UnDecorator::getReferenceType(var_518, u"shadingQuality", 0x1e)
    int32_t var_188
    sub_140b75830(var_728, &var_518, _mm_cvtepi32_pd(zx.q(var_188)))
    int64_t rcx_167 = var_518
    
    if (rcx_167 != 0)
        sub_140a74f90(rcx_167)
    
    int64_t var_508 = 0
    int32_t var_500_1 = 0
    sub_1405947f0(&var_508, 0x14)
    int32_t rax_60 = var_500_1 + 0x14
    var_500_1 = rax_60
    
    if (rax_60 s> 0)
        sub_140594770(&var_508)
    
    UnDecorator::getReferenceType(var_508, u"bHasComparisonRules", 0x28)
    sub_140b75710(var_728, &var_508, 1)
    int64_t rcx_172 = var_508
    
    if (rcx_172 != 0)
        sub_140a74f90(rcx_172)
    
    int64_t var_4f8 = 0
    int32_t var_4f0_1 = 0
    sub_1405947f0(&var_4f8, 0xd)
    int32_t rax_61 = var_4f0_1 + 0xd
    var_4f0_1 = rax_61
    
    if (rax_61 s> 0)
        sub_140594770(&var_4f8)
    
    UnDecorator::getReferenceType(var_4f8, u"toleranceRed", 0x1a)
    uint128_t zmm6_1 = sub_140b75830(var_728, &var_4f8, 0x4020000000000000)
    int64_t rcx_177 = var_4f8
    
    if (rcx_177 != 0)
        sub_140a74f90(rcx_177)
    
    int64_t var_4e8 = 0
    int32_t var_4e0_1 = 0
    sub_1405947f0(&var_4e8, 0xf)
    int32_t rax_62 = var_4e0_1 + 0xf
    var_4e0_1 = rax_62
    
    if (rax_62 s> 0)
        sub_140594770(&var_4e8)
    
    UnDecorator::getReferenceType(var_4e8, u"toleranceGreen", 0x1e)
    uint128_t zmm6_2 = sub_140b75830(var_728, &var_4e8, zmm6_1)
    int64_t rcx_182 = var_4e8
    
    if (rcx_182 != 0)
        sub_140a74f90(rcx_182)
    
    int64_t var_4d8 = 0
    int32_t var_4d0_1 = 0
    sub_1405947f0(&var_4d8, 0xe)
    int32_t rax_63 = var_4d0_1 + 0xe
    var_4d0_1 = rax_63
    
    if (rax_63 s> 0)
        sub_140594770(&var_4d8)
    
    UnDecorator::getReferenceType(var_4d8, u"toleranceBlue", 0x1c)
    uint128_t zmm6_3 = sub_140b75830(var_728, &var_4d8, zmm6_2)
    int64_t rcx_187 = var_4d8
    
    if (rcx_187 != 0)
        sub_140a74f90(rcx_187)
    
    int64_t var_4c8 = 0
    int32_t var_4c0_1 = 0
    sub_1405947f0(&var_4c8, 0xf)
    int32_t rax_64 = var_4c0_1 + 0xf
    var_4c0_1 = rax_64
    
    if (rax_64 s> 0)
        sub_140594770(&var_4c8)
    
    UnDecorator::getReferenceType(var_4c8, u"toleranceAlpha", 0x1e)
    sub_140b75830(var_728, &var_4c8, zmm6_3)
    int64_t rcx_192 = var_4c8
    int512_t zmm6_4
    zmm6_4.o = arg3
    
    if (rcx_192 != 0)
        sub_140a74f90(rcx_192)
    
    int64_t var_6a8 = 0
    int32_t var_6a0_1 = 0
    sub_1405947f0(&var_6a8, 0x17)
    int32_t rax_65 = var_6a0_1 + 0x17
    var_6a0_1 = rax_65
    
    if (rax_65 s> 0)
        sub_140594770(&var_6a8)
    
    UnDecorator::getReferenceType(var_6a8, u"toleranceMinBrightness", 0x2e)
    sub_140b75830(var_728, &var_6a8, zx.o(0))
    int64_t rcx_197 = var_6a8
    
    if (rcx_197 != 0)
        sub_140a74f90(rcx_197)
    
    int64_t var_6f8 = 0
    int32_t var_6f0_1 = 0
    sub_1405947f0(&var_6f8, 0x17)
    int32_t rax_66 = var_6f0_1 + 0x17
    var_6f0_1 = rax_66
    
    if (rax_66 s> 0)
        sub_140594770(&var_6f8)
    
    UnDecorator::getReferenceType(var_6f8, u"toleranceMaxBrightness", 0x2e)
    sub_140b75830(var_728, &var_6f8, 0x406fe00000000000)
    int64_t rcx_202 = var_6f8
    
    if (rcx_202 != 0)
        sub_140a74f90(rcx_202)
    
    int64_t var_6e8 = 0
    int32_t var_6e0_1 = 0
    sub_1405947f0(&var_6e8, 0x12)
    int32_t rax_67 = var_6e0_1 + 0x12
    var_6e0_1 = rax_67
    
    if (rax_67 s> 0)
        sub_140594770(&var_6e8)
    
    UnDecorator::getReferenceType(var_6e8, u"maximumLocalError", 0x24)
    uint128_t zmm2_2
    zmm2_2.q = fconvert.d(zmm7_1)
    sub_140b75830(var_728, &var_6e8, zmm2_2)
    int64_t rcx_207 = var_6e8
    
    if (rcx_207 != 0)
        sub_140a74f90(rcx_207)
    
    int64_t var_6d8 = 0
    int32_t var_6d0_1 = 0
    sub_1405947f0(&var_6d8, 0x13)
    int32_t rax_68 = var_6d0_1 + 0x13
    var_6d0_1 = rax_68
    
    if (rax_68 s> 0)
        sub_140594770(&var_6d8)
    
    UnDecorator::getReferenceType(var_6d8, u"maximumGlobalError", 0x26)
    zmm2_2.q = fconvert.d(zmm8_1)
    sub_140b75830(var_728, &var_6d8, zmm2_2)
    int64_t rcx_212 = var_6d8
    
    if (rcx_212 != 0)
        sub_140a74f90(rcx_212)
    
    int64_t var_6c8 = 0
    int32_t var_6c0_1 = 0
    sub_1405947f0(&var_6c8, 0x14)
    int32_t rax_69 = var_6c0_1 + 0x14
    var_6c0_1 = rax_69
    
    if (rax_69 s> 0)
        sub_140594770(&var_6c8)
    
    UnDecorator::getReferenceType(var_6c8, u"bIgnoreAntiAliasing", 0x28)
    sub_140b75710(var_728, &var_6c8, 1)
    int64_t rcx_217 = var_6c8
    
    if (rcx_217 != 0)
        sub_140a74f90(rcx_217)
    
    int64_t var_6b8 = 0
    int32_t var_6b0_1 = 0
    sub_1405947f0(&var_6b8, 0xe)
    int32_t rax_70 = var_6b0_1 + 0xe
    var_6b0_1 = rax_70
    
    if (rax_70 s> 0)
        sub_140594770(&var_6b8)
    
    UnDecorator::getReferenceType(var_6b8, u"bIgnoreColors", 0x1c)
    sub_140b75710(var_728, &var_6b8, 0)
    int64_t rcx_222 = var_6b8
    
    if (rcx_222 != 0)
        sub_140a74f90(rcx_222)
    
    int64_t* rax_71 = j_sub_140a82f30(0x40)
    int64_t* rdi_4 = rax_71
    
    if (rax_71 == 0)
        rdi_4 = nullptr
    else
        int64_t* rax_72 = j_sub_140a82f30(0xa8)
        int64_t* rsi_2 = rax_72
        
        if (rax_72 == 0)
            rsi_2 = nullptr
        else
            int64_t var_348_1 = 0
            memset(rax_72, 0, 0x90)
            sub_140b4c2a0(rsi_2)
            rsi_2[0x12] = 0
            *rsi_2 = &data_142d6ad48
            rsi_2[0x13] = &rdi_4[5]
            rsi_2[0x14] = 0
            sub_140b552b0(rsi_2, 1)
            (*(*rsi_2 + 0xd8))(rsi_2, 0)
        
        rdi_4[1] = rsi_2
        __builtin_memset(&rdi_4[2], 0, 0x18)
        *rdi_4 = &data_142d84f30
        rdi_4[5] = 0
        rdi_4[6] = 0
        rdi_4[7] = &result[2]
    
    void*** rax_74 = sub_140666a60(rdi_4)
    
    if (rax_74 != 0)
        rax_74[1].d += 1
        
        if (rax_74 != 0)
            rax_74[1].d -= 1
            
            if (rax_74[1].d == 1)
                (**rax_74)(rax_74)
                int32_t temp1_1 = *(rax_74 + 0xc)
                *(rax_74 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*rax_74)[1](rax_74, 1)
    
    int64_t* rbx_17 = rax_20
    int64_t* var_1e0 = var_728
    int64_t* var_1d8_1 = rbx_17
    
    if (rbx_17 != 0)
        rbx_17[1].d += 1
    
    void*** rax_78 = sub_140666b20(&var_1e0)
    void* var_2c0 = &rax_78[2]
    sub_140667df0(&var_2c0, rdi_4, 1)
    
    if (rax_78 != 0)
        rax_78[1].d -= 1
        
        if (rax_78[1].d == 1)
            (**rax_78)(rax_78)
            int32_t temp4_1 = *(rax_78 + 0xc)
            *(rax_78 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rax_78)[1](rax_78, 1)
    
    if (rbx_17 != 0)
        rbx_17[1].d -= 1
        
        if (rbx_17[1].d == 1)
            (**rbx_17)(rbx_17)
            int32_t temp5_1 = *(rbx_17 + 0xc)
            *(rbx_17 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_17 + 8))(rbx_17, 1)
    
    int32_t rax_83 = result[3].d
    uint64_t r8_23 = zx.q(rax_83 - 1)
    
    if (rax_83 == 0)
        r8_23 = 0
    
    int64_t var_1d0
    sub_140a2e390(&var_1d0, Gameplay Automation Screenshot Metadata Serialized to %d characters", 
        r8_23)
    sub_140b19e60()
    sub_140b1f5f0(&data_1439a8bd0, &var_1d0)
    int64_t rcx_237 = var_1d0
    
    if (rcx_237 != 0)
        sub_140a74f90(rcx_237)
    
    int16_t* var_4b8 = nullptr
    int32_t var_4b0_1 = 0
    sub_1405947f0(&var_4b8, 8)
    int32_t rbx_18 = var_4b0_1 + 8
    
    if (rbx_18 s> 0)
        sub_140594770(&var_4b8)
    
    int16_t* rsi_3 = var_4b8
    sub_1405a7220(rsi_3, 8, "Windows", 8, 0x3f)
    int64_t var_118
    int64_t* rax_84
    int32_t r8_24
    rax_84, r8_24 = sub_140b0e560(&var_118)
    int64_t var_290
    sub_140596690(&var_290, rax_84, sbb.d(r8_24, r8_24, rax_84[1].d != 0) + 0xa)
    sub_140a2cf70(&var_290, u"Incoming", 8)
    int32_t rax_85 = result[7].d
    int32_t rdi_7 = rax_85 - 1
    
    if (rax_85 == 0)
        rdi_7 = 0
    
    int32_t var_288
    int32_t rax_87
    
    if (var_288 != 0 || rdi_7 == 0xffffffff)
        rax_87 = 1
    else
        rax_87 = 2
    
    int64_t var_2a0
    sub_140596690(&var_2a0, &var_290, rdi_7 + rax_87)
    sub_140a2cf70(&var_2a0, result[6], rdi_7)
    int32_t rax_88 = result[1].d
    int32_t rdi_8 = rax_88 - 1
    
    if (rax_88 == 0)
        rdi_8 = 0
    
    int32_t var_298
    int32_t rax_90
    
    if (var_298 == 0)
        rax_90 = 2
    
    if (var_298 != 0 || rdi_8 == 0xffffffff)
        rax_90 = 1
    
    int64_t var_2b0
    sub_140596690(&var_2b0, &var_2a0, rdi_8 + rax_90)
    sub_140a2cf70(&var_2b0, *result, rdi_8)
    int32_t rbx_19
    
    if (rbx_18 == 0)
        rbx_19 = 0
    else
        rbx_19 = rbx_18 - 1
    
    int32_t var_2a8
    int32_t rax_92
    
    if (var_2a8 == 0)
        rax_92 = 2
    
    if (var_2a8 != 0 || rbx_19 == 0xffffffff)
        rax_92 = 1
    
    int64_t var_4a8
    sub_140596690(&var_4a8, &var_2b0, rbx_19 + rax_92)
    sub_140a2cf70(&var_4a8, rsi_3, rbx_19)
    
    if (&result[4] == &var_4a8)
        int64_t rcx_252 = var_4a8
        
        if (rcx_252 != 0)
            sub_140a74f90(rcx_252)
    else
        int64_t rcx_251 = result[4]
        
        if (rcx_251 != 0)
            sub_140a74f90(rcx_251)
        
        result[4] = var_4a8
        int32_t var_4a0
        result[5].d = var_4a0
        int32_t var_49c
        *(result + 0x2c) = var_49c
        var_4a0.q = 0
        var_4a8 = 0
    
    int64_t rcx_253 = var_2b0
    
    if (rcx_253 != 0)
        sub_140a74f90(rcx_253)
    
    int64_t rcx_254 = var_2a0
    
    if (rcx_254 != 0)
        sub_140a74f90(rcx_254)
    
    int64_t rcx_255 = var_290
    
    if (rcx_255 != 0)
        sub_140a74f90(rcx_255)
    
    int64_t rcx_256 = var_118
    
    if (rcx_256 != 0)
        sub_140a74f90(rcx_256)
    
    if (rsi_3 != 0)
        sub_140a74f90(rsi_3)
    
    uint64_t rdi_9 = 0
    int32_t rbx_21 = 0
    int16_t* var_410
    sub_14205d6f0(&var_410)
    int64_t var_448 = 0
    int32_t var_440_1 = 0
    int64_t var_c8
    int64_t* rax_96
    int32_t r8_33
    rax_96, r8_33 = sub_140b63b70(&data_143f426f8, &var_c8)
    int16_t* var_2e0
    sub_140596690(&var_2e0, rax_96, sbb.d(r8_33, r8_33, rax_96[1].d != 0) + 2)
    sub_140a20ba0(&var_2e0, &data_142e1462c, 1)
    int64_t rcx_262 = var_c8
    
    if (rcx_262 != 0)
        sub_140a74f90(rcx_262)
    
    int16_t* const rdx_105 = &data_142d40450
    int32_t var_2d8
    
    if (var_2d8 != 0)
        rdx_105 = var_2e0
    
    int16_t* rcx_263 = &data_142d40450
    int32_t var_408
    
    if (var_408 != 0)
        rcx_263 = var_410
    
    if (sub_140b2acc0(rcx_263, rdx_105, &var_448, 1) != 0)
        int64_t var_488 = 0
        sub_140596860(&var_488, 0, 0, 0, 2)
        sub_140a20ba0(&var_488, &data_142d99650, 1)
        int32_t var_480
        int32_t rcx_266 = var_480
        int64_t rsi_4 = var_488
        int64_t var_280 = rsi_4
        var_488 = 0
        int32_t var_278_1 = rcx_266
        int32_t var_47c
        int32_t var_274_1 = var_47c
        var_480.q = 0
        
        if (rcx_266 s> 1)
            int32_t rbx_23
            
            if (var_440_1 == 0)
                rbx_23 = 0
            else
                rbx_23 = var_440_1 - 1
            
            int32_t rax_99
            
            if (rcx_266 == 0)
                rax_99 = 1
            
            if (rcx_266 != 0 || rbx_23 == 0)
                rax_99 = 0
            
            uint64_t var_210
            sub_140596690(&var_210, &var_280, rbx_23 + rax_99)
            sub_140a20ba0(&var_210, var_448, rbx_23)
            int32_t var_208
            rbx_21 = var_208
            rdi_9 = var_210
            rsi_4 = var_280
            int32_t var_318_2 = rbx_21
        else
            rbx_21 = var_440_1
            int64_t rdi_10 = var_448
            uint64_t var_320 = 0
            
            if (rbx_21 != 0)
                sub_1405a4c70(&var_320, rbx_21, 0)
                rdi_9 = var_320
                memcpy(rdi_9, rdi_10, rbx_21 * 2)
            else
                rdi_9 = 0
        
        if (rsi_4 != 0)
            sub_140a74f90(rsi_4)
    
    int64_t var_718 = 0
    int32_t var_710_1 = 0
    int64_t var_108
    int64_t* rax_100
    int32_t r8_41
    rax_100, r8_41 = sub_140b63b70(&data_143f42c08, &var_108)
    int16_t* var_2f0
    sub_140596690(&var_2f0, rax_100, sbb.d(r8_41, r8_41, rax_100[1].d != 0) + 2)
    sub_140a20ba0(&var_2f0, &data_142e1462c, 1)
    int64_t rcx_275 = var_108
    
    if (rcx_275 != 0)
        sub_140a74f90(rcx_275)
    
    int16_t* rdx_112 = &data_142d40450
    int16_t* rcx_276 = &data_142d40450
    int32_t var_2e8
    
    if (var_2e8 != 0)
        rdx_112 = var_2f0
    
    if (var_408 != 0)
        rcx_276 = var_410
    
    char rax_101
    int32_t rcx_277
    rax_101, rcx_277 = sub_140b2acc0(rcx_276, rdx_112, &var_718, 1)
    
    if (rax_101 != 0)
        int64_t var_478 = 0
        sub_140596860(&var_478, rdi_9, rbx_21, 0, sbb.d(rcx_277, rcx_277, rbx_21 != 0) + 2)
        sub_140a20ba0(&var_478, &data_142d99650, 1)
        int32_t var_470
        int32_t rcx_282 = var_470
        int64_t r14 = var_478
        int64_t var_270 = r14
        var_478 = 0
        int32_t var_268_1 = rcx_282
        int32_t var_46c
        int32_t var_264_1 = var_46c
        var_470.q = 0
        uint64_t rsi_6
        
        if (rcx_282 s> 1)
            int32_t rbx_25
            
            if (var_710_1 == 0)
                rbx_25 = 0
            else
                rbx_25 = var_710_1 - 1
            
            int32_t rax_105
            
            if (rcx_282 == 0)
                rax_105 = rcx_282 + 1
            
            if (rcx_282 != 0 || rbx_25 == 0)
                rax_105 = 0
            
            uint64_t var_3c0
            sub_140596690(&var_3c0, &var_270, rax_105 + rbx_25)
            sub_140a20ba0(&var_3c0, var_718, rbx_25)
            int32_t var_3b8
            rbx_21 = var_3b8
            rsi_6 = var_3c0
            r14 = var_270
            var_3c0 = 0
            int32_t var_388_2 = rbx_21
            var_3b8.q = 0
        else
            rbx_21 = var_710_1
            int64_t rsi_5 = var_718
            uint64_t var_390 = 0
            
            if (rbx_21 != 0)
                sub_1405a4c70(&var_390, rbx_21, 0)
                rsi_6 = var_390
                memcpy(rsi_6, rsi_5, rbx_21 * 2)
            else
                rsi_6 = 0
        
        if (rdi_9 != 0)
            sub_140a74f90(rdi_9)
        
        rdi_9 = rsi_6
        
        if (r14 != 0)
            sub_140a74f90(r14)
    
    int64_t var_300 = 0
    int64_t var_2f8_1 = 0
    int64_t var_f8
    int64_t* rax_106
    int32_t r8_50
    rax_106, r8_50 = sub_140b63b70(&data_143f42d08, &var_f8)
    int16_t* var_310
    sub_140596690(&var_310, rax_106, sbb.d(r8_50, r8_50, rax_106[1].d != 0) + 2)
    sub_140a20ba0(&var_310, &data_142e1462c, 1)
    int64_t rcx_292 = var_f8
    
    if (rcx_292 != 0)
        sub_140a74f90(rcx_292)
    
    int16_t* r13_1 = var_310
    int16_t* rdx_120 = &data_142d40450
    int32_t var_308
    
    if (var_308 != 0)
        rdx_120 = r13_1
    
    int16_t* rcx_293 = &data_142d40450
    
    if (var_408 != 0)
        rcx_293 = var_410
    
    char rax_107
    int32_t rcx_300
    rax_107, rcx_300 = sub_140b2acc0(rcx_293, rdx_120, &var_300, 1)
    
    if (rax_107 != 0)
        int64_t var_468 = 0
        sub_140596860(&var_468, rdi_9, rbx_21, 0, sbb.d(rcx_300, rcx_300, rbx_21 != 0) + 2)
        sub_140a20ba0(&var_468, &data_142d99650, 1)
        int32_t var_460
        int32_t rcx_298 = var_460
        int64_t rsi_7 = var_468
        int64_t var_260 = rsi_7
        var_468 = 0
        int32_t var_258_1 = rcx_298
        int32_t var_45c
        int32_t var_254_1 = var_45c
        var_460.q = 0
        uint64_t r14_1
        uint64_t var_378
        
        if (rcx_298 s> 1)
            int32_t rbx_27
            
            if (var_710_1 == 0)
                rbx_27 = 0
            else
                rbx_27 = var_710_1 - 1
            
            int32_t rax_111
            
            if (rcx_298 == 0)
                rax_111 = 1
            
            if (rcx_298 != 0 || rbx_27 == 0)
                rax_111 = 0
            
            uint64_t var_400
            sub_140596690(&var_400, &var_260, rax_111 + rbx_27)
            rcx_300 = sub_140a20ba0(&var_400, var_718, rbx_27)
            r14_1 = var_400
            int32_t var_3f8
            rbx_21 = var_3f8
            rsi_7 = var_260
            var_378 = r14_1
            var_400 = 0
            int32_t var_370_1 = rbx_21
            var_3f8.q = 0
        else
            int64_t rdx_122 = var_718
            var_378 = 0
            rcx_300 = sub_140596860(&var_378, rdx_122, var_710_1, 0, 0)
            int32_t var_370
            rbx_21 = var_370
            r14_1 = var_378
        
        if (rdi_9 != 0)
            rcx_300 = sub_140a74f90(rdi_9)
        
        rdi_9 = r14_1
        
        if (rsi_7 != 0)
            rcx_300 = sub_140a74f90(rsi_7)
    
    uint64_t var_458 = 0
    sub_140596860(&var_458, rdi_9, rbx_21, 0, sbb.d(rcx_300, rcx_300, rbx_21 != 0) + 2)
    sub_140a20ba0(&var_458, &data_142d99650, 1)
    int32_t var_450
    int32_t rcx_309 = var_450
    uint64_t r14_2 = var_458
    uint64_t var_250 = r14_2
    var_458 = 0
    int32_t var_248_1 = rcx_309
    int32_t var_44c
    int32_t var_244_1 = var_44c
    var_450.q = 0
    int32_t rbx_28
    int16_t* rsi_8
    int32_t r15_1
    int16_t* var_3b0
    
    if (rcx_309 s> 1)
        int32_t rbx_30
        
        if (var_490_1 == 0)
            rbx_30 = 0
        else
            rbx_30 = var_490_1 - 1
        
        int32_t rax_115
        
        if (rcx_309 == 0)
            rax_115 = rcx_309 + 1
        
        if (rcx_309 != 0 || rbx_30 == 0)
            rax_115 = 0
        
        int16_t* var_438
        sub_140596690(&var_438, &var_250, rbx_30 + rax_115)
        sub_140a20ba0(&var_438, var_498, rbx_30)
        rsi_8 = var_438
        int32_t var_430
        rbx_28 = var_430
        r14_2 = var_250
        var_438 = nullptr
        int32_t var_42c
        r15_1 = var_42c
        int32_t var_3a4_1 = r15_1
        var_430.q = 0
        var_3b0 = rsi_8
        int32_t var_3a8_1 = rbx_28
    else
        sub_140596d10(&var_3b0, &var_498)
        int32_t var_3a4
        r15_1 = var_3a4
        int32_t var_3a8
        rbx_28 = var_3a8
        rsi_8 = var_3b0
    
    if (rdi_9 != 0)
        sub_140a74f90(rdi_9)
    
    int16_t* var_3a0 = rsi_8
    int32_t var_394_1 = r15_1
    
    if (r14_2 != 0)
        sub_140a74f90(r14_2)
    
    if (rbx_28 != 0)
        int32_t r8_61 = rbx_28 - 1
        
        if (r8_61 s> 0)
            if (r8_61 s> 1)
                r8_61 = 1
            
            sub_1405a4810(&var_3a0, 0, r8_61, 0)
            rsi_8 = var_3a0
    
    int32_t rbx_31
    
    if (rbx_28 == 0 || rbx_28 == 0)
        rbx_31 = 0
    else
        rbx_31 = rbx_28 - 1
    
    void* r14_3 = var_380
    int32_t r8_62 = *(r14_3 + 8)
    int32_t rax_117
    int32_t r15_2
    
    if (r8_62 != 0 || rbx_31 == 0xffffffff)
        rax_117 = 1
        r15_2 = 2
    else
        r15_2 = 2
        rax_117 = 2
    
    int64_t rdx_129 = *r14_3
    int64_t var_240 = 0
    sub_140596860(&var_240, rdx_129, r8_62, 0, rax_117 + rbx_31)
    sub_140a2cf70(&var_240, rsi_8, rbx_31)
    sub_140597da0(r14_3, &var_240)
    int64_t rcx_319 = var_240
    
    if (rcx_319 != 0)
        sub_140a74f90(rcx_319)
    
    int64_t var_e8
    int64_t* rax_119 = sub_140a47220(&var_e8)
    int32_t r8_64 = *(r14_3 + 8)
    int32_t rcx_321 = rax_119[1].d
    int32_t rbx_32 = rcx_321 - 1
    
    if (rcx_321 == 0)
        rbx_32 = 0
    
    if (r8_64 != 0 || rbx_32 == 0xffffffff)
        r15_2 = 1
    
    int64_t rdx_132 = *r14_3
    int64_t var_368 = 0
    sub_140596860(&var_368, rdx_132, r8_64, 0, r15_2 + rbx_32)
    int32_t r8_66 = sub_140a2cf70(&var_368, *rax_119, rbx_32)
    int64_t var_420
    int32_t var_360
    sub_140596690(&var_420, &var_368, sbb.d(r8_66, r8_66, var_360 != 0) + 5)
    sub_140a20ba0(&var_420, u".png", 4)
    int64_t var_230 = var_420
    int32_t var_418
    int32_t var_228_1 = var_418
    int32_t var_414
    int32_t var_224_1 = var_414
    var_418.q = 0
    var_420 = 0
    sub_140597da0(r14_3, &var_230)
    int64_t rcx_328 = var_230
    
    if (rcx_328 != 0)
        sub_140a74f90(rcx_328)
    
    int64_t rcx_329 = var_368
    
    if (rcx_329 != 0)
        sub_140a74f90(rcx_329)
    
    int64_t rcx_330 = var_e8
    
    if (rcx_330 != 0)
        sub_140a74f90(rcx_330)
    
    void*** var_d8
    void**** rax_126 = sub_1408eec60(&var_d8)
    void* rcx_332 = rax_126[1]
    void*** rdx_136 = *rax_126
    void*** var_358 = rdx_136
    void* var_350 = rcx_332
    
    if (rcx_332 != 0)
        *(rcx_332 + 8) += 1
        rsi_8 = var_3a0
        r13_1 = var_310
    
    if (&result[9] != &var_358)
        result[9] = rdx_136
        var_358 = nullptr
        sub_1405aeff0(&result[0xa], &var_350)
    
    sub_1405970a0(&var_358)
    sub_1405970a0(&var_d8)
    int16_t* const r8_69 = &data_142d40450
    
    if (*(r14_3 + 8) != 0)
        *r14_3
    
    result = arg1
    
    if (result[1].d != 0)
        r8_69 = *result
    
    int64_t var_1c0
    sub_140a2e390(&var_1c0, u"Determined Path for screenshot "%s" to be %s", r8_69)
    sub_140b19e60()
    sub_140b1f5f0(&data_1439a8bd0, &var_1c0)
    int64_t rcx_338 = var_1c0
    
    if (rcx_338 != 0)
        sub_140a74f90(rcx_338)
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)
    
    int64_t rcx_340 = var_300
    
    if (rcx_340 != 0)
        sub_140a74f90(rcx_340)
    
    int16_t* rax_127 = var_2f0
    
    if (rax_127 != 0)
        sub_140a74f90(rax_127)
    
    int64_t rcx_342 = var_718
    
    if (rcx_342 != 0)
        sub_140a74f90(rcx_342)
    
    int16_t* rax_128 = var_2e0
    
    if (rax_128 != 0)
        sub_140a74f90(rax_128)
    
    int64_t rcx_344 = var_448
    
    if (rcx_344 != 0)
        sub_140a74f90(rcx_344)
    
    int16_t* rcx_345 = var_410
    
    if (rcx_345 != 0)
        sub_140a74f90(rcx_345)
    
    if (rsi_8 != 0)
        sub_140a74f90(rsi_8)
    
    if (rax_74 != 0)
        rax_74[1].d -= 1
        
        if (rax_74[1].d == 1)
            (**rax_74)(rax_74)
            int32_t temp15_1 = *(rax_74 + 0xc)
            *(rax_74 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*rax_74)[1](rax_74, 1)
    
    int64_t var_168
    
    if (var_168 != 0)
        sub_140a74f90(var_168)
    
    int64_t var_178
    
    if (var_178 != 0)
        sub_140a74f90(var_178)
    
    int64_t rcx_351 = var_498
    
    if (rcx_351 != 0)
        sub_140a74f90(rcx_351)
    
    sub_140669d70(&var_728)
    r12 = arg4

int64_t rcx_355 = *arg2

if (rcx_355 != 0)
    sub_140a74f90(rcx_355)

int64_t rcx_356 = *r12

if (rcx_356 != 0)
    sub_140a74f90(rcx_356)

return result
