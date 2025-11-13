// 函数: sub_1423ce410
// 地址: 0x1423ce410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *arg1
void* rbx = nullptr

if (result != 0)
label_1423ce45f:
    result = zx.q(*(result + 0xc))
    
    if (result.d s< data_143e1d9b4)
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(result.d)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_2 = temp1_1 + rdx_1
        result = data_143e1d9a0
        rbx = *(result + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18
    
    *(rbx + 8) |= 0x40000000
else
    result = sub_140d2f6f0(sub_1425b3bb0(), 0, arg2, 0, 0, 0, 1, 0)
    *arg1 = result
    
    if (result != 0)
        goto label_1423ce45f

return result
