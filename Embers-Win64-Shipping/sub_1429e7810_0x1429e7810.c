// 函数: sub_1429e7810
// 地址: 0x1429e7810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
void* rax = sub_1429dddd0(rdi, 0x44)
*(arg1 + 0x3c8) = rax

if (rax == 0)
    return 1

*(arg1 + 0x3c0) = rdi.d
void* rax_2 = sub_1429dddd0(rdi, 8)
*(arg1 + 0x400) = rax_2
int32_t rcx_2
rcx_2.b = rax_2 == 0
return zx.q(rcx_2)
