// 函数: sub_142b4dbc0
// 地址: 0x142b4dbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg2

if (*arg4 s> 0)
    return 0

int16_t i = *(arg2 + 0xa)
int16_t i_1 = 0
int64_t* rax_4

for (; i != 0; i = *(rax_4 + 0xc))
    rax_4 = (zx.q(i) << 4) + *(arg1 + 0x10)
    int16_t rcx = rax_4[1].w
    
    if (rcx == arg3)
        return rax_4
    
    if (rcx u> arg3)
        break
    
    i_1 = i

if (*(arg1 + 0x1c) == *(arg1 + 0x18))
    int32_t rsi_2 = ((rsi - *(arg1 + 0x10)) s>> 4).d
    
    if (sub_142b4f6d0(arg1) == 0)
        *arg4 = 7
        return nullptr
    
    rsi = (sx.q(rsi_2) << 4) + *(arg1 + 0x10)

int64_t* r9_2 = (sx.q(*(arg1 + 0x1c)) << 4) + *(arg1 + 0x10)
*r9_2 = 0
r9_2[1] = 0
r9_2[1].w = arg3
*(r9_2 + 0xc) = i

if (i_1 != 0)
    *(*(arg1 + 0x10) + zx.q(i_1) * 0x10 + 0xc) = *(arg1 + 0x1c)
else
    *(rsi + 0xa) = *(arg1 + 0x1c)

*(arg1 + 0x1c) += 1
return r9_2
