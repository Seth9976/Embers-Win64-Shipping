// 函数: sub_1405ed270
// 地址: 0x1405ed270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *arg1

if (rax == 2)
label_1405ed2d2:
    
    if (rax != *arg2 || (rax != 2 && *(arg2 + 4) f!= *(arg1 + 4)))
        return 0
    
    rax = arg1[8]
    
    if (rax != arg2[8])
        return 0
    
    if (rax != 2 && *(arg2 + 0xc) f!= *(arg1 + 0xc))
        return 0
else
    char r8_1 = arg1[8]
    
    if (r8_1 == 2)
        goto label_1405ed2d2
    
    int32_t zmm0 = *(arg1 + 4)
    int32_t zmm1 = *(arg1 + 0xc)
    
    if (not(zmm0 f> zmm1) && (zmm0 f!= zmm1 || (rax != 0 && r8_1 != 0)))
        goto label_1405ed2d2
    
    char r8_2 = *arg2
    
    if (r8_2 == 2)
        goto label_1405ed2d2
    
    char r9_1 = arg2[8]
    
    if (r9_1 == 2)
        goto label_1405ed2d2
    
    zmm0 = *(arg2 + 4)
    zmm1 = *(arg2 + 0xc)
    
    if (not(zmm0 f> zmm1))
        if (zmm0 f!= zmm1)
            goto label_1405ed2d2
        
        if (r8_2 != 0 && r9_1 != 0)
            goto label_1405ed2d2

return 1
