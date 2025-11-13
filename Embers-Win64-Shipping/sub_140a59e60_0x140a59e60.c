// 函数: sub_140a59e60
// 地址: 0x140a59e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143db7140 == 0)
    return arg1

void*** rax = malloc(0x150)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    rdi[1] = arg1
    *rdi = &data_142e60f90
    rdi[2].b = 0
    InitializeCriticalSection(&rdi[3])
    SetCriticalSectionSpinCount(&rdi[3], 0xfa0)
    InitializeSRWLock(&rdi[9])
    void* rcx_3 = &rdi[0xc]
    rdi[0xa] = 0
    rdi[0xb] = 0
    *(rcx_3 + 0x10) = 0
    *(rcx_3 + 0x18) = 0
    *(rcx_3 + 0x1c) = 0x80
    void* rax_1 = *(rcx_3 + 0x10)
    
    if (rax_1 != 0)
        rcx_3 = rax_1
    
    *rcx_3 = 0
    *(rcx_3 + 8) = 0
    void* rcx_4 = &rdi[0x18]
    rdi[0x10].d = 0xffffffff
    *(rdi + 0x84) = 0
    rdi[0x12] = 0
    rdi[0x13].d = 0
    __builtin_memset(&rdi[0x14], 0, 0x20)
    *(rcx_4 + 0x10) = 0
    *(rcx_4 + 0x18) = 0
    *(rcx_4 + 0x1c) = 0x80
    void* rax_2 = *(rcx_4 + 0x10)
    
    if (rax_2 != 0)
        rcx_4 = rax_2
    
    *rcx_4 = 0
    *(rcx_4 + 8) = 0
    void* rcx_5 = &rdi[0x22]
    rdi[0x1c].d = 0xffffffff
    *(rdi + 0xe4) = 0
    rdi[0x1e] = 0
    rdi[0x1f].d = 0
    rdi[0x20] = 0
    rdi[0x21] = 0
    *(rcx_5 + 0x10) = 0
    *(rcx_5 + 0x18) = 0
    *(rcx_5 + 0x1c) = 0x80
    void* rax_3 = *(rcx_5 + 0x10)
    
    if (rax_3 != 0)
        rcx_5 = rax_3
    
    *rcx_5 = 0
    *(rcx_5 + 8) = 0
    rdi[0x26].d = 0xffffffff
    *(rdi + 0x134) = 0
    rdi[0x28] = 0
    rdi[0x29].d = 0
    uint32_t dwTlsIndex = TlsAlloc()
    rdi[8].d = dwTlsIndex
    TlsSetValue(dwTlsIndex, nullptr)

data_143db5340 = rdi
sub_140a594a0(rdi)
return data_143db5340
