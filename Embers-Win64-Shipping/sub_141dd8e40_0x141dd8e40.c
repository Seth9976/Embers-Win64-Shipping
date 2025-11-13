// 函数: sub_141dd8e40
// 地址: 0x141dd8e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0xe0)

if (r8 == arg2)
    return 

int32_t rax = *(arg1 + 0xc)
void* const rax_7

if (rax s>= data_143e1d9b4)
    rax_7 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_1
    rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18

if (((*(rax_7 + 8) u>> 0x1d).b & 1) != 0)
    return 

if (arg2 != 0)
    uint64_t i = arg2
    
    do
        if (i == arg1)
            return 
        
        i = *(i + 0xe0)
    while (i != 0)

if (r8 != 0)
    void* arg_8 = arg1
    sub_1409d7d20(r8 + 0x120, &arg_8)

*(arg1 + 0xe0) = arg2

if (arg2 != 0)
    int64_t rsi_1 = sx.q(*(arg2 + 0x128))
    int32_t rax_9 = (rsi_1 + 1).d
    *(arg2 + 0x128) = rax_9
    
    if (rax_9 s> *(arg2 + 0x12c))
        sub_1405a4d70(arg2 + 0x120)
    
    *(*(arg2 + 0x120) + (rsi_1 << 3)) = arg1

if ((*(arg1 + 0x5b) & 0x10) != 0)
    sub_141dcfa80(arg1)
