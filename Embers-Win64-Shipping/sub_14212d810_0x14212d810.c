// 函数: sub_14212d810
// 地址: 0x14212d810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != arg1)
    if (*(arg1 + 0xd0) == 0)
        return 0
    
    char rax = data_143de5480
    int64_t rcx
    int64_t rbx_1
    
    if (rax == 0)
        rbx_1 = 0
        rcx = 0
    else
        rbx_1 = 0
        bool cond:0_1 = GetCurrentThreadId() != data_143de5470
        rax = data_143de5480
        rcx.b = cond:0_1
    
    if (*(rcx + arg1 + 0x13a) == 0)
        if (rax != 0)
            GetCurrentThreadId()
        
        int64_t rcx_1
        
        if (rax == 0 || data_143de5480 == 0)
            rcx_1 = 0
        else
            rcx_1.b = GetCurrentThreadId() != data_143de5470
        
        *(rcx_1 + arg1 + 0x13a) = 1
        int64_t* rcx_2 = *(arg1 + 0xd0)
        char rax_4 = (*(*rcx_2 + 0x278))(rcx_2, arg2)
        
        if (data_143de5480 != 0)
            rbx_1.b = GetCurrentThreadId() != data_143de5470
        
        *(rbx_1 + arg1 + 0x13a) = 0
        return zx.q(rax_4)

return 1
