// 函数: sub_1426f4050
// 地址: 0x1426f4050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[9].d = 0
int64_t rcx = arg1[8]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_141750500(arg1, 0)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
void* result = sub_14059a8e0(&arg1[2], 0)
int64_t rcx_3 = arg1[4]

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = *arg1

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4) __tailcall
