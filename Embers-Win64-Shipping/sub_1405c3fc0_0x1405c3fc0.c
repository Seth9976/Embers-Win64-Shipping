// 函数: sub_1405c3fc0
// 地址: 0x1405c3fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t* rbx_1 = *(arg1 + 0x78)
void* r12_1 = arg2
int64_t rdi_1 = 0
uint64_t r15_2 = sx.q(*(arg1 + 0x80)) << 3 u>> 3

if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x80))])
    r15_2 = 0

if (r15_2 != 0)
    do
        int64_t* rsi_1 = *rbx_1
        
        if (rsi_1 != 0)
            int64_t rcx_1 = *sub_1405bc6e0(arg4)
            void* rax_4 = *(arg3 + 0x1f0)
            
            if (rax_4 != 0)
                *(rax_4 + 0x298) = rcx_1
            
            sub_1405b9e20(arg3, r12_1, rsi_1)
            r12_1 = *sub_1405bc6e0(arg4)
            int32_t rax_8 = (*arg4 + 1) & 0x80000001
            
            if (rax_8 s< 0)
                rax_8 = ((rax_8 - 1) | 0xfffffffe) + 1
            
            *arg4 = rax_8
        
        rbx_1 = &rbx_1[1]
        rdi_1 += 1
    while (rdi_1 != r15_2)

void* rax = *(arg3 + 0x1f0)

if (rax != 0)
    *(rax + 0x298) = 0
