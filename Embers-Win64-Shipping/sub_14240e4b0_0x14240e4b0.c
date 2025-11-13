// 函数: sub_14240e4b0
// 地址: 0x14240e4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
void* result = __security_cookie ^ &var_218
void* result_1 = result

if (((*(arg1 + 0x78) & 1) != 0 || arg3 != 0) && *(arg1 + 0xb0) != 0)
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    sub_142424910(data_143f5b828)
    void* r14_1 = arg1 + 0xa8
    char var_1f7
    sub_1423fa190(*r14_1, *(r14_1 + 8), var_1f7)
    int64_t r15_1 = 0
    
    if (arg4 == 0)
        int64_t* rax_1 = sub_142006940()
        int64_t r8_1 = *rax_1
        (*(r8_1 + 0x98))(rax_1, arg2, r8_1)
        int64_t* rcx_3 = *(arg1 + 0x58)
        int64_t* rax_3 = (*(*rcx_3 + 8))(rcx_3)
        int128_t zmm1_1 = data_142d3f5a0
        int64_t rcx_4 = *rax_3
        int64_t var_1a8 = rcx_4
        int32_t var_d0_1 = 0
        int32_t var_cc
        __builtin_memset(&var_cc, 0xff, 0x14)
        int128_t var_b8_1 = zmm1_1
        int64_t var_a8
        __builtin_memset(&var_a8, 0, 0x19)
        int64_t var_1a0_1 = 0
        int32_t var_198_1 = 0xffffffff
        int16_t var_194_1 = 0x500
        int64_t var_e8
        __builtin_memset(&var_e8, 0, 0x11)
        int32_t var_d4_1 = 0
        bool var_8f_1 = *(rcx_4 + 0x38) u> 1
        void var_190
        memset(&var_190, 0, 0xa8)
        char rax_4 = var_194_1:1.b
        
        if (*(arg1 + 0x95) != 0)
            rax_4 = 9
        
        int64_t rbx_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        var_194_1:1.b = rax_4
        int64_t rax_5 = rbx_3 + 0x26
        
        if (rax_5 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x28)
            rbx_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
            rax_5 = rbx_3 + 0x26
        
        wchar16 const* const rcx_7 = u"CanvasRenderThread"
        *(arg2 + 0x30) = rax_5
        wchar16 const i
        
        do
            i = *rcx_7
            *(rbx_3 - u"CanvasRenderThread" + rcx_7) = i
            rcx_7 = &rcx_7[1]
        while (i != 0)
        void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_6 = &rcx_10[0x27]
        
        if (rax_6 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x140)
            rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_6 = &rcx_10[0x27]
        
        *(arg2 + 0x30) = rax_6
        void**** rax_7 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_7 = rcx_10
        *(arg2 + 8) = &rcx_10[1]
        sub_1405d11b0(rcx_10, &var_1a8, rbx_3)
        *(arg2 + 0x1c4) = 1
        sub_1405d19b0(arg2, &var_1a8)
        int64_t var_98
        *(arg2 + 0x178) = var_98:7.b
        *(arg2 + 0x179) = 0
        *(arg2 + 0x1c4) = 1
        int64_t var_a0
        sub_1405d1550(&var_a0)
    
    int32_t rcx_17 = *(arg1 + 0x44) - *(arg1 + 0x3c)
    int32_t rdx_6 = *(arg1 + 0x38)
    int64_t var_1e0_1 = data_14395d9e8
    int32_t rax_12 = *(arg1 + 0x40) - rdx_6
    int64_t var_1e8 = 0
    int64_t var_1d0
    __builtin_memset(&var_1d0, 0, 0x24)
    int32_t i_3
    
    if (rcx_17 * rax_12 s<= 0)
        int64_t* rcx_19 = *(arg1 + 0x58)
        int64_t rcx_20 = *(*(*rcx_19 + 0x18))(rcx_19, &i_3)
        int64_t rax_15 = data_143dbb180
        *(arg1 + 0x38) = rax_15.d
        *(arg1 + 0x3c) = (rax_15 u>> 0x20).d
        *(arg1 + 0x40) = rcx_20.d
        *(arg1 + 0x44) = (rcx_20 u>> 0x20).d
        rdx_6 = *(arg1 + 0x38)
    
    uint128_t zmm7 = zx.o(*(arg1 + 0x40))
    void*** rcx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    uint128_t zmm8 = zx.o(*(arg1 + 0x3c))
    zmm6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x44)))
    void* rax_17 = &rcx_24[5]
    zmm7 = _mm_cvtepi32_ps(zmm7)
    zmm8 = _mm_cvtepi32_ps(zmm8)
    uint128_t zmm9 = _mm_cvtepi32_ps(zx.o(rdx_6))
    
    if (rax_17 u> *(arg2 + 0x38))
        zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_17 = &rcx_24[5]
    
    *(arg2 + 0x30) = rax_17
    *(arg2 + 0x14) += 1
    **(arg2 + 8) = rcx_24
    *(arg2 + 8) = &rcx_24[1]
    rcx_24[1] = 0
    *rcx_24 = &data_142d54998
    rcx_24[2].d = zmm9.d
    *(rcx_24 + 0x14) = zmm8.d
    *(rcx_24 + 0x1c) = zmm7.d
    rcx_24[4].d = zmm6.d
    rcx_24[3].d = 0
    *(rcx_24 + 0x24) = 0x3f800000
    int32_t rsi_1 = *(arg1 + 0x48)
    result = zx.q(*(arg1 + 0x50) - rsi_1)
    
    if ((*(arg1 + 0x54) - *(arg1 + 0x4c)) * result.d s> 0)
        int32_t r14_2 = *(arg1 + 0x54)
        int32_t r15_2 = *(arg1 + 0x50)
        void*** rcx_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        int32_t r12_1 = *(arg1 + 0x4c)
        void* rax_21 = &rcx_33[5]
        
        if (rax_21 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_21 = &rcx_33[5]
        
        *(arg2 + 0x30) = rax_21
        int64_t* rax_22 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_22 = rcx_33
        *(arg2 + 8) = &rcx_33[1]
        rcx_33[1] = 0
        result = &data_142f18bc8
        *(rcx_33 + 0x1c) = r15_2
        r15_1 = 0
        rcx_33[4].d = r14_2
        r14_1 = arg1 + 0xa8
        *rcx_33 = &data_142f18bc8
        rcx_33[2].b = 1
        *(rcx_33 + 0x14) = rsi_1
        rcx_33[3].d = r12_1
    
    bool cond:3_1 = *(arg1 + 0xb0) s<= 0
    int32_t i_1 = 0
    i_3 = 0
    
    if (not(cond:3_1))
        do
            void* r12_2 = *r14_1
            int32_t j = 0
            
            if (*(r15_1 + r12_2 + 0x10) s> 0)
                int64_t* rsi_2 = nullptr
                
                do
                    result = *(r15_1 + r12_2 + 8)
                    int64_t* rbx_6 = *(rsi_2 + result)
                    
                    if (rbx_6 != 0)
                        result = (*(*rbx_6 + 8))(rbx_6, arg2, &var_1e8, arg1, arg4)
                        *(arg1 + 0x7c) |= result.b
                        
                        if ((*(arg1 + 0x78) & 2) != 0)
                            result = (**rbx_6)(rbx_6, 1)
                    
                    j += 1
                    rsi_2 = &rsi_2[1]
                while (j s< *(r15_1 + r12_2 + 0x10))
                
                i_1 = i_3
            
            if ((*(arg1 + 0x78) & 2) != 0)
                uint64_t* rcx_40 = r12_2 + 8 + r15_1
                rcx_40[1].d = 0
                
                if (*(rcx_40 + 0xc) != 0)
                    result = sub_1405c5570(rcx_40, 0)
            
            i_1 += 1
            r14_1 = arg1 + 0xa8
            r15_1 += 0x18
            i_3 = i_1
        while (i_1 s< *(arg1 + 0xb0))
    
    if ((*(arg1 + 0x78) & 2) != 0)
        int32_t i_4 = *(arg1 + 0xb0)
        
        if (i_4 != 0)
            int64_t* rbx_8 = *(arg1 + 0xa8) + 8
            int32_t i_2
            
            do
                int64_t rcx_41 = *rbx_8
                
                if (rcx_41 != 0)
                    sub_140a74f90(rcx_41)
                
                rbx_8 = &rbx_8[3]
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
        
        bool cond:6_1 = *(arg1 + 0xb4) == 0
        *(arg1 + 0xb0) = 0
        
        if (not(cond:6_1))
            sub_1405a5130(arg1 + 0xa8, 0)
        
        result = sub_140a42ca0(arg1 + 0xb8, 0)
        *(arg1 + 0x108) = 0xffffffff
    
    if (arg4 == 0)
        result = sub_141096650(arg2)

__security_check_cookie(result_1 ^ &var_218)
return result
