// 函数: sub_140e19c80
// 地址: 0x140e19c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rax = j_sub_140a82f30(0x28)
void** r10 = rax

if (rax == 0)
    r10 = rax
else
    int32_t r8_1 = *(arg1 + 0x2c)
    bool cond:0_1 = *(arg1 + 0x34) != 0
    int32_t rdx_1 = *(arg1 + 0x28)
    __builtin_memset(r10, 0, 0x18)
    r10[4].b = cond:0_1
    r10[3].d = rdx_1
    *(r10 + 0x1c) = r8_1

void** rax_2 = *(arg1 + 0x20)

if (rax_2 != 0)
    rax_2[1] = r10
    rax_2 = *(arg1 + 0x20)

*r10 = rax_2
r10[1] = arg1 + 0x20
*(arg1 + 0x20) = r10
int32_t rax_3 = *(arg1 + 0x30)
int32_t rdi = *(arg1 + 0x28)
int32_t rcx_1 = *(arg1 + 0x2c)
int32_t rdx_4 = rax_3 * rdi * rcx_1

if (rdx_4 s> *(arg1 + 0x14))
    sub_1405c5510(arg1 + 8, rdx_4)
    rax_3 = *(arg1 + 0x30)
    rcx_1 = *(arg1 + 0x2c)
    rdi = *(arg1 + 0x28)

int64_t rbx_1 = sx.q(*(arg1 + 0x10))
int32_t rdi_2 = rdi * rcx_1 * rax_3
int32_t rax_4 = rbx_1.d + rdi_2
*(arg1 + 0x10) = rax_4

if (rax_4 s> *(arg1 + 0x14))
    sub_1405daba0(arg1 + 8)

return memset(rbx_1 + *(arg1 + 8), 0, sx.q(rdi_2)) __tailcall
