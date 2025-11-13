// 函数: sub_141df0ab0
// 地址: 0x141df0ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d s<= 0)
    return 

int32_t i = 0
(*arg1)[1].d = 0

if (arg1[1].d s<= 0)
    return 

int64_t r10_1 = 0
int64_t* rax = nullptr

do
    int64_t rcx = *arg1
    uint32_t zmm0[0x4]
    
    if (r10_1 s> 0)
        void* r8_1 = *(rax + rcx - 0x20)
        uint32_t zmm2[0x4]
        
        if (r8_1 == 0)
            zmm2 = 0x3f800000
        else
            zmm2 = *(r8_1 + 0x94)
        
        zmm2[0] = zmm2[0] f* *(rax + rcx - 0xc)
        
        if (not(_mm_and_ps(zmm2, 0x7fffffff)[0] f> 9.99999994e-09f))
            zmm2 = 0x3f800000
        
        zmm0 = zx.o(*(rax + rcx - 8))
        uint32_t temp0_2[0x4] = _mm_and_ps(zmm2, 0x7fffffff)
        *(rax + rcx + 8) = (*(rax + rcx - 0x10) f- *(rax + rcx - 0x14)) f* _mm_cvtepi32_ps(zmm0)[0]
            f/ temp0_2[0] f+ *(rax + rcx - 0x18)
    
    void* r8_2 = *(rax + rcx)
    
    if (r8_2 != 0)
        zmm0 = *(r8_2 + 0x90)
        
        if (not(zmm0[0] f>= *(rax + rcx + 0x10)))
            *(rax + rcx + 0x10) = zmm0[0]
    
    i += 1
    r10_1 += 1
    rax = &rax[4]
while (i s< arg1[1].d)
