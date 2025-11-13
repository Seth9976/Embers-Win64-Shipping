// 函数: sub_142948900
// 地址: 0x142948900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xb0)
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
__builtin_memset(arg1, 0, 0x28)
*arg1 = 1
__builtin_memset(&arg1[0xa], 0, 0x28)
arg1[0xa] = 1
__builtin_memset(&arg1[0x14], 0, 0x28)
uint8_t rsi_1 = (sx.d(arg3) u>> 0x1f).b
uint32_t rbx = zx.d(arg3 - (neg.b(rsi_1) & arg3) * 2)
int64_t r11 = sx.q(arg2) * 0x3c0
sub_1429424d0(arg1, r11 + &data_14353e1c0, (((rbx ^ 1) - 1) u>> 0x1f).b)
sub_1429424d0(arg1, &data_14353e238 + r11, (((rbx ^ 2) - 1) u>> 0x1f).b)
sub_1429424d0(arg1, &data_14353e2b0 + r11, (((rbx ^ 3) - 1) u>> 0x1f).b)
sub_1429424d0(arg1, &data_14353e328 + r11, (((rbx ^ 4) - 1) u>> 0x1f).b)
sub_1429424d0(arg1, &data_14353e3a0 + r11, (((rbx ^ 5) - 1) u>> 0x1f).b)
sub_1429424d0(arg1, &data_14353e418 + r11, (((rbx ^ 6) - 1) u>> 0x1f).b)
sub_1429424d0(arg1, &data_14353e490 + r11, (((rbx ^ 7) - 1) u>> 0x1f).b)
sub_1429424d0(arg1, &data_14353e508 + r11, (((rbx ^ 8) - 1) u>> 0x1f).b)
void var_a8
memmove(&var_a8, &arg1[0xa], 0x28)
void var_80
memmove(&var_80, arg1, 0x28)
int32_t var_58 = neg.d(arg1[0x14])
int32_t var_54 = neg.d(arg1[0x15])
int32_t var_50 = neg.d(arg1[0x16])
int32_t var_4c = neg.d(arg1[0x17])
int32_t var_48 = neg.d(arg1[0x18])
int32_t var_44 = neg.d(arg1[0x19])
int32_t var_40 = neg.d(arg1[0x1a])
int32_t var_3c = neg.d(arg1[0x1b])
int32_t var_38 = neg.d(arg1[0x1c])
int32_t result = neg.d(arg1[0x1d])
int32_t result_1 = result
sub_1429424d0(arg1, &var_a8, rsi_1)
__security_check_cookie(rax_1 ^ &var_c8)
return result
