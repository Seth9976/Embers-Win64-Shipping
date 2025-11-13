// 函数: sub_141e41560
// 地址: 0x141e41560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = *arg1
int32_t i_1 = 0
int32_t zmm1 = *(r11 + 0x10)

if (zmm1 f>= 0f)
    zmm1 = _mm_min_ss(zmm1, 0x3f800000)
else
    zmm1 = (zx.o(0)).d

int32_t r9 = arg1[1].d
int32_t i = 1

if (r9 s> 1)
    float zmm3
    int32_t zmm4
    
    if (r9 s> 4)
        int32_t i_2 = 3
        void* rax_1 = r11 + 0x90
        
        do
            zmm3 = *(rax_1 - 0x40)
            float temp0_2 = _mm_min_ss(zmm3, 0x3f800000)
            
            if (zmm3 >= 0f)
                zmm4 = temp0_2
            else
                zmm4 = (zx.o(0)).d
            
            if (not(zmm4 f<= zmm1))
                i_1 = i
                
                if (zmm3 >= 0f)
                    zmm1 = temp0_2
                else
                    zmm1 = (zx.o(0)).d
            
            zmm3 = *rax_1
            float temp0_3 = _mm_min_ss(zmm3, 0x3f800000)
            
            if (zmm3 >= 0f)
                zmm4 = temp0_3
            else
                zmm4 = (zx.o(0)).d
            
            if (not(zmm4 f<= zmm1))
                i_1 = i_2 - 1
                
                if (zmm3 >= 0f)
                    zmm1 = temp0_3
                else
                    zmm1 = (zx.o(0)).d
            
            zmm3 = *(rax_1 + 0x40)
            float temp0_4 = _mm_min_ss(zmm3, 0x3f800000)
            
            if (zmm3 >= 0f)
                zmm4 = temp0_4
            else
                zmm4 = (zx.o(0)).d
            
            if (not(zmm4 f<= zmm1))
                i_1 = i_2
                
                if (zmm3 >= 0f)
                    zmm1 = temp0_4
                else
                    zmm1 = (zx.o(0)).d
            
            zmm3 = *(rax_1 + 0x80)
            float temp0_5 = _mm_min_ss(zmm3, 0x3f800000)
            
            if (zmm3 >= 0f)
                zmm4 = temp0_5
            else
                zmm4 = (zx.o(0)).d
            
            if (not(zmm4 f<= zmm1))
                i_1 = i_2 + 1
                
                if (zmm3 >= 0f)
                    zmm1 = temp0_5
                else
                    zmm1 = (zx.o(0)).d
            
            rax_1 += 0x100
            i += 4
            i_2 += 4
        while (i s< r9 - 3)
    
    if (i s< r9)
        void* rdx_2 = r11 + 0x10 + (sx.q(i) << 6)
        
        do
            zmm3 = *rdx_2
            float temp0_6 = _mm_min_ss(zmm3, 0x3f800000)
            
            if (zmm3 >= 0f)
                zmm4 = temp0_6
            else
                zmm4 = (zx.o(0)).d
            
            if (not(zmm4 f<= zmm1))
                i_1 = i
                
                if (zmm3 >= 0f)
                    zmm1 = temp0_6
                else
                    zmm1 = (zx.o(0)).d
            
            rdx_2 += 0x40
            i += 1
        while (i s< r9)

return zx.q(i_1)
