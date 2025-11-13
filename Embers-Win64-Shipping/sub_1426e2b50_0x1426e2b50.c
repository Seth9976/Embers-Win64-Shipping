// 函数: sub_1426e2b50
// 地址: 0x1426e2b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1409786b0(arg1, arg2)
int32_t rcx = *(arg1 + 0xb8)

if ((rcx.b & 1) != 0)
    *(arg1 + 0x78) = data_143f721c0
    *(arg1 + 0xb8) = rcx & 0xfffffffe

void* result = sub_1426b0ab0(arg1)

if (result == 0)
    return result

sub_1426bdb00(arg1 + 0x68, result)
return sub_1426bdb00(arg1 + 0x90, result)
