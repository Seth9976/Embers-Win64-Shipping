// 函数: sub_1414c0070
// 地址: 0x1414c0070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
void* var_30 = &arg1[2]
arg1[0x18] = 0
__builtin_memset(&arg1[0x19], 0, 0x18)
void* rdx = *arg1
void* var_38 = &arg1[0x18]
arg1[2].d = *(rdx + 0x24)
*(arg1 + 0x14) = *(rdx + 0x1c)
arg1[3].d = *(rdx + 0x20)
*(arg1 + 0x1c) = *(rdx + 0x38)
*(arg1 + 0x20) = *(rdx + 0x28)
*(arg1 + 0x30) = *(rdx + 0x3c)
arg1[8].d = *(rdx + 0x6c)
*(arg1 + 0x50) = *(rdx + 0x4c)
arg1[0xc].d = *(rdx + 0x70)
*(arg1 + 0x70) = *(rdx + 0x5c)
arg1[0x10].d = *(rdx + 0x84)
*(arg1 + 0x84) = *(rdx + 0x88)
arg1[0x11].d = *(rdx + 0x8c)
*(arg1 + 0x8c) = *(rdx + 0x90)
arg1[0x12].d = *(rdx + 0x94)
*(arg1 + 0xa0) = *(rdx + 0x74)
*(arg1 + 0xb0) = *(rdx + 0x98)

if (sub_140a80f40() == 0)
    uint32_t rax_14
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_14.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_14.b == 0))
        void var_28
        int64_t* rax_15 = sub_1414c9500(&var_28, nullptr, 0xff)
        *(*rax_15 + 0x10) = var_38.o
        void* rcx_7 = *rax_15
        int64_t* rsi_1 = *(rcx_7 + 0x28)
        
        if (rsi_1 != 0)
            rsi_1[9].d += 1
        
        sub_1405e48c0(rcx_7, rax_15[1], rax_15[2].d, 1)
        
        if (rsi_1 != 0)
            rsi_1[9].d -= 1
            
            if (rsi_1[9].d == 1)
                sub_140a2f6e0(rsi_1)
    else
        var_38.o = var_38.o
        sub_1414c20a0(&var_38)
else
    int64_t* rcx = data_143f0f180
    void* arg_8
    (*(*rcx + 0xf8))(rcx, &arg_8, &arg1[2], &data_143ee74e0, 2, 1)
    void* rax_13 = arg_8
    void* arg_10 = rax_13
    
    if (rax_13 != 0)
        *(rax_13 + 8) += 1
    
    sub_1405d1550(&arg_8)
    sub_1405d1600(&arg1[0x18], &arg_10)
    sub_1405d1550(&arg_10)

return arg1
