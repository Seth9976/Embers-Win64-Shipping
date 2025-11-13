// 函数: sub_142b77460
// 地址: 0x142b77460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg1 + 0x18)
int32_t rax_2

if (rax s< 0)
    rax_2 = *(arg1 + 0x1c)
else
    rax_2 = sx.d(rax) s>> 5

int64_t rcx = sx.q(arg2)
int64_t r11 = sx.q(rax_2)

if (rcx s>= r11)
    return zx.q(arg2)

int16_t r9 = *(arg1 + 0x18)

do
    int32_t rax_4
    
    if (r9 s< 0)
        rax_4 = *(arg1 + 0x1c)
    else
        rax_4 = sx.d(r9) s>> 5
    
    if (arg2 u>= rax_4)
        break
    
    void* rax_5 = arg1 + 0x1a
    
    if ((r9.b & 2) == 0)
        rax_5 = *(arg1 + 0x28)
    
    uint32_t r10_1 = zx.d(*(rax_5 + (rcx << 1)))
    uint64_t rax_6 = zx.q(r10_1 - 0x2b)
    
    if ((rax_6.w u> 0x3a || not(test_bit(0x400000004007fed, rax_6))) && r10_1.w != 0x221e)
        break
    
    arg2 += 1
    rcx += 1
while (rcx s< r11)

return zx.q(arg2)
