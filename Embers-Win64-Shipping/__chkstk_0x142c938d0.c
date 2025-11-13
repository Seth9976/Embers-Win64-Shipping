// 函数: __chkstk
// 地址: 0x142c938d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
void* r10 = &arg_8 - arg1

if (&arg_8 u< arg1)
    r10 = nullptr

TEB* gsbase
void* StackLimit = gsbase->NtTib.StackLimit

if (r10 u>= StackLimit)
    return 

r10.w &= 0xf000

do
    StackLimit -= 0x1000
    *StackLimit = 0
while (r10 != StackLimit)
