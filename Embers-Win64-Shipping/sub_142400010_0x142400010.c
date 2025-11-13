// 函数: sub_142400010
// 地址: 0x142400010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t* result = __security_cookie ^ &var_208
int64_t* result_1 = result
int64_t* rcx = arg1[1].q

if (rcx != 0)
    int128_t zmm6
    int128_t var_38_1 = zmm6
    uint128_t zmm7
    uint128_t var_48_1 = zmm7
    int128_t zmm8
    int128_t var_58_1 = zmm8
    int128_t zmm9
    int128_t var_68_1 = zmm9
    int64_t* rax_2 = (*(*rcx + 8))(rcx)
    int128_t var_1c8_1
    void* rcx_2
    int128_t zmm0
    
    if (*rax_2 != 0)
        int64_t* rcx_1 = arg1[1].q
        zmm8 = *arg1
        zmm9 = *(arg1 + 4)
        zmm7 = *(arg1 + 8)
        zmm6 = *(arg1 + 0xc)
        rcx_2 = *(*(*rcx_1 + 8))(rcx_1)
        zmm0 = *(rcx_2 + 0x20)
        var_1c8_1 = zmm0
    
    int64_t var_198
    void var_180
    int64_t var_90
    int128_t zmm1
    
    if (*rax_2 == 0 || zmm0.d != 1 || var_1c8_1:4.d.d f!= zmm8.d || var_1c8_1:8.d.d f!= zmm9.d
            || var_1c8_1:0xc.d.d f!= zmm7.d || (*(rcx_2 + 0x30)).d f!= zmm6.d)
        int64_t* rcx_16 = arg1[1].q
        result = (*(*rcx_16 + 8))(rcx_16)
        
        if (*result != 0)
            int64_t* rcx_17 = arg1[1].q
            int64_t* rax_16 = (*(*rcx_17 + 8))(rcx_17)
            zmm1 = data_142d3f5a0
            int64_t rcx_18 = *rax_16
            var_198 = rcx_18
            int32_t var_c0_2 = 0
            int32_t var_bc_1
            __builtin_memset(&var_bc_1, 0xff, 0x14)
            int128_t var_a8_2 = zmm1
            int64_t var_98_1
            __builtin_memset(&var_98_1, 0, 0x1a)
            int64_t var_190_2 = 0
            int32_t var_188_2 = 0xffffffff
            int16_t var_184_2 = 0x100
            int64_t var_d8_1
            __builtin_memset(&var_d8_1, 0, 0x11)
            int32_t var_c4_2 = 0
            int16_t var_80_1
            var_80_1:1.b = *(rcx_18 + 0x38) u> 1
            memset(&var_180, 0, 0xa8)
            sub_1410e0180(arg2, &var_198)
            int64_t r14_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
            int64_t rax_17 = r14_3 + 0x18
            
            if (rax_17 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x1a)
                r14_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                rax_17 = r14_3 + 0x18
            
            wchar16 const* const rcx_22 = u"ClearCanvas"
            *(arg2 + 0x30) = rax_17
            wchar16 const i
            
            do
                i = *rcx_22
                *(r14_3 - u"ClearCanvas" + rcx_22) = i
                rcx_22 = &rcx_22[1]
            while (i != 0)
            void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_18 = &rcx_25[0x27]
            
            if (rax_18 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x140)
                rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_18 = &rcx_25[0x27]
            
            *(arg2 + 0x30) = rax_18
            void**** rax_19 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_19 = rcx_25
            *(arg2 + 8) = &rcx_25[1]
            sub_1405d11b0(rcx_25, &var_198, r14_3)
            *(arg2 + 0x1c4) = 1
            sub_1405d19b0(arg2, &var_198)
            int64_t var_88_1
            *(arg2 + 0x178) = var_88_1:7.b
            *(arg2 + 0x179) = 0
            *(arg2 + 0x1c4) = 1
            int64_t* rcx_30 = arg1[1].q
            void var_1b0
            void* rax_23 = (*(*rcx_30 + 0x18))(rcx_30, &var_1b0)
            int64_t* rcx_31 = arg1[1].q
            int64_t rax_24 = *rcx_31
            uint128_t zmm6_1 = _mm_cvtepi32_ps(zx.o(*(rax_23 + 4)))
            void var_1a8
            int32_t* rax_25 = (*(rax_24 + 0x18))(rcx_31, &var_1a8)
            void*** rcx_34 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            zmm7 = _mm_cvtepi32_ps(zx.o(*rax_25))
            void* rax_26 = &rcx_34[5]
            
            if (rax_26 u> *(arg2 + 0x38))
                zmm6_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_34 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_26 = &rcx_34[5]
            
            *(arg2 + 0x30) = rax_26
            void** rax_27 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            int32_t var_1d0_1 = 0
            char var_1d8_1 = 0
            *rax_27 = rcx_34
            *(arg2 + 8) = &rcx_34[1]
            rcx_34[1] = 0
            *rcx_34 = &data_142d54998
            *(rcx_34 + 0x1c) = zmm7.d
            rcx_34[4].d = zmm6_1.d
            rcx_34[2] = 0
            rcx_34[3].d = 0
            *(rcx_34 + 0x24) = 0x3f800000
            sub_14199cb60(arg2, 1, 1, arg1, 0, (zx.o(0)).d, var_1d8_1, var_1d0_1)
            sub_141096650(arg2)
            result = sub_1405d1550(&var_90)
    else
        int64_t* rcx_3 = arg1[1].q
        int64_t* rax_8 = (*(*rcx_3 + 8))(rcx_3)
        zmm1 = data_142d3f5a0
        int64_t rcx_4 = *rax_8
        var_198 = rcx_4
        int32_t var_c0_1 = 0
        int32_t var_bc
        __builtin_memset(&var_bc, 0xff, 0x14)
        int128_t var_a8_1 = zmm1
        int64_t var_98
        __builtin_memset(&var_98, 0, 0x1a)
        int64_t var_190_1 = 0
        int32_t var_188_1 = 0xffffffff
        int16_t var_184_1 = 0x900
        int64_t var_d8
        __builtin_memset(&var_d8, 0, 0x11)
        int32_t var_c4_1 = 0
        int16_t var_80
        var_80:1.b = *(rcx_4 + 0x38) u> 1
        memset(&var_180, 0, 0xa8)
        sub_1410e0180(arg2, &var_198)
        int64_t rdi_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        int64_t rax_9 = rdi_3 + 0x18
        
        if (rax_9 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x1a)
            rdi_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
            rax_9 = rdi_3 + 0x18
        
        wchar16 const* const rcx_8 = u"ClearCanvas"
        *(arg2 + 0x30) = rax_9
        wchar16 const i_1
        
        do
            i_1 = *rcx_8
            *(rdi_3 - u"ClearCanvas" + rcx_8) = i_1
            rcx_8 = &rcx_8[1]
        while (i_1 != 0)
        void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_10 = &rcx_11[0x27]
        
        if (rax_10 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x140)
            rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_10 = &rcx_11[0x27]
        
        *(arg2 + 0x30) = rax_10
        void**** rax_11 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_11 = rcx_11
        *(arg2 + 8) = &rcx_11[1]
        sub_1405d11b0(rcx_11, &var_198, rdi_3)
        *(arg2 + 0x1c4) = 1
        sub_1405d19b0(arg2, &var_198)
        int64_t var_88
        *(arg2 + 0x178) = var_88:7.b
        *(arg2 + 0x179) = 0
        *(arg2 + 0x1c4) = 1
        sub_141096650(arg2)
        result = sub_1405d1550(&var_90)

__security_check_cookie(result_1 ^ &var_208)
return result
