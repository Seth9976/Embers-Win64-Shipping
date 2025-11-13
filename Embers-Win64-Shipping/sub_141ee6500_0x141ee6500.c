// 函数: sub_141ee6500
// 地址: 0x141ee6500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg1 + 0x90)
void* r14_2 = &rsi[sx.q(*(arg1 + 0x98)) * 4]

if (rsi == r14_2)
    return 

void* rbx_1 = &rsi[3]

do
    int64_t var_70_1 = 0
    int64_t var_68_1 = 0
    int16_t var_48_1 = 0
    int64_t rdi_1
    
    if ((*(rbx_1 - 4) | *(rbx_1 + 4) | *rbx_1 | *(rbx_1 - 8)) == 0)
        rdi_1 = *(rbx_1 - 0x10)
    else
        int64_t arg_18 = 0
        rdi_1 = 0
    
    int64_t var_60_1 = rdi_1
    int128_t var_58_1 = *(rbx_1 - 8)
    int64_t var_78 = *rsi
    int64_t* rax_6 = sub_141ed1650(&var_78, nullptr)
    int64_t* rbp_1 = rax_6
    
    if (rax_6 == 0)
        int64_t rcx_1 = *(rbx_1 - 0x10)
        
        if (rdi_1 != rcx_1)
            int64_t var_60_2 = rcx_1
            rbp_1 = sub_141ed1650(&var_78, nullptr)
    
    if (var_70_1 != 0)
        sub_140a74f90(var_70_1)
    
    int64_t* arg_20 = rbp_1
    void arg_8
    sub_140812a70(arg2, &arg_8, &arg_20, nullptr)
    rsi = &rsi[4]
    rbx_1 += 0x20
while (rsi != r14_2)
