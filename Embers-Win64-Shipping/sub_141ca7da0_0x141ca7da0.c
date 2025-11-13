// 函数: sub_141ca7da0
// 地址: 0x141ca7da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *arg3
arg2.q f- 0.0
uint128_t zmm7
uint128_t var_38 = zmm7
int64_t rsi
rsi.b = arg2.q f< 0.0
BOOL i

for (i = arg3[4] - r8; i s> 0; i = arg3[4] - r8)
    *arg3 = r8 + 1
    int64_t* rax_4 = (sx.q(r8) << 4) + *(arg3 + 8)
    int16_t* rdx_1
    
    if (rax_4[1].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *rax_4
    
    void arg_20
    int64_t* rdx_2 = *sub_140b58260(&arg_20, rdx_1, 1)
    int64_t* arg_10 = rdx_2
    char rax_6
    double zmm6_1
    rax_6, zmm6_1 = sub_141c99350(arg1 + 0x448, rdx_2)
    
    if (rax_6 != 0)
        int64_t var_48
        int64_t* rax_7
        rax_7, zmm6_1 = sub_140b63b70(&arg_10, &var_48)
        sub_140920c10(arg1 + 0x560, rax_7)
        int64_t rcx_4 = var_48
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
    
    if (rsi.b == 0)
        int64_t performanceCount
        i = QueryPerformanceCounter(&performanceCount)
        double zmm1 = float.d(performanceCount)
        float zmm0_1[0x2] = _mm_cvtps_pd(*(arg1 + 0x558))
        
        if (zmm1 f* data_143d796f8 f+ 0x4170000000000000 - zmm6_1 f> zmm0_1)
            return i
    
    r8 = *arg3

if (r8 s> 0)
    i = sub_1406a4a20(&arg3[2], 0, r8, 1)
    *arg3 = 0

return i
