// 函数: sub_1419be330
// 地址: 0x1419be330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = nullptr
void* rcx = *arg2

if (rcx != 0)
    rsi = sub_1410970c0(*(arg2[1] + 0x10), *(rcx + 0x10c))

*(arg1 + 0x1b0) = rsi
sub_14198aa60(rsi)
void*** rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_5[3]

if (rax_3 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_5[3]

*(arg1 + 0x30) = rax_3
void**** rax_4 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_4 = rcx_5
*(arg1 + 8) = &rcx_5[1]
rcx_5[1] = 0
*rcx_5 = &data_142dd5b40
rcx_5[2] = rsi
sub_1419c06f0(arg1, arg2, rsi, arg3)
int32_t rbp_1 = arg4[2]
int32_t r12 = arg4[1]
void*** rcx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int32_t r15_1 = *arg4
void* rax_6 = &rcx_12[4]

if (rax_6 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rcx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_12[4]

*(arg1 + 0x30) = rax_6
int64_t* rax_7 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_7 = rcx_12
*(arg1 + 8) = &rcx_12[1]
rcx_12[1] = 0
*rcx_12 = &data_142ef57a8
rcx_12[2].d = r15_1
*(rcx_12 + 0x14) = r12
rcx_12[3].d = rbp_1
return sub_14116d320(arg1, arg2, rsi) __tailcall
