// 函数: sub_1409984a0
// 地址: 0x1409984a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(*(arg3 + 0x10) u>> 2)

if ((rax.b & 1) == 0)
    rax = *(arg2 + 0x10)
    *rax = 0
else
    int32_t r9_1 = *(arg3 + 0x20)
    int32_t rcx = 0
    
    if (r9_1 s> 0)
        int64_t* r8 = *(arg3 + 0x18)
        int64_t r10_1 = sx.q(*arg2)
        int64_t r11_1 = sx.q(arg2[1])
        
        while (true)
            int64_t rax_1 = *r8
            uint32_t zmm0[0x4] = *(rax_1 + (r10_1 << 2))
            zmm0[0] = zmm0[0] f- *(rax_1 + (r11_1 << 2))
            
            if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999994e-09f)
                break
            
            rcx += 1
            r8 = &r8[2]
            
            if (rcx s>= r9_1)
                return rax_1
        
        rax = *(arg2 + 0x10)
        *rax = 0

return rax
