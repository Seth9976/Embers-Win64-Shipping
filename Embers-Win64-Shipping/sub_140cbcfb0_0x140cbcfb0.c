// 函数: sub_140cbcfb0
// 地址: 0x140cbcfb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *(arg1 + 0x10)
void* var_18 = zmm0.q
char rax = _mm_bsrli_si128(zmm0, 8).b
void* rcx

if (rax != 0)
label_140cbcff0:
    rcx = var_18
else
    while (true)
        rcx = var_18
        
        if (rcx == 0)
            if (rax == 0)
                return sub_140d21d80(nullptr) __tailcall
            
            break
        
        zmm0 = *(rcx + 0x10)
        var_18 = zmm0.q
        rax = _mm_bsrli_si128(zmm0, 8).b
        
        if (rax != 0)
            goto label_140cbcff0

return sub_140d21d80(rcx) __tailcall
