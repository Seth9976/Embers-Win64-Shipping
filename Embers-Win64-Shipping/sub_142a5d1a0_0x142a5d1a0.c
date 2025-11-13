// 函数: sub_142a5d1a0
// 地址: 0x142a5d1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rax = *(arg1 + 0x170)
void* rax_1

if (rax != 0)
    rax_1 = *rax
else
    rax_1 = sub_142abb060()

int32_t rcx = *(rax_1 + 0x74)

if (rcx != 1)
    return zx.q(rcx)

int32_t rcx_1 = *(rax_1 + 0x50)

if (rcx_1 == 0)
    return 1

return zx.q(int.d(sub_142a4bd30(rcx_1)))
