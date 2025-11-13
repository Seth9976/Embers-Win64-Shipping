// 函数: sub_141191280
// 地址: 0x141191280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* r9_1 = *arg3
void* rax = *(r9_1 + 0x68)

if (rax != 0)
    r9_1 = rax

void* r14_1 = *(r9_1 + 0x28)

if (*(r14_1 + 0x35) != 0)
    *(arg1 + 0xd0) = 1

int64_t rbp_1 = sx.q(*(arg1 + 0x88))
int32_t rax_1 = (rbp_1 + 1).d
*(arg1 + 0x88) = rax_1

if (rax_1 s> *(arg1 + 0x8c))
    sub_141104ec0(arg1 + 0x80, rbp_1.d)

int128_t* rbx_1 = *(arg1 + 0x80) + rbp_1 * 0x28
__builtin_memset(rbx_1, 0, 0x28)
*rbx_1 = *arg3
rbx_1[1].q = arg3[2]
*(rbx_1 + 0x18) = *arg2
*arg2 += 1
void* rcx_3 = *arg3
void* rax_4 = *(rcx_3 + 0x68)

if (rax_4 != 0)
    rcx_3 = rax_4

*(rbx_1 + 0x1c) = *(rcx_3 + 0x20)
int32_t r8 = *(r14_1 + 0x74)
rbx_1[2].d = r8
uint64_t i = *(arg1 + 0x90)
int64_t rdx_1 = sx.q(*(arg1 + 0x98))
int64_t rsi_2 = rdx_1 << 3

for (int64_t r9_2 = rsi_2 + i; i != r9_2; i += 8)
    if (*(i + 4) == r8 && *i == *(rbx_1 + 0x1c))
        return 

int32_t rax_6 = (rdx_1 + 1).d
*(arg1 + 0x98) = rax_6

if (rax_6 s> *(arg1 + 0x9c))
    sub_14083a440(arg1 + 0x90, rdx_1.d)

int32_t* rcx_6 = *(arg1 + 0x90)
*(rcx_6 + rsi_2) = 0
rcx_6[rdx_1 * 2 + 1] = rbx_1[2].d
rcx_6[rdx_1 * 2] = *(rbx_1 + 0x1c)
