// 函数: sub_141077da0
// 地址: 0x141077da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_38
sub_1419a2ec0(arg3[0xc], &var_38, &data_143e407f0, 0)
arg3[8]
void* rbp = var_38
void* rax = sub_1413a8300(arg1 + 0x30, arg3)
void* rsi = nullptr
void* rax_1 = data_143ec4d30

if (rbp != 0)
    int64_t rdx_2 = sx.q(*(rbp + 0x10c))
    void* var_30
    int64_t* rbx_1 = *(var_30 + 0x10)
    int64_t rsi_1 = rdx_2 << 3
    int64_t rcx_4 = rbx_1[3]
    
    if (*(rsi_1 + rcx_4) == 0)
        sub_1419ccf30(rbx_1, rdx_2.d)
        rcx_4 = rbx_1[3]
    
    rsi = *(rsi_1 + rcx_4)

*(arg2 + 0x1b0) = rsi
sub_14198aa60(rsi)
void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_2 = &rcx_9[3]

if (rax_2 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_9[3]

*(arg2 + 0x30) = rax_2
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_9
*(arg2 + 8) = &rcx_9[1]
rcx_9[1] = 0
*rcx_9 = &data_142dd5b40
rcx_9[2] = rsi
sub_141081780(rbp, arg2, arg3, arg5, arg6, *(arg1 + 0x158), *(rax + 0x10), *(rax_1 + 0x18))
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg4[3] - arg4[1] + 7)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg4[2] - *arg4 + 7)
sub_1419cd1c0(arg2, rbp, ((temp2 & 7) + temp3) s>> 3, ((temp0 & 7) + temp1) s>> 3, 1)
int64_t rsi_2 = *(arg2 + 0x1b0)
uint32_t r14_1 = zx.d(*(rbp + 0x218))
void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_18 = &rcx_17[5]

if (rax_18 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_18 = &rcx_17[5]

*(arg2 + 0x30) = rax_18
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_17
*(arg2 + 8) = &rcx_17[1]
*rcx_17 = &data_142da77d8
rcx_17[2] = rsi_2
rcx_17[3].d = r14_1
rcx_17[4] = 0
rcx_17[1] = 0
uint32_t rbp_1 = zx.d(*(rbp + 0x21c))
void*** rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_21 = &rcx_23[5]

if (rax_21 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_21 = &rcx_23[5]

*(arg2 + 0x30) = rax_21
void**** rax_22 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_22 = rcx_23
*(arg2 + 8) = &rcx_23[1]
rcx_23[2] = rsi_2
rcx_23[3].d = rbp_1
rcx_23[1] = 0
*rcx_23 = &data_142da77d8
rcx_23[4] = 0
return &rcx_23[1]
