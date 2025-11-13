// 函数: sub_140cc1840
// 地址: 0x140cc1840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *(arg1 + 0x10)
void* i_1 = zmm0.q
char rcx = _mm_bsrli_si128(zmm0, 8).b
void* const i

if (rcx != 0)
label_140cc1881:
    i = i_1
else
    while (true)
        i = i_1
        
        if (i == 0)
            if (rcx == 0)
                i = nullptr
            
            break
        
        zmm0 = *(i + 0x10)
        i_1 = zmm0.q
        char rax_1 = _mm_bsrli_si128(zmm0, 8).b
        rcx = rax_1
        
        if (rax_1 != 0)
            goto label_140cc1881

for (; i != 0; i = *(i + 0x20))
    int32_t rcx_1 = *(i + 0xc)
    void* const r8_2
    
    if (rcx_1 s>= data_143e1d9b4)
        r8_2 = nullptr
    else
        uint32_t rdx_1 = zx.d(rcx_1.w)
        
        if (rcx_1 s< 0)
            rcx_1 += 0xffff
            rdx_1 -= 0x10000
        
        r8_2 = *(data_143e1d9a0 + (sx.q(rcx_1 s>> 0x10) << 3)) + sx.q(rdx_1) * 0x18
    
    if (((*(r8_2 + 8) u>> 0x1e).b & 1) != 0)
        i.b = 1
        return i

i.b = 0
return i
