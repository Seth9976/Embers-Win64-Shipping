// 函数: sub_14139db90
// 地址: 0x14139db90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x3b8)
int32_t rax = 1
int32_t rcx

if (r8 s>= 1)
    rcx = data_1439c7a74
    
    if (r8 s< rcx)
        rcx = r8
else
    rcx = 1

if (r8 s>= 1)
    rax = data_1439c7a70
    
    if (r8 s< rax)
        rax = r8

*arg2 = rax
arg2[1] = rcx
return arg2
