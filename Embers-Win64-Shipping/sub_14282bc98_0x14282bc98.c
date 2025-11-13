// 函数: sub_14282bc98
// 地址: 0x14282bc98
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
TEB* gsbase

if (data_143f89a70 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f89a70)
    
    if (data_143f89a70 == 0xffffffff)
        int64_t var_28_1 = 0
        int64_t var_20_1 = 0xf
        char var_38 = 0
        sub_142826308(&data_143f89a50, &var_38, 6, SimpleString::operator=(&var_38, "''"))
        
        if (var_20_1 u>= 0x10)
            sub_14058ba50(var_38.q, var_20_1 + 1)
        
        atexit(sub_142d14a08)
        _Init_thread_footer(&data_143f89a70)

__security_check_cookie(rax_1 ^ &var_58)
return &data_143f89a50
