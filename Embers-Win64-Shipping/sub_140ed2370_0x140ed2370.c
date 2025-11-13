// 函数: sub_140ed2370
// 地址: 0x140ed2370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *arg3
void* rax_1 = arg3[1]
arg2[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

if (*(arg1 + 0x728) != 0)
    int64_t* rcx = *(arg1 + 0x720)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int32_t rax_5 = *(arg1 + 0x628) - *(arg1 + 0x654)
        uint128_t var_68 = zx.o(0)
        
        if (rax_5 == 1)
            int32_t r8 = 0
            int32_t var_48_1 = 0xffffffff
            void* r10_1 = arg1 + 0x630
            int32_t var_44_1 = 0
            int32_t r11_1 = *(r10_1 + 0x18)
            int32_t r9_1 = 0
            
            if (r11_1 != 0)
                void* rax_6 = *(r10_1 + 0x10)
                
                if (rax_6 != 0)
                    r10_1 = rax_6
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(r11_1 - 1)
                int32_t rcx_1 = *r10_1
                int32_t var_44_3
                
                if (rcx_1 != 0)
                label_140ed2473:
                    int32_t rax_13 = neg.d(rcx_1) & rcx_1
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
                    int32_t rax_14
                    
                    if (rax_13 == 0)
                        rax_14 = 0x20
                    else
                        rax_14 = 0x1f - temp0_2
                    
                    int32_t var_44_2 = r9_1 - rax_14 + 0x1f
                    
                    if (r9_1 - rax_14 + 0x1f s> r11_1)
                        var_44_3 = r11_1
                else
                    while (true)
                        int64_t rcx_2 = sx.q(r8)
                        r9_1 += 0x20
                        r8 += 1
                        
                        if (rcx_2.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                            break
                        
                        rcx_1 = *(r10_1 + (rcx_2 << 2) + 4)
                        int32_t var_48_2 = 0xffffffff
                        
                        if (rcx_1 != 0)
                            goto label_140ed2473
                    
                    var_44_3 = r11_1
            
            void* rax_16 = *(arg1 + 0x620)
            var_68.q = *rax_16
            void* rax_18 = *(rax_16 + 8)
            var_68:8.q = rax_18
            
            if (rax_18 != 0)
                *(rax_18 + 8) += 1
            
            uint128_t zmm0 = var_68
            int64_t* rbx_1 = _mm_bsrli_si128(zx.o(0), 8).q
            var_68 = zmm0
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t* rdi = var_68:8.q
        bool r12 = true
        int64_t i = var_68.q
        
        while (true)
            int64_t* rbx_2 = arg2[1]
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            int64_t* rcx_6
            
            if (*(arg1 + 0x728) == 0)
                rcx_6 = nullptr
            else
                rcx_6 = *(arg1 + 0x720)
            
            int64_t var_58 = *arg2
            int64_t* var_50_1 = rbx_2
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            char rax_23 = (*(*rcx_6 + 0x48))(rcx_6, &var_58)
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    int64_t rdx_4 = *rbx_2
                    (*rdx_4)(rbx_2, rdx_4)
                    int32_t temp5_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            if (rax_23 != 0)
                break
            
            int64_t* rax_25 = *(arg1 + 0x6e0)
            int64_t* rdx_5 = *rax_25
            int64_t* rbx_3 = rdx_5
            void* rcx_11 = &rdx_5[sx.q(rax_25[1].d) * 2]
            int32_t rbx_4
            
            if (rdx_5 == rcx_11)
            label_140ed25c3:
                rbx_4 = -1
            else
                while (*rbx_3 != *arg2)
                    rbx_3 = &rbx_3[2]
                    
                    if (rbx_3 == rcx_11)
                        goto label_140ed25c3
                
                rbx_4 = ((rbx_3 - rdx_5) s>> 4).d
            
            if (i != 0 && rbx_4 s> 0)
                if (rdi != 0)
                    rdi[1].d += 1
                
                int64_t* rcx_12 = *(arg1 + 0x6e0)
                int64_t* r8_1 = *rcx_12
                int64_t* rax_27 = r8_1
                void* rdx_8 = &r8_1[sx.q(rcx_12[1].d) * 2]
                int32_t rax_28
                
                if (r8_1 == rdx_8)
                label_140ed2608:
                    rax_28 = -1
                else
                    while (*rax_27 != i)
                        rax_27 = &rax_27[2]
                        
                        if (rax_27 == rdx_8)
                            goto label_140ed2608
                    
                    rax_28 = ((rax_27 - r8_1) s>> 4).d
                
                r12 = rax_28 s< rbx_4
                
                if (rdi != 0)
                    rdi[1].d -= 1
                    
                    if (rdi[1].d == 1)
                        (**rdi)(rdi)
                        int32_t temp11_1 = *(rdi + 0xc)
                        *(rdi + 0xc) -= 1
                        
                        if (temp11_1 == 1)
                            (*(*rdi + 8))(rdi, 1)
            
            int32_t rax_31 = -1
            
            if (r12 != 0)
                rax_31 = 1
            
            int32_t rax_32 = rax_31 + rbx_4
            
            if (rax_31 + rbx_4 s< 0)
                break
            
            void* rdx_9 = *(arg1 + 0x6e0)
            
            if (rax_32 s>= *(rdx_9 + 8))
                break
            
            int64_t* rcx_17 = (sx.q(rax_32) << 4) + *rdx_9
            int64_t* rbx_5 = rcx_17[1]
            var_68.q = *rcx_17
            var_68:8.q = rbx_5
            
            if (rbx_5 != 0)
                rbx_5[1].d += 1
            
            if (&var_68 != arg2)
                uint128_t zmm1 = var_68
                var_68 = *arg2
                rbx_5 = var_68:8.q
                *arg2 = zmm1
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    (**rbx_5)(rbx_5)
                    int32_t temp12_1 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (temp12_1 == 1)
                        (*(*rbx_5 + 8))(rbx_5, 1)
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp7_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp7_1 == 1)
                    int64_t r8_3 = *rdi
                    (*(r8_3 + 8))(rdi, 1, r8_3)

return arg2
