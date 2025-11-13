// 函数: sub_1418e7f30
// 地址: 0x1418e7f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void**** result = arg2
int64_t rsi = sx.q(arg3)

if (rsi.d u> 0x2c || not(test_bit(0x100000101800, rsi)))
    arg2.b = 0
else
    arg2.b = 1

char rcx = (data_1439c7a34).b
void*** rbx = nullptr
char var_70 = 0
int128_t var_98 = zx.o(0)
int64_t var_68 = 0
int32_t var_74 = (1 << rcx) - 1
int128_t* rax_7 = &data_1439c7b20
int32_t var_60 = 0

if (arg2.b != 0)
    rax_7 = &data_1439c7b50

int32_t var_78 = rax_7[1].d
int128_t var_88 = *rax_7
void*** rax_9 = j_sub_140a82f30(0x110)

if (rax_9 != 0)
    rbx = sub_1418f2920(rax_9, *(arg1 + 0x58), rsi.d, arg4, arg5, arg6, arg7, arg8, arg9, arg10, 
        &var_98)

*result = rbx

if (rbx != 0)
    rbx[1].d += 1

__security_check_cookie(rax_1 ^ &var_118)
return result
