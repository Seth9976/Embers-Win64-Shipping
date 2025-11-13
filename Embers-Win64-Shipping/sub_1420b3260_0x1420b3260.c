// 函数: sub_1420b3260
// 地址: 0x1420b3260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
TEB* gsbase

if (data_143f48160 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f48160)
    
    if (data_143f48160 == 0xffffffff)
        sub_140b58260(&data_143f48158, u"BoxTraceMultiByProfile", 1)
        _Init_thread_footer(&data_143f48160)

void var_b8
sub_1420b6a60(&var_b8, data_143f48158, arg7, arg8, arg10, arg1)
uint64_t rax_5 = sub_1423de540(data_143f5b298, arg1, 1)
uint64_t rbx_1

if (rax_5 == 0)
    rbx_1.b = 0
else
    int32_t var_d4_1 = *arg4
    int32_t var_cc_1 = arg4[2]
    int32_t var_d0_1 = arg4[1]
    int32_t var_d8 = 1
    float var_c8[0x4]
    float (* rax_6)[0x4]
    int512_t zmm2_1
    rax_6, zmm2_1 = sub_140ade170(arg5, &var_c8)
    char var_f8
    var_f8.q = rax_6
    rbx_1 = zx.q(sub_141ecd100(rax_5, arg9, arg2, arg3, zmm2_1, var_f8, arg6, &var_d8, &var_b8))

int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

__security_check_cookie(rax_1 ^ &var_118)
return zx.q(rbx_1.b)
