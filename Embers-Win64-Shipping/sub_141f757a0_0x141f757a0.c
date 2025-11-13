// 函数: sub_141f757a0
// 地址: 0x141f757a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax
rax.b = *(arg1 + 0x41c) u>> 3
rax.b &= 1

if (rax.b != 0 && *(arg1 + 0x408) == 0)
    void* rax_1 = sub_140d209c0(arg1)
    int64_t rdx_1 = *rax_1
    rax = (*(rdx_1 + 0x690))(rax_1, rdx_1)
    *(arg1 + 0x408) = rax
    rax.b = rax != 0

if (rax.b != 0)
    uint8_t rdx_2 = *(arg1 + 0x41c)
    float zmm0 = *(arg1 + 0x420)
    uint8_t rcx_1 = rdx_2 u>> 3
    
    if (not(zmm0 >= 9.99999975e-05f))
        zmm0 = 0.100000001f
    
    if (not(zmm0 f== *(*(*(arg1 + 0x408) + 0x28) + 0x3c)))
        *(arg1 + 0x408) = 0
        rcx_1 = 0
        rdx_2 = *(arg1 + 0x41c)
    
    *(arg1 + 0x41c) = ((rcx_1 << 3 ^ rdx_2) & 8) ^ rdx_2

int32_t result = sub_141f2b860(arg1)

if ((*(arg1 + 0x41c) & 8) == 0)
    float zmm1_1 = *(arg1 + 0x420)
    void* rcx_3 = *(*(arg1 + 0x408) + 0x28)
    
    if (not(zmm1_1 >= 9.99999975e-05f))
        zmm1_1 = 0.100000001f
    
    *(rcx_3 + 0x30) = data_143dbb1f8.q
    result = data_143dbb200
    *(rcx_3 + 0x3c) = zmm1_1
    *(rcx_3 + 0x38) = result

return result
