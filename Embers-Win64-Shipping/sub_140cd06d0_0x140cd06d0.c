// 函数: sub_140cd06d0
// 地址: 0x140cd06d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = data_143e1add9
data_143e1add9 = 1
int512_t zmm0 = sub_140599090(&data_1439aa9d0)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int32_t rdx = data_143e1b330
int128_t zmm6
zmm6.q = float.d(performanceCount)
int32_t rax = data_143e1ae18
int32_t rbx = 0
zmm6.q = zmm6.q f* data_143d796f8
bool cond:0 = rdx s< rax

if (rdx s< rax)
    int32_t rax_7
    
    do
        data_143e1b330 = rdx + 1
        sub_140cd8580(**(data_143e1ae10 + (sx.q(rdx) << 3)), zmm0)
        int32_t rcx_4 = rbx
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = muls.dp.d(0x66666667, rbx)
        rbx += 1
        int32_t rdx_2 = temp0_1 s>> 2
        
        if (arg1 != 0 && rcx_4 - (rdx_2 + (rdx_2 u>> 0x1f)) * 0xa == 0)
            QueryPerformanceCounter(&performanceCount)
            zmm0.o = zx.o(0)
            zmm0.q = fconvert.d(arg2.d)
            
            if (float.d(performanceCount) f* data_143d796f8 f- zmm6.q f> zmm0.q)
                rdx = data_143e1b330
                rax_7 = data_143e1ae18
                break
        
        rdx = data_143e1b330
        rax_7 = data_143e1ae18
    while (rdx s< rax_7)
    
    cond:0 = rdx s< rax_7

rbx.b = cond:0
sub_140599090(&data_1439aa9e8)
data_143e1add9 = rsi
return zx.q(rbx.b)
