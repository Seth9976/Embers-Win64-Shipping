// 函数: sub_141ccc950
// 地址: 0x141ccc950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x48)
int64_t* rdi = rax

if (rax == 0)
    rdi = rax
else
    int32_t rbx_1 = *(arg1 + 0x38)
    *(arg1 + 0x38) = rbx_1 + 1
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    rdi[1].d = arg3
    int128_t zmm0_1 = *arg4
    rdi[5].d = rbx_1
    uint64_t rbx_3 = zx.q(arg3 + 7) u>> 3
    rdi[4] = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0 f+ *(arg1 + 0x48)
    *(rdi + 0xc) = zmm0_1
    __builtin_memset(&rdi[6], 0, 0x18)
    int64_t rax_2 = j_sub_140a82f30(rbx_3)
    *rdi = rax_2
    memcpy(rax_2, arg2, rbx_3.d)

int64_t rsi_1 = sx.q(*(arg1 + 0x30))
int32_t rax_3 = (rsi_1 + 1).d
*(arg1 + 0x30) = rax_3

if (rax_3 s> *(arg1 + 0x34))
    sub_1405a4d70(arg1 + 0x28)

int64_t result = *(arg1 + 0x28)
*(result + (rsi_1 << 3)) = rdi
return result
