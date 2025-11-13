// 函数: sub_1420b5bb0
// 地址: 0x1420b5bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
TEB* gsbase

if (data_143f48190 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f48190)
    
    if (data_143f48190 == 0xffffffff)
        sub_140b58260(&data_143f48188, u"CapsuleTraceSingleByProfile", 1)
        _Init_thread_footer(&data_143f48190)

void var_b8
sub_1420b6a60(&var_b8, data_143f48188, arg6, arg7, arg9, arg1)
void* rax_5
int512_t zmm2
int32_t zmm6_1
rax_5, zmm2, zmm6_1 = sub_1423de540(data_143f5b298, arg1, 1)
int64_t* rbx

if (rax_5 == 0)
    rbx.b = 0
else
    void* var_d0_1 = &var_b8
    int32_t var_c4_1 = zmm6_1
    int32_t var_c8
    int32_t* var_d8_1 = &var_c8
    char var_e8
    var_e8.q = &data_14399f720
    int32_t var_c0_1 = arg4
    var_c8 = 3
    rbx = zx.q(sub_141ecd7b0(rax_5, arg8, arg2, arg3, zmm2, var_e8, arg5, var_d8_1, var_d0_1))

int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

__security_check_cookie(rax_1 ^ &var_108)
return zx.q(rbx.b)
