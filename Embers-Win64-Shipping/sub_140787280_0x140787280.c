// 函数: sub_140787280
// 地址: 0x140787280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(*(arg1 + 0x38))

if (r8.d != arg2[1].d)
    int64_t result
    result.b = 0
    return result

char r10 = 1

if (r8.d s> 0)
    int32_t* rax = *arg2
    int64_t rdx = 0
    int128_t* rcx_1 = *(arg1 + 0x30) - rax
    
    while (true)
        uint32_t zmm0[0x4] = *(rcx_1 + rax)
        zmm0[0] = zmm0[0] f- *rax
        
        if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f)
            r10 = 0
            break
        
        rdx += 1
        rax = &rax[1]
        
        if (rdx s>= r8)
            return 1

return zx.q(r10)
