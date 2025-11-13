// 函数: sub_140909ff0
// 地址: 0x140909ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_140638cc0(arg1, 0)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
void* result = sub_14059a8e0(&arg1[2], 0)
int64_t rcx_1 = arg1[4]

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t rcx_2 = *arg1

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2) __tailcall
