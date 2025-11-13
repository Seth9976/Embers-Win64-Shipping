// 函数: sub_141c4c1f0
// 地址: 0x141c4c1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)
int64_t* rbx = arg1
int64_t rsi = *arg2
int32_t r8 = *(arg1 + 0xc)
arg1[1].d = rdi.d

if (rdi.d == 0 && r8 == 0)
    *(arg1 + 0xc) = rdi.d
    return arg1

sub_141c457d0(arg1, rdi.d, r8)
memcpy(*rbx, rsi, (rdi << 2).d)
return rbx
