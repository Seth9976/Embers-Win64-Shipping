// 函数: sub_142a48110
// 地址: 0x142a48110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 8) & 1) != 0)
    return *(arg2 + 8) & 1

int16_t r8 = *(arg1 + 8)
int32_t rax_2

if (r8 s< 0)
    rax_2 = *(arg1 + 0xc)
else
    rax_2 = sx.d(r8) s>> 5

int16_t r10 = *(arg2 + 8)
int32_t r9_1

if (r10 s< 0)
    r9_1 = *(arg2 + 0xc)
else
    r9_1 = sx.d(r10) s>> 5

if ((*(arg2 + 8) & 1) == 0 && rax_2 == r9_1)
    void* buffer2
    
    if ((r10.b & 2) == 0)
        buffer2 = *(arg2 + 0x18)
    else
        buffer2 = arg2 + 0xa
    
    void* buffer1
    
    if ((r8.b & 2) == 0)
        buffer1 = *(arg1 + 0x18)
    else
        buffer1 = arg1 + 0xa
    
    if (memcmp(buffer1, buffer2, sx.q(rax_2 * 2)) == 0)
        int32_t result
        result.b = 1
        return result

return 0
