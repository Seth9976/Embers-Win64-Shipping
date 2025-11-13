// 函数: sub_1423adeb0
// 地址: 0x1423adeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x100)

if (rcx == 0)
    return 

void* r8_1 = *(arg2 + 8)

if (r8_1 == 0)
    return 

void* rax_1 = *(r8_1 + 0xe8)
void* arg_8 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1
    rcx = *(arg1 + 0x100)
    r8_1 = *(arg2 + 8)

int64_t rdi_1 = sx.q(*(arg1 + 8))
int32_t rax_4 = 0

if (((*(rcx + 0x40) u>> 0x16).b & 1) == 0)
    rax_4 = rdi_1.d

int64_t rbp_1 = sx.q(*(r8_1 + 0x60))
int64_t rbx_1 = rdi_1

if (rdi_1 s< rbp_1)
    int32_t rdi_2 = rdi_1.d - rax_4
    
    do
        void* rcx_1 = *(arg1 + 0x178)
        void* rax_5 = arg1 + 0x108
        
        if (rcx_1 != 0)
            rax_5 = rcx_1
        
        if (*(rax_5 + (rbx_1 << 3)) != 0)
            int64_t r14_1 = data_143f5a510
            int64_t rdx
            
            if (data_143de5480 == 0)
                rdx = 0
            else
                rdx.b = GetCurrentThreadId().d != data_143de5470
            
            int64_t* rcx_2 = data_143f0f180
            rax_5.b = *(r14_1 + (rdx << 2)) s> 0
            (*(*rcx_2 + 0x518))(rcx_2, &data_143f02b98, *(arg1 + 0x100), zx.q(rdi_2), 0, rax_5.b)
            void* rax_6 = *(arg1 + 0x178)
            void* rcx_3 = arg1 + 0x108
            
            if (rax_6 != 0)
                rcx_3 = rax_6
            
            *(rcx_3 + (rbx_1 << 3)) = 0
        
        rdi_2 += 1
        rbx_1 += 1
    while (rbx_1 s< rbp_1)

sub_1405d1550(&arg_8)
