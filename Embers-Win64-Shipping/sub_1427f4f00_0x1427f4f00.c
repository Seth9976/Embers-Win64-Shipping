// 函数: sub_1427f4f00
// 地址: 0x1427f4f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
float* r11 = arg2
int128_t zmm7
zmm7.d = arg2[3].d f- *arg2
uint64_t rdi = zx.q(arg3)
uint64_t r8 = 0
int128_t zmm8
zmm8.d = arg2[4].d f- arg2[1]
int128_t zmm9
zmm9.d = arg2[5].d f- arg2[2]
float zmm1 = 1f f/ float.s(rdi)
zmm7.d = zmm7.d f* zmm1
zmm8.d = zmm8.d f* zmm1
zmm9.d = zmm9.d f* zmm1

if (rdi.d != 0)
    int32_t var_50
    int32_t zmm2 = var_50
    float var_54
    float zmm3 = var_54
    float var_58
    float zmm4 = var_58
    int32_t zmm0 = var_50
    float zmm5 = var_54
    int128_t zmm6 = var_58
    
    do
        int32_t j = 0
        
        do
            if (arg4 == 0)
                zmm4 = *r11
                zmm6 = r11[3]
                zmm0 = float.s(zx.q(i + 1)) f* zmm9.d f+ r11[2]
                zmm2 = float.s(zx.q(i)) f* zmm9.d f+ r11[2]
                zmm5 = float.s(zx.q(j + 1)) f* zmm8.d + r11[1]
                zmm3 = float.s(zx.q(j)) f* zmm8.d + r11[1]
            else if (arg4 == 1)
                zmm3 = r11[1]
                zmm5 = r11[4]
                zmm6.d = float.s(zx.q(j + 1))
                zmm2 = float.s(zx.q(i)) f* zmm9.d f+ r11[2]
                zmm6.d = zmm6.d f* zmm7.d
                zmm4 = float.s(zx.q(j)) f* zmm7.d + *r11
                zmm6.d = zmm6.d f+ *r11
                zmm0 = float.s(zx.q(i + 1)) f* zmm9.d f+ r11[2]
            else if (arg4 == 2)
                zmm2 = r11[2]
                zmm0 = r11[5]
                zmm6.d = float.s(zx.q(j + 1))
                zmm6.d = zmm6.d f* zmm7.d
                zmm6.d = zmm6.d f+ *r11
                zmm4 = float.s(zx.q(j)) f* zmm7.d + *r11
                zmm5 = float.s(zx.q(i + 1)) f* zmm8.d + r11[1]
                zmm3 = float.s(zx.q(i)) f* zmm8.d + r11[1]
            
            uint64_t rcx_6 = r8 * 3
            j += 1
            *(arg1 + (rcx_6 << 3)) = zmm4
            r8 = zx.q(r8.d + 1)
            *(arg1 + (rcx_6 << 3) + 4) = zmm3
            *(arg1 + (rcx_6 << 3) + 8) = zmm2
            *(arg1 + (rcx_6 << 3) + 0xc) = zmm6.d
            *(arg1 + (rcx_6 << 3) + 0x10) = zmm5
            *(arg1 + (rcx_6 << 3) + 0x14) = zmm0
        while (j u< rdi.d)
        
        i += 1
    while (i u< rdi.d)

return zx.q(r8.d)
