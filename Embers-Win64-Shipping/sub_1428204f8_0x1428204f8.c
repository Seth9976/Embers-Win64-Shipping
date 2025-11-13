// 函数: sub_1428204f8
// 地址: 0x1428204f8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f89698 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f89698)
    
    if (data_143f89698 == 0xffffffff)
        void var_28
        int32_t* rax_3 = sub_1428263a8(&var_28, 0x61, 0x66)
        void var_48
        int32_t* rax_4 = sub_1428263a8(&var_48, 0x41, 0x46)
        sub_14281feb8()
        void var_68
        sub_142826608(&data_143f89678, sub_142826608(&var_68, &data_143f895d8, rax_4), rax_3)
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
        
        atexit(sub_142d141ec)
        _Init_thread_footer(&data_143f89698)

return &data_143f89678
