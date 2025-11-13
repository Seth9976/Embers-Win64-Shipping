// 函数: sub_1426e31d0
// 地址: 0x1426e31d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = *(arg1 + 0x20)
void* rax_1
int64_t rax_2
void* rdx_1

if (rbx != 0)
    rax_1 = sub_1427297d0()
    rdx_1 = *(rbx + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rbx == 0 || rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rbx = nullptr

return IsInExceptionSpec(rbx, arg1) __tailcall
