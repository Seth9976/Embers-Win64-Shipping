// 函数: sub_14082c610
// 地址: 0x14082c610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ce40f0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ce40f0)
    
    if (data_143ce40f0 == 0xffffffff)
        int64_t var_18 = 0
        int32_t var_10 = 0
        sub_1405947f0(&var_18, 0x2a)
        int32_t rbx = var_10 + 0x2a
        
        if (rbx s> 0)
            sub_140594770(&var_18)
        
        int64_t rdi = var_18
        UnDecorator::getReferenceType(rdi, u"NiagaraRenderer::DummyTextureReadBuffer2D", 0x54)
        data_143ce40c0 = 0xffffffff
        data_143ce40b8 = &data_142dd8c50
        data_143ce40c4 = 4
        data_143ce40c8 = 0xd
        data_143ce40d0 = 0
        data_143ce40d8 = rbx
        
        if (rbx != 0)
            sub_1405a4c70(&data_143ce40d0, rbx, 0)
            memcpy(data_143ce40d0, rdi, rbx * 2)
        else
            __builtin_memset(&data_143ce40dc, 0, 0x14)
        
        if (rdi != 0)
            sub_140a74f90(rdi)
        
        data_143ce40b8 = &data_142dd8e88
        
        if (sub_140a80f40() == 0)
            sub_141997e80(&data_143ce40b8)
        else
            (*(data_143ce40b8 + 0x28))(&data_143ce40b8)
        
        atexit(sub_142cb5060)
        _Init_thread_footer(&data_143ce40f0)

return data_143ce40e0:8
