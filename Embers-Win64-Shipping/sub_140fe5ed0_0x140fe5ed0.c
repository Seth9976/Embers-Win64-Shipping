// 函数: sub_140fe5ed0
// 地址: 0x140fe5ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140af3aa0() != 0)
    (*(*arg1 + 0x18))(arg1)

uint64_t result = zx.q(data_1439c7a38)

if (result.d != 1)
label_140fe5f49:
    
    if (data_143f0f161 == 0 || result.d != 1)
        data_143f5b2a4 = 0
    else
        int64_t rax_6
        rax_6, arg5 = sub_140fe92d0(&arg1[6], 0)
        arg3 = 0x43f0000000000000
        arg4 = zx.o(0)
        arg4[0] = float.d(rax_6)
        
        if (rax_6 s< 0)
            arg4[0] = arg4[0] f+ arg3
        
        int64_t rax_7 = data_143f0f168
        arg2 = zx.o(0)
        arg2[0] = float.d(rax_7)
        
        if (rax_7 s< 0)
            arg2[0] = arg2[0] f+ arg3
        
        arg4[0] = arg4[0] / arg2[0]
        arg4[0] = arg4[0] f/ data_143d796f8
        arg4 = _mm_cvtpd_ps(arg4)
        result = zx.q(int.d(arg4[0].d))
        data_143f5b2a4 = result.d
else
    if (data_143f0f161 != 0)
        if (arg1[0xd].b != 0)
            int64_t* rcx_1 = *(arg1[8] + 0x150)
            int64_t r8_1 = *rcx_1
            (*(r8_1 + 0xe0))(rcx_1, *(arg1[0xc] + (sx.q(*(arg1 + 0x4c)) << 3)), r8_1)
            int32_t rcx_2 = arg1[9].d
            int32_t rax_5 = arg1[0xa].d + 1
            arg1[0xd].b = 0
            
            if (rax_5 s<= rcx_2)
                rcx_2 = rax_5
            
            arg1[0xa].d = rcx_2
            result = zx.q(data_1439c7a38)
        
        goto label_140fe5f49
    
    data_143f5b2a4 = 0

int64_t* rcx_4 = arg1[3]

if (rcx_4 != 0)
    result = (*(*rcx_4 + 0x10))(rcx_4, arg2, arg3)

if (*(arg1 + 0xa) == 0)
    if (*(arg1 + 0xb) != 0)
        double var_28_1[0x2] = arg5
        int64_t performanceCount
        result = QueryPerformanceCounter(&performanceCount)
        arg5 = zx.o(0)
        arg5[0] = float.d(performanceCount)
        arg5[0] = arg5[0] f* data_143d796f8
        arg5[0] = arg5[0] + 16777216.0
        
        if (arg1[1].b != 0)
            int128_t zmm0
            zmm0, result = sub_141972ae0()
            arg3 = data_1439b49e0
            arg5[0] = arg5[0] f- arg3
            
            if (_mm_cvtpd_ps(arg5)[0].d f<= zmm0.d)
            label_140fe6158:
                
                if (arg1[3] != 0)
                    if (arg1[0x10].d s>= 4)
                        int64_t* rcx_16 = arg1[0xf]
                        int64_t* r8_2 = *rcx_16
                        
                        if (r8_2 != 0)
                            (**r8_2)(r8_2, 1)
                            rcx_16 = arg1[0xf]
                        
                        int32_t rax_13 = arg1[0x10].d
                        
                        if (rax_13 != 1)
                            memmove(rcx_16, &rcx_16[1], (rax_13 - 1) << 3)
                            rax_13 = arg1[0x10].d
                        
                        arg1[0x10].d = rax_13 - 1
                        sub_1405c53d0(&arg1[0xf])
                    
                    int64_t rsi_1 = sx.q(arg1[0x10].d)
                    int64_t rbp_1 = arg1[3]
                    int32_t rax_15 = (rsi_1 + 1).d
                    arg1[0x10].d = rax_15
                    
                    if (rax_15 s> *(arg1 + 0x84))
                        sub_140638870(&arg1[0xf])
                    
                    result = arg1[0xf]
                    *(result + (rsi_1 << 3)) = rbp_1
                    arg1[3] = 0
            else
                zmm0 = zx.o(0)
                
                if (arg3 f<= 0.0)
                    goto label_140fe6158
                
                int64_t* rcx_10 = arg1[3]
                
                if (rcx_10 == 0)
                    goto label_140fe6158
                
                int32_t i = 0
                
                if (arg1[0x10].d s> 0)
                    int64_t rbx_3 = 0
                    
                    do
                        zmm0 = sub_14196aaf0(*(arg1[0xf] + rbx_3), zmm0)
                        i += 1
                        rbx_3 += 8
                    while (i s< arg1[0x10].d)
                    
                    rcx_10 = arg1[3]
                
                arg5 = sub_14196aaf0(rcx_10, zmm0)
                void* rbx_4 = *(data_143f5b298 + 0x788)
                
                if (rbx_4 != 0)
                    int64_t rbx_5 = *(rbx_4 + 0x38)
                    sub_140b19e60()
                    (*(rbx_5 + 8))(*(data_143f5b298 + 0x788) + 0x38, 0, SCREENSHOT", 
                        &data_1439a8bd0, var_28_1)
                
                arg1[2].d = 5
                result = sub_140e0f7b0(&arg1[0xf], 0)
        
        data_1439b49e0 = arg5.q
else if (arg1[1].b != 0)
    sub_140b00890(*(arg1 + 0xd))
    sub_14196aaf0(arg1[3], arg4)
    data_143f0f1f4 = 0
    *(arg1 + 0xa) = 0
    result = sub_1419888e0()
    
    if (result.b != 0)
        result = data_143f5b298
        void* rbx_1 = *(result + 0x788)
        
        if (rbx_1 != 0)
            int64_t rbx_2 = *(rbx_1 + 0x38)
            sub_140b19e60()
            result =
                (*(rbx_2 + 8))(*(data_143f5b298 + 0x788) + 0x38, 0, SCREENSHOT", &data_1439a8bd0)

int64_t* rcx_20 = arg1[3]
arg1[1].w = 0

if (rcx_20 != 0)
    result = (**rcx_20)(rcx_20, 1)

arg1[3] = 0
return result
