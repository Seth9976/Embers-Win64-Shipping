// 函数: sub_14082c8b0
// 地址: 0x14082c8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ce3fc0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ce3fc0)
    
    if (data_143ce3fc0 == 0xffffffff)
        uint32_t rsi_4 =
            (zx.d(data_14399f630:2.b) << 8 | zx.d(data_14399f630:1.b)) << 8 | zx.d(data_14399f630.b)
        int64_t var_18 = 0
        uint32_t rsi_6 = rsi_4 << 8 | zx.d(data_14399f630:3.b)
        int32_t var_10 = 0
        sub_1405947f0(&var_18, 0x27)
        int32_t rbx = var_10 + 0x27
        
        if (rbx s> 0)
            sub_140594770(&var_18)
        
        int64_t rdi = var_18
        UnDecorator::getReferenceType(rdi, u"NiagaraRenderer::DummyWhiteColorBuffer", 0x4e)
        data_143ce3f88 = 0xffffffff
        data_143ce3f80 = &data_142dd8c10
        data_143ce3f8c = 4
        data_143ce3f90 = 0x25
        data_143ce3f98 = 0
        data_143ce3fa0 = rbx
        
        if (rbx != 0)
            sub_1405a4c70(&data_143ce3f98, rbx, 0)
            memcpy(data_143ce3f98, rdi, rbx * 2)
        else
            __builtin_memset(&data_143ce3fa4, 0, 0x14)
        
        data_143ce3fb8 = rsi_6
        
        if (rdi != 0)
            sub_140a74f90(rdi)
        
        data_143ce3f80 = &data_142dd8c90
        
        if (sub_140a80f40() == 0)
            sub_141997e80(&data_143ce3f80)
        else
            (*(data_143ce3f80 + 0x28))(&data_143ce3f80)
        
        atexit(sub_142cb5180)
        _Init_thread_footer(&data_143ce3fc0)

return data_143ce3fb0
