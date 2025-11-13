// 函数: sub_14282dac0
// 地址: 0x14282dac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f89a48 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f89a48)
    
    if (data_143f89a48 == 0xffffffff)
        void var_28
        int32_t* rax_3 = sub_14281fdb8(&var_28)
        sub_14281fbb0()
        void var_48
        int32_t* rax_4 = sub_142826468(&var_48, &data_143f895b0, rax_3)
        sub_14281ff5c()
        sub_142826608(&data_143f89a28, &data_143f897b8, rax_4)
        void* var_40
        
        if (var_40 != 0)
            int64_t var_38
            sub_14281f774(var_40, var_38)
            int64_t var_30
            sub_14058ba50(var_40, (var_30 - var_40) & 0xffffffffffffffe0)
            int64_t var_40_1
            __builtin_memset(&var_40_1, 0, 0x18)
        
        void* var_20
        
        if (var_20 != 0)
            int64_t var_18
            sub_14281f774(var_20, var_18)
            int64_t var_10
            sub_14058ba50(var_20, (var_10 - var_20) & 0xffffffffffffffe0)
        
        atexit(sub_142d14a60)
        _Init_thread_footer(&data_143f89a48)

return &data_143f89a28
