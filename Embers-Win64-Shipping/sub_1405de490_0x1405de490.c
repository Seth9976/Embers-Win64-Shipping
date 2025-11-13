// 函数: sub_1405de490
// 地址: 0x1405de490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 8) = 0
void* rsi = *(arg2 + 8)
int32_t rdi = arg2[4]

if ((rsi.b & 1) != 0)
    rsi = (rsi s>> 1) + 8 + arg2

arg1[4] = rdi

if (rdi != 0)
    sub_1405e3e80(&arg1[2], rdi, 0)
    void* rcx_1 = *(arg1 + 8)
    
    if ((rcx_1.b & 1) != 0)
        rcx_1 = (rcx_1 s>> 1) + &arg1[2]
    
    memcpy(rcx_1, rsi, rdi * 2)
else
    arg1[5] = 0

*(arg1 + 0x18) = 0
void* rsi_3 = *(arg2 + 0x18)
int64_t rdi_1 = sx.q(arg2[8])

if ((rsi_3.b & 1) != 0)
    rsi_3 = (rsi_3 s>> 1) + 0x18 + arg2

arg1[8] = rdi_1.d

if (rdi_1.d != 0)
    sub_1405e3e00(&arg1[6], rdi_1.d, 0)
    void* rcx_4 = *(arg1 + 0x18)
    
    if ((rcx_4.b & 1) != 0)
        rcx_4 = (rcx_4 s>> 1) + &arg1[6]
    
    memcpy(rcx_4, rsi_3, (rdi_1 << 5).d)
else
    arg1[9] = 0

*(arg1 + 0x28) = *(arg2 + 0x28)
return arg1
