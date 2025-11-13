// 函数: sub_1420b3430
// 地址: 0x1420b3430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
TEB* gsbase

if (data_143f48100 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f48100)
    
    if (data_143f48100 == 0xffffffff)
        sub_140b58260(&data_143f480f8, u"BoxTraceMultiForObjects", 1)
        _Init_thread_footer(&data_143f48100)

void var_b8
sub_1420b6a60(&var_b8, data_143f480f8, arg7, arg8, arg10, arg1)
int32_t var_e8
sub_1420b6920(&var_e8, arg6)
uint64_t rbx

if (var_e8 == 0)
    rbx.b = 0
else
    uint64_t rax_6 = sub_1423de540(data_143f5b298, arg1, 1)
    
    if (rax_6 == 0)
        rbx.b = 0
    else
        int32_t var_dc_1 = *arg4
        int32_t var_d4_1 = arg4[2]
        int32_t var_d8_1 = arg4[1]
        int32_t var_e0 = 1
        void* var_f0_1 = &var_b8
        int32_t* var_f8_1 = &var_e0
        int32_t* var_100_1 = &var_e8
        char var_108
        float var_c8[0x4]
        var_108.q = sub_140ade170(arg5, &var_c8)
        rbx = zx.q(sub_141eccf00(rax_6, arg9, arg2, arg3, var_108, var_100_1, var_f8_1, var_f0_1))

int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

__security_check_cookie(rax_1 ^ &var_128)
return zx.q(rbx.b)
