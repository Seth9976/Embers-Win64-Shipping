// 函数: sub_141e3b430
// 地址: 0x141e3b430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4] = arg3
float zmm6[0x4]

if (arg2 == 0)
    zmm6 = zx.o(0)
else
    zmm6 = 0x3f800000

if (*(arg1 + 9) == 0)
    int64_t rdx = arg1[1].q
    
    if (rdx != *(arg1 + 0x18))
        sub_141defe60(arg1 + 0x18, rdx)
    
    char rdx_1 = *(arg1 + 8)
    
    if (rdx_1 != *(arg1 + 0x3c))
        sub_141defc80(arg1 + 0x18, rdx_1)
    
    sub_141defe90(arg1 + 0x18, zmm6[0])
    sub_141defc90(arg1 + 0x18, zx.o(0)[0])
    zmm7 = sub_141deef50(arg1 + 0x18)
    *(arg1 + 9) = 1
else if (not(zmm6[0] f== *(arg1 + 0x38)))
    sub_141defe90(arg1 + 0x18, zmm6[0])
    float zmm1[0x4]
    
    if (arg2 == 0)
        zmm1 = *(arg1 + 4)
    else
        zmm1 = *arg1
    
    sub_141defc90(arg1 + 0x18, zmm1[0])

sub_141df01a0(arg1 + 0x18, zmm7)
int512_t result
result.o = arg1[3].d
return result
