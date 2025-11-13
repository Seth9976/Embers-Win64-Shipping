// 函数: sub_141d92000
// 地址: 0x141d92000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10 = 1
char i
double zmm7[0x2]
i, zmm7 = sub_140af2fd0(data_143ddb400, LocalFileNetworkReplayStreamingFactory", 
    bFlushStreamersOnShutdown", &arg_10, &data_143de5780)

if (arg_10 != 0)
    void* rcx_1 = data_143ddb400
    double var_28_1[0x2] = zmm7
    double arg_18 = -1.0
    double zmm6_1[0x2]
    int128_t zmm8_1
    zmm6_1, zmm8_1 =
        sub_140af3a30(rcx_1, LocalFileNetworkReplayStreamingFactory", MaxFlushTimeSeconds"
        , &arg_18, &data_143de5780)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    uint128_t zmm10 = 0x4170000000000000
    double zmm7_1[0x2] = zx.o(0)
    zmm7_1[0] = float.d(performanceCount)
    zmm7_1[0] = zmm7_1[0] f* data_143d796f8
    zmm7_1[0] = zmm7_1[0] f+ zmm10.q
    double zmm11[0x2] = zmm7_1
    i = sub_141d9f7d0(arg1)
    
    if (i != 0)
        double var_18_1[0x2] = zmm6_1
        int128_t var_38_1 = zmm8_1
        
        do
            i = QueryPerformanceCounter(&performanceCount)
            double zmm1_1 = arg_18
            zmm6_1 = zx.o(0)
            zmm6_1[0] = float.d(performanceCount)
            zmm6_1[0] = zmm6_1[0] f* data_143d796f8
            zmm6_1[0] = zmm6_1[0] f+ zmm10.q
            
            if (not(zmm1_1 <= 0.0))
                zmm6_1[0] = zmm6_1[0] - zmm7_1[0]
                
                if (zmm6_1[0] > zmm1_1)
                    break
            
            int64_t rax = *(arg1 + 8)
            zmm6_1[0] = zmm6_1[0] - zmm11[0]
            (*rax)(arg1 + 8, _mm_cvtpd_ps(zmm6_1))
            zmm11 = zmm6_1
            
            if (sub_141d9f7d0(arg1) != 0)
                int64_t* rax_2 = sub_140a242a0()
                int64_t r8_1 = *rax_2
                (*(r8_1 + 0x30))(rax_2, 2, r8_1)
                
                if (sub_140a54810() != 0)
                    sub_140b73230(0x3dcccccd)
            
            i = sub_141d9f7d0(arg1)
        while (i != 0)

return i
