// 函数: sub_1409391d0
// 地址: 0x1409391d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[4].d
int16_t arg_8

if (((rcx - 2) & 0xfffffff5) != 0 || rcx == 0xa)
    int64_t* rcx_1 = arg1[1]
    arg_8 = 0x2c
    (*(*rcx_1 + 0x150))(rcx_1, &arg_8, 2)

sub_14067f880(arg1[1])
int32_t i_2 = *(arg1 + 0x24)
int64_t* rsi = arg1[1]

if (i_2 s> 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int64_t rax_2 = *rsi
        arg_8 = 9
        (*(rax_2 + 0x150))(rsi, &arg_8, 2)
        i = i_1
        i_1 -= 1
    while (i != 1)

(*(*arg1 + 0x10))(arg1, arg2)
int64_t* rcx_5 = arg1[1]
arg_8 = 0x3a
(*(*rcx_5 + 0x150))(rcx_5, &arg_8, 2)
int64_t* rcx_6 = arg1[1]
arg_8 = 0x20
(*(*rcx_6 + 0x150))(rcx_6, &arg_8, 2)
int64_t* rcx_7 = arg1[1]
arg_8 = 0x5b
(*(*rcx_7 + 0x150))(rcx_7, &arg_8, 2)
*(arg1 + 0x24) += 1
int64_t rsi_1 = sx.q(arg1[3].d)
int32_t rax_7 = (rsi_1 + 1).d
arg1[3].d = rax_7

if (rax_7 s> *(arg1 + 0x1c))
    sub_1406105e0(&arg1[2])

int64_t result = arg1[2]
*(result + (rsi_1 << 2)) = 5
arg1[4].d = 4
return result
