// 函数: sub_140d38ca0
// 地址: 0x140d38ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_140d3a650(arg1, &var_18)
int64_t rax = *arg3
uint32_t r10_1 = (rax u>> 4).d
int64_t* var_10
*var_10 = rax
int32_t r11_1 = (0x9e3779b9 - r10_1) ^ r10_1 << 8
var_10[1].d = 0xffffffff
int32_t r8_2 = neg.d(r11_1 + r10_1) ^ r11_1 u>> 0xd
int32_t r10_4 = (r10_1 - r11_1 - r8_2) ^ r8_2 u>> 0xc
int32_t r11_4 = (r11_1 - r10_4 - r8_2) ^ r10_4 << 0x10
int32_t r8_5 = (r8_2 - r11_4 - r10_4) ^ r11_4 u>> 5
int32_t r10_7 = (r10_4 - r11_4 - r8_5) ^ r8_5 u>> 3
int32_t r11_7 = (r11_4 - r10_7 - r8_5) ^ r10_7 << 0xa
sub_14095bb80(arg1, arg2, (r8_5 - r11_7 - r10_7) ^ r11_7 u>> 0xf, var_10, var_18, arg4)
return arg2
