// 函数: sub_142ad97e0
// 地址: 0x142ad97e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg1 + 8)
int64_t rsi = sx.q(arg2)
int32_t rcx_1

if (rax s< 0)
    rcx_1 = *(arg1 + 0xc)
else
    rcx_1 = sx.d(rax) s>> 5

if (rsi.d s>= rcx_1)
    rax.b = 0
    return rax

int32_t rcx_3

if (rax s< 0)
    rcx_3 = *(arg1 + 0xc)
else
    rcx_3 = sx.d(rax) s>> 5

int16_t rdi

if (rsi.d u>= rcx_3)
    rdi = -1
else
    void* rcx_4 = arg1 + 0xa
    
    if ((rax.b & 2) == 0)
        rcx_4 = *(arg1 + 0x18)
    
    rdi = *(rcx_4 + (rsi << 1))

int32_t rax_1 = sub_142b59b70(rdi)

if (rax_1 == 0x26)
    rax_1.b = 0
    return rax_1

int16_t r8 = *(arg1 + 8)
int64_t r9 = rsi * 2
int32_t rdx = rsi.d
int16_t rcx_6

do
    rdx += 1
    r9 += 2
    int32_t rax_3
    
    if (r8 s< 0)
        rax_3 = *(arg1 + 0xc)
    else
        rax_3 = sx.d(r8) s>> 5
    
    if (rdx u>= rax_3)
        rcx_6 = -1
    else
        void* rax_4 = arg1 + 0xa
        
        if ((r8.b & 2) == 0)
            rax_4 = *(arg1 + 0x18)
        
        rcx_6 = *(r9 + rax_4)
while (rcx_6 == rdi)
return sub_142b5c840(rax_1, rdx - rsi.d) __tailcall
