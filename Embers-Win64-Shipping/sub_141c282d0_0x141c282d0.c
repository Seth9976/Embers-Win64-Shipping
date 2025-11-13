// 函数: sub_141c282d0
// 地址: 0x141c282d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x38) = 0
*(arg1 + 0x18) = 0xffffffff
*(arg1 + 0x1c) = 0
__builtin_memset(arg1 + 0x28, 0, 0x14)
int64_t arg_8 = 0

if (*(arg1 + 0x3c) s<= 0xffffffff)
    sub_1405947f0(arg1 + 0x30, 0)

int16_t* rax = *(arg1 + 0x30)

if (rax != 0)
    *rax = 0

*(arg1 + 0x20) = 0
return arg1
