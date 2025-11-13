// 函数: sub_141c30b20
// 地址: 0x141c30b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2.d
*(arg1 + 4) = 0x3f800000
arg1[3] = 0x3f4ccccd
arg1[4] = 0x3f000000
__builtin_strncpy(&arg1[5], "333?", 0xc)
__builtin_memcpy(&arg1[8], 
    "\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00", 0x15)
uint128_t zmm6_1 = sub_141c2e190(&arg1[0xe], arg2, arg3, &data_143a12b98)
sub_141c2ee50(&arg1[0xc0], zmm6_1, arg3, arg4 + 0x14, zmm6_1)
__builtin_memset(&arg1[0x14e], 0, 0x90)
arg1[0x172].w = 0x101
*(arg1 + 4) = *arg4
*(arg1 + 0x14) = arg4[1]
*(arg1 + 0x24) = arg4[2]
arg1[0xd] = arg4[3].d
sub_141c353d0(&arg1[6])
sub_141c35330(&arg1[1])
*(arg1 + 0x38) = *(arg1 + 4)
arg1[0x12] = arg1[5]
sub_141c35330(&arg1[0xe])
sub_141c33c10(&arg1[0xe])
*(arg1 + 0x318) = *(arg1 + 0x18)
*(arg1 + 0x328) = *(arg1 + 0x28)
arg1[0xcc] = arg1[0xc]
sub_141c353d0(&arg1[0xc6])
sub_141c33fd0(&arg1[0xc0])
return arg1
