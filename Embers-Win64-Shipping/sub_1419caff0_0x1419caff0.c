// 函数: sub_1419caff0
// 地址: 0x1419caff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[2].d
int32_t rcx = *(arg2 + 0x14)
*arg3 = 0
arg3[1] = 0
*(arg3 + 0x14) = rcx
uint64_t rbp = zx.q(rax + 1)
arg3[2].d = rax
sub_140a30eb0(arg3, 0, rbp.d, 4, 0)
void* rcx_2 = *arg3

if ((rcx_2.b & 1) != 0)
    rcx_2 = (rcx_2 s>> 1) + arg3

memset(rcx_2, 0xff, zx.q((rbp << 2).d))
int32_t r8_2 = *(arg3 + 0x14)

if (r8_2 != 0)
    sub_140a30eb0(&arg3[1], 0, r8_2, 4, 0)

void* rdx_1 = *arg2

if ((rdx_1.b & 1) != 0)
    rdx_1 = (rdx_1 s>> 1) + arg2

void* rcx_5 = *arg3

if ((rcx_5.b & 1) != 0)
    rcx_5 = (rcx_5 s>> 1) + arg3

memcpy(rcx_5, rdx_1, ((zx.q(arg2[2].d) << 2) + 4).d)
void* rdx_2 = arg2[1]

if ((rdx_2.b & 1) != 0)
    rdx_2 = (rdx_2 s>> 1) + &arg2[1]

void* rcx_7 = arg3[1]

if ((rcx_7.b & 1) != 0)
    rcx_7 = (rcx_7 s>> 1) + &arg3[1]

return memcpy(rcx_7, rdx_2, *(arg2 + 0x14) << 2) __tailcall
