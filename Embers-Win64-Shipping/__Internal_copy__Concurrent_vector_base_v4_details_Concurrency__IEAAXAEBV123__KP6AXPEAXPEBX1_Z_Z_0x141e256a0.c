// 函数: ?_Internal_copy@_Concurrent_vector_base_v4@details@Concurrency@@IEAAXAEBV123@_KP6AXPEAXPEBX1@Z@Z
// 地址: 0x141e256a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = arg2[2]
int64_t count = sx.q(*(sub_140d3c6e0(r15 + 0x40) + 0x80))
*(arg1 + 0x38) = 0

if (count.d s> *(arg1 + 0x3c))
    sub_1405a5220(&arg1[3], count.d)

int64_t rsi = sx.q(*(arg1 + 0x38))
int32_t rax_1 = (rsi + count).d
*(arg1 + 0x38) = rax_1

if (rax_1 s> *(arg1 + 0x3c))
    sub_140638970(&arg1[3])

memset(rsi * 0x30 + arg1[3].q, 0, count * 0x30)
*(arg1 + 0x48) = 0

if (count.d s> *(arg1 + 0x4c))
    sub_1405c5510(&arg1[4], count.d)

int64_t r14 = sx.q(*(arg1 + 0x48))
int32_t rax_2 = (r14 + count).d
*(arg1 + 0x48) = rax_2

if (rax_2 s> *(arg1 + 0x4c))
    sub_1405daba0(&arg1[4])

memset(r14 + arg1[4].q, 0, count)
int32_t i_2 = arg2[1].d

if (i_2 != 0)
    int128_t* r8_3 = nullptr
    uint64_t i_1 = zx.q(i_2)
    void* r9 = nullptr
    uint64_t i
    
    do
        int64_t rdx_4 = sx.q(*(r9 + *(r15 + 0x70)))
        
        if (rdx_4.d != 0xffffffff)
            int64_t rcx_10 = *arg2
            int128_t* rax_6 = rdx_4 * 0x30 + arg1[3].q
            *rax_6 = *(r8_3 + rcx_10)
            rax_6[1] = *(r8_3 + rcx_10 + 0x10)
            rax_6[2] = *(r8_3 + rcx_10 + 0x20)
            *(rdx_4 + arg1[4].q) = 1
        
        r9 += 4
        r8_3 = &r8_3[3]
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_141a87a30(&arg1[5], arg3)
int32_t rax_8 = *(arg1 + 0x7c)
*(arg1 + 0x78) = 0

if (rax_8 s< 0 && rax_8 != 0)
    sub_1405947f0(&arg1[7], 0)

int64_t* rax_9 = arg3[2]

if (rax_9 != 0)
    if (&arg1[7] != rax_9)
        int32_t rsi_2 = rax_9[1].d
        int64_t rbp_1 = *rax_9
        int32_t r8_4 = *(arg1 + 0x7c)
        *(arg1 + 0x78) = rsi_2
        
        if (rsi_2 != 0 || r8_4 != 0)
            sub_1405a4c70(&arg1[7], rsi_2, r8_4)
            memcpy(arg1[7].q, rbp_1, rsi_2 * 2)
        else
            *(arg1 + 0x7c) = rsi_2
    
    arg1[6].q = &arg1[7]

*arg1 = *arg4
arg1[1] = arg4[1]
arg1[2] = arg4[2]
arg1[8].q = *arg5
*(arg1 + 0x88) = arg6.d
return arg5
