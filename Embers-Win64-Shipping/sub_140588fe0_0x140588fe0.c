// 函数: sub_140588fe0
// 地址: 0x140588fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10 = *(arg1 + 0x38)
char* r8 = *r10

if (r8 != 0)
    if (r8 u< &r8[sx.q(**(arg1 + 0x50))])
        return zx.q(*r8)
    
    int64_t r9_1 = **(arg1 + 0x40)
    
    if (r9_1 != 0 && (*(arg1 + 0x70) & 4) == 0)
        int64_t rdx_3 = *(arg1 + 0x68)
        
        if (rdx_3 u< r9_1)
            rdx_3 = r9_1
        
        if (rdx_3 u> r8)
            *(arg1 + 0x68) = rdx_3
            int64_t rax_4 = *r10
            *r10 = rax_4
            **(arg1 + 0x50) = rdx_3.d - rax_4.d
            return zx.q(***(arg1 + 0x38))

return 0xffffffff
