// 函数: sub_141e3e490
// 地址: 0x141e3e490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2[1].d)
int64_t rbx = 0
uint32_t result[0x4] = zx.o(0)
uint32_t zmm0[0x4]
uint32_t zmm1[0x4]
int32_t zmm2

if (r11 s>= 4)
    int32_t* rdx_1 = *arg2 + 0x10
    int64_t i_2 = ((r11 - 4) u>> 2) + 1
    rbx = i_2 << 2
    int64_t i
    
    do
        int64_t rax_1 = sx.q(rdx_1[-4])
        
        if (rax_1.d s>= 0 && rax_1.d s< *(arg1 + 0xd0))
            void* r8_1 = *(*(arg1 + 0xc8) + rax_1 * 0x18)
            
            if (r8_1 != 0)
                zmm1 = *(r8_1 + 0x94)
                zmm1[0] = zmm1[0] f* rdx_1[3]
                
                if (zmm1[0] f== 0f)
                    zmm1 = 0x3f800000
                else
                    zmm1 = _mm_and_ps(zmm1, 0x7fffffff)
                
                zmm2 = *rdx_1
                
                if (zmm2 f>= 0f)
                    zmm2 = _mm_min_ss(zmm2, 0x3f800000)
                else
                    zmm2 = (zx.o(0)).d
                
                zmm0 = *(r8_1 + 0x90)
                zmm0[0] = zmm0[0] f/ zmm1[0]
                zmm0[0] = zmm0[0] f* zmm2
                result[0] = result[0] f+ zmm0[0]
        
        int64_t rax_3 = sx.q(rdx_1[0xc])
        
        if (rax_3.d s>= 0 && rax_3.d s< *(arg1 + 0xd0))
            void* r8_2 = *(*(arg1 + 0xc8) + rax_3 * 0x18)
            
            if (r8_2 != 0)
                zmm1 = *(r8_2 + 0x94)
                zmm1[0] = zmm1[0] f* rdx_1[0x13]
                
                if (zmm1[0] f== 0f)
                    zmm1 = 0x3f800000
                else
                    zmm1 = _mm_and_ps(zmm1, 0x7fffffff)
                
                zmm2 = rdx_1[0x10]
                
                if (zmm2 f>= 0f)
                    zmm2 = _mm_min_ss(zmm2, 0x3f800000)
                else
                    zmm2 = (zx.o(0)).d
                
                zmm0 = *(r8_2 + 0x90)
                zmm0[0] = zmm0[0] f/ zmm1[0]
                zmm0[0] = zmm0[0] f* zmm2
                result[0] = result[0] f+ zmm0[0]
        
        int64_t rax_5 = sx.q(rdx_1[0x1c])
        
        if (rax_5.d s>= 0 && rax_5.d s< *(arg1 + 0xd0))
            void* r8_3 = *(*(arg1 + 0xc8) + rax_5 * 0x18)
            
            if (r8_3 != 0)
                zmm1 = *(r8_3 + 0x94)
                zmm1[0] = zmm1[0] f* rdx_1[0x23]
                
                if (zmm1[0] f== 0f)
                    zmm1 = 0x3f800000
                else
                    zmm1 = _mm_and_ps(zmm1, 0x7fffffff)
                
                zmm2 = rdx_1[0x20]
                
                if (zmm2 f>= 0f)
                    zmm2 = _mm_min_ss(zmm2, 0x3f800000)
                else
                    zmm2 = (zx.o(0)).d
                
                zmm0 = *(r8_3 + 0x90)
                zmm0[0] = zmm0[0] f/ zmm1[0]
                zmm0[0] = zmm0[0] f* zmm2
                result[0] = result[0] f+ zmm0[0]
        
        int64_t rax_7 = sx.q(rdx_1[0x2c])
        
        if (rax_7.d s>= 0 && rax_7.d s< *(arg1 + 0xd0))
            void* r8_4 = *(*(arg1 + 0xc8) + rax_7 * 0x18)
            
            if (r8_4 != 0)
                zmm1 = *(r8_4 + 0x94)
                zmm1[0] = zmm1[0] f* rdx_1[0x33]
                
                if (zmm1[0] f== 0f)
                    zmm1 = 0x3f800000
                else
                    zmm1 = _mm_and_ps(zmm1, 0x7fffffff)
                
                zmm2 = rdx_1[0x30]
                
                if (zmm2 f>= 0f)
                    zmm2 = _mm_min_ss(zmm2, 0x3f800000)
                else
                    zmm2 = (zx.o(0)).d
                
                zmm0 = *(r8_4 + 0x90)
                zmm0[0] = zmm0[0] f/ zmm1[0]
                zmm0[0] = zmm0[0] f* zmm2
                result[0] = result[0] f+ zmm0[0]
        
        rdx_1 = &rdx_1[0x40]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (rbx s< r11)
    int32_t* rdx_4 = *arg2 + 0x10 + (rbx << 6)
    int64_t i_3 = r11 - rbx
    int64_t i_1
    
    do
        int64_t rax_11 = sx.q(rdx_4[-4])
        
        if (rax_11.d s>= 0 && rax_11.d s< *(arg1 + 0xd0))
            void* r8_5 = *(*(arg1 + 0xc8) + rax_11 * 0x18)
            
            if (r8_5 != 0)
                zmm0 = *(r8_5 + 0x94)
                zmm0[0] = zmm0[0] f* rdx_4[3]
                
                if (zmm0[0] f== 0f)
                    zmm0 = 0x3f800000
                else
                    zmm0 = _mm_and_ps(zmm0, 0x7fffffff)
                
                zmm2 = *rdx_4
                
                if (zmm2 f>= 0f)
                    zmm2 = _mm_min_ss(zmm2, 0x3f800000)
                else
                    zmm2 = (zx.o(0)).d
                
                zmm1 = *(r8_5 + 0x90)
                zmm1[0] = zmm1[0] f/ zmm0[0]
                zmm1[0] = zmm1[0] f* zmm2
                result[0] = result[0] f+ zmm1[0]
        
        rdx_4 = &rdx_4[0x10]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
