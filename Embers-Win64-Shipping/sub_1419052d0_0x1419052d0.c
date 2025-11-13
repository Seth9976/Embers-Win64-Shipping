// 函数: sub_1419052d0
// 地址: 0x1419052d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_3

if (arg3 != 0)
    (*(*arg3 + 0x48))(arg3)
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    rax_3 = (*(*arg3 + 0x48))(arg3)

if (arg3 == 0 || rax_3 == 0)
    int64_t rcx_3 = sx.q(data_1439c7494 + arg2) * 5
    int64_t rax_12 = *(arg1 + 0x150)
    *(rax_12 + (rcx_3 << 3)) = 0
    *(rax_12 + (rcx_3 << 3) + 8) = 0
    *(rax_12 + (rcx_3 << 3) + 0x10) = 0
    *(rax_12 + (rcx_3 << 3) + 0x18) = 0xffffffff
    *(rax_12 + (rcx_3 << 3) + 0x1c) = 1
    *(rax_12 + (rcx_3 << 3) + 0x20) = 0
else
    int64_t* rax_4 = arg3[9]
    int64_t temp0_2 = _mm_cvtps_pd(_mm_cvtpd_ps(zx.o(data_143dbb3b8)).q)
    
    if (not(temp0_2 f== *rax_4))
        *rax_4 = temp0_2
    
    int32_t r10_1 = *(rax_3 + 0x18)
    int32_t r8 = *(rax_3 + 0x10)
    int32_t rdx = *(rax_3 + 0x14)
    int64_t rcx_2 = sx.q(data_1439c7494 + arg2) * 5
    int64_t rax_8 = *(arg1 + 0x150)
    *(rax_8 + (rcx_2 << 3)) = rax_3
    *(rax_8 + (rcx_2 << 3) + 8) = 0
    *(rax_8 + (rcx_2 << 3) + 0x10) = rdx
    *(rax_8 + (rcx_2 << 3) + 0x14) = r8
    *(rax_8 + (rcx_2 << 3) + 0x18) = 0xffffffff
    
    if (r10_1 s< 0 || r10_1 == 1)
        *(rax_8 + (rcx_2 << 3) + 0x20) = r10_1
        *(rax_8 + (rcx_2 << 3) + 0x1c) = 0
    else
        *(rax_8 + (rcx_2 << 3) + 0x20) = r10_1
        *(rax_8 + (rcx_2 << 3) + 0x1c) = 1

int64_t result = *(arg1 + 0x158)
*(result + (sx.q(data_1439c7494 + arg2) << 3)) = 0
return result
