// 函数: sub_1429dfe00
// 地址: 0x1429dfe00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x3760) = 0
*(arg1 + 0x3770) = 0
InitializeCriticalSectionEx(arg1 + 0x3798, 0, 0)
int32_t rcx_1 = *(arg1 + 0x3764)
uint64_t result = zx.q(*(arg1 + 0x34e8))

if (rcx_1 s> 8)
    rcx_1 = 8

if (rcx_1 s> result.d)
    rcx_1 = result.d

if (rcx_1 s> 1)
    *(arg1 + 0x3760) = 1
    *(arg1 + 0x376c) = rcx_1 - 1
    void* rax_1
    int64_t r9_1
    rax_1, r9_1 = sub_1429dddd0(8, zx.q(rcx_1 - 1))
    *(arg1 + 0x3800) = rax_1
    
    if (rax_1 == 0)
        sub_1429da010(arg1 + 0x12c0, 2, "Failed to allocate (pbi->h_decoding_thread)", r9_1)
    
    void* rax_2
    int64_t r9_2
    rax_2, r9_2 = sub_1429dddd0(8, zx.q(*(arg1 + 0x376c)))
    *(arg1 + 0x3808) = rax_2
    
    if (rax_2 == 0)
        sub_1429da010(arg1 + 0x12c0, (rax_2 + 2).d, 
            "Failed to allocate (pbi->h_event_start_decoding)", r9_2)
    
    void* rax_4
    int64_t r9_3
    rax_4, r9_3 = sub_1429ddec0(0x20, zx.q(*(arg1 + 0x376c)) * 0x12a0)
    *(arg1 + 0x37f0) = rax_4
    
    if (rax_4 == 0)
        sub_1429da010(arg1 + 0x12c0, (rax_4 + 2).d, "Failed to allocate (pbi->mb_row_di)", r9_3)
    
    memset(*(arg1 + 0x37f0), 0, zx.q(*(arg1 + 0x376c)) * 0x12a0)
    void* rax_6
    int64_t r9_4
    rax_6, r9_4 = sub_1429dddd0(0x18, zx.q(*(arg1 + 0x376c)))
    *(arg1 + 0x37f8) = rax_6
    
    if (rax_6 == 0)
        sub_1429da010(arg1 + 0x12c0, (rax_6 + 2).d, "Failed to allocate (pbi->de_thread_data)", 
            r9_4)
    
    int64_t r9_5
    result, r9_5 = CreateSemaphoreW(nullptr, 0, 0x8000, nullptr)
    *(arg1 + 0x3810) = result
    
    if (result == 0)
        result, r9_5 =
            sub_1429da010(arg1 + 0x12c0, (result + 2).d, "Failed to initialize semaphore", r9_5)
    
    int32_t i = 0
    
    if (*(arg1 + 0x376c) u> 0)
        do
            result, r9_5 = CreateSemaphoreW(nullptr, 0, 0x8000, nullptr)
            uint64_t i_1 = zx.q(i)
            uint64_t* r15_1 = i_1 << 3
            *(r15_1 + *(arg1 + 0x3808)) = result
            
            if (result == 0)
                break
            
            int64_t rdi_1 = i_1 * 0x12a0
            sub_1429dd880(*(arg1 + 0x37f0) + rdi_1)
            uint64_t rdx_9 = i_1 * 0x18
            *(rdx_9 + *(arg1 + 0x37f8)) = i
            *(rdx_9 + *(arg1 + 0x37f8) + 8) = arg1
            *(rdx_9 + *(arg1 + 0x37f8) + 0x10) = *(arg1 + 0x37f0) + rdi_1
            int64_t* rdi_2 = *(arg1 + 0x3800)
            HANDLE hThread
            hThread, r9_5 =
                _beginthreadex(nullptr, 0, sub_1429dfd40, *(arg1 + 0x37f8) + rdx_9, 0, nullptr)
            *(rdi_2 + r15_1) = hThread
            
            if (hThread == 0)
                result = *(arg1 + 0x3808)
                HANDLE hObject = *(r15_1 + result)
                
                if (hObject != 0)
                    result, r9_5 = CloseHandle(hObject)
                
                break
            
            result, r9_5 = SetThreadPriority(hThread, THREAD_PRIORITY_ABOVE_NORMAL)
            i += 1
        while (i u< *(arg1 + 0x376c))
    
    *(arg1 + 0x3770) = i
    
    if (i != *(arg1 + 0x376c))
        if (i == 0)
            HANDLE hObject_1 = *(arg1 + 0x3810)
            
            if (hObject_1 != 0)
                r9_5 = CloseHandle(hObject_1)
        
        return sub_1429da010(arg1 + 0x12c0, 2, "Failed to create threads", r9_5)

return result
