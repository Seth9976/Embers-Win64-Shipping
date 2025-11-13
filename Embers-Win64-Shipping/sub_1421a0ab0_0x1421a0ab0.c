// 函数: sub_1421a0ab0
// 地址: 0x1421a0ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = arg1[1]
int128_t zmm6
int128_t var_18 = zmm6
uint128_t zmm0
double zmm2

if (*(result + 8) != 0)
    void* rcx_5 = arg1[5]
    
    if (rcx_5 != 0)
        int64_t rsi_1 = 0
        int64_t* rdi_1 = *(rcx_5 + 0x118)
        
        if (rdi_1 != 0)
            result = zx.q(rdi_1[1].d)
            
            if (result.d != 0)
                rdi_1[1].d = result.d + 1
                result.b = 1
            
            if (result.b == 0)
                rdi_1 = nullptr
            
            if (rdi_1 != 0)
                rsi_1 = *(rcx_5 + 0x110)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    result = (**rdi_1)(rdi_1)
                    int32_t temp1_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        result = (*(*rdi_1 + 8))(rdi_1, 1)
        
        if (rsi_1 == arg1)
            TEB* gsbase
            
            if (data_143f4d7e4 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f4d7e4)
                
                if (data_143f4d7e4 == 0xffffffff)
                    zmm0.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 0.000152592547f
                    data_143f4d7e0 = zmm0.d
                    _Init_thread_footer(&data_143f4d7e4)
            
            zmm0.d = data_143f4d7e0.d f+ 15f
            result = arg1[5]
            zmm2 = *(result + 0x218) f- arg1[0xb]
            arg2.o = _mm_cvtps_pd(zmm0.q)
            
            if (not(zmm2 f- arg2.q <= 0.0))
                zmm0.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 0.000152592547f
                data_143f4d7e0 = zmm0.d
                return sub_1421a4f20(arg1)
else if (arg1[2].b != 3 && not(0.0 f== arg1[0xf]))
    int64_t performanceCount
    result = QueryPerformanceCounter(&performanceCount)
    zmm0.q = float.d(performanceCount)
    zmm0.q = zmm0.q f* data_143d796f8
    zmm0.q = zmm0.q f+ 16777216.0
    zmm0.q = zmm0.q f- arg1[0xf]
    
    if (not(zmm0.q f<= 1.0))
        void* rax = arg1[5]
        
        if (rax != 0)
            zmm0.q = *(rax + 0x218) f- arg1[0x10]
            
            if (not(zmm0.q f<= 15.0))
                sub_141ccf530(arg1, 0)
        
        result = zx.q(arg1[2].b)
        
        if (result.b == 0)
            jump(*(*arg1 + 0x68))
        
        if (result.b == 1)
            zmm2 = arg1[0x13]
            
            if (not(zmm2 == 0.0))
                return sub_14219b0e0(arg1, arg1[0x12].b, zmm2, &arg1[0x14], arg2) __tailcall
return result
