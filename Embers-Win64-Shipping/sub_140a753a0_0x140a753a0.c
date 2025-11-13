// 函数: sub_140a753a0
// 地址: 0x140a753a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db7b10 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db7b10)
    
    if (data_143db7b10 == 0xffffffff)
        void*** rax_4 = j_sub_140a82f30(0x108)
        void*** rdi = rax_4
        
        if (rax_4 == 0)
            rdi = nullptr
        else
            rdi[1] = 0
            *rdi = &data_142e61c88
            rdi[2].d = 0
            InitializeCriticalSection(&rdi[3])
            SetCriticalSectionSpinCount(&rdi[3], 0xfa0)
            void* rcx_4 = &rdi[0xa]
            rdi[8] = 0
            rdi[9] = 0
            *(rcx_4 + 0x10) = 0
            *(rcx_4 + 0x18) = 0
            *(rcx_4 + 0x1c) = 0x80
            void* rax_5 = *(rcx_4 + 0x10)
            
            if (rax_5 != 0)
                rcx_4 = rax_5
            
            *rcx_4 = 0
            *(rcx_4 + 8) = 0
            rdi[0xe].d = 0xffffffff
            *(rdi + 0x74) = 0
            rdi[0x10] = 0
            rdi[0x11].d = 0
            __builtin_memset(&rdi[0x12], 0, 0x14)
            rdi[0x15] = 0
            rdi[0x16].d = 0
            __builtin_memset(&rdi[0x17], 0, 0x20)
            rdi[0x1b] = 0x3ff0000000000000
            rdi[0x1c].d = 0
            *(rdi + 0xe4) = 0xffffffff
            rdi[0x1d].b = 0
            *(rdi + 0xec) = 0
            sub_140a61970(&rdi[0x1e], 0x4000000000000000)
            rdi[0x14].d = 1
            sub_140a7e430(rdi)
            
            if (sub_140a3f210() == 0 || (not(0.0 f< rdi[0x17]) && 0.0 f>= rdi[0x19]))
                rdi[0x17] = 0
                rdi[0x19] = 0
            else if (sub_140a54810() != 0)
                rdi[1] = sub_140a6e140(rdi, u"FHeartBeatThread", 0, 1, -1, 0)
        
        data_143db7b08 = rdi
        data_143db7a30 = rdi
        atexit(sub_142cbd520)
        _Init_thread_footer(&data_143db7b10)

return data_143db7b08
