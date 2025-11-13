// 函数: sub_141b4ceb0
// 地址: 0x141b4ceb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = arg1[1]
*arg1 = &data_14306cc40

if (sub_140a80f40() == 0)
    uint32_t rax_3
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_3.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_3.b == 0))
        void var_38
        void** rax_4 = sub_141b536a0(&var_38, nullptr, 0xff)
        *(*rax_4 + 0x10) = rbx
        void* rcx_7 = *rax_4
        int64_t* rsi_1 = *(rcx_7 + 0x20)
        
        if (rsi_1 != 0)
            rsi_1[9].d += 1
        
        sub_1405a5630(rcx_7, rax_4[1], rax_4[2].d, 1)
        
        if (rsi_1 != 0)
            rsi_1[9].d -= 1
            
            if (rsi_1[9].d == 1)
                sub_140a2f6e0(rsi_1)
    else
        void*** arg_8 = rbx
        sub_141b4b1e0(&arg_8)
else if (rbx != 0)
    *rbx = &data_14306cc30
    
    if (sub_140a80f40() == 0)
        sub_141997f50(&rbx[1])
    else
        rbx[1][6](&rbx[1])
    
    rbx[1] = &data_142dda848
    sub_1405d1550(&rbx[3])
    sub_1419948a0(&rbx[1])
    *rbx = &data_142d4ba00
    j_sub_140a74f90(rbx)

*arg1 = &data_142dd6680
arg1[1] = 0

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
