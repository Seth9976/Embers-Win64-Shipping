// 函数: sub_1428fe660
// 地址: 0x1428fe660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r11 = zx.q(*arg1)
uint64_t r10 = zx.q(arg1[1])
char* rdi = arg4
uint64_t i_2 = arg2 u>> 3
int64_t rsi = arg3

if (i_2 != 0)
    uint64_t i
    
    do
        uint64_t r9 = zx.q((r11 + 1).b)
        int32_t r8 = arg1[r9 + 2]
        uint64_t r10_1 = zx.q(r8.b + r10.b)
        int32_t rcx = arg1[r10_1 + 2]
        arg1[r9 + 2] = rcx
        arg1[r10_1 + 2] = r8
        *rdi = arg1[zx.q(rcx.b + r8.b) + 2].b ^ *rsi
        uint64_t r9_1 = zx.q((r9 + 1).b)
        int32_t r8_1 = arg1[r9_1 + 2]
        uint64_t r10_2 = zx.q(r8_1.b + r10_1.b)
        int32_t rcx_2 = arg1[r10_2 + 2]
        arg1[r9_1 + 2] = rcx_2
        arg1[r10_2 + 2] = r8_1
        rdi[1] = arg1[zx.q(rcx_2.b + r8_1.b) + 2].b ^ *(rsi + 1)
        uint64_t r9_2 = zx.q((r9_1 + 1).b)
        int32_t r8_2 = arg1[r9_2 + 2]
        uint64_t r10_3 = zx.q(r8_2.b + r10_2.b)
        int32_t rcx_4 = arg1[r10_3 + 2]
        arg1[r9_2 + 2] = rcx_4
        arg1[r10_3 + 2] = r8_2
        rdi[2] = arg1[zx.q(rcx_4.b + r8_2.b) + 2].b ^ *(rsi + 2)
        uint64_t r9_3 = zx.q((r9_2 + 1).b)
        int32_t r8_3 = arg1[r9_3 + 2]
        uint64_t r10_4 = zx.q(r8_3.b + r10_3.b)
        int32_t rcx_6 = arg1[r10_4 + 2]
        arg1[r9_3 + 2] = rcx_6
        arg1[r10_4 + 2] = r8_3
        rdi[3] = arg1[zx.q(rcx_6.b + r8_3.b) + 2].b ^ *(rsi + 3)
        uint64_t r9_4 = zx.q((r9_3 + 1).b)
        int32_t r8_4 = arg1[r9_4 + 2]
        uint64_t r10_5 = zx.q(r8_4.b + r10_4.b)
        int32_t rcx_8 = arg1[r10_5 + 2]
        arg1[r9_4 + 2] = rcx_8
        arg1[r10_5 + 2] = r8_4
        rdi[4] = arg1[zx.q(rcx_8.b + r8_4.b) + 2].b ^ *(rsi + 4)
        uint64_t r9_5 = zx.q((r9_4 + 1).b)
        int32_t r8_5 = arg1[r9_5 + 2]
        uint64_t r10_6 = zx.q(r8_5.b + r10_5.b)
        int32_t rcx_10 = arg1[r10_6 + 2]
        arg1[r9_5 + 2] = rcx_10
        arg1[r10_6 + 2] = r8_5
        rdi[5] = arg1[zx.q(rcx_10.b + r8_5.b) + 2].b ^ *(rsi + 5)
        uint64_t r9_6 = zx.q((r9_5 + 1).b)
        int32_t r8_6 = arg1[r9_6 + 2]
        uint64_t r10_7 = zx.q(r8_6.b + r10_6.b)
        int32_t rcx_12 = arg1[r10_7 + 2]
        arg1[r9_6 + 2] = rcx_12
        arg1[r10_7 + 2] = r8_6
        rdi[6] = arg1[zx.q(rcx_12.b + r8_6.b) + 2].b ^ *(rsi + 6)
        r11 = zx.q((r9_6 + 1).b)
        int32_t r8_7 = arg1[r11 + 2]
        r10 = zx.q(r8_7.b + r10_7.b)
        int32_t rcx_14 = arg1[r10 + 2]
        arg1[r11 + 2] = rcx_14
        arg1[r10 + 2] = r8_7
        char rax = arg1[zx.q(rcx_14.b + r8_7.b) + 2].b ^ *(rsi + 7)
        rsi += 8
        rdi[7] = rax
        rdi = &rdi[8]
        i = i_2
        i_2 -= 1
    while (i != 1)

