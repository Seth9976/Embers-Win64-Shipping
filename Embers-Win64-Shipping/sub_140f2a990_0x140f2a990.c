// 函数: sub_140f2a990
// 地址: 0x140f2a990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg2)
void*** result_1 = j_sub_140a82f30(0x60)
void*** result = result_1

if (result_1 == 0)
    result = result_1
else
    sub_140ddb700(result_1)
    *result = &data_142ee3ed0
    result[4].d = 1
    *(result + 0x24) = 1
    result[5] = 0
    result[6].d = 0
    result[7].d = 0x3f800000
    *(result + 0x3c) = 1
    result[8] = 0
    result[9].d = 0
    result[0xa] = 0
    result[0xb].d = 0

if (r15.d == 0xffffffff)
    sub_140de6520(arg1 + 0x2a8, result)
    return result

if (*(arg1 + 0x2c8) == 0)
    int32_t r14_1 = *(arg1 + 0x2c0)
    *(arg1 + 0x2c0) = r14_1 + 1
    
    if (r14_1 + 1 s> *(arg1 + 0x2c4))
        sub_140638870(arg1 + 0x2b8)
    
    int64_t rdx_2 = *(arg1 + 0x2b8) + (r15 << 3)
    memmove(rdx_2 + 8, rdx_2, (r14_1 - r15.d) << 3)
    *(*(arg1 + 0x2b8) + (r15 << 3)) = result
    int64_t rax_4 = *(arg1 + 0x2b0)
    
    if (rax_4 != 0 && result[1] != rax_4)
        result[1] = rax_4
        sub_140de7bf0(result)

return result
