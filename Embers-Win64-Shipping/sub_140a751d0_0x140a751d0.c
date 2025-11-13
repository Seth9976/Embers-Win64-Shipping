// 函数: sub_140a751d0
// 地址: 0x140a751d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db7b30 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db7b30)
    
    if (data_143db7b30 == 0xffffffff)
        void*** rax_4 = j_sub_140a82f30(0x478)
        void*** rdi = rax_4
        
        if (rax_4 == 0)
            rdi = nullptr
        else
            rdi[1] = 0
            *rdi = &data_142e61cb8
            rdi[2].d = 0
            InitializeCriticalSection(&rdi[3])
            SetCriticalSectionSpinCount(&rdi[3], 0xfa0)
            rdi[8].d = 0xbf800000
            *(rdi + 0x44) = 0
            __builtin_memset(&rdi[9], 0, 0x14)
            sub_140a61970(&rdi[0xc], 0x3fa999999999999a)
        
        data_143db7b28 = rdi
        data_143db7a38 = rdi
        atexit(sub_142cbd4e0)
        _Init_thread_footer(&data_143db7b30)

return data_143db7b28
