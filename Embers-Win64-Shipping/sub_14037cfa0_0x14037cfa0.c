// 函数: sub_14037cfa0
// 地址: 0x14037cfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float* r9 = arg1[3]
int32_t* r8 = *arg1
void* rdx = arg1[1]
int64_t r10 = *(arg1 + 0x24)
int64_t r11 = sx.q(*(arg1 + 0x3c))
int32_t* result = arg1[2]
float zmm5 = *result
int128_t zmm6 = result[1]
int128_t zmm7 = result[2]
int128_t zmm8 = result[3]
int128_t zmm9 = result[4]
int128_t zmm10 = result[5]
int128_t zmm11 = result[6]
int128_t zmm12 = result[7]
int128_t zmm13 = result[8]
int128_t zmm14 = result[9]
int128_t zmm15 = result[0xa]
float zmm4 = result[0xb]
float zmm0
float zmm1
float zmm2
float zmm3

if (r9 != 0)
    float arg_10 = r9[0xb]
    
    if (r10 != 0)
        result = ((r10 - 1) u>> 1) + 1
        int32_t* i
        
        do
            zmm3 = r8[1]
            zmm0 = *r8
            r8 = &r8[2]
            float arg_8 = zmm0
            zmm1 = zmm3 f* zmm6.d + zmm0 * zmm5
            zmm2 = zmm3 f* zmm8.d + arg_8 f* zmm7.d
            zmm0 = arg_8 f* zmm9.d
            
            if (r11 == 0)
                *rdx = zmm1
                *(rdx + 4) = zmm2
                *(rdx + 8) = zmm3 f* zmm10.d + zmm0
                zmm1 = zmm3
                *(rdx + 0xc) = zmm3 f* zmm12.d + arg_8 f* zmm11.d
                zmm3 = zmm3 * zmm4 + arg_8 f* zmm15.d
                *(rdx + 0x10) = zmm1 f* zmm14.d + arg_8 f* zmm13.d
            else
                *rdx = zmm1 f+ *rdx
                *(rdx + 4) = zmm2 f+ *(rdx + 4)
                *(rdx + 8) = zmm3 f* zmm10.d + zmm0 f+ *(rdx + 8)
                *(rdx + 0xc) = zmm3 f* zmm12.d + arg_8 f* zmm11.d f+ *(rdx + 0xc)
                *(rdx + 0x10) = zmm3 f* zmm14.d + arg_8 f* zmm13.d f+ *(rdx + 0x10)
                zmm3 = zmm3 * zmm4 + arg_8 f* zmm15.d f+ *(rdx + 0x14)
            
            zmm5 = zmm5 + *r9
            zmm6.d = zmm6.d f+ r9[1]
            zmm7.d = zmm7.d f+ r9[2]
            zmm8.d = zmm8.d f+ r9[3]
            zmm9.d = zmm9.d f+ r9[4]
            zmm10.d = zmm10.d f+ r9[5]
            zmm11.d = zmm11.d f+ r9[6]
            zmm12.d = zmm12.d f+ r9[7]
            zmm13.d = zmm13.d f+ r9[8]
            zmm14.d = zmm14.d f+ r9[9]
            zmm15.d = zmm15.d f+ r9[0xa]
            zmm4 = zmm4 + arg_10
            *(rdx + 0x14) = zmm3
            rdx += 0x18
            i = result
            result -= 1
        while (i != 1)
else if (r10 != 0)
    int64_t i_2 = ((r10 - 1) u>> 1) + 1
    int64_t i_1
    
    do
        zmm4 = *r8
        zmm3 = r8[1]
        r8 = &r8[2]
        zmm1 = zmm3 f* zmm6.d + zmm4 * zmm5
        zmm2 = zmm3 f* zmm8.d + zmm4 f* zmm7.d
        zmm0 = zmm4 f* zmm9.d
        
        if (r11 == 0)
            *rdx = zmm1
            *(rdx + 4) = zmm2
            zmm2 = zmm3 f* zmm12.d
            *(rdx + 8) = zmm3 f* zmm10.d + zmm0
            zmm1 = zmm3
            zmm3 = zmm3 f* result[0xb]
            *(rdx + 0xc) = zmm2 + zmm4 f* zmm11.d
            zmm3 = zmm3 + zmm4 f* zmm15.d
            *(rdx + 0x10) = zmm1 f* zmm14.d + zmm4 f* zmm13.d
        else
            *rdx = zmm1 f+ *rdx
            *(rdx + 4) = zmm2 f+ *(rdx + 4)
            zmm2 = zmm3 f* zmm12.d + zmm4 f* zmm11.d
            *(rdx + 8) = zmm3 f* zmm10.d + zmm0 f+ *(rdx + 8)
            zmm1 = zmm3
            zmm3 = zmm3 f* result[0xb]
            *(rdx + 0xc) = zmm2 f+ *(rdx + 0xc)
            *(rdx + 0x10) = zmm1 f* zmm14.d + zmm4 f* zmm13.d f+ *(rdx + 0x10)
            zmm3 = zmm3 + zmm4 f* zmm15.d f+ *(rdx + 0x14)
        
        *(rdx + 0x14) = zmm3
        rdx += 0x18
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
return result
