// 函数: sub_14083fc00
// 地址: 0x14083fc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg4 + 0xe0
void* rbx = *(*(arg4 + 0xc0) + 8)
void* rax_1 = *(rdi + 0x20)
char rdx = *(rbx + 0x28) & 1

if (rax_1 != 0)
    rdi = rax_1

int32_t rcx = 0
int64_t* rsi = nullptr
int32_t var_3c = 0
int64_t* r15 = nullptr
int64_t* var_48 = nullptr
void* rdi_1 = rdi + (sx.q(arg5) << 5)
int64_t* var_58 = nullptr
uint64_t r12 = 0
int32_t var_4c = 0
uint64_t r14 = 0

if (rdx != 0 && *arg7 == 0)
    int64_t rbx_1 = *(rbx + 0x78)
    int32_t var_40_1 = 1
    sub_14083a440(&var_48, 0)
    rsi = var_48
    rcx = var_3c
    r12 = zx.q(var_40_1)
    *rsi = rbx_1
    *arg7 = 1

int64_t rax_6 = *rdi_1

if (*arg6 != rax_6)
    *arg6 = rax_6
    
    if (*(*arg3 + 0x11a) u> 0)
        int64_t rbx_2 = sx.q(r12.d)
        int64_t* rax_9 = *(*rdi_1 + 0x58)
        r12 = zx.q((rbx_2 + 1).d)
        int32_t var_40_2 = r12.d
        
        if (r12.d s> rcx)
            sub_14083a440(&var_48, rbx_2.d)
            rcx = var_3c
            r12 = zx.q(var_40_2)
            rsi = var_48
        
        rsi[rbx_2] = rax_9
    
    if (*(*arg3 + 0x11e) u> 0)
        int64_t rbx_3 = sx.q(r12.d)
        int64_t* rax_12 = *(*rdi_1 + 0x78)
        r12 = zx.q((rbx_3 + 1).d)
        int32_t var_40_3 = r12.d
        
        if (r12.d s> rcx)
            sub_14083a440(&var_48, rbx_3.d)
            r12 = zx.q(var_40_3)
            rsi = var_48
        
        rsi[rbx_3] = rax_12

void* rax_14 = *arg3

if (*(rax_14 + 0x122) u> 0 || *(rax_14 + 0x126) u> 0)
    int32_t var_50_1 = 1
    int64_t rbx_4 = *(*(rdi_1 + 8) + 0x58)
    sub_14083a440(&var_58, 0)
    r15 = var_58
    r14 = zx.q(var_50_1)
    *r15 = rbx_4
    rax_14 = *arg3

int32_t rcx_6

if (*(rax_14 + 0x12a) u> 0 || *(rax_14 + 0x12e) u> 0)
    rcx_6 = var_4c
    int64_t rbx_5 = sx.q(r14.d)
    int64_t r13_1 = *(*(rdi_1 + 8) + 0x78)
    r14 = zx.q((rbx_5 + 1).d)
    int32_t var_50_2 = r14.d
    
    if (r14.d s> rcx_6)
        sub_14083a440(&var_58, rbx_5.d)
        rcx_6 = var_4c
        r14 = zx.q(var_50_2)
        r15 = var_58
    
    r15[rbx_5] = r13_1
else
    rcx_6 = var_4c

if (rdx != 0)
    int64_t rbx_6 = sx.q(r14.d)
    int64_t rdi_2 = *(*(rdi_1 + 8) + 0x98)
    r14 = zx.q((rbx_6 + 1).d)
    int32_t var_50_3 = r14.d
    
    if (r14.d s> rcx_6)
        sub_14083a440(&var_58, rbx_6.d)
        r14 = zx.q(var_50_3)
        r15 = var_58
    
    r15[rbx_6] = rdi_2

uint32_t rdx_7 = (r12 << 3).d
int64_t r13_2 = sx.q(rdx_7)
void* rdi_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_17 = rdi_5 + r13_2

if (rax_17 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, rdx_7 + 8)
    rdi_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_17 = rdi_5 + r13_2

*(arg2 + 0x30) = rax_17
int64_t i_2 = sx.q(r12.d)

if (r12.d s> 0)
    void* rcx_10 = rdi_5
    int64_t i
    
    do
        *rcx_10 = *(rsi - rdi_5 + rcx_10)
        rcx_10 += 8
        i = i_2
        i_2 -= 1
    while (i != 1)

void* rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_19 = rcx_13 + 0x30

if (rax_19 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_19 = rcx_13 + 0x30

*(arg2 + 0x30) = rax_19
void** rax_20 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_20 = rcx_13
*(arg2 + 8) = rcx_13 + 8
*(rcx_13 + 8) = 0
*(rcx_13 + 0x18) = rdi_5
*(rcx_13 + 0x10) = r12.d
*(rcx_13 + 0x20) = 0
*(rcx_13 + 0x28) = 0
uint32_t rdx_9 = (r14 << 3).d
*rcx_13 = &data_142da7798
*(rcx_13 + 0x24) = 3
int64_t r12_1 = sx.q(rdx_9)
void* rdi_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_22 = rdi_10 + r12_1

if (rax_22 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, rdx_9 + 8)
    rdi_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_22 = rdi_10 + r12_1

*(arg2 + 0x30) = rax_22
int64_t i_3 = sx.q(r14.d)

if (r14.d s> 0)
    void* rcx_18 = rdi_10
    int64_t i_1
    
    do
        *rcx_18 = *(r15 - rdi_10 + rcx_18)
        rcx_18 += 8
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

void* rcx_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_24 = rcx_21 + 0x30

if (rax_24 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_24 = rcx_21 + 0x30

*(arg2 + 0x30) = rax_24
void** rax_25 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_25 = rcx_21
*(arg2 + 8) = rcx_21 + 8
*(rcx_21 + 8) = 0
*rcx_21 = &data_142da7798
*(rcx_21 + 0x10) = r14.d
*(rcx_21 + 0x18) = rdi_10
*(rcx_21 + 0x20) = 2
*(rcx_21 + 0x24) = 3
*(rcx_21 + 0x28) = 0
return rcx_21 + 8
