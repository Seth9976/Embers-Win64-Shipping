// 函数: sub_141e778c0
// 地址: 0x141e778c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xc].w = 1
*arg1 = 0
*(arg1 + 0x62) = 1
arg1[0x10].b = 0

if (arg1[3].d != *(arg1 + 0x44))
    int32_t rax_1 = *(arg1 + 0x1c)
    arg1[3].d = 0
    
    if (rax_1 s< 0 && rax_1 != 0)
        sub_1405a5410(&arg1[2], 0)
    
    arg1[8].d = 0xffffffff
    *(arg1 + 0x44) = 0
    sub_140774790(&arg1[4])
    int64_t rcx_2 = sx.q(arg1[0xb].d)
    void* rdi_1 = &arg1[9]
    void* rax_2 = *(rdi_1 + 8)
    
    if (rcx_2 s> 0)
        if (rax_2 != 0)
            rdi_1 = rax_2
        
        __builtin_memset(rdi_1, 0xffffffff, rcx_2 << 2)

*(arg1 + 0x84) = data_143dbb1f8.q
int32_t result = data_143dbb200
*(arg1 + 0x8c) = result
return result
