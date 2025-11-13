// 函数: sub_141cf7990
// 地址: 0x141cf7990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
*(arg1 + 0x18) = *(arg2 + 0x18)
arg1[5].d = arg2[5].d
arg1[6] = 0
void* r14 = arg2[6]
int64_t rbp = sx.q(arg2[7].d)

if ((r14.b & 1) != 0)
    r14 = (r14 s>> 1) + 0x30 + arg2

arg1[7].d = rbp.d

if (rbp.d != 0)
    sub_14085a140(&arg1[6], rbp.d, 0)
    void* rcx_1 = arg1[6]
    
    if ((rcx_1.b & 1) != 0)
        rcx_1 = (rcx_1 s>> 1) + &arg1[6]
    
    memcpy(rcx_1, r14, (rbp << 4).d)
else
    *(arg1 + 0x3c) = 0

arg1[8].d = arg2[8].d
*(arg1 + 0x44) = *(arg2 + 0x44)
arg1[9].b = arg2[9].b
*(arg1 + 0x49) = *(arg2 + 0x49)
return arg1
