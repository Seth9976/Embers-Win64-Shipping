// 函数: sub_1414a2f50
// 地址: 0x1414a2f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = nullptr
int64_t rcx = sx.q(*(arg3 + 0xa8))

if (rcx.d s> 0)
    int64_t rbx_1 = sx.q(*(arg1 + 0x50))
    void* r8 = *(arg3 + 0xa0)
    int64_t rax_2 = 0
    int64_t r9_2 = sx.q(*(*(arg1 + 0x5c0) + 0x28)) * 0x78
    
    do
        if ((_mm_bsrli_si128(*(*(*(r8 + 0x18d0) + r9_2 + 0x30) + rbx_1 * 0x10), 8).b & 8) != 0)
            r11 = r8
            break
        
        rax_2 += 1
        r8 += 0x5240
    while (rax_2 s< rcx)

void** rax_3 = sub_14141b700(r11)
int64_t result = sub_141493bd0(arg1, arg2, rax_3)
*(arg1 + 0x10) = rax_3
return result
