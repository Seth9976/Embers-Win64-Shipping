// 函数: sub_1418e7d80
// 地址: 0x1418e7d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* rsi = arg1
int64_t rdi = sx.q(arg3)

if (rdi.d u> 0x2c || not(test_bit(0x100000101800, rdi)))
    arg1.b = 0
else
    arg1.b = 1

int128_t* rax_4 = &data_1439c7b20

if (arg1.b != 0)
    rax_4 = &data_1439c7b50

int32_t var_58 = rax_4[1].d
int128_t var_68 = *rax_4
void*** rax_6 = j_sub_140a82f30(0x118)

if (rax_6 != 0)
    rax_6 = sub_1418f2d80(rax_6, *(rsi + 0x58), rdi.d, arg4, arg5, arg6, arg7, arg8, arg9, arg10, 
        0, &var_68)

*arg2 = rax_6

if (rax_6 != 0)
    rax_6[1].d += 1

__security_check_cookie(rax_1 ^ &var_d8)
return arg2
