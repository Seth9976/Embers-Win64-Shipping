// 函数: sub_140b975a0
// 地址: 0x140b975a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0xa]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[9].d = 0
int64_t rcx_1 = arg1[8]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_1405a5410(arg1, 0)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
void* result = sub_14059a8e0(&arg1[2], 0)
int64_t rcx_4 = arg1[4]

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = *arg1

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5) __tailcall
