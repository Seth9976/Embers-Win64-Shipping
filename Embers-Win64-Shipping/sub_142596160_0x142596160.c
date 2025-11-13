// 函数: sub_142596160
// 地址: 0x142596160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142da8048
arg1[1] = 0
void* r14 = *(arg2 + 8)
int64_t rbp = sx.q(*(arg2 + 0x10))

if ((r14.b & 1) != 0)
    r14 = (r14 s>> 1) + 8 + arg2

arg1[2].d = rbp.d

if (rbp.d != 0)
    sub_1419d6d70(&arg1[1], rbp.d, 0)
    void* rcx_1 = arg1[1]
    
    if ((rcx_1.b & 1) != 0)
        rcx_1 = (rcx_1 s>> 1) + &arg1[1]
    
    memcpy(rcx_1, r14, (rbp << 2).d)
else
    *(arg1 + 0x14) = 0

arg1[3] = 0
void* r14_3 = *(arg2 + 0x18)
int64_t rbp_1 = sx.q(*(arg2 + 0x20))

if ((r14_3.b & 1) != 0)
    r14_3 = (r14_3 s>> 1) + 0x18 + arg2

arg1[4].d = rbp_1.d

if (rbp_1.d != 0)
    sub_1419d6d70(&arg1[3], rbp_1.d, 0)
    void* rcx_4 = arg1[3]
    
    if ((rcx_4.b & 1) != 0)
        rcx_4 = (rcx_4 s>> 1) + &arg1[3]
    
    memcpy(rcx_4, r14_3, (rbp_1 << 2).d)
else
    *(arg1 + 0x24) = 0

arg1[5].d = *(arg2 + 0x28)
*arg1 = &data_143328320
arg1[6] = *(arg2 + 0x30)
arg1[7] = *(arg2 + 0x38)
arg1[8].d = *(arg2 + 0x40)
return arg1
