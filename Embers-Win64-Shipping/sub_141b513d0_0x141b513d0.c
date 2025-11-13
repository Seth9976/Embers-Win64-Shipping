// 函数: sub_141b513d0
// 地址: 0x141b513d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x38) == 0)
    return 

int64_t* rax_1 = j_sub_140a82f30(0x20)

if (rax_1 != 0)
    rax_1 = sub_141b4a820(rax_1, *(arg1 + 0x28), *(arg1 + 0x2c), *(arg1 + 0x30), arg1 + 8)

void* var_48 = arg1
int64_t* var_40_1 = rax_1

if (sub_140a80f40() == 0)
    uint32_t rax_3
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_3.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_3.b == 0))
        void var_28
        int64_t* rax_4 = sub_141b53940(&var_28, nullptr, 0xff)
        *(*rax_4 + 0x10) = var_48.o
        void* rcx_5 = *rax_4
        int32_t r8_2 = rax_4[2].d
        int64_t* rdx_5 = rax_4[1]
        int64_t* rbx_1 = *(rcx_5 + 0x28)
        int64_t* arg_10 = rbx_1
        int32_t* rsi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rsi_1 += 1
            rbx_1 = arg_10
        
        sub_1405e48c0(rcx_5, rdx_5, r8_2, 1)
        
        if (rbx_1 != 0)
            int32_t rax = *rsi_1
            *rsi_1 -= 1
            
            if (rax == 1)
                sub_140a2f6e0(arg_10)
    else
        int128_t var_38 = var_48.o
        sub_141b4b3f0(&var_38)
else
    sub_141b4b3f0(&var_48)

bool cond:1_1 = *(arg1 + 0x39) != 0
*(arg1 + 0x38) = 0

if (not(cond:1_1))
    return sub_140e0fda0(arg1) __tailcall
