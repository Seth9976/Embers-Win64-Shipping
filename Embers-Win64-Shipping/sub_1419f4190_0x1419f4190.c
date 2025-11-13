// 函数: sub_1419f4190
// 地址: 0x1419f4190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg1[1]
*arg2 = **arg1
arg2[1] = &data_142da7708
arg2[2] = 0
void* r14 = *(rbp + 8)
int64_t rsi = sx.q(*(rbp + 0x10))

if ((r14.b & 1) != 0)
    r14 = (r14 s>> 1) + 8 + rbp

arg2[3].d = rsi.d

if (rsi.d != 0)
    sub_1419d6d70(&arg2[2], rsi.d, 0)
    void* rcx_2 = arg2[2]
    
    if ((rcx_2.b & 1) != 0)
        rcx_2 = (rcx_2 s>> 1) + &arg2[2]
    
    memcpy(rcx_2, r14, (rsi << 2).d)
else
    *(arg2 + 0x1c) = 0

arg2[1] = &data_142da8070
arg2[4].b = *(rbp + 0x18)
return arg2
