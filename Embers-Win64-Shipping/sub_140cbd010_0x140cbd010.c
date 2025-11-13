// 函数: sub_140cbd010
// 地址: 0x140cbd010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *(arg1 + 0x10)
void* result_1 = zmm0.q
char rax = _mm_bsrli_si128(zmm0, 8).b
void* result

if (rax != 0)
label_140cbd050:
    result = result_1
label_140cbd055:
    
    if (result != 0)
        void* rax_1 = sub_140bdf2e0()
        void* rcx = *(result + 0x10)
        int64_t rdx = sx.q(*(rax_1 + 0x38))
        
        if (rdx.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (rdx << 3)) == rax_1 + 0x30)
            return result
        
        return sub_140bdf0a0(result) __tailcall
else
    while (true)
        result = result_1
        
        if (result == 0)
            break
        
        zmm0 = *(result + 0x10)
        result_1 = zmm0.q
        rax = _mm_bsrli_si128(zmm0, 8).b
        
        if (rax != 0)
            goto label_140cbd050
    
    if (rax != 0)
        goto label_140cbd055
return 0
