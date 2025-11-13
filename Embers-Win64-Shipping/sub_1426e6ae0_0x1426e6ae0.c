// 函数: sub_1426e6ae0
// 地址: 0x1426e6ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
uint32_t result = *(arg1 + 8) u>> 4
int32_t rcx_4

if ((result.b & 1) == 0)
    rcx_4 = *(arg1 + 0x98)
else
    int64_t rax_1 = sub_14272f680()
    sub_1426ab860(arg1, rax_1, arg1 + 0x88)
    result = zx.d(sub_1426b4710(arg1, rax_1)) << 2
    rcx_4 = (*(arg1 + 0x98) & 0xfffffffb) | result
    *(arg1 + 0x98) = rcx_4

if ((rcx_4 & 0x6000) != 0 || (rcx_4.b & 4) != 0)
    *(arg1 + 0x58) |= 3

return result
