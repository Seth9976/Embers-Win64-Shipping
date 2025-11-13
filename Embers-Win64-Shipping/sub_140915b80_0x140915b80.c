// 函数: sub_140915b80
// 地址: 0x140915b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t rax = sub_1409146f0(arg1 + 0x350, arg2)

if (rax.d == 0xffffffff)
    return 

int64_t* rax_3 = (sx.q(rax.d) << 4) + *(arg1 + 0x360)
char* i = *rax_3

for (void* r14_1 = &i[sx.q(rax_3[1].d) * 0x28]; i != r14_1; i = &i[0x28])
    rax = sub_140915e70(i, arg3)
    int64_t rbp_1 = rax
    
    if (rax != 0)
        int64_t rsi_1 = sx.q(*(arg4 + 0x10))
        int32_t rcx_3 = (rsi_1 + 1).d
        *(arg4 + 0x10) = rcx_3
        
        if (rcx_3 s> *(arg4 + 0x14))
            sub_140915c70(arg4, rsi_1.d)
        
        rax = *(arg4 + 8)
        int64_t rcx_5 = arg4
        
        if (rax != 0)
            rcx_5 = rax
        
        *(rcx_5 + (rsi_1 << 3)) = rbp_1
