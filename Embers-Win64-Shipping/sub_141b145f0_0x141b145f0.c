// 函数: sub_141b145f0
// 地址: 0x141b145f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int64_t* r12 = arg5
void* r14 = arg1
void* var_2a0 = r12
char result
int128_t var_1d8
int64_t* var_178
int128_t zmm8
int128_t zmm9

if ((*(arg3 + 0x54) & 0x14) == 0)
    int32_t rdi_1 = arg2[2].d
    int32_t rsi_1 = -1
    int32_t var_1a8_1 = data_143f2c430
    int32_t* r15_1 = arg1 + 0x14
    uint128_t zmm11 = zx.o(*(arg1 + 0x30))
    int64_t var_1a0_1 = 0
    int64_t var_198_1 = 0
    char rax_8 = *(arg1 + 0x71)
    zmm9 = 0xbf800000
    var_1d8 = *(arg1 + 0x20)
    zmm8 = 0xbf800000
    uint64_t var_1c8_1 = zmm11.q
    char var_2b7_1 = 0
    char var_2b5_1 = 0
    char var_1a4_1 = 1
    char var_2b8_1
    char var_2b6_1
    char var_298
    char var_290
    int32_t var_28c
    char var_288
    int32_t var_284
    int128_t var_268
    void* var_1e8
    char var_1b8
    char var_1b0
    
    if (sub_140d3e110(r15_1) == 0)
        var_2b8_1 = var_1b0
        var_2b6_1 = var_1b8
    else
        sub_141a50ac0(sub_140d3c6e0(r15_1), &var_288)
        char r8_1 = var_288
        char var_280
        int32_t var_27c
        
        if (r8_1 == 2 || var_280 == 2
                || (var_284 s<= var_27c && (var_284 != var_27c || (r8_1 != 0 && var_280 != 0))))
            int64_t rbx_3 = *(arg3 + 0x18)
            var_268 = var_288.o
            int32_t* rax_13 = sub_141af5df0(&var_1e8, &var_268, sub_140d3c6e0(r15_1) + 0x60, rbx_3)
            zmm9 = *rax_13
            
            if (&rax_13[1] == &var_1b8 || *(rax_13 + 5) == 0)
                var_2b6_1 = var_1b8
            else
                var_2b6_1 = rax_13[1].b
                var_2b7_1 = 1
        else
            var_2b6_1 = var_1b8
        
        sub_141a50b90(sub_140d3c6e0(r15_1), &var_298)
        char r8_3 = var_298
        int32_t var_294
        
        if (r8_3 == 2 || var_290 == 2
                || (var_294 s<= var_28c && (var_294 != var_28c || (r8_3 != 0 && var_290 != 0))))
            int64_t rbx_5 = *(arg3 + 0x18)
            var_268 = var_298.o
            int32_t* rax_19 = sub_141af5df0(&var_1e8, &var_268, sub_140d3c6e0(r15_1) + 0x78, rbx_5)
            zmm8 = *rax_19
            
            if (&rax_19[1] == &var_1b0 || *(rax_19 + 5) == 0)
                var_2b8_1 = var_1b0
            else
                var_2b8_1 = rax_19[1].b
                var_2b5_1 = 1
        else
            var_2b8_1 = var_1b0
    TEB* gsbase
    
    if (data_143f2c6d8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f2c6d8)
        
        if (data_143f2c6d8 == 0xffffffff)
            int64_t rax_63 = data_143f2c6d0
            
            if (rax_63 == 0)
                rax_63 = sub_141a54240(&data_143f2c6d0, 0)
            
            data_143f2c6c8 = rax_63
            _Init_thread_footer(&data_143f2c6d8)
    
    int64_t rbx_6 = data_143f2c6c8
    var_1e8 = &r12[0xc]
    
    if (sub_141aef8f0(&r12[0xc], rbx_6) == 0)
        void*** rax_27 = sub_141af27e0()
        void** r15_2 = &rax_27[3]
        
        if (rax_27 == -0x10)
            r15_2 = nullptr
        
        if (r15_2 != 0)
            void* rax_28
            
            if (*r15_2 != 0)
                rax_28 = r15_2[1]
            
            if (*r15_2 == 0 || rax_28 == 0 || *(rax_28 + 8) s<= 0)
                if (rax_27 != 0)
                    rax_27[1].d += 1
                
                *r15_2 = &rax_27[2]
                int64_t* rcx_23 = r15_2[1]
                
                if (rax_27 != rcx_23)
                    if (rax_27 != 0)
                        *(rax_27 + 0xc) += 1
                        rcx_23 = r15_2[1]
                    
                    if (rcx_23 != 0)
                        int32_t temp8_1 = *(rcx_23 + 0xc)
                        *(rcx_23 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rcx_23 + 8))(rcx_23, 1)
                    
                    r15_2[1] = rax_27
                
                if (rax_27 != 0)
                    rax_27[1].d -= 1
                    
                    if (rax_27[1].d == 1)
                        (**rax_27)(rax_27)
                        int32_t temp7_1 = *(rax_27 + 0xc)
                        *(rax_27 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*rax_27)[1](rax_27, 1)
        
        var_298.q = &rax_27[2]
        var_290.q = rax_27
        
        if (rax_27 != 0)
            rax_27[1].d += 1
        
        var_288.q = rbx_6
        sub_1405a72d0(var_1e8, &var_288, &var_298)
        int64_t* r15_3 = var_290.q
        
        if (r15_3 != 0)
            r15_3[1].d -= 1
            
            if (r15_3[1].d == 1)
                (**r15_3)(r15_3)
                int32_t temp4_1 = *(r15_3 + 0xc)
                *(r15_3 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*r15_3 + 8))(r15_3, 1)
        
        if (rax_27 != 0)
            rax_27[1].d -= 1
            
            if (rax_27[1].d == 1)
                (**rax_27)(rax_27)
                int32_t temp5_1 = *(rax_27 + 0xc)
                *(rax_27 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*rax_27)[1](rax_27, 1)
        
        r12 = var_2a0
        r14 = arg1
    
    int32_t rax_36 = *(arg3 + 0x24)
    int32_t* var_2b0_1
    int32_t* rdx_13
    
    if (rax_36 == 0x80000000)
        void* rdx_14 = arg3 + 0x10
        
        if (*(arg3 + 0x20) != 0)
            rdx_14 = arg3 + 4
        
        rdx_13 = *rdx_14
    else
        var_2b0_1.d = rax_36
        var_2b0_1:4.d = 0
        rdx_13 = var_2b0_1
    
    uint128_t zmm0_1
    int128_t zmm6_1
    int128_t zmm10_1
    zmm0_1, zmm6_1, zmm10_1 = sub_141a47d70(r14, rdx_13)
    int32_t zmm7_1 = zmm0_1.d
    void* rax_46
    int32_t r8_7
    uint128_t zmm1_1
    
    if (*(r14 + 0x71) != 0 && not(zmm8.d f<= zmm6_1.d))
        int32_t* rcx_33 = *(sub_140d3c6e0(r15_1) + 0x98)
        
        if (rcx_33.b == 1)
            var_2b0_1.b = 0
            var_2b0_1:4.d = (rcx_33 u>> 0x20).d + 1
            rcx_33 = var_2b0_1
        
        int64_t rax_40 = *(arg3 + 0x18)
        zmm0_1 = _mm_cvtps_pd(zmm8.q)
        zmm1_1.q = _mm_cvtepi32_pd(zx.q(rax_40.d)).q f* zmm0_1.q
        zmm1_1.q = zmm1_1.q f/ _mm_cvtepi32_pd(zx.q((rax_40 u>> 0x20).d)).q
        int64_t rdx_17 = int.q(zmm1_1.q)
        uint128_t zmm2_1 = zmm1_1
        
        if (rdx_17 != -0x8000000000000000)
            zmm0_1.q = float.d(rdx_17)
            
            if (not(zmm0_1.q f== zmm1_1.q))
                zmm2_1.q =
                    float.d(rdx_17 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm2_1, zmm2_1.q))) & 1))
        
        zmm1_1.q = zmm1_1.q f- zmm2_1.q
        int32_t rax_44 = int.d(zmm2_1.q)
        
        if (not(zmm1_1.q f<= 0.0))
            zmm1_1 = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff).q, zmm1_1.q)
        
        zmm0_1 = _mm_cvtpd_ps(zmm1_1)
        var_2b0_1.d = rax_44
        
        if (zmm0_1.d f>= zmm6_1.d)
            var_2b0_1:4.d = _mm_min_ss(zmm0_1.d, 0x3f7fffff).d
        else
            var_2b0_1:4.d = 0
        
        var_288.q = var_2b0_1
        uint32_t rcx_34 = (rcx_33 u>> 0x20).d
        var_2a0.d = rcx_34
        var_2a0:4.d = 0
        var_1e8 = var_2a0
        zmm2_1.d = var_1e8:4.d.d f- var_284
        zmm1_1.d = zmm2_1.d f+ zmm2_1.d
        zmm1_1.d = zmm1_1.d f- 0.5f
        int32_t rdx_22 = int.d(zmm1_1.d) s>> 1
        r8_7 = rcx_34 - rax_44 + rdx_22
        var_2b0_1.d = r8_7
        zmm2_1.d = zmm2_1.d f- _mm_cvtepi32_ps(zx.o(rdx_22)).d
        
        if (zmm2_1.d f>= zmm6_1.d)
            var_2b0_1:4.d = _mm_min_ss(zmm2_1.d, 0x3f7fffff).d
        else
            var_2b0_1:4.d = 0
        
        int32_t rax_45 = *(arg3 + 0x24)
        
        if (rax_45 == 0x80000000)
            void* rcx_36 = arg3 + 0x10
            
            if (*(arg3 + 0x20) != 0)
                rcx_36 = arg3 + 4
            
            rax_46 = *rcx_36
        else
            var_2a0.d = rax_45
            var_2a0:4.d = 0
            rax_46 = var_2a0
        
        var_288.q = var_2b0_1
        var_1e8 = rax_46
    
    char r15_4
    
    if (*(r14 + 0x71) != 0 && not(zmm8.d f<= zmm6_1.d)
            && (rax_46.d s> r8_7 || (rax_46.d == r8_7 && not(var_1e8:4.d.d f< var_284))))
        zmm9 = zmm8
        r15_4 = var_2b8_1
        var_2b7_1 = 0
        
        if (var_2b5_1 != 0)
            var_2b6_1 = r15_4
            var_2b7_1 = 1
        
        rsi_1 = rdi_1
        var_1a8_1 = var_1d8.d
        rdi_1 = -1
        zmm8 = 0xbf800000
        char var_1a4_2 = var_1d8:4.b
        var_268:8.q = 0
        int64_t var_258_1 = 0
        zmm1_1 = var_268
        var_1a0_1.o = var_1d8
        var_1d8.d = data_143f2c430
        var_1d8:4.b = 1
        zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xee)
        var_1d8 = zmm1_1
        var_2b5_1 = 0
        zmm10_1 = var_1d8
        zmm11 = zmm0_1
    else
        r15_4 = var_2b8_1
    
    var_1e8.d = data_1439e5888
    int64_t rax_52 = _mm_bsrli_si128(*(r12 + 0x124), 8).q
    var_1e8 = -1
    char var_1dc_1 = 0
    
    if ((rax_52 u>> 0x20).b != 1)
        zmm6_1 = var_1e8.o
    else
        var_28c.b = 1
        var_290.d = *(arg4 + 0x20)
        zmm6_1.q = *(arg4 + 0x18)
        var_1e8.o = zmm6_1
    
    uint64_t var_228_1 = zmm11.q
    char r14_2 = *(sub_140d3c6e0(r14 + 0x14) + 0xc9)
    int32_t var_21c_1 = zmm9.d
    int128_t var_238 = zmm10_1
    int32_t var_220_1 = rdi_1
    char var_217_1 = 0
    
    if (var_2b7_1 != 0)
        char var_218_1 = var_2b6_1
        char var_217_2 = 1
    
    int32_t var_214_1 = zmm8.d
    char var_20f_1 = 0
    
    if (var_2b5_1 != 0)
        char var_210_1 = r15_4
        char var_20f_2 = 1
    
    char var_20c_1 = rax_8
    uint128_t var_208_1 = var_1a8_1.o
    var_1d8.q = &data_14305d9f8
    uint64_t var_1f8_1 = var_198_1
    int32_t var_1ec_1 = zmm7_1
    int32_t var_1f0_1 = rsi_1
    sub_141af5d70(&var_1d8:8, &var_238)
    char var_128
    char var_128_1 = var_128 & 0xfc
    int64_t* rax_59 = sub_140a82f30(0x58, 8)
    char result_2 = var_128_1 | 1
    var_178 = rax_59
    int64_t* rcx_40 = &var_178
    
    if ((result_2 & 2) == 0)
        rcx_40 = rax_59
    
    *rcx_40 = &data_14305d9f8
    sub_141af5d70(&rcx_40[1], &var_1d8:8)
    int32_t var_110_1 = *(arg3 + 0x50)
    int32_t var_10c_1 = zmm7_1
    int128_t var_120_1 = zmm6_1
    char var_108_1 = r14_2
    sub_141aed140(&r12[0xc], arg2, rbx_6, &var_1e8, arg3, &var_178)
    result = result_2
    
    if ((result & 1) != 0)
        int64_t* rcx_43 = &var_178
        
        if ((result & 2) == 0)
            rcx_43 = var_178
        
        char var_128_3 = result & 0xfe
        result = (**rcx_43)(rcx_43, 0)
        
        if ((var_128_3 & 2) == 0)
            result = sub_140a74f90(var_178)
