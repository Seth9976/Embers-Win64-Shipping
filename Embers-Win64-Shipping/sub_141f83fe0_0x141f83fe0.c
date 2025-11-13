// 函数: sub_141f83fe0
// 地址: 0x141f83fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xc)
void* rdi = nullptr
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

uint64_t result = zx.q(*(rax_7 + 8) u>> 0x1d)

if ((result.b & 1) == 0 && (arg1[6].d & 0x400) == 0)
    void* rsi_1 = arg1[5]
    void* const rsi_2
    
    if (rsi_1 == 0)
        rsi_2 = nullptr
    else
        rsi_2 = *(rsi_1 + 0x58)
    
    result = (*(*arg1 + 0x2f0))(arg1, zx.q(arg2), zx.q(arg3))
    
    if (result.b != 0)
        if (rsi_2 != 0 && arg2 == 0)
            result = sub_142173af0(rsi_2, arg1)
        
        if ((arg1[6].d & 0x400) == 0)
            result = zx.q(*(arg1 + 0xc))
            
            if (result.d s< data_143e1d9b4)
                int16_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(result.d)
                uint32_t rdx_6 = zx.d(temp2_1)
                int32_t rax_11 = temp3_1 + rdx_6
                result = data_143e1d9a0
                rdi = *(result + (sx.q(rax_11 s>> 0x10) << 3)) + sx.q(zx.d(rax_11.w) - rdx_6) * 0x18
            
            *(rdi + 8) |= 0x20000000

return result
