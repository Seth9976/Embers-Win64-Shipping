// 函数: sub_140a7dc70
// 地址: 0x140a7dc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_20 = arg1[1]
void* rdx_1 = zx.q(arg2) + arg1
int64_t var_38 = *(rdx_1 - 0x20)
int64_t var_28 = *(rdx_1 - 0x18)
int64_t rcx = arg1[3] * 9
int64_t zmm0 = *(rdx_1 - 8)
int64_t rdi_2 = zmm0 - *arg1 * 0x651e95c4d06fbfb1
int64_t rdx_3 = rcx + 1 + (rdi_2 ^ var_38)
int64_t rsi_1 = *(rdx_1 - 0x10) * (zx.q(arg2 * 2) + -0x651e95c4d06fbfb1)
int64_t rcx_1 = rcx - arg1[2] * 0x651e95c4d06fbfb1
int64_t rbx_2 = rol.q(rcx_1, 0x16) + var_28
int64_t r9 = rcx_1 + var_28
int64_t rdi_20 = (_bswap((_bswap((_bswap((rol.q(rdi_2, 0x15) + (ror.q(var_20, 0x1e) + var_28) * 9
    + rdx_3) * (zx.q(arg2 * 2) + -0x651e95c4d06fbfb1)) + rdx_3 + rsi_1)
    * (zx.q(arg2 * 2) + -0x651e95c4d06fbfb1)) + zmm0 + r9 + rbx_2)
    * (zx.q(arg2 * 2) + -0x651e95c4d06fbfb1)) + var_20 + r9) * (zx.q(arg2 * 2) + -0x651e95c4d06fbfb1)
    + var_38 + rsi_1
return (rdi_20 u>> 0x2f ^ rdi_20) * (zx.q(arg2 * 2) + -0x651e95c4d06fbfb1) + rbx_2
