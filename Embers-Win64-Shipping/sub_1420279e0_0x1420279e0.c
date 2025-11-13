// 函数: sub_1420279e0
// 地址: 0x1420279e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = data_143e1d9b4
int32_t r10 = 0
int64_t rbp = 0
int64_t rsi = data_143e1d9a0
float zmm2[0x4] = zx.o(0)
int64_t zmm4 = (zx.o(0)).q
int64_t rdi = sx.q(arg2[1].d)
int32_t zmm3 = (zx.o(0)).d
float zmm1[0x4]

if (rdi s>= 4)
    void* r9_2 = *arg2 + 0x10
    int64_t i_2 = ((rdi - 4) u>> 2) + 1
    rbp = i_2 << 2
    int64_t i
    
    do
        void* r8_1 = *(r9_2 - 0x10)
        
        if (r8_1 != 0)
            int32_t rax_1 = *(r8_1 + 0xc)
            void* const rdx_1
            
            if (rax_1 s>= r11)
                rdx_1 = nullptr
            else
                uint32_t rcx = zx.d(rax_1.w)
                
                if (rax_1 s< 0)
                    rax_1 += 0xffff
                    rcx -= 0x10000
                
                rdx_1 = *(rsi + (sx.q(rax_1 s>> 0x10) << 3)) + sx.q(rcx) * 0x18
            
            if (((*(rdx_1 + 8) u>> 0x1d).b & 1) == 0)
                void* rax_7 = *(r8_1 + 0x130)
                
                if (rax_7 != 0)
                    zmm1 = *(rax_7 + 0x1d0)
                    r10 += 1
                    zmm2[0] = zmm2[0] + zmm1[0]
                    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                    zmm4.d = zmm4.d f+ temp0_1[0]
                    zmm3 = zmm3 f+ temp0_2[0]
        
        void* r8_2 = *(r9_2 - 8)
        
        if (r8_2 != 0)
            int32_t rax_8 = *(r8_2 + 0xc)
            void* const rdx_3
            
            if (rax_8 s>= r11)
                rdx_3 = nullptr
            else
                uint32_t rcx_2 = zx.d(rax_8.w)
                
                if (rax_8 s< 0)
                    rax_8 += 0xffff
                    rcx_2 -= 0x10000
                
                rdx_3 = *(rsi + (sx.q(rax_8 s>> 0x10) << 3)) + sx.q(rcx_2) * 0x18
            
            if (((*(rdx_3 + 8) u>> 0x1d).b & 1) == 0)
                void* rax_14 = *(r8_2 + 0x130)
                
                if (rax_14 != 0)
                    zmm1 = *(rax_14 + 0x1d0)
                    r10 += 1
                    zmm2[0] = zmm2[0] + zmm1[0]
                    float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    float temp0_4[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                    zmm4.d = zmm4.d f+ temp0_3[0]
                    zmm3 = zmm3 f+ temp0_4[0]
        
        void* r8_3 = *r9_2
        
        if (r8_3 != 0)
            int32_t rax_15 = *(r8_3 + 0xc)
            void* const rdx_5
            
            if (rax_15 s>= r11)
                rdx_5 = nullptr
            else
                uint32_t rcx_4 = zx.d(rax_15.w)
                
                if (rax_15 s< 0)
                    rax_15 += 0xffff
                    rcx_4 -= 0x10000
                
                rdx_5 = *(rsi + (sx.q(rax_15 s>> 0x10) << 3)) + sx.q(rcx_4) * 0x18
            
            if (((*(rdx_5 + 8) u>> 0x1d).b & 1) == 0)
                void* rax_21 = *(r8_3 + 0x130)
                
                if (rax_21 != 0)
                    zmm1 = *(rax_21 + 0x1d0)
                    r10 += 1
                    zmm2[0] = zmm2[0] + zmm1[0]
                    float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    float temp0_6[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                    zmm4.d = zmm4.d f+ temp0_5[0]
                    zmm3 = zmm3 f+ temp0_6[0]
        
        void* r8_4 = *(r9_2 + 8)
        
        if (r8_4 != 0)
            int32_t rax_22 = *(r8_4 + 0xc)
            void* const rdx_7
            
            if (rax_22 s>= r11)
                rdx_7 = nullptr
            else
                uint32_t rcx_6 = zx.d(rax_22.w)
                
                if (rax_22 s< 0)
                    rax_22 += 0xffff
                    rcx_6 -= 0x10000
                
                rdx_7 = *(rsi + (sx.q(rax_22 s>> 0x10) << 3)) + sx.q(rcx_6) * 0x18
            
            if (((*(rdx_7 + 8) u>> 0x1d).b & 1) == 0)
                void* rax_28 = *(r8_4 + 0x130)
                
                if (rax_28 != 0)
                    zmm1 = *(rax_28 + 0x1d0)
                    r10 += 1
                    zmm2[0] = zmm2[0] + zmm1[0]
                    float temp0_7[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    float temp0_8[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                    zmm4.d = zmm4.d f+ temp0_7[0]
                    zmm3 = zmm3 f+ temp0_8[0]
        
        r9_2 += 0x20
        i = i_2
        i_2 -= 1
    while (i != 1)

if (rbp s< rdi)
    int64_t i_3 = rdi - rbp
    int64_t* r9_3 = *arg2 + (rbp << 3)
    int64_t i_1
    
    do
        void* r8_5 = *r9_3
        
        if (r8_5 != 0)
            int32_t rax_30 = *(r8_5 + 0xc)
            void* const rdx_9
            
            if (rax_30 s>= r11)
                rdx_9 = nullptr
            else
                uint32_t rcx_8 = zx.d(rax_30.w)
                
                if (rax_30 s< 0)
                    rax_30 += 0xffff
                    rcx_8 -= 0x10000
                
                rdx_9 = *(rsi + (sx.q(rax_30 s>> 0x10) << 3)) + sx.q(rcx_8) * 0x18
            
            if (((*(rdx_9 + 8) u>> 0x1d).b & 1) == 0)
                void* rax_36 = *(r8_5 + 0x130)
                
                if (rax_36 != 0)
                    zmm1 = *(rax_36 + 0x1d0)
                    r10 += 1
                    zmm2[0] = zmm2[0] + zmm1[0]
                    float temp0_9[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    float temp0_10[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                    zmm4.d = zmm4.d f+ temp0_9[0]
                    zmm3 = zmm3 f+ temp0_10[0]
        
        r9_3 = &r9_3[1]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

*arg1 = 0
arg1[1].d = 0

if (r10 s> 0)
    zmm1 = 0x3f800000
    zmm1[0] = 1f / _mm_cvtepi32_ps(zx.o(r10))[0]
    zmm2[0] = zmm2[0] * zmm1[0]
    zmm4.d = zmm4.d f* zmm1[0]
    zmm3 = zmm3 f* zmm1[0]
    *arg1 = (_mm_unpacklo_ps(zmm2, zmm4)).q
    arg1[1].d = zmm3

return arg1
