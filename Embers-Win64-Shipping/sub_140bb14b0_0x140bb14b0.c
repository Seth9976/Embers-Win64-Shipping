// 函数: sub_140bb14b0
// 地址: 0x140bb14b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
char rbx = arg4
char var_198 = rbx
int32_t* rsi = arg2
char var_196_1

if (arg3 == 0)
    var_196_1 = 1

if (arg3 != 0 || data_143e1a340 != arg3)
    var_196_1 = 0

int128_t zmm6
int128_t var_48 = zmm6
uint128_t zmm7
uint128_t var_58 = zmm7
uint64_t r12 = 0
int128_t zmm10
int128_t var_88 = zmm10
int32_t i = 2
int128_t zmm11
int128_t var_98 = zmm11
*arg2 = 0
int64_t performanceCount_2
QueryPerformanceCounter(&performanceCount_2)
int128_t zmm8
zmm8.q = float.d(performanceCount_2)
uint128_t zmm9 = 0x4170000000000000
zmm8.q = zmm8.q f* data_143d796f8
zmm8.q = zmm8.q f+ zmm9.q
uint64_t result
int64_t performanceCount
int32_t arg_28

if (data_143de5452 == 0)
    if (*(arg1 + 0x1b0) != 0)
        int32_t r15_1 = 0
        zmm6 = zx.o(0)
        
        while (i != 0)
            if (r15_1 s>= *(arg1 + 0x1b0))
                break
            
            *rsi += 1
            void* rsi_1 = *(r12 + *(arg1 + 0x1a8))
            void* var_120 = rsi_1
            
            if (arg5 == 0)
                goto label_140bb1de5
            
            int64_t performanceCount_12 = *(rsi_1 + 0x14)
            int32_t rax_40 = *(arg5 + 0x10)
            performanceCount = performanceCount_12
            
            if (rax_40 == *(arg5 + 0x3c))
            label_140bb1dd6:
                i = 1
            label_140bb1e8c:
                rbx = var_198
            else
                int32_t rax_42 = sub_140b5ead0(performanceCount_12.d) + performanceCount:4.d
                void* r8_7 = arg5 + 0x40
                void* rcx_40 = *(r8_7 + 8)
                
                if (rcx_40 != 0)
                    r8_7 = rcx_40
                
                int32_t rax_44 = *(r8_7 + (((sx.q(*(arg5 + 0x50)) - 1) & sx.q(rax_42)) << 2))
                
                if (rax_44 == 0xffffffff)
                    goto label_140bb1dd6
                
                int64_t rdx_14 = *(arg5 + 8)
                
                while (true)
                    int64_t rcx_42 = sx.q(rax_44) * 2
                    
                    if (*(rdx_14 + (rcx_42 << 3)) == performanceCount_12)
                        break
                    
                    rax_44 = *(rdx_14 + (rcx_42 << 3) + 8)
                    
                    if (rax_44 == 0xffffffff)
                        i = rax_44 + 2
                        goto label_140bb1e8c_1
                
                if (rax_44 == 0xffffffff)
                    goto label_140bb1dd6
                
                rbx = var_198
            label_140bb1de5:
                
                if (*(rsi_1 + 0xcc) != 0)
                    i = 2
                label_140bb1e2c:
                    
                    if (*(rsi_1 + 0xcd) == 0)
                        *(rsi_1 + 0xcd) = 1
                        sub_140b9b500(arg1, rsi_1)
                        EnterCriticalSection(arg1 + 0x218)
                        sub_140943590(arg1 + 0x1b8, *(rsi_1 + 0x14))
                        sub_1409d7d20(arg1 + 0x1a8, &var_120)
                        r15_1 -= 1
                        r12 -= 8
                        
                        if (arg1 != -0x218)
                            LeaveCriticalSection(arg1 + 0x218)
                        
                    label_140bb1e8c_1:
                        rbx = var_198
                else if (data_143de5452 == 0)
                    int32_t i_2
                    i_2, zmm6, zmm8, zmm9 = sub_140bbc450(rsi_1, arg3, rbx, &arg_28, arg5)
                    i = i_2
                    
                    if (i_2 == 2)
                        goto label_140bb1e2c
                else
                    i = 1
            
            int64_t performanceCount_9
            QueryPerformanceCounter(&performanceCount_9)
            int128_t zmm3 = arg_28
            double zmm0[0x2] = zx.o(0)
            zmm0[0] = float.d(performanceCount_9)
            void* const var_1a8_4 = nullptr
            zmm0[0] = zmm0[0] f* data_143d796f8
            zmm0[0] = zmm0[0] f+ zmm9.q
            zmm0[0] = zmm0[0] f- zmm8.q
            zmm3.d = zmm3.d f- _mm_cvtpd_ps(zmm0)[0].d
            zmm6, zmm8, zmm9 =
                sub_140b9e5a0(arg1, arg3, zx.q(rbx), _mm_max_ss(zmm3.d, zmm6.d), var_1a8_4)
            
            if (var_196_1 != 0)
                zmm6, zmm8 = sub_140a7ddb0(sub_140a753a0(), 0)
            
            rsi = arg2
            r15_1 += 1
            r12 += 8
    
