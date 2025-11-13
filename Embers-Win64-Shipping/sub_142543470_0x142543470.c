// 函数: sub_142543470
// 地址: 0x142543470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*(arg1 + 0x28) = 0
*(arg1 + 8) = 0xffffffff
*(arg1 + 0xc) = 0
__builtin_memset(&arg1[0x18], 0, 0x14)
int64_t arg_8 = 0

if (*(arg1 + 0x2c) s<= 0xffffffff)
    sub_1405947f0(&arg1[0x20], 0)

int16_t* rax = *(arg1 + 0x20)

if (rax != 0)
    *rax = 0

*(arg1 + 0x10) = 0
*(arg1 + 0x50) = 0
*(arg1 + 0x30) = 0xffffffff
*(arg1 + 0x34) = 0
__builtin_memset(&arg1[0x40], 0, 0x14)
int32_t rax_1 = *(arg1 + 0x54)
arg_8 = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_1405947f0(&arg1[0x48], 0)

int16_t* rax_2 = *(arg1 + 0x48)

if (rax_2 != 0)
    *rax_2 = 0

*(arg1 + 0x38) = 0
return arg1
