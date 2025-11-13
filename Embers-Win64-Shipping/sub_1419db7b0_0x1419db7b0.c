// 函数: sub_1419db7b0
// 地址: 0x1419db7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = arg1 + 0x110
EnterCriticalSection(lpCriticalSection)
void* rcx_1 = *(arg1 + 0x148)

if (rcx_1 != 0)
    int64_t rax_1 = 0
    
    if (0 == *(rcx_1 + 8))
        *(rcx_1 + 8) = 0
    else
        rax_1 = *(rcx_1 + 8)
    
    if (((rax_1 u>> 0x1a).b & 1) != 0)
        int64_t* rcx_2 = *(arg1 + 0x148)
        *(arg1 + 0x148) = 0
        
        if (rcx_2 != 0)
            rcx_2[9].d -= 1
            
            if (rcx_2[9].d == 1)
                arg2 = sub_140a2f6e0(rcx_2)

uint128_t zmm7 = 0x4170000000000000
double zmm0[0x2]

if (not(0.0 f>= *(arg1 + 0x108)))
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    zmm0 = zx.o(0)
    zmm0[0] = float.d(performanceCount)
    zmm0[0] = zmm0[0] f* data_143d796f8
    zmm0[0] = zmm0[0] f+ zmm7.q
    zmm0[0] = zmm0[0] f- *(arg1 + 0x108)
    *(arg1 + 0x1e8) = _mm_cvtpd_ps(zmm0)[0].d

uint64_t r12
uint64_t var_20 = r12
bool z

if (0 == *(arg1 + 0xf0))
    *(arg1 + 0xf0) = 0
    z = true
else
    *(arg1 + 0xf0)
    z = false

if (not(z))
label_1419db8d3:
    int64_t rdi_1 = data_143f20388
    int64_t rcx_4
    
    if (data_143de5480 == 0)
        rcx_4 = 0
    else
        rcx_4.b = GetCurrentThreadId() != data_143de5470
    
    if (not(0f f>= *(rdi_1 + (rcx_4 << 2))))
        int64_t rdi_2 = data_143f20388
        int64_t rcx_5
        
        if (data_143de5480 == 0)
            rcx_5 = 0
        else
            rcx_5.b = GetCurrentThreadId() != data_143de5470
        
        zmm0 = *(arg1 + 0x1e8)
        zmm0[0].d = zmm0[0].d f- 10f
        
        if (not(zmm0[0].d f<= *(rdi_2 + (rcx_5 << 2))) && *(arg1 + 0x1f0) s> 0)
            goto label_1419db94c
else
    bool z_1
    
    if (0 == *(arg1 + 0xe8))
        *(arg1 + 0xe8) = 0
        z_1 = true
    else
        *(arg1 + 0xe8)
        z_1 = false
    
    if (not(z_1))
        goto label_1419db8d3
    
    bool z_2
    
    if (0 == *(arg1 + 0xf8))
        *(arg1 + 0xf8) = 0
        z_2 = true
    else
        *(arg1 + 0xf8)
        z_2 = false
    
    if (z_2)
        goto label_1419db8d3
    
