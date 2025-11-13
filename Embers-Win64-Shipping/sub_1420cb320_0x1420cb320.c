// 函数: sub_1420cb320
// 地址: 0x1420cb320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t rax_2 = sub_141ffde90(arg4)
TEB* gsbase

if (data_143f48040 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f48040)
    
    if (data_143f48040 == 0xffffffff)
        sub_140b58260(&data_143f48038, u"LineTraceMulti", 1)
        _Init_thread_footer(&data_143f48040)

void var_b8
sub_1420b6a60(&var_b8, data_143f48038, arg5, arg6, arg8, arg1)
void* rax_4 = sub_1423de540(data_143f5b298, arg1, 1)
int64_t* rbx

if (rax_4 == 0)
    rbx.b = 0
else
    char var_d8
    var_d8.d = rax_2
    rbx = zx.q(sub_141ec6850(rax_4, arg7, arg2, arg3, var_d8, &var_b8, &data_143f3a660))

int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

__security_check_cookie(rax_1 ^ &var_f8)
return zx.q(rbx.b)
