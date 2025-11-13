// 函数: sub_141347830
// 地址: 0x141347830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = arg1[4].d
void* rsi = nullptr
int64_t r13 = *arg1
int64_t rbp = *(arg1[3] + 0x10)
void* rax_1 = arg1[1]

if (rax_1 != 0)
    int64_t rdx = sx.q(*(rax_1 + 0x10c))
    int64_t r15_1 = rdx << 3
    int64_t* rbx_1 = *(arg1[2] + 0x10)
    int64_t rsi_1 = rbx_1[3]
    
    if (*(r15_1 + rsi_1) == 0)
        sub_1419ccf30(rbx_1, rdx.d)
        rsi_1 = rbx_1[3]
    
    rsi = *(r15_1 + rsi_1)

*(arg2 + 0x1b0) = rsi
sub_14198aa60(rsi)
void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_4[3]

if (rax_3 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_4[3]

*(arg2 + 0x30) = rax_3
void**** rax_4 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_4 = rcx_4
*(arg2 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142dd5b40
rcx_4[2] = rsi
sub_14133bb70(arg2, &arg1[1], rsi, r13)
void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_11[4]

if (rax_6 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x28)
    rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_11[4]

*(arg2 + 0x30) = rax_6
int64_t* rax_7 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_7 = rcx_11
*(arg2 + 8) = &rcx_11[1]
rcx_11[1] = 0
*rcx_11 = &data_142f284d8
rcx_11[2] = rbp
rcx_11[3].d = r12
return sub_14116d320(arg2, &arg1[1], rsi) __tailcall
