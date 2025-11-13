// 函数: sub_1408dac20
// 地址: 0x1408dac20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_140638cc0(arg1, 0)

arg1[3].d = 0

if (*(arg1 + 0x1c) != 0)
    sub_1405c5570(&arg1[2], 0)

arg1[5].d = 0

if (*(arg1 + 0x2c) != 0)
    sub_1405dadb0(&arg1[4], 0)

arg1[7].d = 0

if (*(arg1 + 0x3c) != 0)
    sub_1405dadb0(&arg1[6], 0)

arg1[9].d = 0

if (*(arg1 + 0x4c) != 0)
    sub_140679c00(&arg1[8], 0)

arg1[0xb].d = 0

if (*(arg1 + 0x5c) != 0)
    sub_140638cc0(&arg1[0xa], 0)

arg1[0xd].d = 0

if (*(arg1 + 0x6c) != 0)
    sub_14083ad30(&arg1[0xc], 0)

*(arg1 + 0x7c) = data_143dbb1f8.q
int32_t result = data_143dbb200
*(arg1 + 0x84) = result
arg1[0xe] = *(arg1 + 0x7c)
arg1[0xf].d = result
arg1[0x11].b = 0
int64_t rcx_6 = arg1[0x12]

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0xc]

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0xa]

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[8]

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[6]

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[4]

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[2]

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

int64_t rcx_13 = *arg1

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
