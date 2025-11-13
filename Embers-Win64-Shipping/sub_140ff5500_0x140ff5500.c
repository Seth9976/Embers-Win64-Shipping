// 函数: sub_140ff5500
// 地址: 0x140ff5500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 1
int32_t rax = 1

if (arg8 u>= 1)
    rax = arg8

data_143f0f218
data_143f0f218 += rax * arg7
data_143f0f214 += 1

if (*(arg1 + 0x17d00) != 0)
    void* rax_3 = *(arg1 + 0x17d18)
    
    if (rax_3 != 0)
        *(rax_3 + 0x10) += 1
        void* rcx = *(arg1 + 0x17d18)
        *(rcx + 0x14) += arg7 * arg8
        void* rcx_1 = *(arg1 + 0x17d18)
        *(rcx_1 + 0x18) += arg5 * arg8

sub_140fde960(arg1 - 0x18)
(*(*(arg1 - 0x18) + 0x750))(arg1 - 0x18)
int32_t rcx_4 = *(arg1 + 0x26c8)
int32_t r8 = 0x2a

if (*(arg2 + 0x18) == 2)
    r8 = 0x39

if (rcx_4 == 0)
    rdi = 3
else if (rcx_4 == 2)
    rdi = 2
else if (rcx_4 == 5)
    rdi = rcx_4 - 2
else if (rcx_4 u>= 6)
    rdi = rcx_4 - 5

int32_t rax_9 = 0

if (rcx_4 == 1)
    rax_9 = 2

int32_t rdi_2 = rdi * arg7 + rax_9
*(arg1 + 0x40b8) = arg2 + 0x28
int64_t rdx = *(arg2 + 0x40)

if (*(arg1 + 0x25e8) != 0 || *(arg1 + 0x1d68) != rdx || *(arg1 + 0x1d70) != r8
        || *(arg1 + 0x1d74) != 0)
    int64_t* rcx_5 = *(arg1 + 0x170)
    *(arg1 + 0x1d68) = rdx
    *(arg1 + 0x1d70) = r8
    *(arg1 + 0x1d74) = 0
    (*(*rcx_5 + 0x98))(rcx_5, rdx, r8, 0)
    rcx_4 = *(arg1 + 0x26c8)

int32_t rax_12 = sub_140fe8110(rcx_4, *(arg1 + 0x43bd))

if (*(arg1 + 0x1d78) != rax_12)
    int64_t* rcx_6 = *(arg1 + 0x170)
    *(arg1 + 0x1d78) = rax_12
    int64_t r8_1 = *rcx_6
    (*(r8_1 + 0xc0))(rcx_6, zx.q(rax_12), r8_1)

if (arg8 u> 1 || arg4 != 0)
    int64_t* rcx_8 = *(arg1 + 0x138)
    (*(*rcx_8 + 0xa0))(rcx_8, zx.q(rdi_2), zx.q(arg8), zx.q(arg6), arg3, arg4)
else
    int64_t* rcx_7 = *(arg1 + 0x138)
    (*(*rcx_7 + 0x60))(rcx_7, zx.q(rdi_2), zx.q(arg6), zx.q(arg3))

return sub_140fdca30(arg1 - 0x18) __tailcall
