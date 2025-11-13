// 函数: sub_142c385e0
// 地址: 0x142c385e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* rsi = arg3

if (*(arg2 + 0x60) != 0)
    void* rdx = *(arg1 + 0x20)
    void* rbp
    void* var_18_1 = rbp
    int32_t r8 = *(rdx + 0x30)
    int32_t i_1 = 2
    int32_t arg_20 = r8
    
    if (r8 == 4)
        r8 = 2
        arg_20 = 2
    
    int64_t var_60_1 = *(arg2 + 0x10)
    int64_t (* rax_1)(void* arg1, int32_t arg2, int32_t* arg3, int32_t* arg4) = sub_142c39130
    void* var_78 = arg1
    void* var_68_1 = rsi
    int64_t (* rcx)(void* arg1, int32_t arg2, int32_t* arg3, int32_t* arg4) = *(rdx + 0x38)
    char arg_10 = 1
    
    if (rcx != 0)
        rax_1 = rcx
    
    int64_t (* var_58_1)(void* arg1, int32_t arg2, int32_t* arg3, int32_t* arg4) = rax_1
    int64_t (* rax_2)(void* arg1, int32_t arg2, int32_t arg3, int32_t* arg4) = sub_142c38db0
    int64_t (* rcx_1)(void* arg1, int32_t arg2, int32_t arg3, int32_t* arg4) = *(rdx + 0x40)
    
    if (rcx_1 != 0)
        rax_2 = rcx_1
    
    int64_t r12
    r12.b = r8 == 0
    int64_t r15
    r15.b = ((r8 - 1) & 0xfffffffd) != 0
    sub_142bf4e80(arg2)
    int32_t r14_1 = *(arg2 + 0x60)
    *(arg2 + 0x5c) = 0
    int32_t var_98
    int64_t var_90
    int32_t var_88
    int64_t var_80
    
    while (true)
        uint64_t r10_1 = zx.q(*(arg2 + 0x5c))
        uint64_t r8_1 = zx.q((r10_1 + 1).d)
        
        if (r8_1.d u< r14_1)
            while ((1 << ((*(*(arg2 + 0x70) + r8_1 * 0x14 + 0x10)).b & 0x1f) & 0x1c00) == 0)
                r8_1 = zx.q(r8_1.d + 1)
                
                if (r8_1.d u>= r14_1)
                    break
        
        int32_t rdi_1 = (r8_1 - 1).d
        
        if (r8_1.d u>= r14_1)
            rdi_1 = r8_1.d
        
        if (r15.b != 0)
            void* r10_2 = *(rsi + 0x40)
            var_80 = *(r10_2 + 0x28)
            var_88 = 0x14
            var_90 = *(arg2 + 0x70) + r10_1 * 0x14 + 0xc
            var_98 = 0x14
            uint64_t rsi_1 = zx.q((*(r10_2 + 0x138))(rsi, *(rsi + 0x48), zx.q(rdi_1 - r10_1.d)))
            
            if (*(arg2 + 0x59) == 0)
                *(arg2 + 0x5c) += rsi_1.d
            else if (*(arg2 + 0x78) != *(arg2 + 0x70) || *(arg2 + 0x64) != *(arg2 + 0x5c))
                char rax_7
                rax_7, arg4 = sub_142bf50b0(arg2, rsi_1.d, rsi_1.d)
                
                if (rax_7 != 0)
                    memmove(*(arg2 + 0x78) + zx.q(*(arg2 + 0x64)) * 0x14, 
                        *(arg2 + 0x70) + zx.q(*(arg2 + 0x5c)) * 0x14, (rsi_1 * 0x14).d)
                    *(arg2 + 0x64) += rsi_1.d
                    *(arg2 + 0x5c) += rsi_1.d
            else
                *(arg2 + 0x64) += rsi_1.d
                *(arg2 + 0x5c) += rsi_1.d
        
        if (*(arg2 + 0x5c) u< rdi_1)
            while (*(arg2 + 0x58) != 0)
                arg4 = sub_142c38f40(&var_78, r15.b, arg4)
                
                if (*(arg2 + 0x5c) u>= rdi_1)
                    break
        
        int32_t rdi_2 = *(arg2 + 0x5c)
        
        if (rdi_2 == r14_1)
            break
        
        if (*(arg2 + 0x58) == 0)
            break
        
        rbp.b = 0
        uint64_t rdi_3 = zx.q(rdi_2 + 1)
        arg_10 = 0
        
        if (rdi_3.d u< r14_1)
            while ((1 << ((*(*(arg2 + 0x70) + rdi_3 * 0x14 + 0x10)).b & 0x1f) & 0x1c00) != 0)
                rdi_3 = zx.q(rdi_3.d + 1)
                
                if (rdi_3.d u>= r14_1)
                    break
        
        int32_t r10_3 = *(arg2 + 0x5c)
        int32_t rdx_7 = r10_3
        
        if (r10_3 u< rdi_3.d)
            while (true)
                if (*(arg2 + 0x58) != 0)
                    int32_t r8_8 = *(*(arg2 + 0x70) + zx.q(rdx_7) * 0x14)
                    
                    if (r8_8 - 0xfe00 u<= 0xf || r8_8 - 0xe0100 u<= 0xef)
                        arg4 = sub_142c39160(&var_78, rdi_3.d)
                        break
                    
                    rdx_7 += 1
                    
                    if (rdx_7 u< rdi_3.d)
                        continue
                
                if (r10_3 u>= rdi_3.d)
                    break
                
                while (*(arg2 + 0x58) != 0)
                    arg4 = sub_142c38f40(&var_78, r12.b, arg4)
                    
                    if (*(arg2 + 0x5c) u>= rdi_3.d)
                        break
                
                break
        
        if (*(arg2 + 0x5c) u>= r14_1)
            break
        
        rsi = arg3
        
        if (*(arg2 + 0x58) == 0)
            break
    
    result = sub_142bf5b20(arg2)
    char rbp_1 = arg_10
    
    if (rbp_1 == 0)
        int32_t i = *(arg2 + 0x60)
        int32_t result_1 = 0
        
        if (i != 0)
            do
                int64_t r9_4 = *(arg2 + 0x70)
                result = zx.q(result_1)
                uint32_t r8_9 = zx.d(*(r9_4 + result * 0x14 + 0x10))
                
                if ((1 << (r8_9.b & 0x1f) & 0x1c00) != 0 && r8_9 u>> 8 != 0)
                    uint64_t rdi_4 = zx.q(result_1 + 1)
                    
                    while (rdi_4.d u< i)
                        uint32_t r8_11 = zx.d(*(r9_4 + rdi_4 * 0x14 + 0x10))
                        
                        if ((1 << (r8_11.b & 0x1f) & 0x1c00) == 0)
                            break
                        
                        if ((r8_11 & 0xffffff00) == 0)
                            break
                        
                        rdi_4 = zx.q(rdi_4.d + 1)
                    
                    result = zx.q(rdi_4.d - result_1)
                    
                    if (result.d u<= 0x20)
                        sub_142bf59c0(arg2, result_1, rdi_4.d, sub_142c38d50)
                        result = *(arg1 + 0x20)
                        int64_t r10_4 = result[0xb]
                        
                        if (r10_4 != 0)
                            result = r10_4(arg1, arg2, zx.q(result_1), zx.q(rdi_4.d), var_98, 
                                var_90, var_88, var_80)
                    
                    result_1 = rdi_4.d
                
                result_1 += 1
            while (result_1 u< i)
            
            i_1 = 2
        
        rbp_1 = arg_10
    
    if ((*(arg2 + 0x28) & 0x20) != 0 && *(arg2 + 0x60) u> 2)
        do
            int64_t r8_14 = *(arg2 + 0x70)
            result = zx.q(i_1 - 1) * 5
            void* r10_5 = r8_14 + (result << 2)
            
            if (*(r8_14 + (result << 2)) == 0x34f)
                uint32_t r9_6 = zx.d(*(r8_14 + zx.q(i_1 - 2) * 0x14 + 0x10))
                uint32_t r9_7
                
                if ((1 << (r9_6.b & 0x1f) & 0x1c00) == 0)
                    r9_7 = 0
                else
                    r9_7 = r9_6 u>> 8
                
                result = zx.q(i_1)
                uint32_t r8_16 = zx.d(*(r8_14 + result * 0x14 + 0x10))
                uint32_t r8_17
                
                if ((1 << (r8_16.b & 0x1f) & 0x1c00) == 0)
                    r8_17 = 0
                else
                    r8_17 = r8_16 u>> 8
                
                if (r9_7 u<= r8_17)
                    *(r10_5 + 0x10) &= 0xffbf
            
            i_1 += 1
        while (i_1 u< *(arg2 + 0x60))
    
    if (rbp_1 == 0)
        result = zx.q(arg_20 - 2)
        
        if (result.d u<= 1)
            sub_142bf4e80(arg2)
            int32_t rsi_3 = 0
            int32_t rbp_2 = *(arg2 + 0x60)
            
            if (*(arg2 + 0x59) == 0)
                *(arg2 + 0x5c) += 1
            else if (*(arg2 + 0x78) != *(arg2 + 0x70) || *(arg2 + 0x64) != *(arg2 + 0x5c))
                if (sub_142bf50b0(arg2, 1, 1) != 0)
                    int64_t rdx_16 = *(arg2 + 0x70)
                    uint64_t r9_8 = zx.q(*(arg2 + 0x5c)) * 5
                    uint64_t rcx_38 = zx.q(*(arg2 + 0x64)) * 5
                    int64_t rax_26 = *(arg2 + 0x78)
                    *(rax_26 + (rcx_38 << 2)) = *(rdx_16 + (r9_8 << 2))
                    *(rax_26 + (rcx_38 << 2) + 0x10) = *(rdx_16 + (r9_8 << 2) + 0x10)
                    *(arg2 + 0x64) += 1
                    *(arg2 + 0x5c) += 1
            else
                *(arg2 + 0x64) += 1
                *(arg2 + 0x5c) += 1
            
            if (*(arg2 + 0x5c) u< rbp_2)
                while (*(arg2 + 0x58) != 0)
                    uint64_t rcx_39 = zx.q(*(arg2 + 0x5c)) * 5
                    int64_t rax_29 = *(arg2 + 0x70)
                    int32_t* r14_2 = rax_29 + (rcx_39 << 2)
                    
                    if ((1 << ((*(rax_29 + (rcx_39 << 2) + 0x10)).b & 0x1f) & 0x1c00) == 0)
                    label_142c38c9d:
                        
                        if (*(arg2 + 0x59) == 0)
                            *(arg2 + 0x5c) += 1
                        else if (*(arg2 + 0x78) != *(arg2 + 0x70)
                                || *(arg2 + 0x64) != *(arg2 + 0x5c))
                            if (sub_142bf50b0(arg2, 1, 1) != 0)
                                int64_t rdx_24 = *(arg2 + 0x70)
                                uint64_t r9_12 = zx.q(*(arg2 + 0x5c)) * 5
                                uint64_t rcx_57 = zx.q(*(arg2 + 0x64)) * 5
                                int64_t rax_49 = *(arg2 + 0x78)
                                *(rax_49 + (rcx_57 << 2)) = *(rdx_24 + (r9_12 << 2))
                                *(rax_49 + (rcx_57 << 2) + 0x10) = *(rdx_24 + (r9_12 << 2) + 0x10)
                                *(arg2 + 0x64) += 1
                                *(arg2 + 0x5c) += 1
                        else
                            *(arg2 + 0x64) += 1
                            *(arg2 + 0x5c) += 1
                        
                        if (sub_142c385c0(sub_142c39510(arg2)) == 0)
                            rsi_3 = *(arg2 + 0x64) - 1
                    else
                        int32_t rax_33
                        uint32_t rdi_6
                        
                        if (rsi_3 != *(arg2 + 0x64) - 1)
                            uint32_t rdi_5 = zx.d(r14_2[4].w)
                            
                            if ((1 << (rdi_5.b & 0x1f) & 0x1c00) == 0)
                                rdi_6 = 0
                            else
                                rdi_6 = rdi_5 u>> 8
                            
                            rax_33 = sub_142c385c0(sub_142c39510(arg2))
                        
                        if (rsi_3 != *(arg2 + 0x64) - 1 && rax_33 u>= rdi_6)
                            goto label_142c38c9d
                        
                        uint64_t rdi_7 = zx.q(rsi_3) * 0x14
                        
                        if (rax_2(&var_78, zx.q(*(rdi_7 + *(arg2 + 0x78))), zx.q(*r14_2), &arg_10, 
                                var_98, var_90, var_88, var_80) == 0)
                            goto label_142c38c9d
                        
                        void* r10_6 = *(arg3 + 0x40)
                        uint64_t r8_20 = zx.q(arg_10.d)
                        int64_t rdx_20 = *(arg3 + 0x48)
                        arg_20 = 0
                        var_98.q = *(r10_6 + 0x20)
                        result = (*(r10_6 + 0x130))(arg3, rdx_20, r8_20, &arg_20, var_98)
                        
                        if (result.d == 0)
                            goto label_142c38c9d
                        
                        if (*(arg2 + 0x59) == 0)
                            *(arg2 + 0x5c) += 1
                        else
                            if (*(arg2 + 0x78) == *(arg2 + 0x70))
                                result = zx.q(*(arg2 + 0x5c))
                            
                            if (*(arg2 + 0x78) == *(arg2 + 0x70) && *(arg2 + 0x64) == result.d)
                                *(arg2 + 0x64) += 1
                                *(arg2 + 0x5c) += 1
                            else
                                result = sub_142bf50b0(arg2, 1, 1)
                                
                                if (result.b != 0)
                                    int64_t rdx_21 = *(arg2 + 0x70)
                                    uint64_t r9_11 = zx.q(*(arg2 + 0x5c)) * 5
                                    uint64_t rcx_50 = zx.q(*(arg2 + 0x64)) * 5
                                    int64_t rax_41 = *(arg2 + 0x78)
                                    *(rax_41 + (rcx_50 << 2)) = *(rdx_21 + (r9_11 << 2))
                                    result = zx.q(*(rdx_21 + (r9_11 << 2) + 0x10))
                                    *(rax_41 + (rcx_50 << 2) + 0x10) = result.d
                                    *(arg2 + 0x64) += 1
                                    *(arg2 + 0x5c) += 1
                        
                        if (*(arg2 + 0x58) == 0)
                            return result
                        
                        sub_142bf52d0(arg2, rsi_3, *(arg2 + 0x64))
                        int64_t rcx_52 = *(arg2 + 0x78)
                        int32_t rax_42 = arg_10.d
                        *(arg2 + 0x64) -= 1
                        *(rdi_7 + rcx_52) = rax_42
                        *(rdi_7 + *(arg2 + 0x78) + 0xc) = arg_20
                        sub_142c069e0(*(arg2 + 0x78) + rdi_7, arg2)
                    
                    if (*(arg2 + 0x5c) u>= rbp_2)
                        break
            
            result = sub_142bf5b20(arg2)

return result
