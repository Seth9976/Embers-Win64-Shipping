// 函数: sub_1423add40
// 地址: 0x1423add40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x54) != 0)
    return 

void* r8_1 = *(arg1 + 0x100)

if (r8_1 == 0)
    return 

void* rcx = *(arg2 + 8)

if (rcx == 0)
    return 

void* rax_1 = *(rcx + 0xe8)
void* arg_18 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1
    r8_1 = *(arg1 + 0x100)
    rcx = *(arg2 + 8)

int64_t rbx_1 = sx.q(*(arg1 + 8))
uint64_t rax_4 = 0

if (((*(r8_1 + 0x40) u>> 0x16).b & 1) == 0)
    rax_4 = zx.q(rbx_1.d)

int64_t r14_1 = sx.q(*(rcx + 0x60))
int64_t rsi_1 = rbx_1

if (rbx_1 s< r14_1)
    int32_t rbx_2 = rbx_1.d - rax_4.d
    
    do
        bool cond:3_1 = data_143de5480 == 0
        int64_t rbp_1 = data_143f5a510
        int32_t arg_8 = 0
        int64_t rdx
        
        if (cond:3_1)
            rdx = 0
        else
            rdx.b = GetCurrentThreadId().d != data_143de5470
        
        int64_t* rcx_1 = data_143f0f180
        rax_4.b = *(rbp_1 + (rdx << 2)) s> 0
        rax_4 = (*(*rcx_1 + 0x510))(rcx_1, &data_143f02b98, *(arg1 + 0x100), zx.q(rbx_2), 1, 
            &arg_8, 0, rax_4.b)
        void* rcx_2 = *(arg1 + 0x178)
        arg2 = arg1 + 0x108
        
        if (rcx_2 != 0)
            arg2 = rcx_2
        
        rbx_2 += 1
        *(arg2 + (rsi_1 << 3)) = rax_4
        rsi_1 += 1
    while (rsi_1 s< r14_1)

sub_1405d1550(&arg_18, arg2)
