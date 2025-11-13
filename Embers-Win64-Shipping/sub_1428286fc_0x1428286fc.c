// 函数: sub_1428286fc
// 地址: 0x1428286fc
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
TEB* gsbase

if (data_143f89980 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f89980)
    
    if (data_143f89980 == 0xffffffff)
        int64_t var_28_1 = 0
        int64_t var_20_1 = 0xf
        char var_38 = 0
        void var_58
        int32_t* rax_5 = sub_142826308(&var_58, &var_38, 3, SimpleString::operator=(&var_38, ",]}"))
        sub_14281fbb0()
        void var_78
        int32_t* rax_6 = sub_142826608(&var_78, &data_143f895b0, rax_5)
        void var_98
        sub_142826468(&data_143f89960, sub_142826388(&var_98, 0x3a), rax_6)
        void* var_90
        
        if (var_90 != 0)
            int64_t var_88
            sub_14281f774(var_90, var_88)
            int64_t var_80
            sub_14058ba50(var_90, (var_80 - var_90) & 0xffffffffffffffe0)
            int64_t var_90_1
            __builtin_memset(&var_90_1, 0, 0x18)
        
        void* var_70
        
        if (var_70 != 0)
            int64_t var_68
            sub_14281f774(var_70, var_68)
            int64_t var_60
            sub_14058ba50(var_70, (var_60 - var_70) & 0xffffffffffffffe0)
            int64_t var_70_1
            __builtin_memset(&var_70_1, 0, 0x18)
        
        void* var_50
        
        if (var_50 != 0)
            int64_t var_48
            sub_14281f774(var_50, var_48)
            int64_t var_40
            sub_14058ba50(var_50, (var_40 - var_50) & 0xffffffffffffffe0)
            int64_t var_50_1
            __builtin_memset(&var_50_1, 0, 0x18)
        
        if (var_20_1 u>= 0x10)
            sub_14058ba50(var_38.q, var_20_1 + 1)
        
        atexit(sub_142d147a4)
        _Init_thread_footer(&data_143f89980)

__security_check_cookie(rax_1 ^ &var_b8)
return &data_143f89960
