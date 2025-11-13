// 函数: sub_1405c8dc0
// 地址: 0x1405c8dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x28].d = 0
int64_t rcx = arg1[0x27]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[0x20].d = 0

if (*(arg1 + 0x104) != 0)
    sub_1405a5130(&arg1[0x1f], 0)

arg1[0x25].d = 0xffffffff
*(arg1 + 0x12c) = 0
sub_14059a8e0(&arg1[0x21], 0)
int64_t rcx_3 = arg1[0x23]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0x1f]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg1[0x1e].d = 0
int64_t rcx_5 = arg1[0x1d]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[0x16].d = 0

if (*(arg1 + 0xb4) != 0)
    sub_1405a5130(&arg1[0x15], 0)

arg1[0x1b].d = 0xffffffff
*(arg1 + 0xdc) = 0
sub_14059a8e0(&arg1[0x17], 0)
int64_t rcx_8 = arg1[0x19]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[0x15]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

arg1[0x13].d = 0
int64_t rcx_10 = arg1[0x12]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

arg1[0xb].d = 0

if (*(arg1 + 0x5c) != 0)
    sub_1405a51b0(&arg1[0xa], 0)

arg1[0x10].d = 0xffffffff
*(arg1 + 0x84) = 0
sub_14059a8e0(&arg1[0xc], 0)
int64_t rcx_13 = arg1[0xe]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = arg1[0xa]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

arg1[9].d = 0
int64_t rcx_15 = arg1[8]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_1405c55e0(arg1, 0)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
void* result = sub_14059a8e0(&arg1[2], 0)
int64_t rcx_18 = arg1[4]

if (rcx_18 != 0)
    result = sub_140a74f90(rcx_18)

int64_t rcx_19 = *arg1

if (rcx_19 == 0)
    return result

return sub_140a74f90(rcx_19)
