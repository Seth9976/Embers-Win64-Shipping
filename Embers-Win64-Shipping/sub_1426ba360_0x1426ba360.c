// 函数: sub_1426ba360
// 地址: 0x1426ba360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_141f900b0(arg1)

if ((arg1[0x5a].b & 0x20) != 0)
    int32_t rax = *(arg1 + 0xc)
    void* const rax_7
    
    if (rax s>= data_143e1d9b4)
        rax_7 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_2 = temp1_1 + rdx_2
        rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_2) * 0x18
    
    result = zx.q(*(rax_7 + 8) u>> 0x1d)
    
    if ((result.b & 1) == 0)
        result = sub_141dcdc50(arg1)
        
        if (result.d != 3)
            result = (*(*arg1 + 0x6e8))(arg1)

if (arg1[0x5c] == 0)
    int64_t rax_10 = sub_1427303e0()
    int64_t r8_1 = *arg1
    result = (*(r8_1 + 0x610))(arg1, rax_10, r8_1)
    arg1[0x5c] = result

if (arg1[0x5f] == 0)
    int64_t rax_11 = sub_14272e4a0()
    int64_t r8_2 = *arg1
    result = (*(r8_2 + 0x610))(arg1, rax_11, r8_2)
    arg1[0x5f] = result

return result
