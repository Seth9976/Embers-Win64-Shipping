// 函数: sub_141f20d80
// 地址: 0x141f20d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
TEB* gsbase

if (data_143f3b1a8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f3b1a8)
    
    if (data_143f3b1a8 == 0xffffffff)
        sub_140b58170(&data_143f3b1a0, "MovementOverlapTest", 1)
        _Init_thread_footer(&data_143f3b1a8)

void var_e8
void var_b8
sub_141eb54c0(&var_b8, data_143f3b1a0, &var_e8, 0, arg6)
void var_e0
sub_142259c00(&var_e0)
sub_142277d10(&var_e0, 2)
(*(*arg1 + 0x468))(arg1, &var_b8, &var_e0)
void* rax_5 = arg1[0x15]

if (rax_5 == 0)
    rax_5 = sub_141ee69e0(arg1)

char rax_6 = sub_141ec83d0(rax_5, arg2, arg3, arg4, arg5, &var_b8, &var_e0)
int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

__security_check_cookie(rax_1 ^ &var_128)
return zx.q(rax_6)
