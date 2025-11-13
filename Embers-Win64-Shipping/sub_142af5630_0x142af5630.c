// 函数: sub_142af5630
// 地址: 0x142af5630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *(arg1 + 0x10)

if (rbx == 0)
    return *(arg1 + 8)

int32_t rax_1 = sub_142af5730(arg2, rbx, &rbx[1], *rbx)

if (rax_1 s< 0)
    return 0

int64_t rcx_1 = sx.q(rax_1)

if (rax_1 + 1 s>= *rbx)
    *arg3 = 0xffffffff
    return zx.q(rbx[rcx_1 * 2 + 2]) + rbx

*arg3 = rbx[rcx_1 * 2 + 4] - rbx[rcx_1 * 2 + 2]
return zx.q(rbx[rcx_1 * 2 + 2]) + rbx
