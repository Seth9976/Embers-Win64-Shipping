// 函数: sub_14190ce50
// 地址: 0x14190ce50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x1c].d -= 1

if (arg1[0x1c].d != 1)
    return 

if (sub_140af3aa0() != 0)
    (*(*arg1 + 0x18))(arg1)

int32_t rax_3 = data_1439c7a38
uint64_t rax
void* rbx_1

if (rax_3 != 1)
    rbx_1 = &arg1[6]
label_14190cea9:
    
    if (data_143f0f161 == 0 || rax_3 != 1)
        rax = zx.q(arg1[0x1d].d)
    else
        int64_t rax_4
        rax_4, arg5 = sub_14193da00(rbx_1, 0)
        arg3 = 1.8446744073709552e+19
        arg4 = zx.o(0)
        arg4[0] = float.d(rax_4)
        
        if (rax_4 s< 0)
            arg4[0] = arg4[0] + arg3
        
        int64_t rax_5 = data_143f0f168
        arg2 = float.d(rax_5)
        
        if (rax_5 s< 0)
            arg2 = arg2 f+ arg3
        
        arg4[0] = arg4[0] f/ arg2
        arg4[0] = arg4[0] f/ data_143d796f8
        arg4 = _mm_cvtpd_ps(arg4)
        rax = zx.q(int.d(arg4[0].d))
else
    if (data_143f0f161 != 0)
        rbx_1 = &arg1[6]
        arg4 = sub_141939c20(rbx_1)
        rax_3 = data_1439c7a38
        goto label_14190cea9
    
    rax = zx.q(arg1[0x1d].d)
data_143f5b2a4 = rax.d
int64_t* rcx_3 = arg1[3]

if (rcx_3 != 0)
    (*(*rcx_3 + 0x10))(rcx_3, arg2, arg3)

if (*(arg1 + 0xa) == 0)
    if (*(arg1 + 0xb) != 0)
        double var_18_1[0x2] = arg5
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        bool cond:1_1 = arg1[1].b == 0
        arg5 = zx.o(0)
        arg5[0] = float.d(performanceCount)
        arg5[0] = arg5[0] f* data_143d796f8
        arg5[0] = arg5[0] + 16777216.0
        
        if (not(cond:1_1))
            arg2 = data_1439c7500
            arg5[0] = arg5[0] f- arg2
            
            if (_mm_cvtpd_ps(arg5)[0].d f<= 0.100000001f)
            label_14190d0be:
                
                if (arg1[3] != 0)
                    if (arg1[0x1f].d s>= 4)
                        int64_t* rcx_15 = arg1[0x1e]
                        int64_t* r8_1 = *rcx_15
                        
                        if (r8_1 != 0)
                            (**r8_1)(r8_1, 1)
                            rcx_15 = arg1[0x1e]
                        
                        int32_t rax_11 = arg1[0x1f].d
                        
                        if (rax_11 != 1)
                            memmove(rcx_15, &rcx_15[1], (rax_11 - 1) << 3)
                            rax_11 = arg1[0x1f].d
                        
                        arg1[0x1f].d = rax_11 - 1
                        sub_1405c53d0(&arg1[0x1e])
                    
                    int64_t rsi_1 = sx.q(arg1[0x1f].d)
                    int64_t rbp_1 = arg1[3]
                    int32_t rax_13 = (rsi_1 + 1).d
                    arg1[0x1f].d = rax_13
                    
                    if (rax_13 s> *(arg1 + 0xfc))
                        sub_140638870(&arg1[0x1e])
                    
                    *(arg1[0x1e] + (rsi_1 << 3)) = rbp_1
                    arg1[3] = 0
            else
                arg4 = zx.o(0)
                
                if (arg2 f<= 0.0)
                    goto label_14190d0be
                
                int64_t* rcx_9 = arg1[3]
                
                if (rcx_9 == 0)
                    goto label_14190d0be
                
                int32_t i = 0
                
                if (arg1[0x1f].d s> 0)
                    int64_t rbx_4 = 0
                    
                    do
                        arg4 = sub_14196aaf0(*(arg1[0x1e] + rbx_4), arg4)
                        i += 1
                        rbx_4 += 8
                    while (i s< arg1[0x1f].d)
                    
                    rcx_9 = arg1[3]
                
                arg5 = sub_14196aaf0(rcx_9, arg4)
                void* rbx_5 = *(data_143f5b298 + 0x788)
                
                if (rbx_5 != 0)
                    int64_t rbx_6 = *(rbx_5 + 0x38)
                    sub_140b19e60()
                    (*(rbx_6 + 8))(*(data_143f5b298 + 0x788) + 0x38, 0, SCREENSHOT", 
                        &data_1439a8bd0, var_18_1)
                
                arg1[2].d = 5
                sub_140e0f7b0(&arg1[0x1e], 0)
        
        data_1439c7500 = arg5.q
else if (arg1[1].b != 0)
    sub_140b00890(*(arg1 + 0xd))
    sub_14196aaf0(arg1[3], arg4)
    data_143effa98(0x92e0)
    data_143f0f1f4 = 0
    *(arg1 + 0xa) = 0
    
    if (sub_1419888e0().b != 0)
        void* rbx_2 = *(data_143f5b298 + 0x788)
        
        if (rbx_2 != 0)
            int64_t rbx_3 = *(rbx_2 + 0x38)
            sub_140b19e60()
            (*(rbx_3 + 8))(*(data_143f5b298 + 0x788) + 0x38, 0, u"SCREENSHOT", &data_1439a8bd0)

int64_t* rcx_19 = arg1[3]
arg1[1].b = 0

if (rcx_19 != 0)
    (**rcx_19)(rcx_19, 1)

arg1[3] = 0
