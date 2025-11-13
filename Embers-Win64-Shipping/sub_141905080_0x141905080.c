// 函数: sub_141905080
// 地址: 0x141905080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
void* rax_3

if (arg3 != 0)
    (*(*arg3 + 0x48))(arg3)
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    rax_3 = (*(*arg3 + 0x48))(arg3)

if (arg3 == 0 || rax_3 == 0)
    int64_t rax_6 = *(arg1 + 0x150)
    int64_t rcx_3 = rsi * 5
    *(rax_6 + (rcx_3 << 3)) = 0
    *(rax_6 + (rcx_3 << 3) + 8) = 0
    *(rax_6 + (rcx_3 << 3) + 0x10) = 0
    *(rax_6 + (rcx_3 << 3) + 0x18) = 0xffffffff
    *(rax_6 + (rcx_3 << 3) + 0x1c) = 1
    *(rax_6 + (rcx_3 << 3) + 0x20) = 0
else
    int64_t* rax_4 = arg3[9]
    int64_t temp0_2 = _mm_cvtps_pd(_mm_cvtpd_ps(zx.o(data_143dbb3b8)).q)
    
    if (not(temp0_2 f== *rax_4))
        *rax_4 = temp0_2
    
    int32_t r10_1 = *(rax_3 + 0x18)
    int64_t rdx = rsi * 5
    int32_t rcx_2 = *(rax_3 + 0x10)
    int32_t rax_5 = *(rax_3 + 0x14)
    int64_t r9_1 = *(arg1 + 0x150)
    *(r9_1 + (rdx << 3)) = rax_3
    *(r9_1 + (rdx << 3) + 8) = 0
    *(r9_1 + (rdx << 3) + 0x10) = rax_5
    *(r9_1 + (rdx << 3) + 0x14) = rcx_2
    *(r9_1 + (rdx << 3) + 0x18) = 0xffffffff
    
    if (r10_1 s< 0 || r10_1 == 1)
        *(r9_1 + (rdx << 3) + 0x20) = r10_1
        *(r9_1 + (rdx << 3) + 0x1c) = 0
    else
        *(r9_1 + (rdx << 3) + 0x20) = r10_1
        *(r9_1 + (rdx << 3) + 0x1c) = 1

int64_t result = *(arg1 + 0x158)
*(result + (rsi << 3)) = 0
return result
