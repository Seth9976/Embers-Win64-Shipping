// 函数: sub_1418e3ae0
// 地址: 0x1418e3ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
uint64_t result = __security_cookie ^ &var_98
uint64_t result_1 = result

if (arg1[0x5b].b != 0)
    EnterCriticalSection(&arg1[0x46])
    void* rdx = *(arg2 + 0x4a0)
    
    if (rdx == 0)
        bool cond:1_1 = *(arg2 + 0x50) != 0
        result = zx.q(data_14399fa54)
        *(arg2 + 0x4a8) = result.d
        
        if (not(cond:1_1))
            int64_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            SRWLOCK* SRWLock = *arg1 + 0x470
            int64_t var_70
            __builtin_memset(&var_70, 0, 0x28)
            AcquireSRWLockShared(SRWLock)
            int64_t* rsi_1 = &var_70
            
            for (int32_t i = 0; i s< 5; )
                int64_t r11_1 = *(arg2 - &var_70 + rsi_1 + 0x20)
                
                if (r11_1 != 0)
                    int64_t* r10_1
                    
                    if (i == 0)
                        r10_1 = 8
                    else if (i == 1)
                        r10_1 = 0xf8
                    else if (i == 2)
                        r10_1 = 0x148
                    else if (i == 3)
                        r10_1 = 0x58
                    else if (i == 4)
                        r10_1 = 0xa8
                    else
                        r10_1 = 0x328
                    
                    void* const rcx_12
                    
                    if (*(r10_1 + SRWLock + 8) == *(r10_1 + SRWLock + 0x34))
                    label_1418e3cb0:
                        rcx_12 = nullptr
                    else
                        void* r9_2 = &SRWLock[7] + r10_1
                        void* r8_1 = *(r9_2 + 8)
                        
                        if (r8_1 != 0)
                            r9_2 = r8_1
                        
                        int32_t rax_6 = *(r9_2 + ((sx.q((r11_1 u>> 0x20).d * 0x17 + r11_1.d)
                            & (sx.q(*(r10_1 + SRWLock + 0x48)) - 1)) << 2))
                        
                        if (rax_6 == 0xffffffff)
                        label_1418e3cb0_1:
                            rcx_12 = nullptr
                        else
                            int64_t r8_2 = *(r10_1 + SRWLock)
                            
                            while (true)
                                int64_t rdx_4 = sx.q(rax_6) * 3
                                rcx_12 = r8_2 + (rdx_4 << 3)
                                
                                if (*(r8_2 + (rdx_4 << 3)) == r11_1)
                                    break
                                
                                rax_6 = *(rcx_12 + 0x10)
                                
                                if (rax_6 == 0xffffffff)
                                    goto label_1418e3cb0_2
                            
                            if (rax_6 == 0xffffffff)
                            label_1418e3cb0_2:
                                rcx_12 = nullptr
                    
                    void* rax_7 = rcx_12 + 8
                    
                    if (rcx_12 == 0)
                        rax_7 = nullptr
                    
                    if (rax_7 != 0)
                        *rsi_1 = *rax_7
                
                i += 1
                rsi_1 = &rsi_1[1]
            
            ReleaseSRWLockShared(SRWLock)
            sub_1418dc850(arg1, arg2, &var_70, arg2 + 0x50)
            result = QueryPerformanceCounter(&performanceCount)
            
            if (arg1[0x5b].b != 0)
                sub_1418e3d70(arg1, *(arg2 + 0x4ac))
                result = sub_1418e37c0(arg1, arg2)
    else
        if (rdx != arg1[0x4c])
            sub_1418ec310(&arg1[0x4b], rdx, 0)
            sub_1418d9780(&arg1[0x4b], *(arg2 + 0x4a0))
        
        result = zx.q(data_14399fa54)
        *(arg2 + 0x4a8) = result.d
    
    if (arg1 != -0x230)
        result = LeaveCriticalSection(&arg1[0x46])

__security_check_cookie(result_1 ^ &var_98)
return result
