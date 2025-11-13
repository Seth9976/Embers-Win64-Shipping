// 函数: sub_140b566b0
// 地址: 0x140b566b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = arg2
int64_t rbp = *(arg3 + 0x20)
int64_t* rsi = arg1
int64_t arg_10 = rbp
int32_t rax_1 = (*(arg3 + 0x38))(arg3, *(*arg1 + 0x10) + 0x38)
uint64_t result = sub_140b56010(rsi, rax_1)

if (arg4 != 0)
    int32_t rdi_2 = neg.d(rax_1)
    int32_t arg_20 = rdi_2
    uint64_t i_1 = zx.q(arg4)
    uint64_t i
    
    do
        rbp(rsi, r15, arg3, arg3)
        void* rbp_1 = *rsi
        int64_t rbx_1 = sx.q(*(rbp_1 + 0x30))
        int32_t rcx_5 = (rax_1 - 1 + *(rbp_1 + 0x30)) & rdi_2
        
        if (rcx_5 s> rbx_1.d)
            *(rbp_1 + 0x30) = rcx_5
            
            if (rcx_5 s> *(rbp_1 + 0x34))
                sub_1405daba0(rbp_1 + 0x28)
            
            memset(rbx_1 + *(rbp_1 + 0x28), 0, sx.q(rcx_5 - rbx_1.d))
            rsi = arg1
        else if (rcx_5 s< rbx_1.d)
            int32_t rax_2 = rbx_1.d
            
            if (rax_2 != rcx_5)
                *(rbp_1 + 0x30) = rbx_1.d - (rax_2 - rcx_5)
                sub_1405dac10(rbp_1 + 0x28)
        
        int32_t rcx_10 = rax_1
        rdi_2 = arg_20
        
        if (*(rbp_1 + 0x7c) u>= rax_1)
            rcx_10 = *(rbp_1 + 0x7c)
        
        *(rbp_1 + 0x7c) = rcx_10
        result = zx.q(*(arg3 + 0x58))
        rbp = arg_10
        r15 += result
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
