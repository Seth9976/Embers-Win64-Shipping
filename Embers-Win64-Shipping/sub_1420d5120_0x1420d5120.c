// 函数: sub_1420d5120
// 地址: 0x1420d5120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
TEB* gsbase

if (data_143f480e0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f480e0)
    
    if (data_143f480e0 == 0xffffffff)
        sub_140b58260(&data_143f480d8, u"SphereTraceMultiForObjects", 1)
        _Init_thread_footer(&data_143f480e0)

void var_c8
sub_1420b6a60(&var_c8, data_143f480d8, arg5, arg6, arg8, arg1)
int32_t var_e8
sub_1420b6920(&var_e8, arg4)
int64_t* rbx

if (var_e8 == 0)
    rbx.b = 0
else
    void* rax_5
    int32_t zmm6_1
    rax_5, zmm6_1 = sub_1423de540(data_143f5b298, arg1, 1)
    
    if (rax_5 == 0)
        rbx.b = 0
    else
        int32_t var_dc_1 = zmm6_1
        void* var_f0_1 = &var_c8
        int32_t var_e0 = 2
        char var_108
        var_108.q = &data_14399f720
        rbx = zx.q(sub_141eccf00(rax_5, arg7, arg2, arg3, var_108, &var_e8, &var_e0, var_f0_1))

int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

__security_check_cookie(rax_1 ^ &var_128)
return zx.q(rbx.b)
