// 函数: sub_140885ec0
// 地址: 0x140885ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_20 = arg4
uint32_t r14_1 = arg5 u>> 6
bool cond:0 = (((*U"1111")[sx.q(arg3)] - 2) & 0xfffffffd) != 0
*(arg2 + 0x1b0) = arg4

if (cond:0)
    r14_1 = arg5 u>> 7

sub_14198aa60(arg4)
void*** rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_3[3]

if (rax_3 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_3[3]

*(arg2 + 0x30) = rax_3
int64_t* rax_4 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_4 = rcx_3
*(arg2 + 8) = &rcx_3[1]
rcx_3[1] = 0
*rcx_3 = &data_142dd5b40
rcx_3[2] = arg4

if (*(arg1 + 0x11a) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x118))
    void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_6 = &rcx_9[5]
    
    if (rax_6 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_6 = &rcx_9[5]
    
    *(arg2 + 0x30) = rax_6
    void**** rax_7 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_7 = rcx_9
    *(arg2 + 8) = &rcx_9[1]
    rcx_9[1] = 0
    rcx_9[4] = arg6
    *rcx_9 = &data_142d99560
    rcx_9[2] = arg4
    rcx_9[3].d = r15_1

sub_14077c370(arg1 + 0x11c, arg2, &arg_20, arg7)
sub_14077c370(arg1 + 0x124, arg2, &arg_20, arg8)
void arg_48
sub_140741e30(arg2, &arg_20, arg1 + 0x12c, &arg_48, 0)
sub_1419cd1c0(arg2, arg1, r14_1, 1, 1)
uint32_t r14_2 = zx.d(*(arg1 + 0x118))
void*** rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_10 = &rcx_19[5]

if (rax_10 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rcx_19[5]

*(arg2 + 0x30) = rax_10
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_19
*(arg2 + 8) = &rcx_19[1]
*rcx_19 = &data_142d99560
rcx_19[2] = arg4
rcx_19[3].d = r14_2
rcx_19[4] = 0
rcx_19[1] = 0
uint32_t r14_3 = zx.d(*(arg1 + 0x120))
void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_13 = &rcx_25[5]

if (rax_13 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_13 = &rcx_25[5]

*(arg2 + 0x30) = rax_13
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_25
*(arg2 + 8) = &rcx_25[1]
*rcx_25 = &data_142da77d8
rcx_25[2] = arg4
rcx_25[3].d = r14_3
rcx_25[4] = 0
rcx_25[1] = 0
uint32_t rbp_1 = zx.d(*(arg1 + 0x128))
void*** rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_16 = &rcx_31[5]

if (rax_16 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_16 = &rcx_31[5]

*(arg2 + 0x30) = rax_16
void**** rax_17 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_17 = rcx_31
*(arg2 + 8) = &rcx_31[1]
rcx_31[2] = arg4
rcx_31[3].d = rbp_1
rcx_31[1] = 0
*rcx_31 = &data_142da77d8
rcx_31[4] = 0
return &rcx_31[1]
