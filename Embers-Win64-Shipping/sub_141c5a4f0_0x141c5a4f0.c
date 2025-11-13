// 函数: sub_141c5a4f0
// 地址: 0x141c5a4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x1a0)

if (result == 0)
    return 0

result[1] = arg1
*result = &data_143209500
result[2] = 0
result[3] = 0
result[4].d = 0x3f000000
*(result + 0x24) = 0x469c4000
result[5].d = 0x41a00000
*(result + 0x2c) = 0x469c4000
result[6] = 0x41a00000
result[7] = 0x3f800000
__builtin_memset(&result[8], 0, 0x24)
*(result + 0x64) = 1
*(result + 0x6c) = 0xffffffff
result[0xe].d = 0
result[0xf].d &= 0xfffffffe
char rax = *(result + 0x74)
result[0x11] = arg1
result[0x12] = 0
*(result + 0x74) = (rax & 0xd0) | 0x10
*result = &data_143209a98
result[0x10] = &data_143209b20
__builtin_memset(&result[0x13], 0, 0x28)
result[0x18].d = 0xbf800000
*(result + 0xc4) = 0
result[0x1a] = data_143dbb1f8.q
result[0x1b].d = data_143dbb200
*(result + 0xe0) = data_14399f720
result[0x1e] = data_143dbb1f8.q
result[0x1f].d = data_143dbb200
*(result + 0xfc) = data_143dbb1f8.q
*(result + 0x104) = data_143dbb200
*(result + 0x110) = data_14399f720
*(result + 0x120) = data_14399f720
result[0x26] = data_143dbb1f8.q
result[0x27].d = data_143dbb200
*(result + 0x13c) = data_143dbb1f8.q
*(result + 0x144) = data_143dbb200
result[0x29] = 0
result[0x2a] = 0
result[0x2c].b = 0
__builtin_memset(result + 0x164, 0, 0x20)
__builtin_memset(&result[0x31], 0, 0x14)
*(result + 0x19c) &= 0xffffffe0
*(result + 0x19c) = (zx.d(*(arg1 + 0x352)) & 8) << 2 | (*(result + 0x19c) & 0xffffff9f)
return result
