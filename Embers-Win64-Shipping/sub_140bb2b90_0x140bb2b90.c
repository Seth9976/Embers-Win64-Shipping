// 函数: sub_140bb2b90
// 地址: 0x140bb2b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_20 = arg4[0]
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void* r12 = arg1
char r14 = arg2
BOOL result_2 = 2
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
uint128_t zmm7 = 0x4170000000000000
int128_t zmm6
zmm6.q = float.d(performanceCount)
zmm6.q = zmm6.q f* data_143d796f8
zmm6.q = zmm6.q f+ zmm7.q
EnterCriticalSection(r12 + 0xe8)
CRITICAL_SECTION* lpCriticalSection = r12 + 0x180
EnterCriticalSection(lpCriticalSection)

if (*(r12 + 0x90) != 0)
    int64_t r15_1 = sx.q(*(r12 + 0x90))
    
    if (r15_1.d != 0)
        int32_t rax_3 = *(r12 + 0x118)
        int32_t rdx = rax_3 + r15_1.d
        
        if (rdx s> *(r12 + 0x11c))
            sub_1405c5570(r12 + 0x110, rdx)
            rax_3 = *(r12 + 0x118)
        
        memcpy(*(r12 + 0x110) + (sx.q(rax_3) << 3), *(r12 + 0x88), (r15_1 << 3).d)
        *(r12 + 0x118) += r15_1.d
    
    *(r12 + 0x90) = 0
    
    if (*(r12 + 0x94) s<= 0xffffffff)
        sub_1405c5570(r12 + 0x88, 0)
    
    r14 = arg2

*(r12 + 0xcc)

if (*(r12 + 0xa0) != *(r12 + 0xcc))
    sub_140b90f00(r12 + 0x130, r12 + 0x98)
    sub_1408d84f0(r12 + 0x98)

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

if (r12 != -0xe8)
    LeaveCriticalSection(r12 + 0xe8)

uint64_t result
int128_t zmm1

