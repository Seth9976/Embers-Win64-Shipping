// 函数: sub_141e069e0
// 地址: 0x141e069e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t result

if (arg2 == 0)
    int64_t rax_3 = sx.q(*(arg1 + 0x80))
    
    if (rax_3.d s> 0)
        int64_t* rcx_3 = *(arg1 + 0x78)
        int64_t r8_2 = 0
        
        do
            int64_t* rax_4 = *rcx_3
            
            if (rax_4 != 0 && *rax_4 != 0 && 0f f!= rax_4[0x2a].d)
                result.o = rax_4[0x27].d
                return result
            
            r8_2 += 1
            rcx_3 = &rcx_3[1]
        while (r8_2 s< rax_3)
else
    int32_t arg_10
    sub_140865c40(arg1 + 0x88, &arg_10, arg2)
    int64_t rax = sx.q(arg_10)
    void* const rcx_1
    
    if (rax.d == 0xffffffff)
        rcx_1 = nullptr
    else
        rcx_1 = *(arg1 + 0x88) + rax * 0x18
    
    int64_t* rax_2 = rcx_1 + 8
    
    if (rcx_1 == 0)
        rax_2 = nullptr
    
    if (rax_2 != 0)
        void* rcx_2 = *rax_2
        
        if (rcx_2 != 0)
            result.o = *(rcx_2 + 0x138)
            return result

result.o = zx.o(0)
return result
