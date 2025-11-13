// 函数: sub_1426326d0
// 地址: 0x1426326d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg2[1]
int32_t r8 = 0
uint64_t j_2 = zx.q(*arg2)

if (i_2 s> 0)
    int64_t r10_1 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        if (j_2.d s> 0)
            uint64_t j_1 = j_2
            int64_t* rdx_1 = *(arg2 + 0x28) + r10_1
            uint64_t j
            
            do
                void* k = *rdx_1
                
                while (k != 0)
                    bool cond:0_1 = *k u< 0x4000000
                    int32_t rcx = r8 + 1
                    k = *(k + 8)
                    
                    if (cond:0_1)
                        rcx = r8
                    
                    r8 = rcx
                
                rdx_1 = &rdx_1[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        r10_1 += sx.q(j_2.d) << 3
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(r8)
