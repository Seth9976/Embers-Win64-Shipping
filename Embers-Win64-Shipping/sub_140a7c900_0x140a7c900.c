// 函数: sub_140a7c900
// 地址: 0x140a7c900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
TEB* gsbase

if (data_143db7b48 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db7b48)
    
    if (data_143db7b48 == 0xffffffff)
        atexit(sub_142cbd600)
        _Init_thread_footer(&data_143db7b48)

EnterCriticalSection(arg1)
void* __offset(_RTL_CRITICAL_SECTION, 0x28) r9 = &arg1[1]
void* rcx_4

if ((r9 - 0x28)->__offset(0x1830).d == (r9 - 0x28)->__offset(0x186c).d)
label_140a7c9c0:
    rcx_4 = nullptr
else
    void* rcx_1 = (r9 - 0x28)->__offset(0x1a70).q
    void* r8_2 = r9 + 0x1848
    
    if (rcx_1 != 0)
        r8_2 = rcx_1
    
    int32_t rax_3 = *(r8_2 + (((sx.q((r9 - 0x28)->__offset(0x1a78).d) - 1) & rbx) << 2))
    
    if (rax_3 == 0xffffffff)
    label_140a7c9c0_1:
        rcx_4 = nullptr
    else
        void* rcx_2 = (r9 - 0x28)->__offset(0x1828).q
        
        if (rcx_2 != 0)
            r9 = rcx_2
        
        while (true)
            int64_t rdx_3 = sx.q(rax_3) * 3
            rcx_4 = r9 + (rdx_3 << 3)
            
            if (*(r9 + (rdx_3 << 3)) == rbx.d)
                break
            
            rax_3 = *(rcx_4 + 0x10)
            
            if (rax_3 == 0xffffffff)
                goto label_140a7c9c0_2
        
        if (rax_3 == 0xffffffff)
        label_140a7c9c0_2:
            rcx_4 = nullptr

void* rbx_1 = rcx_4 + 8

if (rcx_4 == 0)
    rbx_1 = nullptr

int64_t* result

if (rbx_1 == 0)
    result = &data_143db7b38
else
    result = *rbx_1 + 8

if (arg1 != 0)
    LeaveCriticalSection(arg1)

return result
