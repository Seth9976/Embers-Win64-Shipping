// 函数: sub_1413e9ab0
// 地址: 0x1413e9ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || arg3 == 0)
    return 

void* var_60_1 = arg2

if (sub_140a80f40() == 0)
    if (data_143f138f4 == 0)
        uint32_t rax_8
        
        if (data_143de5480 != 0)
            rax_8.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_8.b != 0)
            int128_t var_50 = arg1.o
            int64_t* var_40 = arg3
            sub_1413c99a0(&var_50)
            return sub_1419a21e0(0) __tailcall
    
    void var_38
    void** rax_10 = sub_1413db1e0(&var_38, nullptr, 0xff)
    void* rcx_6 = *rax_10
    *(rcx_6 + 0x10) = arg1.o
    *(rcx_6 + 0x20) = arg3
    void* rcx_7 = *rax_10
    int32_t r8_2 = rax_10[2].d
    int64_t* rdx_4 = rax_10[1]
    int64_t* rbx_2 = *(rcx_7 + 0x30)
    int64_t* arg_20 = rbx_2
    int32_t* rdi_2 = &rbx_2[9]
    
    if (rbx_2 != 0)
        *rdi_2 += 1
        rbx_2 = arg_20
    
    sub_140778000(rcx_7, rdx_4, r8_2, 1)
    
    if (rbx_2 != 0)
        int32_t rax_11 = *rdi_2
        *rdi_2 -= 1
        
        if (rax_11 == 1)
            sub_140a2f6e0(arg_20)
else
    void* rax_2 = *(arg2 + 0x3e8)
    
    if (rax_2 != 0)
        int64_t* i = *(*(rax_2 + 0x110) + 0xe0)
        
        if (i != 0)
            do
                int64_t rsi_1 = sx.q(arg3[1].d)
                int32_t rax_5 = (rsi_1 + 1).d
                int64_t rbp_1 = *(*(*i + 0x20) + 0x10)
                arg3[1].d = rax_5
                
                if (rax_5 s> *(arg3 + 0xc))
                    sub_1405a4d70(arg3)
                
                *(*arg3 + (rsi_1 << 3)) = rbp_1
                i = i[5]
            while (i != 0)
            
            return sub_1419a21e0(0) __tailcall

sub_1419a21e0(0)
