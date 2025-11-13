// 函数: sub_141818f00
// 地址: 0x141818f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28
sub_14098dfb0(arg1, &var_28)
int64_t* var_20
int64_t* rsi = var_20
int32_t* rdx_1 = &rsi[1]
*rsi = 0
*rsi = *arg2
*arg2 = 0
*rdx_1 = arg2[1].d
*(rsi + 0xc) = *(arg2 + 0xc)
arg2[1] = 0
rsi[2] = *arg3
void* rax_4 = arg3[1]
rsi[3] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1
    rsi = var_20

rsi[4].d = 0xffffffff
int32_t rax_5 = *rdx_1
int16_t* rdx_2

if (rax_5 == 0)
    rdx_2 = &data_142d40450
else
    rdx_2 = *rsi

int32_t rcx = rax_5 - 1

if (rax_5 == 0)
    rcx = 0

int32_t arg_8
sub_141836db0(arg1, &arg_8, sub_1405969c0(rcx, rdx_2), rsi, var_28, nullptr)
return *arg1 + sx.q(arg_8) * 0x28 + 0x10
