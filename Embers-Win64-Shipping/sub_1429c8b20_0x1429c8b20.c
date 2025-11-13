// 函数: sub_1429c8b20
// 地址: 0x1429c8b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdi = 0
int32_t rdx = 0
int32_t zmm0 = (zx.o(0)).d

if (not(arg2.d f<= 0f) && not(0f f< arg3))
    rdx = 1
    zmm0 = arg2.d

if ((*arg1 & 0x60) == 0 || arg6 == 0)
    if (arg4 s>= 4)
        void* rcx_2 = arg5 + 8
        uint64_t rax_7 = zx.q(((arg4 - 4) u>> 2) + 1)
        uint64_t i_6 = zx.q(rax_7.d)
        rdi = (rax_7 << 2).d
        uint64_t i
        
        do
            arg2 = *(rcx_2 - 8)
            
            if (not(arg2.d f<= 0f) && not(1f f< arg2.d))
                zmm0 = zmm0 f+ arg2.d
                rdx += 1
            
            arg2 = *(rcx_2 - 4)
            
            if (not(arg2.d f<= 0f) && not(1f f< arg2.d))
                zmm0 = zmm0 f+ arg2.d
                rdx += 1
            
            arg2 = *rcx_2
            
            if (not(arg2.d f<= 0f) && not(1f f< arg2.d))
                zmm0 = zmm0 f+ arg2.d
                rdx += 1
            
            arg2 = *(rcx_2 + 4)
            
            if (not(arg2.d f<= 0f) && not(1f f< arg2.d))
                zmm0 = zmm0 f+ arg2.d
                rdx += 1
            
            rcx_2 += 0x10
            i = i_6
            i_6 -= 1
        while (i != 1)
    
    if (rdi s< arg4)
        void* rcx_3 = arg5 + (sx.q(rdi) << 2)
        uint64_t i_5 = zx.q(arg4 - rdi)
        uint64_t i_1
        
        do
            arg2 = *rcx_3
            
            if (not(arg2.d f<= 0f) && not(1f f< arg2.d))
                zmm0 = zmm0 f+ arg2.d
                rdx += 1
            
            rcx_3 += 4
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
else
    if (arg4 s>= 4)
        int128_t* r8_2 = arg5 - arg6
        uint64_t rax_3 = zx.q(((arg4 - 4) u>> 2) + 1)
        void* rcx = arg6 + 4
        uint64_t i_7 = zx.q(rax_3.d)
        rdi = (rax_3 << 2).d
        uint64_t i_2
        
        do
            arg2 = *(r8_2 + rcx - 4)
            
            if (not(arg2.d f<= 0f) && not(0f f< *(rcx - 4)))
                zmm0 = zmm0 f+ arg2.d
                rdx += 1
            
            arg2 = *(r8_2 + rcx)
            
            if (not(arg2.d f<= 0f) && not(0f f< *rcx))
                zmm0 = zmm0 f+ arg2.d
                rdx += 1
            
            arg2 = *(r8_2 + rcx + 4)
            
            if (not(arg2.d f<= 0f) && not(0f f< *(rcx + 4)))
                zmm0 = zmm0 f+ arg2.d
                rdx += 1
            
            arg2 = *(r8_2 + rcx + 8)
            
            if (not(arg2.d f<= 0f) && not(0f f< *(rcx + 8)))
                zmm0 = zmm0 f+ arg2.d
                rdx += 1
            
            rcx += 0x10
            i_2 = i_7
            i_7 -= 1
        while (i_2 != 1)
    
    if (rdi s< arg4)
        void* rcx_1 = arg6 + (sx.q(rdi) << 2)
        uint64_t i_4 = zx.q(arg4 - rdi)
        uint64_t i_3
        
        do
            arg2 = *(arg5 - arg6 + rcx_1)
            
            if (not(arg2.d f<= 0f) && not(0f f< *rcx_1))
                zmm0 = zmm0 f+ arg2.d
                rdx += 1
            
            rcx_1 += 4
            i_3 = i_4
            i_4 -= 1
        while (i_3 != 1)

if (rdx != 0)
    return _mm_min_ss(0x3f800000, zmm0 f/ _mm_cvtepi32_ps(zx.o(rdx)).d)

return (zx.o(0)).d
