// 函数: sub_140ba58e0
// 地址: 0x140ba58e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = *arg2
int32_t arg_10

if (sub_140a24010(&var_18, 0x27, &arg_10) == 0)
    *arg1 = *arg2
    return arg1

int32_t r8_1 = var_18:8.d
int32_t rcx_1 = r8_1
int64_t r9 = var_18.q

if (arg_10 + 1 u< r8_1)
    rcx_1 = arg_10 + 1

int32_t rdx_1 = r8_1 - rcx_1

if (rdx_1 u> 0x7fffffff)
    rdx_1 = 0x7fffffff

var_18:8.d = rdx_1
var_18.q = r9 + (sx.q(rcx_1) << 1)
var_18 = var_18

if (r8_1 s>= 1 && *(r9 + (sx.q(r8_1 - 1) << 1)) == 0x27)
    var_18:8.d = rdx_1 - 1
    *arg1 = var_18
    return arg1

var_18:8.d = rdx_1
*arg1 = var_18
return arg1