if (data_143e1a340 == 0 || data_143de5452 == 0 || data_14399e5dc != 2)
label_140bb2e19:
    BOOL result_3
    result_3.b = *(r12 + 0x118) s> 0
    *arg5 = result_3.b
    BOOL result_1
    
    if (*(r12 + 0x118) s<= 0)
    label_140bb30ec:
        result_1 = result_2
    else
        while (true)
            bool z_2
            
            if (0 == *(r12 + 0x84))
                *(r12 + 0x84) = 0
                z_2 = true
            else
                *(r12 + 0x84)
                z_2 = false
            
            if (not(z_2))
                goto label_140bb30ec
            
            void* i = **(r12 + 0x110)
            bool z_3
            
            if (0 == *(i + 0x98))
                *(i + 0x98) = 0
                z_3 = true
            else
                *(i + 0x98)
                z_3 = false
            
            if (not(z_3))
                result_1 = 1
                result_2 = 1
                break
            
            result_3, zmm6, zmm7 = sub_140bafbe0(i, zmm6, r14, &arg_20)
            result_2 = result_3
            result_1 = result_3
            
            if (result_3 != 2)
                break
            
            EnterCriticalSection(lpCriticalSection)
            int32_t rax_11 = *(r12 + 0x118)
            
            if (rax_11 != 1)
                int64_t rcx_17 = *(r12 + 0x110)
                memmove(rcx_17, rcx_17 + 8, (rax_11 - 1) << 3)
                rax_11 = *(r12 + 0x118)
            
            *(r12 + 0x118) = rax_11 - 1
            sub_1405c53d0(r12 + 0x110)
            int64_t r9_2 = sub_140943590(r12 + 0x130, *(i + 0x14))
            
            if (*(i + 0x158) s<= 1)
                r9_2, zmm6 = sub_140bb7cc0(i)
            
            int64_t* rsi_2 = *(i + 0x128)
            int64_t r14_2 = 0
            uint64_t r12_2 = sx.q(*(i + 0x130)) << 3 u>> 3
            
            if (rsi_2 u> &rsi_2[sx.q(*(i + 0x130))])
                r12_2 = 0
            
            if (r12_2 != 0)
                do
                    void* rdi_4 = *rsi_2
                    void* rcx_21 = *(rdi_4 + 0xa0)
                    
                    if (rcx_21 != 0)
                        if (data_143de5452 == 0)
                            if (sub_140cc0370(rdi_4) == 0)
                                r9_2, zmm6 = sub_140ce46f0(sub_140cdbb20(), *(rdi_4 + 0xa0))
                        else
                            sub_140cba0e0(rcx_21)
                    
                    rsi_2 = &rsi_2[1]
                    r14_2 += 1
                while (r14_2 != r12_2)
            
            if (lpCriticalSection != 0)
                r9_2 = LeaveCriticalSection(lpCriticalSection)
            
            r12 = arg1
            int32_t rax_17 = *(r12 + 0x2bc)
            *(r12 + 0x2bc) -= 1
            
            if (rax_17 - 1 s< 0)
                sub_140af98a0("Unknown", 0x110f, 
                    ExistingAsyncPackagesCounter is negative, this means we loaded more packages then "
                "requested so there mu", r9_2)
                sub_140afbb40()
            
            int32_t r8_5
            r8_5.b = *(i + 0xcb) == 0
            sub_140b9bee0(i, 0, r8_5)
            int64_t* r8_6 = *(r12 + 0x120)
            int64_t rdx_8 = sx.q(*(r12 + 0x128))
            int64_t* rax_18 = r8_6
            void* rcx_26 = &r8_6[rdx_8]
            
            if (r8_6 != rcx_26)
                while (*rax_18 != i)
                    rax_18 = &rax_18[1]
                    
                    if (rax_18 == rcx_26)
                        goto label_140bb2ff4
            
            if (r8_6 == rcx_26 || ((rax_18 - r8_6) s>> 3).d == 0xffffffff)
            label_140bb2ff4:
                int32_t rax_21 = (rdx_8 + 1).d
                *(r12 + 0x128) = rax_21
                
                if (rax_21 s> *(r12 + 0x12c))
                    sub_1405a4d70(r12 + 0x120)
                
                *(*(r12 + 0x120) + (rdx_8 << 3)) = i
            
            sub_140baf3e0(i)
            r14 = arg2
            
            if (r14 != 0)
                int64_t performanceCount_2
                QueryPerformanceCounter(&performanceCount_2)
                arg4 = arg_20
                zmm1.q = float.d(performanceCount_2)
                float zmm0_1[0x2] = _mm_cvtps_pd(arg4)
                zmm1.q = zmm1.q f* data_143d796f8
                zmm1.q = zmm1.q f+ zmm7.q
                double zmm2_1 = zmm1.q f- zmm6.q
                result_3.b = zmm2_1 f> zmm0_1
                
                if (result_3.b != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm6.q)
                        && not(zmm2_1 f<= _mm_cvtps_pd(data_1439a9644)))
                    zmm0_1 = data_1439a9640
                    zmm0_1[0] = zmm0_1[0] * arg4[0]
                    
                    if (not(zmm2_1 f<= _mm_cvtps_pd(zmm0_1)))
                        data_1439a9888 = zmm6.q
                
                data_1439a9890 = zmm1.q
                
                if (result_3.b != 0)
                    goto label_140bb30ec
            
            void* rcx_30 = data_143e1adf0
            bool z_4
            
            if (0 == *(rcx_30 + 8))
                *(rcx_30 + 8) = 0
                z_4 = true
            else
                *(rcx_30 + 8)
                z_4 = false
            
            rcx_30.b = not(z_4)
            
            if (rcx_30.b != 0)
                goto label_140bb30ec
            
            if (arg6 != 0 && sub_140b9e3c0(r12, *arg6).b == 0)
                goto label_140bb30ec
            
            if (*(r12 + 0x118) s<= 0)
                goto label_140bb30ec
    
    if (*arg5 != 0 || *(r12 + 0x128) s> 0)
        result_3.b = 1
    else
        result_3.b = 0
    
    *arg5 = result_3.b
    
    if (result_1 != 0)
        int32_t var_8c_1 = 0x80
        void* rcx_32 = nullptr
        int64_t var_b8
        __builtin_memset(&var_b8, 0, 0x2c)
        int32_t rsi_4 = 0
        void* var_78_1 = nullptr
        int32_t var_88_1 = 0xffffffff
        int32_t var_84_1 = 0
        int32_t var_70_1 = 0
        int64_t var_b0_1
        int64_t var_a8
        
        if (*(r12 + 0x128) s> 0)
            void** r14_3 = nullptr
            
            while (true)
                int64_t* rbx_1 = *(r14_3 + *(r12 + 0x120))
                bool z_5
                
                if (0 == rbx_1[0x13].d)
                    rbx_1[0x13].d = 0
                    z_5 = true
                else
                    rbx_1[0x13].d
                    z_5 = false
                
                if (z_5 && rbx_1[0x2b].d s<= 1)
                    if (rbx_1[0x28].d s<= 0)
                    label_140bb33a6:
                        int32_t rcx_46 = *(r12 + 0x128)
                        int32_t rax_42 = rcx_46 - rsi_4 - 1
                        
                        if (rax_42 s>= 1)
                            rax_42 = 1
                        
                        if (rax_42 != 0)
                            int64_t rdi_8 = *(r12 + 0x120)
                            memcpy(rdi_8 + (sx.q(rsi_4) << 3), 
                                rdi_8 + (sx.q(rcx_46 - rax_42) << 3), rax_42 << 3)
                            rcx_46 = *(r12 + 0x128)
                        
                        *(r12 + 0x128) = rcx_46 - 1
                        sub_1405c53d0(r12 + 0x120)
                        rsi_4 -= 1
                        r14_3 -= 8
                        (**rbx_1)(rbx_1, 1)
                    else
                        if (var_b0_1.d != var_84_1)
                            int32_t rax_26 = var_b0_1:4.d
                            var_b0_1.d = 0
                            
                            if (rax_26 s< 0 && rax_26 != 0)
                                sub_1405a5410(&var_b8, 0)
                            
                            int32_t var_88_2 = 0xffffffff
                            var_84_1 = 0
                            sub_140774790(&var_a8)
                            int64_t rcx_35 = sx.q(var_70_1)
                            
                            if (rcx_35 s> 0)
                                void var_80
                                void* rdi_6 = &var_80
                                
                                if (var_78_1 != 0)
                                    rdi_6 = var_78_1
                                
                                __builtin_memset(rdi_6, 0xffffffff, rcx_35 << 2)
                        
                        void* const var_f8 = nullptr
                        int64_t var_f0_1 = 0
                        char rax_28
                        double zmm6_1
                        rax_28, zmm6_1 = sub_140b9b770(rbx_1, &var_b8, &var_f8)
                        void* const rcx_37 = var_f8
                        
                        if (rcx_37 != 0)
                            sub_140a74f90(rcx_37)
                        
                        if (rax_28 != 0)
                            rbx_1[0x1c] = u"CreateClusters"
                            int32_t rax_29 = rbx_1[0x28].d
                            rbx_1[0x1b] = 0
                            
                            if (rbx_1[0x18].d s< rax_29)
                                do
                                    void* rcx_38 = rbx_1[0x3b]
                                    bool z_6
                                    
                                    if (0 == *(rcx_38 + 0x84))
                                        *(rcx_38 + 0x84) = 0
                                        z_6 = true
                                    else
                                        *(rcx_38 + 0x84)
                                        z_6 = false
                                    
                                    if (not(z_6))
                                        break
                                    
                                    if (arg2 != 0)
                                        int64_t performanceCount_3
                                        QueryPerformanceCounter(&performanceCount_3)
                                        arg4 = arg_20
                                        double zmm2_2 = float.d(performanceCount_3)
                                        double zmm0_2 = _mm_cvtps_pd(arg4)
                                        zmm2_2 = zmm2_2 f* data_143d796f8 f+ zmm7.q
                                        double zmm1_1 = zmm2_2 - zmm6_1
                                        bool rax_31 = zmm1_1 > zmm0_2
                                        
                                        if (rax_31 != 0 && data_143e1a324 != 0
                                                && not(data_1439a9888 == zmm6_1)
                                                && not(zmm1_1 <= _mm_cvtps_pd(data_1439a9644)))
                                            zmm0_2.d = data_1439a9640.d f* arg4[0]
                                            
                                            if (not(zmm1_1 <= _mm_cvtps_pd(zmm0_2)))
                                                data_1439a9888 = zmm6_1
                                        
                                        data_1439a9890 = zmm2_2
                                        
                                        if (rax_31 != 0)
                                            break
                                    
                                    void* rcx_40 = data_143e1adf0
                                    bool z_7
                                    
                                    if (0 == *(rcx_40 + 8))
                                        *(rcx_40 + 8) = 0
                                        z_7 = true
                                    else
                                        *(rcx_40 + 8)
                                        z_7 = false
                                    
                                    rcx_40.b = not(z_7)
                                    
                                    if (rcx_40.b != 0)
                                        break
                                    
                                    int64_t rcx_41 = sx.q(rbx_1[0x18].d)
                                    rbx_1[0x18].d = (rcx_41 + 1).d
                                    int64_t* rcx_42 = *(rbx_1[0x27] + (rcx_41 << 3))
                                    rbx_1[0x1b] = rcx_42
                                    (*(*rcx_42 + 0x28))()
                                while (rbx_1[0x18].d s< rbx_1[0x28].d)
                            
                            int32_t rax_39
                            
                            if (rbx_1[0x18].d != rbx_1[0x28].d)
                                rax_39 = 0
                            else
                                rbx_1[0x18].d = 0
                                int32_t rax_38 = *(rbx_1 + 0x144)
                                rbx_1[0x28].d = 0
                                
                                if (rax_38 s< 0 && rax_38 != 0)
                                    sub_1405c5570(&rbx_1[0x27], 0)
                                
                                rax_39 = 2
                            
                            rbx_1[0x1b] = 0
                            
                            if (rax_39 == 2)
                                goto label_140bb33a6
                            
                            result_1 = 0
                            break
                
                rsi_4 += 1
                r14_3 = &r14_3[1]
                
                if (rsi_4 s>= *(r12 + 0x128))
                    result_1 = result_2
                    break
            
            rcx_32 = var_78_1
        
        int32_t var_70_2 = 0
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
        
        bool cond:0_1 = var_b0_1:4.d == 0
        var_b0_1.d = 0
        
        if (not(cond:0_1))
            sub_1405a5410(&var_b8, 0)
        
        int32_t var_88_3 = 0xffffffff
        int32_t var_84_2 = 0
        sub_14059a8e0(&var_a8, 0)
        int64_t var_98
        
        if (var_98 != 0)
            sub_140a74f90(var_98)
        
        int64_t rcx_52 = var_b8
        
        if (rcx_52 != 0)
            sub_140a74f90(rcx_52)
    
    if (result_1 == 2)
        result_1 = sbb.d(result_1, result_1, *(r12 + 0x128) != 0) + 2
    
    result = zx.q(result_1)
