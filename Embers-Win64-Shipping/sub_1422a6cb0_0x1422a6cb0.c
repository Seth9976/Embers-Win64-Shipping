// 函数: sub_1422a6cb0
// 地址: 0x1422a6cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
TEB* gsbase

if (data_143f53540 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f53540)
    
    if (data_143f53540 == 0xffffffff)
        sub_140b58170(&data_143f53538, "KismetTraceComponent", 1)
        _Init_thread_footer(&data_143f53540)

void var_f8
void var_c8
sub_141eb54c0(&var_c8, data_143f53538, &var_f8, arg4, nullptr)
int32_t var_e0 = arg3[1].d
int32_t var_d0 = arg2[1].d
int64_t rax_6 = *arg1
int64_t var_e8 = *arg3
void* var_108_1 = &var_c8
int64_t var_d8 = *arg2
char rax_7 = (*(rax_6 + 0x828))(arg1, arg9, &var_d8, &var_e8, var_108_1)
int64_t rax_8

if (rax_7 == 0)
    *arg6 = data_143dbb1f8.q
    arg6[1].d = data_143dbb200
    *arg7 = data_143dbb1f8.q
    arg7[1].d = data_143dbb200
    rax_8 = 0
    var_e8 = 0
else
    *arg6 = *(arg9 + 0x10)
    arg6[1].d = *(arg9 + 0x18)
    *arg7 = *(arg9 + 0x28)
    arg7[1].d = *(arg9 + 0x30)
    rax_8 = *(arg9 + 0x78)

*arg8 = rax_8

if (arg5 != 0)
    if (arg1[0x15] == 0)
        sub_141ee69e0(arg1)
    
    if (rax_7 != 0 && arg1[0x15] == 0)
        sub_141ee69e0(arg1)

int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

__security_check_cookie(rax_1 ^ &var_128)
return zx.q(rax_7)
