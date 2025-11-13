// 函数: sub_142199110
// 地址: 0x142199110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x528))
int32_t rax = (rdi + 1).d
*(arg1 + 0x528) = rax

if (rax s> *(arg1 + 0x52c))
    sub_1405fdd60(arg1 + 0x520)

int64_t rdi_1 = rdi * 0x70
int32_t* rdi_2 = rdi_1 + *(arg1 + 0x520)

if (rdi_1 == neg.q(*(arg1 + 0x520)))
    rdi_2 = nullptr
else
    rdi_2[2] = 0
    __builtin_memset(&rdi_2[0xa], 0, 0x14)
    __builtin_memset(&rdi_2[0x10], 0, 0x24)

int32_t rax_1 = arg4[1].d
*(rdi_2 + 0x10) = *arg4
rdi_2[6] = rax_1
rdi_2[3] = arg3.d
*rdi_2 = 3
*(rdi_2 + 4) = arg2
int32_t rax_3 = arg5[1].d
*(rdi_2 + 0x3c) = *arg5
rdi_2[0x11] = rax_3
int32_t rax_5 = arg6[1].d
*(rdi_2 + 0x1c) = *arg6
rdi_2[9] = rax_5
sub_140780c40(&rdi_2[0xa], arg7)
rdi_2[0xe] = arg8.d
int32_t rax_7 = arg9[1].d
*(rdi_2 + 0x48) = *arg9
rdi_2[0x14] = rax_7
rdi_2[0x16] = arg11
*(rdi_2 + 0x5c) = arg12
*(rdi_2 + 0x68) = arg13
rdi_2[0x15] = arg10.d
return arg13