uint64_t rbx_1 = zx.q(arg2.d) & 7

if (rbx_1.d != 0)
    r11 = zx.q((r11 + 1).b)
    int32_t r8_8 = arg1[r11 + 2]
    r10 = zx.q(r8_8.b + r10.b)
    int32_t rcx_16 = arg1[r10 + 2]
    arg1[r11 + 2] = rcx_16
    arg1[r10 + 2] = r8_8
    *rdi = arg1[zx.q(rcx_16.b + r8_8.b) + 2].b ^ *rsi
    int64_t rbx_2 = rbx_1 - 1
    
    if (rbx_1 != 1)
        int64_t i_1
        
        do
            r11 = zx.q((r11 + 1).b)
            int32_t r8_9 = arg1[r11 + 2]
            r10 = zx.q(r8_9.b + r10.b)
            int32_t rcx_18 = arg1[r10 + 2]
            arg1[r11 + 2] = rcx_18
            arg1[r10 + 2] = r8_9
            rdi[1] = arg1[zx.q(rcx_18.b + r8_9.b) + 2].b ^ *(rsi + 1)
            
            if (rbx_2 == 1)
                break
            
            r11 = zx.q((r11 + 1).b)
            int32_t r8_10 = arg1[r11 + 2]
            r10 = zx.q(r8_10.b + r10.b)
            int32_t rcx_20 = arg1[r10 + 2]
            arg1[r11 + 2] = rcx_20
            arg1[r10 + 2] = r8_10
            rdi[2] = arg1[zx.q(rcx_20.b + r8_10.b) + 2].b ^ *(rsi + 2)
            
            if (rbx_2 == 2)
                break
            
            r11 = zx.q((r11 + 1).b)
            int32_t r8_11 = arg1[r11 + 2]
            r10 = zx.q(r8_11.b + r10.b)
            int32_t rcx_22 = arg1[r10 + 2]
            arg1[r11 + 2] = rcx_22
            arg1[r10 + 2] = r8_11
            rdi[3] = arg1[zx.q(rcx_22.b + r8_11.b) + 2].b ^ *(rsi + 3)
            
            if (rbx_2 == 3)
                break
            
            r11 = zx.q((r11 + 1).b)
            int32_t r8_12 = arg1[r11 + 2]
            r10 = zx.q(r8_12.b + r10.b)
            int32_t rcx_24 = arg1[r10 + 2]
            arg1[r11 + 2] = rcx_24
            arg1[r10 + 2] = r8_12
            rdi[4] = arg1[zx.q(rcx_24.b + r8_12.b) + 2].b ^ *(rsi + 4)
            
            if (rbx_2 == 4)
                break
            
            r11 = zx.q((r11 + 1).b)
            int32_t r8_13 = arg1[r11 + 2]
            r10 = zx.q(r8_13.b + r10.b)
            int32_t rcx_26 = arg1[r10 + 2]
            arg1[r11 + 2] = rcx_26
            arg1[r10 + 2] = r8_13
            rdi[5] = arg1[zx.q(rcx_26.b + r8_13.b) + 2].b ^ *(rsi + 5)
            
            if (rbx_2 == 5)
                break
            
            r11 = zx.q((r11 + 1).b)
            int32_t r8_14 = arg1[r11 + 2]
            r10 = zx.q(r8_14.b + r10.b)
            int32_t rcx_28 = arg1[r10 + 2]
            arg1[r11 + 2] = rcx_28
            arg1[r10 + 2] = r8_14
            rdi[6] = arg1[zx.q(rcx_28.b + r8_14.b) + 2].b ^ *(rsi + 6)
            i_1 = rbx_2 - 6
            
            if (rbx_2 == 6)
                break
            
            r11 = zx.q((r11 + 1).b)
            int32_t r8_15 = arg1[r11 + 2]
            r10 = zx.q(r8_15.b + r10.b)
            int32_t rcx_30 = arg1[r10 + 2]
            arg1[r11 + 2] = rcx_30
            arg1[r10 + 2] = r8_15
            *rdi = arg1[zx.q(rcx_30.b + r8_15.b) + 2].b ^ *rsi
            rbx_2 = i_1 - 1
        while (i_1 != 1)

*arg1 = r11.d
arg1[1] = r10.d
