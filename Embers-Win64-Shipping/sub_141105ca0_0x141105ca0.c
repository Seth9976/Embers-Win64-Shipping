// 函数: sub_141105ca0
// 地址: 0x141105ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = *(arg2 + 0x1b0)
int64_t r9 = arg3[2]
int64_t arg_8 = r15
sub_1410809a0(arg1, arg2, r15, r9)
int32_t r8_1 = arg3[0x2a9].d

if (*(arg1 + 0x118) != 0xffff)
    int64_t arg_10
    int64_t* rcx = &arg_10
    
    if (r8_1 s< 3)
        sub_14137b7f0(rcx, arg2)
    else
        sub_14137baa0(rcx, arg2, 0xf, r8_1)
    
    sub_14077caf0(arg2, &arg_8, arg1 + 0x118, arg_10)
    sub_1405d1550(&arg_10)

void* rdx_2 = data_143a2dd48
int32_t var_48 = *(rdx_2 + 0x60)
int32_t var_44 = *(rdx_2 + 0x64)
int32_t var_40 = *(rdx_2 + 0x68)
sub_1410e8980(arg1 + 0x11a, arg2, r15, &data_143e570b0, rdx_2, &var_48, 0)
sub_1410e8640(arg1 + 0x14c, arg2, r15, arg5)
sub_1410e8790(arg1 + 0x16a, arg2, &arg_8, arg3, arg4)
void* rcx_6 = *(*arg3 + 0x20)
void* rbx = *(rcx_6 + 0x18f8)
void* rsi = *(rcx_6 + 0x1968)
sub_14077c370(arg1 + 0x184, arg2, &arg_8, rbx + 8)
sub_14077c370(arg1 + 0x18c, arg2, &arg_8, rbx + 0x28)
sub_14077c370(arg1 + 0x194, arg2, &arg_8, rsi + 8)
int32_t* rdx_9 = *(arg3[0x2b5] + 0xd40)
int64_t rsi_1 = *(rdx_9 + 0x40)

if (*(arg1 + 0x19e) u> 0)
    uint32_t rdi_1 = zx.d(*(arg1 + 0x19c))
    void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_5 = &rcx_12[5]
    
    if (rax_5 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_5 = &rcx_12[5]
    
    *(arg2 + 0x30) = rax_5
    void** rax_6 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_6 = rcx_12
    *(arg2 + 8) = &rcx_12[1]
    rcx_12[1] = 0
    *rcx_12 = &data_142d99560
    rcx_12[2] = r15
    rcx_12[3].d = rdi_1
    rcx_12[4] = rsi_1

void** var_68_1
var_68_1.d = 0
sub_14077c4b0(arg2, &arg_8, arg1 + 0x1a0, &rdx_9[0x34], var_68_1.d)
sub_140741e30(arg2, &arg_8, arg1 + 0x1a6, &arg5[1], 0)
void* rsi_2 = *(arg3[0x2b5] + 0xd48)
int64_t r12_1 = *(rsi_2 + 0x70)

if (*(arg1 + 0x1ae) u> 0)
    uint32_t rdi_2 = zx.d(*(arg1 + 0x1ac))
    void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_9 = &rcx_20[5]
    
    if (rax_9 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_9 = &rcx_20[5]
    
    *(arg2 + 0x30) = rax_9
    void** rax_10 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_10 = rcx_20
    *(arg2 + 8) = &rcx_20[1]
    rcx_20[1] = 0
    *rcx_20 = &data_142d99560
    rcx_20[2] = r15
    rcx_20[3].d = rdi_2
    rcx_20[4] = r12_1

int32_t* rax_12 = *(rsi_2 + 0x88)
void** rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_24 = &rbx_3[1]

if (rcx_24 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_24 = &rbx_3[1]

*(arg2 + 0x30) = rcx_24
*rbx_3 = rax_12
void*** rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_13 = &rcx_28[6]

if (rax_13 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_13 = &rcx_28[6]

*(arg2 + 0x30) = rax_13
void**** rax_14 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_14 = rcx_28
*(arg2 + 8) = &rcx_28[1]
rcx_28[1] = 0
*rcx_28 = &data_142da7798
rcx_28[2].d = 1
rcx_28[3] = rbx_3
rcx_28[4].d = 2
*(rcx_28 + 0x24) = 3
rcx_28[5] = 0
return sub_14077c370(arg1 + 0x1b0, arg2, &arg_8, rsi_2 + 0x80)
