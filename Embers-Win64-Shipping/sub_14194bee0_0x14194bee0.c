// 函数: sub_14194bee0
// 地址: 0x14194bee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r14 = -ffffffffffffffff
int64_t rsi = -1

do
    rsi += 1
while (arg2[rsi] != 0)

do
    r14 = &r14[1]
while (r14[arg3] != 0)

char* i = strstr(*arg1, arg2)
int32_t rbp = i.d

if (i != 0)
    int64_t rax = sx.q(r14.d)
    
    do
        int32_t rbp_1 = rbp - *arg1
        
        if (rsi.d != 0)
            int32_t rax_1 = arg1[1].d
            int32_t rcx_2 = rax_1 - rbp_1
            
            if (rcx_2 != rsi.d)
                memmove(&(*arg1)[sx.q(rbp_1)], &(*arg1)[sx.q(rsi.d + rbp_1)], rcx_2 - rsi.d)
                rax_1 = arg1[1].d
            
            arg1[1].d = rax_1 - rsi.d
            sub_1405dac10(arg1)
        
        int32_t r15_1 = arg1[1].d
        int32_t rax_4 = r15_1 + r14.d
        arg1[1].d = rax_4
        
        if (rax_4 s> *(arg1 + 0xc))
            sub_1405daba0(arg1)
        
        int64_t rdi_1 = sx.q(rbp_1)
        void* rdx_4 = &(*arg1)[rdi_1]
        memmove(rax + rdx_4, rdx_4, r15_1 - rbp_1)
        memcpy(&(*arg1)[rdi_1], arg3, rax.d)
        i = strstr(&(*arg1)[rdi_1], arg2)
        rbp = i.d
    while (i != 0)

return i
