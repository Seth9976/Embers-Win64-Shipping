// 函数: sub_142390150
// 地址: 0x142390150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r11 = *(arg1 + 0xf4)
int32_t rbx = (arg2 * 3).d
int64_t r10 = *(arg1 + 0xe8)
int64_t rax = sx.q(rbx)
uint32_t r8

if (r11 == 0)
    r8 = zx.d(*(r10 + (rax << 1)))
else
    r8 = *(r10 + (rax << 2))

int32_t rdx_1 = *(arg1 + 0x184) & 1
int64_t rcx = sx.q(rdx_1 + rbx)
uint32_t r14

if (r11 == 0)
    r14 = zx.d(*(r10 + (rcx << 1) + 2))
else
    r14 = *(r10 + (rcx << 2) + 4)

int64_t rax_3 = sx.q(rbx + (rdx_1 ^ 1))
uint32_t rbp

if (r11 == 0)
    rbp = zx.d(*(r10 + (rax_3 << 1) + 2))
else
    rbp = *(r10 + (rax_3 << 2) + 4)

void* rcx_1 = *(arg1 + 0xe0)
sub_14238f690(rcx_1 + 0xf8, rcx_1 + 0x70, r8, arg1 + 0x100, arg1 + 0x140, arg3)
void* rcx_3 = *(arg1 + 0xe0)
sub_14238f690(rcx_3 + 0xf8, rcx_3 + 0x70, r14, arg1 + 0x100, arg1 + 0x140, arg4)
void* rcx_5 = *(arg1 + 0xe0)
return sub_14238f690(rcx_5 + 0xf8, rcx_5 + 0x70, rbp, arg1 + 0x100, arg1 + 0x140, arg5)