label_140bb1c9e:
    result = zx.q(i)
else
    char var_197_1 = 0
    uint32_t rax_2
    
    if (data_143de5480 != 0)
        rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_2.b != 0)
        int32_t rax_3 = *(arg1 + 0x3a8)
        data_143e1a570 += 1
        data_1439a965c = rax_3
        var_197_1 = 1
    
    zmm10 = zx.o(0)
    
    while (true)
        if (var_196_1 != 0)
            r12 = zx.q(r12.d + 1)
            
            if ((r12.b & 0x1f) == 0x1f)
                zmm8 = sub_140a7ddb0(sub_140a753a0(), 0)
        
        char rax_7
        rax_7, zmm6 = _Wcsftime_l(*(arg1 + 0x3a0))
        char rbx_1 = rax_7
        int32_t rcx_3
        rcx_3.b = rax_7 != 0
        *rsi += rcx_3
        bool rax_8
        uint128_t zmm0_1
        
        if (arg3 != 0)
            int64_t performanceCount_3
            QueryPerformanceCounter(&performanceCount_3)
            int64_t zmm1_1 = float.d(performanceCount_3)
            zmm0_1 = _mm_cvtps_pd(zmm6.q)
            zmm1_1 = zmm1_1 f* data_143d796f8 f+ zmm9.q
            int64_t zmm2_1 = zmm1_1 f- zmm8.q
            rax_8 = zmm2_1 f> zmm0_1.q
            
            if (rax_8 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm8.q)
                    && not(zmm2_1 f<= _mm_cvtps_pd(data_1439a9644.q).q))
                zmm0_1.d = data_1439a9640.d f* zmm6.d
                
                if (not(zmm2_1 f<= _mm_cvtps_pd(zmm0_1.q).q))
                    data_1439a9888 = zmm8.q
            
            data_1439a9890 = zmm1_1
        
        if (arg3 == 0 || rax_8 == 0)
            void* rcx_5 = data_143e1adf0
            bool z_1
            
            if (0 == *(rcx_5 + 8))
                *(rcx_5 + 8) = 0
                z_1 = true
            else
                *(rcx_5 + 8)
                z_1 = false
            
            rcx_5.b = not(z_1)
            
            if (rcx_5.b == 0)
                bool z_2
                
                if (0 == *(arg1 + 0x84))
                    *(arg1 + 0x84) = 0
                    z_2 = true
                else
                    *(arg1 + 0x84)
                    z_2 = false
                
                if (z_2)
                    int64_t performanceCount_4
                    QueryPerformanceCounter(&performanceCount_4)
                    zmm0_1.q = float.d(performanceCount_4)
                    void* const var_1a8_1 = nullptr
                    zmm0_1.q = zmm0_1.q f* data_143d796f8
                    zmm0_1.q = zmm0_1.q f+ zmm9.q
                    zmm0_1.q = zmm0_1.q f- zmm8.q
                    int128_t zmm3_1
                    zmm3_1.d = arg_28.d f- _mm_cvtpd_ps(zmm0_1).d
                    int32_t rax_11
                    rax_11, zmm6, zmm8, zmm9 = sub_140b9e5a0(arg1, arg3, zx.q(var_198), 
                        _mm_max_ss(zmm3_1.d, zmm10.d), var_1a8_1)
                    *rsi += rax_11
                    
                    if (rax_11 s> 0 || rbx_1 != 0)
                        rbx_1 = 1
                    
                    bool rax_12
                    uint128_t zmm0_2
                    int128_t zmm1_2
                    double zmm2_2
                    
                    if (arg3 != 0)
                        int64_t performanceCount_5
                        QueryPerformanceCounter(&performanceCount_5)
                        zmm1_2.q = float.d(performanceCount_5)
                        zmm0_2 = _mm_cvtps_pd(zmm6.q)
                        zmm1_2.q = zmm1_2.q f* data_143d796f8
                        zmm1_2.q = zmm1_2.q f+ zmm9.q
                        zmm2_2 = zmm1_2.q f- zmm8.q
                        rax_12 = zmm2_2 f> zmm0_2.q
                        
                        if (rax_12 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm8.q)
                                && not(zmm2_2 f<= _mm_cvtps_pd(data_1439a9644.q).q))
                            zmm0_2.d = data_1439a9640.d f* zmm6.d
                            
                            if (not(zmm2_2 f<= _mm_cvtps_pd(zmm0_2.q).q))
                                data_1439a9888 = zmm8.q
                        
                        data_1439a9890 = zmm1_2.q
                    
                    if (arg3 == 0 || rax_12 == 0)
                        void* rcx_9 = data_143e1adf0
                        bool z_3
                        
                        if (0 == *(rcx_9 + 8))
                            *(rcx_9 + 8) = 0
                            z_3 = true
                        else
                            *(rcx_9 + 8)
                            z_3 = false
                        
                        rcx_9.b = not(z_3)
                        
                        if (rcx_9.b == 0)
                            zmm6 = arg_28
                            
                            if (rbx_1 != 0)
                                continue
                            else
                                int64_t var_178 = zmm8.q
                                uint128_t var_170_1 = zx.o(0)
                                char var_15b_1 = 1
                                int128_t var_f8
                                __builtin_memset(&var_f8, 0, 0x18)
                                int32_t var_160_1 = zmm6.d
                                void* var_d8_1 = nullptr
                                
                                if (*(arg1 + 0x338) != 0)
                                    sub_140b93160(arg1 + 0x330, &var_f8)
                                    void var_c8
                                    void* rcx_11 = &var_c8
                                    
                                    if (var_d8_1 != 0)
                                        rcx_11 = var_d8_1
                                    
                                    int64_t var_e8
                                    var_e8((*(*rcx_11 + 8))(rcx_11), &var_178)
                                    
                                    if (var_e8 != 0)
                                        void* rcx_13 = &var_c8
                                        
                                        if (var_d8_1 != 0)
                                            rcx_13 = var_d8_1
                                        
                                        (*(*rcx_13 + 0x10))(rcx_13)
                                    
                                    *rsi += 1
                                    zmm6 = var_160_1
                                    zmm7 = zx.o(var_178)
                                    bool rax_19
                                    
                                    if (arg3 != 0)
                                        int64_t performanceCount_6
                                        QueryPerformanceCounter(&performanceCount_6)
                                        int64_t zmm1_3 = float.d(performanceCount_6)
                                        double zmm0_3 = _mm_cvtps_pd(zmm6.q)
                                        zmm1_3 = zmm1_3 f* data_143d796f8 f+ zmm9.q
                                        double zmm2_3 = zmm1_3 f- zmm7.q
                                        rax_19 = zmm2_3 > zmm0_3
                                        
                                        if (rax_19 != 0 && data_143e1a324 != 0
                                                && not(data_1439a9888 f== zmm7.q)
                                                && not(zmm2_3 <= _mm_cvtps_pd(data_1439a9644)))
                                            zmm6.d = zmm6.d f* data_1439a9640
                                            
                                            if (not(zmm2_3 <= _mm_cvtps_pd(zmm6.q)))
                                                data_1439a9888 = zmm7.q
                                        
                                        data_1439a9890 = zmm1_3
                                    
                                    if (arg3 == 0 || rax_19 == 0)
                                        void* rcx_15 = data_143e1adf0
                                        bool z_4
                                        
                                        if (0 == *(rcx_15 + 8))
                                            *(rcx_15 + 8) = 0
                                            z_4 = true
                                        else
                                            *(rcx_15 + 8)
                                            z_4 = false
                                        
                                        rcx_15.b = not(z_4)
                                        
                                        if (rcx_15.b == 0)
                                            continue
                                else if (*(arg1 + 0x210) == 0)
                                    void* rcx_31 = *(arg1 + 0x3a0)
                                    
                                    if (*(rcx_31 + 0xa0) == *(rcx_31 + 0xcc)
                                            && *(rcx_31 + 0xf0) == *(rcx_31 + 0x11c))
                                        i = 2
                                        
                                        if (var_197_1 != 0)
                                            int32_t rax_37 = data_143e1a570
                                            data_143e1a570 -= 1
                                            
                                            if (rax_37 == 1)
                                                data_1439a965c = 0xffffffff
                                        
                                        goto label_140bb1c9e
                                    
                                    int64_t performanceCount_10
                                    QueryPerformanceCounter(&performanceCount_10)
                                    
                                    if (arg3 == 0)
                                        if (sub_140bbd9b0(*(arg1 + 0x3a0), 0x41200000, zmm6) == 0)
                                            sub_140a4bcb0(u"Waited for 10 seconds on IO....")
                                        
                                        *rsi += 1
                                        continue
                                    else if (var_198 != 0)
                                        int64_t performanceCount_1
                                        QueryPerformanceCounter(&performanceCount_1)
                                        zmm0_2.q = float.d(performanceCount_1)
                                        zmm0_2.q = zmm0_2.q f* data_143d796f8
                                        zmm0_2.q = zmm0_2.q f+ zmm9.q
                                        zmm0_2.q = zmm0_2.q f- zmm8.q
                                        zmm1_2.d = zmm6.d f- _mm_cvtpd_ps(zmm0_2).d
                                        zmm1_2 = _mm_max_ss(zmm1_2.d, zmm10.d)
                                        
                                        if (not(zmm1_2.d f<= zmm10.d))
                                            int64_t performanceCount_11[0x2]
                                            
                                            if (sub_140bbd9b0(*(arg1 + 0x3a0), zmm1_2, zmm6) == 0)
                                                QueryPerformanceCounter(&performanceCount_11)
                                            else
                                                *rsi += 1
                                                continue
                                else
                                    *rsi += 1
                                    void* i_1 = **(arg1 + 0x208)
                                    
                                    if (*(i_1 + 0xcc) != 0)
                                    label_140bb1a9f:
                                        EnterCriticalSection(arg1 + 0x218)
                                        sub_140943590(arg1 + 0x1b8, *(i_1 + 0x14))
                                        int64_t* r9_2 = *(arg1 + 0x1a8)
                                        uint64_t r8_2 = sx.q(*(arg1 + 0x1b0))
                                        int64_t* rcx_22 = r9_2
                                        void* rdx_5 = &r9_2[r8_2]
                                        int32_t rcx_23
                                        
                                        if (r9_2 == rdx_5)
                                        label_140bb1ae2:
                                            rcx_23 = -1
                                        else
                                            while (*rcx_22 != i_1)
                                                rcx_22 = &rcx_22[1]
                                                
                                                if (rcx_22 == rdx_5)
                                                    goto label_140bb1ae2
                                            
                                            rcx_23 = ((rcx_22 - r9_2) s>> 3).d
                                        
                                        int32_t rax_26 = r8_2.d - rcx_23
                                        
                                        if (rax_26 != 1)
                                            memmove(&r9_2[sx.q(rcx_23)], &r9_2[sx.q(rcx_23 + 1)], 
                                                (rax_26 - 1) << 3)
                                            r8_2 = zx.q(*(arg1 + 0x1b0))
                                        
                                        *(arg1 + 0x1b0) = (r8_2 - 1).d
                                        sub_1405c53d0(arg1 + 0x1a8)
                                        int32_t rax_31 = *(arg1 + 0x210)
                                        
                                        if (rax_31 != 1)
                                            int64_t rcx_26 = *(arg1 + 0x208)
                                            memmove(rcx_26, rcx_26 + 8, (rax_31 - 1) << 3)
                                            rax_31 = *(arg1 + 0x210)
                                        
                                        *(arg1 + 0x210) = rax_31 - 1
                                        
                                        if (arg1 != -0x218)
                                            LeaveCriticalSection(arg1 + 0x218)
                                        
                                        sub_140b9b500(arg1, i_1)
                                        rsi = arg2
                                        goto label_140bb1b7f
                                    
                                    int64_t performanceCount_7
                                    QueryPerformanceCounter(&performanceCount_7)
                                    zmm0_2.q = float.d(performanceCount_7)
                                    zmm0_2.q = zmm0_2.q f* data_143d796f8
                                    zmm0_2.q = zmm0_2.q f+ zmm9.q
                                    zmm0_2.q = zmm0_2.q f- zmm8.q
                                    zmm1_2.d = zmm6.d f- _mm_cvtpd_ps(zmm0_2).d
                                    int32_t var_194 = _mm_max_ss(zmm1_2.d, zmm10.d).d
                                    int32_t rax_22
                                    rax_22, zmm6, zmm8, zmm9, zmm10 =
                                        sub_140bbc450(i_1, arg3, var_198, &var_194, arg5)
                                    double zmm0_4
                                    double zmm1_4
                                    
                                    if (rax_22 != 0)
                                        if (rax_22 == 2)
                                            goto label_140bb1a9f
                                        
                                    label_140bb1b7f:
                                        
                                        if (arg3 == 0)
                                            goto label_140bb1a6c
                                        
                                        QueryPerformanceCounter(&performanceCount)
                                        zmm1_4 = float.d(performanceCount)
                                        zmm0_4 = fconvert.d(zmm6.d)
                                        goto label_140bb19fd
                                    
                                    if (arg3 == 0)
                                    label_140bb1a6c:
                                        void* rcx_19 = data_143e1adf0
                                        bool z_5
                                        
                                        if (0 == *(rcx_19 + 8))
                                            *(rcx_19 + 8) = 0
                                            z_5 = true
                                        else
                                            *(rcx_19 + 8)
                                            z_5 = false
                                        
                                        rcx_19.b = not(z_5)
                                        
                                        if (rcx_19.b == 0)
                                            continue
                                    else
                                        int64_t performanceCount_8
                                        QueryPerformanceCounter(&performanceCount_8)
                                        zmm1_4 = float.d(performanceCount_8)
                                        zmm0_4 = _mm_cvtps_pd(zmm6.q)
                                    label_140bb19fd:
                                        zmm1_4 = zmm1_4 f* data_143d796f8 f+ zmm9.q
                                        zmm2_2 = zmm1_4 f- zmm8.q
                                        bool rax_23 = zmm2_2 > zmm0_4
                                        
                                        if (rax_23 != 0 && data_143e1a324 != 0
                                                && not(data_1439a9888 f== zmm8.q)
                                                && not(zmm2_2 <= _mm_cvtps_pd(data_1439a9644)))
                                            zmm0_4.d = data_1439a9640.d f* zmm6.d
                                            
                                            if (not(zmm2_2 <= _mm_cvtps_pd(zmm0_4)))
                                                data_1439a9888 = zmm8.q
                                        
                                        data_1439a9890 = zmm1_4
                                        
                                        if (rax_23 == 0)
                                            goto label_140bb1a6c
        
        if (var_197_1 != 0)
            int32_t temp1_1 = data_143e1a570
            data_143e1a570 -= 1
            int32_t rax_38 = data_1439a965c
            
            if (temp1_1 == 1)
                rax_38 = -1
            
            data_1439a965c = rax_38
        
        result = 0
        break
__security_check_cookie(rax_1 ^ &var_1c8)
return result
