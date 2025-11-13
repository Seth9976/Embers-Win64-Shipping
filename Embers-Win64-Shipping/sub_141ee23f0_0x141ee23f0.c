// 函数: sub_141ee23f0
// 地址: 0x141ee23f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rsi

if (arg2 == 0)
    rsi = nullptr
else
    rsi = *(arg2 + 0x298)

void* r15 = *(sub_1405be820(arg1) + 0x130)
int64_t* rax_1 = sub_1424b0d70()
void* rdi = rax_1[0x23]

if (rdi == 0)
    int64_t rdx = *rax_1
    (*(rdx + 0x390))(rax_1, rdx)
    rdi = rax_1[0x23]

float result[0x4] = *(rdi + 0x288)

if (arg2 != 0 && rsi != 0)
    int32_t rcx_1 = *(rsi + 0x38)
    uint128_t zmm0_1
    
    if (rcx_1 s<= *(rdi + 0x294) || r15 == 0 || *(r15 + 0x240) s> *(rdi + 0x298))
        result = *(rdi + 0x260)
        result[0] = result[0] + result[0]
        zmm0_1 = _mm_cvtepi32_ps(zx.o(rcx_1))
        result[0] = result[0] f/ zmm0_1.d
        result = __maxss_xmmss_memss(result[0], *(rdi + 0x28c))
    
    zmm0_1 = zx.o(0)
    
    if (not(zmm0_1.d f!= *(arg1 + 0x22c)) && not(zmm0_1.d f!= *(arg1 + 0x230))
            && not(zmm0_1.d f!= *(arg1 + 0x234)) && not(zmm0_1.d f!= *(arg1 + 0xc4))
            && not(zmm0_1.d f!= *(arg1 + 0xc8)) && not(zmm0_1.d f!= *(arg1 + 0xcc)))
        int64_t* rcx_2 = *(arg3 + 0x48)
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x58))(rcx_2, arg2) != 0)
            return _mm_max_ss((*(rdi + 0x290))[0], result[0])

return result
