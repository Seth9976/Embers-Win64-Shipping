// 函数: sub_140b3d650
// 地址: 0x140b3d650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de7d70 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de7d70)
    
    if (data_143de7d70 == 0xffffffff)
        int64_t var_18
        int64_t* rax_4 = sub_140b26cf0(&var_18)
        data_143de7d4c = 0x80
        __builtin_memset(&data_143de7d00, 0, 0x4c)
        data_143de7d54 = 0
        data_143de7d60 = 0
        data_143de7d68 = 0
        data_143de7d50 = 0xffffffff
        sub_140597df0(&data_143de7d00, rax_4)
        sub_140b44400(&data_143de7d00)
        int64_t rcx_3 = var_18
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        atexit(sub_142cc0260)
        _Init_thread_footer(&data_143de7d70)

return &data_143de7d00
