// 函数: sub_1428a32a0
// 地址: 0x1428a32a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
bool cond:0 = *(arg1 + 0x18) == 0
int32_t rax_1

if (cond:0 || *(arg1 + 8) != 0)
    rax_1 = sub_1428ac180(arg1, nullptr)

if ((cond:0 || *(arg1 + 8) != 0) && rax_1 s< 0)
    return 0xfffffffe

if ((*(arg2 + 0x18) == 0 || *(arg2 + 8) != 0) && sub_1428ac180(arg2, nullptr) s< 0)
    return 0xfffffffe

int64_t rcx_1 = sx.q(*(arg1 + 0x20))
int32_t rax_3 = rcx_1.d

if (rax_3 == *(arg2 + 0x20) && rcx_1.d != 0)
    return memcmp(*(arg1 + 0x18), *(arg2 + 0x18), rcx_1) __tailcall

return zx.q(rax_3 - *(arg2 + 0x20))
