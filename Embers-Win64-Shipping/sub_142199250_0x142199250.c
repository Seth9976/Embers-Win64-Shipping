// 函数: sub_142199250
// 地址: 0x142199250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x518))
int32_t rax = (rsi + 1).d
*(arg1 + 0x518) = rax

if (rax s> *(arg1 + 0x51c))
    sub_140775520(arg1 + 0x510)

int32_t* rdi_1 = *(arg1 + 0x510) + rsi * 0x48

if (rdi_1 == 0)
    rdi_1 = nullptr
else
    rdi_1[2] = 0
    __builtin_memset(&rdi_1[0xa], 0, 0x20)

int32_t rax_2 = arg4[1].d
*(rdi_1 + 0x10) = *arg4
rdi_1[6] = rax_2
rdi_1[3] = arg3.d
*rdi_1 = 2
*(rdi_1 + 4) = arg2
int32_t rax_4 = arg5[1].d
*(rdi_1 + 0x1c) = *arg5
rdi_1[9] = rax_4
int64_t* result = sub_140780c40(&rdi_1[0xa], arg6)
rdi_1[0xe] = arg7
return result
