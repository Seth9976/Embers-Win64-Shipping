// 函数: sub_142c3cc30
// 地址: 0x142c3cc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rbx = *(arg3 + 8)
int32_t rdi = *(arg3 + 0x10)
char rax = sub_142c3c960(arg1 + 2, arg2, rdi.w)

if (rax == 0)
    return rax

int32_t rax_1 = 0

if (rdi != 0)
    void* rsi_1 = arg1 + 2 - rbx
    
    do
        int128_t* const rcx_1 = &data_14369a5d0
        
        if (rax_1 u< rdi)
            rcx_1 = rbx
        
        rax_1 += 1
        *(rsi_1 + rbx + 2) = *rcx_1
        rbx += 2
    while (rax_1 u< rdi)

rax_1.b = 1
return rax_1
