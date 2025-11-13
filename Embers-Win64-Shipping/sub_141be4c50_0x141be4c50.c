// 函数: sub_141be4c50
// 地址: 0x141be4c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0x178)
int64_t arg_8 = arg2
void* r9 = &rax[sx.q(*(arg1 + 0x180))]

if (rax != r9)
    void* rcx_1
    
    while (true)
        rcx_1 = *rax
        
        if (*(rcx_1 + 0x408) == arg2)
            break
        
        rax = &rax[1]
        
        if (rax == r9)
            return rax
    
    if (rax != 0 && rcx_1 != 0)
        if (*(rcx_1 + 0x788) == 2)
            int32_t rax_1 = arg3 * 2
            *(rcx_1 + 0x778) = rax_1
            return rax_1
        
        *(rcx_1 + 0x778) = arg3

return rax
