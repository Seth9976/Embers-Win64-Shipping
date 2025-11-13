// 函数: sub_141d311b0
// 地址: 0x141d311b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *arg1

if (rbx u< 0x1000000)
    return 

int64_t rsi_1 = *(arg2 + 0x550)
uint64_t rax_2 = zx.q(rbx) & 0xffffff
uint64_t r14_1 = rax_2 << 2
uint64_t rax = zx.q(*(rsi_1 + (rax_2 << 2) + 3))

if (rax.d != rbx u>> 0x18)
    return 

rax.b += 1
*(rsi_1 + r14_1 + 3) = rax.b
int64_t rcx_3 = *(*(arg2 + 0x580) + (zx.q(rbx) & 0xffffff) * 0x28 + 8)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int32_t rbx_1 = rbx & 0xffffff
uint64_t rdx = arg2 + 0x560
rax = *(rdx + 0x10)

if (rax != 0)
    rdx = rax

int64_t r8_1 = rdx + (zx.q(rbx_1) u>> 5 << 2)
*r8_1 &= not.d(1 << (rbx_1.b & 0x1f))
*(arg2 + 0x590) -= 1

if (*(rsi_1 + r14_1 + 3) == 0)
    return 

int32_t rcx_8 = *(arg2 + 0x548)

if (rcx_8 != 0xffffff)
    rax = *(arg2 + 0x550)
    *(r14_1 + rax) ^= (rcx_8 ^ *(r14_1 + rax)) & 0xffffff

*(arg2 + 0x548) = rbx_1
