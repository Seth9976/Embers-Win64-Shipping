// 函数: sub_142921370
// 地址: 0x142921370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
int64_t* r10 = arg2

if (arg3 s<= 0)
    return 

int64_t rax

if ((arg3 & 0xfffffffc) != 0)
    do
        int64_t r9_1 = *r10
        uint64_t r8 = zx.q(r9_1.d)
        uint64_t r9_2 = r9_1 u>> 0x20
        int64_t rdx_1 = zx.q(r8.d) * r9_2
        int64_t rdx_2 = rdx_1 << 0x21
        int64_t r9_4 = r9_2 * r9_2 + (rdx_1 u>> 0x1f)
        int64_t r8_2 = r8 * r8 + rdx_2
        *arg1 = r8_2
        int64_t rax_3 = r9_4 + 1
        
        if (r8_2 u>= rdx_2)
            rax_3 = r9_4
        
        arg1[1] = rax_3
        int64_t r9_5 = r10[1]
        uint64_t r8_3 = zx.q(r9_5.d)
        uint64_t r9_6 = r9_5 u>> 0x20
        int64_t rdx_4 = zx.q(r8_3.d) * r9_6
        int64_t rdx_5 = rdx_4 << 0x21
        int64_t r9_8 = r9_6 * r9_6 + (rdx_4 u>> 0x1f)
        int64_t r8_5 = r8_3 * r8_3 + rdx_5
        arg1[2] = r8_5
        int64_t rax_6 = r9_8 + 1
        
        if (r8_5 u>= rdx_5)
            rax_6 = r9_8
        
        arg1[3] = rax_6
        int64_t r9_9 = r10[2]
        uint64_t r8_6 = zx.q(r9_9.d)
        uint64_t r9_10 = r9_9 u>> 0x20
        int64_t rdx_7 = zx.q(r8_6.d) * r9_10
        int64_t rdx_8 = rdx_7 << 0x21
        int64_t r9_12 = r9_10 * r9_10 + (rdx_7 u>> 0x1f)
        int64_t r8_8 = r8_6 * r8_6 + rdx_8
        arg1[4] = r8_8
        int64_t rax_9 = r9_12 + 1
        
        if (r8_8 u>= rdx_8)
            rax_9 = r9_12
        
        arg1[5] = rax_9
        int64_t r9_13 = r10[3]
        uint64_t r8_9 = zx.q(r9_13.d)
        uint64_t r9_14 = r9_13 u>> 0x20
        int64_t rdx_10 = zx.q(r8_9.d) * r9_14
        int64_t rdx_11 = rdx_10 << 0x21
        int64_t r9_16 = r9_14 * r9_14 + (rdx_10 u>> 0x1f)
        int64_t r8_11 = r8_9 * r8_9 + rdx_11
        arg1[6] = r8_11
        rax = r9_16 + 1
        
        if (r8_11 u>= rdx_11)
            rax = r9_16
        
        r10 = &r10[4]
        arg1[7] = rax
        i_1 -= 4
        arg1 = &arg1[8]
    while ((i_1 & 0xfffffffc) != 0)

if (i_1 == 0)
    return 

int32_t i

do
    int64_t r9_17 = *r10
    arg1 = &arg1[2]
    uint64_t r8_12 = zx.q(r9_17.d)
    r10 = &r10[1]
    uint64_t r9_18 = r9_17 u>> 0x20
    int64_t rdx_13 = zx.q(r8_12.d) * r9_18
    int64_t rdx_14 = rdx_13 << 0x21
    int64_t r9_20 = r9_18 * r9_18 + (rdx_13 u>> 0x1f)
    int64_t r8_14 = r8_12 * r8_12 + rdx_14
    arg1[-2] = r8_14
    rax = r9_20 + 1
    
    if (r8_14 u>= rdx_14)
        rax = r9_20
    
    arg1[-1] = rax
    i = i_1
    i_1 -= 1
while (i != 1)
