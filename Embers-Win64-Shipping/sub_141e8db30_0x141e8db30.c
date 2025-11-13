// 函数: sub_141e8db30
// 地址: 0x141e8db30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28
sub_141e93ef0(arg1, &var_28)
int64_t* var_20
int64_t* rsi = var_20
int64_t* rdx_1 = &rsi[1]
*rsi = *arg2
*rdx_1 = 0
*rdx_1 = *arg3
*arg3 = 0
rdx_1[1].d = arg3[1].d
*(rdx_1 + 0xc) = *(arg3 + 0xc)
arg3[1] = 0
rdx_1[2] = arg3[2]
void* rax_5 = arg3[3]
rdx_1[3] = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1
    rsi = var_20

rdx_1[4].d = arg3[4].d
rdx_1[5] = arg3[5]
rsi[7].d = 0xffffffff
int64_t rbx_1 = *rsi
int32_t arg_8
sub_141e9e9e0(arg1, &arg_8, (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d), rsi, var_28, nullptr)
return *arg1 + (sx.q(arg_8) << 6) + 8
