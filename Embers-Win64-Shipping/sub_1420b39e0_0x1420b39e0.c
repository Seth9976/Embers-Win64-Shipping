// 函数: sub_1420b39e0
// 地址: 0x1420b39e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
TEB* gsbase

if (data_143f480f0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f480f0)
    
    if (data_143f480f0 == 0xffffffff)
        sub_140b58260(&data_143f480e8, u"BoxTraceSingleForObjects", 1)
        _Init_thread_footer(&data_143f480f0)

void var_b8
sub_1420b6a60(&var_b8, data_143f480e8, arg7, arg8, arg10, arg1)
int32_t rax_6 = arg6[1].d
int64_t rdi_1 = 0
int64_t var_e8 = 0
int32_t var_dc = 0
int32_t var_e0 = rax_6

if (rax_6 s> 0)
    sub_1405daba0(&var_e8)
    rdi_1 = var_e8

int32_t var_d8
sub_1420b6920(&var_d8, arg6)
int64_t* rbx

if (var_d8 == 0)
    rbx.b = 0
else
    int64_t* rax_7 = sub_1423de540(data_143f5b298, arg1, 1)
    
    if (rax_7 == 0)
        rbx.b = 0
    else
        var_e8:4.d = *arg4
        int32_t var_dc_1 = arg4[2]
        int32_t var_e0_1 = arg4[1]
        var_e8.d = 1
        void* var_f0_1 = &var_b8
        int32_t* var_f8_1 = &var_e8
        int32_t* var_100_1 = &var_d8
        char var_108
        float var_c8[0x4]
        var_108.q = sub_140ade170(arg5, &var_c8)
        rbx = zx.q(sub_141ecd570(rax_7, arg9, arg2, arg3, var_108, var_100_1, var_f8_1, var_f0_1))

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

__security_check_cookie(rax_1 ^ &var_128)
return zx.q(rbx.b)
