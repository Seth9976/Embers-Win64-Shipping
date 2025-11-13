// 函数: sub_141ea10a0
// 地址: 0x141ea10a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg3 == 0)
    return 

int32_t rbx_1 = 0
int32_t r12_1 = *(arg2 + 0x90)
int32_t r14_1 = *(arg1 + 8)
int32_t i = r14_1 - *(arg1 + 0x34)

if (r14_1 == *(arg1 + 0x34))
    return 

int32_t rbp_1 = 0
int32_t rsi_1 = 1

do
    if (rbx_1 s>= 0 && rbx_1 s< *(arg1 + 0x28))
        void* rax_1 = *(arg1 + 0x20)
        void* rcx = arg1 + 0x10
        
        if (rax_1 != 0)
            rcx = rax_1
        
        int32_t rax_2 = rbx_1
        
        if (rbx_1 s< 0)
            rax_2 = rbx_1 + 0x1f
        
        if ((*(rcx + (sx.q(rax_2 s>> 5) << 2)) & rsi_1) != 0)
            int64_t r8
            
            if (*(arg1 + 8) != *(arg1 + 0x34))
                r8 = sx.q(rbp_1) + *arg1
            else
                r8 = 0
            
            sub_1420c07d0(arg3, arg4, r8)
            i -= 1
    
    rbx_1 += 1
    rsi_1 = rol.d(rsi_1, 1)
    rbp_1 += r12_1
while (i != 0)
