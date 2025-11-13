// 函数: sub_140403430
// 地址: 0x140403430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_10 = *(arg1 + 0x20)
int32_t r9 = *(arg1 + 0x18)
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(r8_10)
uint32_t r8 = r8_10 u>> ((temp0 + 1).b - 0x10)
uint32_t r8_2 = (r8 * r8) u>> 0xf
uint32_t rcx_2 = r8_2 u>> 0x10
uint32_t r8_3 = r8_2 u>> rcx_2.b
uint32_t r8_5 = (r8_3 * r8_3) u>> 0xf
uint32_t rcx_4 = r8_5 u>> 0x10
uint32_t r8_6 = r8_5 u>> rcx_4.b
return zx.q((r9 << 3)
    - ((r8_6 * r8_6) u>> 0x1f | ((((((temp0 + 1) * 2) | rcx_2) * 2) | rcx_4) * 2)))
