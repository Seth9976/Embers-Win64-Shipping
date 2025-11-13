// 函数: sub_142b551e0
// 地址: 0x142b551e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1
int32_t rdi_1

if (arg2 s< 0)
    int32_t rdx_5 = (arg2 + 1) s/ 0xd
    rdi_1 = arg1 - 1 + rdx_5
    rbx_1 = arg2 + 1 + 0xc - rdx_5 * 0xd
else
    int32_t rdx_2 = arg2 s/ 0xd
    rdi_1 = arg1 + rdx_2
    rbx_1 = arg2 + rdx_2 * 0xfffffff3

return zx.q(sub_142acca40(rdi_1, 4) + arg4 - 1 + rbx_1 * 0x1e + rdi_1 * 0x16d + arg3)
