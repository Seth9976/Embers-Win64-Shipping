// 函数: sub_142b2bdf0
// 地址: 0x142b2bdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x190)

if (rax == 0)
    return 0xffffffff

int64_t rcx = *(arg1 + 0x188)
*(arg1 + 0x190) = rax - 1
uint32_t result = zx.d(*(sx.q(rax - 1) + rcx))

if (result.b s>= 0)
    return result

return sub_142a9be90(rcx, 0, arg1 + 0x190, result, 0xfd)
