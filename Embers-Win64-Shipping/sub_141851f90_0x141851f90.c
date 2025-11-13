// 函数: sub_141851f90
// 地址: 0x141851f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x80)
int32_t result = 0
bool z

if (0 == *(arg1 + 0x78))
    *(arg1 + 0x78) = 0
    z = true
else
    result = *(arg1 + 0x78)
    z = false

if (z && *(arg1 + 0x70) != 0xb)
    int32_t rcx_1 = 0xc
    *(arg1 + 0x70) = 0xc
    result = 0xc
    
    if (not(1f f<= *(arg1 + 8)))
        *(arg1 + 0x70) = 0
        rcx_1 = 0
        result = 0
    
    if (rcx_1 == 0xc)
        if (not(1f f<= *(arg1 + 0xc)))
            rcx_1 = 1
            *(arg1 + 0x70) = 1
            result = 1
        
        if (rcx_1 == 0xc)
            if (not(1f f<= *(arg1 + 0x10)))
                rcx_1 = 2
                *(arg1 + 0x70) = 2
                result = 2
            
            if (rcx_1 == 0xc && not(1f f<= *(arg1 + 0x14)))
                result = 3
                *(arg1 + 0x70) = 3
    
    float zmm1 = *(arg1 + 0x44) f/ *(arg1 + 0x68) f* *(arg1 + 0x14)
    *(arg1 + 0x74) = zmm1
    
    if (result == 0xc && not(1f f<= *(arg1 + 0x18)))
        *(arg1 + 0x70) = 4
        result = 4
    
    float zmm2 = *(arg1 + 0x48) f/ *(arg1 + 0x68) f* *(arg1 + 0x18) + zmm1
    *(arg1 + 0x74) = zmm2
    
    if (result == 0xc && not(1f f<= *(arg1 + 0x1c)))
        result = 5
        *(arg1 + 0x70) = 5
    
    zmm1 = *(arg1 + 0x4c) f/ *(arg1 + 0x68) f* *(arg1 + 0x1c) + zmm2
    *(arg1 + 0x74) = zmm1
    
    if (result == 0xc && not(1f f<= *(arg1 + 0x20)))
        result = 6
        *(arg1 + 0x70) = 6
    
    zmm2 = *(arg1 + 0x50) f/ *(arg1 + 0x68) f* *(arg1 + 0x20) + zmm1
    *(arg1 + 0x74) = zmm2
    
    if (result == 0xc && not(1f f<= *(arg1 + 0x24)))
        result = 7
        *(arg1 + 0x70) = 7
    
    int32_t result_1 = result
    zmm1 = *(arg1 + 0x54) f/ *(arg1 + 0x68) f* *(arg1 + 0x24) + zmm2
    *(arg1 + 0x74) = zmm1
    
    if (result == 0xc && not(1f f<= *(arg1 + 0x28)))
        result_1 = 8
        *(arg1 + 0x70) = 8
        result = 8
    
    if (result_1 == 0xc && not(1f f<= *(arg1 + 0x2c)))
        result = 9
        *(arg1 + 0x70) = 9
    
    if (result == 0xc)
        if (not(1f f<= *(arg1 + 0x30)))
            result = 0xa
            *(arg1 + 0x70) = 0xa
        
        if (result == 0xc && not(1f f<= *(arg1 + 0x34)))
            result = 0xb
            *(arg1 + 0x70) = 0xb
    
    zmm2 = (zx.o(0)).d
    
    if (not(zmm1 < 0f))
        zmm2 = _mm_min_ss(zmm1, 0x3f800000)
    
    *(arg1 + 0x74) = zmm2
    
    if (result == 3)
        result = *(arg1 + 0x70)
        
        if (*(arg1 + 0x6c) == 0)
            result = 4
        
        *(arg1 + 0x70) = result

if (arg1 == -0x80)
    return result

return LeaveCriticalSection(arg1 + 0x80)
