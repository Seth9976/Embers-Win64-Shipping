// 函数: sub_141e63220
// 地址: 0x141e63220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = arg1[0x1c].d
int512_t result

if (not(zmm1.d f> 100f))
    result.o = zx.o(0)
    float zmm2 = arg1[0x1a].d f* arg1[0x19].d f* arg1[2].d f* *(arg1 + 0xcc)
    
    if (zmm2 <= 0f)
        if (((arg1[0x20].d u>> 0xf).b & 1) != 0)
            zmm1.d = zmm1.d f* zmm2
            zmm1.d = zmm1.d f- 101f
            result.o = zmm1
            return result
        
        zmm1.d = zmm1.d f- 201f
    else
        void* rax_1 = *arg1
        
        if (rax_1 == 0 || (*(rax_1 + 0x30) & 0x20) == 0)
            zmm1.d = zmm1.d f* zmm2
            result.o = zmm1
            return result

result.o = zmm1
return result
