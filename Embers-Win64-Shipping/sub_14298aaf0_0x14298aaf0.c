// 函数: sub_14298aaf0
// 地址: 0x14298aaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = zx.q(*(arg1 + 2))
uint64_t rdx = zx.q(*(arg1 + 4))
void* r9 = arg1 + 4
int16_t rax = rdx.w
float zmm3 = *(&data_1436bbc50 + (r8 << 2))
float zmm4 = *(&data_1436bbc50 + (rdx << 2))

if (zmm4 <= zmm3)
    rax = r8.w

uint64_t rcx = zx.q(rax)
uint64_t rax_1 = zx.q(*arg1)
float zmm1 = *(&data_1436bbc50 + (rax_1 << 2))

if (*(&data_1436bbc50 + (rcx << 2)) f<= zmm1)
    rcx.w = rax_1.w

if (zmm3 <= zmm4)
    rdx.w = r8.w

uint64_t result = zx.q(rdx.w)

if (zmm1 f<= *(&data_1436bbc50 + (result << 2)))
    r9 = arg1
else if (zmm3 <= zmm4)
    r9 = arg1 + 2

if (not(*(&data_1436bbc50 + (zx.q(rcx.w) << 2)) <= 0f))
    result = zx.q(*r9)
    *(&data_1436bbc50 + (result << 2))

return result
