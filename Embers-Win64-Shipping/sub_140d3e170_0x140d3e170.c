// 函数: sub_140d3e170
// 地址: 0x140d3e170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg1[1]
void* const result

if (r9 == 0)
    result = nullptr
else
    int32_t rax_1 = *arg1
    
    if (rax_1 s< 0 || rax_1 s>= data_143e1d9b4)
        result = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        void* const result_1 =
            *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
        
        if (result_1 == 0)
            result = nullptr
        else
            if (*(result_1 + 0x10) != r9)
                result_1 = nullptr
            
            result = result_1

if (arg3 != 0)
    result.b = result != 0
    return result

if (result != 0)
    uint32_t rcx_4 = *(result + 8)
    
    if (arg2 == 0)
        rcx_4.b = (rcx_4 & 0x30000000) == 0
    else
        rcx_4.b = not.b((rcx_4 u>> 0x1c).b)
        rcx_4.b &= 1
    
    if (rcx_4.b != 0)
        result.b = 1
        return result

result.b = 0
return result
