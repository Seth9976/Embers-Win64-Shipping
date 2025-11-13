// 函数: sub_140cbd150
// 地址: 0x140cbd150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *(arg1 + 0x10)
void* result_1 = zmm0.q
char rax = _mm_bsrli_si128(zmm0, 8).b
void* const result

if (rax != 0)
label_140cbd190:
    result = result_1
else
    while (true)
        result = result_1
        
        if (result == 0)
            if (rax == 0)
                result = nullptr
            
            break
        
        zmm0 = *(result + 0x10)
        result_1 = zmm0.q
        rax = _mm_bsrli_si128(zmm0, 8).b
        
        if (rax != 0)
            goto label_140cbd190

if (result == 0)
    goto label_140cbd1bd

while (true)
    void* rax_1 = sub_140be01c0()
    void* rdx_1 = *(result + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        return result
    
label_140cbd1bd:
    result = *(result + 0x20)
    
    if (result == 0)
        return 0
