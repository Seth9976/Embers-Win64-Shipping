// 函数: sub_1420cba80
// 地址: 0x1420cba80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
TEB* gsbase

if (data_143f480b0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f480b0)
    
    if (data_143f480b0 == 0xffffffff)
        sub_140b58260(&data_143f480a8, u"LineTraceSingleForObjects", 1)
        _Init_thread_footer(&data_143f480b0)

void var_b8
sub_1420b6a60(&var_b8, data_143f480a8, arg5, arg6, arg8, arg1)
int32_t var_c8
sub_1420b6920(&var_c8, arg4)
int64_t* rbx

if (var_c8 == 0)
    rbx.b = 0
else
    void* rax_5 = sub_1423de540(data_143f5b298, arg1, 1)
    
    if (rax_5 == 0)
        rbx.b = 0
    else
        char var_d8
        var_d8.q = &var_c8
        rbx = zx.q(sub_141ec6b10(rax_5, arg7, arg2, arg3, var_d8, &var_b8))

int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

__security_check_cookie(rax_1 ^ &var_f8)
return zx.q(rbx.b)
