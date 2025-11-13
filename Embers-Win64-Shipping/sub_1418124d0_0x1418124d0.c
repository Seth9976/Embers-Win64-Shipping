// 函数: sub_1418124d0
// 地址: 0x1418124d0
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
int32_t rax_4 = arg3[1].d
int64_t* rcx_4 = arg1[1]
int32_t r8 = rax_4 - 1

if (rax_4 == 0)
    r8 = 0

int16_t* const rdx_3

if (rax_4 == 0)
    rdx_3 = &data_142d40450
else
    rdx_3 = *arg3

int64_t result = (*(*rcx_4 + 0x150))(rcx_4, rdx_3, sx.q(r8) * 2)
arg1[4].d = 7
return result