label_1419db94c:
    
    if (*(arg1 + 0x148) == 0)
        for (int64_t* i = data_1439c95a0; i != &i[sx.q(data_1439c95a8) * 2]; i = &i[2])
            if (i[1].d != 0 && *i != 0)
                int64_t rdi_3 = *(arg1 + 0x100)
                zmm0 = sub_140a48b40()
                int64_t zmm1 = float.d(rdi_3)
                
                if (rdi_3 s< 0)
                    zmm1 = zmm1 f+ 1.8446744073709552e+19
                
                r12 = *(arg1 + 0xf8)
                int64_t r15
                r15.b = 0
                int32_t rdx_1 = data_1439c95a8
                int32_t rcx_10 = data_1439c95b4 + 1
                zmm0[0] = zmm0[0] f* zmm1
                data_1439c95b4 = rcx_10
                int64_t r14_1 = sx.q(rdx_1 - 1)
                
                if (rdx_1 - 1 s>= 0)
                    int64_t rdi_5 = r14_1 << 4
                    int64_t temp2_1
                    
                    do
                        int64_t* rcx_11 = data_1439c95a0
                        
                        if (*(rcx_11 + rdi_5 + 8) == 0)
                            r15.b = 1
                        else
                            int64_t* rcx_12 = *(rcx_11 + rdi_5)
                            
                            if (rcx_12 == 0)
                                r15.b = 1
                            else
                                int512_t zmm2
                                zmm2.o = zmm0
                                
                                if ((*(*rcx_12 + 0x50))(rcx_12, zx.q(r12.d), zmm2, arg1 + 0xe4)
                                        == 0)
                                    r15.b = 1
                        
                        rdi_5 -= 0x10
                        temp2_1 = r14_1
                        r14_1 -= 1
                    while (temp2_1 - 1 s>= 0)
                    rcx_10 = data_1439c95b4
                    rdx_1 = data_1439c95a8
                
                data_1439c95b4 = rcx_10 - 1
                
                if (r15.b != 0 && rcx_10 - 1 s<= 0)
                    int32_t r15_1 = rdx_1
                    int32_t r14_2 = 0
                    
                    if (rdx_1 s> 0)
                        int64_t rdi_6 = 0
                        
                        do
                            int64_t* rcx_14 = data_1439c95a0
                            
                            if (*(rcx_14 + rdi_6 + 8) == 0)
                                sub_1405a4880(&data_1439c95a0, r14_2, 1, 1)
                            else
                                int64_t* rcx_15 = *(rcx_14 + rdi_6)
                                
                                if (rcx_15 == 0)
                                    sub_1405a4880(&data_1439c95a0, r14_2, 1, 1)
                                else if ((*(*rcx_15 + 0x20))(rcx_15) != 0)
                                    sub_1405a4880(&data_1439c95a0, r14_2, 1, 1)
                                else
                                    r14_2 += 1
                                    rdi_6 += 0x10
                            
                            rdx_1 = data_1439c95a8
                        while (r14_2 s< rdx_1)
                    
                    int32_t rax_14 = rdx_1 * 2
                    
                    if (rax_14 s<= 2)
                        rax_14 = 2
                    
                    data_1439c95b0 = rax_14
                    
                    if (r15_1 s> rax_14 && data_1439c95ac != rdx_1)
                        sub_1405a5410(&data_1439c95a0, rdx_1)
                
                break
        
        int64_t rdi_7 = data_143f20388
        int64_t rcx_16
        
        if (data_143de5480 == 0)
            rcx_16 = 0
        else
            rcx_16.b = GetCurrentThreadId() != data_143de5470
        
        int64_t rcx_17
        int64_t rdi_8
        
        if (not(0f f>= *(rdi_7 + (rcx_16 << 2))))
            rdi_8 = data_143f20388
            
            if (data_143de5480 == 0)
                rcx_17 = 0
            else
                rcx_17.b = GetCurrentThreadId() != data_143de5470
            
            zmm0 = *(arg1 + 0x1e8)
            zmm0[0].d = zmm0[0].d f- 20f
        
        if (0f f>= *(rdi_7 + (rcx_16 << 2)) || zmm0[0].d f<= *(rdi_8 + (rcx_17 << 2))
                || *(arg1 + 0x1f0) s<= 0)
            *(arg1 + 0xf8) = 0
            *(arg1 + 0x100)
            *(arg1 + 0x100) = 0
            *(arg1 + 0xdf) = 0
        else
            *(arg1 + 0x108) = 0
            void* rcx_18 = data_143f1da40
            
            if (rcx_18 != 0)
                int64_t rdi_9 = data_143f20238
                int64_t rdx_4
                
                if (data_143de5480 == 0)
                    rdx_4 = 0
                else
                    uint32_t rax_17 = GetCurrentThreadId()
                    rcx_18 = data_143f1da40
                    rdx_4.b = rax_17 != data_143de5470
                
                *(rcx_18 + 0xd4) = *(rdi_9 + (rdx_4 << 2))
                int64_t rdi_10 = data_143f20280
                int64_t rcx_19
                
                if (data_143de5480 == 0)
                    rcx_19 = 0
                else
                    rcx_19.b = GetCurrentThreadId() != data_143de5470
                
                *(data_143f1da40 + 0xd8) = *(rdi_10 + (rcx_19 << 2))
            
            *(arg1 + 0x1f0) = 0

if (sub_1419d5ce0(arg1) != 0 && sub_1419cead0() != 0)
    sub_1419d7290(arg1, 0)

