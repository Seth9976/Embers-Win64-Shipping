// 函数: sub_142827a30
// 地址: 0x142827a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f89930 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f89930)
    
    if (data_143f89930 == 0xffffffff)
        void var_28
        int32_t* rax_3 = sub_142826388(&var_28, 0x3f)
        sub_14281fbb0()
        sub_142826468(&data_143f89910, rax_3, &data_143f895b0)
        void* var_20
        
        if (var_20 != 0)
            int64_t var_18
            sub_14281f774(var_20, var_18)
            int64_t var_10
            sub_14058ba50(var_20, (var_10 - var_20) & 0xffffffffffffffe0)
        
        atexit(sub_142d146f4)
        _Init_thread_footer(&data_143f89930)

return &data_143f89910
