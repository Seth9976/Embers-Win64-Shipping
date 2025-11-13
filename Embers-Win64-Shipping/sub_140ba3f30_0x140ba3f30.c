// 函数: sub_140ba3f30
// 地址: 0x140ba3f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_130 = &arg_8
void*** (* var_138)() = sub_140884c50
void* rax = sub_140a756e0(&var_138, &data_14397f5f0)
int64_t r12 = *(rax + 0x40)
*(rax + 0x40) = arg1
sub_140b9bd30(arg1)
int32_t rax_1
uint128_t zmm7
uint128_t zmm8

if (*(arg1 + 0xcb) == 0)
    rax_1, arg2, zmm7, zmm8 = sub_140ba8320(arg1)

if (*(arg1 + 0xcb) != 0 || rax_1 != 0 || *(arg1 + 0xcb) != 0)
    int128_t var_58_1 = arg2
    uint128_t var_68_1 = zmm7
    uint128_t var_78_1 = zmm8
    
    if (*(arg1 + 0xcb) != 0)
        goto label_140ba4518
    
    *(arg1 + 0xe0) = u"ImportAddNode"
    
    if (*(arg1 + 0x4f0) == 0 && *(arg1 + 0x4f4) == 0)
        void* rax_4 = *(arg1 + 0x50)
        void var_f0
        sub_140b9a940(arg1, &var_f0, 2, 0, 0, *(rax_4 + 0x20) + *(rax_4 + 0x10))
        void var_e0
        sub_140b9a940(arg1, &var_e0, 1, 0, 1, 0)
        void* rax_5 = *(arg1 + 0x50)
        uint64_t rcx_8 = zx.q(*(rax_5 + 0x20))
        int32_t rax_6 = *(rax_5 + 0x10)
        *(arg1 + 0x558) = rax_6
        int32_t rax_7 = rax_6 * 2
        *(arg1 + 0x564) = rax_7
        *(arg1 + 0x55c) = rcx_8.d
        *(arg1 + 0x560) = 0
        int32_t i_2 = rcx_8.d + rax_7 + (rcx_8 << 1).d
        int64_t i_1 = sx.q(i_2)
        int64_t rax_9 = 0x18 * i_1
        *(arg1 + 0x550) = i_2
        
        if (mulu.dp.q(0x18, i_1) u>> 0x40 != zx.o(0))
            rax_9 = -1
        
        int64_t rax_10 = rax_9 + 8
        
        if (rax_9 u>= -8)
            rax_10 = -1
        
        int64_t* rax_11 = j_sub_140a82f30(rax_10)
        void* rcx_10
        
        if (rax_11 == 0)
            rcx_10 = nullptr
        else
            *rax_11 = i_1
            rcx_10 = &rax_11[1]
            void* rax_12 = rcx_10
            
            if (i_1 != 0)
                int64_t i
                
                do
                    __builtin_memset(rax_12, 0, 0x16)
                    rax_12 += 0x18
                    i = i_1
                    i_1 -= 1
                while (i != 1)
        
        *(arg1 + 0x548) = rcx_10
    
    if (*(arg1 + 0x4e8) != 0)
        int64_t rsi_1 = 0
        int64_t* rbx_1 = *(arg1 + 0x4e0)
        int32_t var_160_1 = 0
        int64_t r14_1 = sx.q(*(arg1 + 0x4e8)) << 3
        void* var_168 = arg1
        int32_t var_15c_1 = 2
        uint64_t r14_2 = r14_1 u>> 3
        
        if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x4e8))])
            r14_2 = 0
        
        if (r14_2 != 0)
            int32_t var_150_1 = 0
            int32_t var_14c_1 = 1
            
            do
                int64_t var_158 = *rbx_1
                sub_140b9a370(arg1, &var_158, &var_168)
                rsi_1 += 1
                rbx_1 = &rbx_1[1]
            while (rsi_1 != r14_2)
        
        *(arg1 + 0x4e8) = 0
        
        if (*(arg1 + 0x4ec) != 0)
            sub_1405c5570(arg1 + 0x4e0, 0)
    
    int32_t rsi_2 = *(arg1 + 0x4f0)
    zmm8 = 0x4170000000000000
    double zmm2
    
    if (rsi_2 s>= *(*(arg1 + 0x50) + 0x10))
    label_140ba4351:
        int32_t rbx_5 = *(arg1 + 0x4f4)
        *(arg1 + 0xe0) = u"ExportAddNode"
        
        if (rbx_5 s>= *(*(arg1 + 0x50) + 0x20))
        label_140ba44f1:
            int64_t rcx_24 = *(arg1 + 0x1d8)
            *(arg1 + 0x238) = 2
            sub_140bb3c40(rcx_24, arg1)
        label_140ba4518:
            int64_t* rcx_26 = *(arg1 + 0x1d8) + 0x340
            void* var_148 = arg1
            int64_t var_140_1 = 0
            sub_140bb6ac0(rcx_26, &var_148)
            
            if (*(arg1 + 0xcb) != 0)
                int64_t var_1a8 = 0
                int32_t var_1a0_1 = 0
                sub_140ba9440(arg1 + 0x500, &var_1a8, arg1)
                int64_t rbx_6 = var_1a8
                
                if (rbx_6 != (sx.q(var_1a0_1) << 4) + rbx_6)
                    sub_140bb67c0(arg1)
                
                *(arg1 + 0x4e8) = 0
                
                if (*(arg1 + 0x4ec) != 0)
                    sub_1405c5570(arg1 + 0x4e0, 0)
                
                if (rbx_6 != 0)
                    sub_140a74f90(rbx_6)
                
                void* rbx_7 = *(arg1 + 0x1d8)
                *(arg1 + 0x238) = 9
                int64_t rsi_4 = sx.q(*(rbx_7 + 0x210))
                int32_t rax_35 = (rsi_4 + 1).d
                *(rbx_7 + 0x210) = rax_35
                
                if (rax_35 s> *(rbx_7 + 0x214))
                    sub_1405a4d70(rbx_7 + 0x208)
                
                *(*(rbx_7 + 0x208) + (rsi_4 << 3)) = arg1
        else
            while (true)
                int32_t rsi_3 = rbx_5 + 1
                void var_b0
                sub_140b9a940(arg1, &var_b0, 0, rsi_3, 0, 0)
                void var_a0
                sub_140b9a940(arg1, &var_a0, 2, rsi_3, 0, 1)
                void var_90
                sub_140b9a940(arg1, &var_90, 1, rsi_3, 0, 1)
                *(arg1 + 0x4f4) = rsi_3
                
                if (rbx_5 == rbx_5 s/ 0x1e * 0x1e)
                    void* rcx_21 = *(arg1 + 0x1d8)
                    bool z_3
                    
                    if (0 == *(rcx_21 + 0x84))
                        *(rcx_21 + 0x84) = 0
                        z_3 = true
                    else
                        *(rcx_21 + 0x84)
                        z_3 = false
                    
                    if (not(z_3))
                    label_140ba4694:
                        int64_t rcx_35 = *(arg1 + 0x1d8)
                        int32_t rax_40 = *(arg1 + 0x23c)
                        double var_178 = *(arg1 + 0x14)
                        int32_t var_170_1 = rax_40
                        sub_140bb38c0(rcx_35, &var_178)
                        break
                    
                    arg2 = *(arg1 + 0xc4)
                    zmm7 = zx.o(*(arg1 + 0xd0))
                    bool rax_29
                    
                    if (*(arg1 + 0xc8) != 0)
                        int64_t performanceCount_1
                        QueryPerformanceCounter(&performanceCount_1)
                        double zmm1_2 = float.d(performanceCount_1)
                        double zmm0_3 = _mm_cvtps_pd(arg2.q)
                        zmm1_2 = zmm1_2 f* data_143d796f8 f+ zmm8.q
                        zmm2 = zmm1_2 f- zmm7.q
                        rax_29 = zmm2 > zmm0_3
                        
                        if (rax_29 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm7.q)
                                && not(zmm2 <= _mm_cvtps_pd(data_1439a9644)))
                            arg2.d = arg2.d f* data_1439a9640
                            
                            if (not(zmm2 <= _mm_cvtps_pd(arg2.q)))
                                data_1439a9888 = zmm7.q
                        
                        data_1439a9890 = zmm1_2
                    
                    if (*(arg1 + 0xc8) != 0 && rax_29 != 0)
                        goto label_140ba4694
                    
                    void* rcx_23 = data_143e1adf0
                    bool z_4
                    
                    if (0 == *(rcx_23 + 8))
                        *(rcx_23 + 8) = 0
                        z_4 = true
                    else
                        *(rcx_23 + 8)
                        z_4 = false
                    
                    rcx_23.b = not(z_4)
                    
                    if (rcx_23.b != 0)
                        goto label_140ba4694
                
                rbx_5 = rsi_3
                
                if (rsi_3 s>= *(*(arg1 + 0x50) + 0x20))
                    goto label_140ba44f1
    else
        while (true)
            int32_t rbx_3 = not.d(rsi_2)
            void var_d0
            sub_140b9a940(arg1, &var_d0, 0, rbx_3, 0, 0)
            void var_c0
            sub_140b9a940(arg1, &var_c0, 1, rbx_3, 0, 1)
            int32_t rbx_4 = rsi_2 + 1
            *(arg1 + 0x4f0) = rbx_4
            
            if (rsi_2 == rsi_2 s/ 0x32 * 0x32)
                void* rcx_15 = *(arg1 + 0x1d8)
                bool z_1
                
                if (0 == *(rcx_15 + 0x84))
                    *(rcx_15 + 0x84) = 0
                    z_1 = true
                else
                    *(rcx_15 + 0x84)
                    z_1 = false
                
                if (not(z_1))
                label_140ba465b:
                    int64_t rcx_34 = *(arg1 + 0x1d8)
                    int32_t rax_38 = *(arg1 + 0x23c)
                    double var_188 = *(arg1 + 0x14)
                    int32_t var_180_1 = rax_38
                    sub_140bb38c0(rcx_34, &var_188)
                    break
                
                arg2 = *(arg1 + 0xc4)
                zmm7 = zx.o(*(arg1 + 0xd0))
                bool rax_21
                
                if (*(arg1 + 0xc8) != 0)
                    int64_t performanceCount
                    QueryPerformanceCounter(&performanceCount)
                    double zmm1_1 = float.d(performanceCount)
                    double zmm0_2 = _mm_cvtps_pd(arg2.q)
                    zmm1_1 = zmm1_1 f* data_143d796f8 f+ zmm8.q
                    zmm2 = zmm1_1 f- zmm7.q
                    rax_21 = zmm2 > zmm0_2
                    
                    if (rax_21 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm7.q)
                            && not(zmm2 <= _mm_cvtps_pd(data_1439a9644)))
                        arg2.d = arg2.d f* data_1439a9640
                        
                        if (not(zmm2 <= _mm_cvtps_pd(arg2.q)))
                            data_1439a9888 = zmm7.q
                    
                    data_1439a9890 = zmm1_1
                
                if (*(arg1 + 0xc8) != 0 && rax_21 != 0)
                    goto label_140ba465b
                
                void* rcx_17 = data_143e1adf0
                bool z_2
                
                if (0 == *(rcx_17 + 8))
                    *(rcx_17 + 8) = 0
                    z_2 = true
                else
                    *(rcx_17 + 8)
                    z_2 = false
                
                rcx_17.b = not(z_2)
                
                if (rcx_17.b != 0)
                    goto label_140ba465b
            
            rsi_2 = rbx_4
            
            if (rbx_4 s>= *(*(arg1 + 0x50) + 0x10))
                goto label_140ba4351
    int512_t zmm6
    zmm6.o = var_58_1
else
    int64_t rcx_3 = *(arg1 + 0x1d8)
    int32_t rax_3 = *(arg1 + 0x23c)
    int64_t var_198 = *(arg1 + 0x14)
    int32_t var_190_1 = rax_3
    sub_140bb38c0(rcx_3, &var_198)

sub_140ba2960(arg1)
*(arg1 + 0xd8) = 0
char arg_10
char* var_120 = &arg_10
*(arg1 + 0xe0) = 0
arg_10 = 0
void*** (* var_128)() = sub_140884c50
void* result = sub_140a756e0(&var_128, &data_14397f5f0)
*(result + 0x40) = r12
return result
