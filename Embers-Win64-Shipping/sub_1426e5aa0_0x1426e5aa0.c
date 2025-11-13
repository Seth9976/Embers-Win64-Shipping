// 函数: sub_1426e5aa0
// 地址: 0x1426e5aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg2
int32_t* rbx_1 = zx.q(*(arg1 + 0x52)) + *(zx.q(*(r8 + 0x260)) * 0x58 + *(r8 + 0x110) + 0x30)
void* rax_2 = *(r8 + 0xa8)

if (rax_2 == 0)
    rax_2 = sub_141ee69e0(r8)

int32_t result = *(rax_2 + 0x520)
rbx_1[1].b &= 0xfe
*rbx_1 = result
return result
