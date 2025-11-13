// 函数: sub_140944f80
// 地址: 0x140944f80
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

int64_t result = (*(*arg1 + 0x10))(arg1, arg2)
arg1[4].d = 7
return result
