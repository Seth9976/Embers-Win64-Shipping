// 函数: sub_140918ca0
// 地址: 0x140918ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[4].d
int16_t arg_8

if (((rcx - 2) & 0xfffffff5) != 0 || rcx == 0xa)
    int64_t* rcx_1 = arg1[1]
    arg_8 = 0x2c
    (*(*rcx_1 + 0x150))(rcx_1, &arg_8, 2)

(*(*arg1 + 0x10))(arg1, arg2)
int64_t* rcx_3 = arg1[1]
arg_8 = 0x3a
(*(*rcx_3 + 0x150))(rcx_3, &arg_8, 2)
int64_t result = (*(*arg1 + 0x10))(arg1, arg3)
arg1[4].d = 7
int64_t rcx_5 = *arg3

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
