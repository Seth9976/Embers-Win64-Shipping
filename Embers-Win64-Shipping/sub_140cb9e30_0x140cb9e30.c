// 函数: sub_140cb9e30
// 地址: 0x140cb9e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
int512_t zmm0
int512_t zmm1

if (*(arg1 + 0x329) == 0)
    void* arg_18 = arg1
    void* rax_1 = sub_140cdbb20()
    EnterCriticalSection(rax_1 + 0x58)
    zmm0, zmm1 = sub_140ca9be0(rax_1 + 8, &performanceCount, &arg_18, nullptr)
    
    if (rax_1 != -0x58)
        LeaveCriticalSection(rax_1 + 0x58)
    
    if (data_143de5452 != 0 && *(arg1 + 0x2e0) != 0 && arg2 != 0 && *(arg1 + 0x20) s> 0)
        int32_t i = 1
        int64_t var_38
        int64_t* var_28 = &var_38
        int64_t* var_20_1 = &performanceCount
        
        do
            int64_t rcx_3 = *(arg1 + 0x18)
            performanceCount.d = i
            int64_t rdx_2 = sx.q(i) << 7
            var_38 = *(rdx_2 + rcx_3 - 0x80)
            int32_t var_30_1 = *(rdx_2 + rcx_3 - 0x78)
            zmm0, zmm1 = sub_140ca9e70(arg2, &arg_18, &var_28, nullptr)
            i += 1
        while (i s<= *(arg1 + 0x20))
    
    if (*(arg1 + 0x2a2) != 0)
        zmm0, zmm1 = sub_140ba29f0(*(arg1 + 0x2d8))
    
    if ((*(arg1 + 0x290) & 0x80) == 0)
        if (data_143de5426 != 0 && *(arg1 + 0x294) == 0)
            int32_t i_1 = 0
            
            if (*(arg1 + 0x108) s> 0)
                do
                    zmm0, zmm1 = sub_140cd0ad0(arg1, i_1, zmm0, zmm1)
                    i_1 += 1
                while (i_1 s< *(arg1 + 0x108))
        
        *(arg1 + 0x294) = 1
    
    *(arg1 + 0x329) = 1

*(arg1 + 0x330) += 1
bool rax_4 = *(arg1 + 0x32b)
bool cond:0 = rax_4 != 0

if (rax_4 == 0)
    if (*(arg1 + 0x32c) != 0)
        QueryPerformanceCounter(&performanceCount)
        zmm0.o = *(arg1 + 0x334)
        zmm1.o = zx.o(0)
        zmm1.q = float.d(performanceCount)
        zmm0.o = _mm_cvtps_pd(zmm0.q)
        zmm1.q = zmm1.q f* data_143d796f8
        zmm1.q = zmm1.q f+ 16777216.0
        zmm1.q = zmm1.q f- *(arg1 + 0x338)
        rax_4 = zmm1.q f> zmm0.q
        *(arg1 + 0x32b) = rax_4
    
    cond:0 = rax_4 != 0

int32_t rbp
rbp.b = cond:0
return zx.q(rbp + 1)
