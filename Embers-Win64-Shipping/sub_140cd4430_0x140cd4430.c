// 函数: sub_140cd4430
// 地址: 0x140cd4430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

DeleteCriticalSection(&arg1[0x28])
arg1[0x27].d = 0
int64_t rcx_1 = arg1[0x26]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

arg1[0x1f].d = 0

if (*(arg1 + 0xfc) != 0)
    sub_1405a5410(&arg1[0x1e], 0)

arg1[0x24].d = 0xffffffff
*(arg1 + 0x124) = 0
sub_14059a8e0(&arg1[0x20], 0)
int64_t rcx_4 = arg1[0x22]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x1e]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[0x1d].d = 0
int64_t rcx_6 = arg1[0x1c]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

arg1[0x15].d = 0

if (*(arg1 + 0xac) != 0)
    sub_1405a5410(&arg1[0x14], 0)

arg1[0x1a].d = 0xffffffff
*(arg1 + 0xd4) = 0
sub_14059a8e0(&arg1[0x16], 0)
int64_t rcx_9 = arg1[0x18]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0x14]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

arg1[0x13].d = 0
int64_t rcx_11 = arg1[0x12]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

arg1[0xb].d = 0

if (*(arg1 + 0x5c) != 0)
    sub_1405a5410(&arg1[0xa], 0)

arg1[0x10].d = 0xffffffff
*(arg1 + 0x84) = 0
sub_14059a8e0(&arg1[0xc], 0)
int64_t rcx_14 = arg1[0xe]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = arg1[0xa]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

arg1[9].d = 0
int64_t rcx_16 = arg1[8]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_1405a5410(arg1, 0)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
void* result = sub_14059a8e0(&arg1[2], 0)
int64_t rcx_19 = arg1[4]

if (rcx_19 != 0)
    result = sub_140a74f90(rcx_19)

int64_t rcx_20 = *arg1

if (rcx_20 == 0)
    return result

return sub_140a74f90(rcx_20)
