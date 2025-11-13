// 函数: sub_142c8ebf0
// 地址: 0x142c8ebf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = arg1.b
arg2[1] = (arg1.d s>> 8).b
arg2[2] = (arg1.d s>> 0x10).b
arg2[3] = (arg1.d u>> 0x18).b
int32_t rcx = (arg1 s>> 0x20).d
arg2[4] = rcx.b
arg2[5] = (rcx s>> 8).b
char result = (rcx s>> 0x10).b
arg2[6] = result
arg2[7] = (rcx u>> 0x18).b
return result
