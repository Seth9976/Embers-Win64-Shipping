// 函数: sub_140bbc450
// 地址: 0x140bbc450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x158) += 1
*(arg1 + 0xc8) = arg2
*(arg1 + 0xc9) = arg3
*(arg1 + 0xca) = 0
*(arg1 + 0xc4) = *arg4
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
bool cond:0 = 0.0 f!= *(arg1 + 0xe8)
int64_t zmm0 = float.d(performanceCount) f* data_143d796f8 f+ 0x4170000000000000
*(arg1 + 0xd0) = zmm0

if (not(cond:0))
    void* rax_1 = *(arg1 + 0x90)
    *(arg1 + 0xe8) = zmm0
    
    if (rax_1 != 0 && not(0.0 f!= *(rax_1 + 0xe8)))
        *(rax_1 + 0xe8) = zmm0

char arg_10 = 0
char* var_a0 = &arg_10
void*** (* var_a8)() = sub_140884c50
void* rax_2 = sub_140a756e0(&var_a8, &data_14397f5f0)
int64_t rcx_2 = *(rax_2 + 0x40)
*(rax_2 + 0x40) = arg1
int32_t i
double zmm8_1
int64_t zmm9_1

do
    i = 2
    uint32_t rax_3
    
    if (data_143de5480 != 0)
        rax_3.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_3.b != 0)
        int32_t rcx_3 = *(*(arg1 + 0x1d8) + 0x3a8)
        data_143e1a570 += 1
        data_1439a965c = rcx_3
    
    char arg_18 = 0
    char* var_90_1 = &arg_18
    void*** (* var_98)() = sub_140884c50
    sub_140d19170(*(sub_140a756e0(&var_98, &data_14397f5f0) + 0x48))
    void* r15_1
    
    if (data_143de5452 != 0)
    label_140bbc87b:
        r15_1 = arg1 + 0xcb
        
        if (*r15_1 == 0)
            int32_t i_7 = sub_140ba80e0(arg1)
            i = i_7
            
            if (i_7 == 2 && *r15_1 == 0)
                i = sub_140bb0810(arg1)
    else
        int32_t i_1 = sub_140b9fb00(arg1)
        i = i_1
        int32_t r8
        
        if (i_1 != 2)
        label_140bbc645:
            r15_1 = arg1 + 0xcb
            
            if (*r15_1 != 0)
                r8.b = *r15_1 == 0
                sub_140b9bee0(arg1, 1, r8)
        else
            int32_t i_2 = sub_140ba8320(arg1)
            i = i_2
            
            if (i_2 != 2)
                goto label_140bbc645
            
            int32_t i_3 = sub_140badd80(arg1, arg5)
            i = i_3
            
            if (i_3 != 2)
                goto label_140bbc645
            
            int32_t i_4 = sub_140b9f8d0(arg1)
            i = i_4
            
            if (i_4 != 2)
                goto label_140bbc645
            
            int32_t i_5 = sub_140b9f480(arg1)
            i = i_5
            
            if (i_5 != 2)
                goto label_140bbc645
            
            int32_t i_6 = sub_140bb0cb0(arg1)
            i = i_6
            
            if (i_6 != 2)
                goto label_140bbc645
            
            r15_1 = arg1 + 0xcb
            r8.b = *r15_1 == 0
            sub_140b9bee0(arg1, 1, r8)
        
        if (i == 2)
            int32_t rcx_13 = 0
            int32_t var_144_1 = 1
            int32_t var_148_1 = 0
            int32_t var_138_1 = 0xffffffff
            int32_t r8_1 = 0
            void* var_140_1 = arg1 + 0x1f8
            int32_t rsi_1 = *(arg1 + 0x210)
            int64_t var_134_1 = 0
            
            if (rsi_1 != 0)
                void* rax_6 = *(arg1 + 0x208)
                void* r9 = arg1 + 0x1f8
                
                if (rax_6 != 0)
                    r9 = rax_6
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rsi_1 - 1)
                int32_t rdx_5 = *r9
                
                if (rdx_5 != 0)
                label_140bbc6fb:
                    int32_t rax_13 = neg.d(rdx_5) & rdx_5
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
                    int32_t var_144_2 = rax_13
                    int32_t arg_8 = temp0_2
                    int32_t rax_14
                    
                    if (rax_13 == 0)
                        rax_14 = 0x20
                    else
                        rax_14 = 0x1f - temp0_2
                    
                    var_134_1.d = r8_1 - rax_14 + 0x1f
                    
                    if (r8_1 - rax_14 + 0x1f s> rsi_1)
                        var_134_1.d = rsi_1
                else
                    while (true)
                        int64_t rdx_6 = sx.q(rcx_13)
                        r8_1 += 0x20
                        rcx_13 += 1
                        var_134_1:4.d = r8_1
                        var_148_1 = rcx_13
                        
                        if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_5 = *(r9 + (rdx_6 << 2) + 4)
                        int32_t var_138_2 = 0xffffffff
                        
                        if (rdx_5 != 0)
                            goto label_140bbc6fb
                    
                    var_134_1.d = rsi_1
            
            int32_t rdx_7 = *(arg1 + 0x210)
            int32_t r8_4 = rdx_7 s>> 5
            int32_t r14_1 = 0xffffffff << (rdx_7.b & 0x1f)
            int32_t r9_2 = rdx_7 & 0xffffffe0
            void* var_128_1
            var_128_1.d = r8_4
            int128_t var_110_1 = 0xffffffff
            int64_t var_b0_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int128_t var_120_1
            var_120_1:8.d = r14_1
            var_120_1:0xc.d = rdx_7
            var_110_1.d = r9_2
            int128_t var_d0 = (arg1 + 0x1e8).o
            int128_t var_c0_1 = var_148_1.o
            
            if (rdx_7 != rsi_1)
                void* rax_16 = *(arg1 + 0x208)
                void* r10_1 = arg1 + 0x1f8
                
                if (rax_16 != 0)
                    r10_1 = rax_16
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(rsi_1 - 1)
                int32_t rdx_11 = *(r10_1 + (sx.q(r8_4) << 2)) & r14_1
                
                if (rdx_11 != 0)
                label_140bbc7ed:
                    int32_t rax_23 = neg.d(rdx_11) & rdx_11
                    uint64_t rflags_2
                    int32_t temp0_4
                    temp0_4, rflags_2 = _bit_scan_reverse(rax_23)
                    int32_t var_100_1 = temp0_4
                    int32_t rax_24
                    
                    if (rax_23 == 0)
                        rax_24 = 0x20
                    else
                        rax_24 = 0x1f - temp0_4
                    
                    var_120_1:0xc.d = r9_2 - rax_24 + 0x1f
                    
                    if (r9_2 - rax_24 + 0x1f s> rsi_1)
                        var_120_1:0xc.d = rsi_1
                else
                    while (true)
                        int64_t rcx_18 = sx.q(r8_4)
                        r9_2 += 0x20
                        r8_4 += 1
                        var_110_1.d = r9_2
                        var_128_1.d = r8_4
                        
                        if (rcx_18.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_11 = *(r10_1 + (rcx_18 << 2) + 4)
                        var_120_1:8.d = 0xffffffff
                        
                        if (rdx_11 != 0)
                            goto label_140bbc7ed
                    
                    var_120_1:0xc.d = rsi_1
            
            while (true)
                int64_t rcx_20 = sx.q(var_c0_1:0xc.d)
                int64_t* rax_26 = var_d0.q
                
                if (rcx_20.d == (var_120_1:8.q u>> 0x20).d && var_c0_1.q == arg1 + 0x1f8
                        && rax_26 == arg1 + 0x1e8)
                    goto label_140bbc87b
                
                void* rax_28 = *(*(*rax_26 + rcx_20 * 0x10) + 0x68)
                
                if (rax_28 != 0)
                    void* rax_29 = *(rax_28 + 0x2e0)
                    
                    if (rax_29 != 0 && *(rax_29 + 0x4fa) == 0)
                        i = 1
                        break
                
                var_c0_1:8.d &= not.d(var_d0:0xc.d)
                sub_14059bdd0(&var_d0:8)
    
    zmm8_1, zmm9_1 = sub_140ba2960(arg1)
    
    if (i == 2 || *r15_1 != 0)
        zmm8_1, zmm9_1 = sub_140ba8400(arg1)
        i = 2
    
    void* rcx_28 = *(arg1 + 0x1d8)
    bool z_1
    
    if (0 == *(rcx_28 + 0x84))
        *(rcx_28 + 0x84) = 0
        z_1 = true
    else
        *(rcx_28 + 0x84)
        z_1 = false
    
    if (not(z_1))
        break
    
    float zmm6_1[0x2] = *(arg1 + 0xc4)
    double zmm7_1 = *(arg1 + 0xd0)
    
    if (*(arg1 + 0xc8) != 0)
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        double zmm1_2[0x2] = zx.o(0)
        zmm1_2[0] = float.d(performanceCount_1)
        double temp0_5 = _mm_cvtps_pd(zmm6_1)
        zmm1_2[0] = zmm1_2[0] f* data_143d796f8
        zmm1_2[0] = zmm1_2[0] + zmm8_1
        double zmm2_2 = zmm1_2[0] - zmm7_1
        bool rax_34 = zmm2_2 > temp0_5
        
        if (rax_34 != 0 && data_143e1a324 != 0 && not(data_1439a9888 == zmm7_1)
                && not(zmm2_2 <= _mm_cvtps_pd(data_1439a9644)))
            zmm6_1[0] = zmm6_1[0] f* data_1439a9640
            
            if (not(zmm2_2 <= _mm_cvtps_pd(zmm6_1)))
                data_1439a9888 = zmm7_1
        
        data_1439a9890 = zmm1_2.q
        
        if (rax_34 != 0)
            break
    
    void* rcx_30 = data_143e1adf0
    bool z_2
    
    if (0 == *(rcx_30 + 8))
        *(rcx_30 + 8) = 0
        z_2 = true
    else
        *(rcx_30 + 8)
        z_2 = false
    
    rcx_30.b = not(z_2)
    
    if (rcx_30.b != 0)
        break
while (i == 0)

void* rax_36 = *(arg1 + 0x58)

if (rax_36 != 0 && i == 2)
    *(rax_36 + 0x28) |= i.b

*(arg1 + 0xd8) = 0
*(arg1 + 0xe0) = 0
rax_36.b = i == 2
*(arg1 + 0xcc) = rax_36.b

if (i == 2 && data_143de5452 != 0)
    *(arg1 + 0x238) = 0xa

int64_t performanceCount_2
QueryPerformanceCounter(&performanceCount_2)
int32_t* rax_37 = arg4
double zmm0_2 = float.d(performanceCount_2) f* data_143d796f8
double temp0_8[0x2] = _mm_cvtps_pd((*rax_37)[0])
temp0_8[0] = temp0_8[0] - (zmm0_2 + zmm8_1 f- *(arg1 + 0xd0))
*rax_37 = _mm_cvtpd_ps(_mm_max_sd(temp0_8[0], zmm9_1)).d
*(arg1 + 0x158) -= 1
*(rax_2 + 0x40) = rcx_2
return zx.q(i)
