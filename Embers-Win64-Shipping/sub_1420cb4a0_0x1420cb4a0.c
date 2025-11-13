// 函数: sub_1420cb4a0
// 地址: 0x1420cb4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
TEB* gsbase

if (data_143f48140 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f48140)
    
    if (data_143f48140 == 0xffffffff)
        sub_140b58260(&data_143f48138, u"LineTraceMultiByProfile", 1)
        _Init_thread_footer(&data_143f48140)

void var_b8
sub_1420b6a60(&var_b8, data_143f48138, arg5, arg6, arg8, arg1)
void* rax_5
int512_t zmm2
rax_5, zmm2 = sub_1423de540(data_143f5b298, arg1, 1)
uint64_t rbx

if (rax_5 == 0)
    rbx.b = 0
else
    void* var_c0_1 = &var_b8
    char var_c8
    var_c8.q = arg4
    rbx = zx.q(sub_141ec68e0(rax_5, arg7, arg2, arg3, zmm2, var_c8))

int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

__security_check_cookie(rax_1 ^ &var_e8)
return zx.q(rbx.b)
