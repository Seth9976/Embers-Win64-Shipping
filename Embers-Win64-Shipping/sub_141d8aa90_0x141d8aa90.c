// 函数: sub_141d8aa90
// 地址: 0x141d8aa90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdi = *(arg1 + 8)
uint128_t zmm6
uint128_t var_28 = zmm6
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
uint128_t zmm9 = 0x4170000000000000
uint128_t zmm8
zmm8.q = float.d(performanceCount)
zmm8.q = zmm8.q f* data_143d796f8
zmm8.q = zmm8.q f+ zmm9.q
bool z

if (0 == *(rdi + 4))
    *(rdi + 4) = 0
    z = true
else
    *(rdi + 4)
    z = false

if (not(z))
    uint128_t zmm7
    uint128_t var_38_1 = zmm7
    uint128_t zmm10 = 0x3f91111111111111
    int128_t zmm11 = zx.o(0)
    bool z_2
    
    do
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        zmm6.q = float.d(performanceCount_1)
        zmm6.q = zmm6.q f* data_143d796f8
        zmm6.q = zmm6.q f+ zmm9.q
        zmm7.q = zmm6.q f- zmm8.q
        uint128_t zmm0
        zmm0.q = zmm10.q f- zmm7.q
        int512_t zmm1
        
        if (not(zmm0.q f<= zmm11.q))
            zmm0.d = fconvert.s(zmm0.q)
            zmm0, zmm1 = sub_140b73230(zmm0)
            int64_t performanceCount_2
            QueryPerformanceCounter(&performanceCount_2)
            zmm6.q = float.d(performanceCount_2)
            zmm6.q = zmm6.q f* data_143d796f8
            zmm6.q = zmm6.q f+ zmm9.q
            zmm7.q = zmm6.q f- zmm8.q
        
        if (data_143e29f28 != 0)
            bool z_1
            
            if (0 == *(rdi + 8))
                *(rdi + 8) = 0
                z_1 = true
            else
                *(rdi + 8)
                z_1 = false
            
            if (z_1)
                int64_t* rcx_3 = *(data_143e29f28 + 0x20)
                CRITICAL_SECTION* lpCriticalSection = (*(*rcx_3 + 0x138))(rcx_3)
                EnterCriticalSection(lpCriticalSection)
                int64_t* rcx_5 = *(rdi + 0x20)
                zmm1.o = _mm_cvtpd_ps(zmm7)
                zmm1, zmm6, zmm9, zmm10, zmm11 = sub_141d87bd0(rcx_5, zmm0)
                *(rdi + 8)
                *(rdi + 8) = 1
                
                if (lpCriticalSection != 0)
                    LeaveCriticalSection(lpCriticalSection)
        
        zmm8 = zmm6
        
        if (0 == *(rdi + 4))
            *(rdi + 4) = 0
            z_2 = true
        else
            *(rdi + 4)
            z_2 = false
    while (not(z_2))

bool z_3

if (0 == *(rdi + 8))
    *(rdi + 8) = 0
    z_3 = true
else
    *(rdi + 8)
    z_3 = false

if (not(z_3))
    zmm6 = 0x3c888889
    bool z_4
    
    do
        zmm6 = sub_140b73230(zmm6)
        
        if (0 == *(rdi + 8))
            *(rdi + 8) = 0
            z_4 = true
        else
            *(rdi + 8)
            z_4 = false
    while (not(z_4))

char temp0_3 = *rdi
*rdi = 0
int64_t rax_9
rax_9.b = temp0_3
data_143de5478 = 0
return 0
