// 函数: sub_140be0dd0
// 地址: 0x140be0dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = *arg2

if (result != 0 && result != *(arg1 + 0x18))
    int32_t r8_1 = result[3]
    void* const rax_7
    
    if (r8_1 s>= data_143e1d9b4)
        rax_7 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r8_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_2 = temp1_1 + rdx_1
        rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18
    
    result = zx.q(*(rax_7 + 8) u>> 0x19)
    void arg_10
    
    if ((result.b & 1) == 0 && r8_1 s> data_143e1d994)
        return sub_140b91690(arg1 + 0x20, &arg_10, arg2, nullptr)

return result
