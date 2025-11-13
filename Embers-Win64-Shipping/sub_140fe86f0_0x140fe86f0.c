// 函数: sub_140fe86f0
// 地址: 0x140fe86f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6

if (arg7 != 0 && data_143f01c92 != 0 && sub_140a80f40() != 0)
    char rax_2
    rax_2, zmm6 = sub_141976800()
    
    if (rax_2 != 0)
        zmm6 = sub_141989210()

int64_t* rcx_1 = *(arg1 + 0x150)
int32_t var_88 = 0
uint32_t rbx = (*(*rcx_1 + 0xe8))(rcx_1, arg2, arg3, zx.q(arg4), 0)

if (arg7 != 0 && data_143f01c92 != 0 && sub_140a80f40().b != 0 && sub_1419768f0().b != 0)
    _initp_eh_hooks()

uint128_t var_38 = zmm6
uint128_t zmm7
uint128_t var_48 = zmm7
uint128_t zmm8
uint128_t var_58 = zmm8
int128_t zmm9
int128_t var_68 = zmm9
uint32_t result
int64_t* r9_2

if (rbx != 1)
label_140fe890a:
    
    if (rbx == 0)
    label_140fe890e:
        result.b = 1
    else if (rbx s> 0xffffffff)
    label_140fe894a:
        result.b = 0
    else
        r9_2 = 0x15c
    label_140fe893e:
        var_88.q = *(arg1 + 0x168)
        sub_140fff020(rbx, "Result", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Query.cpp", 
            r9_2)
    label_140fe894a_1:
        result.b = 0
else
    if (arg6 != 0)
        int64_t performanceCount[0x2]
        QueryPerformanceCounter(&performanceCount)
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        zmm9.q = float.d(performanceCount_1)
        zmm8 = 0x4014000000000000
        zmm9.q = zmm9.q f* data_143d796f8
        zmm6 = zmm8
        
        zmm7 = arg5 != 2 ? 0x3fe0000000000000 : 0x403e000000000000
        
        while (true)
            if (arg7 != 0 && data_143f01c92 != 0 && sub_140a80f40() != 0)
                char rax_5
                rax_5, zmm6 = sub_141976800()
                
                if (rax_5 != 0)
                    zmm6 = sub_141989210()
            
            int64_t* rcx_6 = *(arg1 + 0x150)
            var_88 = 0
            rbx = (*(*rcx_6 + 0xe8))(rcx_6, arg2, arg3, zx.q(arg4), 0)
            
            if (arg7 != 0 && data_143f01c92 != 0 && sub_140a80f40().b != 0
                    && sub_1419768f0().b != 0)
                _initp_eh_hooks()
            
            if (rbx == 0)
                goto label_140fe890e
            
            QueryPerformanceCounter(&performanceCount_1)
            double zmm0[0x2] = zx.o(0)
            zmm0[0] = float.d(performanceCount_1)
            zmm0[0] = zmm0[0] f* data_143d796f8
            zmm0[0] = zmm0[0] f- zmm9.q
            int64_t temp0_2 = _mm_cvtps_pd(_mm_cvtpd_ps(zmm0)[0])
            
            if (not(temp0_2 f<= zmm6.q))
                zmm6.q = zmm6.q f+ zmm8.q
            
            if (temp0_2 f> zmm7.q)
                if (rbx s>= 0)
                    goto label_140fe894a_2
                
                r9_2 = 0x148
                break
            
            if (rbx != 1)
                QueryPerformanceCounter(&performanceCount_1)
                data_143f138cc += performanceCount_1.d - performanceCount[0].d
                data_143f138d8:4.d += 1
                goto label_140fe890a
        
        goto label_140fe893e
    
label_140fe894a_2:
    result.b = 0
return result
