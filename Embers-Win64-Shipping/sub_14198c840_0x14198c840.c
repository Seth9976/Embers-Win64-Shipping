// 函数: sub_14198c840
// 地址: 0x14198c840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t var_48 = 1
char rcx = (data_1439c7a34).b
int128_t var_58
int128_t* var_70 = &var_58
var_58 = zx.o(0)
char var_30 = 0
int64_t* rcx_1 = data_143f0f180
int32_t var_34 = (1 << rcx) - 1
int64_t var_28 = 0
int32_t var_20 = 0
int128_t var_44 = data_143dbb1e0
void var_68
(*(*rcx_1 + 0x498))(rcx_1, &var_68, &data_143f02b98, 0x20, 1, var_70)
sub_1405d1600(arg1 + 0x10, &var_68)
sub_1405d1550(&var_68)
int64_t* rcx_4 = data_143f0f180
var_70.d = 1
int128_t* rax_6 = (*(*rcx_4 + 0x130))(rcx_4, &data_143f02b98, *(arg1 + 0x10), 0, 0x20, var_70)
TEB* gsbase

if (data_143f13ab8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f13ab8)
    
    if (data_143f13ab8 == 0xffffffff)
        __builtin_memcpy(&data_143f13a98, 
            "\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x80\xbf\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x"
        "80\xbf\x00\x00\x80\x3f\x00\x00\x80\x3f", 
            0x20)
        _Init_thread_footer(&data_143f13ab8)

*rax_6 = data_143f13a98
rax_6[1] = data_143f13aa8
int64_t* rcx_7 = data_143f0f180
int64_t result = (*(*rcx_7 + 0x138))(rcx_7, &data_143f02b98, *(arg1 + 0x10))
__security_check_cookie(rax_1 ^ &var_98)
return result
