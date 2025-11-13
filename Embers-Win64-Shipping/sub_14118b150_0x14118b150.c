// 函数: sub_14118b150
// 地址: 0x14118b150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = 0x1b10

if (arg5 == 0)
    r8 = 0x18e0

void* rax = *(arg1 + 0x18)
int32_t rax_1

if (rax == 0)
    rax_1 = -1
else
    rax_1 = *(rax + 0x18)

arg5.d = rax_1
return sub_141e93730(r8 + *(arg1 + 0x10), arg2, arg3, arg4) __tailcall
