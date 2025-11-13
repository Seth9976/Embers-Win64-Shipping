// 函数: sub_141d31830
// 地址: 0x141d31830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t i = 0
arg3[4] = 0
void* r12 = arg2

if (arg3[5] s<= 0xffffffff)
    sub_140888ba0(&arg3[2], 0)

sub_1408d8560(&arg3[8])
*arg3 = *(r12 + 0x6c)
uint64_t result = zx.q(*(r12 + 0x6c))
arg3[6] = result.d
void* r15 = *(r12 + 0x348)
void* var_260 = r15
int32_t i_5 = *(r15 + 0x638) + *(r15 + 0x628) + *(r15 + 0x618)

if (i_5 s> 0)
    int64_t var_2f0 = 0
    int32_t var_2e4_1 = 0
    sub_1405a4d70(&var_2f0)
    int64_t* rdx_3 = *(r15 + 0x640)
    int32_t r13_1 = 0
    int64_t rax_1 = sx.q(*(r15 + 0x648))
    int64_t* var_238 = rdx_3
    result = &rdx_3[rax_1]
    uint64_t result_1 = result
    void* var_2f8
    uint128_t var_2d0
    double var_2c0[0x2]
    int32_t var_2b0
    uint64_t var_290
    uint64_t var_280
    uint64_t var_270
    int64_t var_258
    int32_t* var_230
    uint128_t var_1a8
    uint128_t var_180
    int32_t arg_20
    double zmm2[0x2]
    
    if (rdx_3 != result)
        var_258 = 0
        
        do
            int32_t* rdx_4 = *rdx_3
            var_230 = rdx_4
            result = zx.q(rdx_4[4])
            uint128_t zmm0_1
            uint128_t zmm1_1
            
            if (result.d == 1)
                void* rdi_2 = sx.q(*rdx_4) * 0xe0 + *(*(rdx_4 + 8) + 0x10)
                sub_140ba6ab0(r12 + 0x368, &i, *(rdi_2 + 0x60))
                int64_t i_1 = sx.q(i)
                
                if (i_1.d == 0xffffffff)
                    result = 0
                else
                    result = i_1 * 0x60 + *(r12 + 0x368)
                
                void* const r10_1 = result + 8
                
                if (result == 0)
                    r10_1 = nullptr
                
                var_2f8 = r10_1
                
                if (r10_1 != 0)
                    int32_t r11_1 = *(r10_1 + 0x28)
                    void* r12_1 = r10_1 + 0x10
                    int32_t var_2ac_1 = 1
                    int32_t rcx_5 = 0
                    var_2b0 = 0
                    int32_t r8_1 = 0
                    void* var_2a8_1 = r12_1
                    int32_t var_2a0_1 = 0xffffffff
                    int64_t var_29c_1 = 0
                    
                    if (r11_1 != 0)
                        void* rax_5 = *(r12_1 + 0x10)
                        void* r9_1 = r12_1
                        
                        if (rax_5 != 0)
                            r9_1 = rax_5
                        
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q(r11_1 - 1)
                        int32_t rdx_8 = *r9_1
                        
                        if (rdx_8 != 0)
                        label_141d31a1d:
                            int32_t rax_12 = neg.d(rdx_8) & rdx_8
                            uint64_t rflags_1
                            int32_t temp0_1
                            temp0_1, rflags_1 = _bit_scan_reverse(rax_12)
                            int32_t var_2ac_2 = rax_12
                            int32_t rax_13
                            
                            if (rax_12 == 0)
                                rax_13 = 0x20
                            else
                                rax_13 = 0x1f - temp0_1
                            
                            var_29c_1.d = r8_1 - rax_13 + 0x1f
                            
                            if (r8_1 - rax_13 + 0x1f s> r11_1)
                                var_29c_1.d = r11_1
                        else
                            while (true)
                                int64_t rdx_9 = sx.q(rcx_5)
                                r8_1 += 0x20
                                rcx_5 += 1
                                var_29c_1:4.d = r8_1
                                var_2b0 = rcx_5
                                
                                if (rdx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_8 = *(r9_1 + (rdx_9 << 2) + 4)
                                var_2a0_1 = 0xffffffff
                                
                                if (rdx_8 != 0)
                                    goto label_141d31a1d
                            
                            var_29c_1.d = r11_1
                    
                    int32_t rdx_10 = *(r10_1 + 0x28)
                    zmm2 = var_2a0_1.o
                    var_2d0 = var_2b0.o
                    int32_t rsi_1 = 0xffffffff << (rdx_10.b & 0x1f)
                    int32_t r8_4 = rdx_10 s>> 5
                    int32_t r9_3 = rdx_10 & 0xffffffe0
                    var_2c0 = zmm2
                    int64_t var_160_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                    zmm1_1 = var_2d0
                    var_2d0:8.d = rsi_1
                    var_2d0:0xc.d = rdx_10
                    var_180 = r10_1.o
                    uint128_t var_170_1 = zmm1_1
                    
                    if (rdx_10 != r11_1)
                        void* rax_15 = *(r12_1 + 0x10)
                        void* r10_2 = r12_1
                        
                        if (rax_15 != 0)
                            r10_2 = rax_15
                        
                        int32_t temp6_1
                        int32_t temp7_1
                        temp6_1:temp7_1 = sx.q(r11_1 - 1)
                        int32_t rdx_14 = *(r10_2 + (sx.q(r8_4) << 2)) & rsi_1
                        
                        if (rdx_14 != 0)
                        label_141d31b03:
                            int32_t rax_22 = neg.d(rdx_14) & rdx_14
                            uint64_t rflags_2
                            int32_t temp0_3
                            temp0_3, rflags_2 = _bit_scan_reverse(rax_22)
                            int32_t rax_23
                            
                            if (rax_22 == 0)
                                rax_23 = 0x20
                            else
                                rax_23 = 0x1f - temp0_3
                            
                            var_2d0:0xc.d = r9_3 - rax_23 + 0x1f
                            
                            if (r9_3 - rax_23 + 0x1f s> r11_1)
                                var_2d0:0xc.d = r11_1
                        else
                            while (true)
                                int64_t rcx_10 = sx.q(r8_4)
                                r9_3 += 0x20
                                r8_4 += 1
                                
                                if (rcx_10.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_14 = *(r10_2 + (rcx_10 << 2) + 4)
                                var_2d0:8.d = 0xffffffff
                                
                                if (rdx_14 != 0)
                                    goto label_141d31b03
                            
                            var_2d0:0xc.d = r11_1
                        
                        r10_1 = var_2f8
                    
                    result = var_2d0:8.q u>> 0x20
                    uint64_t result_2 = result
                    
                    while (true)
                        int64_t rcx_12 = sx.q(var_170_1:0xc.d)
                        int64_t* rdx_15 = var_180.q
                        
                        if (rcx_12.d == result.d && var_170_1.q == r12_1 && rdx_15 == r10_1)
                            break
                        
                        result = zx.q(*(r15 + 0x638) + *(r15 + 0x628) + *(r15 + 0x618))
                        
                        if (r13_1 s>= result.d)
                            break
                        
                        if (*(*rdx_15 + rcx_12 * 0x10) != 0
                                && _finite(_mm_cvtps_pd((*(rdi_2 + 0x70)).q).q) != 0
                                && _finite(_mm_cvtps_pd((*(rdi_2 + 0x74)).q).q) != 0
                                && _finite(_mm_cvtps_pd((*(rdi_2 + 0x78)).q).q) != 0
                                && _finite(_mm_cvtps_pd((*(rdi_2 + 0x9c)).q).q) != 0)
                            int64_t* rax_33 = *(rdi_2 + 0x60)
                            int64_t* rcx_14 = *(rdi_2 + 0x68)
                            int64_t* rsi_2 = nullptr
                            int64_t* r14_1 = nullptr
                            
                            if (*(rax_33 + 0xc) u>= 1)
                                rsi_2 = rax_33
                            
                            if (*(rcx_14 + 0xc) u>= 1)
                                r14_1 = rcx_14
                            
                            if ((0f f!= *(rdi_2 + 0x70) || 0f f!= *(rdi_2 + 0x74)
                                    || not(0f f== *(rdi_2 + 0x78))) && rsi_2 != 0)
                                zmm0_1 = zx.o(*(rdi_2 + 0x90))
                                int32_t rbx_1 = rbx | 1
                                int32_t rax_34 = *(rdi_2 + 0x98)
                                var_270 = zmm0_1.q
                                zmm0_1.q = fconvert.d(zmm0_1.d)
                                char rdx_16
                                
                                if (_finite(zmm0_1.q) == 0)
                                    rdx_16 = 0
                                else if (_finite(_mm_cvtps_pd(var_270:4.d.q).q) == 0)
                                    rdx_16 = 0
                                else if (_finite(_mm_cvtps_pd(rax_34.q).q) == 0)
                                    rdx_16 = 0
                                else
                                    zmm0_1 = zx.o(*(rdi_2 + 0x84))
                                    rbx_1 |= 2
                                    int32_t rax_38 = *(rdi_2 + 0x8c)
                                    uint64_t var_248_1 = zmm0_1.q
                                    zmm0_1.q = fconvert.d(zmm0_1.d)
                                    
                                    if (_finite(zmm0_1.q) == 0)
                                        rdx_16 = 0
                                    else if (_finite(_mm_cvtps_pd(var_248_1:4.d.q).q) == 0)
                                        rdx_16 = 0
                                    else if (_finite(_mm_cvtps_pd(rax_38.q).q) == 0)
                                        rdx_16 = 0
                                    else
                                        int64_t r15_1 = sx.q(rsi_2[1].d) * 3
                                        int64_t r12_2 = *(*rsi_2 + 0x1b8)
                                        
                                        if (_finite(_mm_cvtps_pd((*(r12_2 + (r15_1 << 2))).q).q)
                                                == 0)
                                            rdx_16 = 0
                                        else if (_finite(_mm_cvtps_pd((*(r12_2 + (r15_1 << 2) + 4))
                                                .q).q) == 0)
                                            rdx_16 = 0
                                        else if (_finite(_mm_cvtps_pd((*(r12_2 + (r15_1 << 2) + 8))
                                                .q).q) == 0)
                                            rdx_16 = 0
                                        else
                                            int64_t r15_2 = sx.q(rsi_2[1].d) * 3
                                            int64_t rsi_3 = *(*rsi_2 + 0x1d0)
                                            
                                            if (_finite(_mm_cvtps_pd((*(rsi_3 + (r15_2 << 2))).q).q)
                                                    == 0)
                                                rdx_16 = 0
                                            else if (_finite(_mm_cvtps_pd((
                                                    *(rsi_3 + (r15_2 << 2) + 4)).q).q) == 0)
                                                rdx_16 = 0
                                            else if (_finite(_mm_cvtps_pd((
                                                    *(rsi_3 + (r15_2 << 2) + 8)).q).q) == 0)
                                                rdx_16 = 0
                                            else if (r14_1 == 0)
                                                rdx_16 = 1
                                            else
                                                int64_t rsi_4 = sx.q(r14_1[1].d) * 3
                                                int64_t r15_3 = *(*r14_1 + 0x1b8)
                                                
                                                if (_finite(_mm_cvtps_pd((*(r15_3 + (rsi_4 << 2)))
                                                        .q).q) == 0)
                                                    rdx_16 = 0
                                                else if (_finite(_mm_cvtps_pd((
                                                        *(r15_3 + (rsi_4 << 2) + 4)).q).q) == 0)
                                                    rdx_16 = 0
                                                else if (_finite(_mm_cvtps_pd((
                                                        *(r15_3 + (rsi_4 << 2) + 8)).q).q) == 0)
                                                    rdx_16 = 0
                                                else
                                                    int64_t rsi_5 = sx.q(r14_1[1].d) * 3
                                                    int64_t r14_2 = *(*r14_1 + 0x1d0)
                                                    
                                                    if (_finite(_mm_cvtps_pd((
                                                            *(r14_2 + (rsi_5 << 2))).q).q) == 0)
                                                        rdx_16 = 0
                                                    else if (_finite(_mm_cvtps_pd((
                                                            *(r14_2 + (rsi_5 << 2) + 4)).q).q) == 0)
                                                        rdx_16 = 0
                                                    else if (_finite(_mm_cvtps_pd((
                                                            *(r14_2 + (rsi_5 << 2) + 8)).q).q) == 0)
                                                        rdx_16 = 0
                                                    else
                                                        rdx_16 = 1
                                
                                r12_1 = var_2a8_1
                                int32_t rcx_16 = rbx_1 & 0xfffffffd
                                
                                if ((rbx_1.b & 2) == 0)
                                    rcx_16 = rbx_1
                                
                                rbx = rcx_16 & 0xfffffffe
                                
                                if (rdx_16 != 0)
                                    int64_t r15_4 = var_258
                                    r13_1 += 1
                                    *(var_2f0 + (r15_4 << 3)) = var_230
                                    var_258 = r15_4 + 1
                                
                                r15 = var_260
                        
                        var_170_1:8.d &= not.d(var_180:0xc.d)
                        sub_14059bdd0(&var_180:8)
                        r10_1 = var_2f8
                        result = result_2
                    
                    r12 = arg2
            else if (result.d == 3)
                void* rdi_5 = sx.q(*rdx_4) * 0x140 + *(*(rdx_4 + 8) + 0x30)
                sub_140ba6ab0(r12 + 0x368, &arg_20, *(rdi_5 + 0x60))
                int64_t rax_68 = sx.q(arg_20)
                
                if (rax_68.d == 0xffffffff)
                    result = 0
                else
                    result = rax_68 * 0x60 + *(r12 + 0x368)
                
                void* r10_3 = result + 8
                
                if (result == 0)
                    r10_3 = nullptr
                
                var_2f8 = r10_3
                
                if (r10_3 != 0)
                    int32_t r11_2 = *(r10_3 + 0x28)
                    void* r12_3 = r10_3 + 0x10
                    int32_t var_2ac_3 = 1
                    int32_t rcx_20 = 0
                    var_2b0 = 0
                    int32_t r8_6 = 0
                    void* var_2a8_2 = r12_3
                    int32_t var_2a0_2 = 0xffffffff
                    int64_t var_29c_2 = 0
                    
                    if (r11_2 != 0)
                        void* rax_71 = *(r12_3 + 0x10)
                        void* r9_5 = r12_3
                        
                        if (rax_71 != 0)
                            r9_5 = rax_71
                        
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(r11_2 - 1)
                        int32_t rdx_20 = *r9_5
                        
                        if (rdx_20 != 0)
                        label_141d31f8a:
                            int32_t rax_78 = neg.d(rdx_20) & rdx_20
                            uint64_t rflags_3
                            int32_t temp0_24
                            temp0_24, rflags_3 = _bit_scan_reverse(rax_78)
                            int32_t var_2ac_4 = rax_78
                            int32_t rax_79
                            
                            if (rax_78 == 0)
                                rax_79 = 0x20
                            else
                                rax_79 = 0x1f - temp0_24
                            
                            var_29c_2.d = r8_6 - rax_79 + 0x1f
                            
                            if (r8_6 - rax_79 + 0x1f s> r11_2)
                                var_29c_2.d = r11_2
                        else
                            while (true)
                                int64_t rdx_21 = sx.q(rcx_20)
                                r8_6 += 0x20
                                rcx_20 += 1
                                var_29c_2:4.d = r8_6
                                var_2b0 = rcx_20
                                
                                if (rdx_21.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_20 = *(r9_5 + (rdx_21 << 2) + 4)
                                var_2a0_2 = 0xffffffff
                                
                                if (rdx_20 != 0)
                                    goto label_141d31f8a
                            
                            var_29c_2.d = r11_2
                    
                    int32_t rdx_22 = *(r10_3 + 0x28)
                    zmm2 = var_2a0_2.o
                    var_2d0 = var_2b0.o
                    int32_t rsi_6 = 0xffffffff << (rdx_22.b & 0x1f)
                    int32_t r8_9 = rdx_22 s>> 5
                    int32_t r9_7 = rdx_22 & 0xffffffe0
                    var_2c0 = zmm2
                    int64_t var_188_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                    zmm1_1 = var_2d0
                    var_2d0:8.d = rsi_6
                    var_2d0:0xc.d = rdx_22
                    var_1a8 = r10_3.o
                    uint128_t var_198_1 = zmm1_1
                    
                    if (rdx_22 != r11_2)
                        void* rax_81 = *(r12_3 + 0x10)
                        void* r10_4 = r12_3
                        
                        if (rax_81 != 0)
                            r10_4 = rax_81
                        
                        int32_t temp8_1
                        int32_t temp9_1
                        temp8_1:temp9_1 = sx.q(r11_2 - 1)
                        int32_t rdx_26 = *(r10_4 + (sx.q(r8_9) << 2)) & rsi_6
                        
                        if (rdx_26 != 0)
                        label_141d32073:
                            int32_t rax_88 = neg.d(rdx_26) & rdx_26
                            uint64_t rflags_4
                            int32_t temp0_26
                            temp0_26, rflags_4 = _bit_scan_reverse(rax_88)
                            int32_t rax_89
                            
                            if (rax_88 == 0)
                                rax_89 = 0x20
                            else
                                rax_89 = 0x1f - temp0_26
                            
                            var_2d0:0xc.d = r9_7 - rax_89 + 0x1f
                            
                            if (r9_7 - rax_89 + 0x1f s> r11_2)
                                var_2d0:0xc.d = r11_2
                        else
                            while (true)
                                int64_t rcx_25 = sx.q(r8_9)
                                r9_7 += 0x20
                                r8_9 += 1
                                
                                if (rcx_25.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_26 = *(r10_4 + (rcx_25 << 2) + 4)
                                var_2d0:8.d = 0xffffffff
                                
                                if (rdx_26 != 0)
                                    goto label_141d32073
                            
                            var_2d0:0xc.d = r11_2
                        
                        r10_3 = var_2f8
                    
                    result = var_2d0:8.q u>> 0x20
                    uint64_t result_3 = result
                    
                    while (true)
                        int64_t rcx_27 = sx.q(var_198_1:0xc.d)
                        int64_t* rdx_27 = var_1a8.q
                        
                        if (rcx_27.d == result.d && var_198_1.q == r12_3 && rdx_27 == r10_3)
                            break
                        
                        result = zx.q(*(r15 + 0x638) + *(r15 + 0x628) + *(r15 + 0x618))
                        
                        if (r13_1 s>= result.d)
                            break
                        
                        if (*(*rdx_27 + rcx_27 * 0x10) != 0
                                && _finite(_mm_cvtps_pd((*(rdi_5 + 0x70)).q).q) != 0
                                && _finite(_mm_cvtps_pd((*(rdi_5 + 0x74)).q).q) != 0
                                && _finite(_mm_cvtps_pd((*(rdi_5 + 0x78)).q).q) != 0
                                && _finite(_mm_cvtps_pd((*(rdi_5 + 0x9c)).q).q) != 0)
                            int64_t* rax_99 = *(rdi_5 + 0x60)
                            int64_t* rcx_29 = *(rdi_5 + 0x68)
                            int64_t* rsi_7 = nullptr
                            int64_t* r14_3 = nullptr
                            
                            if (*(rax_99 + 0xc) u>= 1)
                                rsi_7 = rax_99
                            
                            if (*(rcx_29 + 0xc) u>= 1)
                                r14_3 = rcx_29
                            
                            if ((0f f!= *(rdi_5 + 0x70) || 0f f!= *(rdi_5 + 0x74)
                                    || not(0f f== *(rdi_5 + 0x78))) && rsi_7 != 0)
                                zmm0_1 = zx.o(*(rdi_5 + 0x90))
                                int32_t rbx_3 = rbx | 4
                                int32_t rax_100 = *(rdi_5 + 0x98)
                                var_290 = zmm0_1.q
                                zmm0_1.q = fconvert.d(zmm0_1.d)
                                char rdx_28
                                
                                if (_finite(zmm0_1.q) == 0)
                                    rdx_28 = 0
                                else if (_finite(_mm_cvtps_pd(var_290:4.d.q).q) == 0)
                                    rdx_28 = 0
                                else if (_finite(_mm_cvtps_pd(rax_100.q).q) == 0)
                                    rdx_28 = 0
                                else
                                    zmm0_1 = zx.o(*(rdi_5 + 0x84))
                                    rbx_3 |= 8
                                    int32_t rax_104 = *(rdi_5 + 0x8c)
                                    var_280 = zmm0_1.q
                                    zmm0_1.q = fconvert.d(zmm0_1.d)
                                    
                                    if (_finite(zmm0_1.q) == 0)
                                        rdx_28 = 0
                                    else if (_finite(_mm_cvtps_pd(var_280:4.d.q).q) == 0)
                                        rdx_28 = 0
                                    else if (_finite(_mm_cvtps_pd(rax_104.q).q) == 0)
                                        rdx_28 = 0
                                    else
                                        int64_t r15_6 = sx.q(rsi_7[1].d) * 3
                                        int64_t r12_4 = *(*rsi_7 + 0x1b8)
                                        
                                        if (_finite(_mm_cvtps_pd((*(r12_4 + (r15_6 << 2))).q).q)
                                                == 0)
                                            rdx_28 = 0
                                        else if (_finite(_mm_cvtps_pd((*(r12_4 + (r15_6 << 2) + 4))
                                                .q).q) == 0)
                                            rdx_28 = 0
                                        else if (_finite(_mm_cvtps_pd((*(r12_4 + (r15_6 << 2) + 8))
                                                .q).q) == 0)
                                            rdx_28 = 0
                                        else
                                            int64_t r15_7 = sx.q(rsi_7[1].d) * 3
                                            int64_t rsi_8 = *(*rsi_7 + 0x1d0)
                                            
                                            if (_finite(_mm_cvtps_pd((*(rsi_8 + (r15_7 << 2))).q).q)
                                                    == 0)
                                                rdx_28 = 0
                                            else if (_finite(_mm_cvtps_pd((
                                                    *(rsi_8 + (r15_7 << 2) + 4)).q).q) == 0)
                                                rdx_28 = 0
                                            else if (_finite(_mm_cvtps_pd((
                                                    *(rsi_8 + (r15_7 << 2) + 8)).q).q) == 0)
                                                rdx_28 = 0
                                            else if (r14_3 == 0)
                                                rdx_28 = 1
                                            else
                                                int64_t rsi_9 = sx.q(r14_3[1].d) * 3
                                                int64_t r15_8 = *(*r14_3 + 0x1b8)
                                                
                                                if (_finite(_mm_cvtps_pd((*(r15_8 + (rsi_9 << 2)))
                                                        .q).q) == 0)
                                                    rdx_28 = 0
                                                else if (_finite(_mm_cvtps_pd((
                                                        *(r15_8 + (rsi_9 << 2) + 4)).q).q) == 0)
                                                    rdx_28 = 0
                                                else if (_finite(_mm_cvtps_pd((
                                                        *(r15_8 + (rsi_9 << 2) + 8)).q).q) == 0)
                                                    rdx_28 = 0
                                                else
                                                    int64_t rsi_10 = sx.q(r14_3[1].d) * 3
                                                    int64_t r14_4 = *(*r14_3 + 0x1d0)
                                                    
                                                    if (_finite(_mm_cvtps_pd((
                                                            *(r14_4 + (rsi_10 << 2))).q).q) == 0)
                                                        rdx_28 = 0
                                                    else if (_finite(_mm_cvtps_pd((
                                                            *(r14_4 + (rsi_10 << 2) + 4)).q).q) == 0)
                                                        rdx_28 = 0
                                                    else if (_finite(_mm_cvtps_pd((
                                                            *(r14_4 + (rsi_10 << 2) + 8)).q).q) == 0)
                                                        rdx_28 = 0
                                                    else
                                                        rdx_28 = 1
                                
                                r12_3 = var_2a8_2
                                int32_t rcx_31 = rbx_3 & 0xfffffff7
                                
                                if ((rbx_3.b & 8) == 0)
                                    rcx_31 = rbx_3
                                
                                rbx = rcx_31 & 0xfffffffb
                                
                                if (rdx_28 != 0)
                                    int64_t r15_9 = var_258
                                    r13_1 += 1
                                    *(var_2f0 + (r15_9 << 3)) = var_230
                                    var_258 = r15_9 + 1
                                
                                r15 = var_260
                        
                        var_198_1:8.d &= not.d(var_1a8:0xc.d)
                        sub_14059bdd0(&var_1a8:8)
                        r10_3 = var_2f8
                        result = result_3
                    
                    r12 = arg2
            rdx_3 = &var_238[1]
            var_238 = rdx_3
        while (rdx_3 != result_1)
    
    int64_t i_3 = sx.q(i_5)
    i = i_3.d
    int64_t rdi_7
    
    if (r13_1 s<= i_3.d)
        if (r13_1 s< i_3.d)
            int32_t rax_134 = i_3.d
            result = zx.q(rax_134 - r13_1)
            
            if (rax_134 != r13_1)
                int32_t i_4 = i_3.d - result.d
                i = i_4
                
                if (i_4 != r13_1)
                    int64_t r9_9 = var_2f0
                    memmove(r9_9 + (sx.q(r13_1) << 3), r9_9 + (sx.q(result.d + r13_1) << 3), 
                        (i_4 - r13_1) << 3)
                    i_4 = i
                
                result = sub_1405c53d0(&var_2f0)
                i_3 = zx.q(i_4)
                i = i_3.d
        
        rdi_7 = var_2f0
    else
        int32_t r13_2 = r13_1 - i_3.d
        int32_t i_2 = i_3.d + r13_2
        i = i_2
        
        if (i_2 s> var_2e4_1)
            sub_1405a4d70(&var_2f0)
            i = i_2
        
        rdi_7 = var_2f0
        result = memset(rdi_7 + (i_3 << 3), 0, sx.q(r13_2) << 3)
        i_3 = zx.q(i)
    
    if (i_3.d s> 0)
        uint64_t result_4 = 0
        arg_20 = 0
        
        if (i_3.d s> 0)
            int128_t zmm7
            int128_t var_58_1 = zmm7
            int64_t rdx_31 = 0
            int128_t zmm8
            int128_t var_68_1 = zmm8
            int128_t zmm9
            int128_t var_78_1 = zmm9
            int128_t zmm10
            int128_t var_88_1 = zmm10
            int128_t zmm11
            int128_t var_98_1 = zmm11
            int128_t zmm12
            int128_t var_a8_1 = zmm12
            int128_t zmm13
            int128_t var_b8_1 = zmm13
            int128_t zmm14
            int128_t var_c8_1 = zmm14
            int64_t var_250_1 = 0
            
            do
                int32_t* rdx_32 = *(rdi_7 + (rdx_31 << 3))
                int32_t rax_137 = rdx_32[4]
                uint64_t var_228
                int32_t var_208_1
                uint128_t var_1f8_1
                uint128_t var_1e8_1
                int64_t var_1d8_1
                uint64_t result_7
                uint64_t rax_219
                uint64_t result_9
                int64_t rdx_66
                int64_t rsi_15
                uint64_t rdi_10
                
                if (rax_137 == 1)
                    int64_t rcx_41 = sx.q(*rdx_32) * 0xe0
                    zmm14 = zx.o(0)
                    int128_t var_1c8_1 = zmm14
                    int64_t rax_139 = *(rdx_32 + 8)
                    int64_t* r12_5 = r12 + 0x368
                    int64_t var_204_1
                    __builtin_memset(&var_204_1, 0, 0x38)
                    void* rcx_42 = rcx_41 + *(rax_139 + 0x10)
                    int32_t rax_140 = *(rcx_42 + 0x98)
                    uint64_t r14_5 = *(rcx_42 + 0x60)
                    uint64_t result_6 = *(rcx_42 + 0x68)
                    var_228 = *(rcx_42 + 0x90)
                    uint64_t var_21c_1 = *(rcx_42 + 0x70)
                    int32_t var_220_1 = rax_140
                    uint64_t var_210_1 = *(rcx_42 + 0x84)
                    int32_t var_214_1 = *(rcx_42 + 0x78)
                    int32_t rax_142 = *(rcx_42 + 0x8c)
                    int32_t var_1cc_1 = (*(rcx_42 + 0x9c)).d
                    var_270 = r14_5
                    result_1 = result_6
                    var_208_1 = rax_142
                    int32_t var_158
                    sub_140ba6ab0(r12_5, &var_158, r14_5)
                    int64_t rax_143 = sx.q(var_158)
                    int64_t rdx_36
                    
                    if (rax_143.d == 0xffffffff)
                        rdx_36 = 0
                    else
                        rdx_36 = rax_143 * 0x60 + *r12_5
                    
                    int64_t rax_144 = rdx_36 + 8
                    
                    if (rdx_36 == 0)
                        rax_144 = 0
                    
                    void* const var_2d8
                    int64_t var_118
                    
                    if (rax_144 != 0)
                        rbx |= 0x10
                        int32_t var_154
                        sub_140ba6ab0(r12_5, &var_154, r14_5)
                        int64_t rax_145 = sx.q(var_154)
                        void* const rax_148
                        
                        if (rax_145.d == 0xffffffff)
                            rax_148 = nullptr
                        else
                            rax_148 = rax_145 * 0x60 + *r12_5
                        
                        var_280 = 0
                        void* rsi_11 = rax_148 + 8
                        int64_t var_278_1 = 0
                        
                        if (rax_148 == 0)
                            rsi_11 = nullptr
                        
                        int32_t rdi_8 = 0
                        int32_t rdx_39 = *(rsi_11 + 8) - *(rsi_11 + 0x34)
                        
                        if (rdx_39 s> 0)
                            sub_1405c5570(&var_280, rdx_39)
                            rdi_8 = var_278_1.d
                        
                        int32_t r10_5 = *(rsi_11 + 0x28)
                        void* r9_10 = rsi_11 + 0x10
                        var_2d8:4.d = 1
                        int32_t rcx_46 = 0
                        var_2d8.d = 0
                        int32_t r8_16 = 0
                        var_2d0.q = r9_10
                        var_2d0:8.d = 0xffffffff
                        var_2d0:0xc.q = 0
                        
                        if (r10_5 != 0)
                            void* rax_149 = *(r9_10 + 0x10)
                            
                            if (rax_149 != 0)
                                r9_10 = rax_149
                            
                            int32_t temp10_1
                            int32_t temp11_1
                            temp10_1:temp11_1 = sx.q(r10_5 - 1)
                            int32_t rdx_42 = *r9_10
                            
                            if (rdx_42 != 0)
                            label_141d3273b:
                                int32_t rax_156 = neg.d(rdx_42) & rdx_42
                                uint64_t rflags_5
                                int32_t temp0_48
                                temp0_48, rflags_5 = _bit_scan_reverse(rax_156)
                                var_2d8:4.d = rax_156
                                int32_t rax_157
                                
                                if (rax_156 == 0)
                                    rax_157 = 0x20
                                else
                                    rax_157 = 0x1f - temp0_48
                                
                                var_2d0:0xc.d = r8_16 - rax_157 + 0x1f
                                
                                if (r8_16 - rax_157 + 0x1f s> r10_5)
                                    var_2d0:0xc.d = r10_5
                            else
                                while (true)
                                    int64_t rdx_43 = sx.q(rcx_46)
                                    r8_16 += 0x20
                                    rcx_46 += 1
                                    var_2c0[0].d = r8_16
                                    var_2d8.d = rcx_46
                                    
                                    if (rdx_43.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_42 = *(r9_10 + (rdx_43 << 2) + 4)
                                    var_2d0:8.d = 0xffffffff
                                    
                                    if (rdx_42 != 0)
                                        goto label_141d3273b
                                
                                var_2d0:0xc.d = r10_5
                        
                        zmm2 = var_2d0
                        double var_128_1[0x2] = zmm2
                        uint128_t var_138_1 = var_2d8.o
                        var_1a8 = rsi_11.o
                        uint32_t rax_160 = (zmm2[0] u>> 0x20).d
                        uint64_t var_188_2 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                        uint128_t var_198_2 = var_138_1
                        
                        if (rax_160 s< r10_5)
                            int32_t j = var_198_2:0xc.d
                            uint64_t r12_6 = var_280
                            
                            do
                                int64_t rsi_12 = sx.q(rdi_8)
                                int64_t r15_11 = *var_1a8.q
                                rdi_8 = (rsi_12 + 1).d
                                var_278_1.d = rdi_8
                                
                                if (rdi_8 s> var_278_1:4.d)
                                    sub_1405a4d70(&var_280)
                                    rdi_8 = var_278_1.d
                                    r12_6 = var_280
                                
                                *(r12_6 + (rsi_12 << 3)) = *(r15_11 + sx.q(j) * 0x10)
                                var_198_2:8.d &= not.d(var_1a8:0xc.d)
                                sub_14059bdd0(&var_1a8:8)
                                j = var_198_2:0xc.d
                            while (j s< *(var_198_2.q + 0x18))
                            
                            r14_5 = var_270
                            result_6 = result_1
                        
                        if (rdi_8 != 0)
                            rbx |= 0x20
                            sub_140ba6ab0(r12_5, &var_238, r14_5)
                            int64_t rax_168 = sx.q(var_238.d)
                            void* const rax_171
                            
                            if (rax_168.d == 0xffffffff)
                                rax_171 = nullptr
                            else
                                rax_171 = rax_168 * 0x60 + *r12_5
                            
                            void* rcx_51 = rax_171 + 8
                            
                            if (rax_171 == 0)
                                rcx_51 = nullptr
                            
                            result_4 = **sub_1413d1420(rcx_51, &var_118)
                    
                    result_7 = result_4
                    
                    if ((rbx.b & 0x20) != 0)
                        int64_t rcx_53 = var_118
                        rbx &= 0xffffffdf
                        
                        if (rcx_53 != 0)
                            sub_140a74f90(rcx_53)
                    
                    if ((rbx.b & 0x10) != 0)
                        uint64_t rax_173 = var_280
                        rbx &= 0xffffffef
                        
                        if (rax_173 != 0)
                            sub_140a74f90(rax_173)
                    
                    sub_140ba6ab0(r12_5, &var_230, result_6)
                    int64_t rax_174 = sx.q(var_230.d)
                    int64_t rdx_50
                    
                    if (rax_174.d == 0xffffffff)
                        rdx_50 = 0
                    else
                        rdx_50 = rax_174 * 0x60 + *r12_5
                    
                    int64_t rax_175 = rdx_50 + 8
                    
                    if (rdx_50 == 0)
                        rax_175 = 0
                    
                    int64_t var_108
                    
                    if (rax_175 == 0)
                    label_141d32b2c:
                        rdi_10 = 0
                        int64_t var_1b0_2 = 0
                        r12 = arg2
                    else
                        rbx |= 0x40
                        sub_140ba6ab0(r12_5, &var_260, r14_5)
                        int64_t rax_176 = sx.q(var_260.d)
                        void* const rax_179
                        
                        if (rax_176.d == 0xffffffff)
                            rax_179 = nullptr
                        else
                            rax_179 = rax_176 * 0x60 + *r12_5
                        
                        var_290 = 0
                        void* rsi_13 = rax_179 + 8
                        int64_t var_288_1 = 0
                        
                        if (rax_179 == 0)
                            rsi_13 = nullptr
                        
                        int32_t rdi_9 = 0
                        int32_t rdx_53 = *(rsi_13 + 8) - *(rsi_13 + 0x34)
                        
                        if (rdx_53 s> 0)
                            sub_1405c5570(&var_290, rdx_53)
                            rdi_9 = var_288_1.d
                        
                        int32_t r10_6 = *(rsi_13 + 0x28)
                        void* r9_11 = rsi_13 + 0x10
                        var_2d8:4.d = 1
                        int32_t rcx_58 = 0
                        var_2d8.d = 0
                        int32_t r8_21 = 0
                        var_2d0.q = r9_11
                        var_2d0:8.d = 0xffffffff
                        var_2d0:0xc.q = 0
                        
                        if (r10_6 != 0)
                            void* rax_180 = *(r9_11 + 0x10)
                            
                            if (rax_180 != 0)
                                r9_11 = rax_180
                            
                            int32_t temp12_1
                            int32_t temp13_1
                            temp12_1:temp13_1 = sx.q(r10_6 - 1)
                            int32_t rdx_56 = *r9_11
                            
                            if (rdx_56 != 0)
                            label_141d329eb:
                                int32_t rax_187 = neg.d(rdx_56) & rdx_56
                                uint64_t rflags_6
                                int32_t temp0_50
                                temp0_50, rflags_6 = _bit_scan_reverse(rax_187)
                                var_2d8:4.d = rax_187
                                int32_t rax_188
                                
                                if (rax_187 == 0)
                                    rax_188 = 0x20
                                else
                                    rax_188 = 0x1f - temp0_50
                                
                                var_2d0:0xc.d = r8_21 - rax_188 + 0x1f
                                
                                if (r8_21 - rax_188 + 0x1f s> r10_6)
                                    var_2d0:0xc.d = r10_6
                            else
                                while (true)
                                    int64_t rdx_57 = sx.q(rcx_58)
                                    r8_21 += 0x20
                                    rcx_58 += 1
                                    var_2c0[0].d = r8_21
                                    var_2d8.d = rcx_58
                                    
                                    if (rdx_57.d s>= (temp13_1 + (temp12_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_56 = *(r9_11 + (rdx_57 << 2) + 4)
                                    var_2d0:8.d = 0xffffffff
                                    
                                    if (rdx_56 != 0)
                                        goto label_141d329eb
                                
                                var_2d0:0xc.d = r10_6
                        
                        zmm2 = var_2d0
                        double var_128_2[0x2] = zmm2
                        uint128_t var_138_2 = var_2d8.o
                        var_180 = rsi_13.o
                        uint32_t rax_191 = (zmm2[0] u>> 0x20).d
                        uint64_t var_160_2 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                        uint128_t var_170_2 = var_138_2
                        
                        if (rax_191 s< r10_6)
                            int32_t j_1 = var_170_2:0xc.d
                            uint64_t r13_3 = var_290
                            
                            do
                                int64_t rsi_14 = sx.q(rdi_9)
                                int64_t r15_12 = *var_180.q
                                rdi_9 = (rsi_14 + 1).d
                                var_288_1.d = rdi_9
                                
                                if (rdi_9 s> var_288_1:4.d)
                                    sub_1405a4d70(&var_290)
                                    rdi_9 = var_288_1.d
                                    r13_3 = var_290
                                
                                *(r13_3 + (rsi_14 << 3)) = *(r15_12 + sx.q(j_1) * 0x10)
                                var_170_2:8.d &= not.d(var_180:0xc.d)
                                sub_14059bdd0(&var_180:8)
                                j_1 = var_170_2:0xc.d
                            while (j_1 s< *(var_170_2.q + 0x18))
                            
                            r14_5 = var_270
                            result_6 = result_1
                        
                        if (rdi_9 == 0)
                            goto label_141d32b2c
                        
                        r12 = arg2
                        rbx |= 0x80
                        rdi_10 = **sub_1413d1420(sub_141d3c0f0(r12, result_6), &var_108)
                        uint64_t var_1b0_1 = rdi_10
                    
                    if (rbx.b s< 0)
                        int64_t rcx_65 = var_108
                        rbx &= 0xffffff7f
                        
                        if (rcx_65 != 0)
                            sub_140a74f90(rcx_65)
                    
                    if ((rbx.b & 0x40) != 0)
                        uint64_t rax_201 = var_290
                        rbx &= 0xffffffbf
                        
                        if (rax_201 != 0)
                            sub_140a74f90(rax_201)
                    
                    uint64_t rax_202 = 0
                    
                    if (*(r14_5 + 0xc) u>= 2)
                        rax_202 = r14_5
                    
                    if (rax_202 != 0)
                        int64_t rdx_61 = sx.q(*(rax_202 + 8))
                        void* r8_23 = *rax_202
                        
                        if (*(rdx_61 + *(r8_23 + 0x398)) == 4)
                            int64_t rax_204 = *(r8_23 + 0x1b8)
                            int64_t rcx_67 = rdx_61 * 3
                            int32_t var_1fc_1 = *(rax_204 + (rcx_67 << 2) + 8)
                            int64_t rax_206 = *(r8_23 + 0x1d0)
                            uint64_t var_204_2 = *(rax_204 + (rcx_67 << 2))
                            var_1e8_1:4.d = *(rax_206 + (rcx_67 << 2) + 8)
                            var_1f8_1:0xc.q = *(rax_206 + (rcx_67 << 2))
                            var_1d8_1:4.d = (*(*(r8_23 + 0x2c0) + (rdx_61 << 2))).d
                    
                    uint64_t result_8 = 0
                    
                    if (*(result_6 + 0xc) u>= 2)
                        result_8 = result_6
                    
                    if (result_8 != 0)
                        int64_t rdx_62 = sx.q(*(result_8 + 8))
                        void* r8_24 = *result_8
                        
                        if (*(rdx_62 + *(r8_24 + 0x398)) == 4)
                            int64_t rax_210 = *(r8_24 + 0x1b8)
                            int64_t rcx_68 = rdx_62 * 3
                            var_1f8_1:8.d = *(rax_210 + (rcx_68 << 2) + 8)
                            int64_t rax_212 = *(r8_24 + 0x1d0)
                            var_1f8_1.q = *(rax_210 + (rcx_68 << 2))
                            var_1d8_1.d = *(rax_212 + (rcx_68 << 2) + 8)
                            var_1e8_1:8.q = *(rax_212 + (rcx_68 << 2))
                            int32_t var_1d0_1 = (*(*(r8_24 + 0x2c0) + (rdx_62 << 2))).d
                    
                    char** rax_215 = *(r12 + 0x358)
                    result_1 = result_4
                    var_270 = rdi_10
                    char* rcx_69 = *rax_215
                    char rax_216
                    
                    if (*rcx_69 != 0)
                        rax_216 = sub_141d3dea0(rcx_69, &var_228)
                    
                    if (*rcx_69 != 0 && rax_216 == 0)
                        result_4 = 0
                        rdi_7 = var_2f0
                    else
                        rsi_15 = sx.q(arg3[4])
                        int32_t rax_217 = (rsi_15 + 1).d
                        arg3[4] = rax_217
                        
                        if (rax_217 s> arg3[5])
                            sub_1408888d0(&arg3[2])
                        
                        rdx_66 = rsi_15 << 7
                        result_9 = result_4
                        __builtin_memset(*(arg3 + 8) + rdx_66, 0, 0x80)
                        rax_219 = *(arg3 + 8)
                    label_141d330b8:
                        *(rax_219 + rdx_66) = var_228.o
                        uint128_t var_218
                        *(rax_219 + rdx_66 + 0x10) = var_218
                        *(rax_219 + rdx_66 + 0x20) = var_208_1.o
                        *(rax_219 + rdx_66 + 0x30) = var_1f8_1
                        *(rax_219 + rdx_66 + 0x40) = var_1e8_1
                        *(rax_219 + rdx_66 + 0x50) = var_1d8_1.o
                        *(rax_219 + rdx_66 + 0x60) = zmm14
                        *(rax_219 + rdx_66 + 0x70) = result_7.o
                        void* rax_256 = sub_140b930d0(&arg3[8], sub_140d3d5e0(result_9), &result_1)
                        int64_t r15_15 = sx.q(*(rax_256 + 8))
                        int32_t rcx_95 = (r15_15 + 1).d
                        bool cond:23_1 = rcx_95 s<= *(rax_256 + 0xc)
                        *(rax_256 + 8) = rcx_95
                        
                        if (not(cond:23_1))
                            sub_1405a4cf0(rax_256)
                        
                        *(*rax_256 + (r15_15 << 2)) = rsi_15.d
                        
                        if (rdi_10 != 0 && rdi_10 != result_1)
                            void* rax_259 = sub_140b930d0(&arg3[8], sub_140d3d5e0(rdi_10), &var_270)
                            int64_t rsi_17 = sx.q(*(rax_259 + 8))
                            int32_t rcx_99 = (rsi_17 + 1).d
                            bool cond:24_1 = rcx_99 s<= *(rax_259 + 0xc)
                            *(rax_259 + 8) = rcx_99
                            
                            if (not(cond:24_1))
                                sub_1405a4cf0(rax_259)
                            
                            *(*rax_259 + (rsi_17 << 2)) = rsi_15.d | 0x80000000
                        
                        r12 = arg2
                        result_4 = 0
                        rdi_7 = var_2f0
                else if (rax_137 == 3)
                    int64_t rax_220 = sx.q(*rdx_32)
                    zmm14 = zx.o(0)
                    int64_t var_204_3
                    __builtin_memset(&var_204_3, 0, 0x38)
                    void* rcx_73 = rax_220 * 0x140 + *(*(rdx_32 + 8) + 0x30)
                    int128_t var_1c8_2 = zx.o(0)
                    int32_t rax_222 = *(rcx_73 + 0x98)
                    int64_t* rsi_16 = *(rcx_73 + 0x60)
                    int64_t* r15_13 = *(rcx_73 + 0x68)
                    var_228 = *(rcx_73 + 0x90)
                    uint64_t var_21c_2 = *(rcx_73 + 0x70)
                    int32_t var_220_2 = rax_222
                    uint64_t var_210_2 = *(rcx_73 + 0x84)
                    int32_t var_214_2 = *(rcx_73 + 0x78)
                    int32_t var_1cc_2 = (*(rcx_73 + 0x9c)).d
                    var_208_1 = *(rcx_73 + 0x8c)
                    sub_140ba6ab0(r12 + 0x368, &var_258, rsi_16)
                    int64_t rax_225 = sx.q(var_258.d)
                    int64_t rdx_70
                    
                    if (rax_225.d == 0xffffffff)
                        rdx_70 = 0
                    else
                        rdx_70 = rax_225 * 0x60 + *(r12 + 0x368)
                    
                    int64_t rax_226 = rdx_70 + 8
                    
                    if (rdx_70 == 0)
                        rax_226 = 0
                    
                    int64_t var_e8
                    int64_t* rax_228
                    
                    if (rax_226 != 0)
                        rbx |= 0x100
                        rax_228 = sub_1413d1420(sub_141d3c0f0(r12, rsi_16), &var_e8)
                    
                    int64_t var_f8
                    uint64_t result_5
                    
                    if (rax_226 == 0 || rax_228[1].d == 0)
                        result_5 = 0
                        result_7 = 0
                    else
                        rbx |= 0x200
                        result_5 = **sub_1413d1420(sub_141d3c0f0(r12, rsi_16), &var_f8)
                        result_7 = result_5
                    
                    if (test_bit(rbx, 9))
                        int64_t rcx_80 = var_f8
                        rbx &= 0xfffffdff
                        
                        if (rcx_80 != 0)
                            sub_140a74f90(rcx_80)
                    
                    if (test_bit(rbx, 8))
                        int64_t rcx_81 = var_e8
                        rbx &= 0xfffffeff
                        
                        if (rcx_81 != 0)
                            sub_140a74f90(rcx_81)
                    
                    sub_140ba6ab0(r12 + 0x368, &var_2f8, r15_13)
                    int64_t rax_231 = sx.q(var_2f8.d)
                    int64_t rdx_78
                    
                    if (rax_231.d == 0xffffffff)
                        rdx_78 = 0
                    else
                        rdx_78 = rax_231 * 0x60 + *(r12 + 0x368)
                    
                    int64_t rax_232 = rdx_78 + 8
                    
                    if (rdx_78 == 0)
                        rax_232 = 0
                    
                    int64_t* rax_234
                    
                    if (rax_232 != 0)
                        rbx |= 0x400
                        rax_234 = sub_1413d1420(sub_141d3c0f0(r12, rsi_16), &var_2b0)
                    
                    int64_t var_d8
                    
                    if (rax_232 == 0 || rax_234[1].d == 0)
                        rdi_10 = 0
                        int64_t var_1b0_4 = 0
                    else
                        rbx |= 0x800
                        rdi_10 = **sub_1413d1420(sub_141d3c0f0(r12, r15_13), &var_d8)
                        uint64_t var_1b0_3 = rdi_10
                    
                    if (test_bit(rbx, 0xb))
                        int64_t rcx_88 = var_d8
                        rbx &= 0xfffff7ff
                        
                        if (rcx_88 != 0)
                            sub_140a74f90(rcx_88)
                    
                    if (test_bit(rbx, 0xa))
                        int64_t rcx_89 = var_2b0.q
                        rbx &= 0xfffffbff
                        
                        if (rcx_89 != 0)
                            sub_140a74f90(rcx_89)
                    
                    int64_t* rax_237 = nullptr
                    
                    if (*(rsi_16 + 0xc) u>= 2)
                        rax_237 = rsi_16
                    
                    if (rax_237 != 0)
                        int64_t r8_27 = sx.q(rax_237[1].d)
                        void* rdx_83 = *rax_237
                        
                        if (*(r8_27 + *(rdx_83 + 0x398)) == 4)
                            int64_t rax_239 = *(rdx_83 + 0x1b8)
                            int64_t rcx_90 = r8_27 * 3
                            int32_t var_1fc_2 = *(rax_239 + (rcx_90 << 2) + 8)
                            int64_t rax_241 = *(rdx_83 + 0x1d0)
                            uint64_t var_204_4 = *(rax_239 + (rcx_90 << 2))
                            var_1e8_1:4.d = *(rax_241 + (rcx_90 << 2) + 8)
                            var_1f8_1:0xc.q = *(rax_241 + (rcx_90 << 2))
                            var_1d8_1:4.d = (*(*(rdx_83 + 0x2c0) + (r8_27 << 2))).d
                    
                    int64_t* rax_244 = nullptr
                    
                    if (*(r15_13 + 0xc) u>= 2)
                        rax_244 = r15_13
                    
                    if (rax_244 != 0)
                        int64_t rdx_84 = sx.q(rax_244[1].d)
                        void* r8_28 = *rax_244
                        
                        if (*(rdx_84 + *(r8_28 + 0x398)) == 4)
                            int64_t rax_246 = *(r8_28 + 0x1b8)
                            int64_t rcx_91 = rdx_84 * 3
                            var_1f8_1:8.d = *(rax_246 + (rcx_91 << 2) + 8)
                            int64_t rax_248 = *(r8_28 + 0x1d0)
                            var_1f8_1.q = *(rax_246 + (rcx_91 << 2))
                            var_1d8_1.d = *(rax_248 + (rcx_91 << 2) + 8)
                            var_1e8_1:8.q = *(rax_248 + (rcx_91 << 2))
                            int32_t var_1d0_2 = (*(*(r8_28 + 0x2c0) + (rdx_84 << 2))).d
                    
                    char** rax_251 = *(r12 + 0x358)
                    result_1 = result_5
                    var_270 = rdi_10
                    char* rcx_92 = *rax_251
                    char rax_252
                    
                    if (*rcx_92 != 0)
                        rax_252 = sub_141d3dea0(rcx_92, &var_228)
                    
                    if (*rcx_92 == 0 || rax_252 != 0)
                        rsi_15 = sx.q(arg3[4])
                        int32_t rax_253 = (rsi_15 + 1).d
                        arg3[4] = rax_253
                        
                        if (rax_253 s> arg3[5])
                            sub_1408888d0(&arg3[2])
                        
                        rdx_66 = rsi_15 << 7
                        result_9 = result_5
                        __builtin_memset(*(arg3 + 8) + rdx_66, 0, 0x80)
                        rax_219 = *(arg3 + 8)
                        goto label_141d330b8
                    
                    rdi_7 = var_2f0
                result = zx.q(arg_20 + 1)
                rdx_31 = var_250_1 + 1
                arg_20 = result.d
                var_250_1 = rdx_31
            while (result.d s< i)
    
    if (rdi_7 != 0)
        return sub_140a74f90(rdi_7)

return result
