// 函数: sub_141901500
// 地址: 0x141901500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0x180) == arg3 && *(arg2 + 0x184) == arg4)
    return 

sub_1419a21e0(0)
int64_t var_48 = arg2
int32_t var_40_1 = arg3
int32_t var_3c_1 = arg4

if (sub_140a80f40() == 0)
    uint32_t rax_2
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_2.b == 0))
        void var_30
        int64_t* rax_3 = sub_1418f7ba0(&var_30, nullptr, 0xff)
        void* rcx_5 = *rax_3
        *(rcx_5 + 0x10) = var_48.o
        *(rcx_5 + 0x20) = arg5.q
        void* rcx_6 = *rax_3
        int32_t r8 = rax_3[2].d
        int64_t* rdx_4 = rax_3[1]
        int64_t* rbx_1 = *(rcx_6 + 0x30)
        int64_t* arg_10 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_10
        
        sub_140778000(rcx_6, rdx_4, r8, 1)
        
        if (rbx_1 != 0)
            int32_t rax_4 = *rdi_1
            *rdi_1 -= 1
            
            if (rax_4 == 1)
                sub_140a2f6e0(arg_10)
    else
        *(arg2 + 0x180) = arg3
        *(arg2 + 0x184) = arg4
        *(arg2 + 0x188) = arg5
        var_48.o = zx.o(0)
        sub_1418f8350(arg2, &var_48)
        *(arg2 + 0x18c) = 0
        sub_1418f7610(arg2, &var_48)
else
    *(arg2 + 0x180) = arg3
    *(arg2 + 0x184) = arg4
    *(arg2 + 0x188) = arg5
    int128_t var_58 = zx.o(0)
    sub_1418f8350(arg2, &var_58)
    *(arg2 + 0x18c) = 0
    sub_1418f7610(arg2, &var_58)

sub_1419a21e0(0)
