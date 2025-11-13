// 函数: sub_141781630
// 地址: 0x141781630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int64_t r8_1 = sx.q(arg2) << 4
int64_t* rbx_1 = *(arg1 + 0x28) + r8_1
int64_t* rbp_1 = *(*(arg1 + 0x18) + 0x98) + r8_1
int32_t rax_1 = *(rbx_1 + 0xc)
rbx_1[1].d = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_1405c5570(rbx_1, 0)
    rax_1 = *(rbx_1 + 0xc)

int32_t rcx_2 = rbp_1[1].d

if (rcx_2 s> rax_1)
    sub_1405c5570(rbx_1, rcx_2)
    rcx_2 = rbp_1[1].d

int32_t* rbp_2 = *rbp_1
uint64_t result = &rbp_2[sx.q(rcx_2)]
uint64_t r15_1 = sx.q(rcx_2) << 2 u>> 2

if (rbp_2 u> result)
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t rdx_1 = sx.q(*rbp_2) * 3
        int64_t rcx_3 = *(*(arg1 + 0x18) + 0x18)
        result = zx.q(*(arg1 + 0x20))
        
        if (*(rcx_3 + (rdx_1 << 3) + 8) == result.d)
            int64_t rdi_1 = sx.q(rbx_1[1].d)
            int64_t r14_1 = *(rcx_3 + (rdx_1 << 3) + 0x10)
            int32_t rax_5 = (rdi_1 + 1).d
            rbx_1[1].d = rax_5
            
            if (rax_5 s> *(rbx_1 + 0xc))
                sub_1405a4d70(rbx_1)
            
            result = *rbx_1
            *(result + (rdi_1 << 3)) = r14_1
        
        rbp_2 = &rbp_2[1]
        rsi += 1
    while (rsi != r15_1)

return result
