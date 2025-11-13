// 函数: sub_14097ae70
// 地址: 0x14097ae70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t rbp = 0

if (*data_143ced0c8 != 0)
    int64_t* rcx = arg1[0xb]
    int64_t* rax_4 = (*(*rcx + 0x378))(rcx)
    EnterCriticalSection(&arg1[0x348])
    void* i = arg1[0x34d]
    
    for (void* r14_1 = i + (sx.q(arg1[0x34e].d) << 3); i != r14_1; i += 8)
        sub_140964bc0(arg1, i, rax_4)
    
    arg1[0x34e].d = 0
    
    if (*(arg1 + 0x1a74) s<= 0xffffffff)
        sub_1405c5570(&arg1[0x34d], 0)
    
    if (arg1 != -0x1a40)
        LeaveCriticalSection(&arg1[0x348])

char rax_6 = *(arg1 + 0x1acc)
int64_t result

if (rax_6 != 4)
    if (rax_6 == 5)
        sub_140955890(arg1)
        int64_t* rbx_6 = arg1[0xb]
        void* rax_19
        int64_t rax_20
        void* rdx_4
        
        if (rbx_6 != 0)
            rax_19 = sub_140985a80()
            rdx_4 = rbx_6[2]
            rax_20 = sx.q(*(rax_19 + 0x38))
        
        if (rbx_6 == 0 || rax_20.d s> *(rdx_4 + 0x38)
                || *(*(rdx_4 + 0x30) + (rax_20 << 3)) != rax_19 + 0x30)
            rbx_6 = nullptr
        
        sub_140978500(rbx_6, &arg1[0x355])
        *(arg1 + 0x1acc) = 6
    else if (rax_6 == 7)
        *(arg1 + 0x1acc) = 6
        *(arg1 + 0x134) = 1
        sub_14213f9e0(arg1)
    
    result = sub_142156480(arg1)
else
    result = sx.q(arg1[0x359].d)
    
    if (result.d s>= arg1[0x358].d)
        *(arg1 + 0x1acc) = 7
    else
        int64_t* rax_8 = (result << 4) + arg1[0x357]
        int64_t* rbx_2 = rax_8[1]
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        int64_t performanceCount
        result = &performanceCount
        
        if (&arg1[0x22] == &performanceCount)
        label_14097afa7:
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    result = (**rbx_2)(rbx_2)
                    int32_t temp1_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        result = (*(*rbx_2 + 8))(rbx_2, 1)
        else
            arg1[0x22] = *rax_8
            int64_t* rsi_1 = arg1[0x23]
            
            if (rbx_2 == rsi_1)
                goto label_14097afa7
            
            arg1[0x23] = rbx_2
            
            if (rsi_1 != 0)
                rsi_1[1].d -= 1
                
                if (rsi_1[1].d == 1)
                    result = (**rsi_1)(rsi_1)
                    int32_t temp3_1 = *(rsi_1 + 0xc)
                    *(rsi_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        result = (*(*rsi_1 + 8))(rsi_1, 1)
        
        arg1[0x346] = 0
        int64_t* rsi_2 = arg1[0x353]
        void* r14_4 = &rsi_2[sx.q(arg1[0x354].d) * 2]
        
        if (rsi_2 != r14_4)
            while (true)
                int64_t* rcx_10 = arg1[0x22]
                int64_t rbx_4 = *(*rsi_2 + 0x20)
                result = (*(*rcx_10 + 0xa0))(rcx_10, &performanceCount)
                
                if (rbx_4 == *result)
                    int64_t* rbx_5 = rsi_2[1]
                    performanceCount = *rsi_2
                    
                    if (rbx_5 != 0)
                        rbx_5[1].d += 1
                    
                    result = &performanceCount
                    
                    if (&performanceCount != &arg1[0x355])
                        performanceCount.o = *(arg1 + 0x1aa8)
                        *(arg1 + 0x1aa8) = performanceCount.o
                    
                    if (rbx_5 != 0)
                        rbx_5[1].d -= 1
                        
                        if (rbx_5[1].d == 1)
                            result = (**rbx_5)(rbx_5)
                            int32_t temp5_1 = *(rbx_5 + 0xc)
                            *(rbx_5 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                result = (*(*rbx_5 + 8))(rbx_5, 1)
                    
                    rbp = arg1[0x355]
                    arg1[0x346] = rbp
                    break
                
                rsi_2 = &rsi_2[2]
                
                if (rsi_2 == r14_4)
                    rbp = arg1[0x346]
                    break
        
        if (rbp == 0)
            *(arg1 + 0x1acc) = 7
        else
            void* rax_16 = arg1[0xb]
            *(arg1 + 0x1acc) = 3
            arg1[0x3a] = *(rax_16 + 0x218)
            QueryPerformanceCounter(&performanceCount)
            int128_t zmm0
            zmm0.q = float.d(performanceCount)
            zmm0.q = zmm0.q f* data_143d796f8
            zmm0.q = zmm0.q f+ 16777216.0
            arg1[0x3b] = zmm0.q
            QueryPerformanceCounter(&performanceCount)
            int64_t rax_17 = *arg1
            zmm0.q = float.d(performanceCount)
            zmm0.q = zmm0.q f* data_143d796f8
            zmm0.q = zmm0.q f+ 16777216.0
            arg1[0x3c] = zmm0.q
            (*(rax_17 + 0x298))(arg1)
            
            if (arg1[0x359].d != 0 && arg1[0x28] == 0)
                void* rax_18 = sub_1423de470(data_143f5b298, arg1[0xb])
                
                if (rax_18 != 0)
                    void* rcx_18 = *(rax_18 + 0x1a0)
                    
                    if (rcx_18 != 0)
                        sub_142220e10(rcx_18)
            
            arg1[0x359].d += 1
            result = sub_142156480(arg1)

__security_check_cookie(rax_1 ^ &var_68)
return result
