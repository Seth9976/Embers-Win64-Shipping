// 函数: sub_14089c220
// 地址: 0x14089c220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142dfbdd8

if (arg1[0xd] != 0)
    uint32_t rax_1
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_1.b == 0))
        void var_38
        int64_t* rax_10 = sub_14089dae0(&var_38, nullptr, 0xff)
        int64_t* rcx_9 = arg1[9]
        *(*rax_10 + 0x10) = rcx_9
        
        if (rcx_9 != 0)
            int64_t rdx_5 = *rcx_9
            (*(rdx_5 + 8))(rcx_9, rdx_5)
        
        void* rcx_10 = *rax_10
        int64_t* rbx_3 = *(rcx_10 + 0x20)
        
        if (rbx_3 != 0)
            rbx_3[9].d += 1
        
        sub_14089f070(rcx_10, rax_10[1], rax_10[2].d, 1)
        
        if (rbx_3 != 0)
            rbx_3[9].d -= 1
            
            if (rbx_3[9].d == 1)
                sub_140a2f6e0(rbx_3)
    else
        int64_t* rbx_1 = arg1[9]
        
        if (rbx_1 != 0)
            (*(*rbx_1 + 8))(rbx_1)
        
        int64_t* arg_10 = nullptr
        int64_t* arg_8 = nullptr
        (*(*rbx_1 + 0x18))(rbx_1, &arg_10)
        int64_t* rsi_1 = arg_10
        int64_t* rcx_2 = arg_8
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x10))(rcx_2)
        
        (*(*rsi_1 + 0x140))(rsi_1, &arg_8)
        int64_t* rcx_4 = arg_8
        (*(*rcx_4 + 0x78))(rcx_4, rbx_1, 0)
        int64_t* rcx_5 = arg_8
        
        if (rcx_5 != 0)
            arg_8 = nullptr
            (*(*rcx_5 + 0x10))(rcx_5)
        
        int64_t* rcx_6 = arg_10
        
        if (rcx_6 != 0)
            arg_10 = nullptr
            (*(*rcx_6 + 0x10))(rcx_6)
        
        (*(*rbx_1 + 0x10))(rbx_1)

int64_t* rcx_12 = arg1[9]

if (rcx_12 != 0)
    arg1[9] = 0
    (*(*rcx_12 + 0x10))(rcx_12)

return sub_14089c5f0(arg1) __tailcall
