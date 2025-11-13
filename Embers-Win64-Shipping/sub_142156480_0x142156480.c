// 函数: sub_142156480
// 地址: 0x142156480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x2a0))()
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
uint128_t zmm10 = 0x4170000000000000
double zmm6[0x2] = zx.o(0)
zmm6[0] = float.d(performanceCount)
uint128_t zmm1 = zx.o(arg1[0x90])
zmm6[0] = zmm6[0] f* data_143d796f8
zmm6[0] = zmm6[0] f+ zmm10.q
double temp0[0x2] = _mm_unpacklo_pd(zmm6, zmm6[0])

if (not(zmm1.q f!= 0.0))
    arg1[0x90] = temp0.q
    zmm1 = temp0
    *(arg1 + 0x1d8) = temp0

void* rax_1 = arg1[0xb]
double zmm0[0x2] = temp0
zmm0[0] = zmm0[0] f- zmm1.q
arg1[0x91] = zmm0.q
int64_t* rcx_1 = data_143f5b298
int32_t rdi = *(rax_1 + 0x5c)
(*(*rcx_1 + 0x2b0))(rcx_1, zx.o(0), 0)

if (rdi s<= 0)
    zmm1 = 0x7f7fffff
else
    if (not(zmm0[0].d f> 0f))
        zmm0 = 0x7f7fffff
    
    zmm1 = _mm_cvtepi32_ps(zx.o(rdi))

float zmm13[0x4]

if (zmm0[0].d f>= 0f)
    zmm13 = _mm_min_ss(zmm1[0], zmm0[0].d)
else
    zmm13 = zx.o(0)

float zmm14[0x4] = 0x3f800000
uint32_t result
result.b = (*(arg1 + 0xa4) u>> 1).b & 1

