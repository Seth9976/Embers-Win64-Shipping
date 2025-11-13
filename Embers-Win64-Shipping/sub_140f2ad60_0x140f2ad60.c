// 函数: sub_140f2ad60
// 地址: 0x140f2ad60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1 = *arg3
float zmm2 = *arg4

if (zmm1 > zmm2 || arg4[1] f< arg3[1])
    return 

float zmm5 = *arg2
float zmm3 = zmm1 * 0.5f

if (not(zmm5 - zmm3 >= 0f))
    *arg2 = zmm3
    zmm5 = zmm3
    zmm1 = *arg3
    zmm2 = *arg4

zmm1 = zmm1 * 0.5f

if (not(zmm1 + zmm5 <= zmm2))
    *arg2 = zmm2 - zmm1

zmm1 = arg3[1]
zmm3 = arg2[1]
zmm2 = zmm1 * 0.5f

if (not(zmm3 - zmm2 >= 0f))
    arg2[1] = zmm2
    zmm3 = zmm2
    zmm1 = arg3[1]

zmm2 = arg4[1]
zmm1 = zmm1 * 0.5f

if (not(zmm1 + zmm3 <= zmm2))
    arg2[1] = zmm2 - zmm1
