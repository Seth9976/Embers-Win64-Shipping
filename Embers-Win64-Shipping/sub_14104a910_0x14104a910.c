// 函数: sub_14104a910
// 地址: 0x14104a910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = arg5

if (sub_140af3aa0() != 0)
    (*(*arg1 + 0x18))(arg1)

sub_14101f290(&arg1[0x10])
double zmm1_1[0x2]

if (data_143f0f161 == 0)
    data_143f5b2a4 = 0
else
    void* rax_2
    rax_2, arg4 = sub_1410242b0(&arg1[0x10], 0)
    arg3 = 0x43f0000000000000
    double zmm0_1[0x2] = zx.o(0)
    zmm0_1[0] = float.d(rax_2)
    
    if (rax_2 s< 0)
        zmm0_1[0] = zmm0_1[0] f+ arg3
    
    int64_t rax_3 = data_143f0f168
    zmm1_1 = zx.o(0)
    zmm1_1[0] = float.d(rax_3)
    
    if (rax_3 s< 0)
        zmm1_1[0] = zmm1_1[0] f+ arg3
    
    zmm0_1[0] = zmm0_1[0] / zmm1_1[0]
    zmm0_1[0] = zmm0_1[0] f/ data_143d796f8
    data_143f5b2a4 = int.d(_mm_cvtpd_ps(zmm0_1)[0].d)

int64_t rax_5 = *arg2
arg5 = zx.o(0)
int64_t arg_8 = arg5.q
int64_t result = (*(rax_5 + 0x720))(arg2, &arg_8, arg3)

if (result.b != 0)
    result = int.q(fconvert.t(arg_8))
    data_143f5b2a4 = result.d

int64_t* rcx_4 = arg1[3]

if (rcx_4 != 0)
    result = (*(*rcx_4 + 0x10))(rcx_4)

if (*(arg1 + 0xa) == 0)
    if (*(arg1 + 0xb) != 0)
        double var_28_1[0x2] = arg4
        int64_t performanceCount
        result = QueryPerformanceCounter(&performanceCount)
        arg4 = zx.o(0)
        arg4[0] = float.d(performanceCount)
        arg4[0] = arg4[0] f* data_143d796f8
        arg4[0] = arg4[0] + 16777216.0
        
        if (arg1[1].b != 0)
            int128_t zmm0_3
            zmm0_3, result = sub_141972ae0()
            arg3 = data_1439b4af8
            arg4[0] = arg4[0] f- arg3
            zmm1_1 = _mm_cvtpd_ps(arg4)
            int64_t* rcx_11
            
            if (not(zmm1_1[0].d f<= zmm0_3.d) && not(arg3 f<= arg5.q))
                rcx_11 = arg1[3]
            
            if (not(zmm1_1[0].d f<= zmm0_3.d) && not(arg3 f<= arg5.q) && rcx_11 != 0)
                int32_t i = 0
                
                if (arg1[8].d s> 0)
                    int64_t* rbx_3 = nullptr
                    
                    do
                        zmm0_3 = sub_14196aaf0(*(rbx_3 + arg1[7]), zmm0_3)
                        i += 1
                        rbx_3 = &rbx_3[1]
                    while (i s< arg1[8].d)
                    
                    rcx_11 = arg1[3]
                
                arg4 = sub_14196aaf0(rcx_11, zmm0_3)
                void* rbx_4 = *(data_143f5b298 + 0x788)
                
                if (rbx_4 != 0)
                    int64_t rbx_5 = *(rbx_4 + 0x38)
                    sub_140b19e60()
                    (*(rbx_5 + 8))(*(data_143f5b298 + 0x788) + 0x38, 0, SCREENSHOT", 
                        &data_1439a8bd0, var_38, var_28_1)
                
                arg1[2].d = 5
                result = sub_140e0f7b0(&arg1[7], 0)
            else if (arg1[3] != 0)
                if (arg1[8].d s>= 4)
                    int64_t* rcx_17 = arg1[7]
                    int64_t* r8_1 = *rcx_17
                    
                    if (r8_1 != 0)
                        (**r8_1)(r8_1, 1)
                        rcx_17 = arg1[7]
                    
                    int32_t rax_11 = arg1[8].d
                    
                    if (rax_11 != 1)
                        memmove(rcx_17, &rcx_17[1], (rax_11 - 1) << 3)
                        rax_11 = arg1[8].d
                    
                    arg1[8].d = rax_11 - 1
                    sub_1405c53d0(&arg1[7])
                
                int64_t rsi_1 = sx.q(arg1[8].d)
                int64_t rbp_1 = arg1[3]
                int32_t rax_13 = (rsi_1 + 1).d
                arg1[8].d = rax_13
                
                if (rax_13 s> *(arg1 + 0x44))
                    sub_140638870(&arg1[7])
                
                result = arg1[7]
                *(result + (rsi_1 << 3)) = rbp_1
                arg1[3] = 0
        
        data_1439b4af8 = arg4.q
else if (arg1[1].b != 0)
    sub_140b00890(*(arg1 + 0xd))
    int128_t zmm0_2 = sub_141049e30(arg1)
    sub_14196aaf0(arg1[3], zmm0_2)
    data_143f0f1f4 = 0
    *(arg1 + 0xa) = 0
    result = sub_1419888e0()
    
    if (result.b != 0)
        result = data_143f5b298
        void* rbx_1 = *(result + 0x788)
        
        if (rbx_1 != 0)
            int64_t rbx_2 = *(rbx_1 + 0x38)
            sub_140b19e60()
            result = (*(rbx_2 + 8))(*(data_143f5b298 + 0x788) + 0x38, 0, SCREENSHOT", 
                &data_1439a8bd0, var_38)

int64_t* rcx_21 = arg1[3]
arg1[1].b = 0

if (rcx_21 != 0)
    result = (**rcx_21)(rcx_21, 1)

arg1[3] = 0
return result
