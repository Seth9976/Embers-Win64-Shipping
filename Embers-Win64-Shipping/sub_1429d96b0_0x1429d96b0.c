// 函数: sub_1429d96b0
// 地址: 0x1429d96b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 8)
void* rcx = *(arg1 + 0x10)
int32_t rbx = ((*(rdx + 0x170) - *(rdx + 0x168)) s>> 2).d
    + ((((*(rdx + 0xb0) - *(rdx + 0xa8)) s>> 2).d + *(rdx + 4)) << 1)
sub_14058d4e0(rcx + 0x150, sx.q(*(rcx + 8) * 2))
int64_t rbx_1 = sx.q(rbx)
sub_14058d4e0(*(arg1 + 0x10) + 0x168, rbx_1)
sub_1429cd2b0(*(arg1 + 0x10) + 0x180, rbx_1)

if (*(arg1 + 0x54) != 0)
    sub_1429d97b0(arg1)
    sub_1429d7d40(arg1)
else
    sub_1429d7d40(arg1)
    sub_1429d97b0(arg1)

void* r9 = *(arg1 + 0x10)
int64_t r8_4 = *(r9 + 0x150)
int32_t rcx_9 = *(r9 + 8) * 2
int64_t rbx_2 = sx.q(*(r8_4 + (sx.q(rcx_9 - 2) << 2)) + *(r8_4 + (sx.q(rcx_9 - 1) << 2)))
sub_14058d4e0(r9 + 0x168, rbx_2)
return sub_1429cd2b0(*(arg1 + 0x10) + 0x180, rbx_2) __tailcall
