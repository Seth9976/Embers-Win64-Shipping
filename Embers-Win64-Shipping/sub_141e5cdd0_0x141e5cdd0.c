// 函数: sub_141e5cdd0
// 地址: 0x141e5cdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1[1].d
arg2[1].d = 0

if (rdx s> *(arg2 + 0xc))
    sub_1405947f0(arg2, rdx)

int64_t rbp = 0
int64_t* r14 = *arg1
uint64_t result = &r14[arg1[1]]
uint64_t r12_1 = sx.q(arg1[1].d) << 3 u>> 3

if (r14 u> result)
    r12_1 = 0

if (r12_1 != 0)
    do
        int32_t arg_10
        sub_14093f560(&arg1[4], &arg_10, *r14)
        int64_t rax_1 = sx.q(arg_10)
        void* const rax_4
        
        if (rax_1.d == 0xffffffff)
            rax_4 = nullptr
        else
            rax_4 = rax_1 * 0x30 + arg1[4]
        
        int16_t* rcx_2 = rax_4 + 8
        
        if (rax_4 == 0)
            rcx_2 = nullptr
        
        int16_t rsi_1
        
        if (rcx_2 == 0)
            int16_t arg_8 = 0
            rsi_1 = 0
        else
            rsi_1 = *rcx_2
        
        int64_t rdi_1 = sx.q(arg2[1].d)
        int32_t rax_5 = (rdi_1 + 1).d
        arg2[1].d = rax_5
        
        if (rax_5 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        result = *arg2
        r14 = &r14[1]
        rbp += 1
        *(result + (rdi_1 << 1)) = rsi_1
    while (rbp != r12_1)

return result
