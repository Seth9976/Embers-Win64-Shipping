// 函数: sub_140ff5840
// 地址: 0x140ff5840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 1
int32_t rax = 1

if (arg4 u>= 1)
    rax = arg4

data_143f0f218
data_143f0f218 += rax * arg3
data_143f0f214 += 1
sub_140fde960(arg1 - 0x18)
(*(*(arg1 - 0x18) + 0x750))(arg1 - 0x18)
int32_t rcx_2 = *(arg1 + 0x26c8)

if (rcx_2 == 0)
    rbx = rcx_2 + 3
else if (rcx_2 == 2)
    rbx = 2
else if (rcx_2 == 5)
    rbx = rcx_2 - 2
else if (rcx_2 u>= 6)
    rbx = rcx_2 - 5

int32_t rax_4 = 0

if (rcx_2 == 1)
    rax_4 = 2

int32_t rbx_2 = rbx * arg3 + rax_4

if (*(arg1 + 0x17d00) != 0)
    void* rax_5 = *(arg1 + 0x17d18)
    
    if (rax_5 != 0)
        *(rax_5 + 0x10) += 1
        void* rax_6 = *(arg1 + 0x17d18)
        *(rax_6 + 0x14) += arg3 * arg4
        void* rcx_3 = *(arg1 + 0x17d18)
        *(rcx_3 + 0x18) += rbx_2 * arg4
        rcx_2 = *(arg1 + 0x26c8)

int32_t rax_9 = sub_140fe8110(rcx_2, *(arg1 + 0x43bd))

if (*(arg1 + 0x1d78) != rax_9)
    int64_t* rcx_4 = *(arg1 + 0x170)
    *(arg1 + 0x1d78) = rax_9
    int64_t r8 = *rcx_4
    (*(r8 + 0xc0))(rcx_4, zx.q(rax_9), r8)

int64_t* rcx_5 = *(arg1 + 0x138)
uint64_t rdx_2 = zx.q(rbx_2)
int64_t rax_10 = *rcx_5

if (arg4 u<= 1)
    (*(rax_10 + 0x68))(rcx_5, rdx_2, zx.q(arg2))
else
    (*(rax_10 + 0xa8))(rcx_5, rdx_2, zx.q(arg4), zx.q(arg2), 0)

return sub_140fdca30(arg1 - 0x18) __tailcall
