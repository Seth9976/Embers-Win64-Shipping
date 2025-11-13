// 函数: sub_140853210
// 地址: 0x140853210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
NMT::reload(&arg1[5], arg2, arg3, 1)
void* rax = *arg1
int32_t result

if (rax == 0 || ((*(rax + 0x204) u>> 1).b & 1) == 0)
    result = 0
else
    result = 1

arg1[0x6c].d &= 0xfffffffe
arg1[0x6c].d |= result
result.b = 1
return result
