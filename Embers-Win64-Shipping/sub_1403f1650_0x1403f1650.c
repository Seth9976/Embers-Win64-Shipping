// 函数: sub_1403f1650
// 地址: 0x1403f1650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = sx.q(arg7)
int64_t r11 = arg2
void* rbx = arg1

if (i_1 s<= 0)
    return 

int64_t r10_1 = sx.q(arg6)
int32_t* r9 = arg5
int32_t j_2 = arg8 + r10_1.d
void* rdx = arg3 + 8
int128_t zmm6
int128_t var_38_1 = zmm6
int128_t zmm7
int128_t var_48_1 = zmm7
void* r12_1 = arg4 - r9
int64_t i

do
    float zmm2 = *r9
    float zmm3 = *(rdx - 8)
    float* r8_1 = r11 - (sx.q(*(r12_1 + r9)) << 2)
    float zmm4 = *(rdx - 4)
    float zmm5 = *rdx
    zmm6 = *(rdx + 4)
    zmm7 = *(rdx + 8)
    
    if (j_2 s> 0)
        void* rcx = rbx
        uint64_t j_1 = zx.q(j_2)
        uint64_t j
        
        do
            float zmm1 = *(r11 - rbx + rcx)
            rcx += 4
            *(rcx - 4) = zmm1
            r8_1 = &r8_1[1]
            zmm1 = zmm1 - zmm3 * r8_1[1]
            *(rcx - 4) = zmm1
            zmm1 = zmm1 - zmm4 * *r8_1
            *(rcx - 4) = zmm1
            zmm1 = zmm1 - zmm5 * r8_1[-1]
            *(rcx - 4) = zmm1
            zmm1 = zmm1 - zmm6.d * r8_1[-2]
            *(rcx - 4) = zmm1
            *(rcx - 4) = (zmm1 - zmm7.d * r8_1[-3]) * zmm2
            j = j_1
            j_1 -= 1
        while (j != 1)
    
    rbx += sx.q(j_2) << 2
    r11 += r10_1 << 2
    r9 = &r9[1]
    rdx += 0x14
    i = i_1
    i_1 -= 1
while (i != 1)
