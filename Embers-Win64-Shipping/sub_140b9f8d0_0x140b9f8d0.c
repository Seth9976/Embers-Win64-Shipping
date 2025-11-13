// 函数: sub_140b9f8d0
// 地址: 0x140b9f8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
sub_140cad130(&arg_8)
int32_t rsi = 0

if (*(arg1 + 0xa0) s< *(*(arg1 + 0x50) + 0x10))
    uint128_t zmm8 = 0x4170000000000000
    uint128_t zmm6
    uint128_t var_38_1 = zmm6
    int128_t zmm7
    int128_t var_48_1 = zmm7
    
    do
        void* rcx_1 = *(arg1 + 0x1d8)
        bool z_1
        
        if (0 == *(rcx_1 + 0x84))
            *(rcx_1 + 0x84) = 0
            z_1 = true
        else
            *(rcx_1 + 0x84)
            z_1 = false
        
        bool rax_1
        
        if (not(z_1))
            rax_1 = true
        else
            zmm7 = *(arg1 + 0xc4)
            zmm6 = zx.o(*(arg1 + 0xd0))
            
            if (*(arg1 + 0xc8) != 0)
                int64_t performanceCount
                QueryPerformanceCounter(&performanceCount)
                double zmm1 = float.d(performanceCount)
                double zmm0 = _mm_cvtps_pd(zmm7.q)
                zmm1 = zmm1 f* data_143d796f8 f+ zmm8.q
                double zmm2 = zmm1 f- zmm6.q
                rax_1 = zmm2 > zmm0
                
                if (rax_1 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm6.q)
                        && not(zmm2 <= _mm_cvtps_pd(data_1439a9644)))
                    zmm0.d = data_1439a9640.d f* zmm7.d
                    
                    if (not(zmm2 <= _mm_cvtps_pd(zmm0)))
                        data_1439a9888 = zmm6.q
                
                data_1439a9890 = zmm1
            
            if (*(arg1 + 0xc8) != 0 && rax_1 != 0)
                rax_1 = true
            else
                void* rcx_3 = data_143e1adf0
                bool z_2
                
                if (0 == *(rcx_3 + 8))
                    *(rcx_3 + 8) = 0
                    z_2 = true
                else
                    *(rcx_3 + 8)
                    z_2 = false
                
                rcx_3.b = not(z_2)
                
                rax_1 = rcx_3.b != 0 ? true : false
        
        if (rax_1 != 0)
            break
        
        int32_t rdx_1 = *(arg1 + 0xa0)
        void* rcx_4 = *(arg1 + 0x50)
        *(arg1 + 0xa0) = rdx_1 + 1
        void* rax_3
        rax_3, zmm8 = sub_140cb5e90(rcx_4, rdx_1)
        *(arg1 + 0xd8) = rax_3
        *(arg1 + 0xe0) = u"creating imports for"
        sub_140b9aae0(arg1, rax_3)
        
        if (rax_3 != 0)
            void* rax_4 = sub_140cddea0()
            void* rdx_3 = *(rax_3 + 0x10)
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
                void* rax_7 = *(rax_3 + 0x68)
                void* arg_20 = rax_3
                void arg_10
                
                if (rax_7 != 0 && *(rax_7 + 0x2e0) != 0)
                    sub_140812a70(arg1 + 0x1e8, &arg_10, &arg_20, nullptr)
    while (*(arg1 + 0xa0) s< *(*(arg1 + 0x50) + 0x10))

if (*(arg1 + 0xa0) == *(*(arg1 + 0x50) + 0x10))
    rsi = 2

sub_140cad790()
return zx.q(rsi)
