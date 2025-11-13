// 函数: sub_141e23c00
// 地址: 0x141e23c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg2 + 4)
int64_t result = sub_140b5b8a0(*arg2, 0)
int512_t zmm0

if ((rbx == 0 & result.b) != 0)
label_141e23cac:
    zmm0.o = *arg3
else
    int32_t rbx_1 = *(arg2 + 0xc)
    result = sub_140b5b8a0(arg2[1].d, 0)
    int32_t rcx_1
    rcx_1.b = rbx_1 == 0
    
    if ((rcx_1.b & result.b) != 0)
    label_141e23cac_1:
        zmm0.o = *arg3
    else
        int32_t rcx_3 = *(arg1 + 0x180) - 1
        
        if (rcx_3 s<= 0)
        label_141e23cac_2:
            zmm0.o = *arg3
        else
            result = *(arg1 + 0x178)
            int64_t rdx = 0
            int32_t zmm2 = *arg3
            int64_t* rcx_4 = result + 0xc
            
            while (true)
                int128_t zmm1 = rcx_4[1].d
                
                if (not(zmm1.d f< zmm2))
                    result = *arg2
                    
                    if (*(rcx_4 - 0xc) == result)
                        result = arg2[1]
                        
                        if (*rcx_4 == result)
                            zmm1.d = zmm1.d f- *(rcx_4 - 4)
                            zmm1.d = zmm1.d f* arg2[2].d
                            zmm1.d = zmm1.d f+ *(rcx_4 - 4)
                            
                            if (zmm1.d f>= zmm2)
                                zmm0.o = zmm1
                                break
                
                rdx += 1
                rcx_4 += 0xc
                
                if (rdx s>= sx.q(rcx_3))
                    goto label_141e23cac_2
return result
