// 函数: sub_1425fc940
// 地址: 0x1425fc940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x1b0)

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
char rax = *(result + 0x74)
result[0xf].d &= 0xfffffffe
result[0x12] = 0
*(result + 0x74) = (rax & 0xd0) | 0x10
*result = &data_14344cb88
result[0x13] = 0
result[0x14].d = 0
result[0x15] = 0
__builtin_memset(&result[0x2b], 0, 0x30)
__builtin_memset(result + 0x194, 0, 0x18)
*(result + 0x1ac) &= 0xfffffff8
result[0x10] = arg1
result[0x11] = *(arg1 + 0x2c0)
__builtin_memset(&result[0x16], 0, 0x24)
memset(result + 0xd4, 0, 0x84)
result[0x31] = 0
result[0x32].d = 0

if ((*(arg1 + 0x352) & 4) == 0)
    result[0xf].d |= 1

return result
