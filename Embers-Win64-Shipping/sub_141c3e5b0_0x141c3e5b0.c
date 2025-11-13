// 函数: sub_141c3e5b0
// 地址: 0x141c3e5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (arg1[0xd] == 0)
    result.b = 0
else if (arg3 == 0)
    if (arg1[0xc] != 0)
        sub_141c45550(arg1)
    
    int64_t rsi_1 = 0
    int64_t* r14_3 = (sx.q(*(arg1 + 0x84)) << 5) + *(arg1 + 0x70)
    int32_t rax_4 = 0
    
    if (0 == *(arg1 + 0x64))
        *(arg1 + 0x64) = 0
    else
        rax_4 = *(arg1 + 0x64)
    
    result = 0
    
    if (0 == *(arg1 + 0x68))
        *(arg1 + 0x68) = 0
    else
        result = *(arg1 + 0x68)
    
    uint32_t rcx_6
    
    if (result s< rax_4)
        rcx_6 = *(arg1 + 0x60) - rax_4 + result
    else
        rcx_6 = result - rax_4
    
    int32_t rbp_1 = *(arg1 + 0x38)
    
    if (rcx_6 u< rbp_1 || r14_3 == 0)
        result.b = 0
    else
        float (* r15_1)[0x4] = *(arg1 + 0x40)
        
        if (arg2 != 0)
            int32_t rax_7 = 0
            
            if (0 == *(arg1 + 0x68))
                *(arg1 + 0x68) = 0
            else
                rax_7 = *(arg1 + 0x68)
            
            int64_t rcx_7 = sx.q(rax_7 - rbp_1)
            
            if (rax_7 - rbp_1 s< 0)
                rcx_7 += zx.q(*(arg1 + 0x60))
            
            *(arg1 + 0x64)
            *(arg1 + 0x64) = rcx_7.d
            rbp_1 = *(arg1 + 0x38)
        
        int32_t r8_1 = *(arg1 + 0x3c)
        int32_t rax_10 = sub_141c3e440(&arg1[0x50], r15_1, r8_1)
        int32_t rax_11 = 0
        
        if (0 == *(arg1 + 0x64))
            *(arg1 + 0x64) = 0
        else
            rax_11 = *(arg1 + 0x64)
        
        *(arg1 + 0x64) = modu.dp.d(0:(rax_11 + rax_10), *(arg1 + 0x60))
        sub_141c3e440(&arg1[0x50], &(*r15_1)[sx.q(*(arg1 + 0x3c))], rbp_1 - r8_1)
        
        if (arg1[0x18] != 0)
            int32_t rax_14 = *(arg1 + 0x30)
            
            if (rax_14 s> 0)
                int128_t* r8_4 = *(arg1 + 0x20) - r15_1
                float (* rcx_11)[0x4] = r15_1
                uint64_t i_1 = zx.q(((rax_14 - 1) u>> 2) + 1)
                uint64_t i
                
                do
                    float zmm0_1[0x4] = __mulps_xmmps_memps(*(r8_4 + rcx_11), *rcx_11)
                    rcx_11 = &rcx_11[1]
                    rcx_11[-1] = zmm0_1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
        
        bool cond:1_1 = data_143de5480 == 0
        int64_t rbp_3 = *r14_3
        int64_t r14_4 = r14_3[2]
        int64_t rdi_2 = sx.q(*(arg1 + 0x38))
        int64_t r12_1 = data_143f34930
        int64_t var_30_1 = r14_4
        float (* var_28)[0x4] = r15_1
        int32_t var_20_1 = rdi_2.d
        int64_t var_38 = rbp_3
        
        if (not(cond:1_1))
            rsi_1.b = GetCurrentThreadId() != data_143de5470
        
        if (*(r12_1 + (rsi_1 << 2)) == 0)
            sub_141c45a20(r15_1, rbp_3, rdi_2.d)
            memset(r14_4, 0, rdi_2 << 2)
            sub_141c35660(rbp_3, r14_4, rdi_2.d)
        else
            sub_141c3e8c0(&var_28, &var_38)
        
        EnterCriticalSection(&arg1[0x88])
        int32_t rax_18 = (*(arg1 + 0x84) + 1) & 0x80000003
        
        if (rax_18 s< 0)
            rax_18 = ((rax_18 - 1) | 0xfffffffc) + 1
        
        *(arg1 + 0x84) = rax_18
        
        if (*(arg1 + 0x84) == *(arg1 + 0x80))
            result = (*(arg1 + 0x84) + 1) & 0x80000003
            
            if (result s< 0)
                result = ((result - 1) | 0xfffffffc) + 1
            
            *(arg1 + 0x84) = result
        
        if (arg1 != -0x88)
            LeaveCriticalSection(&arg1[0x88])
        
        result.b = 1
else
    void* rdi_1 = *(arg1 + 0xb8)
    
    if (rdi_1 != 0)
        bool z_1
        
        if (0 == *(rdi_1 + 0x18))
            *(rdi_1 + 0x18) = 0
            z_1 = true
        else
            *(rdi_1 + 0x18)
            z_1 = false
        
        if (not(z_1))
            result.b = 1
        else
            if (*(rdi_1 + 0x28) != 0)
                int64_t* rcx_3 = *(rdi_1 + 0x20)
                (*(*rcx_3 + 0x20))(rcx_3, 0xffffffff, 0)
                *(rdi_1 + 0x28) = 0
            
            sub_141c46cb0(*(arg1 + 0xb8), data_143db7ac8)
            result.b = 1
    else
        void*** rax = j_sub_140a82f30(zx.q((rdi_1 + 0x30).d))
        
        if (rax == 0)
            rax = nullptr
        else
            *rax = &data_143205218
            rax[1] = arg1
            rax[2].b = arg2
            rax[3].d = 0
            rax[4] = 0
            rax[5] = 0
        
        void*** rcx_1 = *(arg1 + 0xb8)
        void*** r8 = rcx_1
        
        if (rcx_1 != rax)
            *(arg1 + 0xb8) = rax
            r8 = rax
            
            if (rcx_1 != 0)
                (*rcx_1)[2](rcx_1, 1, r8)
                r8 = *(arg1 + 0xb8)
        
        sub_141c46cb0(r8, data_143db7ac8, r8)
        result.b = 1

return result
