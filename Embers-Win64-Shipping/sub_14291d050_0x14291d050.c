// 函数: sub_14291d050
// 地址: 0x14291d050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0
int32_t i_1 = arg3
int64_t* r14 = arg2

if (arg3 s<= 0)
    return 0

uint64_t rsi = zx.q(arg4.d)
uint64_t rbx_1 = arg4 u>> 0x20

if ((arg3 & 0xfffffffc) != 0)
    do
        int64_t r8 = *r14
        uint64_t r10_1 = zx.q(r8.d)
        uint64_t r8_1 = r8 u>> 0x20
        int64_t rax_3 = r8_1 * rsi
        int64_t r8_2 = r8_1 * rbx_1
        int64_t r9_2 = zx.q(r10_1.d) * rbx_1 + rax_3
        int64_t rdx = r8_2 + 0x100000000
        
        if (r9_2 u>= rax_3)
            rdx = r8_2
        
        int64_t rdx_1 = rdx + (r9_2 u>> 0x20)
        int64_t r9_3 = r9_2 << 0x20
        int64_t rax_6 = rdx_1 + 1
        int64_t r10_3 = r10_1 * rsi + r9_3
        
        if (r10_3 u>= r9_3)
            rax_6 = rdx_1
        
        int64_t r8_3 = r10_3 + result
        int64_t rdx_2 = rax_6 + 1
        
        if (r8_3 u>= result)
            rdx_2 = rax_6
        
        int64_t r8_4 = r8_3 + *arg1
        bool cond:2_1 = r8_4 u>= *arg1
        *arg1 = r8_4
        int64_t r8_5 = r14[1]
        int64_t r11 = rdx_2 + 1
        uint64_t r10_4 = zx.q(r8_5.d)
        
        if (cond:2_1)
            r11 = rdx_2
        
        uint64_t r8_6 = r8_5 u>> 0x20
        int64_t rax_8 = r8_6 * rsi
        int64_t r8_7 = r8_6 * rbx_1
        int64_t r9_6 = zx.q(r10_4.d) * rbx_1 + rax_8
        int64_t rdx_3 = r8_7 + 0x100000000
        
        if (r9_6 u>= rax_8)
            rdx_3 = r8_7
        
        int64_t rdx_4 = rdx_3 + (r9_6 u>> 0x20)
        int64_t r9_7 = r9_6 << 0x20
        int64_t rax_11 = rdx_4 + 1
        int64_t r10_6 = r10_4 * rsi + r9_7
        
        if (r10_6 u>= r9_7)
            rax_11 = rdx_4
        
        int64_t r8_8 = r10_6 + r11
        int64_t rdx_5 = rax_11 + 1
        
        if (r8_8 u>= r11)
            rdx_5 = rax_11
        
        int64_t r8_9 = r8_8 + arg1[1]
        bool cond:5_1 = r8_9 u>= arg1[1]
        arg1[1] = r8_9
        int64_t r8_10 = r14[2]
        int64_t r11_1 = rdx_5 + 1
        uint64_t r10_7 = zx.q(r8_10.d)
        
        if (cond:5_1)
            r11_1 = rdx_5
        
        uint64_t r8_11 = r8_10 u>> 0x20
        int64_t rax_13 = r8_11 * rsi
        int64_t r8_12 = r8_11 * rbx_1
        int64_t r9_10 = zx.q(r10_7.d) * rbx_1 + rax_13
        int64_t rdx_6 = r8_12 + 0x100000000
        
        if (r9_10 u>= rax_13)
            rdx_6 = r8_12
        
        int64_t rdx_7 = rdx_6 + (r9_10 u>> 0x20)
        int64_t r9_11 = r9_10 << 0x20
        int64_t rax_16 = rdx_7 + 1
        int64_t r10_9 = r10_7 * rsi + r9_11
        
        if (r10_9 u>= r9_11)
            rax_16 = rdx_7
        
        int64_t r8_13 = r10_9 + r11_1
        int64_t rdx_8 = rax_16 + 1
        
        if (r8_13 u>= r11_1)
            rdx_8 = rax_16
        
        int64_t r8_14 = r8_13 + arg1[2]
        bool cond:8_1 = r8_14 u>= arg1[2]
        arg1[2] = r8_14
        int64_t r8_15 = r14[3]
        int64_t r11_2 = rdx_8 + 1
        uint64_t r10_10 = zx.q(r8_15.d)
        
        if (cond:8_1)
            r11_2 = rdx_8
        
        uint64_t r8_16 = r8_15 u>> 0x20
        int64_t rax_18 = r8_16 * rsi
        int64_t r8_17 = r8_16 * rbx_1
        int64_t r9_14 = zx.q(r10_10.d) * rbx_1 + rax_18
        int64_t rdx_9 = r8_17 + 0x100000000
        
        if (r9_14 u>= rax_18)
            rdx_9 = r8_17
        
        int64_t result_5 = rdx_9 + (r9_14 u>> 0x20)
        int64_t r9_15 = r9_14 << 0x20
        int64_t result_3 = result_5 + 1
        int64_t r10_12 = r10_10 * rsi + r9_15
        
        if (r10_12 u>= r9_15)
            result_3 = result_5
        
        int64_t r8_18 = r10_12 + r11_2
        int64_t result_1 = result_3 + 1
        
        if (r8_18 u>= r11_2)
            result_1 = result_3
        
        int64_t r8_19 = r8_18 + arg1[3]
        bool cond:11_1 = r8_19 u>= arg1[3]
        arg1[3] = r8_19
        result = result_1 + 1
        
        if (cond:11_1)
            result = result_1
        
        r14 = &r14[4]
        arg1 = &arg1[4]
        i_1 -= 4
    while ((i_1 & 0xfffffffc) != 0)

if (i_1 != 0)
    void* r14_1 = r14 - arg1
    int32_t i
    
    do
        int64_t r8_20 = *(r14_1 + arg1)
        arg1 = &arg1[1]
        uint64_t r10_13 = zx.q(r8_20.d)
        uint64_t r8_21 = r8_20 u>> 0x20
        int64_t rax_22 = r8_21 * rsi
        int64_t r8_22 = r8_21 * rbx_1
        int64_t r9_18 = zx.q(r10_13.d) * rbx_1 + rax_22
        int64_t rdx_10 = r8_22 + 0x100000000
        
        if (r9_18 u>= rax_22)
            rdx_10 = r8_22
        
        int64_t r9_19 = r9_18 << 0x20
        int64_t result_6 = rdx_10 + (r9_18 u>> 0x20)
        int64_t result_4 = result_6 + 1
        int64_t r10_15 = r10_13 * rsi + r9_19
        
        if (r10_15 u>= r9_19)
            result_4 = result_6
        
        int64_t r9_20 = r10_15 + result
        int64_t result_2 = result_4 + 1
        
        if (r9_20 u>= result)
            result_2 = result_4
        
        int64_t r9_21 = r9_20 + arg1[-1]
        bool cond:14_1 = r9_21 u>= arg1[-1]
        arg1[-1] = r9_21
        result = result_2 + 1
        
        if (cond:14_1)
            result = result_2
        
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
