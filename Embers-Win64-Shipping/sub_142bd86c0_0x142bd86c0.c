// 函数: sub_142bd86c0
// 地址: 0x142bd86c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x390)

if (arg2 u<= 0xff)
    int64_t rdx = sx.q(arg2)
    char* rax_2 = (*(r8 + 0x28))(zx.q(*(*(r8 + 0x30) + (rdx << 1))), rdx)
    int32_t i = *(arg1 + 0x370)
    uint64_t r9_1 = 0
    
    if (i != 0)
        do
            char* rcx_1 = *(*(arg1 + 0x368) + (r9_1 << 3))
            
            if (rcx_1 != 0 && *rcx_1 == *rax_2)
                int64_t r8_2 = rax_2 - rcx_1
                uint32_t j
                uint32_t rdx_1
                
                do
                    rdx_1 = zx.d(*rcx_1)
                    j = zx.d(rcx_1[r8_2])
                    
                    if (rdx_1 != j)
                        break
                    
                    rcx_1 = &rcx_1[1]
                while (j != 0)
                
                if (rdx_1 - j == 0)
                    return zx.q(r9_1.d)
            
            r9_1 = zx.q(r9_1.d + 1)
        while (r9_1.d u< i)

return 0xffffffff
