// 函数: sub_14201c450
// 地址: 0x14201c450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x48)
int64_t rdx = sx.q(*(arg1 + 0x50))

for (; i != &i[rdx * 4]; i = &i[4])
    if (*i == arg2 && i[2] == *arg4)
        return i

int32_t rax = (rdx + 1).d
*(arg1 + 0x50) = rax

if (rax s> *(arg1 + 0x54))
    sub_1405c4e40(arg1 + 0x48)

int64_t* rdx_2 = *(arg1 + 0x48) + (rdx << 5)
rdx_2[1] = 0
rdx_2[2] = 0
rdx_2[3].d &= 0xfffffffe
int32_t rcx_2 = rdx_2[3].d
*rdx_2 = arg2
rdx_2[1] = arg3
rdx_2[2] = *arg4
i = zx.q(arg5)
rdx_2[3].d = (rcx_2 & 0xfffffffe) | i.d
return i
