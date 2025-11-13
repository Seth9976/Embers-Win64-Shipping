// 函数: sub_140ebe6a0
// 地址: 0x140ebe6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = arg3[9]
float zmm5[0x4] = *(arg4 + 0x1c)
float zmm6[0x4] = arg3[8]
float zmm7[0x4] = *(arg4 + 0x18)
zmm6[0] = zmm6[0] * zmm3[0]
float zmm9[0x4] = arg3[7]
float zmm10[0x4] = arg3[0xa]
float zmm1 = zmm9[0] * zmm10[0] - zmm6[0]
zmm7[0] = zmm7[0] f- arg3[0xb]
zmm7[0] = zmm7[0] f- arg3[0xb]
float zmm4 = 1f / zmm1
zmm10[0] = zmm10[0] * zmm4
zmm9[0] = zmm9[0] * zmm4
zmm10[0] = zmm10[0] * zmm7[0]
zmm5[0] = zmm5[0] f- arg3[0xc]
zmm5[0] = zmm5[0] f- arg3[0xc]
zmm6[0] = zmm6[0] * zmm4
zmm3[0] = zmm3[0] * zmm4
zmm4 = *arg3
zmm9[0] = zmm9[0] * zmm5[0]
zmm1 = zmm4 * 0.300000012f
zmm3[0] = zmm3[0] * zmm5[0]
zmm6[0] = zmm6[0] * zmm7[0]
zmm10[0] = zmm10[0] - zmm3[0]
zmm3 = arg3[1]
zmm9[0] = zmm9[0] - zmm6[0]
zmm10[0] = zmm10[0] / zmm4
zmm9[0] = zmm9[0] / zmm3[0]
zmm9[0] = zmm9[0] f* data_14399f65c
zmm9[0] = zmm9[0] / zmm10[0]
zmm10[0] = zmm10[0] f* data_14399f658
zmm10[0] = zmm10[0] + zmm9[0]
float zmm0[0x4] = 0x40a00000

if (zmm1 >= 5f)
    zmm1 = _mm_min_ss(zmm1, 0x43160000)
else
    zmm1 = 5f

zmm3[0] = zmm3[0] * 0.300000012f

if (not(zmm3[0] < 5f))
    zmm0 = _mm_min_ss(zmm3[0], 0x43160000)

if (not(zmm10[0] < zmm1) && not(zmm10[0] > zmm4 - zmm1) && not(zmm9[0] < zmm0[0]))
    zmm3[0] = zmm3[0] - zmm0[0]

if (zmm10[0] < zmm1 || zmm10[0] > zmm4 - zmm1 || zmm9[0] < zmm0[0] || zmm9[0] > zmm3[0])
    bool cond:0_1 = zmm9[0] <= 1f
    *arg1 = *arg2
    void* rax_2 = arg2[1]
    arg1[1] = rax_2
    
    if (cond:0_1)
        if (zmm10[0] <= 1f)
            if (rax_2 != 0)
                *(rax_2 + 0xc) += 1
            
            arg1[2].d = 1
        else
            if (rax_2 != 0)
                *(rax_2 + 0xc) += 1
            
            arg1[2].d = 2
    else if (zmm10[0] <= 1f)
        if (rax_2 != 0)
            *(rax_2 + 0xc) += 1
        
        arg1[2].d = 0
    else
        if (rax_2 != 0)
            *(rax_2 + 0xc) += 1
        
        arg1[2].d = 3
else
    __builtin_memset(arg1, 0, 0x14)

return arg1
