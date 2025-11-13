// 函数: sub_141c38120
// 地址: 0x141c38120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = data_143de5480 == 0
int64_t r14 = sx.q(*(arg1 + 8))
int64_t r12 = data_143f34930
int32_t var_20 = r14.d
void* var_28 = arg2
int64_t rcx
int32_t rsi

if (cond:0)
    rsi = 0
    rcx = 0
else
    rsi = 0
    rcx.b = GetCurrentThreadId() != data_143de5470

int32_t result

if (*(r12 + (rcx << 2)) == 0)
    sub_141c45a20(arg2, *(arg1 + 0x10), r14.d)
    memset(*(arg1 + 0x18), 0, r14 << 2)
    result = sub_141c35660(*(arg1 + 0x10), *(arg1 + 0x18), r14.d)
else
    result = sub_141c3e8c0(&var_28, arg1 + 0x10)

int64_t r8_4 = sx.q(*(arg1 + 0xc))
int64_t r10 = 0

if (r8_4 s>= 4)
    void* rax_2 = *(arg1 + 0x18)
    int64_t rcx_5 = 0
    void* r9_2 = *(arg1 + 0x10) - rax_2
    int64_t i_3 = ((r8_4 - 4) u>> 2) + 1
    void* rdx_3 = rax_2 + 4
    rsi = (i_3 << 3).d
    r10 = i_3 << 2
    int64_t i
    
    do
        int32_t rax_3 = *(rdx_3 + r9_2 - 4)
        rdx_3 += 0x10
        *(arg3 + (rcx_5 << 2)) = rax_3
        rcx_5 += 8
        *(arg3 + (rcx_5 << 2) - 0x1c) = *(rdx_3 - 0x14)
        *(arg3 + (rcx_5 << 2) - 0x18) = *(rdx_3 + r9_2 - 0x10)
        *(arg3 + (rcx_5 << 2) - 0x14) = *(rdx_3 - 0x10)
        *(arg3 + (rcx_5 << 2) - 0x10) = *(rdx_3 + r9_2 - 0xc)
        *(arg3 + (rcx_5 << 2) - 0xc) = *(rdx_3 - 0xc)
        *(arg3 + (rcx_5 << 2) - 8) = *(rdx_3 + r9_2 - 8)
        result = *(rdx_3 - 8)
        *(arg3 + (rcx_5 << 2) - 4) = result
        i = i_3
        i_3 -= 1
    while (i != 1)

if (r10 s< r8_4)
    int64_t rax_10 = *(arg1 + 0x18)
    int64_t r9_4 = *(arg1 + 0x10) - rax_10
    int64_t rcx_6 = sx.q(rsi)
    int64_t i_2 = r8_4 - r10
    int32_t* rdx_4 = rax_10 + (r10 << 2)
    int64_t i_1
    
    do
        int32_t rax_11 = *(rdx_4 + r9_4)
        rdx_4 = &rdx_4[1]
        *(arg3 + (rcx_6 << 2)) = rax_11
        rcx_6 += 2
        result = rdx_4[-1]
        *(arg3 + (rcx_6 << 2) - 4) = result
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
