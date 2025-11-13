// 函数: sub_14037c310
// 地址: 0x14037c310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = arg1[3]
int32_t* rdx = *arg1
void* r8 = arg1[1]
int64_t r10 = *(arg1 + 0x24)
int64_t r11 = sx.q(*(arg1 + 0x3c))
void* result = arg1[2]
int128_t zmm8 = *result
int128_t zmm9 = *(result + 4)
int128_t zmm10 = *(result + 8)
int128_t zmm11 = *(result + 0xc)
int128_t zmm12 = *(result + 0x10)
int128_t zmm13 = *(result + 0x14)
int128_t zmm14 = *(result + 0x18)
int128_t zmm15 = *(result + 0x1c)
float zmm4 = *(result + 0x20)
float zmm5 = *(result + 0x24)
int128_t zmm6 = *(result + 0x28)
int128_t zmm7 = *(result + 0x2c)
float var_100 = *(result + 0x30)
float var_110 = *(result + 0x34)
float var_f0 = *(result + 0x38)
float var_108 = *(result + 0x3c)
float var_f8 = *(result + 0x40)
float var_118 = *(result + 0x44)
float var_114 = *(result + 0x48)
float var_10c = *(result + 0x4c)
float var_104 = *(result + 0x50)
float var_fc = *(result + 0x54)
float var_f4 = *(result + 0x58)
float var_ec = *(result + 0x5c)
float zmm0
float zmm1
float zmm2
float zmm3

if (r9 != 0)
    float var_e0_1 = r9[8]
    float var_e8_1 = r9[9]
    float var_b8_1 = r9[0xa]
    float var_d8_1 = r9[0xb]
    float var_c0_1 = r9[0xc]
    float var_d0_1 = r9[0xd]
    float var_b0_1 = r9[0xe]
    float var_c8_1 = r9[0xf]
    float var_e4_1 = r9[0x10]
    float var_dc_1 = r9[0x11]
    float var_d4_1 = r9[0x12]
    float var_cc_1 = r9[0x13]
    float var_c4_1 = r9[0x14]
    float var_bc_1 = r9[0x15]
    float var_b4_1 = r9[0x16]
    float var_ac_1 = r9[0x17]
    
    if (r10 != 0)
        result = ((r10 - 1) u>> 2) + 1
        void* i
        
        do
            zmm3 = rdx[1]
            zmm0 = *rdx
            zmm1 = rdx[2]
            float arg_10 = zmm0
            float arg_8 = rdx[3]
            rdx = &rdx[4]
            float arg_18 = zmm1
            float arg_20 = zmm3
            zmm2 = zmm3 f* zmm9.d + zmm0 f* zmm8.d + zmm1 f* zmm10.d + arg_8 f* zmm11.d
            zmm1 = arg_18 f* zmm6.d
            zmm3 = zmm3 f* zmm13.d + arg_10 f* zmm12.d + arg_18 f* zmm14.d + arg_8 f* zmm15.d
            zmm0 = arg_10 * zmm4
            
            if (r11 == 0)
                *r8 = zmm2
                *(r8 + 4) = zmm3
                *(r8 + 8) = arg_20 * zmm5 + zmm0 + zmm1 + arg_8 f* zmm7.d
                *(r8 + 0xc) =
                    arg_20 * var_110 + arg_10 * var_100 + arg_18 * var_f0 + arg_8 * var_108
                *(r8 + 0x10) =
                    arg_20 * var_118 + arg_10 * var_f8 + arg_18 * var_114 + arg_8 * var_10c
                zmm3 = arg_20 * var_fc + arg_10 * var_104 + arg_18 * var_f4 + arg_8 * var_ec
            else
                *r8 = zmm2 f+ *r8
                *(r8 + 4) = zmm3 f+ *(r8 + 4)
                *(r8 + 8) = arg_20 * zmm5 + zmm0 + zmm1 + arg_8 f* zmm7.d f+ *(r8 + 8)
                *(r8 + 0xc) = arg_20 * var_110 + arg_10 * var_100 + arg_18 * var_f0
                    + arg_8 * var_108 f+ *(r8 + 0xc)
                *(r8 + 0x10) = arg_20 * var_118 + arg_10 * var_f8 + arg_18 * var_114
                    + arg_8 * var_10c f+ *(r8 + 0x10)
                zmm3 = arg_20 * var_fc + arg_10 * var_104 + arg_18 * var_f4
                    + arg_8 * var_ec f+ *(r8 + 0x14)
            
            zmm8.d = zmm8.d f+ *r9
            zmm9.d = zmm9.d f+ r9[1]
            zmm10.d = zmm10.d f+ r9[2]
            zmm11.d = zmm11.d f+ r9[3]
            zmm12.d = zmm12.d f+ r9[4]
            zmm13.d = zmm13.d f+ r9[5]
            zmm14.d = zmm14.d f+ r9[6]
            zmm15.d = zmm15.d f+ r9[7]
            zmm4 = zmm4 + var_e0_1
            zmm5 = zmm5 + var_e8_1
            zmm6.d = zmm6.d f+ var_b8_1
            zmm7.d = zmm7.d f+ var_d8_1
            var_100 = var_100 + var_c0_1
            *(r8 + 0x14) = zmm3
            r8 += 0x18
            i = result
            result -= 1
            var_110 = var_110 + var_d0_1
            var_f0 = var_f0 + var_b0_1
            var_108 = var_108 + var_c8_1
            var_f8 = var_f8 + var_e4_1
            var_118 = var_118 + var_dc_1
            var_114 = var_114 + var_d4_1
            var_10c = var_10c + var_cc_1
            var_104 = var_104 + var_c4_1
            var_fc = var_fc + var_bc_1
            var_f4 = var_f4 + var_b4_1
            var_ec = var_ec + var_ac_1
        while (i != 1)
