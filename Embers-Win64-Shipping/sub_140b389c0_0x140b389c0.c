// 函数: sub_140b389c0
// 地址: 0x140b389c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3
int128_t* rsi = arg1 + 0x18

if (sub_140ab3dc0(arg3) != 0)
    sub_1405d9400()
    rbx = &data_143cd6fd8

BOOL result = sub_14065da90(rsi, rbx)
bool cond:0 = *(arg1 + 0x51) != 0
float zmm1 = *(arg1 + 0x34) f+ *(arg1 + 0x38)
float zmm0[0x4] = arg1[3].d
zmm0[0] = zmm0[0] - zmm1
*(arg1 + 0x34) = zmm1
*(arg1 + 0x38) = _mm_min_ss(zmm0[0], arg2.d)[0]

if (not(cond:0) && *(arg1 + 0x4c) != 0)
    int64_t performanceCount
    result = QueryPerformanceCounter(&performanceCount)
    zmm0 = zx.o(0)
    zmm0[0].q = float.d(performanceCount)
    zmm0[0].q = zmm0[0].q f* data_143d796f8
    zmm0[0].q = zmm0[0].q f+ 16777216.0
    zmm0[0].q = zmm0[0].q f- arg1[4].q
    
    if (not(_mm_cvtpd_ps(zmm0)[0] f<= *(arg1 + 0x48)))
        int64_t* rcx_3 = *(arg1 + 0x58)
        char rbx_1 = arg1[6].b
        
        if ((*(*rcx_3 + 0x70))(rcx_3).b == 0 || (rbx_1 & 2) != 0)
            result.b = 0
        else
            result.b = 1
        
        if (arg1[5].b == 0 || data_143de542f != 0 || result.b != 0 || data_143de5426 != result.b)
            result.b = 0
        else if (data_143de5480 != result.b)
            result.b = GetCurrentThreadId() == data_143de5470
            
            if (result.b == 0 || *(arg1 + 0x3c) == 2)
                result.b = 0
            else
                result.b = 1
        else if (*(arg1 + 0x3c) == 2)
            result.b = 0
        else
            result.b = 1
        
        if (data_143de5430 == 0 && result.b != 0)
            char rax_2 = sub_140ab3dc0(rsi)
            int64_t* rcx_5 = *(arg1 + 0x58)
            
            if (rax_2 != 0)
                rsi = arg1
            
            result = (*(*rcx_5 + 0x58))(rcx_5, rsi, zx.q(rbx_1) & 1)
            
            if (data_143de5430 != 0)
                int64_t* rbx_2 = *(arg1 + 0x58)
                *(arg1 + 0x51) = 1
                sub_140b26350(rbx_2, 1)
                result = sub_140b26350(rbx_2, 1)

if (arg1[5].b == 0)
    return result

return sub_140b26350(*(arg1 + 0x58), 0) __tailcall
