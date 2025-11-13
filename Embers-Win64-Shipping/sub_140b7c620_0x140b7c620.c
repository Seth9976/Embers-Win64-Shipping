// 函数: sub_140b7c620
// 地址: 0x140b7c620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e19fe0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e19fe0)
    
    if (data_143e19fe0 == 0xffffffff)
        int64_t var_18
        int64_t* rax_4 = sub_140b13fb0(&var_18)
        int16_t* const rcx_3
        
        if (rax_4[1].d == 0)
            rcx_3 = &data_142d40450
        else
            rcx_3 = *rax_4
        
        int16_t* const var_28 = rcx_3
        wchar16 const* const var_20 = u"AutoLoadProject.txt"
        data_143e19fd0 = 0
        data_143e19fd8 = 0
        sub_140b0f5f0(&data_143e19fd0, &var_28, 2)
        int64_t rcx_4 = var_18
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        atexit(&data_142cc0e80)
        _Init_thread_footer(&data_143e19fe0)

return &data_143e19fd0