if (result.b != 0 || zmm1.d f>= zmm0[0].d || zmm13[0] <= 0f)
label_1421565c6:
    int32_t rcx_3 = arg1[0x94].d + 1
    zmm1.q = arg1[0x91] f+ arg1[0x92]
    arg1[0x90] = temp0.q
    arg1[0x94].d = rcx_3
    arg1[0x92] = zmm1.q
    
    if (not(zmm1.q f<= 1.0))
        double temp0_4[0x2] = _mm_cvtepi32_pd(zx.o(rcx_3)[0])
        arg1[0x92] = 0
        arg1[0x94].d = 0
        zmm1.q = zmm1.q f/ temp0_4[0]
        arg1[0x93] = zmm1.q
    
    if (result.b != 0)
        int64_t* rcx_4 = arg1[0xb]
        char rax_5 = (*(*rcx_4 + 0x368))(rcx_4, zmm1)
        *(arg1 + 0x1304) = arg1[0x260].d
        arg1[0x3a] = *(arg1[0xb] + 0x218)
        QueryPerformanceCounter(&performanceCount)
        zmm0 = zx.o(0)
        zmm0[0] = float.d(performanceCount)
        zmm0[0] = zmm0[0] f* data_143d796f8
        zmm0[0] = zmm0[0] f+ zmm10.q
        arg1[0x3b] = zmm0.q
        QueryPerformanceCounter(&performanceCount)
        zmm0 = zx.o(0)
        int32_t r8_1 = -1
        zmm0[0] = float.d(performanceCount)
        zmm0[0] = zmm0[0] f* data_143d796f8
        zmm0[0] = zmm0[0] f+ zmm10.q
        arg1[0x3c] = zmm0.q
        
        for (int32_t i = *(arg1 + 0x1714); arg1[0x2e2].d != i; i = *(arg1 + 0x1714))
            int32_t rax_8 = *(arg1[0x2e4] + ((zx.q(i) & zx.q(arg1[0x2e3].d)) << 2))
            uint64_t rdi_2 = zx.q(rax_8) & 0x7fffffff
            *(arg1 + 0x1714) = i + 1
            
            if (rax_8 s>= 0 && rdi_2.d != r8_1)
                int64_t* rcx_12 = *(arg1[0x262] + (rdi_2 << 3))
                
                if (rcx_12 != 0)
                    for (void* j = rcx_12[0xc]; j != 0; j = *(j + 0xc0))
                        *(j + 0xf0) |= 1
                    
                    if (rax_5 != 0 || (rcx_12[6].d & 0x800) != 0)
                        rcx_12[6].d |= 1
                    
                    sub_141f94020(rcx_12)
                
                r8_1 = rdi_2.d
    
    zmm1.q = temp0.q f- arg1[0x8a]
    zmm0 = _mm_cvtps_pd(arg1[0x8b].d[0])
    float zmm2[0x4]
    double zmm3[0x2]
    
    if (not(zmm1.q f<= zmm0[0]))
        int32_t rax_10 = arg1[0x8f].d
        zmm3 = zx.o(0)
        zmm3[0].d = fconvert.s(zmm1.q)
        
        if (rax_10 == 0)
            zmm2 = *(arg1 + 0x45c)
        else
            zmm1.q = arg1[0x8e] f/ _mm_cvtepi32_pd(zx.o(rax_10)[0])[0]
            zmm2 = _mm_cvtpd_ps(zmm1)
            *(arg1 + 0x45c) = zmm2[0]
        
        int32_t r8_3 = *(arg1 + 0x4dc) + *(arg1 + 0x4bc)
        int32_t r9_1 = arg1[0xa3].d
        int32_t rdx_2 = *(arg1 + 0x4d4)
        zmm0 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x4a4)))
        arg1[0x8c].d = zmm2[0]
        zmm2 = 0x3f800000
        zmm2[0] = 1f f/ zmm3[0].d
        zmm0[0].d = zmm0[0].d f* zmm2[0]
        int32_t rax_11 = int.d(zmm0[0].d)
        zmm0 = _mm_cvtepi32_ps(zx.o(arg1[0x95].d))
        *(arg1 + 0x4c4) = rax_11
        zmm0[0].d = zmm0[0].d f* zmm2[0]
        int32_t rax_12 = int.d(zmm0[0].d)
        zmm0 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x4b4)))
        arg1[0x99].d = rax_12
        zmm0[0].d = zmm0[0].d f* zmm2[0]
        int32_t rax_13 = int.d(zmm0[0].d)
        zmm0 = _mm_cvtepi32_ps(zx.o(arg1[0x97].d))
        *(arg1 + 0x4cc) = rax_13
        zmm0[0].d = zmm0[0].d f* zmm2[0]
        arg1[0x9a].d = int.d(zmm0[0].d)
        sub_1421580b0(&arg1[0x9d], rdx_2, r8_3, r9_1)
        zmm0 = sub_1421580b0(&arg1[0xa0], arg1[0x9b].d, *(arg1 + 0x1994), arg1[0xa3].d)
        arg1[0xa3].d += 1
        arg1[0x8a] = temp0.q
        arg1[0x8e] = 0
        arg1[0x8f].d = 0
        *(arg1 + 0x4d4) = 0
        *(arg1 + 0x4a4) = 0
        *(arg1 + 0x4b4) = 0
    
    if (*(arg1 + 0x199d) == 0)
        double zmm7[0x2] = zx.o(*(arg1[0xb] + 0x218))
        int64_t rax_16 = *arg1
        zmm7[0] = zmm7[0] f- arg1[0x3e]
        arg1[0x3e] = zmm7.q
        (*(rax_16 + 0x348))(arg1)
        temp0[0] = temp0[0] f- arg1[0x3b]
        int128_t zmm9
        zmm9.q = fconvert.d(zmm0[0].d)
        int64_t var_168
        int64_t var_160
        int64_t var_158
        int64_t var_150
        int16_t* const var_148
        int64_t* var_138
        
        if (temp0[0] f<= zmm9.q)
            int64_t rdi_3 = data_143f4cc70
            int64_t rcx_24
            
            if (data_143de5480 == 0)
                rcx_24 = 0
            else
                rcx_24.b = GetCurrentThreadId() != data_143de5470
            
            if (*(rdi_3 + (rcx_24 << 2)) != 0)
                int32_t rax_33 = arg1[0xf].d
                int64_t rdi_5 = sx.q(rax_33 - 1)
                
                if (rax_33 - 1 s>= 0)
                    int64_t temp4_1
                    
                    do
                        int64_t* rcx_32 = *(arg1[0xe] + (rdi_5 << 3))
                        
                        if (rcx_32 != 0)
                            (*(*rcx_32 + 0x2a8))(rcx_32)
                        
                        temp4_1 = rdi_5
                        rdi_5 -= 1
                    while (temp4_1 - 1 s>= 0)
            else
                int32_t rsi_2 = arg1[0x2a3].d
                int32_t rsi_3 = rsi_2 - 1
                
                if (rsi_2 - 1 s>= 0)
                    int64_t r14_1 = sx.q(rsi_3) << 3
                    int64_t r12_1 = r14_1
                    int64_t r15_2 = sx.q(rsi_3 + 1) << 3
                    int32_t temp5_1
                    
                    do
                        int64_t* rcx_25 = *(r14_1 + arg1[0x2a2])
                        (*(*rcx_25 + 0x2a8))(rcx_25)
                        int64_t* rcx_26 = *(r14_1 + arg1[0x2a2])
                        
                        if ((*(*rcx_26 + 0x2b0))(rcx_26) != 0)
                            int32_t rax_30 = arg1[0x2a3].d
                            int32_t rcx_28 = rax_30 - rsi_3
                            
                            if (rcx_28 != 1)
                                int64_t rax_31 = arg1[0x2a2]
                                memmove(r12_1 + rax_31, r15_2 + rax_31, (rcx_28 - 1) << 3)
                                rax_30 = arg1[0x2a3].d
                            
                            arg1[0x2a3].d = rax_30 - 1
                            sub_1405c53d0(&arg1[0x2a2])
                        
                        r15_2 -= 8
                        r12_1 -= 8
                        r14_1 -= 8
                        temp5_1 = rsi_3
                        rsi_3 -= 1
                    while (temp5_1 - 1 s>= 0)
            
            int32_t rcx_33 = 0
            var_138:4.d = 1
            var_138.d = 0
            int32_t r11_1 = arg1[0x288].d
            void* r9_4 = &arg1[0x285]
            int32_t r8_8 = 0
            void* var_130 = r9_4
            int32_t var_128_1 = 0xffffffff
            int64_t var_124_1 = 0
            
            if (r11_1 != 0)
                void* rax_37 = *(r9_4 + 0x10)
                
                if (rax_37 != 0)
                    r9_4 = rax_37
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(r11_1 - 1)
                int32_t rdx_9 = *r9_4
                
                if (rdx_9 != 0)
                label_142156c3d:
                    int32_t rax_44 = neg.d(rdx_9) & rdx_9
                    uint64_t rflags_1
                    int32_t temp0_14
                    temp0_14, rflags_1 = _bit_scan_reverse(rax_44)
                    var_138:4.d = rax_44
                    int32_t rax_45
                    
                    if (rax_44 == 0)
                        rax_45 = 0x20
                    else
                        rax_45 = 0x1f - temp0_14
                    
                    var_124_1.d = r8_8 - rax_45 + 0x1f
                    
                    if (r8_8 - rax_45 + 0x1f s> r11_1)
                        var_124_1.d = r11_1
                else
                    while (true)
                        int64_t rdx_10 = sx.q(rcx_33)
                        r8_8 += 0x20
                        rcx_33 += 1
                        var_124_1:4.d = r8_8
                        var_138.d = rcx_33
                        
                        if (rdx_10.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_9 = *(r9_4 + (rdx_10 << 2) + 4)
                        var_128_1 = 0xffffffff
                        
                        if (rdx_9 != 0)
                            goto label_142156c3d
                    
                    var_124_1.d = r11_1
            
            uint128_t zmm4_1 = var_128_1.o
            void* var_c0_1 = &arg1[0x283]
            int16_t var_100_1 = 0
            zmm3 = var_138.o
            zmm0 = zmm4_1
            double rax_47 = zmm3[0]
            var_128_1.o = zmm3
            var_138.o = (&arg1[0x283]).o
            zmm0[0] = (_mm_unpackhi_pd(zmm4_1, zmm4_1.q)).q
            
            if ((zmm4_1.q u>> 0x20).d s< *(rax_47 i+ 0x18))
                int32_t i_4
                int32_t i_1 = i_4
                
                do
                    int32_t rdi_7 = 0
                    int64_t rsi_5 = sx.q(i_1) << 5
                    int64_t r15_3 = *var_138
                    int32_t r8_10 = *(rsi_5 + r15_3 + 0x10)
                    bool cond:8_1 = r8_10 != 0
                    
                    if (r8_10 s> 0)
                        int32_t r13_1 = 1
                        int64_t** r12_2 = nullptr
                        
                        do
                            int64_t* r14_2 = *(r12_2 + *(rsi_5 + r15_3 + 8))
                            
                            if (r14_2 == 0)
                                goto label_142156d90
                            
                            int32_t rax_50 = *(r14_2 + 0xc)
                            void* const rax_54
                            
                            if (rax_50 s>= data_143e1d9b4)
                                rax_54 = nullptr
                            else
                                uint32_t rdx_11 = zx.d(rax_50.w)
                                
                                if (rax_50 s< 0)
                                    rax_50 += 0xffff
                                    rdx_11 -= 0x10000
                                
                                rax_54 = *(data_143e1d9a0 + (sx.q(rax_50 s>> 0x10) << 3))
                                    + sx.q(rdx_11) * 0x18
                            
                            if (((*(rax_54 + 8) u>> 0x1d).b & 1) != 0)
                                goto label_142156d90
                            
                            if (sub_141f91a20(r14_2) == 0)
                                r8_10 = *(rsi_5 + r15_3 + 0x10)
                            else
                                sub_141f83fe0(r14_2, 0, *(r14_2 + 0x191))
                                r8_10 = *(rsi_5 + r15_3 + 0x10)
                            label_142156d90:
                                int32_t rax_59 = r8_10 - rdi_7
                                
                                if (rax_59 != 1)
                                    int64_t rcx_41 = *(rsi_5 + r15_3 + 8)
                                    memmove(rcx_41 + (sx.q(rdi_7) << 3), 
                                        rcx_41 + (sx.q(r13_1) << 3), (rax_59 - 1) << 3)
                                    r8_10 = *(rsi_5 + r15_3 + 0x10)
                                
                                r8_10 -= 1
                                rdi_7 -= 1
                                r13_1 -= 1
                                *(rsi_5 + r15_3 + 0x10) = r8_10
                                r12_2 -= 8
                            
                            rdi_7 += 1
                            r13_1 += 1
                            r12_2 = &r12_2[1]
                        while (rdi_7 s< r8_10)
                        
                        i_1 = i_4
                        cond:8_1 = r8_10 != 0
                    
                    if (not(cond:8_1))
                        sub_142101580(zmm0[1], i_1)
                        var_100_1.b = 1
                    
                    var_124_1:4.d &= not.d(var_130:4.d)
                    sub_14059bdd0(&var_130)
                    i_1 = i_4
                while (i_1 s< *(var_128_1.q + 0x18))
                
                if (var_100_1.b != 0 && var_100_1:1.b != 0)
                    sub_140cb1a20(&arg1[0x283], arg1[0x284].d - *(arg1 + 0x144c), 1)
            
            if (*arg1[0x262] == 0
                    && (*arg1[0x264] != arg1[0x26a].d || *arg1[0x266] != *(arg1 + 0x1354)))
                *(arg1 + 0x134) = 1
            
        label_142156e96:
            double temp0_16[0x2]
            
            if (*(arg1 + 0x271) == 0)
                void* rax_69 = arg1[0xb]
                zmm1.q = *(rax_69 + 0x218) f- arg1[0x3d]
                temp0_16 = _mm_cvtps_pd((*(rax_69 + 0x74))[0])
            
            if (*(arg1 + 0x271) != 0 || not(zmm1.q f<= temp0_16[0]))
                void* rax_70 = arg1[0x28]
                
                if ((rax_70 == 0 || *(rax_70 + 0x21c) == 2) && (((*(arg1 + 0xa4) u>> 1).b & 1) != 0
                        || *(arg1[0xb] + 0x88) != 0 || *arg1[0x266] != *(arg1 + 0x1354)))
                    (*(*arg1 + 0x2a8))(arg1, 0)
            
            void* rcx_50 = arg1[0x28]
            
            if (rcx_50 != 0)
                sub_141ccf540(rcx_50, _mm_cvtpd_ps(zx.o(arg1[0x91])))
                int64_t* i_7 = sub_141ccde80(arg1[0x28])
                int64_t* i_6 = i_7
                
                if (i_7 != 0)
                    int64_t* rcx_52 = arg1[0xb]
                    int64_t rdx_17 = *rcx_52
                    
                    if ((*(rdx_17 + 0x388))(rcx_52, rdx_17) != 0)
                        *(arg1[0x28] + 0x290) = 1
                        int64_t* i_2
                        
                        do
                            (*(*arg1 + 0x288))(arg1, *i_6, zx.q(i_6[1].d), i_6 + 0xc, var_168, 
                                var_160, var_158, var_150, var_148)
                            i_2 = sub_141ccde80(arg1[0x28])
                            i_6 = i_2
                        while (i_2 != 0)
                        *(arg1[0x28] + 0x290) = i_6.b
                
                int64_t* i_8 = sub_141ccde20(arg1[0x28])
                int64_t* i_5 = i_8
                
                if (i_8 != 0)
                    int64_t* i_3
                    
                    do
                        int64_t* rcx_57 = arg1[0xb]
                        int64_t rdx_19 = *rcx_57
                        
                        if ((*(rdx_19 + 0x388))(rcx_57, rdx_19) != 0)
                            (*(*arg1 + 0x288))(arg1, *i_5, zx.q(i_5[1].d), i_5 + 0xc, var_168, 
                                var_160, var_158, var_150, var_148)
                        
                        if (i_5 != 0)
                            j_sub_140a74f90(*i_5)
                            int64_t* rdi_8 = i_5[7]
                            
                            if (rdi_8 != 0)
                                rdi_8[1].d -= 1
                                
                                if (rdi_8[1].d == 1)
                                    (**rdi_8)(rdi_8)
                                    int32_t temp10_1 = *(rdi_8 + 0xc)
                                    *(rdi_8 + 0xc) -= 1
                                    
                                    if (temp10_1 == 1)
                                        (*(*rdi_8 + 8))(rdi_8, 1)
                            
                            j_sub_140a74f90(i_5)
                        
                        i_3 = sub_141ccde20(arg1[0x28])
                        i_5 = i_3
                    while (i_3 != 0)
            
            int32_t rax_84 = (*(*arg1 + 0x2b8))(arg1, 0)
            arg1[0x33a].d += 1
            
            if (rax_84 != 0)
                arg1[0x33d].d = 0
            else
                int32_t rax_85 = arg1[0x33d].d
                *(arg1 + 0x19d4) += 1
                arg1[0x33d].d = rax_85 + 1
                
                if (rax_85 + 1 u> arg1[0x33b].d)
                    arg1[0x33b].d = rax_85 + 1
            
            zmm0 = zx.o(0)
            zmm0[0].d = fconvert.s(zmm7[0])
            
            if (not(zmm13[0] == 0f))
                if (zmm0[0].d f>= 0f)
                    zmm14[0] = 1f / zmm13[0]
                    zmm0 = _mm_min_ss(zmm14[0], zmm0[0].d)
                else
                    zmm0 = zx.o(0)
            
            zmm2 = zx.o(0)
            zmm2[0] = float.s(arg1[7].d)
            zmm2[0] = zmm2[0] f* zmm0[0].d
            zmm2[0] = zmm2[0] * 8f
            zmm2[0] = zmm2[0] + zmm2[0]
            result = int.d(zmm2[0].d)
            zmm2 ^= data_142d3f780
            zmm0 = zx.o(0)
            arg1[0x3f].d -= result
            zmm0[0].d = float.s(arg1[0x3f].d)
            
            if (not(zmm0[0].d f>= zmm2[0]))
                result = int.d(zmm2[0])
                arg1[0x3f].d = result
            
            arg1[0x345].b = 0
        else
            QueryPerformanceCounter(&performanceCount)
            int64_t rax_17 = *arg1
            zmm6 = zx.o(0)
            zmm6[0] = float.d(performanceCount)
            zmm6[0] = zmm6[0] f* data_143d796f8
            zmm6[0] = zmm6[0] f+ zmm10.q
            zmm6[0] = zmm6[0] f- arg1[0x3b]
            zmm6[0] = zmm6[0] f- arg1[0x3c]
            int64_t* rax_18 = (*(rax_17 + 0x280))(arg1, &var_138)
            int16_t* const rax_19
            
            if (rax_18[1].d == 0)
                rax_19 = &data_142d40450
            else
                rax_19 = *rax_18
            
            bool cond:6_1 = (arg1[0x27].b & 1) != 0
            var_148 = rax_19
            wchar16 const* const r8_5 =
                UNetConnection::Tick: Connection TIMED OUT. Closing connection."
            var_150 = zmm9.q
            var_158 = zmm7.q
            zmm7[0] = zmm7[0] f- arg1[0x3a]
            
            if (cond:6_1)
                r8_5 = UNetConnection::Tick: Connection closing during pending destroy, not all "
                "shutdown traffic may have been negotiated"
            
            var_160 = zmm6.q
            var_168 = zmm6.q
            zmm7[0]
            int64_t var_f8
            sub_140a2e390(&var_f8, 
                %s. Elapsed: %2.2f, Real: %2.2f, Good: %2.2f, DriverTime: %2.2f, Threshold: %2.2f, %s", 
                r8_5)
            int64_t* rcx_19 = var_138
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            QueryPerformanceCounter(&performanceCount)
            zmm1.q = float.d(performanceCount)
            zmm1.q = zmm1.q f* data_143d796f8
            double temp0_12[0x2] = _mm_cvtps_pd((*(data_143f5b298 + 0xc28))[0])
            zmm1.q = zmm1.q f+ zmm10.q
            zmm1.q = zmm1.q f- data_143f4cda8
            
            if (not(zmm1.q f<= temp0_12[0]))
                QueryPerformanceCounter(&performanceCount)
                zmm0 = zx.o(0)
                zmm0[0] = float.d(performanceCount)
                zmm0[0] = zmm0[0] f* data_143d796f8
                zmm0[0] = zmm0[0] f+ zmm10.q
                data_143f4cda8 = zmm0.q
            
            result = (*(*arg1 + 0x360))(arg1, &var_f8)
            int64_t rcx_23 = var_f8
            
            if (arg1[0xb] != 0)
                if (rcx_23 != 0)
                    sub_140a74f90(rcx_23)
                
                goto label_142156e96
            
            if (rcx_23 != 0)
                return sub_140a74f90(rcx_23)
    else
        result = sub_14213f9e0(arg1)
        *(arg1 + 0x199d) = 0
else
    zmm0 = 0x3f800000
    zmm0[0].d = 1f / zmm13[0]
    
    if (not(_mm_cvtps_pd(zmm0[0])[0] f> arg1[0x91]))
        goto label_1421565c6

return result
