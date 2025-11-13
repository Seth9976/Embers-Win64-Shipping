// 函数: sub_14037cbd0
// 地址: 0x14037cbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r8 = arg1[2]
int32_t* r11 = arg1[3]
int32_t* r9 = *arg1
int128_t zmm8
int128_t var_38 = zmm8
void* r10 = arg1[1]
float zmm3 = *(r8 + 0x1c)
float zmm4 = r8[2].d
float zmm5 = *(r8 + 0x24)
int128_t zmm6 = *(r8 + 0x28)
int128_t zmm7 = *(r8 + 0x2c)
int64_t rbx = sx.q(*(arg1 + 0x3c))
int64_t result = *(arg1 + 0x24)
int128_t zmm9 = *r8
int128_t zmm10 = *(r8 + 4)
int128_t zmm11 = *(r8 + 8)
int128_t zmm15 = *(r8 + 0x18)
int128_t zmm12 = *(r8 + 0xc)
int128_t zmm13 = r8[1].d
int128_t zmm14 = *(r8 + 0x14)
float zmm0
float zmm1
float zmm2

if (r11 != 0)
    float var_c4_1 = r11[7]
    float var_c0_1 = r11[8]
    float var_bc_1 = r11[9]
    float var_b8_1 = r11[0xa]
    float var_b4_1 = r11[0xb]
    
    if (result != 0)
        int64_t rdx_3
        rdx_3:result = mulu.dp.q(-0x5555555555555555, result - 1)
        int64_t i_3 = (rdx_3 u>> 2) + 1
        int64_t i
        
        do
            zmm8 = r9[1]
            zmm0 = *r9
            zmm1 = r9[2]
            float arg_8 = r9[3]
            zmm2 = r9[4]
            r9 = &r9[6]
            float arg_10 = zmm2
            float arg_18 = r9[-1]
            zmm2 = zmm8.d
            zmm8.d = zmm8.d f* zmm3
            zmm2 = zmm2 f* zmm10.d + zmm0 f* zmm9.d + zmm1 f* zmm11.d + arg_8 f* zmm12.d
                + arg_10 f* zmm13.d + arg_18 f* zmm14.d
            zmm8.d = zmm8.d f+ zmm0 f* zmm15.d
            zmm8.d = zmm8.d f+ zmm1 * zmm4
            zmm8.d = zmm8.d f+ arg_8 * zmm5
            zmm8.d = zmm8.d f+ arg_10 f* zmm6.d
            zmm8.d = zmm8.d f+ arg_18 f* zmm7.d
            
            if (rbx == 0)
                *r10 = zmm2
            else
                *r10 = zmm2 f+ *r10
                zmm8.d = zmm8.d f+ *(r10 + 4)
            
            zmm9.d = zmm9.d f+ *r11
            zmm10.d = zmm10.d f+ r11[1]
            zmm11.d = zmm11.d f+ r11[2]
            zmm12.d = zmm12.d f+ r11[3]
            zmm13.d = zmm13.d f+ r11[4]
            zmm14.d = zmm14.d f+ r11[5]
            zmm15.d = zmm15.d f+ r11[6]
            zmm3 = zmm3 + var_c4_1
            zmm4 = zmm4 + var_c0_1
            zmm5 = zmm5 + var_bc_1
            zmm6.d = zmm6.d f+ var_b8_1
            zmm7.d = zmm7.d f+ var_b4_1
            *(r10 + 4) = zmm8.d
            r10 += 8
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (result != 0)
    int64_t rdx_1
    rdx_1:result = mulu.dp.q(-0x5555555555555555, result - 1)
    int64_t i_2 = (rdx_1 u>> 2) + 1
    int64_t i_1
    
    do
        zmm4 = *r9
        zmm3 = r9[1]
        zmm5 = r9[2]
        zmm6 = r9[3]
        zmm7 = r9[4]
        zmm8 = r9[5]
        r9 = &r9[6]
        zmm0 = zmm6.d
        zmm6.d = zmm6.d f* *(r8 + 0x24)
        zmm1 = zmm7.d
        zmm7.d = zmm7.d f* *(r8 + 0x28)
        zmm2 = zmm3 f* zmm10.d + zmm4 f* zmm9.d + zmm5 f* zmm11.d + zmm0 f* zmm12.d
        zmm0 = zmm8.d
        zmm8.d = zmm8.d f* *(r8 + 0x2c)
        zmm2 = zmm2 + zmm1 f* zmm13.d + zmm0 f* zmm14.d
        zmm3 =
            zmm3 f* *(r8 + 0x1c) + zmm4 f* zmm15.d + zmm5 f* r8[2].d f+ zmm6.d f+ zmm7.d f+ zmm8.d
        
        if (rbx == 0)
            *r10 = zmm2
        else
            *r10 = zmm2 f+ *r10
            zmm3 = zmm3 f+ *(r10 + 4)
        
        *(r10 + 4) = zmm3
        r10 += 8
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
return result
