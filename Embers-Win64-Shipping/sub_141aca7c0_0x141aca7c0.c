// 函数: sub_141aca7c0
// 地址: 0x141aca7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0xd0)

if (i_1 != 0)
    int64_t* rbx_1 = *(arg1 + 0xc8) + 0x30
    int32_t i
    
    do
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx_1 = &rbx_1[8]
        i = i_1
        i_1 -= 1
    while (i != 1)

bool cond:0 = *(arg1 + 0xd4) == 0
*(arg1 + 0xd0) = 0

if (not(cond:0))
    sub_1405a52a0(arg1 + 0xc8, 0)

if (arg2 != 0)
    float zmm2 = *(arg1 + 0x44)
    int32_t zmm0 = (zx.o(0)).d
    int32_t zmm1
    
    if (zmm2 f>= zmm0)
        zmm1 = __minss_xmmss_memss(zmm2, 0x3f800000)
    else
        zmm1 = (zx.o(0)).d
    
    *(arg1 + 0x1c) = zmm1
    
    if (not(zmm2 f!= zmm0) && not(zmm0 f<= *(arg1 + 0x3c)))
        *(arg1 + 0x1c) = 0x3f800000

void* rcx_2 = *(arg1 + 0x48)

if (rcx_2 != 0)
    sub_141e43ed0(rcx_2, arg1 + 0x50)
