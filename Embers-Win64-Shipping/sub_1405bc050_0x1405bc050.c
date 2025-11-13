// 函数: sub_1405bc050
// 地址: 0x1405bc050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x500)

if (rcx != 0)
    sub_1405c2450(rcx, arg1, *(arg1 + 0x2e0) | 0x20)

sub_1405b8d80(arg1 + 0x458, *(arg1 + 0x2e0) | 0x20)
sub_1405b8890(arg1 + 0x4b0, 0)
int64_t* rbx = *(arg1 + 0x318)
int64_t rdi = 0
uint64_t r14_1 = sx.q(*(arg1 + 0x320)) << 3 u>> 3

if (rbx u> &rbx[sx.q(*(arg1 + 0x320))])
    r14_1 = 0

if (r14_1 != 0)
    do
        void* rax_2 = *rbx
        
        if (rax_2 != 0)
            void* arg_8 = rax_2 + 0x458
            int64_t arg_10 = *(rax_2 + 0x308)
            sub_1405a7520(arg1 + 0x4b0, &arg_10, &arg_8)
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != r14_1)

void* result = *(arg1 + 0x240)

if (result != 0)
    *(result + 0xb8) = 0

return result
