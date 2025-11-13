// 函数: sub_1423bacb0
// 地址: 0x1423bacb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0xa]
*arg1 = &data_14333b538

if (sub_140a80f40() == 0)
    if (data_143f138f4 == 0)
        if (data_143de5480 == 0)
            goto label_1423bace9
        
        uint32_t rax_2
        rax_2.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_2.b != 0)
            goto label_1423bace9
        
        goto label_1423bad36
    
label_1423bad36:
    void var_38
    void** rax_3 = sub_140750a40(&var_38, nullptr, 0xff)
    *(*rax_3 + 0x10) = rbx
    void* rcx_3 = *rax_3
    int32_t r8_1 = rax_3[2].d
    int64_t* rdx_1 = rax_3[1]
    int64_t* rbx_1 = *(rcx_3 + 0x20)
    int64_t* arg_10 = rbx_1
    int32_t* rsi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rsi_1 += 1
        rbx_1 = arg_10
    
    sub_1405a5630(rcx_3, rdx_1, r8_1, 1)
    
    if (rbx_1 != 0)
        int32_t rax_4 = *rsi_1
        *rsi_1 -= 1
        
        if (rax_4 == 1)
            sub_140a2f6e0(arg_10)
else
label_1423bace9:
    
    if (rbx != 0)
        (**rbx)(rbx, 1)

int32_t i = 0

if (arg1[0x1c].d s> 0)
    int64_t rsi_2 = 0
    
    do
        void* rdx_2 = arg1[0x1b]
        void* rax_5 = &arg1[0xd]
        
        if (rdx_2 != 0)
            rax_5 = rdx_2
        
        int64_t rcx_5 = *(rax_5 + rsi_2)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
            rdx_2 = arg1[0x1b]
        
        void* rax_6 = &arg1[0xd]
        
        if (rdx_2 != 0)
            rax_6 = rdx_2
        
        i += 1
        *(rax_6 + rsi_2) = 0
        rsi_2 += 8
    while (i s< arg1[0x1c].d)

sub_1405d1550(&arg1[0x1d])
int64_t rcx_7 = arg1[0x1b]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

*arg1 = &data_142e09230
sub_1405d1550(&arg1[4])
sub_1405d1550(&arg1[3])
sub_1405d1550(&arg1[2])
return sub_1419948a0(arg1) __tailcall
