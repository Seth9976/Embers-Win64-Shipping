// 函数: sub_14150be40
// 地址: 0x14150be40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14 = zx.q(arg4)
sub_14150bb10(arg2 + 0x98 + r14 * 0xa8, arg2, arg3, arg5, arg6, arg7, arg8)
int64_t rdx = sx.q(*(arg1 + 0x90))
*(arg1 + 0x94) += 1
int64_t r9_1 = *(arg1 + 0x80)
int64_t rbx_1 = sx.q(*(r9_1 + rdx * 0xc + 4))

if (rbx_1.d == rdx.d)
    rbx_1 = sx.q(*(arg1 + 0x88))
    int32_t rax_14 = (rbx_1 + 1).d
    *(arg1 + 0x88) = rax_14
    
    if (rax_14 s> *(arg1 + 0x8c))
        sub_14083a7e0(arg1 + 0x80)
    
    int64_t rdx_3 = *(arg1 + 0x80)
    int64_t rcx_7 = rbx_1 * 3
    *(rdx_3 + (rcx_7 << 2) + 8) ^= (*(rdx_3 + (rcx_7 << 2) + 8) ^ rbx_1.d) & 0xffffff
    *(rdx_3 + (rcx_7 << 2) + 4) = *(rdx_3 + (rcx_7 << 2) + 8) & 0xffffff
else
    int64_t rcx_3 = rbx_1 * 3
    void* r8 = r9_1 + (rcx_3 << 2)
    *(r9_1 + (zx.q(*(r9_1 + (rcx_3 << 2) + 8)) & 0xffffff) * 0xc + 4) = *(r8 + 4)
    int64_t rcx_5 = sx.q(*(r8 + 4)) * 3
    int64_t rax_5 = *(arg1 + 0x80)
    void* rdx_1 = rax_5 + (rcx_5 << 2)
    *(rdx_1 + 8) ^= (*(rax_5 + (rcx_5 << 2) + 8) ^ *(r8 + 8)) & 0xffffff
    *(r8 + 8) ^= (*(r8 + 8) ^ rbx_1.d) & 0xffffff
    *(r8 + 4) = *(r8 + 8) & 0xffffff

int64_t rdx_4 = *(arg1 + 0x80)
uint64_t r8_1 = zx.q(arg8)
void* r10_1 = rdx_4 + r8_1 * 0xc
int64_t r9_2 = sx.q(rbx_1.d) * 0xc
int32_t rax_21 = *(r9_2 + rdx_4 + 8)
*(r9_2 + rdx_4 + 4) = r8_1.d
*(r9_2 + rdx_4 + 8) ^= (rax_21 ^ *(r10_1 + 8)) & 0xffffff
*(*(arg1 + 0x80) + (zx.q(*(r10_1 + 8)) & 0xffffff) * 0xc + 4) = rbx_1.d
*(r10_1 + 8) &= 0xff000000
*(r10_1 + 8) |= rbx_1.d & 0xffffff
int32_t* rdx_5 = *(arg1 + 0x80)
int32_t result = zx.d(arg5) & 0xf
int32_t rcx_13 = zx.d(*(arg2 + 0x69c)) << 4 | result
*(&rdx_5[sx.q(rbx_1.d) * 3] + 0xb) = r14.b
rdx_5[sx.q(rbx_1.d) * 3] = rcx_13 << 0x18 | (arg6 & 0xffffff)
return result
