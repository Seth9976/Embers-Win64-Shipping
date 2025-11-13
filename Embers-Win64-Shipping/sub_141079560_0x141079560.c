// 函数: sub_141079560
// 地址: 0x141079560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_48
sub_1419a2ec0(arg3[0xc], &var_48, &data_143e3d460, 0)
void* rbp = var_48
void* rbx = nullptr

if (rbp != 0)
    int64_t rdx_1 = sx.q(*(rbp + 0x10c))
    void* var_40
    int64_t* rbx_1 = *(var_40 + 0x10)
    int64_t rdi_1 = rdx_1 << 3
    int64_t rax_2 = rbx_1[3]
    
    if (*(rdi_1 + rax_2) == 0)
        sub_1419ccf30(rbx_1, rdx_1.d)
        rax_2 = rbx_1[3]
    
    rbx = *(rdi_1 + rax_2)

*(arg2 + 0x1b0) = rbx
sub_14198aa60(rbx)
void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_5[3]

if (rax_3 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_5[3]

*(arg2 + 0x30) = rax_3
void**** rax_4 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_4 = rcx_5
*(arg2 + 8) = &rcx_5[1]
rcx_5[1] = 0
*rcx_5 = &data_142dd5b40
rcx_5[2] = rbx
arg3[8]
sub_1410824d0(rbp, arg2, arg3, (*arg4).d, arg5)
int32_t temp0 = divs.dp.d(sx.q(data_143ec4fdc.d), *arg4)
int128_t zmm0 = *(*arg3 + 0x1598)
int64_t r8_1 = temp0.q
int64_t rcx_13 = zmm0:8.q
uint32_t r9_2 = (r8_1 u>> 0x20).d
int32_t temp0_1 = divs.dp.d(sx.q((rcx_13 - 1).d + temp0), temp0)
int32_t arg_1c = divs.dp.d(sx.q((rcx_13 u>> 0x20).d - 1 + r9_2), r9_2)
int64_t rax_17 = zmm0.q
int32_t arg_10
arg_10.q = rax_17
int32_t temp0_3 = divs.dp.d(sx.q(rax_17.d), temp0)
int32_t arg_14 = divs.dp.d(sx.q(temp0), (r8_1 u>> 0x20).d)
int32_t temp32
int32_t temp33
temp32:temp33 = sx.q((temp0_1.q u>> 0x20).d - (temp0_3.q u>> 0x20).d + 0xf)
int32_t temp34
int32_t temp35
temp34:temp35 = sx.q(temp0_1 - temp0_3 + 0xf)
sub_1419cd1c0(arg2, rbp, ((temp34 & 0xf) + temp35) s>> 4, ((temp32 & 0xf) + temp33) s>> 4, 1)
int64_t rbx_2 = *(arg2 + 0x1b0)
uint32_t rbp_1 = zx.d(*(rbp + 0x228))
void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_30 = &rcx_20[5]

if (rax_30 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_30 = &rcx_20[5]

*(arg2 + 0x30) = rax_30
void**** rax_31 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_31 = rcx_20
*(arg2 + 8) = &rcx_20[1]
rcx_20[1] = 0
rcx_20[2] = rbx_2
*rcx_20 = &data_142da77d8
rcx_20[3].d = rbp_1
rcx_20[4] = 0
return &data_142da77d8
