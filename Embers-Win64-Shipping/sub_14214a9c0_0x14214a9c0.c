// 函数: sub_14214a9c0
// 地址: 0x14214a9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_2

if (*arg1 != 0)
    int64_t* rcx_1 = *arg3
    
    if (rcx_1 != 0)
        rax_2 = (*(*rcx_1 + 0x70))(rcx_1, arg1, arg4, arg3)
    
    if (rcx_1 == 0 || rax_2.b == 0)
        int64_t rbx_1 = 0
        bool cond:1_1 = data_143de5480 == 0
        int64_t r15_1 = data_143f4ca00
        void* const arg_8 = nullptr
        
        if (not(cond:1_1))
            rbx_1.b = GetCurrentThreadId() != data_143de5470
        
        int64_t* rcx = arg3[1]
        
        if (*(r15_1 + (rbx_1 << 2)) == 1)
            int64_t* rax_5 = (*(*rcx + 0x348))(rcx)
            
            if (rax_5 != 0 && (*(*rax_5 + 0x338))(rax_5, arg1, &arg_8, 0) != 0)
                void* const rax_7 = arg_8
                *arg4 = rax_7
                return rax_7
            
            rcx = arg3[1]
        
        rax_2 = sub_1421368e0(rcx, arg2)
        *arg4 = rax_2
else
    rax_2 = sub_1421368e0(arg3[1], arg2)
    *arg4 = rax_2

return rax_2
