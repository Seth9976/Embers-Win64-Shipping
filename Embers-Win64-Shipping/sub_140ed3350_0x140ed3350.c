// 函数: sub_140ed3350
// 地址: 0x140ed3350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = &__return_addr
int64_t r13 = 0
int32_t r12 = 0

if (arg1[0x19].d s> 0)
    while (true)
        int64_t* rax = arg1[0x18]
        int64_t* rdi_1 = *(rax + r13 + 8)
        int64_t rbx_1 = *(rax + r13)
        int64_t var_90 = rbx_1
        int64_t* var_88_1 = rdi_1
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int32_t arg_8
        sub_140a73790(&arg1[1], &arg_8, &var_90)
        int64_t rax_1 = sx.q(arg_8)
        void* const r8_2
        
        if (rax_1.d == 0xffffffff)
            result = 0
            r8_2 = nullptr
        else
            r8_2 = arg1[1] + rax_1 * 0x28
            result = 0
        
        int64_t* rcx_1 = r8_2 + 0x10
        
        if (r8_2 == 0)
            rcx_1 = nullptr
        
        if (rcx_1 != 0)
            int64_t* var_108 = *rcx_1
            int64_t* rax_4 = rcx_1[1]
            
            if (rax_4 != 0)
                rax_4[1].d += 1
            
            sub_140e85c90(&arg1[1], &var_90)
            result = sub_140dba910(&arg1[0xb], var_108)
            
            if (*arg1 != 0)
                int64_t* rcx_4 = var_108
                result = (*(*rcx_4 + 8))(rcx_4)
                void* rbx_2 = *arg1
                
                if (*(rbx_2 + 0x608) != 0)
                    int64_t* rcx_5 = *(rbx_2 + 0x600)
                    
                    if (rcx_5 != 0)
                        result = (*(*rcx_5 + 0x28))(rcx_5)
                        
                        if (result != 0)
                            int64_t* rcx_6
                            
                            if (*(rbx_2 + 0x608) == 0)
                                rcx_6 = nullptr
                            else
                                rcx_6 = *(rbx_2 + 0x600)
                            
                            result = (*(*rcx_6 + 0x50))(rcx_6, &var_108)
            
            if (rax_4 != 0)
                rax_4[1].d -= 1
                
                if (rax_4[1].d == 1)
                    result = (**rax_4)(rax_4)
                    int32_t temp8_1 = *(rax_4 + 0xc)
                    *(rax_4 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        result = (*(*rax_4 + 8))(rax_4, 1)
        else if (rbx_1 == 0)
            int32_t var_128_1 = 0
            int32_t r10_1 = arg1[0x10].d
            void* r9_1 = &arg1[0xd]
            int32_t var_124_1 = 1
            int32_t rcx_9 = 0
            void* var_120_1 = r9_1
            int32_t r8_3 = 0
            int32_t var_118_1 = 0xffffffff
            int64_t var_114_1 = rbx_1
            
            if (r10_1 != 0)
                void* rax_10 = *(r9_1 + 0x10)
                
                if (rax_10 != 0)
                    r9_1 = rax_10
                
                int32_t temp5_1
                int32_t temp6_1
                temp5_1:temp6_1 = sx.q(r10_1 - 1)
                int32_t rdx_8 = *r9_1
                
                if (rdx_8 != 0)
                label_140ed354b:
                    int32_t rax_17 = neg.d(rdx_8) & rdx_8
                    uint64_t rflags_1
                    int32_t temp0_1
                    temp0_1, rflags_1 = _bit_scan_reverse(rax_17)
                    int32_t var_124_2 = rax_17
                    int32_t rax_18
                    
                    if (rax_17 == 0)
                        rax_18 = 0x20
                    else
                        rax_18 = 0x1f - temp0_1
                    
                    var_114_1.d = r8_3 - rax_18 + 0x1f
                    
                    if (r8_3 - rax_18 + 0x1f s> r10_1)
                        var_114_1.d = r10_1
                else
                    while (true)
                        int64_t rdx_9 = sx.q(rcx_9)
                        r8_3 += 0x20
                        rcx_9 += 1
                        var_114_1:4.d = r8_3
                        var_128_1 = rcx_9
                        
                        if (rdx_9.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_8 = *(r9_1 + (rdx_9 << 2) + 4)
                        int32_t var_118_2 = 0xffffffff
                        
                        if (rdx_8 != 0)
                            goto label_140ed354b
                    
                    var_114_1.d = r10_1
            
            int128_t var_68_1 = 0xffffffff
            int128_t var_78_1 = var_128_1.o
            int128_t var_b8 = (&arg1[0xb]).o
            int64_t var_98_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
            int128_t var_a8_1 = var_78_1
            int64_t* rbx_4
            
            if (0 s>= r10_1)
            label_140ed35f7:
                result = 0
                rbx_4 = nullptr
            else
                int32_t rdx_10 = var_a8_1:0xc.d
                
                while (true)
                    int64_t rax_20 = *var_b8.q
                    
                    if (*((sx.q(rdx_10) << 5) + rax_20 + 8) == 0)
                        rbx_4 = (sx.q(rdx_10) << 5) + rax_20
                        result = 0
                        break
                    
                    var_a8_1:8.d &= not.d(var_b8:0xc.d)
                    sub_14059bdd0(&var_b8:8)
                    rdx_10 = var_a8_1:0xc.d
                    
                    if (rdx_10 s>= *(var_a8_1.q + 0x18))
                        goto label_140ed35f7
            
            if (rbx_4 != 0)
                int32_t r11_1 = arg1[6].d
                void* r9_2 = &arg1[3]
                int32_t var_128_2 = 0
                int32_t rcx_14 = 0
                int32_t var_124_3 = 1
                int32_t r8_6 = 0
                void* var_120_2 = r9_2
                int32_t var_118_3 = 0xffffffff
                int64_t var_114_2 = 0
                
                if (r11_1 != 0)
                    void* rax_24 = *(r9_2 + 0x10)
                    
                    if (rax_24 != 0)
                        r9_2 = rax_24
                    
                    int32_t temp9_1
                    int32_t temp10_1
                    temp9_1:temp10_1 = sx.q(r11_1 - 1)
                    int32_t rdx_13 = *r9_2
                    
                    if (rdx_13 != 0)
                    label_140ed368b:
                        int32_t rax_31 = neg.d(rdx_13) & rdx_13
                        uint64_t rflags_2
                        int32_t temp0_3
                        temp0_3, rflags_2 = _bit_scan_reverse(rax_31)
                        int32_t var_124_4 = rax_31
                        int32_t rax_32
                        
                        if (rax_31 == 0)
                            rax_32 = 0x20
                        else
                            rax_32 = 0x1f - temp0_3
                        
                        var_114_2.d = r8_6 - rax_32 + 0x1f
                        
                        if (r8_6 - rax_32 + 0x1f s> r11_1)
                            var_114_2.d = r11_1
                    else
                        while (true)
                            int64_t rdx_14 = sx.q(rcx_14)
                            r8_6 += 0x20
                            rcx_14 += 1
                            var_114_2:4.d = r8_6
                            var_128_2 = rcx_14
                            
                            if (rdx_14.d s>= (temp10_1 + (temp9_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_13 = *(r9_2 + (rdx_14 << 2) + 4)
                            int32_t var_118_4 = 0xffffffff
                            
                            if (rdx_13 != 0)
                                goto label_140ed368b
                        
                        var_114_2.d = r11_1
                
                void* var_30_1 = &arg1[1]
                int16_t var_c0_1 = 0
                int128_t var_68_2 = 0xffffffff
                int128_t zmm0
                zmm0.q = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
                int128_t var_f8 = (&arg1[1]).o
                int128_t var_e8_1 = var_128_2.o
                int128_t var_38 = zmm0
                
                if (0 s< r11_1)
                    int32_t r8_8 = var_e8_1:0xc.d
                    
                    while (true)
                        if (*(*var_f8.q + sx.q(r8_8) * 0x28 + 0x10) == *rbx_4)
                            sub_140ed4f30(zmm0:8.q, r8_8)
                        else
                            var_e8_1:8.d &= not.d(var_f8:0xc.d)
                            sub_14059bdd0(&var_f8:8)
                            r8_8 = var_e8_1:0xc.d
                            
                            if (r8_8 s< *(var_e8_1.q + 0x18))
                                continue
                            else if (var_c0_1.b == 0)
                                break
                        
                        if (var_c0_1:1.b == 0)
                            break
                        
                        r8_8.b = 1
                        sub_140d1a980(&arg1[1], arg1[2].d - *(arg1 + 0x3c), r8_8.b)
                        break
                
                result = sub_140dba910(&arg1[0xb], *rbx_4)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                result = (**rdi_1)(rdi_1)
                int32_t temp4_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    result = (*(*rdi_1 + 8))(rdi_1, 1)
        
        r12 += 1
        r13 += 0x10
        
        if (r12 s>= arg1[0x19].d)
            break

if (*(arg1 + 0xcc) s< 0)
    return sub_14095cd40(&arg1[0x18], 0)

int32_t i_1 = arg1[0x19].d

if (i_1 != 0)
    int64_t* rdi_3 = arg1[0x18] + 8
    int32_t i
    
    do
        int64_t* rbx_7 = *rdi_3
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                result = (**rbx_7)(rbx_7)
                int32_t temp2_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rbx_7 + 8))(rbx_7, 1)
        
        rdi_3 = &rdi_3[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[0x19].d = 0
return result
