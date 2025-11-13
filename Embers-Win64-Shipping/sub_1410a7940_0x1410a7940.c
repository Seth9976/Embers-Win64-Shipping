// 函数: sub_1410a7940
// 地址: 0x1410a7940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1410e0370(arg2[8])
int128_t var_48 = *(*arg2 + 0x1598)
sub_1410b7780(arg2, &var_48, zx.o(0), 0x3f800000)
arg2[8]
char rcx_3 = *(arg1 + 0xbc)
void* r14_1

if (rcx_3 == 0)
    void* rax_1 = sub_1413a8300(arg1 + 0x20, arg2)
    rcx_3 = *(arg1 + 0xbc)
    r14_1 = rax_1
else
    r14_1 = data_143ec4d20 + 8

int32_t rcx_5

if (rcx_3 == 0)
    rcx_5 = (*(arg1 + 0x34)).d
else
    rcx_5 = (data_143ec4fdc).d

int32_t temp0 = divs.dp.d(sx.q(arg2[3].d - 1 + rcx_5), rcx_5)
var_48 = *(arg2 + 0x48)
int64_t rax_7 = var_48:8.q
int64_t arg_10 = rax_7
arg_10.d = divs.dp.d(sx.q(rax_7.d), temp0)
arg_10:4.d = divs.dp.d(sx.q(arg_10:4.d), temp0)
int64_t rax_13 = var_48.q
int64_t arg_8 = rax_13
arg_8.d = divs.dp.d(sx.q(rax_13.d), temp0)
arg_8:4.d = divs.dp.d(sx.q(arg_8:4.d), temp0)
var_48.q = arg_8
var_48:8.q = arg_10

if (*(arg1 + 0xb8) != 2)
    void* r13_1 = arg2[8]
    int64_t rax_31 = *(r14_1 + 0x10)
    arg_10 = rax_31
    int64_t* rbx_8 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_24 = &rbx_8[1]
    
    if (rcx_24 u> *(r13_1 + 0x38))
        sub_140b0e3d0(r13_1 + 0x30, 0x10)
        rax_31 = arg_10
        rbx_8 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_24 = &rbx_8[1]
    
    *(r13_1 + 0x30) = rcx_24
    *rbx_8 = rax_31
    void*** rcx_28 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_32 = &rcx_28[6]
    
    if (rax_32 u> *(r13_1 + 0x38))
        sub_140b0e3d0(r13_1 + 0x30, 0x38)
        rcx_28 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_32 = &rcx_28[6]
    
    *(r13_1 + 0x30) = rax_32
    void**** rax_33 = *(r13_1 + 8)
    *(r13_1 + 0x14) += 1
    *rax_33 = rcx_28
    *(r13_1 + 8) = &rcx_28[1]
    rcx_28[1] = 0
    *rcx_28 = &data_142da7798
    rcx_28[2].d = 1
    rcx_28[3] = rbx_8
    rcx_28[4] = 2
    rcx_28[5] = 0
    return sub_14107b6b0(arg1, arg2[8], arg2, &var_48, *(r14_1 + 0x10))

sub_140b58260(&arg_10, u"AsyncStartFence", 1)
int64_t* rcx_8 = data_143f0f180
(*(*rcx_8 + 0x98))(rcx_8, &arg_8, &arg_10)
void* r13 = arg2[8]
int64_t rax_22 = *(r14_1 + 0x10)
int64_t r12_1 = arg_8
arg_10 = rax_22
int64_t* rbx_2 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_9 = &rbx_2[1]

if (rcx_9 u> *(r13 + 0x38))
    sub_140b0e3d0(r13 + 0x30, 0x10)
    rax_22 = arg_10
    rbx_2 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_9 = &rbx_2[1]

*(r13 + 0x30) = rcx_9
*rbx_2 = rax_22
void*** rcx_13 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_23 = &rcx_13[6]

if (rax_23 u> *(r13 + 0x38))
    sub_140b0e3d0(r13 + 0x30, 0x38)
    rcx_13 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
    rax_23 = &rcx_13[6]

*(r13 + 0x30) = rax_23
*(r13 + 0x14) += 1
**(r13 + 8) = rcx_13
*(r13 + 8) = &rcx_13[1]
rcx_13[5] = r12_1
rcx_13[1] = 0
*rcx_13 = &data_142da7798
rcx_13[2].d = 1
rcx_13[3] = rbx_2
rcx_13[4] = 2
int64_t rbx_5 = arg_8
void*** rcx_19 = (data_143f02d90 + 7) & 0xfffffffffffffff8
void* rax_26 = &rcx_19[3]

if (rax_26 u> data_143f02d98)
    sub_140b0e3d0(&data_143f02d90, 0x20)
    rcx_19 = (data_143f02d90 + 7) & 0xfffffffffffffff8
    rax_26 = &rcx_19[3]

data_143f02d74 += 1
data_143f02d90 = rax_26
*data_143f02d68 = rcx_19
data_143f02d68 = &rcx_19[1]
rcx_19[1] = 0
*rcx_19 = &data_142f11608
rcx_19[2] = rbx_5
sub_14107b6b0(arg1, &data_143f02d60, arg2, &var_48, *(r14_1 + 0x10))
return sub_1405d1550(&arg_8)
