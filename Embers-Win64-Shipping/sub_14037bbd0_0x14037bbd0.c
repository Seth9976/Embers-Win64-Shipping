// 函数: sub_14037bbd0
// 地址: 0x14037bbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rbx = *arg1
int64_t r8 = arg1[1]
int64_t r9 = *(arg1 + 0x2c)
int64_t r11 = *(arg1 + 0x34)

if (arg1[8].d != 0)
    r11 = 1
    r9 = 1

float* rdi = arg1[3]
int64_t result_2 = sx.q(*(arg1 + 0x3c))
int64_t result = divu.dp.q(0:(*(arg1 + 0x24)), r9)
float zmm1
uint128_t zmm3

if (rdi != 0)
    int64_t r10_2 = 0
    int64_t result_1 = result
    
    if (result != 0)
        float* r15_1 = arg1[2]
        
        do
            int64_t rcx_1 = 0
            float* rbp_3 = r15_1
            float* r12_2 = rdi
            
            if (r11 != 0)
                zmm3.d = float.s(r10_2)
                uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(sx.d(*rbx)))
                
                if (r10_2 s< 0)
                    zmm3.d = zmm3.d f+ 1.84467441e+19f
                
                result = result_2
                
                do
                    int64_t rdx_3 = 1
                    float zmm2 = zmm3.d * *r12_2
                    r12_2 = &r12_2[1]
                    zmm2 = zmm2 + *rbp_3
                    rbp_3 = &rbp_3[1]
                    zmm2 = zmm2 f* zmm4.d * 3.05175781e-05f
                    
                    if (1 u< r9)
                        do
                            int32_t rax_2 = sx.d(rbx[rdx_3])
                            rdx_3 += 1
                            zmm1 = zmm3.d * *r12_2
                            r12_2 = &r12_2[1]
                            zmm1 = zmm1 + *rbp_3
                            rbp_3 = &rbp_3[1]
                            zmm2 = zmm2 + zmm1 f* _mm_cvtepi32_ps(zx.o(rax_2)).d * 3.05175781e-05f
                        while (rdx_3 u< r9)
                        
                        result = result_2
                    
                    if (result != 0)
                        zmm2 = zmm2 f+ *(r8 + (rcx_1 << 2))
                    
                    *(r8 + (rcx_1 << 2)) = zmm2
                    rcx_1 += 1
                while (rcx_1 u< r11)
            
            r10_2 += 1
            rbx = &rbx[r9]
            r8 += r11 << 2
        while (r10_2 u< result_1)
else
    int64_t rdi_1 = result
    
    if (result != 0)
        float* r12_1 = arg1[2]
        int64_t i
        
        do
            int64_t rcx = 0
            float* rdx_2 = r12_1
            
            if (r11 != 0)
                result = zx.q(sx.d(*rbx))
                zmm3 = _mm_cvtepi32_ps(zx.o(result.d))
                
                do
                    int64_t r10_1 = 1
                    zmm1 = zmm3.d * *rdx_2
                    rdx_2 = &rdx_2[1]
                    zmm1 = zmm1 * 3.05175781e-05f
                    
                    if (1 u< r9)
                        do
                            result = zx.q(sx.d(rbx[r10_1]))
                            r10_1 += 1
                            uint128_t zmm0
                            zmm0.d = _mm_cvtepi32_ps(zx.o(result.d)).d f* *rdx_2
                            rdx_2 = &rdx_2[1]
                            zmm0.d = zmm0.d f* 3.05175781e-05f
                            zmm1 = zmm1 f+ zmm0.d
                        while (r10_1 u< r9)
                    
                    if (result_2 != 0)
                        zmm1 = zmm1 f+ *(r8 + (rcx << 2))
                    
                    *(r8 + (rcx << 2)) = zmm1
                    rcx += 1
                while (rcx u< r11)
            
            rbx = &rbx[r9]
            r8 += r11 << 2
            i = rdi_1
            rdi_1 -= 1
        while (i != 1)
return result
