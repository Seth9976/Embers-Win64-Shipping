// 函数: sub_1418bee70
// 地址: 0x1418bee70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = arg1 + 0x28
int128_t __saved_zmm6 = arg3
EnterCriticalSection(lpCriticalSection)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
arg3.q = float.d(performanceCount)
arg3.q = arg3.q f* data_143d796f8
arg3.q = arg3.q f+ 16777216.0
int64_t* result = EnterCriticalSection(arg2 + 0x18)
int64_t performanceCount_1 = *(arg2 + 0x40)
performanceCount = performanceCount_1

if (arg2 != -0x18)
    result = LeaveCriticalSection(arg2 + 0x18)
    performanceCount_1 = performanceCount

int32_t r12 = *(arg1 + 0x10)
int32_t r12_1 = r12 - 1
void* rbp = *(arg1 + 0x50)

if (r12 - 1 s>= 0)
    int64_t r13_1 = sx.q(r12_1) << 3
    int64_t r14_1 = r13_1
    int64_t arg_10 = r13_1
    int32_t temp1_1
    
    do
        result = *(arg1 + 8)
        void* rsi_1 = *(result + r13_1)
        
        if (rsi_1 != performanceCount_1 && *(rsi_1 + 0x2c) == 0
                && not(arg3.q f- *(rsi_1 + 0x48) f<= 0x4024000000000000))
            EnterCriticalSection(rbp + 0x3b8)
            int32_t i = 0
            
            if (*(rbp + 0x3e8) s> 0)
                int64_t rax_1 = 0
                
                do
                    int64_t r8_1 = *(rbp + 0x3e0)
                    
                    if (*(rax_1 + r8_1 + 0x10) == rsi_1)
                        *(rax_1 + r8_1 + 0x10) = 0
                    
                    i += 1
                    rax_1 += 0x38
                while (i s< *(rbp + 0x3e8))
            
            if (rbp != -0x3b8)
                LeaveCriticalSection(rbp + 0x3b8)
            
            data_143efb938(*(*(rsi_1 + 0x38) + 8), **(rsi_1 + 0xa8), 1, rsi_1 + 0x40, arg4, 
                __saved_zmm6)
            *(rsi_1 + 0x40) = 0
            *(rsi_1 + 0x2c) = 5
            int32_t rax_2 = *(arg1 + 0x10)
            int32_t rdx_4 = rax_2 - r12_1 - 1
            
            if (rdx_4 s>= 1)
                rdx_4 = 1
            
            if (rdx_4 != 0)
                int64_t rcx_8 = *(arg1 + 8)
                memcpy(rcx_8 + r14_1, rcx_8 + (sx.q(rax_2 - rdx_4) << 3), rdx_4 << 3)
                rax_2 = *(arg1 + 0x10)
            
            *(arg1 + 0x10) = rax_2 - 1
            int64_t r14_2 = sx.q(*(arg1 + 0x20))
            int32_t rax_6 = (r14_2 + 1).d
            *(arg1 + 0x20) = rax_6
            
            if (rax_6 s> *(arg1 + 0x24))
                sub_1405a4d70(arg1 + 0x18)
            
            result = *(arg1 + 0x18)
            performanceCount_1 = performanceCount
            result[r14_2] = rsi_1
            r14_1 = arg_10
        
        r14_1 -= 8
        r13_1 -= 8
        temp1_1 = r12_1
        r12_1 -= 1
        arg_10 = r14_1
    while (temp1_1 - 1 s>= 0)

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection) __tailcall
