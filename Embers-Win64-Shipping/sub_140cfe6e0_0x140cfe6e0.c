// 函数: sub_140cfe6e0
// 地址: 0x140cfe6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = *(arg1[1] + 8)

if (rbp != 0)
    int64_t* r14_1 = *arg1
    int32_t rsi_1 = 0
    
    if (arg3 s< rbp)
        rsi_1 = arg3
    
    int32_t rbx_1 = rsi_1
    
    do
        void* r9_1 = arg1[1]
        
        if (rbx_1 s>= 0 && rbx_1 s< *(r9_1 + 0x28))
            void* rax_1 = *(r9_1 + 0x20)
            void* r8 = r9_1 + 0x10
            
            if (rax_1 != 0)
                r8 = rax_1
            
            int32_t rax_2 = rbx_1
            
            if (rbx_1 s< 0)
                rax_2 = rbx_1 + 0x1f
            
            if (test_bit(*(r8 + (sx.q(rax_2 s>> 5) << 2)), rbx_1 & 0x1f)
                    && (*(*r14_1 + 0x80))(r14_1, arg2, sx.q(arg1[4].d * rbx_1) + *r9_1, 0) != 0)
                return zx.q(rbx_1)
        
        int32_t rax_9 = rbx_1 + 1
        rbx_1 = 0
        
        if (rax_9 != rbp)
            rbx_1 = rax_9
    while (rbx_1 != rsi_1)

return 0xffffffff
