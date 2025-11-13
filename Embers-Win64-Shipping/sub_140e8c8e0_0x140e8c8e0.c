// 函数: sub_140e8c8e0
// 地址: 0x140e8c8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[4]
float zmm8[0x4] = arg3

if (rcx != 0)
    (*(*rcx + 0xe8))(rcx, 0)

int64_t* performanceCount
float zmm0[0x4]

if (arg2 == 1)
    zmm0 = sub_140e59cd0(&arg1[0x99], zmm8)
    int64_t* i = arg1[0x57]
    void* rsi_3 = &i[sx.q(arg1[0x58].d) * 2]
    performanceCount = arg1
    
    for (; i != rsi_3; i = &i[2])
        void* rdx_1 = *i
        
        if (rdx_1 != 0 && *(rdx_1 + 0x20) != 0)
            zmm0, zmm8 = j_sub_140e56330(&performanceCount, rdx_1, zmm0)

arg1[0x6c] = arg1[0x6b]
char result = QueryPerformanceCounter(&performanceCount)
zmm0 = zx.o(0)
zmm0[0].q = float.d(performanceCount)
zmm0[0].q = zmm0[0].q f* data_143d796f8
zmm0[0].q = zmm0[0].q f+ 16777216.0
arg1[0x6b] = zmm0.q
float zmm1[0x4]

if (arg2 == 1)
    zmm0[0].q = zmm0[0].q f- arg1[0x6c]
    float temp0_1[0x4] = _mm_cvtpd_ps(zmm0)
    zmm0 = arg1[0x6d].d
    temp0_1[0] = temp0_1[0] * 0.100000001f
    zmm0[0] = zmm0[0] * 0.899999976f
    temp0_1[0] = temp0_1[0] + zmm0[0]
    arg1[0x6d].d = temp0_1[0]
    result = sub_140db2ee0(sub_140da2c00())
    
    if (result != 0)
        zmm0 = zx.o(arg1[0x6b])
        zmm1 = zx.o(0)
        zmm0[0].q = zmm0[0].q f- arg1[0x6c]
        float temp0_2[0x4] = _mm_cvtpd_ps(zmm0)
        
        if (not(temp0_2[0] < 0f))
            zmm1 = __minss_xmmss_memss(temp0_2[0], 0x3f800000)
        
        zmm0 = *(arg1 + 0x36c)
        zmm0[0] = zmm0[0] * 0.899999976f
        zmm1[0] = zmm1[0] * 0.100000001f
        zmm1[0] = zmm1[0] + zmm0[0]
        *(arg1 + 0x36c) = zmm1[0]

zmm1 = zx.o(arg1[0x6b])
zmm1[0].q = zmm1[0].q f- arg1[0x6c]

if (not(_mm_cvtpd_ps(zmm1)[0] <= 0.125f))
    zmm1[0].q = zmm1[0].q f- 0.125
    arg1[0x6c] = zmm1.q

if (arg2 == 1)
    void** i_1 = arg1[0x57]
    void* rsi_6 = &i_1[sx.q(arg1[0x58].d) * 2]
    char arg_10 = 0
    performanceCount = &arg_10
    
    for (; i_1 != rsi_6; i_1 = &i_1[2])
        void* rdx_2 = *i_1
        
        if (rdx_2 != 0 && *(rdx_2 + 0x20) != 0)
            zmm8 = sub_140e5a380(&performanceCount, rdx_2)
    
    sub_140e8c480(arg1)
    void var_38
    sub_140e65190(arg1, &var_38)
    float zmm1_1[0x4] = zx.o(arg1[0x6c])
    double zmm0_1 = zmm1_1[0].q f- arg1[0x5f]
    float temp0_5[0x2] = _mm_cvtps_pd(*data_143e29f00)
    
    if (not(zmm0_1 f<= temp0_5))
        zmm1_1[0].q = zmm1_1[0].q f- arg1[0x64]
    
    char rbp
    
    if (zmm0_1 f<= temp0_5 || zmm1_1[0].q f<= temp0_5)
        rbp = 0
    else
        rbp = 1
    
    char rax_5 = sub_140d99e70(arg1)
    
    if (rax_5 != 0)
        void** i_2 = arg1[0x57]
        void* rsi_9 = &i_2[sx.q(arg1[0x58].d) * 2]
        performanceCount.b = 0
        
        for (; i_2 != rsi_9; i_2 = &i_2[2])
            void* rdx_4 = *i_2
            
            if (rdx_4 != 0 && *(rdx_4 + 0x20) != 0)
                sub_140e5a170(&performanceCount, rdx_4)
    
    int64_t* i_3 = arg1[0x57]
    void* rsi_12 = &i_3[sx.q(arg1[0x58].d) * 2]
    performanceCount = arg1
    
    for (; i_3 != rsi_12; i_3 = &i_3[2])
        void* rdx_5 = *i_3
        
        if (rdx_5 != 0 && *(rdx_5 + 0x20) != 0)
            j_sub_140e56510(&performanceCount, rdx_5)
    
    arg1[0x22].b = 1
    
    if (*data_143e29ee8 == 0 || rax_5 != 0 || rbp == 0 || arg_10 != rax_5
            || data_143dbb3dc != rax_5)
        arg1[0x22].b = 0
        int64_t* rax_7
        void* rdx_6
        rax_7, rdx_6 = sub_140eff820()
        sub_140f196d0(rax_7, rdx_6)
        int128_t var_48 = zx.o(0)
        zmm8 = sub_140e7a240(arg1, &var_48)
        sub_140e26150(arg1[0x15])
    
    result = sub_140e59cd0(&arg1[0x9c], zmm8)
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            result = (**var_30)(var_30)
            int32_t temp1_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*var_30 + 8))(var_30, 1)

return result
