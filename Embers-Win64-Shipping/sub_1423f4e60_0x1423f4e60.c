// 函数: sub_1423f4e60
// 地址: 0x1423f4e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0xfa]

if (rcx != 0 && (*(*rcx + 0x270))(rcx, arg1) == 0)
    return sub_1423f54c0(arg1) __tailcall

TEB* gsbase
void* rbx = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
int64_t performanceCount
uint128_t zmm0

if (data_143f5b748 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f5b748)
    
    if (data_143f5b748 == 0xffffffff)
        QueryPerformanceCounter(&performanceCount)
        zmm0.q = float.d(performanceCount)
        zmm0.q = zmm0.q f* data_143d796f8
        zmm0.q = zmm0.q f+ 16777215.9999
        data_143f5b740 = zmm0.q
        _Init_thread_footer(&data_143f5b748)

int64_t rsi

if (data_143dbb3b5 != 0 || data_143dbb3b6 != 0)
    rsi.b = 1
else
    rsi.b = 0

uint64_t result = zx.q(*(rbx + 0x14))

if (data_143f5b750 s> result.d)
    result = _Init_thread_header(&data_143f5b750)
    
    if (data_143f5b750 == 0xffffffff)
        data_143f5b74d = rsi.b
        result = _Init_thread_footer(&data_143f5b750)

double zmm2 = data_143dbb3b8
data_143dbb3c0 = zmm2
void*** (* var_b8)()

