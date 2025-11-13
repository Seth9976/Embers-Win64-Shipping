// 函数: sub_141cfc820
// 地址: 0x141cfc820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *arg1
int64_t rcx = arg1[1]
int64_t* rdx_2 = (sx.q(not.d(*(r9 + 0x104))) & sx.q(*arg2)) * 0x30 + *(r9 + 0xe0)
int64_t r9_2 = *rdx_2 & 0xffffffffffff
int64_t r10 = r9_2

if (rcx s>= r9_2)
    r10 = rcx

int64_t rcx_1 = rcx + arg1[2]
int64_t r8_3 = rdx_2[1] + r9_2

if (rcx_1 s<= r8_3)
    r8_3 = rcx_1

int64_t* rcx_2 = arg1[3]
*rcx_2 += r8_3 - r10
memcpy(arg1[4] - arg1[1] + r10, rdx_2[2] - r9_2 + r10, r8_3.d - r10.d)
int64_t result
result.b = 1
return result
