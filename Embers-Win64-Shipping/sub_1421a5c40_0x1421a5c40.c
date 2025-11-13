// 函数: sub_1421a5c40
// 地址: 0x1421a5c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)

if (rdi.d == 0)
    return 

int32_t rcx = arg1[1].d
int32_t rdx = rcx + rdi.d

if (rdx s> *(arg1 + 0xc))
    sub_140775c70(arg1, rdx)
    rcx = arg1[1].d

memcpy(*arg1 + sx.q(rcx) * 0x48, *arg2, (rdi * 0x48).d)
arg1[1].d += rdi.d
