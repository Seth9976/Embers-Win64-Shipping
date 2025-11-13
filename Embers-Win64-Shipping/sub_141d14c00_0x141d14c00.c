// 函数: sub_141d14c00
// 地址: 0x141d14c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)

while (true)
    void* rdi_1 = data_143f36250
    void* lpCriticalSection = rdi_1 + 8
    EnterCriticalSection(lpCriticalSection)
    int32_t i = *(rdi_1 + 0xb0)
    int16_t rdx_1 = 0
    
    if (i s> 0)
        do
            int64_t rax_2 = 5
            int32_t* rcx_4 = zx.q(rdx_1) * 0x98 + 0x74 + *(rdi_1 + 0xa8)
            
            while (true)
                if (*rcx_4 != 0)
                label_141d14d06:
                    rdi_1.b = 0
                    goto label_141d14ce6
                
                if (rax_2 == 0)
                    break
                
                rax_2 -= 1
                rcx_4 -= 0xc
            
            rdx_1 += 1
        while (zx.d(rdx_1) s< i)
    
    int16_t rdx_2 = 0
    
    if (i s> 0)
        do
            int64_t rax_5 = 5
            int32_t* rcx_7 = zx.q(rdx_2) * 0x98 + 0x78 + *(rdi_1 + 0xa8)
            
            while (true)
                if (*rcx_7 != 0)
                    goto label_141d14d06
                
                if (rax_5 == 0)
                    break
                
                rax_5 -= 1
                rcx_7 -= 0xc
            
            rdx_2 += 1
        while (zx.d(rdx_2) s< i)
    
    rdi_1.b = 1
label_141d14ce6:
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)
    
    if (rdi_1.b != 0)
        break
    
    sub_140b732d0(0.00100000005f)

return QueryPerformanceCounter(&performanceCount)