else if (r10 != 0)
    int64_t i_2 = ((r10 - 1) u>> 2) + 1
    int64_t i_1
    
    do
        zmm5 = *rdx
        zmm6 = rdx[2]
        zmm4 = rdx[1]
        zmm7 = rdx[3]
        rdx = &rdx[4]
        zmm2 = zmm4 f* zmm9.d + zmm5 f* zmm8.d + zmm6.d f* zmm10.d + zmm7.d f* zmm11.d
        zmm1 = zmm6.d f* *(result + 0x28)
        zmm3 = zmm4 f* zmm13.d + zmm5 f* zmm12.d + zmm6.d f* zmm14.d + zmm7.d f* zmm15.d
        zmm0 = zmm5 f* *(result + 0x20)
        
        if (r11 == 0)
            *r8 = zmm2
            *(r8 + 4) = zmm3
            zmm3 = zmm4 f* *(result + 0x34)
            zmm2 = zmm4 f* *(result + 0x24) + zmm0 + zmm1
            zmm1 = zmm6.d f* *(result + 0x38)
            *(r8 + 8) = zmm2 + zmm7.d f* *(result + 0x2c)
            zmm2 = zmm4 f* *(result + 0x44)
            zmm4 = zmm4 f* *(result + 0x54)
            zmm3 = zmm3 + zmm5 f* *(result + 0x30) + zmm1
            zmm1 = zmm6.d f* *(result + 0x48)
            zmm6.d = zmm6.d f* *(result + 0x58)
            *(r8 + 0xc) = zmm3 + zmm7.d f* *(result + 0x3c)
            zmm0 = zmm7.d f* *(result + 0x4c)
            zmm7.d = zmm7.d f* *(result + 0x5c)
            zmm4 = zmm4 + zmm5 f* *(result + 0x50) f+ zmm6.d f+ zmm7.d
            *(r8 + 0x10) = zmm2 + zmm5 f* *(result + 0x40) + zmm1 + zmm0
        else
            *r8 = zmm2 f+ *r8
            zmm2 = zmm4 f* *(result + 0x24) + zmm0
            *(r8 + 4) = zmm3 f+ *(r8 + 4)
            zmm3 = zmm4 f* *(result + 0x34)
            zmm2 = zmm2 + zmm1
            zmm1 = zmm6.d f* *(result + 0x38)
            zmm0 = zmm5 f* *(result + 0x30)
            *(r8 + 8) = zmm2 + zmm7.d f* *(result + 0x2c) f+ *(r8 + 8)
            zmm2 = zmm4 f* *(result + 0x44)
            zmm4 = zmm4 f* *(result + 0x54)
            *(r8 + 0xc) = zmm3 + zmm0 + zmm1 + zmm7.d f* *(result + 0x3c) f+ *(r8 + 0xc)
            zmm2 = zmm2 + zmm5 f* *(result + 0x40) + zmm6.d f* *(result + 0x48)
            zmm0 = zmm7.d f* *(result + 0x4c)
            zmm6.d = zmm6.d f* *(result + 0x58)
            zmm7.d = zmm7.d f* *(result + 0x5c)
            zmm4 = zmm4 + zmm5 f* *(result + 0x50) f+ zmm6.d f+ zmm7.d
            *(r8 + 0x10) = zmm2 + zmm0 f+ *(r8 + 0x10)
            zmm4 = zmm4 f+ *(r8 + 0x14)
        
        *(r8 + 0x14) = zmm4
        r8 += 0x18
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
return result
