// 函数: sub_140939a80
// 地址: 0x140939a80
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
int64_t* rcx_4 = arg1[1]
arg_8 = 0x7b
(*(*rcx_4 + 0x150))(rcx_4, &arg_8, 2)
*(arg1 + 0x24) += 1
int64_t rsi = sx.q(arg1[3].d)
int32_t rax_5 = (rsi + 1).d
arg1[3].d = rax_5

if (rax_5 s> *(arg1 + 0x1c))
    sub_1406105e0(&arg1[2])

int64_t result = arg1[2]
*(result + (rsi << 2)) = 6
arg1[4].d = 2
return result
