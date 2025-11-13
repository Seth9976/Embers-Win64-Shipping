// 函数: sub_1412ed4c0
// 地址: 0x1412ed4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg2
void* rsi = nullptr

if (rax != 0)
    int64_t rdx = sx.q(*(rax + 0x10c))
    int64_t r15_1 = rdx << 3
    int64_t* rbx_1 = *(arg2[1] + 0x10)
    int64_t rsi_1 = rbx_1[3]
    
    if (*(r15_1 + rsi_1) == 0)
        sub_1419ccf30(rbx_1, rdx.d)
        rsi_1 = rbx_1[3]
    
    rsi = *(r15_1 + rsi_1)

*(arg1 + 0x1b0) = rsi
sub_14198aa60(rsi)
void*** rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_2 = &rcx_4[3]

if (rax_2 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_4[3]

*(arg1 + 0x30) = rax_2
void**** rax_3 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_3 = rcx_4
*(arg1 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142dd5b40
rcx_4[2] = rsi
sub_1412f65a0(arg1, arg2, rsi, arg3)
int32_t r15_2 = arg4[2]
int32_t r12_1 = arg4[1]
void*** rcx_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int32_t rbp_1 = *arg4
void* rax_5 = &rcx_11[4]

if (rax_5 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    rcx_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_11[4]

*(arg1 + 0x30) = rax_5
int64_t* rax_6 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_6 = rcx_11
*(arg1 + 8) = &rcx_11[1]
rcx_11[1] = 0
*rcx_11 = &data_142ef57a8
rcx_11[2].d = rbp_1
*(rcx_11 + 0x14) = r12_1
rcx_11[3].d = r15_2
return sub_1412ff2a0(arg1, arg2, rsi) __tailcall
