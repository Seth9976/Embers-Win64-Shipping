// 函数: sub_140943e00
// 地址: 0x140943e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg1
uint64_t rbx = zx.q(arg2)

if (rax == 6 || rax == 8 || rax == 0xa)
    j_sub_140a74f90(*(arg1 + 8))

*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*arg1 = 8

if (rbx.d == 0)
    return 0

arg1[4] = rbx.d
int64_t rax_1 = j_sub_140a82f30(rbx)
*(arg1 + 8) = rax_1
return memcpy(rax_1, arg3, rbx.d)
