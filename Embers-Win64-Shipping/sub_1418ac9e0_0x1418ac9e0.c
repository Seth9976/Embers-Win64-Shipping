// 函数: sub_1418ac9e0
// 地址: 0x1418ac9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x48)
sub_140b30de0(arg1 + 0x70, arg2)

if (arg1 != -0x48)
    LeaveCriticalSection(arg1 + 0x48)

arg2[9].d = 0
int64_t rcx_3 = arg2[8]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_1405a5130(arg2, 0)

arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
void* result = sub_14059a8e0(&arg2[2], 0)
int64_t rcx_6 = arg2[4]

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = *arg2

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
