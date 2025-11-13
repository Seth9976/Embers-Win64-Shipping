// 函数: sub_141a0e480
// 地址: 0x141a0e480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8_5 = zx.d(*(arg1 + 0xc8))
*arg2 = 0x3f800000
arg2[1] = 0x3f800000
arg2[2] = 0x3f800000
float zmm1
float zmm2

if (r8_5 == 0)
    int32_t rax_17 = *(arg1 + 0xf0) * 0xbb38435 + 0x3619636b
    *(arg1 + 0xf0) = rax_17
    zmm2 = *(arg1 + 0xcc)
    zmm1 = *(arg1 + 0xd0)
    
    if (not(zmm2 > zmm1))
        zmm1 = (zmm1 - zmm2) * ((rax_17 u>> 9 | 0x3f800000) - 1f) + zmm2
        *arg2 = zmm1
        arg2[1] = zmm1
        arg2[2] = zmm1
        return arg2
    
    *arg2 = 0
    arg2[1] = 0
    arg2[2] = 0
else
    int32_t rax_4
    float zmm3
    
    if (r8_5 == 1)
        zmm3 = 1f
        int32_t r8_4 = *(arg1 + 0xf0) * 0xbb38435 + 0x3619636b
        *(arg1 + 0xf0) = r8_4
        zmm2 = *(arg1 + 0xcc)
        zmm1 = *(arg1 + 0xd0)
        
        if (zmm2 > zmm1)
            zmm1 = (zx.o(0)).d
        else
            zmm1 = (zmm1 - zmm2) * ((r8_4 u>> 9 | 0x3f800000) - 1f) + zmm2
        
        *arg2 = zmm1
        *(arg1 + 0xf0) = r8_4 * 0xbb38435 + 0x3619636b
        zmm2 = *(arg1 + 0xd4)
        zmm1 = *(arg1 + 0xd8)
        
        if (zmm2 > zmm1)
            zmm1 = (zx.o(0)).d
            rax_4 = (r8_4 * 0xbb38435 + 0x3619636b) * 0xbb38435
        else
            rax_4 = (r8_4 * 0xbb38435 + 0x3619636b) * 0xbb38435
            zmm1 =
                (zmm1 - zmm2) * (((r8_4 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000) - 1f) + zmm2
        
    label_141a0e529:
        arg2[1] = zmm1
        *(arg1 + 0xf0) = rax_4 + 0x3619636b
        zmm1 = *(arg1 + 0xe0)
        zmm2 = *(arg1 + 0xdc)
        
        if (zmm2 > zmm1)
            arg2[2] = 0
            return arg2
        
        arg2[2] = (zmm1 - zmm2) * (((rax_4 + 0x3619636b) u>> 9 | 0x3f800000) - zmm3) + zmm2
        return arg2
    
    if (r8_5 == 2)
        zmm3 = 1f
        int32_t r8_2 = *(arg1 + 0xf0) * 0xbb38435 + 0x3619636b
        *(arg1 + 0xf0) = r8_2
        zmm2 = *(arg1 + 0xcc)
        zmm1 = *(arg1 + 0xd0)
        
        if (zmm2 > zmm1)
            zmm1 = (zx.o(0)).d
        else
            zmm1 = (zmm1 - zmm2) * ((r8_2 u>> 9 | 0x3f800000) - 1f) + zmm2
        
        *arg2 = zmm1
        rax_4 = r8_2 * 0xbb38435
        goto label_141a0e529
return arg2
