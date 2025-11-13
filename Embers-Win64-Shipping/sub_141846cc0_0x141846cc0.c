// 函数: sub_141846cc0
// 地址: 0x141846cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg1[0xa]
int64_t r10 = *(arg1 + 0x20)
char rbx

if (r9 == 0)
    rbx = arg3
else
    int32_t r8_1 = arg1[6]
    uint64_t rdx = zx.q(modu.dp.d(0:(arg1[0xb] - r9 + r8_1), r8_1))
    
    if (r9 - 1 u< r8_1)
        r8_1 = r9 - 1
    
    rbx = *(rdx + r10)
    arg1[0xa] = r8_1

*(zx.q(arg1[0xb]) + r10) = *arg2
*(arg1 + 0x30) += 1
int32_t rcx_1 = arg1[6]
int32_t rax_8 = arg1[0xa]
arg1[0xb] = modu.dp.d(0:(arg1[0xb] + 1), rcx_1)

if (rax_8 + 1 u< rcx_1)
    rcx_1 = rax_8 + 1

arg1[0xa] = rcx_1
int64_t r9_1 = *(&data_143efa090 + (zx.q(rbx) << 3))
int32_t r8_3 = *arg1 & 0x3f
int64_t r10_3 = rol.q(*(arg1 + 8), 1) ^ (r9_1 u>> ((neg.d(r8_3)).b & 0x3f) | r9_1 << r8_3.b)
*(arg1 + 8) = r10_3
uint64_t result = zx.q(*arg2)
*(arg1 + 8) = *(&data_143efa090 + (result << 3)) ^ r10_3
return result
