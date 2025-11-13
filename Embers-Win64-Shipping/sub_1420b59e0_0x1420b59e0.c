// 函数: sub_1420b59e0
// 地址: 0x1420b59e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t rax_2 = sub_141ffde90(arg5)
TEB* gsbase

if (data_143f48090 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f48090)
    
    if (data_143f48090 == 0xffffffff)
        sub_140b58260(&data_143f48088, u"CapsuleTraceSingle", 1)
        _Init_thread_footer(&data_143f48090)

void var_c8
sub_1420b6a60(&var_c8, data_143f48088, arg6, arg7, arg9, arg1)
void* rax_4
int32_t zmm6_1
rax_4, zmm6_1 = sub_1423de540(data_143f5b298, arg1, 1)
int64_t* rbx

if (rax_4 == 0)
    rbx.b = 0
else
    int128_t* var_e8_1 = &data_143f3a660
    int32_t var_d4_1 = zmm6_1
    void* var_f0_1 = &var_c8
    int32_t var_d0_1 = arg4
    int32_t var_d8
    int32_t* var_f8_1 = &var_d8
    int64_t* var_100
    var_100.d = rax_2
    char var_108
    var_108.q = &data_14399f720
    var_d8 = 3
    rbx = zx.q(sub_141ecd380(rax_4, arg8, arg2, arg3, var_108, var_100.b, var_f8_1, var_f0_1, 
        var_e8_1))

int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

__security_check_cookie(rax_1 ^ &var_128)
return zx.q(rbx.b)
