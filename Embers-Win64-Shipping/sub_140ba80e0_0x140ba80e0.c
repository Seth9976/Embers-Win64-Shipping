// 函数: sub_140ba80e0
// 地址: 0x140ba80e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x1d8)
int64_t rsi = 0
uint128_t zmm6
uint128_t var_28 = zmm6
uint128_t zmm7
uint128_t var_38 = zmm7
uint128_t zmm8
uint128_t var_48 = zmm8
bool z

if (0 == *(rdx + 0x84))
    *(rdx + 0x84) = 0
    z = true
else
    *(rdx + 0x84)
    z = false

if (z)
    zmm7 = *(arg1 + 0xc4)
    zmm6 = zx.o(*(arg1 + 0xd0))
    zmm8 = 0x4170000000000000
    bool rax_2
    uint128_t zmm1
    
    if (*(arg1 + 0xc8) != 0)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        zmm1.q = float.d(performanceCount)
        double zmm0 = _mm_cvtps_pd(zmm7.q)
        zmm1.q = zmm1.q f* data_143d796f8
        zmm1.q = zmm1.q f+ zmm8.q
        double zmm2 = zmm1.q f- zmm6.q
        rax_2 = zmm2 > zmm0
        
        if (rax_2 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm6.q)
                && not(zmm2 <= _mm_cvtps_pd(data_1439a9644)))
            zmm0.d = data_1439a9640.d f* zmm7.d
            
            if (not(zmm2 <= _mm_cvtps_pd(zmm0)))
                data_1439a9888 = zmm6.q
        
        data_1439a9890 = zmm1.q
    
    if (*(arg1 + 0xc8) == 0 || rax_2 == 0)
        void* rcx_1 = data_143e1adf0
        bool z_1
        
        if (0 == *(rcx_1 + 8))
            *(rcx_1 + 8) = 0
            z_1 = true
        else
            *(rcx_1 + 8)
            z_1 = false
        
        rcx_1.b = not(z_1)
        
        if (rcx_1.b == 0)
            *(arg1 + 0xe0) = u"ExternalReadDependencies"
            int64_t performanceCount_1
            QueryPerformanceCounter(&performanceCount_1)
            int32_t rax_4 = *(arg1 + 0xb0)
            zmm6.q = _mm_cvtps_pd((*(arg1 + 0xc4)).q).q
                f- (float.d(performanceCount_1) f* data_143d796f8 f+ zmm8.q f- *(arg1 + 0xd0))
            zmm6 = __maxsd_xmmsd_memsd(zmm6.q, 0x3f508c3f40000000)
            
            if (rax_4 s>= *(arg1 + 0x120))
                return 2
            
            zmm7 = zx.o(0)
            
            while (true)
                void* rcx_4 = *(*(arg1 + 0x118) + (sx.q(rax_4) << 3))
                
                if (rcx_4 != 0)
                    int64_t rax_6 = sub_140d3cb50(rcx_4)
                    
                    if (rax_6 != 0 && rax_6 != rsi)
                        if (*(arg1 + 0xc8) == 0)
                            zmm1 = zmm7
                        else
                            zmm1 = zmm6
                        
                        char rax_7
                        rax_7, zmm6, zmm7, zmm8 = sub_140cba580(rax_6, zmm1)
                        
                        if (rax_7 == 0)
                            return 0
                        
                        rsi = rax_6
                        
                        if (*(arg1 + 0xc8) != 0)
                            int64_t performanceCount_2
                            QueryPerformanceCounter(&performanceCount_2)
                            zmm6.q = _mm_cvtps_pd((*(arg1 + 0xc4)).q).q f- (
                                float.d(performanceCount_2) f* data_143d796f8 f+ zmm8.q f-
                                *(arg1 + 0xd0))
                            
                            if (zmm6.q f<= zmm7.q)
                                return 0
                
                rax_4 = *(arg1 + 0xb0) + 1
                *(arg1 + 0xb0) = rax_4
                
                if (rax_4 s>= *(arg1 + 0x120))
                    return 2

return 0
