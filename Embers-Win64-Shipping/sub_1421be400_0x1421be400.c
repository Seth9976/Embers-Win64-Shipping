// 函数: sub_1421be400
// 地址: 0x1421be400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg3

if (arg2 != 0 && *(arg2 + 0x18) != 0 && rbx != 0)
    int32_t rsi_1 = 0
    *arg3 = 0
    int64_t arg_10
    char rax_2
    
    if ((arg4[1].b & 1) != 0)
        int64_t* rcx = *(arg2 + 0x18)
        rax_2 = (*(*rcx + 0x928))(rcx, *arg4, &arg_10)
    
    if ((arg4[1].b & 1) == 0 || rax_2 != 1)
        int32_t rdx_2 = arg4[3].d
        
        if (rdx_2 s> 0)
            if ((arg4[1].b & 8) != 0)
                void* rax_9 = *(arg2 + 0x18)
                uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rdx_2))
                int32_t rcx_4 = *(rax_9 + 0x614) * 0xbb38435 + 0x3619636b
                *(rax_9 + 0x614) = rcx_4
                arg_10.d = rcx_4 u>> 9 | 0x3f800000
                rsi_1 = int.d((arg_10.d - 1f) f* zmm0.d)
            
            int32_t rdx_3 = *(arg4[2] + (sx.q(rsi_1) << 2))
            *rbx = rdx_3
            rbx[1] = rdx_3
            return 0
        
        if (data_143dbb3b4 != 0)
            int64_t rax_11 = *(arg1 + 0x18)
            arg_10 = rax_11
            int32_t rcx_8
            rcx_8.b = sub_140b5b8a0(rax_11.d, 0) == 0
            int32_t performanceCount
            
            if ((arg_10:4.d != 0 | rcx_8.b) == 0)
                QueryPerformanceCounter(&performanceCount)
                *rbx = performanceCount
            else
                int16_t** rax_13 = sub_140b63b70(&arg_10, &performanceCount)
                int32_t rdx_5 = rax_13[1].d
                int16_t* r8_1
                
                if (rdx_5 == 0)
                    r8_1 = &data_142d40450
                else
                    r8_1 = *rax_13
                
                int32_t rcx_10 = rdx_5 - 1
                
                if (rdx_5 == 0)
                    rcx_10 = 0
                
                int32_t rax_14 = sub_1405969c0(rcx_10, r8_1)
                int64_t rcx_11 = performanceCount.q
                *rbx = rax_14
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                    rbx[1] = *rbx
                    return 0
            rbx[1] = *rbx
            return 0
    else
        if ((arg4[1].b & 2) == 0)
            int32_t rax_4 = int.d(arg_10.d * 2f + 0.5f) s>> 1
            *rbx = rax_4
            rbx[1] = rax_4
            return 0
        
        int32_t rax_6 = arg4[3].d
        
        if (rax_6 s> 0)
            int32_t rcx_1 = int.d(fconvert.t(arg_10.d))
            
            if (rax_6 - 1 s<= rcx_1)
                rcx_1 = rax_6 - 1
            
            int32_t rdx_1 = *(arg4[2] + (sx.q(rcx_1) << 2))
            *rbx = rdx_1
            rbx[1] = rdx_1
            return 0

return 0xffffffff
