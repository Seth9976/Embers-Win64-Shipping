// 函数: sub_141ded060
// 地址: 0x141ded060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 &= 0xe0
*(arg1 + 4) = 0xbf800000
*(arg1 + 8) = 0xbf800000
*(arg1 + 0xc) = 0xbf800000
*(arg1 + 0x10) = 0x3f000000
__builtin_memset(&arg1[0x18], 0, 0x18)
*(arg1 + 0x50) = 0xffffffff
*(arg1 + 0x54) = 0
*(arg1 + 0x60) = 0
int64_t arg_8 = 0
*(arg1 + 0x70) = 0

if (*(arg1 + 0x74) s<= 0xffffffff)
    sub_1405947f0(&arg1[0x68], 0)

int16_t* result = *(arg1 + 0x68)

if (result != 0)
    *result = 0

*(arg1 + 0x58) = 0
return result
