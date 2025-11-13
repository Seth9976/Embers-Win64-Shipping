// 函数: sub_1415c5ce0
// 地址: 0x1415c5ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38
sub_14172f800(arg1, &var_38)
int32_t rax = *arg3
uint128_t zmm2 = data_142e1c900
int128_t var_28
__builtin_memcpy(&var_28, 
    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
    0x18)
int64_t zmm0 = var_28:0xc.q
int32_t* var_30
*var_30 = rax
*(var_30 + 4) = zmm2.q
*(var_30 + 0x10) = zmm0
var_30[3] = _mm_bsrli_si128(zmm2, 8).d
var_30[6] = 0xff7fffff
int32_t rax_1 = var_38
var_30[7] = 0xffffffff
int32_t arg_8
sub_141735d80(arg1, &arg_8, arg2, var_30, rax_1, nullptr)
return *arg1 + sx.q(arg_8) * 0x24 + 4
