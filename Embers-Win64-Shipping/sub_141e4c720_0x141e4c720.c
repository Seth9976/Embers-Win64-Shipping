// 函数: sub_141e4c720
// 地址: 0x141e4c720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38
sub_140e59330(arg1, &var_38)
int16_t var_28 = 0
int64_t* var_30
*var_30 = *arg2
var_30[1].w = var_28
var_30[2] = 0
var_30[3] = 0
var_30[4].b = 0xff
var_30[5].d = 0xffffffff
int64_t rbx_1 = *var_30
int32_t arg_8
sub_141e3cb20(arg1, &arg_8, (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d), var_30, var_38, nullptr)
return *arg1 + 8 + sx.q(arg_8) * 0x30
