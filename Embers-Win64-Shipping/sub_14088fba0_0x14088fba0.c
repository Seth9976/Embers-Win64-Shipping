// 函数: sub_14088fba0
// 地址: 0x14088fba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg2 + 0x1b0)

if (*(arg1 + 0x11e) u<= 0 && *(arg1 + 0x122) u<= 0)
    return 

uint32_t r14_1 = zx.d(*(arg1 + 0x120))
void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_1 = &rcx_2[5]

if (rax_1 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_1 = &rcx_2[5]

*(arg2 + 0x30) = rax_1
void**** rax_2 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_2 = rcx_2
*(arg2 + 8) = &rcx_2[1]
rcx_2[1] = 0
rcx_2[3].d = r14_1
*rcx_2 = &data_142da77d8
rcx_2[2] = rbp
rcx_2[4] = arg3
