// 函数: sub_1429dad60
// 地址: 0x1429dad60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r8 = *arg2
void* rax = *(arg1 + 0x1a8)

if (r8 == 0 || rax == 0)
    return 8

void* rax_1 = *(rax + 0x1a38)

if (rax_1 == 0)
    return 1

*r8 = *(rax_1 + 0x88)
return 0
