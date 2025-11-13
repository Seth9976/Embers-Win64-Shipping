// 函数: sub_141a00b10
// 地址: 0x141a00b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *arg1
int32_t i = 0

if (*(r10 + 0xd0) s<= 0)
    return 

int32_t* r8_1 = nullptr
int64_t* r9_1 = nullptr

do
    void* rdx_1 = *(r9_1 + *(r10 + 0xc8))
    
    if (rdx_1 != 0)
        void* rax = *(rdx_1 + 0x158)
        
        if (rax != 0)
            uint128_t zmm0 = zx.o(*(*(rax + 0x78) + 0x60))
            rax = *(r10 + 0x60)
            zmm0 = _mm_cvtepi32_ps(zmm0)
            
            if ((rax.b & 1) != 0)
                rax = (rax s>> 1) + r10 + 0x60
            
            *(r8_1 + rax) = zmm0.d
    
    i += 1
    r9_1 = &r9_1[1]
    r8_1 = &r8_1[1]
while (i s< *(r10 + 0xd0))
