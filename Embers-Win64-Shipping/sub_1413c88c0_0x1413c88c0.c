// 函数: sub_1413c88c0
// 地址: 0x1413c88c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int64_t rdi = sx.q(*(rbx + 0x1c20))
uint64_t result = zx.q((rdi + 1).d)
*(rbx + 0x1c20) = result.d

if (result.d s> *(rbx + 0x1c24))
    result = sub_1405e3f90(rbx + 0x1c18)

int64_t rcx_1 = rdi * 0xa8
int128_t* rcx_2 = rcx_1 + *(rbx + 0x1c18)

if (rcx_1 != neg.q(*(rbx + 0x1c18)))
    *rcx_2 = *(arg1 + 8)
    rcx_2[1] = *(arg1 + 0x18)
    rcx_2[2] = *(arg1 + 0x28)
    rcx_2[3] = *(arg1 + 0x38)
    rcx_2[4] = *(arg1 + 0x48)
    rcx_2[5] = *(arg1 + 0x58)
    rcx_2[6] = *(arg1 + 0x68)
    rcx_2[7] = *(arg1 + 0x78)
    rcx_2[8] = *(arg1 + 0x88)
    rcx_2[9] = *(arg1 + 0x98)
    result = arg1[0x15]
    rcx_2[0xa].q = result

return result
