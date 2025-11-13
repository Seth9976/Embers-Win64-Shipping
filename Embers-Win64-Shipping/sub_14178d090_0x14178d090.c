// 函数: sub_14178d090
// 地址: 0x14178d090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
sub_140598750(arg1, &var_18)
int128_t* var_10
*var_10 = *arg3
var_10[1].d = 0xffffffff
uint32_t r8_1 = (*var_10 u>> 4).d
uint32_t rcx_1 = (*(var_10 + 8) u>> 4).d
int32_t r9_1 = (0x9e3779b9 - r8_1) ^ r8_1 << 8
int32_t r11_2 = neg.d(r9_1 + r8_1) ^ r9_1 u>> 0xd
int32_t r8_4 = (r8_1 - r9_1 - r11_2) ^ r11_2 u>> 0xc
int32_t r9_4 = (r9_1 - r8_4 - r11_2) ^ r8_4 << 0x10
int32_t r11_5 = (r11_2 - r9_4 - r8_4) ^ r9_4 u>> 5
int32_t r8_7 = (r8_4 - r9_4 - r11_5) ^ r11_5 u>> 3
int32_t r9_7 = (r9_4 - r8_7 - r11_5) ^ r8_7 << 0xa
int32_t rdx_2 = (0x9e3779b9 - rcx_1) ^ rcx_1 << 8
int32_t r10_2 = neg.d(rdx_2 + rcx_1) ^ rdx_2 u>> 0xd
int32_t rcx_4 = (rcx_1 - rdx_2 - r10_2) ^ r10_2 u>> 0xc
int32_t rdx_5 = (rdx_2 - rcx_4 - r10_2) ^ rcx_4 << 0x10
int32_t r10_5 = (r10_2 - rdx_5 - rcx_4) ^ rdx_5 u>> 5
int32_t rcx_7 = (rcx_4 - rdx_5 - r10_5) ^ r10_5 u>> 3
int32_t rdx_8 = (rdx_5 - rcx_7 - r10_5) ^ rcx_7 << 0xa
int32_t r10_8 = (r10_5 - rdx_8 - rcx_7) ^ rdx_8 u>> 0xf
int32_t r11_10 = (((r11_5 - r9_7 - r8_7) ^ r9_7 u>> 0xf) - r10_8) ^ r10_8 u>> 0xd
int32_t rbx_3 = (0x9e3779b9 - r11_10 - r10_8) ^ r11_10 << 8
int32_t r10_11 = (r10_8 - rbx_3 - r11_10) ^ rbx_3 u>> 0xd
int32_t r11_13 = (r11_10 - rbx_3 - r10_11) ^ r10_11 u>> 0xc
int32_t rbx_6 = (rbx_3 - r11_13 - r10_11) ^ r11_13 << 0x10
int32_t r10_14 = (r10_11 - rbx_6 - r11_13) ^ rbx_6 u>> 5
int32_t r11_16 = (r11_13 - rbx_6 - r10_14) ^ r10_14 u>> 3
int32_t rbx_9 = (rbx_6 - r11_16 - r10_14) ^ r11_16 << 0xa
sub_1417acf10(arg1, arg2, (r10_14 - rbx_9 - r11_16) ^ rbx_9 u>> 0xf, var_10, var_18, arg4)
return arg2
