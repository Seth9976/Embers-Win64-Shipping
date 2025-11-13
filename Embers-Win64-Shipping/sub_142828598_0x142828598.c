// 函数: sub_142828598
// 地址: 0x142828598
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f89958 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f89958)
    
    if (data_143f89958 == 0xffffffff)
        void var_28
        int32_t* rax_3 = sub_1428263c8(&var_28)
        sub_14281fbb0()
        void var_48
        int32_t* rax_4 = sub_142826608(&var_48, &data_143f895b0, rax_3)
        void var_68
        sub_142826468(&data_143f89938, sub_142826388(&var_68, 0x3a), rax_4)
        void* var_60
        
        if (var_60 != 0)
            int64_t var_58
            sub_14281f774(var_60, var_58)
            int64_t var_50
            sub_14058ba50(var_60, (var_50 - var_60) & 0xffffffffffffffe0)
            int64_t var_60_1
            __builtin_memset(&var_60_1, 0, 0x18)
        
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
        
        atexit(sub_142d1474c)
        _Init_thread_footer(&data_143f89958)

return &data_143f89938
