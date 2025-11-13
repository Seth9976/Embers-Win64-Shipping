// 函数: sub_141995590
// 地址: 0x141995590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_143f0fdfc -= 1
int32_t result = data_143db7a64

if (result == 0)
    result = data_143f0fdf4
    
    if (result == 0)
        TEB* gsbase
        void* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
        uint128_t zmm7 = 0x4170000000000000
        double zmm0[0x2]
        
        if (data_143f1af68 s> *(rbx_1 + 0x14))
            _Init_thread_header(&data_143f1af68)
            
            if (data_143f1af68 == 0xffffffff)
                int64_t performanceCount_1
                QueryPerformanceCounter(&performanceCount_1)
                zmm0 = zx.o(0)
                zmm0[0] = float.d(performanceCount_1)
                zmm0[0] = zmm0[0] f* data_143d796f8
                zmm0[0] = zmm0[0] f+ zmm7.q
                data_143f1af60 = zmm0.q
                _Init_thread_footer(&data_143f1af68)
        
        int64_t performanceCount_2
        QueryPerformanceCounter(&performanceCount_2)
        result = *(rbx_1 + 0x14)
        double zmm6[0x2] = zx.o(0)
        bool cond:0_1 = data_143f1af58 s> result
        zmm6[0] = float.d(performanceCount_2)
        zmm6[0] = zmm6[0] f* data_143d796f8
        zmm6[0] = zmm6[0] f+ zmm7.q
        zmm6[0] = zmm6[0] f- data_143f1af60
        float temp0_1[0x4] = _mm_cvtpd_ps(zmm6)
        
        if (cond:0_1)
            result = _Init_thread_header(&data_143f1af58)
            
            if (data_143f1af58 == 0xffffffff)
                int64_t performanceCount[0x2]
                QueryPerformanceCounter(&performanceCount)
                zmm0 = zx.o(0)
                zmm0[0] = float.d(performanceCount[0])
                zmm0[0] = zmm0[0] f* data_143d796f8
                zmm0[0] = zmm0[0] f+ zmm7.q
                data_143f1af50 = zmm0.q
                result = _Init_thread_footer(&data_143f1af58)
        
        zmm6[0] = zmm6[0] f- data_143f1af50
        int32_t i_1 = 0
        bool cond:1_1 = data_143f13798 s<= 0
        int32_t i = 0
        uint128_t temp0_2 = _mm_cvtpd_ps(zmm6)
        int512_t zmm1
        
        if (not(cond:1_1))
            int64_t* rsi_1 = nullptr
            
            do
                int64_t* r14_1 = *(rsi_1 + data_143f13790)
                result = (*(*r14_1 + 0x18))(r14_1)
                
                if (result.b != 0)
                    zmm1.o = temp0_2
                    result = (*(*r14_1 + 8))(r14_1, zmm1)
                
                i += 1
                rsi_1 = &rsi_1[1]
            while (i s< data_143f13798)
        
        zmm0 = 0x3f800000
        zmm0[0].d = 1f f/ data_1439c85c8
        bool cond:2_1 = temp0_1[0] f< zmm0[0].d
        data_143f1af50 = zmm6.q
        
        if (not(cond:2_1))
            if (data_143f13788 s> 0)
                int64_t* rsi_2 = nullptr
                
                do
                    int64_t* rdi_1 = *(rsi_2 + data_143f13780)
                    result = (*(*rdi_1 + 0x18))(rdi_1)
                    
                    if (result.b != 0)
                        zmm1.o = temp0_1
                        result = (*(*rdi_1 + 8))(rdi_1, zmm1)
                    
                    i_1 += 1
                    rsi_2 = &rsi_2[1]
                while (i_1 s< data_143f13788)
            
            data_143f1af60 = zmm6.q

return result
