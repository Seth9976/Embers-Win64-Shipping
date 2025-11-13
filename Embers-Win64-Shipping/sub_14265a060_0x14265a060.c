// 函数: sub_14265a060
// 地址: 0x14265a060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*(arg1 + 0x3a0))
int32_t i = 0

if (r9.d s> 0)
    do
        int64_t rdx_1 = 0
        
        if (r9.d s<= 0)
            break
        
        int32_t* rax_2 = *(arg1 + 0x398) + 0x10
        
        while (*rax_2 != i)
            rdx_1 += 1
            rax_2 = &rax_2[8]
            
            if (rdx_1 s>= r9)
                return zx.q(i)
        
        i += 1
    while (i s< r9.d)

return zx.q(i)