else
    int128_t zmm7 = *(arg1 + 0x20)
    char rbx_1 = *(arg1 + 0x70)
    uint128_t zmm6 = zx.o(*(arg1 + 0x30))
    zmm8 = *(arg1 + 0x40)
    zmm9 = *(arg1 + 0x50)
    int128_t zmm10 = *(arg1 + 0x60)
    char var_198 = var_198 & 0xfc
    void*** rax_2 = sub_140a82f30(0x60, 0x10)
    var_1d8.q = rax_2
    char result_1 = var_198 | 1
    void*** rcx = &var_1d8
    
    if ((result_1 & 2) == 0)
        rcx = rax_2
    
    *(rcx + 0x20) = zmm8
    *rcx = &data_143053a30
    *(rcx + 0x30) = zmm9
    rcx[0xa].b = rbx_1
    *(rcx + 8) = zmm7
    int128_t* var_2c8 = &var_1d8
    *(rcx + 0x40) = zmm10
    rcx[3] = zmm6.q
    int128_t* rax_3 = sub_1405ab790(&var_178, &r12[0x22], r12 + 0x124, &r12[0x27], var_2c8)
    int64_t rbx_2 = sx.q(r12[1].d)
    int32_t rcx_2 = (rbx_2 + 1).d
    r12[1].d = rcx_2
    
    if (rcx_2 s> *(r12 + 0xc))
        sub_1405c5190(r12)
    
    sub_1405ab620(rbx_2 * 0xc8 + *r12, rax_3)
    char var_b8
    
    if ((var_b8 & 1) != 0)
        int64_t* var_f8
        int64_t* rcx_6 = &var_f8
        
        if ((var_b8 & 2) == 0)
            rcx_6 = var_f8
        
        (**rcx_6)(rcx_6, 0)
        
        if ((var_b8 & 2) == 0)
            sub_140a74f90(var_f8)
    
    int64_t var_118
    
    if (var_118 != 0)
        sub_140a74f90(var_118)
    
    result = result_1
    
    if ((result & 1) != 0)
        int128_t* rcx_9 = &var_1d8
        
        if ((result & 2) == 0)
            rcx_9 = var_1d8.q
        
        var_198 = result & 0xfe
        result = (**rcx_9)(rcx_9, 0)
        
        if ((var_198 & 2) == 0)
            result = sub_140a74f90(var_1d8.q)
__security_check_cookie(rax_1 ^ &var_2e8)
return result
