// 函数: sub_142701eb0
// 地址: 0x142701eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *(arg2 + 0x38)

if (arg1[1].d != *(arg1 + 0x34))
    void* r8_1 = arg1[8]
    void* r9_1 = &arg1[7]
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t i = *(r9_1 + ((sx.q((r10 u>> 0x20).d * 0x17 + r10.d) & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *arg1
        
        do
            int64_t i_1 = sx.q(i)
            int64_t rcx_3 = i_1 * 0x12
            
            if (*(r8_2 + (rcx_3 << 3)) == r10)
                if (i != 0xffffffff)
                    int64_t rax_6 = i_1 * 0x90
                    void* rax_7 = rax_6 + r8_2
                    
                    if (rax_6 != neg.q(r8_2))
                        float zmm0 = *(arg2 + 0x30) f- *(rax_7 + 0x24)
                        float zmm2 = *(arg2 + 0x2c) f- *(rax_7 + 0x20)
                        float zmm1 = *(arg2 + 0x28) f- *(rax_7 + 0x1c)
                        return _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0) f+
                            *(rax_7 + 0x18)
                
                break
            
            i = *(r8_2 + (rcx_3 << 3) + 0x88)
        while (i != 0xffffffff)

return 3.39999995e+38f
