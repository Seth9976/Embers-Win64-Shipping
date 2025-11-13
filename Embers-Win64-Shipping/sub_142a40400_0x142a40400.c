// 函数: sub_142a40400
// 地址: 0x142a40400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
uint64_t result_1

do
    result_1 = *(arg1 + 0x28)
    uint64_t result_2 = result_1
    result = zx.q(result_1.d) & 3
    
    if (result.d u< 2)
        result_2 &= 0xfffffffffffffffc
    
    if ((result_2.d & 3) == result.d)
        break
    
    result = result_1
    
    if (result == *(arg1 + 0x28))
        *(arg1 + 0x28) = result_2
    else
        result = *(arg1 + 0x28)
while (result_1 != result)
char r10 = *(arg1 + 6)

if ((r10 & 1) == 0)
    return result

void* r11 = *(arg1 + 0x38)
uint64_t rdx_3 = (*(arg1 + 0x30) + 7) u>> 3

if (rdx_3 u<= 1)
    rdx_3.b = 1
else if (rdx_3 u<= 8)
    rdx_3.b += 1
    rdx_3.b &= 0xfe
else if (rdx_3 u<= 0x40000)
    uint64_t rflags_1
    char temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse((rdx_3 - 1).d)
    rdx_3.b = ((rdx_3 - 1) u>> (temp0_1 - 2)).b & 3
    rdx_3.b -= 3
    rdx_3.b += temp0_1 << 2
else
    rdx_3.b = 0x49

*(arg1 + 6) = (r10 & 0xfe) | 1
return sub_142a40920(r11 + ((zx.q(rdx_3.b) * 3 + 0x83) << 3), r11 + 0xb08, arg1) __tailcall