if (sub_1419cf250() != 0)
    int32_t rax_25 = sub_141978660()
    
    if (*(arg1 + 0x190) s< rax_25)
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        bool cond:6_1 = data_143de5480 == 0
        double zmm0_1[0x2] = zx.o(0)
        zmm0_1[0] = float.d(performanceCount_1)
        int64_t rdi_11 = data_143f20310
        zmm0_1[0] = zmm0_1[0] f* data_143d796f8
        zmm0_1[0] = zmm0_1[0] f+ zmm7.q
        zmm0_1[0] = zmm0_1[0] f- *(arg1 + 0x188)
        int32_t temp0_4 = _mm_cvtpd_ps(zmm0_1)
        int64_t rcx_24
        
        if (cond:6_1)
            rcx_24 = 0
        else
            rcx_24.b = GetCurrentThreadId() != data_143de5470
        
        if (not(temp0_4 f< _mm_cvtepi32_ps(zx.o(*(rdi_11 + (rcx_24 << 2))))[0].d))
            sub_1419d7290(arg1, 1)
            int64_t performanceCount_2
            QueryPerformanceCounter(&performanceCount_2)
            *(arg1 + 0x188) = float.d(performanceCount_2) f* data_143d796f8 f+ zmm7.q
            *(arg1 + 0x190) = sub_141978660()

sub_1419d42e0(arg1)
int512_t zmm6_1
zmm6_1.o = arg2

if (not(0.0 f!= *(arg1 + 0x108))
        && (*(arg1 + 0x140) != 0 || *(arg1 + 0x58) != 0 || *(arg1 + 0x38) != 0))
    int64_t performanceCount_3
    QueryPerformanceCounter(&performanceCount_3)
    *(arg1 + 0x108) = float.d(performanceCount_3) f* data_143d796f8 f+ zmm7.q

if (*(arg1 + 0x140) != 0)
    void* r14_3 = arg1 + 0x138
    int32_t rdi_12 = *(r14_3 + 8)
    
    if (rdi_12 != 0)
        int32_t rax_28 = *(arg1 + 0x38)
        int32_t rdx_5 = rdi_12 + rax_28
        
        if (rdx_5 s> *(arg1 + 0x3c))
            sub_140775cf0(arg1 + 0x30, rdx_5)
            rax_28 = *(arg1 + 0x38)
        
        void* r15_2 = *r14_3
        r12 = zx.q(rdi_12)
        int64_t* r14_5 = sx.q(rax_28) * 0x58 + *(arg1 + 0x30)
        void* rdi_13 = &r14_5[4]
        int32_t i_1
        
        do
            *r14_5 = 0
            int64_t* rcx_30 = rdi_13 - 0x10
            *(rdi_13 - 0x18) = 0
            *rdi_13 = 0
            *(rdi_13 + 8) = 0
            *(rdi_13 + 0xc) = 0x80
            int64_t* rax_30 = *rdi_13
            
            if (rax_30 != 0)
                rcx_30 = rax_30
            
            *rcx_30 = 0
            rcx_30[1] = 0
            *(rdi_13 + 0x10) = 0xffffffff
            *(rdi_13 + 0x14) = 0
            *(rdi_13 + 0x20) = 0
            *(rdi_13 + 0x28) = 0
            sub_141823260(r14_5, r15_2)
            int32_t rax_31 = *(r15_2 + 0x50)
            r15_2 += 0x58
            *(rdi_13 + 0x30) = rax_31
            rdi_13 += 0x58
            r14_5 = &r14_5[0xb]
            i_1 = r12.d
            r12 = zx.q(r12.d - 1)
        while (i_1 != 1)
        lpCriticalSection = arg1 + 0x110
        *(arg1 + 0x38) += rdi_12
        r14_3 = arg1 + 0x138
    
    sub_1419cdb90(r14_3, 0)

int32_t* result
int512_t zmm1_1
result, zmm1_1 = sub_1419d5dc0(arg1)

