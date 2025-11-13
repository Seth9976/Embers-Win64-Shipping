// 函数: sub_14296cf00
// 地址: 0x14296cf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x78)
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void var_58
sub_14296dba0(&var_58, arg1, arg2)
sub_14296d7f0(&var_58)
int128_t zmm1 = zx.o(0)
void* rax_2 = &var_58
uint128_t zmm2 = zx.o(0)
int64_t i_1 = 2
int64_t i

do
    uint128_t zmm0_1 = *rax_2
    rax_2 += 0x20
    zmm1 |= zmm0_1
    zmm2 |= *(rax_2 - 0x10)
    i = i_1
    i_1 -= 1
while (i != 1)
zmm2 |= zmm1
zmm2 |= _mm_bsrli_si128(zmm2, 8)
int32_t rcx_2 = (zmm2 | _mm_bsrli_si128(zmm2, 4)).d
__security_check_cookie(rax_1 ^ &var_78)
return zx.q(neg.d((rcx_2 - 1) u>> 0x1f & not.d(rcx_2) u>> 0x1f))
