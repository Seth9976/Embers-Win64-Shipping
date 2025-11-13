// 函数: sub_142686e00
// 地址: 0x142686e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x4a8)

if (rax == 0)
    return 0x3f

void* rcx = *(rax + 8)
int32_t rbx = 0
void* arg_8
void arg_18

if (rcx != 0 && ((sub_142610d20(rcx, arg2, &arg_18, &arg_8) u>> 0x1e).b & 1) != 0)
    rbx = zx.d(*(arg_8 + 0x1f)) & 0x3f

return zx.q(rbx)
