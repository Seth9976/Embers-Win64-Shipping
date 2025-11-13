// 函数: sub_141812310
// 地址: 0x141812310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x2c)

if (rdx != 0)
    if (rdx == 1)
        uint128_t zmm2 = zx.o(*(arg1 + 0x20))
        int64_t rcx_7 = int.q(zmm2.q)
        uint128_t zmm0 = zmm2
        
        if (rcx_7 != -0x8000000000000000 && not(float.d(rcx_7) f== zmm2.q))
            zmm0.q = float.d(rcx_7 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0.q))) & 1))
        
        if (zmm2.q f- zmm0.q != 0.0)
            sub_140a31300(arg2, zmm2.q, 1)
            return arg2
        
        sub_140a2e390(arg2, u"%lld", int.q(zmm2.q))
        return arg2
    
    if (rdx == 2)
        wchar16 const* const rsi = u"false"
        
        if (*(arg1 + 0x28) != 0)
            rsi = u"true"
        
        int32_t rcx_3 = 0
        *arg2 = 0
        arg2[1] = 0
        
        if (*rsi != 0)
            int64_t rdi_1 = -1
            
            do
                rdi_1 += 1
            while (rsi[rdi_1] != 0)
            
            if (rdi_1.d + 1 s> 0)
                sub_1405947f0(arg2, rdi_1.d + 1)
                rcx_3 = arg2[1].d
            
            int32_t rax_4 = rcx_3 + rdi_1.d + 1
            arg2[1].d = rax_4
            
            if (rax_4 s> *(arg2 + 0xc))
                sub_140594770(arg2)
            
            UnDecorator::getReferenceType(*arg2, rsi, (rdi_1.d + 1) * 2)
        
        return arg2
    
    if (rdx == 3)
        *arg2 = 0
        arg2[1] = 0
        sub_1405947f0(arg2, 5)
        int32_t rax_2 = arg2[1].d + 5
        arg2[1].d = rax_2
        
        if (rax_2 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        UnDecorator::getReferenceType(*arg2, u"null", 0xa)
        return arg2
    
    if (rdx != 4)
        *arg2 = 0
        arg2[1] = 0
        return arg2

sub_140596d10(arg2, arg1 + 0x10)
return arg2
