// 函数: sub_140fdb0e0
// 地址: 0x140fdb0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi

if (arg4 == 0)
    rsi = 0
else
    rsi = arg1[1]

void* rbx = *arg1

if (arg3[1] u<= 0)
    return 

uint32_t rbp_1 = zx.d(*arg3)
void*** rcx_2 = (*(rbx + 0x30) + 7) & 0xfffffffffffffff8
void* rax_1 = &rcx_2[5]

if (rax_1 u> *(rbx + 0x38))
    sub_140b0e3d0(rbx + 0x30, 0x30)
    rcx_2 = (*(rbx + 0x30) + 7) & 0xfffffffffffffff8
    rax_1 = &rcx_2[5]

*(rbx + 0x30) = rax_1
void**** rax_2 = *(rbx + 8)
*(rbx + 0x14) += 1
*rax_2 = rcx_2
*(rbx + 8) = &rcx_2[1]
rcx_2[1] = 0
rcx_2[3].d = rbp_1
*rcx_2 = &data_142da77d8
rcx_2[2] = arg2
rcx_2[4] = rsi
