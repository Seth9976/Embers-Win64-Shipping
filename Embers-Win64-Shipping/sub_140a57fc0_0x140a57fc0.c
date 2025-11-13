// 函数: sub_140a57fc0
// 地址: 0x140a57fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
int64_t result = QueryPerformanceCounter(&performanceCount)
uint32_t dwTlsIndex = data_143db71b8

if (dwTlsIndex != 0)
    result = TlsGetValue(dwTlsIndex)
    
    if (result != 0)
        EnterCriticalSection(arg1 + 0x888)
        QueryPerformanceCounter(&performanceCount)
        
        for (int32_t i = 0; i != 0x2d; i += 1)
            int64_t** rax_2 = (zx.q(i) << 5) + result
            int64_t* rdx_1 = *rax_2
            
            if (rdx_1 != 0)
                *rax_2 = nullptr
                rax_2[1].d = 0
                rdx_1[1] = 0
            
            int64_t* rcx_3 = rax_2[2]
            
            if (rcx_3 != 0)
                rax_2[2] = 0
                rax_2[3].d = 0
                rcx_3[1] = 0
            
            if (rdx_1 == 0)
                rdx_1 = rcx_3
            else
                rdx_1[1] = rcx_3
            
            if (rdx_1 != 0)
                sub_140a582b0(arg1, rdx_1, (&data_143db7150)[zx.q(0x2c - i)], i)
        
        result = QueryPerformanceCounter(&performanceCount)
        
        if (arg1 != -0x888)
            return LeaveCriticalSection(arg1 + 0x888)

return result