else
    int64_t* rax_6 = sub_140a242a0()
    
    if ((*(*rax_6 + 0x20))(rax_6, 2).b != 0)
        goto label_140bb2e19
    
    int64_t* rax_7 = sub_140a242a0()
    (*(*rax_7 + 0x30))(rax_7, 2)
    bool rax_8
    
    if (r14 != 0)
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        arg4 = arg_20
        zmm1.q = float.d(performanceCount_1)
        double zmm0 = _mm_cvtps_pd(arg4)
        zmm1.q = zmm1.q f* data_143d796f8
        zmm1.q = zmm1.q f+ zmm7.q
        double zmm2 = zmm1.q f- zmm6.q
        rax_8 = zmm2 > zmm0
        
        if (rax_8 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm6.q)
                && not(zmm2 <= _mm_cvtps_pd(data_1439a9644)))
            zmm0.d = data_1439a9640.d f* arg4[0]
            
            if (not(zmm2 <= _mm_cvtps_pd(zmm0)))
                data_1439a9888 = zmm6.q
        
        data_1439a9890 = zmm1.q
    
    void* rcx_13
    
    if (r14 == 0 || rax_8 == 0)
        rcx_13 = data_143e1adf0
        bool z_1
        
        if (0 == *(rcx_13 + 8))
            *(rcx_13 + 8) = 0
            z_1 = true
        else
            *(rcx_13 + 8)
            z_1 = false
        
        rcx_13.b = not(z_1)
    
    if ((r14 == 0 || rax_8 == 0) && rcx_13.b == 0)
        goto label_140bb2e19
    
    result = 0
__security_check_cookie(rax_1 ^ &var_128)
return result
