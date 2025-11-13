// 函数: sub_1418c4210
// 地址: 0x1418c4210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = memset(*(arg1 + 0x548), 0, sx.q(*(arg1 + 0x550)) << 3)
int32_t i = 0

if (*(arg2 + 0x60) s> 0)
    int64_t r9_1 = 0
    
    do
        void* rax = *(arg2 + 0x58)
        void* r8_2 = arg2 + 0x18
        void* rcx_1 = *(arg2 + 8)
        r9_1 += 1
        
        if (rax != 0)
            r8_2 = rax
        
        void* rax_1 = arg2
        
        if (rcx_1 != 0)
            rax_1 = rcx_1
        
        i += 1
        result = *(r8_2 + (r9_1 << 3) - 8)
        *(*(arg1 + 0x548) + (zx.q(*(rax_1 + r9_1 - 1)) << 3)) = result
    while (i s< *(arg2 + 0x60))

return result
