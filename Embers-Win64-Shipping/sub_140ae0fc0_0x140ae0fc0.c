// 函数: sub_140ae0fc0
// 地址: 0x140ae0fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *arg1 != 0
uint32_t zmm5[0x4] = *(arg1 + 0x1c)
uint32_t zmm4[0x4] = *(arg1 + 0x18)
uint32_t zmm2[0x4] = *(arg1 + 0x34)
uint32_t zmm3[0x4] = *(arg1 + 0x38)
uint32_t zmm6[0x4] = *(arg1 + 0x20)
zmm5[0] = zmm5[0] f* zmm5[0]
zmm6[0] = zmm6[0] f* zmm6[0]
uint32_t zmm7[0x4] = *(arg1 + 0x24)
uint32_t zmm8[0x4] = *(arg1 + 0x28)
uint32_t zmm9[0x4] = *(arg1 + 0x2c)
uint32_t zmm10[0x4] = zmm4
uint32_t zmm11[0x4] = *(arg1 + 0x30)
zmm10[0] = zmm10[0] f* zmm4[0]
zmm10[0] = zmm10[0] f+ zmm5[0]
zmm7[0] = zmm7[0] f* zmm4[0]
zmm11[0] = zmm11[0] f* zmm4[0]
zmm8[0] = zmm8[0] f* zmm5[0]
zmm10[0] = zmm10[0] f+ zmm6[0]
zmm11[0] = zmm11[0] f* zmm7[0]
zmm7[0] = zmm7[0] f+ zmm8[0]
zmm9[0] = zmm9[0] f* zmm6[0]
zmm2[0] = zmm2[0] f* zmm5[0]
zmm7[0] = zmm7[0] f+ zmm9[0]
zmm2[0] = zmm2[0] f* zmm8[0]
zmm11[0] = zmm11[0] f+ zmm2[0]
zmm3[0] = zmm3[0] f* zmm9[0]
zmm3[0] = zmm3[0] f* zmm6[0]
zmm11[0] = zmm11[0] f+ zmm2[0]
zmm8[0] = zmm8[0] f* zmm8[0]
zmm7[0] = zmm7[0] f* zmm7[0]
zmm11[0] = zmm11[0] f+ zmm3[0]
zmm11[0] = zmm11[0] f+ zmm3[0]
zmm7[0] = zmm7[0] f+ zmm8[0]
zmm9[0] = zmm9[0] f* zmm9[0]
zmm7[0] = zmm7[0] f* zmm7[0]
zmm7[0] = zmm7[0] f+ zmm9[0]
zmm4 = zmm7
zmm4[0] = zmm4[0] f* zmm10[0]
zmm4[0] = zmm4[0] f- zmm7[0]
zmm5 = zmm4
uint32_t zmm1[0x4]

if (cond:0 || zmm4[0] f< 9.99999975e-05f)
    zmm4 = 0x3f800000
    zmm3 = zx.o(0)
label_140ae113b:
    zmm1 = zmm11
    zmm2 = zx.o(0)
    zmm5 = zmm7
else
    zmm2 = zmm11
    zmm7[0] = zmm7[0] f* zmm11[0]
    zmm1 = zmm11
    zmm2[0] = zmm2[0] f* zmm7[0]
    zmm3 = zx.o(0)
    zmm1[0] = zmm1[0] f* zmm10[0]
    zmm2[0] = zmm2[0] f- zmm7[0]
    zmm11[0] = zmm11[0] f* zmm7[0]
    bool cond:2_1 = zmm2[0] f< 0f
    zmm1[0] = zmm1[0] f- zmm11[0]
    
    if (cond:2_1)
        goto label_140ae113b
    
    if (not(zmm2[0] f<= zmm4[0]))
        zmm1 = zmm11
        zmm2 = zmm4
        zmm1[0] = zmm1[0] f+ zmm7[0]
        zmm5 = zmm7

if (not(zmm1[0] f>= zmm3[0]))
    zmm1 = zx.o(0)
    zmm2 = zmm11 ^ data_142d3f780
    
    if (zmm11[0] f> -0f)
        zmm2 = zx.o(0)
    else
    label_140ae1162:
        
        if (zmm2[0] f<= zmm10[0])
            zmm4 = zmm10
        else
            zmm2 = zmm4
else if (not(zmm1[0] f<= zmm5[0]))
    zmm2 = zmm7
    zmm1 = zmm5
    zmm2[0] = zmm2[0] f- zmm11[0]
    
    if (zmm2[0] f>= zmm3[0])
        goto label_140ae1162
    
    zmm2 = zx.o(0)

if (_mm_and_ps(zmm2, 0x7fffffff)[0] f>= 9.99999975e-05f)
    zmm2[0] = zmm2[0] f/ zmm4[0]
else
    zmm2 = zx.o(0)

if (not(_mm_and_ps(zmm1, 0x7fffffff)[0] f< 9.99999975e-05f))
    zmm3 = zmm1
    zmm3[0] = zmm3[0] f/ zmm5[0]

int32_t* rax = *(arg1 + 8)
zmm2[0] = zmm2[0] f* *(arg1 + 0x18)
zmm2[0] = zmm2[0] f* *(arg1 + 0x1c)
zmm2[0] = zmm2[0] f+ *rax
zmm2[0] = zmm2[0] f* *(arg1 + 0x20)
zmm2[0] = zmm2[0] f+ rax[1]
zmm2[0] = zmm2[0] f+ rax[2]
*arg2 = (_mm_unpacklo_ps(zmm2, zmm2[0].q)).q
arg2[1].d = zmm2[0]
int32_t* rax_2 = *(arg1 + 0x10)
zmm3[0] = zmm3[0] f* *(arg1 + 0x24)
zmm3[0] = zmm3[0] f* *(arg1 + 0x28)
zmm3[0] = zmm3[0] f+ *rax_2
zmm3[0] = zmm3[0] f* *(arg1 + 0x2c)
zmm3[0] = zmm3[0] f+ rax_2[1]
zmm3[0] = zmm3[0] f+ rax_2[2]
*arg3 = (_mm_unpacklo_ps(zmm3, zmm3[0].q)).q
uint32_t result = zmm3[0]
arg3[1].d = result
return result
