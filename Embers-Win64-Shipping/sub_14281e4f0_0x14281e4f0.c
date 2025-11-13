// 函数: sub_14281e4f0
// 地址: 0x14281e4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xb0)

if (rcx != 0)
    sub_14281d8fc(rcx, *(arg1 + 0xb8))
    sub_14058ba50(*(arg1 + 0xb0), (*(arg1 + 0xc0) - *(arg1 + 0xb0)) & 0xfffffffffffffff8)
    __builtin_memset(arg1 + 0xb0, 0, 0x18)

sub_14281e584(arg1 + 0x98)
int64_t result = sub_14281e584(arg1 + 0x80)
int64_t rdx_5 = *(arg1 + 0x20)

if (rdx_5 u>= 0x10)
    result = sub_14058ba50(*(arg1 + 8), rdx_5 + 1)

*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0xf
*(arg1 + 8) = 0
return result
