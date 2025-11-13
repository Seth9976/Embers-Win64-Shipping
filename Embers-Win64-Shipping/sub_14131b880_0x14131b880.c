// 函数: sub_14131b880
// 地址: 0x14131b880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_478
int64_t rax_1 = __security_cookie ^ &var_478
int64_t* var_3c8 = arg2
int64_t* var_3b0 = arg1
void* result = sub_14139ce70(arg1)

if (result != 0)
    int32_t var_3b8_1 = 2
    int32_t var_3e8_1
    
    if (*(arg1 + 0x161) != 0)
        var_3e8_1 = 2
    
    if (*(arg1 + 0x161) == 0 || arg1[0x2c].b == 0)
        var_3e8_1 = 1
    
    void* rsi_1 = *arg2
    arg2[8]
    int32_t r12_1 = (*(result + 0x14)).d
    int64_t rdi_1 = *(arg1 + 0x54)
    int32_t temp0_1 = divs.dp.d(sx.q(data_143ec4fdc.d), r12_1)
    void* rax_5 = *(rsi_1 + 0x15a0)
    void* var_3f8 = rax_5
    int32_t temp0_2 = divs.dp.d(sx.q(rax_5.d), temp0_1)
    var_3f8.d = temp0_2
    var_3f8:4.d = divs.dp.d(sx.q(var_3f8:4.d), temp0_1)
    void* rax_11 = *(rsi_1 + 0x1598)
    void* r14_1 = var_3f8
    void* var_3d8 = rax_11
    int32_t temp0_4 = divs.dp.d(sx.q(rax_11.d), temp0_1)
    var_3d8.d = temp0_4
    var_3d8:4.d = divs.dp.d(sx.q(var_3d8:4.d), temp0_1)
    void* r15_1 = var_3d8
    int32_t temp32_1
    int32_t temp33_1
    temp32_1:temp33_1 = sx.q(temp0_2)
    var_3d8 = r14_1
    var_3f8 = r15_1
    var_3d8.d = (temp33_1 + (temp32_1 & 3)) s>> 2
    int32_t temp34_1
    int32_t temp35_1
    temp34_1:temp35_1 = sx.q(var_3d8:4.d)
    var_3d8:4.d = (temp35_1 + (temp34_1 & 3)) s>> 2
    void* rbx_1 = var_3d8
    int32_t temp36_1
    int32_t temp37_1
    temp36_1:temp37_1 = sx.q(temp0_4)
    var_3f8.d = (temp37_1 + (temp36_1 & 3)) s>> 2
    int32_t temp38_1
    int32_t temp39_1
    temp38_1:temp39_1 = sx.q(var_3f8:4.d)
    var_3f8:4.d = (temp39_1 + (temp38_1 & 3)) s>> 2
    void* rsi_2 = var_3f8
    int64_t* rax_33 = sub_1413a8300(&var_3b0[8], arg2)
    int128_t var_2f0
    int128_t var_298
    void var_200
    int64_t* rax_35
    
    if (var_3e8_1 != 2)
        int32_t var_2c4_1 = 1
        int64_t var_2d0_1 = 0
        __builtin_memset(&var_2f0, 0, 0x18)
        int32_t var_2c8_1 = 0
        rax_35 = &var_2f0
        int64_t var_2a8_1 = 0
        int32_t var_2a0_1 = 0
        __builtin_memset(&var_298, 0, 0x20)
        var_3d8.d = 0
        int32_t var_29c_1 = 1
    else
        rax_35 = sub_14117b030(&var_200, sub_1413a8300(&var_3b0[0x14], arg2))
        var_3d8.d = 1
        var_3b8_1 = 0
    
    int64_t* var_278
    sub_14117b030(&var_278, rax_35)
    
    if (var_3b8_1 != 0)
        int128_t var_288
        sub_1405ec8a0(&var_288:8)
        sub_1405d1550(&var_288)
        sub_1405ec8a0(&var_298:8)
        sub_1405ec8a0(&var_298)
        void var_2c0
        sub_14117b380(&var_2c0)
        void var_2d8
        sub_14117b570(&var_2d8)
        int64_t var_2e0
        sub_1405d1550(&var_2e0)
        sub_1405d1550(&var_2f0:8)
        sub_1405d1550(&var_2f0)
    
    if (var_3d8.d != 0)
        void var_190
        sub_1405ec8a0(&var_190)
        void var_198
        sub_1405d1550(&var_198)
        void var_1a0
        sub_1405ec8a0(&var_1a0)
        void var_1a8
        sub_1405ec8a0(&var_1a8)
        void var_1d0
        sub_14117b380(&var_1d0)
        void var_1e8
        sub_14117b570(&var_1e8)
        void var_1f0
        sub_1405d1550(&var_1f0)
        void var_1f8
        sub_1405d1550(&var_1f8)
        sub_1405d1550(&var_200)
    
    var_3f8 = *rax_33
    int64_t* var_3f0_1 = var_278
    int64_t rcx_26 = sx.q((*U"1111")[sx.q(var_3c8[0xb].d)])
    int64_t rcx_27
    
    if (((rcx_26 - 0x11).d & 0xfffffff3) != 0 || rcx_26.d == 0x19)
        rcx_27 = rcx_26 * 5
    
    char r9_2
    
    if ((((rcx_26 - 0x11).d & 0xfffffff3) != 0 || rcx_26.d == 0x19) && (
            *((rcx_27 << 2) + &data_143f025f0) != data_143f025c0
            || (*((rcx_27 << 2) + &data_143f025fc) & 1) == 0))
        r9_2 = 5
    else
        r9_2 = 9
    
    void var_180
    void* rcx_28 = &var_180
    int64_t* rdx_18 = &var_3f8
    uint64_t r10_1 = zx.q(var_3e8_1)
    uint64_t i_2 = zx.q(r10_1.d)
    int128_t var_98_1 = data_142d3f5a0
    int32_t var_b0_1 = 0
    int32_t var_ac
    __builtin_memset(&var_ac, 0xff, 0x14)
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x1a)
    uint64_t i
    
    do
        int64_t rax_43 = *rdx_18
        rdx_18 = &rdx_18[1]
        *(rcx_28 - 8) = rax_43
        *rcx_28 = 0
        *(rcx_28 + 8) = 0xffffffff
        *(rcx_28 + 0xc) = 0
        *(rcx_28 + 0xd) = r9_2
        rcx_28 += 0x18
        i = i_2
        i_2 -= 1
    while (i != 1)
    char var_b8_1 = i_2.b
    int64_t var_c8_1 = 0
    int32_t var_b4_1 = 0
    int64_t var_c0_1 = 0
    void var_188
    memset(&var_188 + r10_1 * 0x18, 0, 0xc0 - r10_1 * 0x18)
    void* rdx_19 = var_3c8[8]
    void* r8_4 = rdx_19 + 0x30
    int64_t rax_47 = *(rdx_19 + 0x30) + 1
    var_3f8 = rdx_19
    void* rax_48 = rax_47 & 0xfffffffffffffffe
    var_3d8 = rax_48
    void* rcx_30 = rax_48 + 0x12
    
    if (rcx_30 u> *(r8_4 + 8))
        sub_140b0e3d0(r8_4, 0x14)
        rdx_19 = var_3f8
        r8_4 = rdx_19 + 0x30
        rax_48 = (*(rdx_19 + 0x30) + 1) & 0xfffffffffffffffe
        var_3d8 = rax_48
        rcx_30 = rax_48 + 0x12
    
    *r8_4 = rcx_30
    wchar16 const* const rcx_32 = u"DOFSetup"
    wchar16 const i_1
    
    do
        i_1 = *rcx_32
        *(rcx_32 + rax_48 - u"DOFSetup") = i_1
        rcx_32 = &rcx_32[1]
    while (i_1 != 0)
    void*** rcx_35 = (*r8_4 + 7) & 0xfffffffffffffff8
    void* rax_51 = &rcx_35[0x27]
    
    if (rax_51 u> *(r8_4 + 8))
        sub_140b0e3d0(r8_4, 0x140)
        rdx_19 = var_3f8
        r8_4 = rdx_19 + 0x30
        rcx_35 = (*(rdx_19 + 0x30) + 7) & 0xfffffffffffffff8
        rax_51 = &rcx_35[0x27]
    
    *r8_4 = rax_51
    void**** rax_52 = *(rdx_19 + 8)
    *(rdx_19 + 0x14) += 1
    void* r8_5 = var_3d8
    *rax_52 = rcx_35
    *(rdx_19 + 8) = &rcx_35[1]
    sub_1405d11b0(rcx_35, &var_188, r8_5)
    void* rcx_39 = var_3f8
    *(rcx_39 + 0x1c4) = 1
    sub_1405d19b0(rcx_39, &var_188)
    void* rcx_40 = var_3f8
    int64_t var_78
    *(rcx_40 + 0x178) = var_78:7.b
    *(rcx_40 + 0x179) = 0
    *(rcx_40 + 0x1c4) = 1
    int64_t* rdi_2
    
    if (*(rsi_1 + 0xad0) != 0)
        rdi_2 = var_3c8
    else
        int32_t* var_430_1 = &var_3d8
        rdi_2 = var_3c8
        int32_t var_440_1 = 0
        int128_t var_310
        __builtin_memset(&var_310, 0, 0x20)
        var_3d8.o = rsi_2.o
        sub_14199cee0(rdi_2[8], 1, var_3e8_1, &var_310, 0, 0, 0, var_440_1, rdi_1, var_430_1)
    
    var_3c8:4.d = rsi_2:4.d
    var_3c8.d = rsi_2.d
    int32_t var_3c0_1 = (rbx_1 + 1).d
    int32_t var_3bc_1 = rbx_1:4.d + 1
    var_3c8.o = var_3c8.o
    void* r9_6
    int32_t zmm7_1
    uint128_t zmm8_1
    r9_6, zmm7_1, zmm8_1 = sub_1410b7780(rdi_2, &var_3c8, zx.o(0), 0x3f800000)
    int64_t* rcx_43 = var_3b0
    int32_t rax_60 = 0
    uint128_t zmm0_2
    
    if (*(rcx_43 + 0x161) != 0)
        zmm0_2 = _mm_max_ss((*(rsi_1 + 0x1280)).d, zmm7_1)
        zmm0_2.d f- 200f
        int32_t rax_62
        rax_62.b = zmm0_2.d f< 200f
        rax_60 = rax_62 + 1
    
    var_3f8.o = zx.o(0)
    void** rax_64
    
    if (rcx_43[0x2c].b == 0)
        if (rax_60 == 1)
            rax_64, r9_6, zmm8_1 = sub_1412f18a0(&var_3b0, rdi_2)
            var_3f8.o = *rax_64
        else if (rax_60 == 2)
            rax_64, r9_6, zmm8_1 = sub_1412f1b60(&var_3b0, rdi_2)
            var_3f8.o = *rax_64
    else if (rax_60 == 0)
        rax_64, r9_6, zmm8_1 = sub_1412f15e0(&var_3b0, rdi_2)
        var_3f8.o = *rax_64
    else if (rax_60 == 1)
        rax_64, r9_6, zmm8_1 = sub_1412f1060(&var_3b0, rdi_2)
        var_3f8.o = *rax_64
    else if (rax_60 == 2)
        rax_64, r9_6, zmm8_1 = sub_1412f1320(&var_3b0, rdi_2)
        var_3f8.o = *rax_64
    int32_t rcx_49 = r15_1:4.d
    int32_t rbx_2 = rbx_1.d - rsi_2.d
    int32_t rdx_30 = rbx_1:4.d - rsi_2:4.d
    int32_t var_408_1 = 1
    var_3b0:4.d = rdx_30
    uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(r14_1.d - r15_1.d + 1))
    var_3b0.d = rbx_2
    var_3c8 = var_3b0
    var_3c8:4.d += 1
    var_3c8.d = rbx_2 + 1
    void* rcx_50 = rdi_2[8]
    uint128_t zmm4_1 = _mm_cvtepi32_ps(zx.o(rcx_49))
    char rax_73 = *(rdi_2 + 0x69)
    uint128_t zmm5_1 = _mm_cvtepi32_ps(zx.o(r15_1.d))
    int32_t rax_75 = *(rsi_1 + 0xad0)
    void** var_420_1 = &var_3f8
    int32_t rax_76 = var_3c8.d
    zmm0_2 = _mm_cvtepi32_ps(zx.o(rdx_30 + 1))
    int64_t var_438
    var_438.d = _mm_cvtepi32_ps(zx.o(r14_1:4.d - rcx_49 + 1)).d
    char var_448
    var_448.d = zmm4_1.d
    char var_458
    var_458.d = zmm0_2.d
    sub_141399210(rcx_50, zx.o(0), zx.o(0), r9_6, _mm_cvtepi32_ps(zx.o(rbx_2 + 1)), zmm8_1, 
        var_458, zmm5_1.d, var_448, zmm2.d, var_438.d, rax_76, r12_1, var_420_1, rax_75, rax_73, 
        var_408_1)
    sub_141096650(rdi_2[8])
    void* r14_4 = rdi_2[8]
    int64_t r12_2 = rax_33[1]
    int64_t* r15_2 = *rax_33
    int64_t var_380_1 = data_142d57d10.q
    int128_t zmm0_3 = data_142d57920
    int128_t var_370_1 = data_142d3f800
    void*** rbx_5 = (*(r14_4 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_78 = &rbx_5[0xa]
    
    if (rax_78 u> *(r14_4 + 0x38))
        sub_140b0e3d0(r14_4 + 0x30, 0x58)
        rbx_5 = (*(r14_4 + 0x30) + 7) & 0xfffffffffffffff8
        rax_78 = &rbx_5[0xa]
    
    *(r14_4 + 0x30) = rax_78
    *(r14_4 + 0x14) += 1
    **(r14_4 + 8) = rbx_5
    *(r14_4 + 8) = &rbx_5[1]
    rbx_5[1] = 0
    *rbx_5 = &data_142d56628
    rbx_5[2].d = var_380_1.d
    *(rbx_5 + 0x14) = var_380_1:4.d
    int32_t var_378
    rbx_5[3].d = var_378
    int32_t var_374
    *(rbx_5 + 0x1c) = var_374
    __builtin_memset(&rbx_5[4], 0xff, 0x14)
    *(rbx_5 + 0x34) = zmm0_3:4.d
    rbx_5[7].d = zmm0_3:8.d
    *(rbx_5 + 0x3c) = zmm0_3:0xc.d
    rbx_5[8] = r15_2
    rbx_5[9] = r12_2
    
    if ((*(*r15_2 + 8))(r15_2) == 0)
        int64_t* rcx_54 = rbx_5[8]
        
        if ((*(*rcx_54 + 0x18))(rcx_54) == 0)
            int64_t* rcx_55 = rbx_5[8]
            
            if ((*(*rcx_55 + 0x20))(rcx_55) == 0)
                int64_t* rcx_56 = rbx_5[8]
                (*(*rcx_56 + 0x10))(rcx_56)
    
    int64_t* rcx_57 = rbx_5[9]
    
    if ((*(*rcx_57 + 8))(rcx_57) == 0)
        int64_t* rcx_58 = rbx_5[9]
        
        if ((*(*rcx_58 + 0x18))(rcx_58) == 0)
            int64_t* rcx_59 = rbx_5[9]
            
            if ((*(*rcx_59 + 0x20))(rcx_59) == 0)
                int64_t* rcx_60 = rbx_5[9]
                (*(*rcx_60 + 0x10))(rcx_60)
    
    int64_t* r15_3 = var_278
    int64_t var_270
    
    if (r15_3 != 0)
        void* r14_5 = rdi_2[8]
        int64_t r12_3 = var_270
        int128_t var_350_1 = data_142d57d10
        zmm0_3 = data_142d57920
        int128_t var_340_1 = data_142d3f800
        void*** rbx_10 = (*(r14_5 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_102 = &rbx_10[0xa]
        
        if (rax_102 u> *(r14_5 + 0x38))
            sub_140b0e3d0(r14_5 + 0x30, 0x58)
            rbx_10 = (*(r14_5 + 0x30) + 7) & 0xfffffffffffffff8
            rax_102 = &rbx_10[0xa]
        
        *(r14_5 + 0x30) = rax_102
        *(r14_5 + 0x14) += 1
        **(r14_5 + 8) = rbx_10
        *(r14_5 + 8) = &rbx_10[1]
        rbx_10[1] = 0
        *rbx_10 = &data_142d56628
        rbx_10[2].d = var_350_1.d
        __builtin_memset(rbx_10 + 0x14, 0xff, 0x20)
        *(rbx_10 + 0x34) = zmm0_3:4.d
        rbx_10[7].d = zmm0_3:8.d
        *(rbx_10 + 0x3c) = zmm0_3:0xc.d
        rbx_10[8] = r15_3
        rbx_10[9] = r12_3
        
        if ((*(*r15_3 + 8))(r15_3) == 0)
            int64_t* rcx_63 = rbx_10[8]
            
            if ((*(*rcx_63 + 0x18))(rcx_63) == 0)
                int64_t* rcx_64 = rbx_10[8]
                
                if ((*(*rcx_64 + 0x20))(rcx_64) == 0)
                    int64_t* rcx_65 = rbx_10[8]
                    (*(*rcx_65 + 0x10))(rcx_65)
        
        int64_t* rcx_66 = rbx_10[9]
        
        if ((*(*rcx_66 + 8))(rcx_66) == 0)
            int64_t* rcx_67 = rbx_10[9]
            
            if ((*(*rcx_67 + 0x18))(rcx_67) == 0)
                int64_t* rcx_68 = rbx_10[9]
                
                if ((*(*rcx_68 + 0x20))(rcx_68) == 0)
                    int64_t* rcx_69 = rbx_10[9]
                    (*(*rcx_69 + 0x10))(rcx_69)
    
    sub_1410e0370(rdi_2[8])
    int64_t var_80
    sub_1405d1550(&var_80)
    void var_208
    sub_1405ec8a0(&var_208)
    void var_210
    sub_1405d1550(&var_210)
    void var_218
    sub_1405ec8a0(&var_218)
    void var_220
    sub_1405ec8a0(&var_220)
    void var_248
    sub_14117b380(&var_248)
    void var_260
    sub_14117b570(&var_260)
    void var_268
    sub_1405d1550(&var_268)
    sub_1405d1550(&var_270)
    result = sub_1405d1550(&var_278)

__security_check_cookie(rax_1 ^ &var_478)
return result
