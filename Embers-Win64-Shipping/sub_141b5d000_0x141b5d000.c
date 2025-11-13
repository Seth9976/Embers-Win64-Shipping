// 函数: sub_141b5d000
// 地址: 0x141b5d000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 0x10)

if (rbp == 0)
    return 

void* rcx = *(rbp + 0xa0)
void* rdi = rbp

if (rcx != 0)
    rdi = rcx

int64_t rsi = 0
int64_t r14 = sx.q(*(rbp + 0xa8)) << 3
uint64_t r14_1 = r14 u>> 3

if (rdi u> r14 + rdi)
    r14_1 = 0

if (r14_1 != 0)
    do
        void* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            sub_141b4ae20(rbx_1)
            j_sub_140a74f90(rbx_1)
        
        rdi += 8
        rsi += 1
    while (rsi != r14_1)
    
    rcx = *(rbp + 0xa0)

if (rcx != 0)
    sub_140a74f90(rcx)

return j_sub_140a74f90(rbp) __tailcall
