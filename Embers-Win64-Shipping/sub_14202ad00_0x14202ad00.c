// 函数: sub_14202ad00
// 地址: 0x14202ad00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x280)
uint64_t result = zx.q(arg2.b)
char temp0 = result.b
result.b = neg.b(result.b)
int32_t rdx_2 = (sbb.d(arg2, arg2, temp0 != 0) & 3) + *(rsi + 0x240)

if (rdx_2 s> *(arg3 + 0xc))
    result = sub_140638c50(arg3, rdx_2)
    rsi = *(arg1 + 0x280)

int32_t i_2 = *(rsi + 0x240)

if (i_2 != 0)
    int32_t rax = arg3[1].d
    int32_t rdx_3 = rax + i_2
    
    if (rdx_3 s> *(arg3 + 0xc))
        sub_140638c50(arg3, rdx_3)
        rax = arg3[1].d
    
    uint64_t* rdx_4 = *(rsi + 0x238)
    int32_t i_1 = i_2
    uint64_t* r8 = *arg3 + (sx.q(rax) << 3)
    int32_t i
    
    do
        result = *rdx_4
        rdx_4 = &rdx_4[1]
        *r8 = result
        r8 = &r8[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    arg3[1].d += i_2

if (arg2.b != 0)
    int64_t rdi = sx.q(arg3[1].d)
    int32_t rax_2 = (rdi + 1).d
    arg3[1].d = rax_2
    
    if (rax_2 s> *(arg3 + 0xc))
        sub_1405a4d70(arg3)
    
    *(*arg3 + (rdi << 3)) = arg1
    int64_t rdi_1 = sx.q(arg3[1].d)
    int64_t rsi_1 = *(arg1 + 0x280)
    int32_t rax_4 = (rdi_1 + 1).d
    arg3[1].d = rax_4
    
    if (rax_4 s> *(arg3 + 0xc))
        sub_1405a4d70(arg3)
    
    *(*arg3 + (rdi_1 << 3)) = rsi_1
    int64_t rdi_2 = sx.q(arg3[1].d)
    int64_t rsi_2 = *(arg1 + 0x278)
    int32_t rax_6 = (rdi_2 + 1).d
    arg3[1].d = rax_6
    
    if (rax_6 s> *(arg3 + 0xc))
        sub_1405a4d70(arg3)
    
    result = *arg3
    *(result + (rdi_2 << 3)) = rsi_2

return result
