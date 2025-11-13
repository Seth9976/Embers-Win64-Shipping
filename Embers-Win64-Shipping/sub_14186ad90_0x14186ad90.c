// 函数: sub_14186ad90
// 地址: 0x14186ad90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x10)
void* rcx = arg1 + 0x20

if (rax != 0)
    rcx = rax

(*arg1)((*(*rcx + 8))(rcx), arg2)
arg2[9].d = 0
int64_t rcx_2 = arg2[8]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_1405a5130(arg2, 0)

arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
void* result = sub_14059a8e0(&arg2[2], 0)
int64_t rcx_5 = arg2[4]

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = *arg2

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
