// 函数: sub_1421500c0
// 地址: 0x1421500c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
int64_t* r12 = arg2
int64_t* rsi = arg1
uint64_t result = (*(*arg1 + 0x2a0))()

if ((*(r12 + 0x29) & 1) == 0)
    uint64_t i_10 = r12[0x15]
    (*(*rsi + 0x290))(rsi)
    uint128_t zmm8 = 0x4170000000000000
    uint128_t zmm7 = 0x408f400000000000
    int64_t* performanceCount
    
    if (arg3 == 0)
        QueryPerformanceCounter(&performanceCount)
        int128_t zmm6
        zmm6.q = float.d(performanceCount)
        zmm6.q = zmm6.q f* data_143d796f8
        zmm6.q = zmm6.q f+ zmm8.q
        arg5.o = zmm6
        arg5.q = arg5.q f- rsi[0x3b]
        arg5.q = arg5.q f* zmm7.q
        arg6 = arg5.o
        arg5 = sub_140b32ef0(&rsi[0x2a4], arg5.q, arg6.q)
        arg4 = zx.o(*(rsi[0xb] + 0x218))
        rsi[0x3b] = zmm6.q
        rsi[0x3a] = arg4.q
    
    uint64_t rdi_1 = 1
    int64_t r8 = 4
    int32_t var_344
    int32_t* var_338
    int64_t* performanceCount_3
    uint64_t r14_1
    
    if ((1 & (*(rsi + 0xa4) u>> 1).b) == 0)
        int64_t* rcx_3 = r12[1]
        int64_t var_a8
        __builtin_memset(&var_a8, 0, 0x20)
        var_344 = 0
        int32_t* rdx = *rcx_3
        
        if (&rdx[1] u> rcx_3[1])
            int32_t* rdx_1 = &var_344
            
            if ((*(r12 + 0x29) & 0x20) != 0)
                r8 = sub_140b54070(r12, rdx_1, arg5)
            else
                r8 = (*(*r12 + 0x150))(r12, rdx_1)
        else
            var_344 = *rdx
            *rcx_3 += 4
        
        int32_t rcx_5 = var_344
        uint16_t rax_11 = (rcx_5 u>> 0x12).w
        uint16_t rax_13 = (rcx_5 u>> 4).w & 0x3fff
        int64_t i_8 = 8
        int64_t var_88_1 = (zx.q(rcx_5) & 0xf) + 1
        
        if ((zx.q(rcx_5) & 0xf) + 1 u<= 8)
            i_8 = (zx.q(rcx_5) & 0xf) + 1
        
        if (i_8 != 0)
            int32_t* rdi_2 = &var_a8
            int64_t i
            
            do
                int64_t* rcx_6 = r12[1]
                int32_t* rdx_2 = *rcx_6
                
                if (&rdx_2[1] u<= rcx_6[1])
                    *rdi_2 = *rdx_2
                    *rcx_6 += 4
                else if ((*(r12 + 0x29) & 0x20) != 0)
                    r8 = sub_140b54070(r12, rdi_2, arg5)
                else
                    r8 = (*(*r12 + 0x150))(r12, rdi_2, 4)
                
                rdi_2 = &rdi_2[1]
                i = i_8
                i_8 -= 1
            while (i != 1)
            rsi = arg1
            rdi_1 = zx.q((i_8 + 1).d)
        
        char rcx_8 = *(r12 + 0x29)
        uint64_t rax_20
        rax_20.b = not.b(rcx_8)
        
        if ((rax_20.b & 1) == 0)
        label_1421506f9:
            sub_140a2e390(&var_338, u"Failed to read PacketHeader", r8)
            result = sub_14213f9e0(rsi)
            int32_t* rcx_30 = var_338
            
            if (rcx_30 != 0)
                result = sub_140a74f90(rcx_30)
        else
            bool r13_1 = true
            
            if (*(r12 + 0x54) u>= 0xe)
                r13_1 = false
                
                if ((rcx_8 & 1) == 0)
                    int64_t r9_1 = r12[0x15]
                    
                    if (r9_1 s< r12[0x14])
                        bool cond:6_1 =
                            (*(sx.q((r9_1 s>> 3).d) + r12[0x12]) & rdi_1.b << (r9_1.b & 7)) != 0
                        r12[0x15] = r9_1 + 1
                        r13_1 = cond:6_1
                    else
                        sub_140b55370(r12)
                
                if (r13_1 != 0)
                    int64_t rax_23 = *r12
                    var_344 = 0
                    (*(rax_23 + 0x160))(r12, &var_344, 0x400)
                    
                    if (arg3 == 0)
                        int32_t rdx_6 = var_344
                        
                        if (rdx_6 u< 0x3ff)
                            arg6 = zx.o(rsi[0x3b])
                            int64_t rcx_14 = int.q(arg6.q)
                            arg4 = arg6
                            arg5.o = zx.o(0)
                            
                            if (rcx_14 != -0x8000000000000000)
                                arg5.o = zx.o(0)
                                arg5.q = float.d(rcx_14)
                                
                                if (not(arg5.q f== arg6.q))
                                    arg4.q = float.d(rcx_14 -
                                        (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(arg4, arg4.q))) & 1))
                            
                            arg6.q = arg6.q f- arg4.q
                            arg6.q = arg6.q f* zmm7.q
                            int32_t rax_26 = int.d(_mm_cvtpd_ps(arg6).d)
                            arg4 = *(rsi + 0x51c)
                            int32_t rax_27 = rax_26 - rdx_6
                            int32_t rcx_16 = rax_27 + 0x3e8
                            
                            if (rax_26 - rdx_6 s>= 0)
                                rcx_16 = rax_27
                            
                            int32_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q(rcx_16 - rsi[0x48].d)
                            rsi[0x48].d = rcx_16
                            arg5.o = zx.o((temp3_1 ^ temp2_1) - temp2_1)
                            arg5.o = _mm_cvtepi32_ps(arg5.o)
                            arg5.d = arg5.d f- arg4.d
                            arg5.d = arg5.d f* 0.0625f
                            arg5.d = arg5.d f+ arg4.d
                            *(rsi + 0x51c) = arg5.d
            
            uint32_t r8_2 = zx.d(*(rsi + 0x1984))
            int32_t* r11_1 = &rsi[0x2e7]
            
            if (rax_11 == r8_2.w || ((rax_11.d - r8_2) & 0x3fff) u>= 0x2000)
                rax_20.b = 0
            else
                rax_20.b = 1
            
            if (rax_20.b == 0)
            label_142151b80:
                rsi[0x334].d += 1
                result = rsi[0xb]
                *(result + 0x280) += 1
                
                if (rsi[0x338].b == 0)
                    char rcx_180 = data_143de5480
                    int64_t rbx_10 = data_143f4ccb8
                    int64_t rdx_98
                    
                    if (rcx_180 == 0)
                        rdx_98 = 0
                    else
                        result = GetCurrentThreadId()
                        rcx_180 = data_143de5480
                        rdx_98.b = result.d != data_143de5470
                    
                    if (*(rbx_10 + (rdx_98 << 2)) != 0)
                        int64_t rbx_11 = data_143f4ccd0
                        int64_t rdx_99
                        
                        if (rcx_180 == 0)
                            rdx_99 = 0
                        else
                            uint32_t rax_216 = GetCurrentThreadId()
                            rcx_180 = data_143de5480
                            rdx_99.b = rax_216 != data_143de5470
                        
                        result = zx.q(*(rbx_11 + (rdx_99 << 2)))
                        
                        if (rsi[0x334].d s>= result.d)
                            int64_t rbx_12 = data_143f4cd00
                            bool cond:14_1 = rcx_180 == 0
                            int64_t rcx_181
                            
                            if (rcx_180 == 0)
                                rcx_181 = 0
                            else
                                uint32_t rax_217 = GetCurrentThreadId()
                                int32_t temp5_1 = data_143de5470
                                cond:14_1 = rax_217 == temp5_1
                                rcx_181.b = rax_217 != temp5_1
                            
                            int32_t rax_218 = *(rbx_12 + (rcx_181 << 2))
                            uint64_t rflags_1
                            int32_t temp0_5
                            temp0_5, rflags_1 = _bit_scan_reverse(rax_218)
                            int32_t rdi_13
                            
                            rdi_13 = cond:14_1 ? 0x20 : 0x1f - temp0_5
                            
                            uint64_t rflags_2
                            char temp0_6
                            temp0_6, rflags_2 = _bit_scan_reverse(rax_218 - 1)
                            char r15_4
                            
                            if (rax_218 == 1)
                                r15_4 = 0x20
                            else
                                r15_4 = 0x1f - temp0_6
                            
                            sub_142152720(&rsi[0x335])
                            int32_t rdx_100 =
                                1 << ((0x20 - r15_4) & (not.d(rdi_13 << 0x1a s>> 0x1f)).b)
                            uint64_t rflags_3
                            int32_t temp0_7
                            temp0_7, rflags_3 = _bit_scan_reverse(rdx_100)
                            rsi[0x336] = 0
                            *(rsi + 0x19bc) = 0
                            int32_t rcx_189 = 0x20 << 0x1a s>> 0x1f
                            uint64_t rflags_4
                            char temp0_8
                            temp0_8, rflags_4 = _bit_scan_reverse(rdx_100 - 1)
                            char r14_4
                            
                            if (rcx_189 == 0)
                                r14_4 = 0x20
                            else
                                r14_4 = 0x1f - temp0_8
                            
                            int32_t r15_5 = 1 << ((not.d(rcx_189)).b & (0x20 - r14_4))
                            rsi[0x337].d = r15_5
                            
                            if (r15_5 s> *(rsi + 0x19bc))
                                sub_1405a4d70(&rsi[0x336])
                            
                            memset(rsi[0x336], 0, sx.q(r15_5) << 3)
                            result = zx.q(rsi[0x337].d - 1)
                            rsi[0x335].d = result.d
                            rsi[0x338].b = 1
            else
                uint32_t rax_34 = zx.d(rax_13)
                
                if (((rax_34 - zx.d(*(rsi + 0x198c))) & 0x3fff) u>= 0x2000)
                    goto label_142151b80
                
                uint32_t rcx_18 = zx.d(*(rsi + 0x198a))
                
                if (rcx_18.w == rax_34.w || ((rcx_18 - rax_34) & 0x3fff) u>= 0x2000)
                    rax_34.b = 0
                else
                    rax_34.b = 1
                
                if (rax_34.b == 0)
                    goto label_142151b80
                
                int32_t rdi_6 = (zx.d(rax_11) - zx.d(r8_2.w)) << 0x12 s>> 0x12
                
                if (rdi_6 s<= 0)
                    goto label_142151b80
                
                char r15
                uint32_t rax_35
                
                if (rsi[0x344].b != 0 || rsi[0x338].b == 0)
                    rax_35.b = 0
                label_142150527:
                    r14_1.b = 0
                    
                    if (rax_35.b == 0 || *(rsi + 0x19cc) s<= 0)
                        r15 = 0
                    else
                        r15 = 1
                else
                    rax_35.b = 1
                    
                    if (*(rsi + 0x19cc) != 0)
                        goto label_142150527
                    
                    r14_1 = 1
                    
                    if (*(rsi + 0x19cc) s<= 0)
                        r15 = 0
                    else
                        r15 = 1
                int32_t rax_37
                
                if (r14_1.b == 0)
                    rax_37 = 0
                else
                    void* r12_1 = data_143f4cce8
                    
                    if (data_143de5480 == 0)
                        rax_37 = *r12_1
                        r12 = arg2
                    else
                        r11_1 = &rsi[0x2e7]
                        int64_t rcx_21
                        rcx_21.b = GetCurrentThreadId() != data_143de5470
                        rax_37 = *(r12_1 + (rcx_21 << 2))
                        r12 = arg2
                
                if (r15 == 0 && (r14_1.b == 0 || rdi_6 - 1 s<= 0 || rdi_6 - 1 s> rax_37))
                    void* rax_38 = rsi[0xb]
                    *(rsi + 0x4d4) += rdi_6 - 1
                    *(rsi + 0x4dc) += rdi_6 - 1
                    *(rax_38 + 0x270) += rdi_6 - 1
                    void* rax_39 = rsi[0xb]
                    *(rax_39 + 0x274) += rdi_6 - 1
                    *(rsi + 0x12fc) += rdi_6
                    rsi[0x340].d += 1
                    
                    if (rdi_6 != 1)
                        int32_t rax_40 = data_143a2e99c
                        
                        if (rax_40 s> 0)
                            char rcx_22 = rsi[0x33e].b
                            rax_40.b = rdi_6 - 1 u>= rax_40
                            rax_40.b |= rcx_22
                            rax_40.b ^= rcx_22
                            rax_40.b &= 1
                            rax_40.b ^= rcx_22
                            rsi[0x33e].b = rax_40.b
                        
                        int32_t rax_41 = *(rsi + 0x1a0c)
                        int32_t rcx_24 = *(rsi + 0x19fc) + rdi_6 - 1
                        
                        if (rcx_24 u>= rax_41)
                            rax_41 = rcx_24
                        
                        *(rsi + 0x1a0c) = rax_41
                    
                    int64_t r9_2 = zx.q(*(rsi + 0x1984))
                    var_338 = &var_a8
                    int32_t var_330 = rsi.d
                    int32_t rax_42
                    
                    if (rax_11 == r9_2.w || ((rax_11.d - r9_2.d) & 0x3fff) u>= 0x2000)
                        rax_42.b = 0
                    else
                        rax_42.b = 1
                    
                    if (rax_42.b != 0)
                        uint32_t rax_45 = zx.d(rax_13)
                        
                        if (((rax_45 - zx.d(*(rsi + 0x198c))) & 0x3fff) u< 0x2000)
                            uint32_t rdx_13 = zx.d(*(rsi + 0x198a))
                            
                            if (rdx_13.w == rax_45.w || ((rdx_13 - rax_45) & 0x3fff) u>= 0x2000)
                                rax_45.b = 0
                            else
                                rax_45.b = 1
                            
                            if (rax_45.b != 0
                                    && (zx.d(rax_11) - zx.d(r9_2.w)) << 0x12 s>> 0x12 s> 0)
                                r9_2, arg4 = sub_142136da0(r11_1, &var_a8, &var_338)
                                *(rsi + 0x1984) = rax_11
                    
                    char rax_48
                    rax_48, r8, arg5, zmm8 =
                        sub_14214fc70(rsi, r12, zx.q(r13_1), r9_2, arg4, zmm7, zmm8)
                    
                    if (rax_48 != 0)
                        goto label_142150721
                    
                    goto label_1421506f9
                
                int32_t rcx_175 = rsi[0x337].d
                int32_t rax_209 = rsi[0x339].d
                
                if (rdi_6 s<= rcx_175 - 1)
                    rcx_175 = rdi_6
                
                int32_t i_1 = rcx_175 - 1
                
                while (i_1 s> 0)
                    i_1 -= 1
                    rax_209 = (rax_209 + 1) & rsi[0x335].d
                
                int64_t rcx_177 = sx.q(rsi[0x335].d) & sx.q(rax_209)
                int64_t rax_212 = rsi[0x336]
                uint64_t* rdi_12 = rax_212 + (rcx_177 << 3)
                
                if (*(rax_212 + (rcx_177 << 3)) != 0)
                    result = rsi[0xb]
                    rsi[0x334].d += 1
                    *(result + 0x280) += 1
                else
                    void*** rax_213 = j_sub_140a82f30(0xb0)
                    uint64_t r8_47
                    
                    if (rax_213 == 0)
                        r8_47 = 0
                    else
                        r8_47 = sub_142137760(rax_213, r12)
                    
                    if (rdi_12 != &performanceCount_3)
                        uint64_t rcx_179 = *rdi_12
                        *rdi_12 = r8_47
                        
                        if (rcx_179 != 0)
                            (**rcx_179)(rcx_179, 1)
                    else if (r8_47 != 0)
                        (**r8_47)(r8_47, 1)
                    
                    *(rsi + 0x19cc) += 1
                    result = *rdi_12
                    *(result + 0xa8) = i_10
    else
        *(rsi + 0x12fc) += 1
    label_142150721:
        int64_t* rcx_31 = rsi[0xb]
        char rax_50 = (*(*rcx_31 + 0x3a8))(rcx_31)
        int64_t rdx_22 = *r12
        r14_1.b = 0
        int32_t var_33c_1 = r14_1.d
        int32_t* rdi_7 = nullptr
        var_338 = nullptr
        var_344 = 0
        int32_t var_32c_1 = 0
        
        if ((*(rdx_22 + 0x30))(r12, rdx_22, arg6) != 0)
        label_1421518a0:
            (*(*rsi + 0x290))(rsi)
            
            if (r14_1.b == 0)
                QueryPerformanceCounter(&performanceCount)
                arg4.q = float.d(performanceCount)
                arg4.q = arg4.q f* data_143d796f8
                arg4.q = arg4.q f+ zmm8.q
                rsi[0x3c] = arg4.q
            
            result = zx.q(*(rsi + 0xa4) u>> 1)
            
            if ((result.b & 1) == 0)
                int16_t rdx_92 = *(rsi + 0x12fc) & 0x3fff
                
                if (r14_1.b == 0)
                    sub_14213c9c0(&rsi[0x2e7], rdx_92, 1)
                    result = rsi[0xb]
                    *(rsi + 0x4e4) += 1
                    *(result + 0x2b0) += 1
                else
                    result = sub_14213c9c0(&rsi[0x2e7], rdx_92, 0)
                
                rsi[0x333].d += 1
                bool cond:4_1 = rsi[0x333].d u< 0x100
                *(rsi + 0x271) = 1
                
                if (not(cond:4_1))
                    result = (*(*rsi + 0x2a8))(rsi, 0)
                    
                    if (rsi[0x333].d != 0)
                        result = (*(*rsi + 0x2a8))(rsi, 0)
        else
            while (true)
                if (*(rsi + 0x134) == 1)
                    goto label_1421518a0
                
                if ((1 & (*(rsi + 0xa4) u>> 1).b) != 0 && rsi[0x26b].d u< 8
                        && (*(r12 + 0x29) & 1) == 0)
                    int64_t rax_54 = r12[0x15]
                    
                    if (rax_54 s< r12[0x14])
                        r12[0x15] = rax_54 + 1
                    else
                        sub_140b55370(r12)
                
                void** var_2f8
                int64_t* rcx_35
                int512_t zmm0
                rcx_35, zmm0 = sub_141f79880(&var_2f8, rsi, 0, 0)
                char r11_2 = *(r12 + 0x29)
                i_10.b = 0
                r14_1 = r12[0x15]
                
                if ((r11_2 & 1) == 0)
                    if (r14_1 s< r12[0x14])
                        bool cond:5_1 =
                            (*(sx.q((r14_1 s>> 3).d) + r12[0x12]) & 1 << (r14_1.b & 7)) != 0
                        r12[0x15] = r14_1 + 1
                        i_10.b = cond:5_1
                    else
                        sub_140b55370(r12)
                        r11_2 = *(r12 + 0x29)
                
                int32_t var_240_1 = *(rsi + 0x12fc)
                bool rax_60 = false
                
                if (i_10.b != 0 && (r11_2 & 1) == 0)
                    int64_t rdx_27 = r12[0x15]
                    
                    if (rdx_27 s< r12[0x14])
                        char r8_9 = *(sx.q((rdx_27 s>> 3).d) + r12[0x12])
                        r12[0x15] = rdx_27 + 1
                        rax_60 = (r8_9 & 1 << (zx.d(rdx_27.b) & 7).b) != 0
                    else
                        sub_140b55370(r12)
                        r11_2 = *(r12 + 0x29)
                        rax_60 = false
                
                bool r10_2 = false
                
                if (i_10.b != 0 && (r11_2 & 1) == 0)
                    int64_t rdx_30 = r12[0x15]
                    
                    if (rdx_30 s< r12[0x14])
                        char r8_10 = *(sx.q((rdx_30 s>> 3).d) + r12[0x12])
                        r12[0x15] = rdx_30 + 1
                        r10_2 = (r8_10 & 1 << (zx.d(rdx_30.b) & 7).b) != 0
                    else
                        sub_140b55370(r12)
                        r11_2 = *(r12 + 0x29)
                        r10_2 = false
                
                char var_214
                r10_2 = (r10_2 * 2) | (((var_214 & 0xfe) | rax_60) & 0xfd)
                bool rax_71 = r10_2 & 2
                int32_t i_13
                int32_t var_2a4
                char var_214_3
                uint64_t r9_4
                
                if (var_2a4 u>= 7)
                    if (rax_71 == 0)
                        rcx_35.b = 0
                    else
                        int64_t rax_77 = *r12
                        i_13 = 0
                        (*(rax_77 + 0x160))(r12, &i_13, 0xf)
                        rcx_35 = zx.q(i_13.b)
                    
                    char var_212_2 = rcx_35.b
                    char rax_78 = 0
                    
                    if (rcx_35.b == 1)
                        rax_78 = 4
                    
                    rax_78 |= r10_2 & 0xfb
                    r9_4 = zx.q(rax_78)
                    var_214_3 = rax_78
                else
                    r9_4 = 0
                    
                    if (rax_71 != 0 && (r11_2 & 1) == 0)
                        int64_t rdx_33 = r12[0x15]
                        
                        if (rdx_33 s< r12[0x14])
                            char r8_11 = *(sx.q((rdx_33 s>> 3).d) + r12[0x12])
                            r12[0x15] = rdx_33 + 1
                            r9_4.b = (r8_11 & 1 << (rdx_33.b & 7)) != 0
                        else
                            sub_140b55370(r12)
                            r9_4 = 0
                    
                    r9_4.b <<= 2
                    r9_4.b |= r10_2 & 0xfb
                    var_214_3 = r9_4.b
                    uint8_t var_212_1 = r9_4.b u>> 2 & 1
                
                char r10_3 = *(r12 + 0x29)
                i_10.b = 0
                
                if ((r10_3 & 1) == 0)
                    int64_t r11_3 = r12[0x15]
                    
                    if (r11_3 s< r12[0x14])
                        bool cond:10_1 =
                            (*(sx.q((r11_3 s>> 3).d) + r12[0x12]) & 1 << (r11_3.b & 7)) != 0
                        r12[0x15] = r11_3 + 1
                        i_10.b = cond:10_1
                    else
                        sub_140b55370(r12)
                        r10_3 = *(r12 + 0x29)
                        r9_4 = zx.q(var_214_3)
                
                i_10.b <<= 3
                r9_4.b &= 0xf7
                i_10.b |= r9_4.b
                rdi_7.b = 0
                char i_14 = i_10.b
                
                if ((r10_3 & 1) == 0)
                    r9_4 = r12[0x15]
                    
                    if (r9_4 s< r12[0x14])
                        bool cond:11_1 =
                            (*(sx.q((r9_4 s>> 3).d) + r12[0x12]) & 1 << (r9_4.b & 7)) != 0
                        r12[0x15] = r9_4 + 1
                        rdi_7.b = cond:11_1
                    else
                        sub_140b55370(r12)
                        i_10 = zx.q(i_14)
                
                int64_t rax_85 = *r12
                i_10.b &= 0xef
                rdi_7.b <<= 4
                rdi_7.b |= i_10.b
                char var_214_4 = rdi_7.b
                int32_t i_9
                int64_t* performanceCount_2
                wchar16* rdx_95
                int64_t r8_14
                
                if (var_2a4 u>= 3)
                    int32_t i_17
                    r8_14 = (*(rax_85 + 0x168))(r12, &i_17)
                    i_9 = i_17
                    
                    if (i_9 u< *(rsi + 0x130c))
                        goto label_142150b40
                    
                    rdx_95 = u"Bunch channel index exceeds channel limit"
                label_142151a14:
                    sub_140a2e390(&performanceCount_3, rdx_95, r8_14)
                label_142151a1c:
                    sub_14213f9e0(rsi)
                    performanceCount_2 = performanceCount_3
                label_142151a26:
                    
                    if (performanceCount_2 != 0)
                        sub_140a74f90(performanceCount_2)
                    
                    goto label_142151a30
                
                i_13 = 0
                (*(rax_85 + 0x160))(r12, &i_13, 0x2800, r9_4)
                i_9 = i_13
            label_142150b40:
                char r10_4 = *(r12 + 0x29)
                i_10.b = 0
                int32_t i_7 = i_9
                
                if ((r10_4 & 1) == 0)
                    int64_t r9_5 = r12[0x15]
                    
                    if (r9_5 s< r12[0x14])
                        bool cond:19_1 =
                            (*(sx.q((r9_5 s>> 3).d) + r12[0x12]) & 1 << (r9_5.b & 7)) != 0
                        r12[0x15] = r9_5 + 1
                        i_10.b = cond:19_1
                    else
                        sub_140b55370(r12)
                        r10_4 = *(r12 + 0x29)
                
                char var_213
                char r9_6 = (var_213 & 0xfe) | i_10.b
                i_10.b = 0
                
                if ((r10_4 & 1) == 0)
                    int64_t r11_4 = r12[0x15]
                    
                    if (r11_4 s< r12[0x14])
                        bool cond:22_1 =
                            (*(sx.q((r11_4 s>> 3).d) + r12[0x12]) & 1 << (r11_4.b & 7)) != 0
                        r12[0x15] = r11_4 + 1
                        i_10.b = cond:22_1
                    else
                        sub_140b55370(r12)
                        r10_4 = *(r12 + 0x29)
                
                i_10.b *= 2
                i_10.b |= r9_6 & 0xfd
                var_213 = i_10.b
                i_10.b = 0
                
                if ((r10_4 & 1) == 0)
                    int64_t r9_7 = r12[0x15]
                    
                    if (r9_7 s< r12[0x14])
                        bool cond:24_1 =
                            (*(sx.q((r9_7 s>> 3).d) + r12[0x12]) & 1 << (r9_7.b & 7)) != 0
                        r12[0x15] = r9_7 + 1
                        i_10.b = cond:24_1
                    else
                        sub_140b55370(r12)
                
                i_10.b <<= 5
                i_10.b |= var_214_4 & 0xdf
                char i_15 = i_10.b
                int32_t var_218_1
                
                if ((i_10.b & 0x10) != 0)
                    int64_t rdi_8 = rsi[0x266]
                    
                    if (((*(rsi + 0xa4) u>> 1).b & 1) == 0)
                        int64_t rax_99 = *r12
                        int64_t i_11 = sx.q(i_7)
                        i_13 = 0
                        (*(rax_99 + 0x160))(r12, &i_13, 0x400)
                        i_10 = zx.q(i_15)
                        var_218_1 = ((i_13 - *(rdi_8 + (i_11 << 2)) - 0x200) & 0x3ff) - 0x200
                            + *(rdi_8 + (i_11 << 2))
                    else
                        var_218_1 = *(rdi_8 + (sx.q(i_7) << 2)) + 1
                else if ((i_10.b & 0x20) == 0)
                    var_218_1 = 0
                else
                    var_218_1 = *(rsi + 0x12fc)
                
                char rax_107 = 0
                
                if ((i_10.b & 0x20) != 0 && (*(r12 + 0x29) & 1) == 0)
                    int64_t rdx_50 = r12[0x15]
                    
                    if (rdx_50 s< r12[0x14])
                        char r8_18 = *(sx.q((rdx_50 s>> 3).d) + r12[0x12])
                        r12[0x15] = rdx_50 + 1
                        rax_107 = (r8_18 & 1 << (rdx_50.b & 7)) != 0
                    else
                        sub_140b55370(r12)
                        i_10 = zx.q(i_15)
                        rax_107 = 0
                
                i_10.b &= 0xbf
                i_10.b |= rax_107 << 6
                char rax_112 = 0
                char i_16 = i_10.b
                
                if ((i_10.b & 0x20) != 0 && (*(r12 + 0x29) & 1) == 0)
                    int64_t rdx_53 = r12[0x15]
                    
                    if (rdx_53 s< r12[0x14])
                        char r8_19 = *(sx.q((rdx_53 s>> 3).d) + r12[0x12])
                        r12[0x15] = rdx_53 + 1
                        rax_112 = (r8_19 & 1 << (rdx_53.b & 7)) != 0
                    else
                        sub_140b55370(r12)
                        i_10 = zx.q(i_16)
                        rax_112 = 0
                
                i_10.b &= 0x7f
                rax_112 = rax_112 << 7 | i_10.b
                var_214 = rax_112
                rax_112 &= 0x11
                int64_t* performanceCount_1
                int32_t i_19
                
                if (var_2a4 u< 6)
                    int32_t i_18
                    
                    if (rax_112 != 0)
                        int64_t rax_117 = *r12
                        i_13 = 0
                        (*(rax_117 + 0x160))(r12, &i_13, 8)
                        i_18 = i_13
                    else
                        i_18 = 0
                    
                    i_19 = i_18
                    
                    if (i_18 == 1)
                        void var_1d8
                        int32_t* rax_122
                        rax_122, zmm0, arg5 = sub_140b5e500(&var_1d8, 0xff)
                        int64_t* performanceCount_5
                        performanceCount_5:4.d = 0
                        performanceCount_5.d = *rax_122
                        performanceCount_1 = performanceCount_5
                    else if (i_18 == 2)
                        void var_1dc
                        int32_t* rax_120
                        rax_120, zmm0, arg5 = sub_140b5e500(&var_1dc, 0x66)
                        int64_t* performanceCount_4
                        performanceCount_4:4.d = 0
                        performanceCount_4.d = *rax_120
                        performanceCount_1 = performanceCount_4
                    else if (i_18 == 4)
                        void var_1e0
                        int32_t* rax_118
                        rax_118, zmm0, arg5 = sub_140b5e500(&var_1e0, 0x100)
                        int32_t var_1e4_1 = 0
                        performanceCount_1 = (*rax_118).q
                else if (rax_112 != 0)
                    r8_14, zmm0, arg5 = sub_140ca89d0(r12, &performanceCount_1, zmm0, arg5)
                    
                    if ((*(r12 + 0x29) & 1) != 0)
                        rdx_95 = u"Channel name serialization failed."
                        goto label_142151a14
                    
                    int32_t rcx_88
                    rcx_88.b = performanceCount_1:4.d == 0
                    
                    if ((rcx_88.b & sub_140b5b8a0(performanceCount_1.d, 0xff)) == 0)
                        int32_t rcx_89
                        rcx_89.b = performanceCount_1:4.d == 0
                        int32_t i_20
                        
                        if ((rcx_89.b & sub_140b5b8a0(performanceCount_1.d, 0x100)) == 0)
                            int32_t rcx_90
                            rcx_90.b = performanceCount_1:4.d == 0
                            i_20 = i_19
                            
                            if ((rcx_90.b & sub_140b5b8a0(performanceCount_1.d, 0x66)) != 0)
                                i_20 = 2
                        else
                            i_20 = 4
                        
                        i_19 = i_20
                    else
                        i_19 = 1
                else
                    performanceCount = nullptr
                    performanceCount_1 = performanceCount
                    i_19 = 0
                int64_t* r15_1 = *(rsi[0x262] + (sx.q(i_7) << 3))
                int32_t rcx_92
                
                if (r15_1 != 0)
                    rcx_92.b = sub_140b5b8a0(performanceCount_1.d, 0) == 0
                
                int64_t var_268
                
                if (r15_1 != 0 && (performanceCount_1:4.d != 0 | rcx_92.b) != 0
                    && performanceCount_1 != *(r15_1 + 0x44))
                label_142151912:
                    sub_14213f9e0(rsi)
                label_142151a30:
                    rdi_7 = var_338
                label_142151a3c:
                    
                    if (var_268 != 0)
                        sub_140a74f90(var_268)
                    
                    result = sub_140b4cb40(&var_2f8)
                    break
                
                int64_t rax_131 = *r12
                uint64_t r8_21 = zx.q(rsi[0x14].d << 3)
                i_13 = 0
                r8_14 = (*(rax_131 + 0x160))(r12, &i_13, r8_21)
                int32_t rdi_9 = (r12[0x15]).d
                
                if ((*(r12 + 0x29) & 1) != 0)
                    rdx_95 = u"Bunch header overflowed"
                    goto label_142151a14
                
                i_10 = sx.q(i_13)
                int512_t zmm0_1 = sub_140b550b0(&var_2f8, r12, i_10, zmm0)
                
                if ((*(r12 + 0x29) & 1) != 0)
                    int64_t var_350_1 = r12[0x14]
                    int32_t var_358_1 = i_10.d
                    sub_140a2e390(&performanceCount_3, Bunch data overflowed (%i %i+%i/%i)", 
                        zx.q(r14_1.d))
                    goto label_142151a1c
                
                if ((var_213 & 1) != 0)
                    void* rax_132 = rsi[0xb]
                    *(rax_132 + 0x24c) += (i_10.d - r14_1.d + rdi_9) s>> 3
                    
                    if (((*(rsi + 0xa4) u>> 1).b & 1) != 0)
                        i_10 = rsi[0xd]
                        void* rax_135
                        int64_t rax_136
                        void* rdx_60
                        
                        if (i_10 != 0)
                            rax_135, zmm0_1 = sub_14254d5d0()
                            rdx_60 = *(i_10 + 0x10)
                            rax_136 = sx.q(*(rax_135 + 0x38))
                        
                        if (i_10 == 0 || rax_136.d s> *(rdx_60 + 0x38)
                                || *(*(rdx_60 + 0x30) + (rax_136 << 3)) != rax_135 + 0x30)
                            i_10 = 0
                        
                        zmm0_1, arg5, zmm8 = sub_142172560(i_10, &var_2f8, zmm0_1, arg5)
                
                int64_t i_12 = sx.q(i_7)
                
                if (*(rsi[0x262] + (i_12 << 3)) == 0)
                    if (i_12.d != 0)
                    label_14215108d:
                        
                        if (*rsi[0x262] == 0)
                            goto label_142151912
                        
                        if (rsi[6] == 0)
                            void* rax_141 = rsi[0xb]
                            
                            for (int64_t* i_2 = *(rax_141 + 0x90); 
                                    i_2 != &i_2[sx.q(*(rax_141 + 0x98))]; i_2 = &i_2[1])
                                if (*i_2 == rsi)
                                    int64_t* rax_203 =
                                        sub_140b63b70(&performanceCount_1, &performanceCount_3)
                                    
                                    if (rax_203[1].d != 0)
                                        *rax_203
                                    
                                    sub_140a2e390(&performanceCount, 
                                        UNetConnection::ReceivedPacket: Received non-control bunch "
                                    "before player controller was assigned. ChIndex: %i, ChName: "
                                    "zx.q(i_7))
                                    int64_t* performanceCount_6 = performanceCount_3
                                    
                                    if (performanceCount_6 != 0)
                                        sub_140a74f90(performanceCount_6)
                                    
                                    sub_14213f9e0(rsi)
                                    performanceCount_2 = performanceCount
                                    goto label_142151a26
                    else
                        bool rax_139 = sub_140b5b8a0(performanceCount_1.d, 0xff)
                        i_12 = zx.q(i_7)
                        int32_t rcx_97
                        rcx_97.b = rax_139 == 0
                        
                        if ((performanceCount_1:4.d != 0 | rcx_97.b) != 0)
                            goto label_14215108d
                
                char r9_8
                
                if (i_12.d != 0 || *rsi[0x262] != 0)
                    r9_8 = var_214
                else
                    r9_8 = var_214
                    
                    if ((r9_8 & 2) != 0)
                        int32_t rcx_98
                        rcx_98.b = performanceCount_1:4.d == 0
                        
                        if ((rcx_98.b & sub_140b5b8a0(performanceCount_1.d, 0xff)) != 0)
                            goto label_142151912
                        
                        i_12 = zx.q(i_7)
                        r9_8 = var_214
                
                char var_2cf
                
                if (((*(rsi + 0xa4) u>> 1).b & 1) != 0 && r15_1 != 0 && rsi[0x2ca].b != 0)
                    if ((r9_8 & 1) != 0)
                        int32_t rcx_99
                        rcx_99.b = performanceCount_1:4.d == 0
                        
                        if ((rcx_99.b & sub_140b5b8a0(performanceCount_1.d, 0x66)) == 0)
                            r9_8 = var_214
                        else
                            r9_8 = var_214
                            
                            if ((r9_8 & 0x20) == 0 || (r9_8 & 0x40) != 0)
                                if ((var_213 & 2) != 0)
                                    i_13.w = 0
                                    int64_t* var_2f0
                                    int16_t* rdx_63 = *var_2f0
                                    
                                    if (&rdx_63[1] u> var_2f0[1])
                                        int16_t* rdx_64 = &i_13
                                        void*** rcx_101 = &var_2f8
                                        
                                        if ((var_2cf & 0x20) != 0)
                                            sub_140b54000(rcx_101, rdx_64, arg5)
                                        else
                                            var_2f8[0x2a](rcx_101, rdx_64, 2)
                                    else
                                        i_13.w = *rdx_63
                                        *var_2f0 += 2
                                    
                                    int32_t i_3 = 0
                                    
                                    if (0 u< i_13.w)
                                        do
                                            void** rax_151 = var_2f8
                                            int32_t var_1f4 = 0
                                            rax_151[0x2d](&var_2f8, &var_1f4)
                                            i_3 += 1
                                        while (i_3 s< zx.d(i_13.w))
                                
                                void** rax_153 = var_2f8
                                int32_t var_310 = 0
                                rax_153[0x2d](&var_2f8, &var_310)
                                
                                if ((var_2cf & 1) == 0)
                                    zmm0_1, arg5 = sub_140d42420(&rsi[0x2c0], &i_7, &var_310)
                                
                                r9_8 = var_214
                        
                        i_12 = zx.q(i_7)
                    
                    int32_t r11_5 = rsi[0x2c1].d
                    i_10 = zx.q(*(rsi + 0x1634))
                    
                    if (r11_5 == i_10.d)
                        goto label_1421512a1
                    
                    void* rcx_105 = rsi[0x2c8]
                    void* r8_25 = &rsi[0x2c7]
                    
                    if (rcx_105 != 0)
                        r8_25 = rcx_105
                    
                    int32_t rdx_71 = *(r8_25 + (((sx.q(rsi[0x2c9].d) - 1) & sx.q(i_12.d)) << 2))
                    int32_t rax_155 = rdx_71
                    
                    if (rdx_71 == 0xffffffff)
                        goto label_1421512a1
                    
                    int64_t r8_26 = rsi[0x2c0]
                    
                    while (true)
                        int64_t rcx_107 = sx.q(rax_155) * 2
                        
                        if (*(r8_26 + (rcx_107 << 3)) == i_12.d)
                            break
                        
                        rax_155 = *(r8_26 + (rcx_107 << 3) + 8)
                        
                        if (rax_155 == 0xffffffff)
                            goto label_1421512a1
                    
                    if (rax_155 == 0xffffffff)
                        goto label_1421512a1
                    
                    if ((r9_8 & 2) != 0 && ((r9_8 & 0x20) == 0 || r9_8 s< 0))
                        if (r11_5 == i_10.d || rdx_71 == 0xffffffff)
                        label_1421513c7:
                            rdx_71 = -1
                        else
                            while (true)
                                int64_t rax_164 = sx.q(rdx_71) * 2
                                
                                if (*(r8_26 + (rax_164 << 3)) == i_12.d)
                                    break
                                
                                rdx_71 = *(r8_26 + (rax_164 << 3) + 8)
                                
                                if (rdx_71 == 0xffffffff)
                                    goto label_1421513c7
                        
                        int32_t var_30c = *(r8_26 + sx.q(rdx_71) * 0x10 + 4)
                        int32_t r9_9 = sub_1418ebff0(&rsi[0x2c0], rdx_71)
                        
                        if ((var_30c.b & 1) != 0)
                            uint64_t rax_169
                            rax_169, zmm8 = sub_142168c50(*(rsi[0xb] + 0x150), &var_30c, 0, r9_9)
                            
                            if (rax_169 != 0 && sub_141fa3f30(rax_169) != 0)
                                int64_t r8_29 = *rsi
                                (*(r8_29 + 0x358))(rsi, rax_169, r8_29)
                    
                    goto label_14215142d
                
            label_1421512a1:
                char rdx_72 = r9_8 u>> 4 & 1
                
                if (rdx_72 != 0 && var_218_1 s<= *(rsi[0x266] + (sx.q(i_12.d) << 2)))
                label_14215142d:
                    
                    if (var_268 != 0)
                        sub_140a74f90(var_268)
                    
                    arg5 = sub_140b4cb40(&var_2f8)
                    r14_1 = zx.q(var_33c_1)
                    rdi_7 = var_338
                else if (r15_1 != 0)
                label_14215180a:
                    char var_340 = 0
                    var_213 ^= (rax_50 << 2 ^ var_213) & 4
                    zmm8 = sub_141f959b0(r15_1, &var_2f8, &var_340, zmm0_1, arg5)
                    void* rax_195 = rsi[0xb]
                    r14_1 = zx.q(var_33c_1.b)
                    
                    if (var_340 != 0)
                        r14_1 = 1
                    
                    *(rax_195 + 0x260) += 1
                    void* rax_196 = rsi[0xb]
                    var_33c_1 = r14_1.d
                    *(rax_196 + 0x268) += 1
                    
                    if (*(rsi[0xb] + 0x88) == 0 && ((var_2cf & 2) != 0 || (var_2cf & 1) != 0))
                        sub_14213f9e0(rsi)
                    label_142151864:
                        r14_1.b = 1
                        var_33c_1 = r14_1.d
                    
                    if (var_268 != 0)
                        sub_140a74f90(var_268)
                    
                    arg5 = sub_140b4cb40(&var_2f8)
                    rdi_7 = var_338
                else
                    if (rdx_72 == 0 && ((r9_8 & 1) == 0 || ((r9_8 & 2) == 0 && (r9_8 & 0x20) == 0)))
                        goto label_142151864
                    
                    rdi_7 = var_338
                    int64_t r15_2 = sx.q(var_344)
                    int32_t* rcx_110 = rdi_7
                    void* r14_2 = &rdi_7[r15_2]
                    
                    if (rdi_7 == r14_2)
                    label_142151328:
                        void var_1d4
                        
                        if (*sub_142146c30(rsi[0xb] + 0x1a8, &var_1d4, performanceCount_1)
                                == 0xffffffff)
                            int64_t* rax_204 = sub_140b63b70(&performanceCount_1, &var_338)
                            int16_t* const r8_45
                            
                            if (rax_204[1].d == 0)
                                r8_45 = &data_142d40450
                            else
                                r8_45 = *rax_204
                            
                            sub_140a2e390(&performanceCount_3, 
                                UNetConnection::ReceivedPacket: Connection unknown channel type (%s)", 
                                r8_45)
                            int32_t* rcx_165 = var_338
                            
                            if (rcx_165 != 0)
                                sub_140a74f90(rcx_165)
                            
                            sub_14213f9e0(rsi)
                            int64_t* performanceCount_7 = performanceCount_3
                            
                            if (performanceCount_7 != 0)
                                sub_140a74f90(performanceCount_7)
                            
                            goto label_142151a3c
                        
                        int64_t* rcx_113 = rsi[0xb]
                        char rax_159 = (*(*rcx_113 + 0x368))(rcx_113)
                        void* const rax_162
                        
                        if (rax_159 != 0)
                            i_10 = rsi[0xb] + 0x1a8
                            int32_t var_1f0
                            sub_142146c30(i_10, &var_1f0, performanceCount_1)
                            int64_t rax_160 = sx.q(var_1f0)
                            
                            if (rax_160.d == 0xffffffff)
                                rax_162 = nullptr
                            else
                                rax_162 = rax_160 * 0x38 + *i_10
                        
                        if (rax_159 != 0 && *(rax_162 + 0x26) == 0)
                            int32_t i_4 = i_7
                            int32_t* rax_171 = rdi_7
                            
                            if (rdi_7 != r14_2)
                                while (*rax_171 != i_4)
                                    rax_171 = &rax_171[1]
                                    
                                    if (rax_171 == r14_2)
                                        goto label_142151485
                            
                            if (rdi_7 == r14_2 || ((rax_171 - rdi_7) s>> 2).d == 0xffffffff)
                            label_142151485:
                                var_344 = r15_2.d + 1
                                
                                if (r15_2.d + 1 s> var_32c_1)
                                    sub_1405a4cf0(&var_338)
                                    rdi_7 = var_338
                                    var_344 = r15_2.d + 1
                                    i_4 = i_7
                                
                                rdi_7[r15_2] = i_4
                        else if (((*(rsi + 0xa4) u>> 1).b & 1) == 0 || rsi[0x2df].b == 0)
                        label_142151714:
                            i_10 = zx.q(i_7)
                        label_142151618:
                            int64_t* rax_186
                            rax_186, zmm0_1 = sub_14213fce0(rsi, &performanceCount_1, 1, i_10.d)
                            r15_1 = rax_186
                            int64_t* rcx_130 = *(rsi[0xb] + 0x208)
                            int64_t r8_36 = *rcx_130
                            
                            if ((*(r8_36 + 0x10))(rcx_130, rax_186, r8_36) != 0)
                                goto label_14215180a
                            
                            int32_t i_5 = i_7
                            int32_t* rcx_131 = rdi_7
                            
                            if (rdi_7 != r14_2)
                                while (*rcx_131 != i_5)
                                    rcx_131 = &rcx_131[1]
                                    
                                    if (rcx_131 == r14_2)
                                        goto label_142151728
                            
                            if (rdi_7 == r14_2 || ((rcx_131 - rdi_7) s>> 2).d == 0xffffffff)
                            label_142151728:
                                int64_t rcx_140 = sx.q(var_344)
                                var_344 = rcx_140.d + 1
                                
                                if (rcx_140.d + 1 s> var_32c_1)
                                    sub_1405a4cf0(&var_338)
                                    i_5 = i_7
                                    rdi_7 = var_338
                                    var_344 = rcx_140.d + 1
                                
                                rdi_7[rcx_140] = i_5
                            
                            void** var_1c8
                            sub_141f79e30(&var_1c8, r15_1, 1)
                            char var_d8 = var_d8 | 0x20
                            (*(*r15_1 + 0x2c8))(r15_1, &performanceCount_3, &var_1c8, 0)
                            (*(*rsi + 0x2a8))(rsi, 0)
                            sub_141f83fe0(r15_1, 0, 0)
                            
                            if (i_7 == 0)
                                *(rsi + 0x134) = 1
                            
                            sub_141f7bb50(&var_1c8)
                        else if ((var_214 & 1) == 0
                            || ((var_214 & 0x20) != 0 && (var_214 & 0x40) == 0))
                        label_1421516ed:
                            i_10 = zx.q(i_7)
                            void var_1cc
                            
                            if (*sub_1417adf70(&rsi[0x2d5], &var_1cc, i_10.d) == 0xffffffff)
                                goto label_142151618
                        else
                            int32_t rcx_123
                            rcx_123.b = performanceCount_1:4.d == 0
                            
                            if ((rcx_123.b & sub_140b5b8a0(performanceCount_1.d, 0x66)) == 0)
                                goto label_1421516ed
                            
                            int32_t var_1ec
                            sub_142147de0(rsi, &var_1ec, &var_2f8, arg5)
                            int64_t rcx_125 = sx.q(var_1ec)
                            
                            if (rcx_125.d u< 2)
                                goto label_142151714
                            
                            if (rsi[0x2cc].d == *(rsi + 0x168c))
                            label_14215159a:
                                
                                if (rsi[0x2d6].d == *(rsi + 0x16dc))
                                    goto label_142151714
                                
                                void* r9_12 = &rsi[0x2dc]
                                void* rcx_126 = rsi[0x2dd]
                                i_10 = sx.q(i_7)
                                int64_t rdi_11 = sx.q(rsi[0x2de].d - 1)
                                
                                if (rcx_126 != 0)
                                    r9_12 = rcx_126
                                
                                int64_t rax_184 = i_10 & rdi_11
                                void* rdx_81 = r9_12 + (rax_184 << 2)
                                int32_t i_6 = *(r9_12 + (rax_184 << 2))
                                
                                if (i_6 != 0xffffffff)
                                    int64_t r8_35 = rsi[0x2d5]
                                    
                                    do
                                        int64_t rcx_127 = sx.q(i_6) * 3
                                        
                                        if (*(r8_35 + (rcx_127 << 2)) == i_10.d)
                                            int64_t rdx_86 = sx.q(*rdx_81)
                                            int64_t r11_7 = rdx_86 * 3
                                            int64_t rax_189 =
                                                sx.q(*(r8_35 + (r11_7 << 2) + 8)) & rdi_11
                                            void* rcx_133 = r9_12 + (rax_189 << 2)
                                            int32_t j = *(r9_12 + (rax_189 << 2))
                                            
                                            while (j != 0xffffffff)
                                                if (j == rdx_86.d)
                                                    *rcx_133 = *(r8_35 + (r11_7 << 2) + 4)
                                                    break
                                                
                                                int64_t j_1 = sx.q(j)
                                                j = *(r8_35 + ((j_1 * 3 + 1) << 2))
                                                rcx_133 = r8_35 + ((j_1 * 3 + 1) << 2)
                                            
                                            sub_14090a460(&rsi[0x2d5], rdx_86.d, 1)
                                            i_10 = zx.q(i_7)
                                            break
                                        
                                        i_6 = *(r8_35 + ((rcx_127 + 1) << 2))
                                        rdx_81 = r8_35 + ((rcx_127 + 1) << 2)
                                    while (i_6 != 0xffffffff)
                                
                                rdi_7 = var_338
                                goto label_142151618
                            
                            void* r9_10 = &rsi[0x2d2]
                            void* rdx_79 = *(r9_10 + 8)
                            
                            if (rdx_79 != 0)
                                r9_10 = rdx_79
                            
                            int32_t rax_179 = *(r9_10 + (((sx.q(rsi[0x2d4].d) - 1) & rcx_125) << 2))
                            
                            if (rax_179 == 0xffffffff)
                                goto label_14215159a
                            
                            int64_t r9_11 = rsi[0x2cb]
                            
                            while (true)
                                int64_t r8_34 = sx.q(rax_179) * 3
                                
                                if (*(r9_11 + (r8_34 << 2)) == rcx_125.d)
                                    break
                                
                                rax_179 = *(r9_11 + (r8_34 << 2) + 4)
                                
                                if (rax_179 == 0xffffffff)
                                    goto label_14215159a
                            
                            if (rax_179 == 0xffffffff)
                                goto label_14215159a
                            
                            void var_1d0
                            sub_14077a5e0(&rsi[0x2d5], &var_1d0, &i_7, nullptr)
                    else
                        while (*rcx_110 != i_12.d)
                            rcx_110 = &rcx_110[1]
                            
                            if (rcx_110 == r14_2)
                                goto label_142151328
                    
                    if (var_268 != 0)
                        sub_140a74f90(var_268)
                    
                    arg5 = sub_140b4cb40(&var_2f8)
                    r14_1 = zx.q(var_33c_1)
                
                if ((*(*r12 + 0x30))(r12) != 0)
                    goto label_1421518a0
        
        if (rdi_7 != 0)
            result = sub_140a74f90(rdi_7)

__security_check_cookie(rax_1 ^ &var_378)
return result
