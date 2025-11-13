// 函数: sub_141c941c0
// 地址: 0x141c941c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x1b].d = 0
int64_t rcx = arg1[0x1a]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[0x13].d = 0

if (*(arg1 + 0x9c) != 0)
    sub_1405a5410(&arg1[0x12], 0)

arg1[0x18].d = 0xffffffff
*(arg1 + 0xc4) = 0
sub_14059a8e0(&arg1[0x14], 0)
int64_t rcx_3 = arg1[0x16]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0x12]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg1[0x11].d = 0
int64_t rcx_5 = arg1[0x10]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t result = sub_14098e2c0(&arg1[8], 0)
int64_t rcx_7 = arg1[0xc]

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[8]

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[6]

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[4]

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[2]

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = *arg1

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
