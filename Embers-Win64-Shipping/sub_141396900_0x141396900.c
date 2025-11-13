// 函数: sub_141396900
// 地址: 0x141396900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 8)
void* rcx = *(arg1 + 0xf0)
uint128_t zmm1 = *(rax + 0xc0)
uint128_t var_28 = zmm1
int64_t zmm0 = *(rax + 0xd0)
int64_t var_38 = zmm1.q
int64_t var_18 = zmm0
int32_t var_10 = *(rax + 0xd8)
int32_t var_30 = _mm_bsrli_si128(zmm1, 8).d
int64_t rax_2 = sub_1413e7be0(rcx, &var_38)
void* rcx_1 = *(arg1 + 0xf0)
*(arg1 + 0x80) = rax_2
int128_t* result = sub_1413e7810(rcx_1, &var_28)
void* rcx_2 = *(arg1 + 0xf0)
*(arg1 + 0x78) = result

if (*(rcx_2 + 8) s< 3)
    int32_t rax_3 = var_28:8.d
    var_38 = var_28.q
    int32_t var_30_1 = rax_3
    result = sub_1413e7e50(rcx_2, &var_38, arg1 + 0xa8)

*(arg1 + 0xa0) &= 0xfffffffe
return result
