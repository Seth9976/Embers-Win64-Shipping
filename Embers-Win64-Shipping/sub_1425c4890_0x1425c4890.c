// 函数: sub_1425c4890
// 地址: 0x1425c4890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[4].d
int16_t arg_8

if (((rcx - 2) & 0xfffffff5) != 0 || rcx == 0xa)
    int64_t* rcx_1 = arg1[1]
    arg_8 = 0x2c
    (*(*rcx_1 + 0x150))(rcx_1, &arg_8, 2)

sub_1425c9240(arg1[1])
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
int16_t* var_38
sub_140a2e390(&var_38, u"%.17g", arg3.q)
int64_t* r10 = arg1[1]
int32_t var_30
int32_t rdx_6
int16_t* const r9

if (var_30 == 0)
    rdx_6 = 0
    r9 = &data_142d40450
else
    r9 = var_38
    rdx_6 = var_30 - 1

uint64_t rcx_9

if (r9 == 0)
    rcx_9 = 0
else
    if (rdx_6 s> 0 && r9[sx.q(rdx_6) - 1] == 0)
        rdx_6 -= 1
    
    if (rdx_6 != 0xffffffff)
        rcx_9 = zx.q(rdx_6)
    else
        rcx_9 = -1
        
        do
            rcx_9 += 1
        while (r9[rcx_9] != 0)

int64_t result = (*(*r10 + 0x150))(r10, r9, sx.q(rcx_9.d) * 2)
int16_t* rcx_11 = var_38

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

arg1[4].d = 8
return result
