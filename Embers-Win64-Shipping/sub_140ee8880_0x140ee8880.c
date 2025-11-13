// 函数: sub_140ee8880
// 地址: 0x140ee8880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = j_sub_140a82f30(0x28)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    sub_140ddb700(result_1)
    result[4] = 0
    *result = &data_142edf510

int32_t rax_1 = (**(arg1 + 0x2b8))(arg1 + 0x2b8)

if (*(arg1 + 0x2d8) == 0)
    int32_t r14_1 = *(arg1 + 0x2d0)
    *(arg1 + 0x2d0) = r14_1 + 1
    
    if (r14_1 + 1 s> *(arg1 + 0x2d4))
        sub_140638870(arg1 + 0x2c8)
    
    void**** rbx_1 = sx.q(rax_1 - 1) << 3
    void* rdx_3 = *(arg1 + 0x2c8) + rbx_1
    memmove(rdx_3 + 8, rdx_3, (r14_1 - (rax_1 - 1)) << 3)
    *(rbx_1 + *(arg1 + 0x2c8)) = result
    int64_t rax_4 = *(arg1 + 0x2c0)
    
    if (rax_4 != 0 && result[1] != rax_4)
        result[1] = rax_4
        sub_140de7bf0(result)

return result
