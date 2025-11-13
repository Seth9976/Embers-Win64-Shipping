// 函数: sub_140bba550
// 地址: 0x140bba550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
sub_140cad130(&arg_8)
int32_t i = *(arg1 + 0xa4)
*(arg1 + 0xe0) = u"SetupExports_Event"
int32_t r12 = 0
*(arg1 + 0xd8) = *(arg1 + 0x58)
int32_t temp0 = *(*(arg1 + 0x50) + 0x20)
bool cond:0 = i == temp0

if (i s< temp0)
    int32_t i_1 = i
    int128_t zmm6
    int128_t var_58_1 = zmm6
    uint128_t zmm7
    uint128_t var_68_1 = zmm7
    void* rax_67
    
    do
        if (i_1 == i_1 s/ 0xa * 0xa)
            void* rcx_1 = *(arg1 + 0x1d8)
            bool z_1
            
            if (0 == *(rcx_1 + 0x84))
                *(rcx_1 + 0x84) = 0
                z_1 = true
            else
                *(rcx_1 + 0x84)
                z_1 = false
            
            if (not(z_1))
            label_140bbab24:
                rax_67 = *(arg1 + 0x50)
                i = *(arg1 + 0xa4)
                break
            
            zmm6 = *(arg1 + 0xc4)
            zmm7 = zx.o(*(arg1 + 0xd0))
            bool rax_7
            
            if (*(arg1 + 0xc8) != 0)
                int64_t performanceCount
                QueryPerformanceCounter(&performanceCount)
                double zmm1 = float.d(performanceCount)
                double zmm0 = _mm_cvtps_pd(zmm6.q).q
                zmm1 = zmm1 f* data_143d796f8 f+ 0x4170000000000000
                double zmm2 = zmm1 f- zmm7.q
                rax_7 = zmm2 > zmm0
                
                if (rax_7 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm7.q)
                        && not(zmm2 <= _mm_cvtps_pd(data_1439a9644).q))
                    zmm6.d = zmm6.d f* data_1439a9640
                    
                    if (not(zmm2 <= _mm_cvtps_pd(zmm6.q).q))
                        data_1439a9888 = zmm7.q
                
                data_1439a9890 = zmm1
            
            if (*(arg1 + 0xc8) != 0 && rax_7 != 0)
                goto label_140bbab24
            
            void* rcx_3 = data_143e1adf0
            bool z_2
            
            if (0 == *(rcx_3 + 8))
                *(rcx_3 + 8) = 0
                z_2 = true
            else
                *(rcx_3 + 8)
                z_2 = false
            
            rcx_3.b = not(z_2)
            
            if (rcx_3.b != 0)
                goto label_140bbab24
            
            i = *(arg1 + 0xa4)
        
        void* rax_9 = *(arg1 + 0x50)
        uint64_t rbx_1 = zx.q(i + 1)
        *(arg1 + 0xa4) = rbx_1.d
        void* r15_3 = (sx.q(i) << 7) + *(rax_9 + 0x18)
        
        if (*(r15_3 + 0x40) == 0)
            if (*(r15_3 + 0x51) != 0 || *(r15_3 + 0x53) != 0
                    || (*(rax_9 + 0x1f0) != 0 && *(r15_3 + 0x4e) != 0)
                    || (*(rax_9 + 0x1f1) != 0 && *(r15_3 + 0x4d) != 0) || *(r15_3 + 0x10) == 0
                    || (*(r15_3 + 0xc) == 0 && *(rax_9 + 0x295) == 0))
                *(r15_3 + 0x51) = 1
            else
                int64_t r13_1 = sx.q(*(r15_3 + 0x68))
                
                if (r13_1.d s>= 0)
                    int32_t var_94_1 = 2
                    int32_t j = *(r15_3 + 0x6c)
                    void* var_a0 = arg1
                    int32_t var_98_1 = rbx_1.d
                    int32_t var_a8_1 = 0
                    void* var_b0 = arg1
                    int32_t var_a4_1 = 1
                    
                    if (j s> 0)
                        int64_t r14_1 = r13_1
                        r13_1 = zx.q(r13_1.d + j)
                        
                        do
                            int64_t rdx_4 = r14_1
                            r14_1 += 1
                            int32_t var_a8_2 = *(*(*(arg1 + 0x50) + 0x2f0) + (rdx_4 << 2))
                            sub_140b9a370(arg1, &var_b0, &var_a0)
                            j -= 1
                        while (j s> 0)
                    
                    int32_t j_1 = *(r15_3 + 0x70)
                    int32_t var_a4_2 = 0
                    
                    if (j_1 s> 0)
                        int64_t r14_2 = sx.q(r13_1.d)
                        r13_1 = zx.q(r13_1.d + j_1)
                        
                        do
                            int64_t rdx_6 = r14_2
                            r14_2 += 1
                            int32_t var_a8_3 = *(*(*(arg1 + 0x50) + 0x2f0) + (rdx_6 << 2))
                            sub_140b9a370(arg1, &var_b0, &var_a0)
                            j_1 -= 1
                        while (j_1 s> 0)
                    
                    int32_t j_2 = *(r15_3 + 0x74)
                    int32_t var_94_2 = 0
                    uint64_t r9_1 = var_98_1.q
                    int32_t var_a4_3 = 1
                    int32_t j_4 = j_2
                    zmm6 = var_a0.o
                    
                    if (j_2 s> 0)
                        int64_t r15_4 = sx.q(r13_1.d)
                        uint32_t r12_2 = (r9_1 u>> 0x20).d
                        r13_1 = zx.q(r13_1.d + j_2)
                        
                        do
                            int64_t rdx_8 = r15_4
                            r15_4 += 1
                            uint64_t rax_15 = zx.q(*(*(*(arg1 + 0x50) + 0x2f0) + (rdx_8 << 2)))
                            int32_t var_a8_4 = rax_15.d
                            int32_t temp4_1 = rax_15.d
                            void* r14_5
                            
                            if (temp4_1 != 0)
                                int64_t rcx_9 = var_a8_4.q
                                int32_t rcx_12
                                
                                if (temp4_1 s>= 0)
                                    rcx_12 =
                                        (rcx_9 u>> 0x20).d + (rax_15 * 3).d + *(arg1 + 0x564) - 3
                                else
                                    rcx_12 =
                                        (rcx_9 u>> 0x20).d - ((rax_15 << 1) + 2).d + *(arg1 + 0x560)
                                
                                r14_5 = *(arg1 + 0x548) + sx.q(rcx_12) * 0x18
                            else
                                int64_t rax_18 = sx.q((var_a8_4.q u>> 0x20).d)
                                r14_5 = arg1 + ((rax_18 + ((rax_18 + 0x50) << 1)) << 3)
                            
                            int32_t temp6_1 = rbx_1.d
                            void* rax_28
                            
                            if (temp6_1 != 0)
                                int32_t rcx_17
                                
                                if (temp6_1 s>= 0)
                                    rcx_17 = *(arg1 + 0x564) - 3 + (rbx_1 * 3).d
                                else
                                    rcx_17 = *(arg1 + 0x560) - ((rbx_1 << 1) + 2).d
                                
                                rax_28 = *(arg1 + 0x548) + sx.q(rcx_17 + r12_2) * 0x18
                            else
                                rax_28 = arg1 + ((sx.q(r12_2) * 3 + 0xa0) << 3)
                            
                            *(rax_28 + 0x10) += 1
                            int64_t rsi_1 = sx.q(*(r14_5 + 8))
                            int32_t rax_33 = (rsi_1 + 1).d
                            *(r14_5 + 8) = rax_33
                            
                            if (rax_33 s> *(r14_5 + 0xc))
                                sub_1405a4f90(r14_5)
                                j_2 = j_4
                            
                            j_2 -= 1
                            j_4 = j_2
                            *(*r14_5 + rsi_1 * 0x10) = zmm6
                        while (j_2 s> 0)
                        
                        r12 = 0
                    
                    int32_t j_3 = *(r15_3 + 0x78)
                    int32_t var_a4_4 = 0
                    
                    if (j_3 s> 0)
                        uint64_t r9_2 = r9_1 u>> 0x20
                        uint64_t arg_18 = r9_2
                        int64_t r12_3 = sx.q(r13_1.d)
                        
                        do
                            int64_t rdx_10 = r12_3
                            r12_3 += 1
                            uint64_t rax_36 = zx.q(*(*(*(arg1 + 0x50) + 0x2f0) + (rdx_10 << 2)))
                            int32_t var_a8_5 = rax_36.d
                            int32_t temp5_1 = rax_36.d
                            int64_t* rsi_4
                            
                            if (temp5_1 != 0)
                                int64_t rcx_26 = var_a8_5.q
                                int32_t rcx_29
                                
                                if (temp5_1 s>= 0)
                                    rcx_29 =
                                        (rcx_26 u>> 0x20).d - 3 + *(arg1 + 0x564) + (rax_36 * 3).d
                                else
                                    rcx_29 = (rcx_26 u>> 0x20).d - ((rax_36 << 1) + 2).d
                                        + *(arg1 + 0x560)
                                
                                rsi_4 = *(arg1 + 0x548) + sx.q(rcx_29) * 0x18
                            else
                                int64_t rax_39 = sx.q((var_a8_5.q u>> 0x20).d)
                                rsi_4 = arg1 + ((rax_39 + ((rax_39 + 0x50) << 1)) << 3)
                            
                            int32_t temp7_1 = rbx_1.d
                            void* rax_47
                            
                            if (temp7_1 != 0)
                                int32_t rcx_35
                                
                                if (temp7_1 s>= 0)
                                    rcx_35 = *(arg1 + 0x564) - 3 + (rbx_1 * 3).d
                                else
                                    rcx_35 = *(arg1 + 0x560) - ((rbx_1 << 1) + 2).d
                                
                                rax_47 = *(arg1 + 0x548) + sx.q(rcx_35 + r9_2.d) * 0x18
                            else
                                rax_47 = arg1 + ((sx.q(r9_2.d) * 3 + 0xa0) << 3)
                            
                            *(rax_47 + 0x10) += 1
                            int64_t r14_6 = sx.q(rsi_4[1].d)
                            int32_t rax_52 = (r14_6 + 1).d
                            rsi_4[1].d = rax_52
                            
                            if (rax_52 s> *(rsi_4 + 0xc))
                                sub_1405a4f90(rsi_4)
                                r9_2 = arg_18
                            
                            j_3 -= 1
                            *(*rsi_4 + r14_6 * 0x10) = zmm6
                        while (j_3 s> 0)
                        
                        r12 = 0
        
        void* var_90 = arg1
        int32_t var_88_1 = rbx_1.d
        int32_t var_84_1 = 0
        int32_t temp3_1 = rbx_1.d
        void* rax_59
        
        if (temp3_1 != 0)
            int32_t rax_63
            
            if (temp3_1 s>= 0)
                rax_63 = (rbx_1 * 3).d + (var_88_1.q u>> 0x20).d - 3 + *(arg1 + 0x564)
            else
                rax_63 = (var_88_1.q u>> 0x20).d - ((rbx_1 << 1) + 2).d + *(arg1 + 0x560)
            
            rax_59 = *(arg1 + 0x548) + sx.q(rax_63) * 0x18
        else
            rax_59 = arg1 + ((sx.q((var_88_1.q u>> 0x20).d) * 3 + 0xa0) << 3)
        
        if (*(rax_59 + 0x10) == 0)
            *(rax_59 + 0x14) = 1
            sub_140ba89e0(var_90, &var_90)
        
        i = *(arg1 + 0xa4)
        i_1 = i
        rax_67 = *(arg1 + 0x50)
    while (i s< *(rax_67 + 0x20))
    
    cond:0 = i == *(rax_67 + 0x20)

if (cond:0)
    r12 = 2

sub_140cad790()
return zx.q(r12)
