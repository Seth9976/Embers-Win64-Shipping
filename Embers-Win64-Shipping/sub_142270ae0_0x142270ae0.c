// 函数: sub_142270ae0
// 地址: 0x142270ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_628
int64_t rax_1 = __security_cookie ^ &var_628
void var_5e8
(*(*arg1 + 0x660))(arg1, &var_5e8)
int32_t var_5d0 = arg1[0x47].d
(*(*arg1 + 0x650))(arg1, &var_5e8)
int512_t zmm1
zmm1.o = 0x40000000
int64_t rax_4 = *arg1
int32_t var_5f4 = 1.d
int32_t var_5fc
int32_t var_5ec = var_5fc & 0xfffffffe
int32_t var_5f0 = 0x40000000
arg1[0x44] = arg2
int32_t var_5f8 = 0
(*(rax_4 + 0x758))(arg1, arg2, &var_5f8)
void* rax_5 = sub_141dcc7c0(arg1)
int512_t zmm2
zmm2.o = 0x40a00000
int32_t var_600 = *(rax_5 + 0x284)
int64_t rax_7 = *arg1
int64_t var_608 = *(rax_5 + 0x27c)
(*(rax_7 + 0x710))(arg1, &var_608, zmm2)
zmm1.o = zx.o(0)
int64_t result = (*(*arg1 + 0x680))(arg1, zmm1)
char var_28 = 0
int64_t var_78

if (var_78 != 0)
    result = sub_140a74f90(var_78)

__security_check_cookie(rax_1 ^ &var_628)
return result
