// 函数: sub_141c2d460
// 地址: 0x141c2d460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_1408cdcc0(arg1, &var_18)
int64_t* rax = *arg3
int32_t* r8 = arg3[1]
int32_t* var_10
*var_10 = *rax
var_10[2] = rax[1].d
var_10[3] = *r8
var_10[4] = 0xffffffff
int32_t r11 = var_10[1]
int32_t r8_1 = var_10[2]
int32_t rdx_3 = (*var_10 - r11) ^ r11 u>> 0xd
int32_t rcx_2 = (0x9e3779b9 - rdx_3 - r11) ^ rdx_3 << 8
int32_t r11_3 = (r11 - rdx_3 - rcx_2) ^ rcx_2 u>> 0xd
int32_t rdx_6 = (rdx_3 - r11_3 - rcx_2) ^ r11_3 u>> 0xc
int32_t rcx_5 = (rcx_2 - rdx_6 - r11_3) ^ rdx_6 << 0x10
int32_t r11_6 = (r11_3 - rdx_6 - rcx_5) ^ rcx_5 u>> 5
int32_t rdx_9 = (rdx_6 - r11_6 - rcx_5) ^ r11_6 u>> 3
int32_t rcx_8 = (rcx_5 - rdx_9 - r11_6) ^ rdx_9 << 0xa
int32_t r11_11 = (((r11_6 - rdx_9 - rcx_8) ^ rcx_8 u>> 0xf) - r8_1) ^ r8_1 u>> 0xd
int32_t r10_2 = (0x9e3779b9 - r11_11 - r8_1) ^ r11_11 << 8
int32_t r8_4 = (r8_1 - r10_2 - r11_11) ^ r10_2 u>> 0xd
int32_t r11_14 = (r11_11 - r10_2 - r8_4) ^ r8_4 u>> 0xc
int32_t r10_5 = (r10_2 - r11_14 - r8_4) ^ r11_14 << 0x10
int32_t r8_7 = (r8_4 - r10_5 - r11_14) ^ r10_5 u>> 5
int32_t r11_17 = (r11_14 - r10_5 - r8_7) ^ r8_7 u>> 3
int32_t r10_8 = (r10_5 - r11_17 - r8_7) ^ r11_17 << 0xa
sub_141c37470(arg1, arg2, (r8_7 - r10_8 - r11_17) ^ r10_8 u>> 0xf, var_10, var_18, arg4)
return arg2
