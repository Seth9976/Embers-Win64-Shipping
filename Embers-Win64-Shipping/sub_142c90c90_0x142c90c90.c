// 函数: sub_142c90c90
// 地址: 0x142c90c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx_8 = *arg1
int32_t result = 0

if (rdx_8 == 0x72)
    result = 0x100
else if (rdx_8 != 0x2d)
    result = 0x1000000

char rdx = arg1[1]

if (rdx == 0x77)
    result |= 0x80
else if (rdx != 0x2d)
    result |= 0x1000000

char rdx_1 = arg1[2]

if (rdx_1 == 0x78)
    result |= 0x40
else if (rdx_1 == 0x73)
    result |= 0x840
else if (rdx_1 == 0x53)
    result |= 0x800
else if (rdx_1 != 0x2d)
    result |= 0x1000000

char rdx_2 = arg1[3]

if (rdx_2 == 0x72)
    result |= 0x20
else if (rdx_2 != 0x2d)
    result |= 0x1000000

char rdx_3 = arg1[4]

if (rdx_3 == 0x77)
    result |= 0x10
else if (rdx_3 != 0x2d)
    result |= 0x1000000

char rdx_4 = arg1[5]

if (rdx_4 == 0x78)
    result |= 8
else if (rdx_4 == 0x73)
    result |= 0x408
else if (rdx_4 == 0x53)
    result |= 0x400
else if (rdx_4 != 0x2d)
    result |= 0x1000000

char rdx_5 = arg1[6]

if (rdx_5 == 0x72)
    result |= 4
else if (rdx_5 != 0x2d)
    result |= 0x1000000

char rdx_6 = arg1[7]

if (rdx_6 == 0x77)
    result |= 2
else if (rdx_6 != 0x2d)
    result |= 0x1000000

char rdx_7 = arg1[8]

if (rdx_7 == 0x78)
    return zx.q(result) | 1

if (rdx_7 == 0x74)
    return zx.q(result) | 0x201

if (rdx_7 == 0x54)
    return zx.q(result) | 0x200

if (rdx_7 == 0x2d)
    return result

return result | 0x1000000
