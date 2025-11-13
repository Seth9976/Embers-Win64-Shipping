// 函数: sub_140bce130
// 地址: 0x140bce130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *arg2
float zmm6[0x4] = arg3
int64_t rdi

if (rsi == 0)
    rdi = arg4
else
    rdi = arg2[1]

char rax
int64_t r9
rax, r9 = data_14399fa10()

if (rax == 0)
    return 2

bool z

if (0 == *(arg1 + 0x11))
    *(arg1 + 0x11) = 0
    z = true
else
    int64_t rax_2
    rax_2.b = *(arg1 + 0x11)
    z = false

if (not(z))
    sub_140af98a0("Unknown", 0x13ca, Cannot Flush Async Loading while async loading is suspended", 
        r9)
    sub_140afbb40()

int128_t zmm8 = zx.o(0)

if (not(zmm6[0] > 0f))
    zmm6 = 0x45610000

int128_t zmm7
int128_t var_38 = zmm7
int128_t zmm9
int128_t var_58 = zmm9

if (data_14399fa10() != 0)
    while (not(zmm6[0] f<= zmm8.d))
        if (rsi(rdi) != 0)
            break
        
        QueryPerformanceCounter(&arg4)
        int32_t var_68_1 = 0xffffffff
        zmm7.q = float.d(arg4)
        int512_t zmm3
        zmm3.o = zmm6
        zmm7.q = zmm7.q f* data_143d796f8
        zmm3, zmm6, zmm7, zmm8 = sub_140bd1b50(arg1 - 8, 1)
        
        if (data_14399fa10() == 0)
            return 2
        
        if (*(arg1 + 0x2d) != 0)
            zmm3, zmm6, zmm7, zmm8 = sub_140a7ddb0(sub_140a753a0(), 0)
            sub_140b732d0(9.99999975e-05f)
        
        int64_t performanceCount[0x2]
        QueryPerformanceCounter(&performanceCount)
        double zmm1_1[0x2] = zx.o(0)
        int64_t zmm0_1 = float.d(performanceCount[0])
        zmm1_1[0] = fconvert.d(zmm6[0])
        zmm1_1[0] = zmm1_1[0] f- (zmm0_1 f* data_143d796f8 f- zmm7.q)
        zmm6 = _mm_cvtpd_ps(zmm1_1)
        
        if (data_14399fa10() == 0)
            break

if (zmm6[0] f<= zmm8.d)
    return 0

return 2
