// 函数: sub_141192aa0
// 地址: 0x141192aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (*arg2 & 0xfffffffd) == 0
int64_t* rbx = arg5
int32_t rcx = arg2[1]
int32_t rsi = 0
int64_t* var_40 = arg6
void* r12 = *arg1
int64_t* var_88 = arg6
int32_t rax_1 = arg2[2]
int32_t var_90 = 0
int64_t* var_80 = rbx
int64_t* rcx_1

if (cond:0)
    arg5.d = rcx
    arg5:4.d = rax_1
    rcx_1 = arg5
else
    arg6.d = rax_1
    arg6:4.d = rcx
    rcx_1 = arg6

int64_t* var_70 = rcx_1
int64_t var_78 = 0
void* rax_2 = rbx[2]
void* var_98 = nullptr
var_98 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1
    rsi = var_90

sub_14118a9c0(arg1, arg2, arg3, arg4, &var_78, &var_98, 0)
int64_t rax_3 = rbx[2]
int64_t* rbx_3 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_3 = &rbx_3[1]

if (rcx_3 u> *(r12 + 0x38))
    sub_140b0e3d0(r12 + 0x30, 0x10)
    rbx_3 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_3 = &rbx_3[1]

*(r12 + 0x30) = rcx_3
*rbx_3 = rax_3
void*** rcx_7 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_7[6]

if (rax_4 u> *(r12 + 0x38))
    sub_140b0e3d0(r12 + 0x30, 0x38)
    rcx_7 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_7[6]

*(r12 + 0x30) = rax_4
void**** rax_5 = *(r12 + 8)
*(r12 + 0x14) += 1
*rax_5 = rcx_7
*(r12 + 8) = &rcx_7[1]
rcx_7[1] = 0
rcx_7[3] = rbx_3
uint64_t rbx_6 = zx.q(1 - rsi)
*rcx_7 = &data_142da7798
rcx_7[5] = 0
int32_t var_90_1 = rbx_6.d
rcx_7[2].d = 1
int32_t rsi_1 = rbx_6.d
rcx_7[4].d = 2
*(rcx_7 + 0x24) = 3
void* r14 = (&var_88)[zx.q(1 - rbx_6.d)]
void* rax_8 = *(r14 + 0x10)
void* r14_1 = r14 + 0x10
void* var_60 = rax_8

if (rax_8 != 0)
    *(rax_8 + 8) += 1
    rsi_1 = var_90_1

sub_14118a010(arg1, arg2, &(&var_88)[rbx_6][1], &var_78, &var_60)
int32_t r15_1 = 0x800

if (rcx u> 0x800)
    do
        int64_t rax_9 = *r14_1
        int64_t* rbx_9 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_12 = &rbx_9[1]
        
        if (rcx_12 u> *(r12 + 0x38))
            sub_140b0e3d0(r12 + 0x30, 0x10)
            rbx_9 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_12 = &rbx_9[1]
        
        *(r12 + 0x30) = rcx_12
        *rbx_9 = rax_9
        void*** rax_12 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_14 = &rax_12[6]
        
        if (rcx_14 u> *(r12 + 0x38))
            sub_140b0e3d0(r12 + 0x30, 0x38)
            rax_12 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_14 = &rax_12[6]
        
        *(r12 + 0x30) = rcx_14
        void**** rcx_16 = *(r12 + 8)
        *(r12 + 0x14) += 1
        *rcx_16 = rax_12
        *(r12 + 8) = &rax_12[1]
        rax_12[3] = rbx_9
        rax_12[2].d = 1
        rax_12[4].d = 2
        *(rax_12 + 0x24) = 3
        rax_12[5] = 0
        rax_12[1] = 0
        *rax_12 = &data_142da7798
        int32_t rax_15 = 1 - rsi_1
        rsi_1 = rax_15
        rbx_6 = zx.q(rax_15)
        void* r14_2 = (&var_88)[zx.q(1 - rsi_1)]
        void* rax_17 = *(r14_2 + 0x10)
        r14_1 = r14_2 + 0x10
        void* var_50 = rax_17
        
        if (rax_17 != 0)
            *(rax_17 + 8) += 1
        
        sub_141188fd0(arg1, arg2, r15_1, &(&var_88)[rbx_6][1], &var_78, &var_50, 0)
        r15_1 *= 2
    while (r15_1 u< rcx)

if (rbx_6.d != 0)
    sub_1411a4490(var_40, rbx)

int64_t result
result.b = 1
return result
