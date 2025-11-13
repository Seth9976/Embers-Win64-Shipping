// 函数: sub_1414b3a70
// 地址: 0x1414b3a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x570)
int32_t r8_1 = rcx & 0x40
char r9_1
void* r10_1

if (r8_1 != 0)
    r10_1 = *(*(arg1 + 0x5c0) + 0x20)
    r9_1 = *(r10_1 + 0x13c)

float zmm2
float zmm3
float zmm1

if (r8_1 != 0 && ((r9_1 - 1) & 0xfd) == 0)
    void* rax_4
    
    if (r9_1 != 3)
        zmm3 = *(data_143ed9700 + 4)
        rax_4 = data_143ed9718
    else
        zmm3 = *(data_143ed9730 + 4)
        rax_4 = data_143ed9748
    
    int32_t rax_6 = *(arg1 + 0x548)
    int32_t rcx_1 = *(arg1 + 0x54c)
    
    if (rax_6 u>= rcx_1)
        rcx_1 = rax_6
    
    zmm1 = *(r10_1 + 0xd4)
    zmm2 = *(rax_4 + 4) f* *(r10_1 + 0xd8)
    zmm3 = zmm3 * 512f f/ float.s(zx.q(rcx_1)) * (zmm1 + zmm1)
else if (r8_1 != 0 && *(arg1 + 0x534) s>= 0 && (rcx.b & 0x10) != 0)
    zmm1 = *(data_143ed9358 + 4) f/ (*(arg1 + 0x164) f- *(arg1 + 0x168))
    void* rcx_2 = *(*(arg1 + 0x5c0) + 0x20)
    zmm2 = *(rcx_2 + 0xd8) f* *(data_143ed9468 + 4)
    zmm3 = ((*(arg1 + 0x3c0) f/ float.s(zx.q(*(arg1 + 0x548))) * zmm1 - zmm1) f* *(arg1 + 0x538)
        + zmm1) f* *(rcx_2 + 0xd4)
else if (not(test_bit(rcx, 0xb)))
    int32_t r8_2 = *(arg1 + 0x54c)
    int32_t r9_2 = *(arg1 + 0x548)
    void* rax_15
    void* rcx_3
    
    if ((rcx.b & 0x10) == 0)
        if (r9_2 u>= r8_2)
            r8_2 = r9_2
        
        rcx_3 = *(*(arg1 + 0x5c0) + 0x20)
        zmm2 = *(rcx_3 + 0xd4)
        rax_15 = data_143ed9790
        zmm3 = *(data_143ed9778 + 4) * 512f
            / (float.s(zx.q(r8_2)) f* (*(arg1 + 0x164) f- *(arg1 + 0x168))) * (zmm2 + zmm2)
    else
        if (r9_2 u>= r8_2)
            r8_2 = r9_2
        
        rcx_3 = *(*(arg1 + 0x5c0) + 0x20)
        rax_15 = data_143ed9688
        zmm3 = *(arg1 + 0x3c0) f/ float.s(zx.q(r8_2)) f*
            *(data_143ed9578 + 4) f/ (*(arg1 + 0x164) f- *(arg1 + 0x168)) * 0.5f
    
    zmm2 = *(rcx_3 + 0xd8) f* *(rax_15 + 4)
    
    if (not(zmm3 <= 0.100000001f))
        zmm3 = 0.100000001f
else
    zmm3 = (zx.o(0)).d
    zmm2 = (zx.o(0)).d
int32_t temp0 = _mm_max_ss(zmm3, 0)
float temp0_1 = _mm_max_ss(zmm2 * zmm3, 0)
*(arg1 + 0x8f4) = temp0
*(arg1 + 0x8f8) = temp0_1
void* result = data_143ed9830
*(arg1 + 0x8fc) = *(result + 4)
return result
