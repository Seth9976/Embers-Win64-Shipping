// 函数: sub_142714420
// 地址: 0x142714420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx_3 = *(arg1 + 0x22)

if ((rdx_3 & 2) != 0)
    return 

float zmm0

if (arg3 != 0 && arg3 != 1 && arg3 != 2 && arg3 == 3 && arg4 == arg5)
    zmm0 = 1f
    goto label_14271445d

if ((rdx_3 & 4) == 0)
    zmm0 = (zx.o(0)).d
label_14271445d:
    uint32_t rdx = zx.d(*(arg1 + 0x21))
    
    if (rdx == 0)
        *(arg1 + 0x18) = zmm0 f+ *(arg1 + 0x18)
    else if (rdx == 1)
        if (*(arg1 + 0x1c) == 0)
            *(arg1 + 0x18) = zmm0
        else if (not(zmm0 f>= *(arg1 + 0x18)))
            *(arg1 + 0x1c) += 1
            *(arg1 + 0x1e) += 1
            *(arg1 + 0x18) = zmm0
            return 
    else if (rdx == 2)
        if (*(arg1 + 0x1c) == 0)
            *(arg1 + 0x18) = zmm0
        else if (not(zmm0 f<= *(arg1 + 0x18)))
            *(arg1 + 0x1c) += 1
            *(arg1 + 0x1e) += 1
            *(arg1 + 0x18) = zmm0
            return 
    else if (rdx == 3)
        zmm0 = zmm0 f* *(arg1 + 0x18)
        *(arg1 + 0x1c) += 1
        *(arg1 + 0x1e) += 1
        *(arg1 + 0x18) = zmm0
        return 
    
    *(arg1 + 0x1c) += 1

*(arg1 + 0x1e) += 1
