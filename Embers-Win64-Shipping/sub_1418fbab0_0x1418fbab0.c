// 函数: sub_1418fbab0
// 地址: 0x1418fbab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f0f160 == 0)
    data_143f0f161 = 0
    void* rax_1
    
    if (arg1 != 0)
        rax_1 = *arg1
    
    void*** rax
    
    if (arg1 == 0 || rax_1 == 0 || *(rax_1 + 0xa94) != 1)
        rax = data_143f0f168
    else
        int64_t rcx = 0
        double zmm1 = 1000000000.0 f/ _mm_cvtps_pd(*(rax_1 + 0xa98))
        float zmm0[0x2] = 0x43e0000000000000
        
        if (not(zmm1 f< zmm0))
            zmm1 = zmm1 f- zmm0
            
            if (not(zmm1 f>= zmm0))
                rcx = -0x8000000000000000
        
        rax = int.q(zmm1) + rcx
        data_143f0f168 = rax
    
    data_143f0f160 = 1
    data_143f0f161 = rax != 0

arg1[1].b = 0

if (data_143f0f161 == 0)
    return 

void*** rax_3 = j_sub_140a82f30(0x60)

if (rax_3 != 0)
    rax_3 = sub_1418f41c0(rax_3, *arg1, 8)

void* rcx_2 = *arg1
arg1[3] = rax_3
*(arg1[3] + 0x58) = sub_1418ba820(rcx_2 + 0x3f0, rax_3[4].d << 3, 2, 4)
