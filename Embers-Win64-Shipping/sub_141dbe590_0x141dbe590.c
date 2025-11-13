// 函数: sub_141dbe590
// 地址: 0x141dbe590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = nullptr
char rbp = arg2.b
uint64_t result

if ((*(arg1 + 0x5c) & 8) == 0)
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
        arg2 = sx.q(zx.d(rax_2.w) - rdx_1) * 3
        rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + (arg2 << 3)
    
    if (((*(rax_7 + 8) u>> 0x1d).b & 1) == 0)
        result = (*(*arg1 + 0x150))(arg1, arg2)
        
        if (result != 0)
            sub_1420e0c80(result, arg1, rbp, arg3)

if ((*(arg1 + 0x5c) & 8) == 0)
    int32_t rax_10 = *(arg1 + 0xc)
    
    if (rax_10 s< data_143e1d9b4)
        int16_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rax_10)
        uint32_t rdx_4 = zx.d(temp2_1)
        int32_t rax_12 = temp3_1 + rdx_4
        rdi = *(data_143e1d9a0 + (sx.q(rax_12 s>> 0x10) << 3)) + sx.q(zx.d(rax_12.w) - rdx_4) * 0x18

if ((*(arg1 + 0x5c) & 8) != 0 || ((*(rdi + 8) u>> 0x1d).b & 1) != 0)
    result.b = 1
else
    result.b = 0

return result
