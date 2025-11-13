// 函数: sub_1423b6d90
// 地址: 0x1423b6d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10) == 0)
    return 

if (data_143de5480 != 0)
    GetCurrentThreadId()

void* rax_1 = *(arg1 + 0x50)
void* rbx_1 = arg1 + 0x18

if (rax_1 != 0)
    rbx_1 = rax_1

int64_t rbp_1 = 0
int64_t r12_1 = sx.q(*(arg1 + 0x58)) << 2
uint64_t r12_2 = r12_1 u>> 2

if (rbx_1 u> rbx_1 + r12_1)
    r12_2 = 0

if (r12_2 != 0)
    do
        int32_t rdi_1 = *rbx_1
        int64_t rsi_1 = data_143f5a510
        int64_t rdx_1
        
        if (data_143de5480 == 0)
            rdx_1 = 0
        else
            rdx_1.b = GetCurrentThreadId().d != data_143de5470
        
        int64_t* rcx = data_143f0f180
        void* rax
        rax.b = *(rsi_1 + (rdx_1 << 2)) s> 0
        (*(*rcx + 0x518))(rcx, &data_143f02b98, *(arg1 + 0x10), zx.q(rdi_1), 0, rax.b)
        rbx_1 += 4
        rbp_1 += 1
    while (rbp_1 != r12_2)

bool cond:2_1 = *(arg1 + 0x5c) == 0
*(arg1 + 0x58) = 0

if (not(cond:2_1))
    sub_1423b4f30(arg1 + 0x18, 0)
