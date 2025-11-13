// 函数: sub_141ebdb50
// 地址: 0x141ebdb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = arg5
uint32_t (* rbx)[0x4] = arg4
uint32_t zmm6[0x4] = arg1
int32_t rcx = *rsi

if (rcx == 0)
    arg1[0] = arg1[0] f+ rsi[1]
    arg5.d = 0
    arg5:4.d = arg1[0]
    return sub_141ebded0(zmm6, arg2, arg3, arg4, &arg5, arg6)

int32_t var_88

if (rcx == 2)
    arg1[0] = arg1[0] f+ rsi[1]
    var_88 = 2
    uint32_t var_84_2 = arg1[0]
    uint32_t var_80_3 = rsi[2][0]
    return sub_141ebded0(zmm6, arg2, arg3, arg4, &var_88, arg6)

float zmm1

if (rcx == 3)
    arg1[0] = arg1[0] f+ rsi[1]
    zmm1 = zmm6[0] f+ rsi[2]
    var_88 = 3
    uint32_t var_84_1 = arg1[0]
    zmm6[0] = zmm6[0] f+ rsi[3]
    float var_80_2 = zmm1
    uint32_t var_7c_1 = zmm6[0]
    return sub_141ebded0(zmm6, arg2, arg3, arg4, &var_88, arg6)

if (rcx != 4)
    return 0

uint32_t zmm7[0x4] = *(arg3 + 0x54)
zmm7[0] = zmm7[0] f- *(arg3 + 0x48)
uint32_t zmm8[0x4] = *(arg3 + 0x4c)
zmm8[0] = zmm8[0] f- *(arg3 + 0x40)
int128_t zmm9
zmm9.d = (*(arg3 + 0x50)).d f- *(arg3 + 0x44)
zmm1 = zmm7[0] f* zmm7[0]
zmm8[0] = zmm8[0] f* zmm8[0]
int32_t temp0_2 = _mm_sqrt_ss(0, zmm9.d f* zmm9.d f+ zmm8[0] + zmm1)

if (not(temp0_2 f< 9.99999968e-21f))
    arg1 = 0x3f800000
    arg1[0] = 1f f/ temp0_2
    zmm8[0] = zmm8[0] f* arg1[0]
    zmm9.d = zmm9.d f* arg1[0]
    zmm7[0] = zmm7[0] f* arg1[0]

arg1 = *arg4
zmm8[0] = zmm8[0] f* zmm6[0]
uint32_t var_78[0x4] = arg1
zmm7[0] = zmm7[0] f* zmm6[0]
zmm8[0] = zmm8[0] f+ *(arg4 + 0x10)
zmm9.d = zmm9.d f* zmm6[0]
uint32_t var_68_1 = zmm8[0]
zmm1 = zmm9.d f+ *(arg4 + 0x14)
zmm7[0] = zmm7[0] f+ *(arg4 + 0x18)
float var_64_1 = zmm1
uint32_t var_60_1 = zmm7[0]
char result
uint32_t zmm6_1[0x4]
int32_t zmm7_1
result, zmm6_1, zmm7_1 = sub_141ebded0(zmm6, arg2, arg3, &var_78, rsi, arg6)

if (result == 0)
    uint32_t zmm1_1 = (*rbx)[5]
    var_78 = *rbx
    uint32_t zmm0[0x4] = rbx[1][0]
    zmm0[0] = zmm0[0] f- zmm8[0]
    uint32_t var_64_2 = zmm1_1 f- zmm9.d
    uint32_t var_68_2 = zmm0[0]
    zmm0 = (*rbx)[6]
    zmm0[0] = zmm0[0] f- zmm7_1
    uint32_t var_60_2 = zmm0[0]
    uint32_t zmm6_2[0x4]
    result, zmm6_2 = sub_141ebded0(zmm6_1, arg2, arg3, &var_78, rsi, arg6)
    
    if (result == 0)
        int64_t rdi_1 = 2
        
        while (true)
            var_88.q = 0
            uint32_t zmm1_2 = (*rbx)[5]
            var_78 = *rbx
            int32_t var_80_1 = 0
            uint32_t zmm0_1[0x4] = rbx[1][0]
            (&var_88)[rdi_1] = zmm6_2[0]
            zmm9 = var_80_1
            zmm0_1[0] = zmm0_1[0] f- var_88
            int32_t var_84
            zmm8 = var_84
            zmm1_2 = zmm1_2 f- zmm8[0]
            uint32_t var_68_3 = zmm0_1[0]
            zmm0_1 = (*rbx)[6]
            zmm0_1[0] = zmm0_1[0] f- zmm9.d
            uint32_t var_64_3 = zmm1_2
            uint32_t var_60_3 = zmm0_1[0]
            uint32_t zmm6_3[0x4]
            float zmm7_3
            result, zmm6_3, zmm7_3 = sub_141ebded0(zmm6_2, arg2, arg3, &var_78, rsi, arg6)
            
            if (result != 0)
                break
            
            uint32_t zmm0_2[0x4] = *rbx
            zmm7_3 = zmm7_3 f+ rbx[1][0]
            zmm8[0] = zmm8[0] f+ (*rbx)[5]
            zmm9.d = zmm9.d f+ (*rbx)[6]
            var_78 = zmm0_2
            float var_68_4 = zmm7_3
            uint32_t var_64_4 = zmm8[0]
            int32_t var_60_4 = zmm9.d
            result, zmm6_2 = sub_141ebded0(zmm6_3, arg2, arg3, &var_78, rsi, arg6)
            
            if (result != 0)
                break
            
            int64_t temp2_1 = rdi_1
            rdi_1 -= 1
            
            if (temp2_1 - 1 s< 0)
                return result

return 1
