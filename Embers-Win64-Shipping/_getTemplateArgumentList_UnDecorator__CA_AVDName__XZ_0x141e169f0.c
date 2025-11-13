// 函数: ?getTemplateArgumentList@UnDecorator@@CA?AVDName@@XZ
// 地址: 0x141e169f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = *(arg1 + 0x28)
void var_98
int64_t* rax = sub_140596d10(&var_98, arg3)
int128_t zmm6
zmm6.d = arg2.d f* *arg1
int64_t r12 = *(arg1 + 0x40)
int64_t var_80 = 0
int64_t var_78 = 0
int32_t var_88 = zmm6.d
int64_t var_70
sub_140596d10(&var_70, rax)
int64_t rcx_2 = *rax
int64_t var_60 = r15
int64_t var_48 = r12

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = sx.q(arg1[4]) * 5
int64_t rax_2 = *(arg1 + 8)
int64_t rsi = sx.q(*(rax_2 + (rcx_3 << 3) - 8))
void* rbx_1 = rax_2 + (rcx_3 << 3)
int32_t rax_3 = (rsi + 1).d
*(rbx_1 - 8) = rax_3

if (rax_3 s> *(rbx_1 - 4))
    sub_140775520(rbx_1 - 0x10)

int64_t rcx_5 = *(rbx_1 - 0x10)
int64_t rdx_3 = rsi * 9
int64_t rax_4 = var_80
__builtin_memset(&var_80, 0, 0x20)
*(rcx_5 + (rdx_3 << 3)) = var_88
*(rcx_5 + (rdx_3 << 3) + 8) = rax_4
*(rcx_5 + (rdx_3 << 3) + 0x10) = var_78.d
*(rcx_5 + (rdx_3 << 3) + 0x14) = var_78:4.d
*(rcx_5 + (rdx_3 << 3) + 0x18) = var_70
int32_t var_68
*(rcx_5 + (rdx_3 << 3) + 0x20) = var_68
int32_t var_64
*(rcx_5 + (rdx_3 << 3) + 0x24) = var_64
*(rcx_5 + (rdx_3 << 3) + 0x28) = r15
*(rcx_5 + (rdx_3 << 3) + 0x30) = 0
*(rcx_5 + (rdx_3 << 3) + 0x38) = 0
*(rcx_5 + (rdx_3 << 3) + 0x40) = r12
int64_t var_58 = 0
int64_t var_50 = 0
sub_141e13280(&var_58)
int64_t rcx_7 = var_70

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_141e12f90(&var_80)
int64_t rdx_4 = *(arg1 + 8)
uint64_t r9 = sx.q(arg1[4])
uint64_t r8 = r9 * 5
int64_t rax_10 = sx.q(*(rdx_4 + (r8 << 3) - 8))
int64_t rax_11 = *(rdx_4 + (r8 << 3) - 0x10)

if (*(rax_11 + ((rax_10 * 9 - 8) << 3) + 0xc) s< 0x32)
    sub_1405c5660(rax_11 + ((rax_10 * 9 - 8) << 3), 0x32)
    r9 = zx.q(arg1[4])

int64_t rdx_5 = *(arg1 + 8)
int64_t r8_1 = sx.q(r9.d) * 5
int64_t result = *(rdx_5 + (r8_1 << 3) - 0x10) + sx.q(*(rdx_5 + (r8_1 << 3) - 8) - 1) * 0x48
int64_t rcx_13 = *arg3

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

return result
