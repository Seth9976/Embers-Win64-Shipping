// 函数: sub_1425f4120
// 地址: 0x1425f4120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xb8) == 0)
    if (*(arg1 + 0xa8) == 0)
        char rax_1 = sub_1425f2fe0(arg1)
        
        if (rax_1 == 0)
            return rax_1
    
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    double zmm0[0x2] = zx.o(0)
    zmm0[0] = float.d(performanceCount)
    zmm0[0] = zmm0[0] f* data_143d796f8
    zmm0[0] = zmm0[0] + 16777216.0
    zmm0[0] = zmm0[0] * 10000000.0
    zmm0[0] = zmm0[0] + 0.5
    int64_t rcx_1 = int.q(zmm0[0])
    
    if (rcx_1 != -0x8000000000000000 && not(float.d(rcx_1) f== zmm0[0]))
        uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0]))
        zmm0 = zx.o(0)
        zmm0[0] = float.d(rcx_1 - (zx.q(temp0_2) & 1))
    
    int64_t rax_4 = int.q(zmm0[0])
    *(arg1 + 0xc0) = 0
    *(arg1 + 0xb0) = 0
    *(arg1 + 0xb8) = rax_4
    void var_28
    sub_1423ddaf0(data_143f5b298, &var_28)
    
    if (sub_141e80b60(&var_28) != 0)
        *(arg1 + 0xd0) = 0
        int64_t* var_20
        (*(*var_20 + 0x68))(var_20, arg1, 0)
    
    int32_t var_30_1 = 0
    void* rsi_1 = *(data_143e29f28 + 0x20)
    int64_t* rax_8 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_8 != 0)
        rax_8[1] = arg1
        *rax_8 = &data_14344ac88
        *(rax_8 + 0x10) = sub_1425f35c0.o
        rax_8[5] = sub_140a387b0()
        *rax_8 = &data_14344ace0
    
    if (rax_8 != 0)
        sub_140599630(rsi_1 + 0x78, 1)
        (*(*rax_8 + 0x30))(rax_8, &performanceCount)
        int64_t rbx_1 = sx.q(*(rsi_1 + 0x80))
        int32_t rax_11 = (rbx_1 + 1).d
        *(rsi_1 + 0x80) = rax_11
        
        if (rax_11 s> *(rsi_1 + 0x84))
            sub_1405a4f90(rsi_1 + 0x78)
        
        void** rax_14 = (rbx_1 << 4) + *(rsi_1 + 0x78)
        *rax_14 = rax_8
        rax_14[1].d = 3
    
    sub_141e71cd0(&var_28)

int64_t rax
rax.b = 1
return rax
