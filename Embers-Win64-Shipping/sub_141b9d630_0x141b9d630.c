// 函数: sub_141b9d630
// 地址: 0x141b9d630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_878
uint64_t result = __security_cookie ^ &var_878
uint64_t result_1 = result

if (arg3 != 0)
    void* var_788
    sub_140e14af0(*(*(data_143e29f28 + 0x20) + 8), &var_788)
    *(arg3 + 0xc)
    int16_t rax_2
    int32_t zmm6_1
    rax_2, zmm6_1 = sub_140da8a50(var_788, arg4 + 8, 0x3f800000)
    bool cond:1_1 = arg5[1].b == 0
    uint128_t zmm0_1 = _mm_min_ss(_mm_cvtepi32_ps(zx.o(rax_2)).d, zmm6_1)
    uint128_t zmm1_1 = zmm0_1
    
    if (not(cond:1_1))
        zmm1_1 = _mm_cvtepi32_ps(zx.o(*arg5))
    
    if (arg6[1].b != 0)
        zmm0_1 = _mm_cvtepi32_ps(zx.o(*arg6))
    
    int32_t var_818_1 = zmm1_1.d
    int64_t var_768 = 0
    int32_t var_760_1 = 0
    int64_t var_798 = 0
    int32_t var_790_1 = 0
    int64_t var_7b0 = 0
    int32_t var_7a8_1 = 0
    int64_t var_810 = 0
    int32_t var_808_1 = 0
    int64_t var_828 = 0
    int32_t var_820_1 = 0
    int32_t var_830_1 = zmm0_1.d
    void* var_778_1 = arg3
    char var_770_1 = 1
    int32_t var_7a0_1 = 1
    char var_79c_1 = 1
    int32_t var_7b8_1 = arg7
    char var_7b4_1 = 1
    char var_814_1 = 1
    char var_82c_1 = 1
    void var_510
    int64_t* rax_4 = sub_140e4fb70(&var_510)
    rax_4[0x34] = arg3
    rax_4[0x35].b = 1
    sub_140692f90(&rax_4[0x36], &var_768)
    void*** rax_5 = sub_140e48c50()
    void* var_7d0 = &rax_5[2]
    sub_140918950(&var_7d0, &rax_5[2])
    int64_t var_858_1 = 0x3a8
    void var_848
    void* var_7c0_1 = &var_848
    void* var_738
    void** rax_6 = sub_140e56930(&var_7d0, &var_738, rax_4, sub_140e23ed0(&rax_5[2], "SImage"))
    int64_t* rbx_2 = rax_6[1]
    int64_t* rdi_2 = *rax_6
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    void var_728
    int64_t* rax_7 = sub_14068d5a0(&var_728)
    rax_7[0x3a].d = arg7
    *(rax_7 + 0x1d4) = 1
    sub_140692f90(&rax_7[0x3b], &var_7b0)
    rax_7[0x37].d = 1
    *(rax_7 + 0x1bc) = 1
    sub_1407473e0(&rax_7[0x38], &var_798)
    int64_t* var_840 = rdi_2
    int64_t* rdi_3 = rbx_2
    *(rax_7 + 0x1b4) = 2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    if (&var_840 != &rax_7[0x34])
        var_840.o = *(rax_7 + 0x1a0)
        rdi_3 = rbx_2
        *(rax_7 + 0x1a0) = var_840.o
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp2_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp3_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    void*** rax_13 = sub_1406889c0()
    int64_t* var_7e8 = &rax_13[2]
    sub_14065fa30(&var_7e8, &rax_13[2])
    int64_t var_858_2 = 0x470
    void var_847
    void* var_7d8_1 = &var_847
    int64_t* var_748
    int64_t** rax_14 =
        sub_140696d20(&var_7e8, &var_748, rax_7, sub_140e23ed0(&rax_13[2], "SScaleBox"))
    var_840 = *rax_14
    void* rcx_19 = rax_14[1]
    void* var_838_2 = rcx_19
    
    if (rcx_19 != 0)
        *(rcx_19 + 8) += 1
    
    void var_2f8
    int64_t* rax_15 = sub_14068c940(&var_2f8)
    rax_15[0x3f].d = var_830_1
    *(rax_15 + 0x1fc) = 1
    
    if (&var_828 != &rax_15[0x40] && rax_15[0x41].d != 0)
        int64_t* rcx_21 = rax_15[0x40]
        
        if (rcx_21 != 0)
            (*(*rcx_21 + 0x38))(rcx_21, 0)
            int64_t rcx_22 = rax_15[0x40]
            
            if (rcx_22 != 0)
                rax_15[0x40] = sub_140a84c80(rcx_22, 0, 0)
            
            rax_15[0x41].d = 0
    
    rax_15[0x3c].d = var_818_1
    *(rax_15 + 0x1e4) = 1
    
    if (&var_810 != &rax_15[0x3d] && rax_15[0x3e].d != 0)
        int64_t* rcx_23 = rax_15[0x3d]
        
        if (rcx_23 != 0)
            (*(*rcx_23 + 0x38))(rcx_23, 0)
            int64_t rcx_24 = rax_15[0x3d]
            
            if (rcx_24 != 0)
                rax_15[0x3d] = sub_140a84c80(rcx_24, 0, 0)
            
            rax_15[0x3e].d = 0
    
    void*** rax_20 = j_sub_140a82f30(0x3d8)
    void*** rdi_4 = rax_20
    
    if (rax_20 == 0)
        rdi_4 = nullptr
    else
        rax_20[1].d = 1
        *(rax_20 + 0xc) = 1
        *rdi_4 = &data_142d8c570
        
        if (rdi_4 != -0x10)
            sub_140f20750(&rdi_4[2])
    
    void* var_800 = &rdi_4[2]
    sub_14065fa30(&var_800, &rdi_4[2])
    int64_t var_858_3 = 0x3c8
    void var_846
    void* var_7f0_1 = &var_846
    void* rax_21
    int128_t zmm1_6
    rax_21, zmm1_6 = sub_1406937a0(rax_15, &var_840, sub_140e23ed0(&rdi_4[2], "SBox"))
    void* var_758
    void** rax_22 = sub_140695d20(&var_800, &var_758, rax_21, zmm1_6)
    int64_t* rbx_7 = rax_22[1]
    var_840 = *rax_22
    int64_t* var_838_3 = rbx_7
    
    if (rbx_7 != 0)
        rbx_7[1].d += 1
    
    sub_140de1b90(arg1 + 0x2b8, &var_840)
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            (**rbx_7)(rbx_7)
            int32_t temp6_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_7 + 8))(rbx_7, 1)
    
    int64_t* var_750
    
    if (var_750 != 0)
        var_750[1].d -= 1
        
        if (var_750[1].d == 1)
            (**var_750)(var_750)
            int32_t temp8_1 = *(var_750 + 0xc)
            *(var_750 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*var_750 + 8))(var_750, 1)
    
    if (rdi_4 != 0)
        rdi_4[1].d -= 1
        
        if (rdi_4[1].d == 1)
            (**rdi_4)(rdi_4)
            int32_t temp10_1 = *(rdi_4 + 0xc)
            *(rdi_4 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*rdi_4)[1](rdi_4, 1)
    
    sub_140690290(&var_2f8)
    int64_t* var_740
    
    if (var_740 != 0)
        var_740[1].d -= 1
        
        if (var_740[1].d == 1)
            (**var_740)(var_740)
            int32_t temp12_1 = *(var_740 + 0xc)
            *(var_740 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*var_740 + 8))(var_740, 1)
    
    if (rax_13 != 0)
        rax_13[1].d -= 1
        
        if (rax_13[1].d == 1)
            (**rax_13)(rax_13)
            int32_t temp14_1 = *(rax_13 + 0xc)
            *(rax_13 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*rax_13)[1](rax_13, 1)
    
    void var_520
    sub_140745b20(&var_520)
    void var_538
    sub_140745b20(&var_538)
    void var_550
    sub_140745b20(&var_550)
    void var_568
    sub_140745b20(&var_568)
    int64_t* var_580
    
    if (var_580 != 0)
        var_580[1].d -= 1
        
        if (var_580[1].d == 1)
            (**var_580)(var_580)
            int32_t temp16_1 = *(var_580 + 0xc)
            *(var_580 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*var_580 + 8))(var_580, 1)
    
    sub_140660250(&var_728)
    int64_t* var_730
    
    if (var_730 != 0)
        var_730[1].d -= 1
        
        if (var_730[1].d == 1)
            (**var_730)(var_730)
            int32_t temp18_1 = *(var_730 + 0xc)
            *(var_730 + 0xc) -= 1
            
            if (temp18_1 == 1)
                (*(*var_730 + 8))(var_730, 1)
    
    if (rax_5 != 0)
        rax_5[1].d -= 1
        
        if (rax_5[1].d == 1)
            (**rax_5)(rax_5)
            int32_t temp20_1 = *(rax_5 + 0xc)
            *(rax_5 + 0xc) -= 1
            
            if (temp20_1 == 1)
                (*rax_5)[1](rax_5, 1)
    
    void var_308
    sub_140745b20(&var_308)
    void var_320
    sub_140745b20(&var_320)
    int64_t* var_330
    
    if (var_330 != 0)
        var_330[1].d -= 1
        
        if (var_330[1].d == 1)
            (**var_330)(var_330)
            int32_t temp22_1 = *(var_330 + 0xc)
            *(var_330 + 0xc) -= 1
            
            if (temp22_1 == 1)
                (*(*var_330 + 8))(var_330, 1)
    
    void var_360
    sub_140745b20(&var_360)
    sub_140ddea30(&var_510)
    sub_140745b20(&var_828)
    sub_140745b20(&var_810)
    sub_140745b20(&var_7b0)
    sub_140745b20(&var_798)
    result = sub_140745b20(&var_768)
    int64_t* var_780
    
    if (var_780 != 0)
        var_780[1].d -= 1
        
        if (var_780[1].d == 1)
            result = (**var_780)(var_780)
            int32_t temp23_1 = *(var_780 + 0xc)
            *(var_780 + 0xc) -= 1
            
            if (temp23_1 == 1)
                result = (*(*var_780 + 8))(var_780, 1)

if (arg5[1].b != 0)
    arg5[1].b = 0

if (arg6[1].b != 0)
    arg6[1].b = 0

__security_check_cookie(result_1 ^ &var_878)
return result
