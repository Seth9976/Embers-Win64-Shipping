// 函数: sub_142ad96f0
// 地址: 0x142ad96f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    int64_t rax
    rax.b = 0
    return rax

int16_t rcx = *(arg1 + 8)
int32_t rax_2

if (rcx s< 0)
    rax_2 = *(arg1 + 0xc)
else
    rax_2 = sx.d(rcx) s>> 5

int16_t rsi

if (arg2 - 1 u>= rax_2)
    rsi = -1
else
    void* rcx_1 = arg1 + 0xa
    
    if ((rcx.b & 2) == 0)
        rcx_1 = *(arg1 + 0x18)
    
    rsi = *(rcx_1 + (sx.q(arg2 - 1) << 1))

int32_t rax_4 = sub_142b59b70(rsi)

if (rax_4 == 0x26)
    rax_4.b = 0
    return rax_4

int16_t r8 = *(arg1 + 8)
int32_t rdx = arg2 - 1
int16_t* r9 = sx.q(arg2 - 1) * 2
int16_t rcx_3

do
    rdx -= 1
    r9 = &r9[-1]
    int32_t rax_7
    
    if (r8 s< 0)
        rax_7 = *(arg1 + 0xc)
    else
        rax_7 = sx.d(r8) s>> 5
    
    if (rdx u>= rax_7)
        rcx_3 = -1
    else
        void* rax_8 = arg1 + 0xa
        
        if ((r8.b & 2) == 0)
            rax_8 = *(arg1 + 0x18)
        
        rcx_3 = *(r9 + rax_8)
while (rcx_3 == rsi)
return sub_142b5c840(rax_4, arg2 - 1 - rdx) == 0
