// 函数: sub_142821f24
// 地址: 0x142821f24
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f89670 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f89670)
    
    if (data_143f89670 == 0xffffffff)
        void var_28
        int32_t* rax_3 = sub_142826388(&var_28, 0x2d)
        sub_14281faa0()
        sub_142826608(&data_143f89650, &data_143f89628, rax_3)
        void* var_20
        
        if (var_20 != 0)
            int64_t var_18
            sub_14281f774(var_20, var_18)
            int64_t var_10
            sub_14058ba50(var_20, (var_10 - var_20) & 0xffffffffffffffe0)
        
        atexit(sub_142d14504)
        _Init_thread_footer(&data_143f89670)

return &data_143f89650
