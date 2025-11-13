// 函数: sub_14151c430
// 地址: 0x14151c430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg3)
int64_t rdi = rbp * 0xc
int32_t* rbx_1 = *(arg1 + 0x80) + rdi
int32_t r9 = *rbx_1
int64_t r8 = *(arg2 + (zx.q(r9) u>> 0x1c << 3) + 8)
sub_14151c1a0(zx.q(*(rbx_1 + 0xb)) * 0xa8 + 0x98 + r8, arg2, r8, (r9 u>> 0x18).b & 0xf, 
    r9 & 0xffffff, arg4)
*(arg1 + 0x94) -= 1
rbx_1[2] |= 0xff000000
int32_t r9_3 = rbp.d & 0xffffff
*rbx_1 = 0xffffffff
int64_t rdx = *(arg1 + 0x80)
void* r8_1 = rdi + rdx
int64_t r10_4 = sx.q(*(arg1 + 0x90))
*(rdx + (zx.q(*(rdi + rdx + 8)) & 0xffffff) * 0xc + 4) = *(r8_1 + 4)
void* rdx_1 = *(arg1 + 0x80) + sx.q(*(r8_1 + 4)) * 0xc
*(rdx_1 + 8) ^= (*(r8_1 + 8) ^ *(rdx_1 + 8)) & 0xffffff
int32_t rax_13 = (*(r8_1 + 8) & 0xff000000) | r9_3
*(r8_1 + 8) = rax_13
*(r8_1 + 4) = rax_13 & 0xffffff
int64_t rdx_2 = *(arg1 + 0x80)
void* r8_2 = rdx_2 + r10_4 * 0xc
int32_t rax_15 = *(rdi + rdx_2 + 8)
*(rdi + rdx_2 + 4) = r10_4.d
*(rdi + rdx_2 + 8) ^= (rax_15 ^ *(r8_2 + 8)) & 0xffffff
int64_t result = *(arg1 + 0x80)
*(result + (zx.q(*(r8_2 + 8)) & 0xffffff) * 0xc + 4) = rbp.d
*(r8_2 + 8) &= 0xff000000
*(r8_2 + 8) |= r9_3
return result
