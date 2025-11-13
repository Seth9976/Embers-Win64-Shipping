// 函数: sub_142b3fa00
// 地址: 0x142b3fa00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg3)
    *arg4 = 1
    return 0

int64_t r12 = sx.q(*(arg3 + 0x84))

if (r12.d == 0)
    return 0

int32_t rax_2 = sub_142b40440(arg1, arg2, r12.d, arg4)

if (*arg4 s<= 0)
    int32_t rbp_1 = 0
    
    if (r12.d s> 0)
        int64_t rax_3 = sx.q(rax_2)
        int64_t arg_8 = rax_3 * 2
        int64_t arg_18 = 0
        int64_t rdx_2
        
        do
            void* rsi_1
            
            if (*arg3 == 0)
                rsi_1 = &arg3[8]
            else
                rsi_1 = *(arg3 + 8)
            
            int64_t rbx_1 = sx.q(*(arg3 + 0x80) + rbp_1)
            int16_t* rax_7 = sub_142b3f8b0(arg1)
            *(rax_7 + arg_8) = *(rsi_1 + (rbx_1 << 1))
            void* rsi_2
            
            if (*arg3 == 0)
                rsi_2 = &arg3[0x58]
            else
                rsi_2 = *(arg3 + 0x58)
            
            int64_t rbx_2 = sx.q(*(arg3 + 0x80) + rbp_1)
            rbp_1 += 1
            void* rax_11 = sub_142b3f8c0(arg1) + rax_3
            arg_8 += 2
            *(rax_11 + arg_18) = *(rbx_2 + rsi_2)
            rdx_2 = arg_18 + 1
            arg_18 = rdx_2
        while (rdx_2 s< r12)

return zx.q(r12.d)
