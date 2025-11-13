// 函数: sub_140f6a0b0
// 地址: 0x140f6a0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg2)
void*** result_1 = j_sub_140a82f30(0x20)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    sub_140ddb700(result_1)
    *result = &data_142ec8878

if (*(arg1 + 0x2c8) != 0)
    return result

if (r15.d != 0xffffffff)
    int32_t r14_1 = *(arg1 + 0x2c0)
    *(arg1 + 0x2c0) = r14_1 + 1
    
    if (r14_1 + 1 s> *(arg1 + 0x2c4))
        sub_140638870(arg1 + 0x2b8)
    
    int64_t rbx_1 = r15 << 3
    int64_t rdx_3 = *(arg1 + 0x2b8) + rbx_1
    memmove(rdx_3 + 8, rdx_3, (r14_1 - r15.d) << 3)
    *(rbx_1 + *(arg1 + 0x2b8)) = result
else
    int64_t rsi = sx.q(*(arg1 + 0x2c0))
    int32_t rax = (rsi + 1).d
    *(arg1 + 0x2c0) = rax
    
    if (rax s> *(arg1 + 0x2c4))
        sub_140638870(arg1 + 0x2b8)
    
    *(*(arg1 + 0x2b8) + (rsi << 3)) = result

int64_t rax_3 = *(arg1 + 0x2b0)

if (rax_3 != 0 && result[1] != rax_3)
    result[1] = rax_3
    sub_140de7bf0(result)

return result
