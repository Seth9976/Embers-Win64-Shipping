// 函数: sub_14282b068
// 地址: 0x14282b068
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *(arg1 + 0x20)
int64_t rcx = *(arg1 + 0x10)

if (rcx u<= rdx + 1)
    sub_14282b4f0(arg1, 1)
    rcx = *(arg1 + 0x10)
    rdx = *(arg1 + 0x20)

*(arg1 + 0x18) &= rcx - 1
int64_t rdi_2 = (*(arg1 + 0x18) + rdx) & (rcx - 1)
int64_t rax_3 = *(arg1 + 8)

if (*(rax_3 + (rdi_2 << 3)) == 0)
    *(*(arg1 + 8) + (rdi_2 << 3)) = sub_14058b9f0(0x30)
    rax_3 = *(arg1 + 8)

int128_t* result = *(rax_3 + (rdi_2 << 3))
*result = *arg2
result[1] = arg2[1]
result[2] = arg2[2]
*(arg1 + 0x20) += 1
return result
