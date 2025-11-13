// 函数: sub_142a869e0
// 地址: 0x142a869e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

if (*arg1 != 0)
    if (arg1[4] != 0 || arg1[5] != 0)
        int32_t rbp_1 = -1
        int64_t rbx_1 = -1
        
        while (true)
            int32_t r8_1 = *(arg1 + 0x34)
            int32_t rax_1 = rbp_1 + 1
            int64_t rcx = rbx_1 + 1
            rbx_1 = rcx
            
            if (rax_1 s>= r8_1)
                break
            
            int64_t r9_1 = *arg1
            int32_t* rdx_1 = r9_1 + rcx * 0x18
            
            while (*rdx_1 s< 0)
                rax_1 += 1
                rbx_1 += 1
                rdx_1 = &rdx_1[6]
                
                if (rax_1 s>= r8_1)
                    goto label_142a86a65
            
            rbp_1 = rax_1
            void* rsi_1 = r9_1 + sx.q(rax_1) * 0x18
            
            if (rsi_1 == 0)
                break
            
            int64_t rax_3 = arg1[4]
            
            if (rax_3 != 0)
                int64_t rcx_5 = *(rsi_1 + 0x10)
                
                if (rcx_5 != 0)
                    rax_3(rcx_5)
            
            int64_t rax_4 = arg1[5]
            
            if (rax_4 != 0)
                int64_t rcx_6 = *(rsi_1 + 8)
                
                if (rcx_6 != 0)
                    rax_4(rcx_6)
    
label_142a86a65:
    sub_142a7dcd0(*arg1)
    *arg1 = 0

if (*(arg1 + 0x49) != 0)
    sub_142a7dcd0(arg1)
