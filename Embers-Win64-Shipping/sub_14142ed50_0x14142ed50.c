// 函数: sub_14142ed50
// 地址: 0x14142ed50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_bc8
void** const result = __security_cookie ^ &var_bc8
void** const result_1 = result
void* r13 = arg3

if (*(arg3 + 8) != 0)
    int128_t zmm0 = data_143f02308
    int32_t var_9f8_1 = data_143f02318
    char var_b90_1 = 0
    char var_b98_1 = 1
    char var_ba0_1 = 1
    wchar16 const* const var_ba8_1 = u"HZBBoundsCenter"
    int64_t* var_b40 = nullptr
    int64_t* var_b48 = nullptr
    int16_t var_9d0_1 = 0
    int128_t var_a08 = zmm0
    int32_t var_9f4_1 = 0x100
    int64_t var_9f0_1 = 0x100
    int32_t var_9e8_1 = 1
    int32_t var_9e4_1 = 0x10000
    int16_t var_9e0_1 = 1
    int32_t var_9dc_1 = 1
    int64_t var_9d8_1 = 0x108
    wchar16 const* const var_9c8_1 = u"UnknownTexture2D"
    int16_t var_9c0_1 = 1
    char var_9be_1 = 0
    sub_1419a0ce0(&data_1439c9260, arg2, &var_a08, &var_b40, var_ba8_1, var_ba0_1, var_b98_1, 
        var_b90_1)
    sub_1419a0ce0(&data_1439c9260, arg2, &var_a08, &var_b48, u"HZBBoundsExtent", 1, 1, 0)
    char var_b90_3 = 0
    int32_t var_9a8_1 = data_143f02318
    char var_b98_3 = 1
    char var_ba0_3 = 1
    int128_t var_9b8 = data_143f02308
    wchar16 const* const var_ba8_3 = u"HZBResultsGPU"
    int64_t* var_b50 = nullptr
    int16_t var_980_1 = 0
    int32_t var_9a4_1 = 0x100
    int64_t var_9a0_1 = 0x100
    int32_t var_998_1 = 1
    int32_t var_994_1 = 0x10000
    int16_t var_990_1 = 1
    int64_t var_98c_1 = 2
    int32_t var_984_1 = 9
    wchar16 const* const var_978_1 = u"UnknownTexture2D"
    int16_t var_970_1 = 1
    char var_96e_1 = 0
    sub_1419a0ce0(&data_1439c9260, arg2, &var_9b8, &var_b50, var_ba8_3, var_ba0_3, var_b98_3, 
        var_b90_3)
    int32_t r12_1 = *(arg1 + 0x18)
    int32_t rsi_1 = 0
    int128_t var_878
    int64_t var_868
    int64_t var_860
    int64_t var_858
    
    if (r12_1 != 0)
        do
            uint32_t i_1 = 0
            uint64_t r11_2 = zx.q(r12_1 - rsi_1)
            
            if (r11_2.d u>= 0x40)
                r11_2 = 0x40
            
            char var_850
            void var_84c
            void var_458
            void var_454
            void var_450
            void var_44c
            
            if (r11_2.d u>= 4)
                int64_t r9_4 = *(arg1 + 0x10)
                int64_t r8_3 = 0
                uint64_t rax_5 = zx.q(((r11_2 - 4).d u>> 2) + 1)
                int32_t rdi_1 = rsi_1
                uint64_t i_3 = zx.q(rax_5.d)
                i_1 = (rax_5 << 2).d
                uint64_t i
                
                do
                    int64_t rdx_2 = sx.q(rdi_1)
                    r8_3 += 0x40
                    rdi_1 += 4
                    int64_t rcx = rdx_2 * 3
                    int128_t var_888
                    *(&var_888 + r8_3) = *(r9_4 + (rcx << 3))
                    *(&var_888:4 + r8_3) = *(r9_4 + (rcx << 3) + 4)
                    *(&var_888:8 + r8_3) = *(r9_4 + (rcx << 3) + 8)
                    *(&var_888:0xc + r8_3) = 0
                    void var_488
                    *(&var_488 + r8_3) = *(r9_4 + (rcx << 3) + 0xc)
                    void var_484
                    *(&var_484 + r8_3) = *(r9_4 + (rcx << 3) + 0x10)
                    int64_t rcx_1 = rdx_2 * 3
                    void var_480
                    *(&var_480 + r8_3) = *(r9_4 + (rcx << 3) + 0x14)
                    void var_47c
                    *(&var_47c + r8_3) = 0x3f800000
                    *(&var_878 + r8_3) = *(r9_4 + (rcx_1 << 3) + 0x18)
                    *(&var_878:4 + r8_3) = *(r9_4 + (rcx_1 << 3) + 0x1c)
                    *(&var_878:8 + r8_3) = *(r9_4 + (rcx_1 << 3) + 0x20)
                    *(&var_878:0xc + r8_3) = 0
                    void var_478
                    *(&var_478 + r8_3) = *(r9_4 + (rcx_1 << 3) + 0x24)
                    void var_474
                    *(&var_474 + r8_3) = *(r9_4 + (rcx_1 << 3) + 0x28)
                    int64_t rcx_2 = rdx_2 * 3
                    void var_470
                    *(&var_470 + r8_3) = *(r9_4 + (rcx_1 << 3) + 0x2c)
                    void var_46c
                    *(&var_46c + r8_3) = 0x3f800000
                    *(&var_868 + r8_3) = *(r9_4 + (rcx_2 << 3) + 0x30)
                    *(&var_868:4 + r8_3) = *(r9_4 + (rcx_2 << 3) + 0x34)
                    *(&var_860 + r8_3) = *(r9_4 + (rcx_2 << 3) + 0x38)
                    *(&var_860:4 + r8_3) = 0
                    void var_468
                    *(&var_468 + r8_3) = *(r9_4 + (rcx_2 << 3) + 0x3c)
                    void var_464
                    *(&var_464 + r8_3) = *(r9_4 + (rcx_2 << 3) + 0x40)
                    int64_t rcx_3 = rdx_2 * 3
                    void var_460
                    *(&var_460 + r8_3) = *(r9_4 + (rcx_2 << 3) + 0x44)
                    void var_45c
                    *(&var_45c + r8_3) = 0x3f800000
                    *(&var_858 + r8_3) = *(r9_4 + (rcx_3 << 3) + 0x48)
                    *(&var_858:4 + r8_3) = *(r9_4 + (rcx_3 << 3) + 0x4c)
                    *(&var_850 + r8_3) = *(r9_4 + (rcx_3 << 3) + 0x50)
                    *(&var_84c + r8_3) = 0
                    *(&var_458 + r8_3) = *(r9_4 + (rcx_3 << 3) + 0x54)
                    *(&var_454 + r8_3) = *(r9_4 + (rcx_3 << 3) + 0x58)
                    *(&var_450 + r8_3) = *(r9_4 + (rcx_3 << 3) + 0x5c)
                    *(&var_44c + r8_3) = 0x3f800000
                    i = i_3
                    i_3 -= 1
                while (i != 1)
            
            if (i_1 u< r11_2.d)
                int64_t r9_5 = *(arg1 + 0x10)
                uint64_t r8_5 = zx.q(i_1) << 4
                
                do
                    int32_t rax_30 = i_1 + rsi_1
                    i_1 += 1
                    r8_5 += 0x10
                    int64_t rdx_3 = sx.q(rax_30) * 3
                    *(&var_858 + r8_5) = *(r9_5 + (rdx_3 << 3))
                    *(&var_858:4 + r8_5) = *(r9_5 + (rdx_3 << 3) + 4)
                    *(&var_850 + r8_5) = *(r9_5 + (rdx_3 << 3) + 8)
                    *(&var_84c + r8_5) = 0
                    *(&var_458 + r8_5) = *(r9_5 + (rdx_3 << 3) + 0xc)
                    *(&var_454 + r8_5) = *(r9_5 + (rdx_3 << 3) + 0x10)
                    *(&var_450 + r8_5) = *(r9_5 + (rdx_3 << 3) + 0x14)
                    *(&var_44c + r8_5) = 0x3f800000
                while (i_1 u< r11_2.d)
            
            void var_848
            void var_448
            
            if (r11_2.d u< 0x40)
                uint64_t rbx_1 = zx.q((r11_2 << 2).d) << 2
                memset(&var_848 + rbx_1, 0, 0x400 - rbx_1)
                memset(&var_448 + rbx_1, 0, 0x400 - rbx_1)
            
            int64_t* r8_8 = var_b40
            var_b98_3.q = &var_848
            uint32_t rcx_8 = rsi_1 u>> 6
            int64_t var_b28_1 = 0
            uint32_t var_b2c_1 = rcx_8 u>> 5 << 3
            int64_t* rcx_11 = data_143f0f180
            int32_t var_b30 = (rcx_8 & 0x1f) << 3
            int32_t var_b20_1 = 8
            int32_t var_b1c_1 = 8
            var_ba0_3.d = 0x80
            (*(*rcx_11 + 0x520))(rcx_11, &data_143f02b98, r8_8[2], 0, &var_b30, var_ba0_3, 
                var_b98_3)
            int64_t* rcx_12 = data_143f0f180
            var_b98_3.q = &var_448
            var_ba0_3.d = 0x80
            (*(*rcx_12 + 0x520))(rcx_12, &data_143f02b98, var_b48[2], 0, &var_b30, var_ba0_3, 
                var_b98_3)
            rsi_1 += 0x40
        while (rsi_1 u< r12_1)
        
        r13 = arg3
    
    bool cond:1_1 = *(arg1 + 0x1c) == 0
    *(arg1 + 0x18) = 0
    
    if (not(cond:1_1))
        sub_1410b3bb0(arg1 + 0x10, 0)
    
    int128_t zmm1_1 = data_142d3f5a0
    int64_t rcx_14 = var_b50[1]
    int64_t var_968 = rcx_14
    int32_t var_890_1 = 0
    int32_t var_88c
    __builtin_memset(&var_88c, 0xff, 0x14)
    var_878 = zmm1_1
    __builtin_memset(&var_868, 0, 0x19)
    int64_t var_960_1 = 0
    int32_t var_958_1 = 0xffffffff
    int16_t var_954_1 = 0x500
    int64_t var_8a8
    __builtin_memset(&var_8a8, 0, 0x11)
    int32_t var_894_1 = 0
    bool var_84f_1 = *(rcx_14 + 0x38) u> 1
    void var_950
    memset(&var_950, 0, 0xa8)
    int64_t rbx_4 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_44 = rbx_4 + 0x10
    
    if (rax_44 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x12)
        rbx_4 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        rax_44 = rbx_4 + 0x10
    
    wchar16 const* const rcx_17 = u"TestHZB"
    *(arg2 + 0x30) = rax_44
    wchar16 const i_2
    
    do
        i_2 = *rcx_17
        *(rcx_17 + rbx_4 - u"TestHZB") = i_2
        rcx_17 = &rcx_17[1]
    while (i_2 != 0)
    void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_45 = &rcx_20[0x27]
    
    if (rax_45 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x140)
        rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_45 = &rcx_20[0x27]
    
    *(arg2 + 0x30) = rax_45
    void**** rax_46 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_46 = rcx_20
    *(arg2 + 8) = &rcx_20[1]
    sub_1405d11b0(rcx_20, &var_968, rbx_4)
    *(arg2 + 0x1c4) = 1
    sub_1405d19b0(arg2, &var_968)
    *(arg2 + 0x178) = var_858:7.b
    *(arg2 + 0x179) = 0
    *(arg2 + 0x1c4) = 1
    int64_t var_a5c
    __builtin_memset(&var_a5c, 0, 0x43)
    int128_t var_ab8
    __builtin_memset(&var_ab8, 0, 0x30)
    int128_t var_a70_1 = zx.o(0)
    int16_t var_a18_1 = 0
    sub_140fdc870(arg2, &var_ab8)
    int64_t var_a88_1 = data_14395da00
    int64_t var_a80_1 = data_14395da18
    int64_t var_a78_1 = data_14395d9e8
    void* var_ae8
    sub_1419a2ec0(*(r13 + 0x5150), &var_ae8, &data_143f55f90, 0)
    void* r13_1 = var_ae8
    void* var_ad8
    sub_1419a2ec0(*(arg3 + 0x5150), &var_ad8, &data_143ed2b40, 0)
    var_ab8.q = data_1439c9210
    int64_t rax_53 = 0
    void* var_ae0
    
    if (r13_1 != 0)
        int64_t rdx_11 = sx.q(*(r13_1 + 0x10c))
        int64_t* rbx_7 = *(var_ae0 + 0x10)
        int64_t rax_54 = rbx_7[3]
        
        if (*(rax_54 + (rdx_11 << 3)) == 0)
            sub_1419ccf30(rbx_7, rdx_11.d)
            rax_54 = rbx_7[3]
        
        rax_53 = *(rax_54 + (rdx_11 << 3))
    
    void* rsi_3 = var_ad8
    var_ab8:8.q = rax_53
    int64_t rax_55 = 0
    
    if (rsi_3 != 0)
        int64_t rdx_12 = sx.q(*(rsi_3 + 0x10c))
        void* var_ad0
        int64_t* rbx_8 = *(var_ad0 + 0x10)
        int64_t rax_57 = rbx_8[3]
        
        if (*(rax_57 + (rdx_12 << 3)) == 0)
            sub_1419ccf30(rbx_8, rdx_12.d)
            rax_57 = rbx_8[3]
        
        rax_55 = *(rax_57 + (rdx_12 << 3))
    
    int128_t var_a98
    var_a98.q = rax_55
    int32_t var_a60_1 = 0
    sub_1419870b0(arg2, &var_ab8, 2)
    void* r9_8
    int512_t zmm2_1
    int512_t zmm3_1
    r9_8, zmm2_1, zmm3_1 = sub_141428ea0(rsi_3, arg2, arg3, var_b40[2], var_b48[2])
    void*** rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_59 = &rcx_35[5]
    
    if (rax_59 u> *(arg2 + 0x38))
        r9_8 = sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_59 = &rcx_35[5]
    
    *(arg2 + 0x30) = rax_59
    uint128_t zmm1_2 = zx.o(0)
    int64_t* rax_60 = *(arg2 + 8)
    zmm2_1.o = zx.o(0)
    *(arg2 + 0x14) += 1
    zmm3_1.o = 0x43800000
    int32_t var_b60_1 = 1
    *rax_60 = rcx_35
    *(arg2 + 8) = &rcx_35[1]
    int32_t var_b68_1 = 1
    rcx_35[1] = 0
    *rcx_35 = &data_142d54998
    void* var_ac8
    void** var_b70_1 = &var_ac8
    rcx_35[2] = 0
    rcx_35[3].d = 0
    *(rcx_35 + 0x1c) = 0x43800000
    rcx_35[4].d = 0x43800000
    *(rcx_35 + 0x24) = 0x3f800000
    int64_t var_b78_1 = 0x10000000100
    int64_t var_b80_1 = 0x100
    int32_t var_b88_1 = 0x43800000
    var_b90_3.d = 0x43800000
    var_b98_3.d = zmm1_2.d
    var_ba0_3.d = zmm1_2.d
    int64_t* var_ba8_6
    var_ba8_6.d = 0x43800000
    var_ac8 = r13_1
    void* var_ac0_1 = var_ae0
    sub_1413993b0(arg2, zmm1_2, zmm2_1, r9_8, zmm3_1, var_ba8_6.d, var_ba0_3, var_b98_3, var_b90_3, 
        var_b88_1, var_b80_1, var_b78_1, var_b70_1, var_b68_1, var_b60_1)
    sub_141096650(arg2)
    sub_1405d1550(&var_860)
    int128_t var_b18_1 = data_142d57d10
    int128_t zmm0_2 = data_142d57920
    void*** rbx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int128_t var_b08_1 = data_142d3f800
    int64_t r12_4 = *(*(arg1 + 0x20) + 0x10)
    int64_t* rsi_4 = var_b50[1]
    void* rax_64 = &rbx_11[0xa]
    
    if (rax_64 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x58)
        rbx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_64 = &rbx_11[0xa]
    
    *(arg2 + 0x30) = rax_64
    int64_t* rax_65 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_65 = rbx_11
    *(arg2 + 8) = &rbx_11[1]
    rbx_11[1] = 0
    *rbx_11 = &data_142d56628
    rbx_11[2].d = var_b18_1.d
    __builtin_memset(rbx_11 + 0x14, 0xff, 0x20)
    *(rbx_11 + 0x34) = zmm0_2:4.d
    rbx_11[7].d = zmm0_2:8.d
    *(rbx_11 + 0x3c) = zmm0_2:0xc.d
    rbx_11[8] = rsi_4
    rbx_11[9] = r12_4
    
    if ((*(*rsi_4 + 8))(rsi_4) == 0)
        int64_t* rcx_44 = rbx_11[8]
        
        if ((*(*rcx_44 + 0x18))(rcx_44) == 0)
            int64_t* rcx_45 = rbx_11[8]
            
            if ((*(*rcx_45 + 0x20))(rcx_45) == 0)
                int64_t* rcx_46 = rbx_11[8]
                (*(*rcx_46 + 0x10))(rcx_46)
    
    int64_t* rcx_47 = rbx_11[9]
    
    if ((*(*rcx_47 + 8))(rcx_47) == 0)
        int64_t* rcx_48 = rbx_11[9]
        
        if ((*(*rcx_48 + 0x18))(rcx_48) == 0)
            int64_t* rcx_49 = rbx_11[9]
            
            if ((*(*rcx_49 + 0x20))(rcx_49) == 0)
                int64_t* rcx_50 = rbx_11[9]
                (*(*rcx_50 + 0x10))(rcx_50)
    
    void* rbx_14 = *(arg1 + 0x38)
    void*** rcx_53 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_85 = &rcx_53[3]
    
    if (rax_85 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x20)
        rcx_53 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_85 = &rcx_53[3]
    
    *(arg2 + 0x30) = rax_85
    int64_t* rax_86 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_86 = rcx_53
    *(arg2 + 8) = &rcx_53[1]
    rcx_53[1] = 0
    result = &data_142f7e220
    *rcx_53 = &data_142f7e220
    rcx_53[2] = rbx_14
    
    if (rbx_14 != 0)
        *(rbx_14 + 0x18) += 1
    
    int64_t* rcx_57 = var_b50
    
    if (rcx_57 != 0)
        result = (*(*rcx_57 + 0x38))(rcx_57)
    
    int64_t* rcx_58 = var_b48
    
    if (rcx_58 != 0)
        result = (*(*rcx_58 + 0x38))(rcx_58)
    
    int64_t* rcx_59 = var_b40
    
    if (rcx_59 != 0)
        result = (*(*rcx_59 + 0x38))(rcx_59)

__security_check_cookie(result_1 ^ &var_bc8)
return result
