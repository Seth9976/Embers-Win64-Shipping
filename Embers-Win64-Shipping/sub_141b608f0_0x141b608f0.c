// 函数: sub_141b608f0
// 地址: 0x141b608f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t result = __security_cookie ^ &var_98
int64_t result_1 = result

if (*(arg1 + 0x10) == 0)
    TEB* gsbase
    
    if (data_143f2d380
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f2d380)
        
        if (data_143f2d380 == 0xffffffff)
            data_143f2d378 = &data_14306c2c0
            atexit(sub_142cf60e0)
            _Init_thread_footer(&data_143f2d380)
    
    char rcx_2 = (data_1439c7a34).b
    int128_t zmm0 = data_143dbb1e0
    int32_t var_48_1 = 1
    int64_t var_58 = 0
    int64_t* rcx_3 = data_143f0f180
    char var_30_1 = 0
    int64_t var_28_1 = 0
    int32_t var_20_1 = 0
    int32_t var_34_1 = (1 << rcx_2) - 1
    int64_t* var_50_1 = &data_143f2d378
    int128_t var_44_1 = zmm0
    void var_68
    (*(*rcx_3 + 0x498))(rcx_3, &var_68, &data_143f02b98, 0x10, 1, &var_58)
    sub_1405d1600(arg1 + 0x10, &var_68)
    result = sub_1405d1550(&var_68)

__security_check_cookie(result_1 ^ &var_98)
return result