if (result.b != 0)
    int64_t performanceCount_5
    QueryPerformanceCounter(&performanceCount_5)
    r12 = zx.q(*(arg1 + 0xd4))
    int32_t i_2 = 0
    
    if (*(arg1 + 0x28) s<= r12.d)
        r12 = zx.q(*(arg1 + 0x28))
    
    if (r12.d != 0)
        do
            int32_t* r14_7 = sx.q(i_2) * 0x1c8 + *(arg1 + 0x20)
            sub_1419d4860(arg1, &data_143f02b98, zx.q(data_143f0f1a0), r14_7)
            int32_t arg_20 = sub_141973920(r14_7)
            void var_f0
            zmm1_1 = sub_1406f3d50(arg1 + 0x60, &var_f0, &arg_20, nullptr)
            void*** rdi_14 = *(r14_7 + 0x1c0)
            
            if (rdi_14 != 0)
                *rdi_14 = &data_14300fba8
                sub_1405d5770(&rdi_14[0x12])
                sub_140b4cb40(rdi_14)
                zmm1_1 = j_sub_140a74f90(rdi_14)
            
            i_2 += 1
            *(r14_7 + 0x1c0) = 0
        while (i_2 u< r12.d)
        
        lpCriticalSection = arg1 + 0x110
    
    *(arg1 + 0xe8) += sx.q(neg.d(r12.d))
    sub_1419d6930(arg1 + 0x20, 0, r12.d, 1)
    int64_t performanceCount_4
    result = QueryPerformanceCounter(&performanceCount_4)
    int64_t zmm2_1 = *(arg1 + 0xd8)
    
    if (not(zmm2_1.d f<= 0f))
        zmm1_1.o = zx.o(0)
        result = zx.q(performanceCount_4.d - performanceCount_5.d)
        uint128_t zmm0_4
        zmm0_4.q = data_143d796f8 f* 1000.0
        zmm1_1.q = float.d(result)
        zmm1_1.q = zmm1_1.q f* zmm0_4.q
        float temp0_7 = _mm_cvtpd_ps(zmm1_1.o)
        temp0_7 f- zmm2_1.d
        
        if (not(temp0_7 f>= zmm2_1.d))
            *(arg1 + 0xd4) += 1
        else if (not(temp0_7 f<= zmm2_1.d))
            result = zx.q(*(arg1 + 0xd4))
            
            if (result.d u> 1)
                result = zx.q(result.d - 1)
                *(arg1 + 0xd4) = result.d

