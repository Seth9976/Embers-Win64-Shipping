// 函数: sub_141bb1b50
// 地址: 0x141bb1b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax = sub_140d3c6e0(arg1 + 0x28)
int128_t* rsi = rax

if (rax != 0)
    char rcx_1 = *(arg1 + 0x61)
    char arg_8 = 0
    void* arg_10
    void* rdi_1
    
    if (rcx_1 == 0 || *(arg1 + 0x60) == 0)
        rdi_1 = arg1 + 0x30
        arg_8 = 0
        
        if (sub_141b72260(rsi, rdi_1, &arg_8, &arg_10).b != 0)
            if (&arg_10 != arg1 + 0x60)
                *(arg1 + 0x60) = 0x100
            
            return zx.q(arg_8)
        
        rcx_1 = *(arg1 + 0x61)
    else
        rdi_1 = arg1 + 0x30
    
    arg_8 = 1
    
    if (rcx_1 == 0 || *(arg1 + 0x60) == 1)
        arg_8 = 0
        
        if (sub_141b760e0(rdi_1, rsi, &arg_8).b != 0)
            if (&arg_10 != arg1 + 0x60)
                *(arg1 + 0x60) = 0x101
            
            void** rax_2
            rax_2.b = arg_8 != 0
            return rax_2

rax.b = 0
return rax
