// 函数: sub_1427f5dc0
// 地址: 0x1427f5dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_4 = arg2[1].d
int64_t rcx = *arg2
int32_t r8 = r8_4 + not.d(r8_4 << 0xf)
uint32_t r8_1 = ((zx.q(r8 u>> 0xa) ^ zx.q(r8)) * 9).d
uint32_t r8_2 = r8_1 ^ r8_1 u>> 6
uint32_t r8_3 = r8_2 + not.d(r8_2 << 0xb)
int64_t rcx_1 = rcx + not.q(rcx << 0x20)
int64_t rcx_2 = rcx_1 ^ rcx_1 u>> 0x16
int64_t rcx_3 = rcx_2 + not.q(rcx_2 << 0xd)
int64_t rcx_4 = (rcx_3 u>> 8 ^ rcx_3) * 9
int64_t rcx_5 = rcx_4 ^ rcx_4 u>> 0xf
int64_t rcx_6 = rcx_5 + not.q(rcx_5 << 0x1b)
return (zx.q(((rcx_6 u>> 0x1f).d ^ rcx_6.d ^ 0xfc955b95) * 0xf4247) ^ zx.q(r8_3 u>> 0x10)
    ^ zx.q(r8_3)) & zx.q(*(arg1 + 0x24) - 1)
