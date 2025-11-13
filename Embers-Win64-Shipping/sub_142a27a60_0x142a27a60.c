// 函数: sub_142a27a60
// 地址: 0x142a27a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = sx.q(arg3)
uint64_t i_4 = zx.q(arg3)
*(arg1 + 0x1c) = i_4.d
void* rax
int64_t r9
rax, r9 = sub_1429dde80(r13 * 0x28)
*arg1 = rax

if (rax == 0)
    sub_1429da010(arg2, (rax + 2).d, "Failed to allocate lf_sync->mutex_", r9)

int64_t rdi = 0

if (*arg1 != 0 && i_4.d s> 0)
    int64_t rsi_1 = 0
    uint64_t i_2 = i_4
    uint64_t i
    
    do
        InitializeCriticalSectionEx(*arg1 + rsi_1, 0, 0)
        rsi_1 += 0x28
        i = i_2
        i_2 -= 1
    while (i != 1)

void* rax_1
int64_t r9_1
rax_1, r9_1 = sub_1429dde80(r13 << 3)
arg1[1] = rax_1

if (rax_1 == 0)
    sub_1429da010(arg2, (rax_1 + 2).d, "Failed to allocate lf_sync->cond_", r9_1)

if (arg1[1] != 0 && i_4.d s> 0)
    uint64_t i_3 = i_4
    uint64_t i_1
    
    do
        InitializeConditionVariable(arg1[1] + rdi)
        rdi += 8
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

int64_t rdi_1 = sx.q(arg5)
void* rax_2
int64_t r9_2
rax_2, r9_2 = sub_1429dde80(rdi_1 * 0x1a0)
arg1[4] = rax_2

if (rax_2 == 0)
    sub_1429da010(arg2, (rax_2 + 2).d, "Failed to allocate lf_sync->lfdata", r9_2)

arg1[5].d = rdi_1.d
void* rax_3
int64_t r9_3
rax_3, r9_3 = sub_1429dde80(r13 << 2)
arg1[2] = rax_3

if (rax_3 == 0)
    rax_3 = sub_1429da010(arg2, (rax_3 + 2).d, "Failed to allocate lf_sync->cur_sb_col", r9_3)

if (arg4 s< 0x280)
    arg1[3].d = 1
    return rax_3

if (arg4 s<= 0x500)
    arg1[3].d = 2
    return rax_3

int32_t rax_4 = 8

if (arg4 s<= 0x1000)
    rax_4 = 4

arg1[3].d = rax_4
return rax_4
