// 函数: sub_141a0e0c0
// 地址: 0x141a0e0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 1
*arg4 = 0
*arg5 = 1
*arg6 = 1
void* rcx = *(arg1 + 0x5e0)

if (rcx == 0)
    *arg4 = 1
    *arg5 = 0
    return 

int32_t rax = sub_1422e5bf0(rcx, arg2, rcx + 0x30)

if (rax == 4)
    rax = 2
    *arg4 = 1
else if (rax != 0)
    *arg4 = 1

if (rax u> 1)
    *arg5 = 0

if (rax != 2)
    *arg3 = 0

if (rax != 3)
    *arg6 = 0
