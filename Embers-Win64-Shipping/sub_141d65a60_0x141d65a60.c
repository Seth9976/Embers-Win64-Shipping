// 函数: sub_141d65a60
// 地址: 0x141d65a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x18)
*(arg1 + 0x18) = 0x18
*(arg1 + 0x1c) = 1
*(arg1 + 0x24) = 0
*(arg1 + 0x28) = 0x18
*(arg1 + 0x2c) = 1
__builtin_memset(arg1 + 0x30, 0, 0x18)
*(arg1 + 0x48) = 0x18
*(arg1 + 0x4c) = 1
*(arg1 + 0x54) = 0
*(arg1 + 0x58) = 0x18
*(arg1 + 0x5c) = 1
*(arg1 + 0x60) = 0
*(arg1 + 0x68) = 0
*(arg1 + 0x90) = 0
*(arg1 + 0x70) = 0xffffffff
*(arg1 + 0x74) = 0
__builtin_memset(arg1 + 0x80, 0, 0x14)
int64_t arg_8 = 0

if (*(arg1 + 0x94) s<= 0xffffffff)
    sub_1405947f0(arg1 + 0x88, 0)

int16_t* rax = *(arg1 + 0x88)

if (rax != 0)
    *rax = 0

*(arg1 + 0x78) = 0
*(arg1 + 0x98) = 4
*(arg1 + 0x9c) = 0x1e
*(arg1 + 0xa0) = 1
*(arg1 + 0xb0) = 0xffffffff
return arg1
