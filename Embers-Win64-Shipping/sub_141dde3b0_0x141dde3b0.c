// 函数: sub_141dde3b0
// 地址: 0x141dde3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 &= 0xe0
*(arg1 + 4) = *(arg2 + 4)
*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0xc) = *(arg2 + 0xc)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x18) = *(arg2 + 0x18)
sub_140596d10(&arg1[0x20], arg2 + 0x20)
*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x38) = *(arg2 + 0x38)
*(arg1 + 0x3c) = *(arg2 + 0x3c)
*(arg1 + 0x44) = *(arg2 + 0x44)
*(arg1 + 0x48) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x50) = 0xffffffff
*(arg1 + 0x54) = 0
__builtin_memset(&arg1[0x60], 0, 0x14)
int64_t arg_8 = 0

if (*(arg1 + 0x74) s<= 0xffffffff)
    sub_1405947f0(&arg1[0x68], 0)

int16_t* rax_8 = *(arg1 + 0x68)

if (rax_8 != 0)
    *rax_8 = 0

*(arg1 + 0x58) = 0
*(arg1 + 0x50) = *(arg2 + 0x50)
*(arg1 + 0x58) = *(arg2 + 0x58)
sub_141ddfdd0(&arg1[0x60], arg2 + 0x60)
return arg1
