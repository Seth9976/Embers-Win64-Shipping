// 函数: sub_1408be620
// 地址: 0x1408be620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x2a8) == 0 || *(arg1 + 0x280) == 0)
    return 

void* rax = *(arg1 + 0x270)
*(arg1 + 0x2a8) = 0

if (rax == 0)
    return 

float zmm6[0x4] = *(rax + 0x2c)

if (zmm6[0] <= 0f || zmm6[0] f<= arg2)
    return 

int32_t rcx = *(rax + 0x30)

if (rcx s<= 0)
    return 

zmm6[0] = zmm6[0] f- arg2
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rcx))
int32_t i = 0
zmm6[0] = zmm6[0] f/ zmm0.d

do
    void*** rax_1 = data_143ceb928
    
    if (rax_1 == 0)
        rax_1 = j_sub_140a82f30(zx.q((&rax_1[6]).d))
        
        if (rax_1 != 0)
            rax_1, zmm6 = sub_1408b9380(rax_1)
        
        data_143ceb928 = rax_1
    
    if (data_143ceb920 != 0)
        sub_1408c10c0(rax_1, arg1, zmm6, arg3)
    else
        sub_1408c4230(rax_1, arg1, zmm6, arg3)
    
    zmm6 = sub_1408c4d10(arg1, arg3)
    i += 1
while (i s< *(*(arg1 + 0x270) + 0x30))
