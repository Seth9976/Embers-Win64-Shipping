// 函数: sub_142965020
// 地址: 0x142965020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rcx = arg2[8].d
uint64_t r9_1 = zx.q(rcx u>> 3)
void* rdx_1 = &arg2[4] + r9_1
int32_t rcx_1 = rcx & 7

if (rcx_1 == 0)
    *rdx_1 = 0x80
else
    *rdx_1 |= (0x80 s>> rcx_1.b).b

int32_t r9_2 = r9_1.d + 1

if (r9_2 u> 0x20)
    if (r9_2 u< 0x40)
        memset(&arg2[4] + zx.q(r9_2), 0, zx.q(0x40 - r9_2))
    
    sub_1429750a0(arg2, &arg2[4], 1)
    r9_2 = 0
    memset(&arg2[4] + zx.q(r9_2), 0, zx.q(0x20 - r9_2))
else if (r9_2 u< 0x20)
    memset(&arg2[4] + zx.q(r9_2), 0, zx.q(0x20 - r9_2))

void* rax_4 = arg2 + 0x7f
int64_t i_1 = 4
void* rdx_3 = arg2 + 0x88
int64_t i

do
    int64_t rcx_7 = *rdx_3
    rdx_3 += 8
    *rax_4 = rcx_7.b
    rax_4 -= 8
    uint64_t rcx_8 = rcx_7 u>> 8
    *(rax_4 + 7) = rcx_8.b
    uint64_t rcx_9 = rcx_8 u>> 8
    *(rax_4 + 6) = rcx_9.b
    uint64_t rcx_10 = rcx_9 u>> 8
    *(rax_4 + 5) = rcx_10.b
    uint64_t rcx_11 = rcx_10 u>> 8
    *(rax_4 + 4) = rcx_11.b
    uint64_t rcx_12 = rcx_11 u>> 8
    *(rax_4 + 3) = rcx_12.b
    uint64_t rcx_13 = rcx_12 u>> 8
    *(rax_4 + 2) = rcx_13.b
    *(rax_4 + 1) = (rcx_13 u>> 8).b
    i = i_1
    i_1 -= 1
while (i != 1)
sub_1429750a0(arg2, &arg2[4], 1)

if (arg1 == 0)
    return 0

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
sub_1428b8960(arg2, 0xa8)
return 1
