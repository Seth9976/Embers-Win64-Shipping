// 函数: sub_14193d1f0
// 地址: 0x14193d1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143eff8ac s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143eff8ac)
    
    if (data_143eff8ac == 0xffffffff)
        sub_141938b40(&data_1439c76c8, 0x800)
        char rax_4 = data_143de5480
        int64_t rbx = 0
        __builtin_memset(&data_1439c7730, 0, 0x2c)
        data_1439c775c = 0x80
        data_1439c7760 = 0xffffffff
        data_1439c7764 = 0
        data_1439c7770 = 0
        data_1439c7778 = 0
        __builtin_memset(&data_1439c7780, 0, 0x2c)
        data_1439c77ac = 0x80
        data_1439c77b0 = 0xffffffff
        data_1439c77b4 = 0
        data_1439c77c0 = 0
        data_1439c77c8 = 0
        
        if (rax_4 != 0)
            GetCurrentThreadId()
            rax_4 = data_143de5480
        
        int64_t rdi = data_143eff710
        
        if (rax_4 != 0)
            rbx.b = GetCurrentThreadId() != data_143de5470
        
        bool cond:1_1
        
        if (*(rdi + (rbx << 2)) == 1 && data_143f004d8 != 0)
            cond:1_1 = data_143eff5c6 == 0
            data_1439c77d0 = 1
        
        if (*(rdi + (rbx << 2)) != 1 || data_143f004d8 == 0 || not(cond:1_1))
            data_1439c77d0 = 0
        
        atexit(sub_142cee5f0)
        _Init_thread_footer(&data_143eff8ac)

return &data_1439c76c0
