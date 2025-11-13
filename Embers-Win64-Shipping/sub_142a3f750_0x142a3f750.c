// 函数: sub_142a3f750
// 地址: 0x142a3f750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142a3fbc0(arg1, arg3)
sub_142a43f80(arg3[0xb] + 0xa0, arg1[9])

if (arg2 == 0 && arg1[8] == 0x400000)
    if (arg3[4] == 1 && arg3[8] == 0)
    label_142a3f7d0:
        
        if (arg1[1].b == 0 && sub_142a43d70(9) != 0)
            void* rax_6 = arg1[9]
            j_sub_142a423a0(rax_6 + arg1, arg1[8] - rax_6, arg3[0xb])
        
        arg1[2] = arg3[0xa]
        void* rcx_4 = arg3[0xb]
        arg3[8] += 1
        arg3[0xa] = arg1
        return j_sub_142a44ce0(rcx_4 + 0x1e0, 1) __tailcall
    
    int32_t rax_1 = sub_142a43b90(7)
    int64_t rcx_2 = arg3[8]
    int64_t r14_1 = sx.q(rax_1)
    bool cond:0_1 = rcx_2 u<= r14_1
    
    if (rcx_2 u< r14_1)
        if (rcx_2 u< (arg3[5] u>> 3) + 1)
            goto label_142a3f7d0
        
        cond:0_1 = rcx_2 u<= r14_1
    
    if (not(cond:0_1))
        do
            int64_t* rsi_1 = arg3[0xa]
            
            if (rsi_1 != 0)
                arg3[8] = rcx_2 - 1
                arg3[0xa] = rsi_1[2]
                rsi_1[2] = 0
                sub_142a43f80(arg3[0xb] + 0x1e0, 1)
                sub_142a3f8b0(rsi_1, rsi_1[8], arg3)
            
            rcx_2 = arg3[8]
        while (rcx_2 u> r14_1)

return sub_142a3f8b0(arg1, arg1[8], arg3) __tailcall
