// 函数: sub_1423afa20
// 地址: 0x1423afa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg2, 0, 0x1c)
void* r9 = *arg1
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(*(r9 + 0x20) + sx.q(arg1[1].d) * 0x28 + 0x10))
int32_t rdx_1 = temp0 & 3
int32_t rax_4 = temp1 + rdx_1
int32_t rcx_2 = rax_4 s>> 2

if (rcx_2 s>= 0 && rcx_2 s< *(r9 + 0x18))
    int64_t rcx_4 = sx.q((rax_4 & 3) - rdx_1)
    int64_t rdx_3 = sx.q(rcx_2) * 0xf0 + *(r9 + 0x10)
    *arg2 = *(rdx_3 + (rcx_4 << 2))
    arg2[1] = *(rdx_3 + (rcx_4 << 2) + 0x10)
    arg2[2] = *(rdx_3 + (rcx_4 << 2) + 0x20)
    arg2[3] = *(rdx_3 + (rcx_4 << 2) + 0x60)
    arg2[4] = *(rdx_3 + (rcx_4 << 2) + 0x70)
    arg2[5] = *(rdx_3 + (rcx_4 << 2) + 0x80)
    arg2[6] = *(rdx_3 + (rcx_4 << 2) + 0x90)

return arg2
