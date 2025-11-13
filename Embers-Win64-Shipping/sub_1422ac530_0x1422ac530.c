// 函数: sub_1422ac530
// 地址: 0x1422ac530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = nullptr
int64_t arg_8 = 0
uint64_t result = (*(*arg1 + 0x6a8))(arg1, 0, 0)
uint64_t result_1 = result

if (result != 0)
    int32_t rax_1 = *(arg1 + 0xc)
    
    if (rax_1 s< data_143e1d9b4)
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        rbx = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
    
    result = zx.q(*(rbx + 8) u>> 0x1d)
    
    if ((result.b & 1) == 0)
        return sub_142221880(result_1, arg2)

return result