if (*(arg1 + 0x18) == 0)
    int32_t r8_4 = *(arg1 + 0x38)
    
    if (r8_4 != 0 || *(arg1 + 0x58) != r8_4)
        int32_t rdx_11 = *(arg1 + 0x58)
        int32_t rax_37 = *(arg1 + 0xd4)
        int32_t rcx_44 = rax_37 - rdx_11
        
        if (rax_37 u<= rdx_11)
            rcx_44 = 0
        
        if (rcx_44 u<= r8_4)
            r8_4 = rcx_44
        
        if (rdx_11 s< r8_4)
            void** const var_158 = &data_142efce08
            int32_t r8_5 = r8_4 - rdx_11
            void* rbx = arg1 + 0x30
            int128_t var_150_1
            __builtin_memset(&var_150_1, 0, 0x14)
            int32_t arg_18 = r8_5
            int32_t i_3 = 0
            
            while (i_3 s>= 0)
                if (i_3 s>= *(rbx + 8))
                    break
                
                if (r8_5 == 0)
                    break
                
                r12.b = 1
                int64_t rcx_45 = sx.q(i_3) * 0x58
                int32_t var_134_1 = 1
                void* rbx_2 = *rbx + rcx_45
                int32_t rdi_15 = *(rbx_2 + 0x28)
                int32_t rcx_46 = 0
                int32_t var_138_1 = 0
                void* var_130_1 = rbx_2 + 0x10
                int32_t r8_6 = 0
                int32_t var_128_1 = 0xffffffff
                int64_t var_124_1 = 0
                
                if (rdi_15 != 0)
                    void* rax_39 = *(rbx_2 + 0x20)
                    void* r9_5 = rbx_2 + 0x10
                    
                    if (rax_39 != 0)
                        r9_5 = rax_39
                    
                    int32_t temp4_1
                    int32_t temp5_1
                    temp4_1:temp5_1 = sx.q(rdi_15 - 1)
                    int32_t rdx_14 = *r9_5
                    
                    if (rdx_14 != 0)
                    label_1419dc0ad:
                        int32_t rax_46 = neg.d(rdx_14) & rdx_14
                        uint64_t rflags_1
                        int32_t temp0_8
                        temp0_8, rflags_1 = _bit_scan_reverse(rax_46)
                        int32_t var_134_2 = rax_46
                        int32_t var_ec_1 = temp0_8
                        int32_t rax_47
                        
                        if (rax_46 == 0)
                            rax_47 = 0x20
                        else
                            rax_47 = 0x1f - temp0_8
                        
                        var_124_1.d = r8_6 - rax_47 + 0x1f
                        
                        if (r8_6 - rax_47 + 0x1f s> rdi_15)
                            var_124_1.d = rdi_15
                    else
                        while (true)
                            int64_t rdx_15 = sx.q(rcx_46)
                            r8_6 += 0x20
                            rcx_46 += 1
                            var_124_1:4.d = r8_6
                            var_138_1 = rcx_46
                            
                            if (rdx_15.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_14 = *(r9_5 + (rdx_15 << 2) + 4)
                            int32_t var_128_2 = 0xffffffff
                            
                            if (rdx_14 != 0)
                                goto label_1419dc0ad
                        
                        var_124_1.d = rdi_15
                
                int32_t rdx_16 = *(rbx_2 + 0x28)
                uint128_t var_110_1 = var_138_1.o
                int32_t r8_9 = rdx_16 s>> 5
                int32_t r14_8 = 0xffffffff << (rdx_16.b & 0x1f)
                int32_t r9_7 = rdx_16 & 0xffffffe0
                void* var_118_1
                var_118_1.d = r8_9
                int128_t var_100_1 = 0xffffffff
                int64_t var_80_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                zmm1_1.o = var_110_1
                var_110_1:8.d = r14_8
                var_110_1:0xc.d = rdx_16
                var_100_1.d = r9_7
                uint128_t var_a0 = rbx_2.o
                int128_t var_90_1 = zmm1_1.o
                
                if (rdx_16 != rdi_15)
                    void* rax_49 = *(rbx_2 + 0x20)
                    void* r10_1 = rbx_2 + 0x10
                    
                    if (rax_49 != 0)
                        r10_1 = rax_49
                    
                    int32_t temp6_1
                    int32_t temp7_1
                    temp6_1:temp7_1 = sx.q(rdi_15 - 1)
                    int32_t rdx_20 = *(r10_1 + (sx.q(r8_9) << 2)) & r14_8
                    
                    if (rdx_20 != 0)
                    label_1419dc19d:
                        int32_t rax_56 = neg.d(rdx_20) & rdx_20
                        uint64_t rflags_2
                        int32_t temp0_10
                        temp0_10, rflags_2 = _bit_scan_reverse(rax_56)
                        int32_t var_e8_1 = temp0_10
                        int32_t rax_57
                        
                        if (rax_56 == 0)
                            rax_57 = 0x20
                        else
                            rax_57 = 0x1f - temp0_10
                        
                        var_110_1:0xc.d = r9_7 - rax_57 + 0x1f
                        
                        if (r9_7 - rax_57 + 0x1f s> rdi_15)
                            var_110_1:0xc.d = rdi_15
                    else
                        while (true)
                            int64_t rcx_51 = sx.q(r8_9)
                            r9_7 += 0x20
                            r8_9 += 1
                            var_100_1.d = r9_7
                            var_118_1.d = r8_9
                            
                            if (rcx_51.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_20 = *(r10_1 + (rcx_51 << 2) + 4)
                            var_110_1:8.d = 0xffffffff
                            
                            if (rdx_20 != 0)
                                goto label_1419dc19d
                        
                        var_110_1:0xc.d = rdi_15
                
                while (true)
                    int64_t rax_59 = sx.q(var_90_1:0xc.d)
                    int64_t rdx_21 = var_a0.q
                    
                    if (rax_59.d == (var_110_1:8.q u>> 0x20).d && var_90_1.q == rbx_2 + 0x10
                            && rdx_21 == rbx_2)
                        break
                    
                    r12.b &= sub_1419caf50(rax_59 * 0x1c + *rdx_21)
                    var_90_1:8.d &= not.d(var_a0:0xc.d)
                    sub_14059bdd0(&var_a0:8)
                
                if (r12.b == 0)
                    r8_5 = arg_18
                    rbx = arg1 + 0x30
                    i_3 += 1
                else
                    void* rax_63 = j_sub_140a82f30(0x40)
                    void* const rdi_18 = rax_63
                    
                    if (rax_63 == 0)
                        rdi_18 = nullptr
                    else
                        __builtin_memset(rax_63, 0, 0x1e)
                        __builtin_memset(rax_63 + 0x20, 0, 0x20)
                    
                    rbx = arg1 + 0x30
                    *(rdi_18 + 0x18) = *(*(arg1 + 0x30) + rcx_45 + 0x50)
                    void*** rax_65 = j_sub_140a82f30(0xa0)
                    void*** r14_9 = rax_65
                    
                    if (rax_65 == 0)
                        r14_9 = nullptr
                    else
                        sub_140b4c2a0(rax_65)
                        *r14_9 = &data_14300fba8
                        r14_9[0x12] = 0
                        r14_9[0x13] = 0
                    
                    *(rdi_18 + 0x10) = r14_9
                    void** rax_66 = j_sub_140a82f30(0x18)
                    
                    if (rax_66 != 0)
                        *rax_66 = rdi_18
                        rax_66[1] = 0
                        rax_66[2] = 0
                        void* rcx_59 = var_150_1:8.q
                        
                        if (rcx_59 == 0)
                            var_150_1.q = rax_66
                        else
                            *(rcx_59 + 8) = rax_66
                            rax_66[2] = var_150_1:8.q
                        
                        var_150_1:8.q = rax_66
                        int32_t var_140
                        var_158[1](&var_158, zx.q(var_140 + 1))
                    
                    void** rax_68 = j_sub_140a82f30(0x18)
                    
                    if (rax_68 != 0)
                        *rax_68 = rdi_18
                        rax_68[1] = 0
                        rax_68[2] = 0
                        void* rcx_62 = *(arg1 + 0x50)
                        
                        if (rcx_62 == 0)
                            *(arg1 + 0x48) = rax_68
                        else
                            *(rcx_62 + 8) = rax_68
                            rax_68[2] = *(arg1 + 0x50)
                        
                        *(arg1 + 0x50) = rax_68
                        (*(*(arg1 + 0x40) + 8))(arg1 + 0x40, zx.q(*(arg1 + 0x58) + 1))
                    
                    sub_1419d69f0(rbx, i_3, 1, 1)
                    *(arg1 + 0xe8) += 1
                    *(arg1 + 0xf0) -= 1
                    r8_5 = arg_18 - 1
                    arg_18 = r8_5
            
            zmm1_1 = sub_141970b50(&var_158)
            void* i_5 = var_150_1.q
            void** const rdi_19 = &data_142efce08
            var_158 = &data_142efce08
            lpCriticalSection = arg1 + 0x110
            
            if (i_5 != 0)
                void* i_4
                
                do
                    i_4 = *(i_5 + 8)
                    zmm1_1 = j_sub_140a74f90(i_5)
                    i_5 = i_4
                    var_150_1.q = i_5
                while (i_4 != 0)
                rdi_19 = var_158
            
            var_150_1:8.q = 0
            var_150_1.q = 0
            rdi_19[1](&var_158, 0)
        
        result = sub_1419d50d0(arg1, arg1 + 0x40, zmm1_1)

int64_t rdi_20 = data_143f20340
int64_t rcx_70

if (data_143de5480 == 0)
    rcx_70 = 0
else
    result = GetCurrentThreadId()
    rcx_70.b = result.d != data_143de5470

if (*(rdi_20 + (rcx_70 << 2)) != 0)
    int64_t rax_70 = 0
    
    if (0 == *(arg1 + 0xe8))
        *(arg1 + 0xe8) = 0
    else
        rax_70 = *(arg1 + 0xe8)
    
    void* const rax_71 = nullptr
    
    if (0 == *(arg1 + 0xf0))
        *(arg1 + 0xf0) = 0
    else
        rax_71 = *(arg1 + 0xf0)
    
    result = rax_71 + rax_70
    
    if (rax_71 == neg.q(rax_70))
        int64_t var_a8 = data_143f0f158
        void var_e4
        char arg_8
        result = sub_1407d1070(arg1 + 0x198, &var_e4, &var_a8, &arg_8)

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection)
