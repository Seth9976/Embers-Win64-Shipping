// 函数: sub_14113a4d0
// 地址: 0x14113a4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
uint64_t result
int512_t zmm3
uint128_t zmm6
uint128_t zmm7
uint128_t zmm8
uint128_t zmm9
result, zmm3, zmm6, zmm7, zmm8, zmm9 = sub_14111dee0(arg1, arg2, arg3)

if (*(arg1 + 0x5b0) != 0)
    int128_t zmm1_1 = data_142d3f5a0
    int64_t* var_28_1 = arg5
    int64_t rcx = *(arg6 + 8)
    void* rdi_1 = nullptr
    int64_t var_1b8 = rcx
    uint128_t var_58_1 = zmm6
    int32_t var_e0_1 = 0
    int32_t var_dc
    __builtin_memset(&var_dc, 0xff, 0x14)
    int128_t var_c8_1 = zmm1_1
    int64_t var_b8
    __builtin_memset(&var_b8, 0, 0x1a)
    int64_t var_1b0_1 = 0
    int32_t var_1a8_1 = 0xffffffff
    int16_t var_1a4_1 = 0x500
    int64_t var_f8_1
    __builtin_memset(&var_f8_1, 0, 0x11)
    int32_t var_e4_1 = 0
    uint128_t var_68_1 = zmm7
    int16_t var_a0
    var_a0:1.b = *(rcx + 0x38) u> 1
    uint128_t var_78_1 = zmm8
    uint128_t var_88_1 = zmm9
    void var_1a0
    memset(&var_1a0, 0, 0xa8)
    char var_e8_1 = 0x45
    int64_t var_f8_2 = *(data_143ec4ca0 + 8)
    int32_t var_e4_2 = 0x21
    sub_1410e0180(arg2, &var_1b8)
    int64_t r14_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_5 = r14_3 + 0x48
    
    if (rax_5 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x4a)
        r14_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        rax_5 = r14_3 + 0x48
    
    wchar16 const* const rcx_6 = u"RenderRayTracedDistanceFieldShadows"
    *(arg2 + 0x30) = rax_5
    wchar16 const i
    
    do
        i = *rcx_6
        *(rcx_6 + r14_3 - u"RenderRayTracedDistanceFieldShadows") = i
        rcx_6 = &rcx_6[1]
    while (i != 0)
    void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_6 = &rcx_9[0x27]
    
    if (rax_6 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x140)
        rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_6 = &rcx_9[0x27]
    
    *(arg2 + 0x30) = rax_6
    void**** rax_7 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_7 = rcx_9
    *(arg2 + 8) = &rcx_9[1]
    sub_1405d11b0(rcx_9, &var_1b8, r14_3)
    *(arg2 + 0x1c4) = 1
    sub_1405d19b0(arg2, &var_1b8)
    int64_t var_a8
    *(arg2 + 0x178) = var_a8:7.b
    *(arg2 + 0x179) = 0
    *(arg2 + 0x1c4) = 1
    int128_t var_268
    __builtin_memset(&var_268, 0, 0x30)
    int64_t var_20c
    __builtin_memset(&var_20c, 0, 0x43)
    int128_t var_220_1 = zx.o(0)
    int16_t var_1c8_1 = 0
    sub_140fdc870(arg2, &var_268)
    int32_t* r14_6 = arg4
    void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    zmm7 = zx.o(r14_6[2])
    zmm8 = zx.o(r14_6[1])
    zmm9 = zx.o(*r14_6)
    void* rax_10 = &rcx_17[5]
    uint128_t zmm6_1 = _mm_cvtepi32_ps(zx.o(r14_6[3]))
    zmm7 = _mm_cvtepi32_ps(zmm7)
    zmm8 = _mm_cvtepi32_ps(zmm8)
    zmm9 = _mm_cvtepi32_ps(zmm9)
    
    if (rax_10 u> *(arg2 + 0x38))
        zmm6_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_10 = &rcx_17[5]
    
    *(arg2 + 0x30) = rax_10
    void** rax_11 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_11 = rcx_17
    *(arg2 + 8) = &rcx_17[1]
    rcx_17[1] = 0
    *rcx_17 = &data_142d54998
    rcx_17[2].d = zmm9.d
    *(rcx_17 + 0x14) = zmm8.d
    *(rcx_17 + 0x1c) = zmm7.d
    rcx_17[4].d = zmm6_1.d
    rcx_17[3].d = 0
    *(rcx_17 + 0x24) = 0x3f800000
    int64_t var_230_1 = data_14395da18
    int64_t var_228_1 = data_14395d9e8
    int64_t var_238_1 = sub_14148ba80(arg1, arg7, 0)
    void* var_288
    sub_1419a2ec0(arg3[0xa2a], &var_288, &data_143ed5e80, 0)
    void* rcx_23 = var_288
    var_268.q = data_1439c9210
    int64_t rax_17 = 0
    
    if (rcx_23 != 0)
        int64_t rdx_8 = sx.q(*(rcx_23 + 0x10c))
        int64_t rcx_24 = rdx_8
        void* var_280
        arg5 = *(var_280 + 0x10)
        int64_t rax_19 = arg5[3]
        
        if (*(rax_19 + (rdx_8 << 3)) == 0)
            sub_1419ccf30(arg5, rdx_8.d)
            rax_19 = arg5[3]
            rcx_24 = rdx_8
        
        rax_17 = *(rax_19 + (rcx_24 << 3))
    
    int64_t* rcx_26 = arg3[0xa2a]
    var_268:8.q = rax_17
    int32_t var_210_1 = 0
    int16_t var_1cc
    var_1cc.b = (*(arg1 + 0x570) u>> 4).b & 1
    int32_t r9_1
    int32_t var_310_1
    int128_t var_248
    
    if (data_143e56de4 == 0)
        void* var_2a0
        sub_1419a2ec0(rcx_26, &var_2a0, &data_143e5dd40, 0)
        void* rax_26 = var_2a0
        int64_t rcx_32 = 0
        
        if (rax_26 != 0)
            int64_t rdx_14 = sx.q(*(rax_26 + 0x10c))
            int64_t rcx_33 = rdx_14
            void* var_298
            arg5 = *(var_298 + 0x10)
            int64_t rax_28 = arg5[3]
            
            if (*(rax_28 + (rdx_14 << 3)) == 0)
                sub_1419ccf30(arg5, rdx_14.d)
                rax_28 = arg5[3]
                rcx_33 = rdx_14
            
            rcx_32 = *(rax_28 + (rcx_33 << 3))
        
        var_248.q = rcx_32
        sub_1419870b0(arg2, &var_268, 2)
        var_310_1 = arg1.d + 0x5b0
        r9_1 = sub_1411411d0(var_2a0, arg2, arg3, arg1, r14_6)
    else
        void* var_2b0
        sub_1419a2ec0(rcx_26, &var_2b0, &data_143e5dea0, 0)
        void* rax_22 = var_2b0
        int64_t rcx_27 = 0
        
        if (rax_22 != 0)
            int64_t rdx_10 = sx.q(*(rax_22 + 0x10c))
            int64_t rcx_28 = rdx_10
            void* var_2a8
            arg5 = *(var_2a8 + 0x10)
            int64_t rax_24 = arg5[3]
            
            if (*(rax_24 + (rdx_10 << 3)) == 0)
                sub_1419ccf30(arg5, rdx_10.d)
                rax_24 = arg5[3]
                rcx_28 = rdx_10
            
            rcx_27 = *(rax_24 + (rcx_28 << 3))
        
        var_248.q = rcx_27
        sub_1419870b0(arg2, &var_268, 2)
        var_310_1 = arg1.d + 0x5b0
        r9_1 = sub_1411411d0(var_2b0, arg2, arg3, arg1, r14_6)
    uint128_t zmm1_2
    int512_t zmm2_1
    
    if ((*(arg1 + 0x570) & 0x10) != 0)
        zmm1_2.d = (*(arg1 + 0x3d0)).d f- *(arg1 + 0x3d8)
        zmm2_1.o = *(arg1 + 0x3d4)
        r9_1, zmm2_1, zmm3 = sub_141986e10(arg2, zmm1_2, zmm2_1.o, &arg3[0x50])
    
    bool c_1 = data_143e56de4 != 0
    uint128_t var_278 = var_288.o
    int32_t r10_2 = r14_6[3] - r14_6[1]
    int64_t var_2c0
    var_2c0:4.d = r10_2
    int64_t rcx_38 = data_143ec4fdc
    zmm1_2 = _mm_cvtepi32_ps(zx.o(r10_2))
    int32_t rbx_3 = r14_6[2] - *r14_6
    int32_t var_2b4_1 = divs.dp.d(sx.q((rcx_38 u>> 0x20).d), sbb.d(arg5.d, arg5.d, c_1) + 2)
    var_2c0.d = rbx_3
    void* r9_5 = zx.q(sbb.d(r9_1, r9_1, data_143e56de4 != 0) + 2)
    zmm3.o = zx.o(rbx_3)
    zmm3.o = _mm_cvtepi32_ps(zmm3.o)
    uint128_t zmm5_1 = _mm_cvtepi32_ps(zx.o(divs.dp.d(sx.q(r10_2), r9_5.d)))
    int32_t temp28_1
    int32_t temp29_1
    temp28_1:temp29_1 = sx.q(r14_6[1])
    uint128_t zmm4_1 = _mm_cvtepi32_ps(zx.o(divs.dp.d(sx.q(rbx_3), r9_5.d)))
    zmm2_1.o = zx.o(divs.dp.d(temp28_1:temp29_1, r9_5.d))
    int32_t var_2d0_1 = 1
    int32_t temp34_1
    int32_t temp35_1
    temp34_1:temp35_1 = sx.q(*r14_6)
    int32_t var_2d8_1 = 0
    zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
    int32_t var_308_1 = zmm2_1.d
    zmm2_1.o = zx.o(0)
    int64_t* var_318_1
    var_318_1.d = zmm1_2.d
    sub_1413993b0(arg2, zx.o(0), zmm2_1, r9_5, zmm3, var_318_1.d, 
        _mm_cvtepi32_ps(zx.o(divs.dp.d(temp34_1:temp35_1, r9_5.d))).d, var_308_1, zmm4_1.d, 
        zmm5_1.d, var_2c0, divs.dp.d(sx.q(rcx_38.d), sbb.d(arg5.d, arg5.d, c_1) + 2).q, &var_278, 
        var_2d8_1, var_2d0_1)
    sub_141096650(arg2)
    int64_t var_b0
    result = sub_1405d1550(&var_b0)
    int64_t* rcx_44 = *(arg1 + 0x5b0)
    *(arg1 + 0x5b0) = 0
    
    if (rcx_44 != 0)
        result = (*(*rcx_44 + 0x38))(rcx_44)
    
    int64_t* rbx_4 = *(arg1 + 0x5a8)
    *(arg1 + 0x5a8) = 0
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            char rax_53
            
            if (rbx_4[2].b == 0 && data_143f0f1d0 == 0)
                rax_53 = sub_1405949a0()
            
            if (rbx_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_53 != 0))
                result = (**rbx_4)(rbx_4, 1)
            else
                result = nullptr
                bool z_1
                
                if (0 == *(rbx_4 + 0xc))
                    *(rbx_4 + 0xc) = 1
                    z_1 = true
                else
                    result = zx.q(*(rbx_4 + 0xc))
                    z_1 = false
                
                if (z_1)
                    int32_t rax_54 = sub_140a20af0()
                    
                    if (rax_54 != 0)
                        rdi_1 = *(&data_143cf0bf8 + (zx.q(rax_54) u>> 0xe << 3))
                            + (zx.q(rax_54) & 0x3fff) * 0x18
                    
                    *(rdi_1 + 8) = rbx_4
                    result = sub_1405a42f0(&data_143f02390, rax_54)

__security_check_cookie(rax_1 ^ &var_338)
return result
