// 函数: sub_140bb2250
// 地址: 0x140bb2250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r15 = zx.q(data_14401b1a0)
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
int32_t r14 = 0
uint128_t zmm8 = 0x4170000000000000
int64_t rsi
rsi.b = 1
uint128_t zmm6
uint128_t var_58 = zmm6
int128_t zmm7
int128_t var_68 = zmm7

while (true)
    void* rcx = *(arg1 + 0x1d8)
    bool z_1
    
    if (0 == *(rcx + 0x84))
        *(rcx + 0x84) = 0
        z_1 = true
    else
        *(rcx + 0x84)
        z_1 = false
    
    if (not(z_1))
        return zx.q((zx.d(rsi.b) ^ 1) * 2)
    
    zmm7 = arg1[0x31]
    zmm6 = zx.o(*(arg1 + 0xd0))
    bool rax_2
    
    if (arg1[0x32].b != 0)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        double zmm2 = float.d(performanceCount)
        double zmm0 = _mm_cvtps_pd(zmm7.q)
        zmm2 = zmm2 f* data_143d796f8 f+ zmm8.q
        double zmm1 = zmm2 f- zmm6.q
        rax_2 = zmm1 > zmm0
        
        if (rax_2 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm6.q)
                && not(zmm1 <= _mm_cvtps_pd(data_1439a9644)))
            zmm0.d = data_1439a9640.d f* zmm7.d
            
            if (not(zmm1 <= _mm_cvtps_pd(zmm0)))
                data_1439a9888 = zmm6.q
        
        data_1439a9890 = zmm2
    
    if (arg1[0x32].b != 0 && rax_2 != 0)
        return zx.q((zx.d(rsi.b) ^ 1) * 2)
    
    void* rcx_2 = data_143e1adf0
    bool z_2
    
    if (0 == *(rcx_2 + 8))
        *(rcx_2 + 8) = 0
        z_2 = true
    else
        *(rcx_2 + 8)
        z_2 = false
    
    rcx_2.b = not(z_2)
    
    if (rcx_2.b != 0 || rsi.b == 0 || (r14 != 0 && data_143e1a350 != 0))
        return zx.q((zx.d(rsi.b) ^ 1) * 2)
    
    r14 += 1
    
    if (r14 == 0x14)
        return zx.q((zx.d(rsi.b) ^ 1) * 2)
    
    rsi.b = 0
    
    if (arg1[0xaa] - arg1[0xb5] s>= data_1439a964c || arg1[0x9e] == 0)
    label_140bb2449:
        
        if (arg1[0x92] != 0)
            int32_t arg_20 = 0xffffffff
            rsi.b = 1
            sub_140bab6f0(&arg1[0x90], &arg_20, 0)
            void arg_8
            sub_140cad130(&arg_8)
            sub_140bada40(arg1, arg_20)
            sub_140cad790()
            void* rcx_9 = *(arg1 + 0x1d8)
            int32_t* var_c0 = arg1
            int32_t var_b8_1 = 0xffffffff - arg_20
            int32_t var_b4_1 = 0
            sub_140bb6ac0(rcx_9 + 0x340, &var_c0)
            *(arg1 + 0xd8) = 0
            *(arg1 + 0xe0) = u"ProcessImportsAndExports LinkImport"
            continue
        else if (arg1[0x96] != 0)
            int32_t var_d8 = 0xffffffff
            rsi.b = 1
            sub_140bab6f0(&arg1[0x94], &var_d8, 0)
            void* rcx_12 = *(arg1 + 0x1d8)
            int32_t* var_b0 = arg1
            int32_t var_a8_1 = 0xffffffff - var_d8
            int32_t var_a4_1 = 1
            sub_140bb6ac0(rcx_12 + 0x340, &var_b0)
            *(arg1 + 0xe0) = u"ProcessImportsAndExports ImportsThatAreNowSerialized"
            *(arg1 + 0xd8) = 0
            continue
        else if (arg1[0x9a] != 0)
            int32_t var_d4 = 0xffffffff
            rsi.b = 1
            sub_140bab6f0(&arg1[0x98], &var_d4, 0)
            void arg_10
            sub_140cad130(&arg_10)
            int32_t rbx_2 = var_d4
            zmm8 = sub_140ba2a90(arg1, rbx_2)
            sub_140cad790()
            int64_t* rcx_18 = *(arg1 + 0x1d8) + 0x340
            int32_t* var_a0 = arg1
            int32_t var_98_1 = rbx_2 + 1
            int32_t var_94_1 = 0
            sub_140bb6ac0(rcx_18, &var_a0)
            continue
        else if (arg1[0x9e] == 0)
        label_140bb25f6:
            
            if (arg1[0xa2] == 0)
                if (*(arg1 + 0x348) s> 0 && arg1[0xd6] == arg1[0xe1])
                    sub_140ba9260(arg1)
                    *(arg1 + 0xd8) = 0
                    *(arg1 + 0xe0) = u"ProcessImportsAndExports FlushPrecacheBuffer"
                
                if (arg1[0xa6] == 0)
                    continue
                else
                    sub_140baf1b0(arg1)
                    *(arg1 + 0xd8) = 0
                    *(arg1 + 0xe0) = u"ProcessImportsAndExports MakeNextPrecacheRequestCurrent"
                    continue
            else
                int32_t var_d0 = 0xffffffff
                rsi.b = 1
                sub_140bab6f0(&arg1[0xa0], &var_d0, 0)
                int32_t rbx_4 = var_d0
                int32_t rax_16
                
                if (*(*(arg1 + 0x50) + 0x295) == 0)
                    rax_16 = sub_14090a370(&arg1[0xd4], rbx_4)
                
                if (*(*(arg1 + 0x50) + 0x295) != 0 || rax_16 == 1)
                    void arg_18
                    sub_140cad130(&arg_18)
                    data_1439a9654 = rbx_4
                    zmm8 = sub_140ba3610(arg1, rbx_4)
                    data_1439a9654 = 0xffffffff
                    sub_140cad790()
                
                int64_t* rcx_26 = *(arg1 + 0x1d8) + 0x340
                int32_t* var_90 = arg1
                int32_t var_88_1 = rbx_4 + 1
                int32_t var_84_1 = 1
                sub_140bb6ac0(rcx_26, &var_90)
                continue
        else
            void* rbx_3 = *(arg1 + 0x1d8)
            
            if (data_143e1a7c8 s> *(0x14 + *(ThreadLocalStoragePointer + (r15 << 3))))
                _Init_thread_header(&data_143e1a7c8)
                
                if (data_143e1a7c8 == 0xffffffff)
                    data_143e1a7c4 = sub_140b9d650()
                    _Init_thread_footer(&data_143e1a7c8)
            
            if (data_143e1a7c4 != 0)
                void* rax_14 = *(rbx_3 + 0x3a0)
                
                if (*(rax_14 + 0xa0) - *(rax_14 + 0xcc) s>= 0x400)
                    goto label_140bb25f6
    else
        void* rbx_1 = *(arg1 + 0x1d8)
        
        if (data_143e1a7c8 s> *(0x14 + *(ThreadLocalStoragePointer + (r15 << 3))))
            _Init_thread_header(&data_143e1a7c8)
            
            if (data_143e1a7c8 == 0xffffffff)
                data_143e1a7c4 = sub_140b9d650()
                _Init_thread_footer(&data_143e1a7c8)
        
        if (data_143e1a7c4 != 0)
            void* rax_8 = *(rbx_1 + 0x3a0)
            
            if (*(rax_8 + 0xa0) - *(rax_8 + 0xcc) s>= 0x400)
                goto label_140bb2449
    
    rsi.b = 1
    zmm8 = sub_140bbb510(arg1)
    *(arg1 + 0xd8) = 0
    *(arg1 + 0xe0) = u"ProcessImportsAndExports Start IO"
