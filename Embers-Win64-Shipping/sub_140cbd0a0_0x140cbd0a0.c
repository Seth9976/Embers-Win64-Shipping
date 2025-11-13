// 函数: sub_140cbd0a0
// 地址: 0x140cbd0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1

if (arg1[1].b != 0)
    return sub_140bdf0a0(rax) __tailcall

uint128_t zmm0 = *(rax + 0x10)
void* result_1 = zmm0.q
char rax_2 = _mm_bsrli_si128(zmm0, 8).b
void* result

if (rax_2 != 0)
label_140cbd0f4:
    result = result_1
label_140cbd0f9:
    
    if (result != 0)
        void* rax_3 = sub_140bdf2e0()
        void* rdx_2 = *(result + 0x10)
        int64_t rax_4 = sx.q(*(rax_3 + 0x38))
        
        if (rax_4.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
            return result
        
        return sub_140bdf0a0(result)
else
    while (true)
        result = result_1
        
        if (result == 0)
            break
        
        zmm0 = *(result + 0x10)
        result_1 = zmm0.q
        rax_2 = _mm_bsrli_si128(zmm0, 8).b
        
        if (rax_2 != 0)
            goto label_140cbd0f4
    
    if (rax_2 != 0)
        goto label_140cbd0f9
return nullptr
