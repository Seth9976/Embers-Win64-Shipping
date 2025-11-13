// 函数: sub_142385480
// 地址: 0x142385480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg2
int128_t zmm8
int128_t var_48 = zmm8
int128_t zmm9
int128_t var_58 = zmm9
EnterCriticalSection(arg1 + 0x580)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int128_t zmm7
zmm7.q = float.d(performanceCount)
zmm7.q = zmm7.q f* data_143d796f8
int32_t rsi_1

if (data_143f597dc s> 0)
label_14238559d:
    rsi_1 = 0
else
    zmm8 = zx.o(0)
    
    while (true)
        int64_t* rdi_1 = *(arg1 + 0x10)
        rsi_1 = 0
        void* rbp_2 = sx.q(*(arg1 + 0x18)) * 0xd8 + rdi_1
        
        if (rdi_1 == rbp_2)
            break
        
        int32_t rax_2
        
        do
            sub_1423b8300(rdi_1)
            rax_2 = rsi_1 + 1
            
            if ((*(rdi_1 + 0xb4) & 0x20) == 0)
                rax_2 = rsi_1
            
            rdi_1 = &rdi_1[0x1b]
            rsi_1 = rax_2
        while (rdi_1 != rbp_2)
        
        if (rax_2 == 0)
            break
        
        if (not(zmm6.d f== zmm8.d))
            int64_t performanceCount_1
            QueryPerformanceCounter(&performanceCount_1)
            double zmm0[0x2] = zx.o(0)
            zmm0[0] = float.d(performanceCount_1)
            zmm0[0] = zmm0[0] f* data_143d796f8
            zmm0[0] = zmm0[0] f- zmm7.q
            
            if (_mm_cvtpd_ps(zmm0)[0].d f>= zmm6.d)
                break
        
        zmm7, zmm8 = sub_1419a21e0(0)
        zmm6 = sub_140b73230(0x3c23d70a)
        
        if (data_143f597dc s> 0)
            goto label_14238559d

if (arg1 != -0x580)
    LeaveCriticalSection(arg1 + 0x580)

return zx.q(rsi_1)
