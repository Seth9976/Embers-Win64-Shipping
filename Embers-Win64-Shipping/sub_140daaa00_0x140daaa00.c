// 函数: sub_140daaa00
// 地址: 0x140daaa00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11_17 = *arg1
int32_t r9 = arg1[1]
int32_t r8_2 = r11_17 u>> 0xd ^ neg.d(r11_17)
int32_t rdx_2 = (0x9e3779b9 - r8_2 - r11_17) ^ r8_2 << 8
int32_t r11_2 = (r11_17 - rdx_2 - r8_2) ^ rdx_2 u>> 0xd
int32_t r8_5 = (r8_2 - rdx_2 - r11_2) ^ r11_2 u>> 0xc
int32_t rdx_5 = (rdx_2 - r8_5 - r11_2) ^ r8_5 << 0x10
int32_t r11_5 = (r11_2 - rdx_5 - r8_5) ^ rdx_5 u>> 5
int32_t r8_8 = (r8_5 - rdx_5 - r11_5) ^ r11_5 u>> 3
int32_t rdx_8 = (rdx_5 - r8_8 - r11_5) ^ r8_8 << 0xa
int32_t r11_10 = (((r11_5 - rdx_8 - r8_8) ^ rdx_8 u>> 0xf) - r9) ^ r9 u>> 0xd
int32_t r10_2 = (0x9e3779b9 - r11_10 - r9) ^ r11_10 << 8
int32_t r9_3 = (r9 - r10_2 - r11_10) ^ r10_2 u>> 0xd
int32_t r11_13 = (r11_10 - r10_2 - r9_3) ^ r9_3 u>> 0xc
int32_t r10_5 = (r10_2 - r11_13 - r9_3) ^ r11_13 << 0x10
int32_t r9_6 = (r9_3 - r10_5 - r11_13) ^ r10_5 u>> 5
int32_t r11_16 = (r11_13 - r10_5 - r9_6) ^ r9_6 u>> 3
int32_t r10_8 = (r10_5 - r11_16 - r9_6) ^ r11_16 << 0xa
return zx.q(r9_6 - r10_8 - r11_16) ^ zx.q(r10_8 u>> 0xf)