if (rsi.b == 0)
    QueryPerformanceCounter(&performanceCount)
    bool cond:0_1 = data_143f5b74d == 0
    uint128_t zmm6
    zmm6.q = float.d(performanceCount)
    uint128_t zmm10 = 0x4170000000000000
    zmm6.q = zmm6.q f* data_143d796f8
    uint128_t zmm11 = 0x3ff0000000000000
    zmm6.q = zmm6.q f+ zmm10.q
    data_143dbb3b8 = zmm6.q
    
    if (cond:0_1)
        zmm2 = data_143f5b740
    else
        zmm2 = zmm6.q
        
        if ((arg1[0xf7].b & 0x40) == 0)
            zmm2 = zmm2 f- data_14399f938
            data_143f5b74c = 0
            data_143f5b740 = zmm2
        else
            zmm0 = _mm_cvtps_pd((*(arg1 + 0x7bc)).q)
            data_143f5b74c = 0
            zmm2 = zmm2 - zmm11.q f/ zmm0.q
            data_143f5b740 = zmm2
    
    zmm0.q = zmm6.q f- zmm2
    float zmm9[0x4] = _mm_cvtpd_ps(zmm0)
    
    if (not(zmm9[0] >= 0f))
        (*(*arg1 + 0x2a8))(arg1, _mm_cvtps_pd(zmm9[0].q))
        zmm9 = zx.o(0)
        zmm9[0] = fconvert.s(zmm0.q)
    
    int64_t r8_2
    r8_2.b = 1
    (*(*arg1 + 0x2c8))(arg1, zmm9[0].q, r8_2)
    int64_t r8_3
    r8_3.b = 1
    int64_t r9_2 = (*(*arg1 + 0x2b0))(arg1, zmm9[0].q, r8_3)
    char rax_9 = (arg1[0xf7].d).b
    
    if ((rax_9 & 0x40) != 0)
        zmm0 = *(arg1 + 0x7bc)
    
    float zmm7[0x4] = zx.o(0)
    
    if (not(zmm0.d f<= 0f))
        zmm7 = 0x3f800000
        zmm7[0] = 1f f/ zmm0.d
        zmm7[0] = zmm7[0] - zmm9[0]
        zmm7 = _mm_max_ss(zmm7[0], 0)
    
    zmm9 = zx.o(0)
    double zmm1
    
    if (zmm7[0] <= 0f)
        zmm2 = (zx.o(0)).q
        
        if ((rax_9 & 0x40) != 0)
            zmm1 = *(arg1 + 0x7bc)
            
            if (not(zmm0.d f!= zmm1.d))
                zmm0 = _mm_cvtps_pd(zmm1)
                data_143f5b74c = 1
                zmm11.q = zmm11.q f/ zmm0.q
                data_143dbb3b8 = data_143f5b740 f+ zmm11.q
    else
        int32_t performanceCount_2
        QueryPerformanceCounter(&performanceCount_2)
        QueryPerformanceCounter(&performanceCount)
        bool cond:4_1 = zmm7[0] <= 0.00499999989f
        int128_t zmm13
        zmm13.q = float.d(performanceCount)
        zmm9 = _mm_cvtps_pd(zmm7[0].q)
        zmm13.q = zmm13.q f* data_143d796f8
        zmm9[0].q = zmm9[0].q f+ zmm6.q
        
        if (not(cond:4_1))
            zmm0.d = zmm7.d f- 0.00200000009f
            sub_140b732d0(zmm0.d)
        
        QueryPerformanceCounter(&performanceCount)
        zmm0.q = float.d(performanceCount)
        zmm0.q = zmm0.q f* data_143d796f8
        zmm0.q = zmm0.q f+ zmm10.q
        
        if (not(zmm0.q f>= zmm9[0].q))
            do
                sub_140b732d0(zx.o(0).d)
                QueryPerformanceCounter(&performanceCount)
                zmm0.q = float.d(performanceCount)
                zmm0.q = zmm0.q f* data_143d796f8
                zmm0.q = zmm0.q f+ zmm10.q
            while (zmm0.q f< zmm9[0].q)
        
        QueryPerformanceCounter(&performanceCount)
        zmm6.q = float.d(performanceCount)
        zmm6.q = zmm6.q f* data_143d796f8
        zmm6.q = zmm6.q f+ zmm10.q
        
        if ((arg1[0xf7].b & 0x40) == 0)
            zmm0 = zmm6
        else
            zmm0 = _mm_cvtps_pd((*(arg1 + 0x7bc)).q)
            data_143f5b74c = 1
            zmm11.q = zmm11.q f/ zmm0.q
            zmm0.q = data_143f5b740 f+ zmm11.q
        
        data_143dbb3b8 = zmm0.q
        QueryPerformanceCounter(&performanceCount)
        zmm9 = zx.o(0)
        zmm9[0].q = float.d(performanceCount)
        int64_t* var_b0_1 = &performanceCount
        performanceCount.b = 0
        var_b8 = sub_140a3f720
        zmm9[0].q = zmm9[0].q f* data_143d796f8
        zmm9[0].q = zmm9[0].q f- zmm13.q
        void* rax_10 = sub_140a756e0(&var_b8, &data_14399e8cc)
        int64_t performanceCount_1
        r9_2 = QueryPerformanceCounter(&performanceCount_1)
        zmm2 = zmm9[0].q
        *(rax_10 + 0x10) += performanceCount_1.d - performanceCount_2
    
    zmm1 = data_143dbb3b8 f- data_143f5b740
    zmm0.q = fconvert.d(zmm7[0])
    data_143dbb3c8 = zmm9.q
    double temp0_10 = _mm_max_sd(zmm2 f- zmm0.q, 0)
    data_14399f938 = zmm1
    data_143dbb3d0 = temp0_10
    
    if (not(zmm1 >= 0.0))
        sub_140af98a0("Unknown", 0x859, 
            Detected negative delta time - on AMD systems please install http://files.aoaforums."
        "com/I3199-setup.zip", r9_2)
        sub_140afbb40()
        data_14399f938 = 0x3f847ae147ae147b
    
    data_143f5b740 = zmm6.q
    void* rax_11 = sub_1424ad0c0()
    void* rdx_3 = arg1[2]
    result = sx.q(*(rax_11 + 0x38))
    
    if (result.d s<= *(rdx_3 + 0x38))
        uint64_t result_1 = result
        result = *(rdx_3 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_11 + 0x30)
            zmm6 = arg1[0x1bc].d
            
            if (not(zmm6.d f<= 0f))
                int32_t i = arg1[0x188].d
                result = 0
                
                if (i s> 0)
                    int64_t* r9_3 = arg1[0x187]
                    int64_t* rcx_18 = r9_3
                    
                    do
                        char* rdx_4 = *rcx_18
                        
                        if (*rdx_4 == 1 && *(rdx_4 + 0x218) != 0)
                            void* rcx_19 = r9_3[sx.q(result.d)]
                            void* rbx_2 = *(rcx_19 + 0x278)
                            result = sub_140a478a0(*(rcx_19 + 0x218))
                            int32_t r14_1 = result.d
                            
                            if (rbx_2 != 0)
                                int64_t* rcx_21 = *(rbx_2 + 0x128)
                                
                                if (rcx_21 != 0)
                                    int64_t rdx_5 = *rcx_21
                                    result = (*(rdx_5 + 0x6a0))(rcx_21, rdx_5)
                                    
                                    if (result.d == r14_1)
                                        data_14399f938 =
                                            __minsd_xmmsd_memsd(fconvert.d(zmm6.d), data_14399f938)
                            
                            break
                        
                        result = zx.q(result.d + 1)
                        rcx_18 = &rcx_18[1]
                    while (result.d s< i)
else
    zmm0 = _mm_cvtpd_ps(zx.o(data_14399f930))
    data_143f5b74c = 1
    data_143f5b740 = zmm2
    double temp0_2 = _mm_cvtps_pd(zmm0.q)
    data_14399f938 = temp0_2
    data_143dbb3b8 = zmm2 + temp0_2

data_143de5520 = 0
int64_t* rbx_3 = arg1[0x102]
data_143f5b74d = rsi.b

if (rbx_3 != 0)
    result = (*(*rbx_3 + 0x268))(rbx_3)
    
    if (result.d == 2)
        result = sub_1420042d0(rbx_3, &var_b8)
        int128_t zmm0_4 = *result
        data_143de5520 = 1
        data_143de5510 = zmm0_4

return result
