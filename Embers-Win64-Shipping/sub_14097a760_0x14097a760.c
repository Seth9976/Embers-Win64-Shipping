// 函数: sub_14097a760
// 地址: 0x14097a760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* r15 = arg1

if (arg1[0x49] != 0)
    int64_t var_98_1 = 0
    int64_t* var_a8
    result = sub_1409633d0(&var_a8, (*(*arg1 + 0x150))(), 0)
    int64_t* r14_1 = var_a8
    
    if (r14_1 != 0)
        int64_t* rcx_1 = r15[0x49]
        int64_t var_90
        (*(*rcx_1 + 0x280))(rcx_1, &var_90)
        int64_t* rcx_2 = r15[0x49]
        int64_t* rax_4 = (*(*rcx_2 + 0x288))(rcx_2)
        int64_t r8_1 = *r14_1
        int64_t* r13_1 = rax_4
        result = (*(r8_1 + 0x20))(r14_1, var_90, r8_1)
        void* const* result_1 = result
        
        if (result != 0)
            uint64_t i_7 = 0
            int32_t rsi_1 = 0
            int64_t* r9_1 = nullptr
            int32_t i_6 = 0
            int64_t* var_b8 = nullptr
            int64_t var_b0_1 = 0
            int32_t i_3 = 0
            
            if (r13_1[1].d s> 0)
                int64_t r12_1 = 0
                int32_t i
                
                do
                    int64_t r13_2 = *r13_1
                    int32_t rdi_1 = 0
                    char rbx_1
                    
                    if (r15[0x48].d s> 0)
                        int64_t r14_2 = 0
                        
                        while (true)
                            void* rsi_2 = *(r15[0x47] + r14_2)
                            void* rax_6
                            int64_t rax_7
                            void* rdx_4
                            
                            if (rsi_2 != 0)
                                rax_6 = sub_140985530()
                                rdx_4 = *(rsi_2 + 0x10)
                                rax_7 = sx.q(*(rax_6 + 0x38))
                            
                            if (rsi_2 == 0 || rax_7.d s> *(rdx_4 + 0x38)
                                    || *(*(rdx_4 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                                int32_t rdx_8 = r15[0x48].d
                                int32_t rax_14 = rdx_8 - rdi_1 - 1
                                
                                if (rax_14 s>= 1)
                                    rax_14 = 1
                                
                                if (rax_14 != 0)
                                    int64_t rcx_8 = r15[0x47]
                                    memcpy(rcx_8 + (sx.q(rdi_1) << 3), 
                                        rcx_8 + (sx.q(rdx_8 - rax_14) << 3), rax_14 << 3)
                                    rdx_8 = r15[0x48].d
                                
                                r15[0x48].d = rdx_8 - 1
                                sub_1405c53d0(&r15[0x47])
                                rdi_1 -= 1
                                r14_2 -= 8
                            else
                                int64_t* rcx_5 = *(rsi_2 + 0x2f8)
                                int64_t rax_8
                                
                                if (rcx_5 != 0)
                                    rax_8 = (*(*rcx_5 + 0x28))(rcx_5)
                                
                                if (rcx_5 == 0 || rax_8.b == 0)
                                    rbx_1 = 0
                                else
                                    rbx_1 = 1
                                
                                int64_t* rcx_6 = *(r12_1 + r13_2 + 8)
                                
                                if (rcx_6 != 0)
                                    rax_8 = (*(*rcx_6 + 0x28))(rcx_6)
                                
                                if (rcx_6 == 0 || rax_8.b == 0)
                                    rax_8.b = 0
                                else
                                    rax_8.b = 1
                                
                                if (rbx_1 != rax_8.b)
                                    rax_8.b = 0
                                else
                                    if (rbx_1 != 0)
                                        int64_t* rcx_7 = *(rsi_2 + 0x2f8)
                                        rax_8 = (**rcx_7)(rcx_7, *(r12_1 + r13_2 + 8))
                                    
                                    if (rbx_1 != 0 && rax_8.b == 0)
                                        rax_8.b = 0
                                    else
                                        rax_8.b = 1
                                
                                if (rax_8.b != 0)
                                    r15 = arg1
                                    *(r12_1 + r13_2 + 0x74) = 0
                                    break
                            
                            rdi_1 += 1
                            r14_2 += 8
                            
                            if (rdi_1 s>= arg1[0x48].d)
                                rsi_1 = var_b0_1:4.d
                                r15 = arg1
                                result = result_1
                                r14_1 = var_a8
                                goto label_14097a98b
                        
                        goto label_14097ab38
                    
                label_14097a98b:
                    int64_t* rcx_11 = result[1]
                    char rax_20
                    
                    if (rcx_11 != 0)
                        rax_20 = (**rcx_11)(rcx_11, *(r12_1 + r13_2 + 0x30))
                    
                    if (rcx_11 == 0 || rax_20 == 0)
                        rbx_1 = 0
                    else
                        rbx_1 = 1
                    
                    if ((*(*r14_1 + 0x110))(r14_1, var_90, *(r12_1 + r13_2 + 0x30)) != 0
                            || rbx_1 != 0)
                        void* rax_29 = r15[0x49]
                        int64_t* r14_3 = *(rax_29 + 0x50)
                        int64_t* rbx_2 = r14_3
                        void* rdi_4 = &r14_3[sx.q(*(rax_29 + 0x58)) * 2]
                        
                        if (r14_3 != rdi_4)
                            int64_t* rsi_3 = *(r12_1 + r13_2 + 0x30)
                            
                            do
                                if ((**rsi_3)(rsi_3, *rbx_2) != 0)
                                    int32_t rbx_4 = ((rbx_2 - r14_3) s>> 4).d
                                    
                                    if (rbx_4 != 0xffffffff)
                                        *(r12_1 + r13_2 + 0x74) = 0
                                        sub_140911e80(r15[0x49] + 0x50, rbx_4, 1, 1)
                                    
                                    break
                                
                                rbx_2 = &rbx_2[2]
                            while (rbx_2 != rdi_4)
                        
                    label_14097ab38:
                        r14_1 = var_a8
                        r9_1 = var_b8
                        i_7 = zx.q(i_6)
                    else
                        *(r12_1 + r13_2 + 0x74) = arg2.d f+ *(r12_1 + r13_2 + 0x74)
                        
                        if (r15[0x56].b == rbx_1)
                            r9_1 = var_b8
                            i_7 = zx.q(i_6)
                        else
                            int32_t rax_23 =
                                sub_140947320(r15[0x49] + 0x50, *(r12_1 + r13_2 + 0x30))
                            float zmm0_1 = *(r12_1 + r13_2 + 0x74)
                            
                            if (rax_23 != 0xffffffff)
                                if (zmm0_1 f> r15[0x57].d)
                                    goto label_14097aa3b
                                
                                r9_1 = var_b8
                                i_7 = zx.q(i_6)
                            else if (zmm0_1 f<= *(r15 + 0x2b4))
                                r9_1 = var_b8
                                i_7 = zx.q(i_6)
                            else
                            label_14097aa3b:
                                r9_1 = var_b8
                                i_7 = sx.q(i_6)
                                int64_t* rax_24 = r9_1
                                void* rcx_17 = &r9_1[i_7 * 2]
                                
                                if (r9_1 != rcx_17)
                                    while (*rax_24 != *(r12_1 + r13_2 + 0x30))
                                        rax_24 = &rax_24[2]
                                        
                                        if (rax_24 == rcx_17)
                                            goto label_14097aa80
                                
                                if (r9_1 == rcx_17 || ((rax_24 - r9_1) s>> 4).d == 0xffffffff)
                                label_14097aa80:
                                    uint64_t i_8 = i_7
                                    i_7 = zx.q(i_7.d + 1)
                                    i_6 = i_7.d
                                    var_b0_1.d = i_7.d
                                    
                                    if (i_7.d s> rsi_1)
                                        sub_1405a4f90(&var_b8)
                                        i_7 = zx.q(var_b0_1.d)
                                        r9_1 = var_b8
                                        i_6 = i_7.d
                                    
                                    uint64_t rcx_20 = i_8 * 2
                                    r9_1[rcx_20] = *(r12_1 + r13_2 + 0x30)
                                    void* rax_28 = *(r12_1 + r13_2 + 0x38)
                                    r9_1[rcx_20 + 1] = rax_28
                                    
                                    if (rax_28 != 0)
                                        *(rax_28 + 8) += 1
                    
                    r12_1 += 0x78
                    r13_1 = rax_4
                    i = i_3 + 1
                    rsi_1 = var_b0_1:4.d
                    i_3 = i
                    result = result_1
                while (i s< r13_1[1].d)
            
            if (r15[0x56].b != 0 && i_7.d s> 0)
                int64_t* rsi_4 = r9_1
                uint64_t i_5 = zx.q(i_7.d)
                uint64_t i_1
                
                do
                    int32_t j = 0
                    
                    if (r13_1[1].d s> 0)
                        int64_t rdi_5 = 0
                        
                        do
                            int64_t* rcx_24 = *(rdi_5 + *r13_1 + 0x30)
                            char rax_35
                            rax_35, r9_1 = (**rcx_24)(rcx_24, *rsi_4)
                            
                            if (rax_35 != 0)
                                break
                            
                            j += 1
                            rdi_5 += 0x78
                        while (j s< r13_1[1].d)
                    
                    void* r10_1 = r15[0x49]
                    int64_t* r8_6 = *(r10_1 + 0x50)
                    int64_t* rax_36 = r8_6
                    void* rcx_27 = &r8_6[sx.q(*(r10_1 + 0x58)) * 2]
                    
                    if (r8_6 != rcx_27)
                        do
                            if (*rax_36 == *rsi_4)
                                int32_t rax_38 = ((rax_36 - r8_6) s>> 4).d
                                
                                if (rax_38 != 0xffffffff)
                                    r9_1.b = 1
                                    sub_140911e80(r10_1 + 0x50, rax_38, 1, r9_1.b)
                                
                                break
                            
                            rax_36 = &rax_36[2]
                        while (rax_36 != rcx_27)
                    
                    void** const var_80 = &data_142e25968
                    int64_t var_78_1 = *rsi_4
                    int64_t* rax_40 = rsi_4[1]
                    
                    if (rax_40 != 0)
                        rax_40[1].d += 1
                    
                    int64_t rax_41 = *r15
                    var_80 = &data_142e259e0
                    int64_t var_68_1 = 0
                    int64_t var_60_1 = 0
                    result, r9_1 = (*(rax_41 + 0x660))(r15, &var_80)
                    var_80 = &data_142e259e0
                    
                    if (var_68_1 != 0)
                        result, r9_1 = sub_140a74f90(var_68_1)
                    
                    if (rax_40 != 0)
                        rax_40[1].d -= 1
                        
                        if (rax_40[1].d == 1)
                            result, r9_1 = (**rax_40)(rax_40)
                            int32_t temp6_1 = *(rax_40 + 0xc)
                            *(rax_40 + 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                result, r9_1 = (*(*rax_40 + 8))(rax_40, 1)
                    
                    rsi_4 = &rsi_4[2]
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
            
            int32_t i_4 = i_6
            int64_t* r14_4 = var_b8
            
            if (i_4 != 0)
                int64_t* rdi_6 = &r14_4[1]
                int32_t i_2
                
                do
                    int64_t* rbx_6 = *rdi_6
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d -= 1
                        
                        if (rbx_6[1].d == 1)
                            result = (**rbx_6)(rbx_6)
                            int32_t temp3_1 = *(rbx_6 + 0xc)
                            *(rbx_6 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                result = (*(*rbx_6 + 8))(rbx_6, 1)
                    
                    rdi_6 = &rdi_6[2]
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
            
            if (r14_4 != 0)
                result = sub_140a74f90(r14_4)
    
    int64_t* var_a0
    
    if (var_a0 != 0)
        result = zx.q(var_a0[1].d)
        var_a0[1].d -= 1
        
        if (result.d == 1)
            result = (**var_a0)(var_a0)
            int32_t rdi_7 = *(var_a0 + 0xc)
            *(var_a0 + 0xc) -= 1
            
            if (rdi_7 == 1)
                return (*(*var_a0 + 8))(var_a0, zx.q(rdi_7))

return result
