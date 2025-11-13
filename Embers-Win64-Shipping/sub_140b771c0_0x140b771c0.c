// 函数: sub_140b771c0
// 地址: 0x140b771c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[4].d
int16_t arg_18

if (((rcx - 2) & 0xfffffff5) != 0 || rcx == 0xa)
    int64_t* rcx_1 = arg1[1]
    arg_18 = 0x2c
    (*(*rcx_1 + 0x150))(rcx_1, &arg_18, 2)

sub_14067f880(arg1[1])
int32_t i_2 = *(arg1 + 0x24)
int64_t* rsi = arg1[1]

if (i_2 s> 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int64_t rax_2 = *rsi
        arg_18 = 9
        (*(rax_2 + 0x150))(rsi, &arg_18, 2)
        i = i_1
        i_1 -= 1
    while (i != 1)

(*(*arg1 + 0x10))(arg1, arg2)
int64_t* rcx_5 = arg1[1]
arg_18 = 0x3a
(*(*rcx_5 + 0x150))(rcx_5, &arg_18, 2)
int64_t* rcx_6 = arg1[1]
arg_18 = 0x20
(*(*rcx_6 + 0x150))(rcx_6, &arg_18, 2)
int16_t* var_28
sub_140a2e390(&var_28, u"%lld", sx.q(arg3))
int64_t* r9 = arg1[1]
int32_t var_20
int32_t rcx_9
int16_t* const rdx_5

if (var_20 == 0)
    rcx_9 = 0
    rdx_5 = &data_142d40450
else
    rdx_5 = var_28
    rcx_9 = var_20 - 1

int64_t result = (*(*r9 + 0x150))(r9, rdx_5, sx.q(rcx_9) * 2)
int16_t* rcx_11 = var_28

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

arg1[4].d = 8
return result
