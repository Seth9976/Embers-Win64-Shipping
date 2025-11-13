// 函数: sub_1403fce10
// 地址: 0x1403fce10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r14 = *(arg1 + 0x20)
uint128_t zmm7 = 0x26901d7d
int32_t rbp = 0xd
int64_t rdi = sx.q(arg4)
int16_t* r10 = r14
int64_t i_1 = 0xd
uint128_t zmm6 = 0x26901d7d
uint128_t zmm8
uint128_t var_38 = zmm8
uint128_t zmm0
uint128_t zmm1
int64_t i

do
    int32_t rax_1 = sx.d(*r10)
    char rcx = arg3.b
    r10 = &r10[1]
    int64_t r8 = sx.q(rax_1 << rcx)
    int64_t r9 = sx.q(sx.d(*r10) << rcx)
    
    if (r8 s< r9)
        uint128_t zmm2
        uint128_t zmm3
        
        if (r9 - r8 s>= 4)
            void* rax_8 = arg2 + 4 + (r8 << 2)
            int64_t j_2 = ((r9 - r8 - 4) u>> 2) + 1
            r8 += j_2 << 2
            int64_t j
            
            do
                zmm1 = *(rax_8 - 4)
                zmm0 = *(rax_8 + (rdi << 2) - 4)
                zmm2.d = zmm0.d f+ zmm1.d
                zmm3.d = zmm1.d f- zmm0.d
                
                if (not(0f f<= zmm1.d))
                    zmm1 ^= 0x80000000
                
                if (not(0f f<= zmm0.d))
                    zmm0 ^= 0x80000000
                
                zmm0.d = zmm0.d f+ zmm1.d
                zmm0.d = zmm0.d f+ zmm7.d
                
                if (not(0f f<= zmm2.d))
                    zmm2 ^= 0x80000000
                
                if (not(0f f<= zmm3.d))
                    zmm3 ^= 0x80000000
                
                zmm1 = *(rax_8 + (rdi << 2))
                zmm3.d = zmm3.d f+ zmm2.d
                zmm2 = *rax_8
                zmm3.d = zmm3.d f+ zmm6.d
                zmm7.d = zmm2.d f- zmm1.d
                zmm6.d = zmm1.d f+ zmm2.d
                
                if (not(0f f<= zmm2.d))
                    zmm2 ^= 0x80000000
                
                if (not(0f f<= zmm1.d))
                    zmm1 ^= 0x80000000
                
                zmm1.d = zmm1.d f+ zmm2.d
                zmm1.d = zmm1.d f+ zmm0.d
                
                if (not(0f f<= zmm6.d))
                    zmm6 ^= 0x80000000
                
                if (not(0f f<= zmm7.d))
                    zmm7 ^= 0x80000000
                
                zmm2 = *(rax_8 + 4)
                zmm0 = *(rax_8 + (rdi << 2) + 4)
                zmm7.d = zmm7.d f+ zmm6.d
                zmm7.d = zmm7.d f+ zmm3.d
                zmm8.d = zmm2.d f- zmm0.d
                zmm3.d = zmm0.d f+ zmm2.d
                
                if (not(0f f<= zmm2.d))
                    zmm2 ^= 0x80000000
                
                if (not(0f f<= zmm0.d))
                    zmm0 ^= 0x80000000
                
                zmm0.d = zmm0.d f+ zmm2.d
                zmm0.d = zmm0.d f+ zmm1.d
                
                if (not(0f f<= zmm3.d))
                    zmm3 ^= 0x80000000
                
                if (not(0f f<= zmm8.d))
                    zmm8 ^= 0x80000000
                
                zmm2 = *(rax_8 + 8)
                zmm8.d = zmm8.d f+ zmm3.d
                zmm8.d = zmm8.d f+ zmm7.d
                zmm7 = *(rax_8 + (rdi << 2) + 8)
                zmm1.d = zmm7.d f+ zmm2.d
                zmm6.d = zmm2.d f- zmm7.d
                
                if (not(0f f<= zmm2.d))
                    zmm2 ^= 0x80000000
                
                if (not(0f f<= zmm7.d))
                    zmm7 ^= 0x80000000
                
                zmm7.d = zmm7.d f+ zmm2.d
                zmm7.d = zmm7.d f+ zmm0.d
                
                if (not(0f f<= zmm1.d))
                    zmm1 ^= 0x80000000
                
                if (not(0f f<= zmm6.d))
                    zmm6 ^= 0x80000000
                
                zmm6.d = zmm6.d f+ zmm1.d
                rax_8 += 0x10
                zmm6.d = zmm6.d f+ zmm8.d
                j = j_2
                j_2 -= 1
            while (j != 1)
        
        if (r8 s< r9)
            uint128_t* rax_9 = arg2 + (r8 << 2)
            int64_t j_3 = r9 - r8
            int64_t j_1
            
            do
                zmm2 = *rax_9
                zmm1 = *(rax_9 + (rdi << 2))
                zmm3.d = zmm1.d f+ zmm2.d
                zmm0.d = zmm2.d f- zmm1.d
                
                if (not(0f f<= zmm2.d))
                    zmm2 ^= 0x80000000
                
                if (not(0f f<= zmm1.d))
                    zmm1 ^= 0x80000000
                
                zmm1.d = zmm1.d f+ zmm2.d
                zmm1.d = zmm1.d f+ zmm7.d
                zmm7 = zmm1
                
                if (not(0f f<= zmm3.d))
                    zmm3 ^= 0x80000000
                
                if (not(0f f<= zmm0.d))
                    zmm0 ^= 0x80000000
                
                zmm0.d = zmm0.d f+ zmm3.d
                rax_9 += 4
                zmm0.d = zmm0.d f+ zmm6.d
                zmm6 = zmm0
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
    
    i = i_1
    i_1 -= 1
while (i != 1)
zmm6.d = zmm6.d f* 0.707107008f

if (arg3 s<= 1)
    rbp = 5

int32_t rdx_1 = sx.d(r14[0xd]) << (arg3.b + 1)
zmm0.d = _mm_cvtepi32_ps(zx.o(rdx_1)).d f* zmm7.d
zmm1.d = _mm_cvtepi32_ps(zx.o(rdx_1 + rbp)).d f* zmm6.d
int64_t result
result.b = zmm1.d f> zmm0.d
return result
