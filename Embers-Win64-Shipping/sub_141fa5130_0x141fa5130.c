// 函数: sub_141fa5130
// 地址: 0x141fa5130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141fd7160(arg1, arg2)
*arg1 = &data_14328c308
arg1[7] = 0
arg1[8] = 0
int64_t arg_8
sub_140b58260(&arg_8, u"Debug Camera Controller", 1)
arg1[6] = arg_8
int64_t rdi = sx.q(arg1[8].d)
int32_t rax_1 = (rdi + 1).d
arg1[8].d = rax_1

if (rax_1 s> *(arg1 + 0x44))
    sub_1405a4f90(&arg1[7])

void*** rax_4 = &arg1[7][rdi * 2]
*rax_4 = &data_142d5a028
rax_4[1].b = 3
int64_t rdi_1 = sx.q(arg1[8].d)
int32_t rax_5 = (rdi_1 + 1).d
arg1[8].d = rax_5

if (rax_5 s> *(arg1 + 0x44))
    sub_1405a4f90(&arg1[7])

void*** rax_8 = &arg1[7][rdi_1 * 2]
*rax_8 = &data_142d5a028
rax_8[1].b = 2
int64_t rdi_2 = sx.q(arg1[8].d)
int32_t rax_9 = (rdi_2 + 1).d
arg1[8].d = rax_9

if (rax_9 s> *(arg1 + 0x44))
    sub_1405a4f90(&arg1[7])

void*** rax_12 = &arg1[7][rdi_2 * 2]
*rax_12 = &data_142d5a028
rax_12[1].b = 1
int64_t rdi_3 = sx.q(arg1[8].d)
int32_t rax_13 = (rdi_3 + 1).d
arg1[8].d = rax_13

if (rax_13 s> *(arg1 + 0x44))
    sub_1405a4f90(&arg1[7])

void*** rax_16 = &arg1[7][rdi_3 * 2]
*rax_16 = &data_142d5a028
rax_16[1].b = 4
int64_t rdi_4 = sx.q(arg1[8].d)
int32_t rax_17 = (rdi_4 + 1).d
arg1[8].d = rax_17

if (rax_17 s> *(arg1 + 0x44))
    sub_1405a4f90(&arg1[7])

void*** rax_20 = &arg1[7][rdi_4 * 2]
*rax_20 = &data_142d5a028
rax_20[1].b = 0xb
int64_t rdi_5 = sx.q(arg1[8].d)
int32_t rax_21 = (rdi_5 + 1).d
arg1[8].d = rax_21

if (rax_21 s> *(arg1 + 0x44))
    sub_1405a4f90(&arg1[7])

void*** rax_24 = &arg1[7][rdi_5 * 2]
*rax_24 = &data_142d5a028
rax_24[1].b = 0xf
int64_t rdi_6 = sx.q(arg1[8].d)
int32_t rax_25 = (rdi_6 + 1).d
arg1[8].d = rax_25

if (rax_25 s> *(arg1 + 0x44))
    sub_1405a4f90(&arg1[7])

void*** rax_28 = &arg1[7][rdi_6 * 2]
*rax_28 = &data_142d5a028
rax_28[1].b = 0x10
return arg1
