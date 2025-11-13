// 函数: sub_1420cce00
// 地址: 0x1420cce00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg1[1].d

if (r9 == 0)
    if (arg2 != 0)
        *arg2 = 0xffffffff
    
    *arg3 = 0
    return 

int32_t i_4 = 0
int128_t* rbx = *arg1
int32_t i = 1
float zmm5[0x4] = *rbx

if (r9 s> 1)
    int32_t i_1
    
    if (r9 s> 4)
        void* r11_1 = rbx + 0xc
        
        do
            float zmm1 = *(r11_1 - 8)
            i_1 = i + 1
            bool cond:0_1 = zmm5[0] <= zmm1
            r11_1 += 0x10
            int32_t i_2 = i
            float temp0_1 = _mm_min_ss(zmm1, zmm5[0])
            zmm5 = *(r11_1 - 0xc)
            
            if (cond:0_1)
                i_2 = i_4
            
            i_4 = i + 3
            bool cond:1_1 = temp0_1 f<= *(r11_1 - 0x14)
            float temp0_2 = __minss_xmmss_memss(temp0_1, *(r11_1 - 0x14))
            
            if (cond:1_1)
                i_1 = i_2
            
            int32_t i_3 = i + 2
            bool cond:2_1 = temp0_2 f<= *(r11_1 - 0x10)
            float temp0_3 = __minss_xmmss_memss(temp0_2, *(r11_1 - 0x10))
            
            if (cond:2_1)
                i_3 = i_1
            
            bool cond:3_1 = temp0_3 <= zmm5[0]
            zmm5 = _mm_min_ss(zmm5[0], temp0_3)
            
            if (cond:3_1)
                i_4 = i_3
            
            i += 4
        while (i s< r9 - 3)
    
    if (i s< r9)
        void* rcx = rbx + (sx.q(i) << 2)
        
        do
            float zmm0[0x4] = *rcx
            rcx += 4
            bool cond:4_1 = zmm5[0] <= zmm0[0]
            i_1 = i
            float temp0_5[0x4] = _mm_min_ss(zmm0[0], zmm5[0])
            
            if (cond:4_1)
                i_1 = i_4
            
            i += 1
            i_4 = i_1
            zmm5 = temp0_5
        while (i s< r9)

if (arg2 != 0)
    *arg2 = i_4

*arg3 = zmm5[0]
