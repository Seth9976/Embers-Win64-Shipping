// 函数: sub_142bcd710
// 地址: 0x142bcd710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u< 0x100)
    uint64_t rdx = zx.q(arg2)
    char* rax_2 = (*(arg1 + 0x20))(zx.q(*(*(arg1 + 0x18) + (rdx << 1))), rdx)
    int32_t i = *(arg1 + 0x28)
    uint64_t r9_1 = 0
    
    if (i != 0)
        do
            char* rax_3 = *(*(arg1 + 0x30) + (r9_1 << 3))
            
            if (rax_3 != 0 && *rax_3 == *rax_2)
                int64_t r8_2 = rax_2 - rax_3
                uint32_t j
                uint32_t rdx_1
                
                do
                    rdx_1 = zx.d(*rax_3)
                    j = zx.d(rax_3[r8_2])
                    
                    if (rdx_1 != j)
                        break
                    
                    rax_3 = &rax_3[1]
                while (j != 0)
                
                if (rdx_1 - j == 0)
                    return zx.q(r9_1.d)
            
            r9_1 = zx.q(r9_1.d + 1)
        while (r9_1.d u< i)

return 0
