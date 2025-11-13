// 函数: sub_1410f7dc0
// 地址: 0x1410f7dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg4
uint64_t rdx = zx.q(arg2[0x2a9].d)
int64_t arg_8 = 0
void* rax_2 = sub_1405948b0((*(rax + 0x40))(arg4, rdx, &arg_8))
void* rax_3 = sub_1419cec70(*(rax_2 + 0x28), &data_143e51b68, 0)
void* rbx = nullptr

if (rax_3 != 0)
    int64_t* rbx_1 = *(rax_2 + 0x10)
    int64_t rdx_1 = sx.q(*(rax_3 + 0x10c))
    int64_t rcx_3 = rbx_1[3]
    int64_t rdi_1 = rdx_1 << 3
    
    if (*(rdi_1 + rcx_3) == 0)
        sub_1419ccf30(rbx_1, rdx_1.d)
        rcx_3 = rbx_1[3]
    
    rbx = *(rdi_1 + rcx_3)

*(arg1 + 0x1b0) = rbx
sub_14198aa60(rbx)
void*** rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_8[3]

if (rax_4 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_8[3]

*(arg1 + 0x30) = rax_4
void**** rax_5 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_5 = rcx_8
*(arg1 + 8) = &rcx_8[1]
rcx_8[1] = 0
*rcx_8 = &data_142dd5b40
int64_t var_30 = arg6
rcx_8[2] = rbx
sub_141107360(rax_3, arg1, arg2, arg7, arg8, arg4, arg5)
sub_1419cd1c0(arg1, rax_3, divs.dp.d(sx.q(arg8 - 1 + data_1439b5638), data_1439b5638), 1, 1)
int64_t rdi_2 = *(arg1 + 0x1b0)
sub_14077cfd0(rax_3 + 0x130, arg1, rdi_2)
sub_14077cfd0(rax_3 + 0x138, arg1, rdi_2)
sub_14077cfd0(rax_3 + 0x140, arg1, rdi_2)
int64_t* rbx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_18 = &rbx_5[1]
int64_t rax_15 = *(*(*(*arg2 + 0x20) + 0x18f8) + 0x30)
arg_8 = rax_15

if (rcx_18 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rax_15 = arg_8
    rbx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_18 = &rbx_5[1]

*(arg1 + 0x30) = rcx_18
*rbx_5 = rax_15
void*** rcx_22 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_16 = &rcx_22[6]

if (rax_16 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_22 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_16 = &rcx_22[6]

*(arg1 + 0x30) = rax_16
void**** rax_17 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_17 = rcx_22
*(arg1 + 8) = &rcx_22[1]
rcx_22[1] = 0
rcx_22[3] = rbx_5
*rcx_22 = &data_142da7798
rcx_22[2].d = 1
rcx_22[4].d = 0
*(rcx_22 + 0x24) = 3
rcx_22[5] = 0
return &data_142da7798
