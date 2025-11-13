// 函数: sub_14206a890
// 地址: 0x14206a890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*(arg1 + 0x28))
void* rcx_1
void* rdi_1
int32_t i_2
int32_t r15_1

if (rcx.d != 0)
    void* rax_1 = *(arg1 + 0x20)
    i_2 = (rcx - 1).d
    rdi_1 = arg1
    
    if (rax_1 != 0)
        rdi_1 = rax_1
    
    rcx_1 = *(rdi_1 + (rcx << 3) - 8)
    r15_1 = *(rcx_1 + 0x4c)

int64_t result

if (rcx.d == 0 || r15_1 s<= 0)
    *(arg1 + 0x30) += 1
    result = zx.q(*(arg1 + 0x30))
    
    if (result.d s> arg2[2])
        result = sub_1420575b0(arg1, 0)
else
    int32_t i_1 = i_2
    int32_t r12_1 = *(rcx_1 + 0x48)
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t* rcx_2 = *rdi_1
            
            if (rcx_2 != 0)
                (**rcx_2)(rcx_2, 1)
            
            rdi_1 += 8
            i = i_1
            i_1 -= 1
        while (i != 1)
        int32_t rax_3 = *(arg1 + 0x28)
        void* r8_1 = *(arg1 + 0x20)
        
        if (rax_3 != i_2)
            void* rcx_3 = arg1
            
            if (r8_1 != 0)
                rcx_3 = r8_1
            
            memmove(rcx_3, rcx_3 + (sx.q(i_2) << 3), (rax_3 - i_2) << 3)
            rax_3 = *(arg1 + 0x28)
        
        *(arg1 + 0x28) = rax_3 - i_2
        sub_141bdc8d0(arg1)
    
    float zmm1 = arg2[1]
    uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg2[3]))
    uint128_t zmm6
    zmm6.d = _mm_cvtepi32_ps(zx.o(r15_1)).d f* zmm1
    zmm6 = _mm_max_ss(zmm6.d, zmm0.d)
    
    if (zmm1 f* zmm6.d f>= _mm_cvtepi32_ps(zx.o(r12_1)).d)
        *(arg1 + 0x30) = 0
    else
        *(arg1 + 0x30) += 1
        
        if (*(arg1 + 0x30) s> arg2[2])
            sub_1420575b0(arg1, 0)
            void*** rax_7 = j_sub_140a82f30(0x50)
            void*** rsi_1
            
            if (rax_7 == 0)
                rsi_1 = nullptr
            else
                rsi_1 = sub_142048e30(rax_7, zx.q(int.d(zmm6.d)), 0, arg2)
            
            int64_t rdi_2 = sx.q(*(arg1 + 0x28))
            int32_t rax_9 = (rdi_2 + 1).d
            *(arg1 + 0x28) = rax_9
            
            if (rax_9 s> *(arg1 + 0x2c))
                sub_14083a490(arg1, rdi_2.d)
            
            void* rax_10 = *(arg1 + 0x20)
            void* rcx_8 = arg1
            
            if (rax_10 != 0)
                rcx_8 = rax_10
            
            *(rcx_8 + (rdi_2 << 3)) = rsi_1
    
    void* rax_11 = *(arg1 + 0x20)
    void* rcx_9 = arg1
    
    if (rax_11 != 0)
        rcx_9 = rax_11
    
    result = sx.q(*(arg1 + 0x28))
    *(*(rcx_9 + (result << 3) - 8) + 0x4c) = 0

*(arg1 + 0x38) = 0xffffffff
return result
