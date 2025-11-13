// 函数: sub_141e41340
// 地址: 0x141e41340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[1].d
int32_t i = 0
float zmm1 = 1.17549435e-38f
int32_t i_1 = -1
float zmm3[0x4]
float zmm4[0x4]

if (rdi s>= 4)
    void* rax_1 = *arg1
    int32_t i_2 = 2
    int32_t* rdx = rax_1 + 0x40
    void* r11_1 = rax_1 + 0x90
    
    do
        zmm4 = rdx[-0xc]
        bool cond:8_1 = zmm4[0] >= 0f
        float temp0_1[0x4] = _mm_min_ss(zmm4[0], 0x3f800000)
        
        if (cond:8_1)
            zmm3 = temp0_1
        else
            zmm3 = zx.o(0)
        
        if (not(zmm3[0] <= zmm1) && *(*(*arg2 + sx.q(rdx[-0x10]) * 0x18) + 0x180) s> 0)
            i_1 = i
            
            if (zmm4[0] >= 0f)
                zmm1 = temp0_1[0]
            else
                zmm1 = (zx.o(0)).d
        
        zmm4 = *(r11_1 - 0x40)
        bool cond:0_1 = zmm4[0] >= 0f
        float temp0_2[0x4] = _mm_min_ss(zmm4[0], 0x3f800000)
        
        if (cond:0_1)
            zmm3 = temp0_2
        else
            zmm3 = zx.o(0)
        
        if (not(zmm3[0] <= zmm1) && *(*(*arg2 + sx.q(*rdx) * 0x18) + 0x180) s> 0)
            i_1 = i_2 - 1
            
            if (zmm4[0] >= 0f)
                zmm1 = temp0_2[0]
            else
                zmm1 = (zx.o(0)).d
        
        zmm4 = *r11_1
        bool cond:4_1 = zmm4[0] >= 0f
        float temp0_3[0x4] = _mm_min_ss(zmm4[0], 0x3f800000)
        
        if (cond:4_1)
            zmm3 = temp0_3
        else
            zmm3 = zx.o(0)
        
        if (not(zmm3[0] <= zmm1) && *(*(*arg2 + sx.q(rdx[0x10]) * 0x18) + 0x180) s> 0)
            i_1 = i_2
            
            if (zmm4[0] >= 0f)
                zmm1 = temp0_3[0]
            else
                zmm1 = (zx.o(0)).d
        
        zmm4 = *(r11_1 + 0x40)
        bool cond:6_1 = zmm4[0] >= 0f
        float temp0_4[0x4] = _mm_min_ss(zmm4[0], 0x3f800000)
        
        if (cond:6_1)
            zmm3 = temp0_4
        else
            zmm3 = zx.o(0)
        
        if (not(zmm3[0] <= zmm1) && *(*(*arg2 + sx.q(rdx[0x20]) * 0x18) + 0x180) s> 0)
            i_1 = i_2 + 1
            
            if (zmm4[0] >= 0f)
                zmm1 = temp0_4[0]
            else
                zmm1 = (zx.o(0)).d
        
        rdx = &rdx[0x40]
        r11_1 += 0x100
        i += 4
        i_2 += 4
    while (i s< rdi - 3)

if (i s< rdi)
    int32_t* rdx_3 = (sx.q(i) << 6) + *arg1
    
    do
        zmm3 = rdx_3[4]
        bool cond:2_1 = zmm3[0] >= 0f
        float temp0_5[0x4] = _mm_min_ss(zmm3[0], 0x3f800000)
        
        if (cond:2_1)
            zmm4 = temp0_5
        else
            zmm4 = zx.o(0)
        
        if (not(zmm4[0] <= zmm1) && *(*(*arg2 + sx.q(*rdx_3) * 0x18) + 0x180) s> 0)
            i_1 = i
            
            if (zmm3[0] >= 0f)
                zmm1 = temp0_5[0]
            else
                zmm1 = (zx.o(0)).d
        
        rdx_3 = &rdx_3[0x10]
        i += 1
    while (i s< rdi)

return zx.q(i_1)
