// 函数: sub_142a41d50
// 地址: 0x142a41d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0

uint64_t rax_1 = sub_142a421d0(arg1)

if (rax_1 == 0)
    return 0

if (data_144015388 != 0)
    sub_142a43d70(5)

int64_t result = sub_142a42ea0(0, rax_1, 0, MEM_COMMIT | MEM_RESERVE)

if (result == 0)
    sub_142a43740("unable to alloc mem error: err: %i size: 0x%x \n", zx.q(GetLastError()))

j_sub_142a44ce0(arg2 + 0x120, 1)

if (result != 0)
    j_sub_142a44ce0(arg2 + 0x40, rax_1)
    j_sub_142a44ce0(arg2 + 0x60, rax_1)

return result
