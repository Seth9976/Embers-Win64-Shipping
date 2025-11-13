// 函数: sub_142120460
// 地址: 0x142120460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x1d].d = 0

if (*(arg1 + 0xec) != 0)
    sub_140991380(&arg1[0x1c], 0)

arg1[0x1f].d = 0

if (*(arg1 + 0xfc) != 0)
    sub_1405a5220(&arg1[0x1e], 0)

if (arg2 != 0)
    arg1[0x21].d = 0
    
    if (*(arg1 + 0x10c) != 0)
        sub_1405c5660(&arg1[0x20], 0)
    
    arg1[0x23].d = 0
    
    if (*(arg1 + 0x11c) != 0)
        sub_1405c5660(&arg1[0x22], 0)
    
    arg1[0x25].d = 0
    
    if (*(arg1 + 0x12c) != 0)
        sub_1405a5220(&arg1[0x24], 0)

int64_t rbx_1 = arg1[0x28]

if (rbx_1 != 0)
    int64_t arg_18 = rbx_1
    
    if (sub_140a80f40() != 0)
        sub_14211c730(&arg_18)
        return sub_142129e50(arg1) __tailcall
    
    if (data_143f138f4 == 0)
        uint32_t rax_3
        
        if (data_143de5480 != 0)
            rax_3.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_3.b != 0)
            int64_t arg_20 = rbx_1
            sub_14211c730(&arg_20)
            return sub_142129e50(arg1) __tailcall
    
    void var_38
    int64_t* rax_5 = sub_142122570(&var_38, nullptr, 0xff)
    *(*rax_5 + 0x10) = rbx_1
    void* rcx_13 = *rax_5
    int32_t r8_3 = rax_5[2].d
    int64_t* rdx_4 = rax_5[1]
    int64_t* rbx_2 = *(rcx_13 + 0x20)
    int64_t* arg_8 = rbx_2
    int32_t* rsi_1 = &rbx_2[9]
    
    if (rbx_2 != 0)
        *rsi_1 += 1
        rbx_2 = arg_8
    
    sub_1405a5630(rcx_13, rdx_4, r8_3, 1)
    
    if (rbx_2 != 0)
        int32_t rax_6 = *rsi_1
        *rsi_1 -= 1
        
        if (rax_6 == 1)
            sub_140a2f6e0(arg_8)

return sub_142129e50(arg1) __tailcall
