// 函数: sub_1410f6410
// 地址: 0x1410f6410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
void* r14 = *arg1
void* r12 = arg1[8]
int64_t r13
r13.b = sub_1422e5a30(r14) - 0x19 u<= 1
int64_t rsi

if (arg3 u> 5 || not(test_bit(0x25, arg3)))
    rsi.b = 0
else
    rsi.b = 1

int64_t r9 = sx.q(arg1[0xb].d)
void* rdx = arg1[8]
int64_t var_10c
__builtin_memset(&var_10c, 0, 0x43)
int32_t r8 = (*U"1111")[r9]
int128_t var_168
__builtin_memset(&var_168, 0, 0x30)
int128_t var_120 = zx.o(0)
int16_t var_c8 = 0
void var_b8
sub_1410ea190(&var_b8, rdx, r8, r9.d, arg2)
sub_141107990(&var_b8, arg3, zx.d(rsi.b), r13.b)
int128_t var_178 = *(*arg1 + 0x1598)
sub_1410b7780(arg1, &var_178, zx.o(0), 0x3f800000)
sub_140fdc870(r12, &var_168)
var_178.q = r14
var_178:8.d = arg2
var_178:0xc.d = arg3
int64_t result = sub_1410e7000(r14, r12, &var_178, 1)
__security_check_cookie(rax_1 ^ &var_1a8)
return result
