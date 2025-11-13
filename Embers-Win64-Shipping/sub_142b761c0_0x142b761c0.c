// 函数: sub_142b761c0
// 地址: 0x142b761c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = sx.q(arg2)

if (*arg6 s> 0)
    return 0

char rax_1 = (*(arg1 + 0x18)).b
void* r15

if ((rax_1 & 0x11) == 0)
    r15 = arg1 + 0x1a
    
    if ((rax_1 & 2) == 0)
        r15 = *(arg1 + 0x28)
else
    r15 = nullptr

int16_t rax_2 = *(arg1 + 0x18)
int32_t rdx_1

if (rax_2 s< 0)
    rdx_1 = *(arg1 + 0x1c)
else
    rdx_1 = sx.d(rax_2) s>> 5

int16_t* rax_3 = sub_142b138d0(r15 + (r13 << 1), rdx_1 - r13.d)
int16_t rax_4 = *(arg1 + 0x18)
int32_t rsi_2 = ((rax_3 - r15) s>> 1).d
int32_t rax_6

if (rax_4 s< 0)
    rax_6 = *(arg1 + 0x1c)
else
    rax_6 = sx.d(rax_4) s>> 5

if (rsi_2 != rax_6)
    int16_t rcx_1 = *(arg1 + 0x18)
    int32_t rax_8
    
    if (rcx_1 s< 0)
        rax_8 = *(arg1 + 0x1c)
    else
        rax_8 = sx.d(rcx_1) s>> 5
    
    void* rcx_2
    
    if (rsi_2 u< rax_8)
        rcx_2 = arg1 + 0x1a
        
        if ((rcx_1.b & 2) == 0)
            rcx_2 = *(arg1 + 0x28)
    
    if (rsi_2 u>= rax_8 || *(rcx_2 + (sx.q(rsi_2) << 1)) != 0x7d)
        int32_t rax_10 = sub_142b77460(arg1, rsi_2)
        int32_t rbp_1 = rax_10
        int32_t rcx_5 = rax_10 - rsi_2
        
        if (rax_10 != rsi_2)
            while (true)
                if (rcx_5 s> 0xffff)
                    sub_142b77300(arg1, arg4, rsi_2)
                    *arg6 = 8
                    return 0
                
                sub_142b76460(arg1, rsi_2, rbp_1, 1, arg5, arg4, arg6)
                
                if (*arg6 s> 0)
                    return 0
                
                int32_t rax_11 = sub_142b77510(arg1, rbp_1)
                int16_t rax_12 = *(arg1 + 0x18)
                int32_t rcx_9
                
                if (rax_12 s< 0)
                    rcx_9 = *(arg1 + 0x1c)
                else
                    rcx_9 = sx.d(rax_12) s>> 5
                
                if (rax_11 == rcx_9)
                    break
                
                int16_t rax_13 = sub_142a4a1a0(arg1 + 0x10, rax_11)
                
                if (rax_13 != 0x23 && rax_13 != 0x3c && rax_13 != 0x2264)
                    break
                
                void* var_48_1
                var_48_1.d = 0
                sub_142b74dc0(arg1, 0xb, rax_11, 1, var_48_1.w, arg6)
                int32_t rax_14
                rax_14, arg5 = sub_142b766f0(arg1, rax_11 + 1, 0, arg3 + 1, 2, arg4, arg6)
                
                if (*arg6 s> 0)
                    return 0
                
                int16_t rax_15 = *(arg1 + 0x18)
                int32_t rcx_14
                
                if (rax_15 s< 0)
                    rcx_14 = *(arg1 + 0x1c)
                else
                    rcx_14 = sx.d(rax_15) s>> 5
                
                if (rax_14 != rcx_14)
                    if (sub_142a4a1a0(arg1 + 0x10, rax_14) != 0x7d)
                        int32_t rax_17 = sub_142b77510(arg1, rax_14 + 1)
                        rsi_2 = rax_17
                        int32_t rax_18 = sub_142b77460(arg1, rax_17)
                        rbp_1 = rax_18
                        rcx_5 = rax_18 - rsi_2
                        
                        if (rax_18 == rsi_2)
                            break
                        
                        continue
                    else if (arg3 s<= 0 && ***(arg1 + 0x50) != 0)
                        break
                
                return zx.q(rax_14)
        
        sub_142b77300(arg1, arg4, r13.d)
        *arg6 = 0x10107
        return 0

sub_142b77300(arg1, arg4, 0)
*arg6 = 0x10107
return 0
