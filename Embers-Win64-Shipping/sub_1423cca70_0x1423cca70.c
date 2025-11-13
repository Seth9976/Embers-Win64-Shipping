// 函数: sub_1423cca70
// 地址: 0x1423cca70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg2[1]
int64_t rsi = *arg2
int32_t r8 = *(arg1 + 0xc)
arg1[1].d = rdi.d

if (rdi == 0 && r8 == 0)
    *(arg1 + 0xc) = rdi.d
    return arg1

sub_1405da9e0(arg1, rdi.d, r8)
memcpy(*arg1, rsi, rdi.d)
return arg1
