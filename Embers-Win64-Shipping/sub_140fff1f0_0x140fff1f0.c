// 函数: sub_140fff1f0
// 地址: 0x140fff1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_48 = zmm6
int128_t zmm7
int128_t var_58 = zmm7
uint128_t zmm8 = 0x4014000000000000
int32_t arg_8 = 0
int32_t var_98_1
uint32_t result_1
void* rdi_1
int64_t* r9_1

while (true)
    int64_t rsi_1 = *(arg1 + 0x18)
    rdi_1 = *(arg1 + 0x10)
    
    if (data_143f01c92 != 0 && sub_140a80f40() != 0 && sub_141976800() != 0)
        sub_141989210()
    
    int64_t* rcx_1 = *(rdi_1 + 0x150)
    var_98_1 = 0
    uint32_t result = (*(*rcx_1 + 0xe8))(rcx_1, rsi_1, &arg_8, 4, 0)
    result_1 = result
    
    if (data_143f01c92 != 0)
        result = sub_140a80f40()
        
        if (result.b != 0)
            result = sub_1419768f0()
            
            if (result.b != 0)
                result = _initp_eh_hooks()
    
    if (result_1 != 1)
    label_140fff3e3:
        
        if (result_1 == 0)
        label_140fff3e7:
            
            if (arg_8 == 0)
                continue
        else if (result_1 s< 0)
            r9_1 = 0x15c
            break
        
        return result
    
    int64_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    int32_t rbp_1 = performanceCount_1.d
    int64_t performanceCount_2
    QueryPerformanceCounter(&performanceCount_2)
    zmm6 = zmm8
    zmm7.q = float.d(performanceCount_2)
    zmm7.q = zmm7.q f* data_143d796f8
    
    while (true)
        if (data_143f01c92 != 0 && sub_140a80f40() != 0)
            char rax_5
            rax_5, zmm6 = sub_141976800()
            
            if (rax_5 != 0)
                zmm6 = sub_141989210()
        
        int64_t* rcx_6 = *(rdi_1 + 0x150)
        var_98_1 = 0
        result = (*(*rcx_6 + 0xe8))(rcx_6, rsi_1, &arg_8, 4, 0)
        result_1 = result
        
        if (data_143f01c92 != 0)
            result = sub_140a80f40()
            
            if (result.b != 0)
                result = sub_1419768f0()
                
                if (result.b != 0)
                    result = _initp_eh_hooks()
        
        if (result_1 == 0)
            goto label_140fff3e7
        
        int64_t performanceCount_3
        result = QueryPerformanceCounter(&performanceCount_3)
        double zmm0[0x2] = zx.o(0)
        zmm0[0] = float.d(performanceCount_3)
        zmm0[0] = zmm0[0] f* data_143d796f8
        zmm0[0] = zmm0[0] f- zmm7.q
        int64_t zmm1 = _mm_cvtps_pd(_mm_cvtpd_ps(zmm0)[0]).q
        
        if (not(zmm1 f<= zmm6.q))
            zmm6.q = zmm6.q f+ zmm8.q
        
        if (zmm1 f> 0x3fe0000000000000)
            if (result_1 s>= 0)
                return result
            
            r9_1 = 0x148
            break
        
        if (result_1 != 1)
            int64_t performanceCount[0x2]
            QueryPerformanceCounter(&performanceCount)
            result = performanceCount[0].d - rbp_1
            data_143f138cc += result
            data_143f138d8:4.d += 1
            goto label_140fff3e3
    
    break

var_98_1.q = *(rdi_1 + 0x168)
return sub_140fff020(result_1, "Result", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Query.cpp", r9_1)
