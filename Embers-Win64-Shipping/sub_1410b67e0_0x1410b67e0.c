// 函数: sub_1410b67e0
// 地址: 0x1410b67e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *(arg2 + 0x1b0)
int64_t r9 = *(arg4 + 0x10)
int64_t arg_10 = r12
sub_1410809a0(arg1, arg2, r12, r9)
int64_t* rdi_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rax_1 = *(arg6 + 8)
void* rcx = &rdi_2[1]

if (rcx u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rdi_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx = &rdi_2[1]

*(arg2 + 0x30) = rcx
*rdi_2 = rax_1
void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_2 = &rcx_4[6]

if (rax_2 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_4[6]

*(arg2 + 0x30) = rax_2
void**** rax_3 = *(arg2 + 8)
*(arg2 + 0x14) += 1
int32_t rbp = 1
*rax_3 = rcx_4
*(arg2 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142da7798
rcx_4[2].d = 1
rcx_4[3] = rdi_2
rcx_4[4].d = 1
*(rcx_4 + 0x24) = 3
rcx_4[5] = 0
void arg_28
sub_140741e30(arg2, &arg_10, arg1 + 0x118, &arg_28, 0)

if (*(arg1 + 0x120) u> 0)
    uint32_t rdi_5 = zx.d(*(arg1 + 0x11e))
    void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_5 = &rcx_11[5]
    
    if (rax_5 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_5 = &rcx_11[5]
    
    *(arg2 + 0x30) = rax_5
    void**** rax_6 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_6 = rcx_11
    *(arg2 + 8) = &rcx_11[1]
    rcx_11[1] = 0
    *rcx_11 = &data_142d99560
    rcx_11[4] = arg5
    rcx_11[2] = r12
    rcx_11[3].d = rdi_5

void* rax_9 = *(arg3 + 0xf80)

if (rax_9 == 0 || (*(rax_9 + 0x20) & 2) == 0)
    rbp = 0

int32_t arg_8 = rbp
uint64_t rbp_1 = zx.q(*(arg1 + 0x126))

if (rbp_1.d u>= 4)
    rbp_1 = 4

if (rbp_1.d != 0)
    uint32_t r12_1 = zx.d(*(arg1 + 0x124))
    uint32_t r13_1 = zx.d(*(arg1 + 0x122))
    int64_t rdi_8 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t rax_10 = rdi_8 + rbp_1
    
    if (rax_10 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rbp_1 + 0x10).d)
        rdi_8 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_10 = rdi_8 + rbp_1
    
    *(arg2 + 0x30) = rax_10
    memcpy(rdi_8, &arg_8, rbp_1.d)
    void*** rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_11 = &rcx_19[6]
    
    if (rax_11 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_11 = &rcx_19[6]
    
    *(arg2 + 0x30) = rax_11
    void**** rax_12 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_12 = rcx_19
    *(arg2 + 8) = &rcx_19[1]
    rcx_19[1] = 0
    *rcx_19 = &data_142d99550
    rcx_19[4].d = r13_1
    rcx_19[2] = arg_10
    rcx_19[3] = rdi_8
    *(rcx_19 + 0x24) = r12_1
    rcx_19[5].d = rbp_1.d

sub_140741e30(arg2, &arg_10, arg1 + 0x128, &data_1439b521c, 0)
sub_140741e30(arg2, &arg_10, arg1 + 0x12e, &data_1439b5220, 0)
sub_140741e30(arg2, &arg_10, arg1 + 0x134, &data_1439b5224, 0)
return sub_14077c370(arg1 + 0x13a, arg2, &arg_10, arg6)
