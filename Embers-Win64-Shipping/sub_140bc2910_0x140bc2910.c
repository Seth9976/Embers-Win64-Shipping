// 函数: sub_140bc2910
// 地址: 0x140bc2910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1

if (arg3 == 0)
    rax_1 = data_14399ea98()

if (arg3 != 0 || rax_1 == 0)
    int64_t rdi_1 = sx.q(*(arg1 + 0xc0))
    int32_t rax_2 = (rdi_1 + 1).d
    *(arg1 + 0xc0) = rax_2
    
    if (rax_2 s> *(arg1 + 0xc4))
        sub_1405a4d70(arg1 + 0xb8)
    
    *(*(arg1 + 0xb8) + (rdi_1 << 3)) = arg2
    
    if (arg3 != 0 || data_143de5480 == 0)
        goto label_140bc2994
    
    goto label_140bc298d

void* const result

if (data_143de5480 == 0)
label_140bc2994:
    int32_t rax_4 = *(arg2 + 0xc)
    
    if (rax_4 s>= data_143e1d9b4)
        result = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_4)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_6 = temp1_1 + rdx_2
        result =
            *(data_143e1d9a0 + (sx.q(rax_6 s>> 0x10) << 3)) + sx.q(zx.d(rax_6.w) - rdx_2) * 0x18
    
    *(result + 8) |= 0x4000000
else
label_140bc298d:
    result.b = GetCurrentThreadId().d == data_143de5470
    
    if (result.b != 0)
        goto label_140bc2994

return result
