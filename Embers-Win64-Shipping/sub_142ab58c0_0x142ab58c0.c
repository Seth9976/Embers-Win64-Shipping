// 函数: sub_142ab58c0
// 地址: 0x142ab58c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)
void* r8_1

if (rsi.d s<= 0x22)
    r8_1 = &arg1[8]
    *r8_1 = 0x22
else
    int64_t* rax_1 = sub_142a7dd00(rsi + 0xc)
    
    if (rax_1 != 0)
        int64_t* r8 = *arg1
        *rax_1 = *r8
        rax_1[1].d = r8[1].d
        
        if (*(arg1 + 0xc) != 0)
            sub_142a7dcd0(*arg1)
        
        *arg1 = rax_1
        arg1[1].d = rsi.d
        *(arg1 + 0xc) = 1
    
    r8_1 = &arg1[8]
    *r8_1 = rsi.d

sub_142b3b6e0(*arg1, arg2, r8_1)
uint64_t result = zx.q(*(arg1 + 0x54))

if ((result.b & 1) != 0)
    *arg4 = 0x10110
    return result

if (result.d != 0)
    *arg4 = 0x10
else
    result = *arg1
    
    if ((*(result + 8) & 0x70) != 0)
        *arg4 = 0x10

return result
