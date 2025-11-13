// 函数: sub_1428f8f00
// 地址: 0x1428f8f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t r11 = arg1[1]
int32_t r10 = *arg1
int32_t rax_3 = (r11 u>> 4 ^ r10) & 0xf0f0f0f
int32_t r10_1 = r10 ^ rax_3
int32_t r11_1 = r11 ^ rax_3 << 4
uint32_t rcx = zx.d((r10_1 u>> 0x10).w) ^ zx.d(r11_1.w)
int32_t r11_2 = r11_1 ^ rcx
int32_t r10_2 = r10_1 ^ rcx << 0x10
uint64_t rax_11 = (zx.q(r11_2 u>> 2) ^ zx.q(r10_2)) & 0x33333333
int32_t r10_3 = r10_2 ^ rax_11.d
int32_t r11_3 = r11_2 ^ (rax_11 << 2).d
int32_t rax_16 = (r10_3 u>> 8 ^ r11_3) & 0xff00ff
int32_t r11_4 = r11_3 ^ rax_16
int32_t r10_4 = r10_3 ^ rax_16 << 8
int32_t rcx_5 = (r11_4 u>> 1 ^ r10_4) & 0x55555555
*arg1 = rcx_5 ^ r10_4
arg1[1] = (rcx_5 * 2) ^ r11_4
sub_1428fa8b0(arg1, arg4, 0)
sub_1428fa8b0(arg1, arg3, 1)
sub_1428fa8b0(arg1, arg2, 0)
int32_t r8 = arg1[1]
int32_t rdx_3 = *arg1
int32_t rax_25 = (r8 u>> 1 ^ rdx_3) & 0x55555555
int32_t rdx_4 = rdx_3 ^ rax_25
int32_t r8_1 = r8 ^ (rax_25 * 2)
int32_t rax_30 = (rdx_4 u>> 8 ^ r8_1) & 0xff00ff
int32_t r8_2 = r8_1 ^ rax_30
int32_t rdx_5 = rdx_4 ^ rax_30 << 8
uint64_t rax_35 = (zx.q(r8_2 u>> 2) ^ zx.q(rdx_5)) & 0x33333333
int32_t rdx_6 = rdx_5 ^ rax_35.d
int32_t r8_3 = r8_2 ^ (rax_35 << 2).d
uint32_t rcx_9 = zx.d((rdx_6 u>> 0x10).w) ^ zx.d(r8_3.w)
int32_t r8_4 = r8_3 ^ rcx_9
int32_t rdx_7 = rdx_6 ^ rcx_9 << 0x10
int32_t rcx_14 = (r8_4 u>> 4 ^ rdx_7) & 0xf0f0f0f
int32_t result = rcx_14 ^ rdx_7
*arg1 = result
arg1[1] = rcx_14 << 4 ^ r8_4
return result
