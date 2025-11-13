// 函数: sub_14097a050
// 地址: 0x14097a050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* rsi = arg1

if (arg1[0x49] != 0)
    int64_t var_98_1 = 0
    int64_t* var_c8
    result = sub_1409633d0(&var_c8, (*(*arg1 + 0x150))(), 0)
    int64_t* r14_1 = var_c8
    
    if (r14_1 != 0)
        int64_t* rcx_1 = rsi[0x49]
        int64_t var_90
        (*(*rcx_1 + 0x2a8))(rcx_1, &var_90)
        int64_t* rcx_2 = rsi[0x49]
        int64_t* rax_4 = (*(*rcx_2 + 0x2b0))(rcx_2)
        int64_t r8_1 = *r14_1
        int64_t* rbx_1 = rax_4
        result = (*(r8_1 + 0x20))(r14_1, var_90, r8_1)
        void* const* result_1 = result
        void* const* result_2 = result
        
        if (result != 0)
            int32_t i_7 = 0
            int64_t* r9_1 = nullptr
            int64_t* var_b0 = nullptr
            int32_t i_6 = 0
            int64_t var_a8_1 = 0
            int32_t arg_20 = 0
            
            if (rbx_1[1].d s> 0)
                int64_t r12_1 = 0
                int64_t var_80_1 = 0
                
                do
                    int64_t r13_1 = *rbx_1
                    int32_t rdi_1 = 0
                    
                    if (rsi[0x48].d s<= 0)
                    label_14097a2a2:
                        int64_t rax_19 = r13_1
                        int32_t i = 0
                        
                        if (*(r12_1 + rax_19 + 0x38) s> 0)
                            int64_t r15_2 = 0
                            
                            do
                                int64_t* rcx_12 = result_2[1]
                                int64_t r12_2 = *(r12_1 + rax_19 + 0x30)
                                char rax_21
                                
                                if (rcx_12 != 0)
                                    rax_21 = (**rcx_12)(rcx_12, *(r15_2 + r12_2 + 8))
                                
                                if (rcx_12 == 0 || rax_21 == 0)
                                    rbx_1.b = 0
                                else
                                    rbx_1.b = 1
                                
                                if ((*(*r14_1 + 0x110))(r14_1, var_90, *(r15_2 + r12_2 + 8)) != 0
                                        || rbx_1.b != 0)
                                    void* rax_32 = rsi[0x49]
                                    int64_t* r14_5 = *(rax_32 + 0x68)
                                    rbx_1 = r14_5
                                    void* rdi_7 = &r14_5[sx.q(*(rax_32 + 0x70)) * 2]
                                    
                                    if (r14_5 != rdi_7)
                                        int64_t* rsi_3 = *(r15_2 + r12_2 + 8)
                                        
                                        while (true)
                                            if ((**rsi_3)(rsi_3, *rbx_1) != 0)
                                                rsi = arg1
                                                rbx_1 = (rbx_1 - r14_5) s>> 4
                                                
                                                if (rbx_1.d != 0xffffffff)
                                                    *(r15_2 + r12_2 + 0x4c) = 0
                                                    sub_140911e80(rsi[0x49] + 0x68, rbx_1.d, 1, 1)
                                                
                                                break
                                            
                                            rbx_1 = &rbx_1[2]
                                            
                                            if (rbx_1 == rdi_7)
                                                rsi = arg1
                                                break
                                    
                                    r14_1 = var_c8
                                else
                                    *(r15_2 + r12_2 + 0x4c) = arg2.d f+ *(r15_2 + r12_2 + 0x4c)
                                    
                                    if (rsi[0x56].b != rbx_1.b)
                                        void* rax_24 = rsi[0x49]
                                        int64_t* r14_3 = *(rax_24 + 0x68)
                                        int64_t* rbx_2 = r14_3
                                        void* rdi_4 = &r14_3[sx.q(*(rax_24 + 0x70)) * 2]
                                        
                                        if (r14_3 == rdi_4)
                                        label_14097a368:
                                            rbx_1 = 0xffffffff
                                        else
                                            int64_t* rsi_2 = *(r15_2 + r12_2 + 8)
                                            
                                            while (true)
                                                if ((**rsi_2)(rsi_2, *rbx_2) != 0)
                                                    rbx_1 = (rbx_2 - r14_3) s>> 4
                                                    break
                                                
                                                rbx_2 = &rbx_2[2]
                                                
                                                if (rbx_2 == rdi_4)
                                                    goto label_14097a368
                                        
                                        float zmm0_1 = *(r15_2 + r12_2 + 0x4c)
                                        rsi = arg1
                                        
                                        if (rbx_1.d != 0xffffffff)
                                            if (zmm0_1 f> rsi[0x57].d)
                                                goto label_14097a3a1
                                            
                                            r14_1 = var_c8
                                        else if (zmm0_1 f<= *(rsi + 0x2b4))
                                            r14_1 = var_c8
                                        else
                                        label_14097a3a1:
                                            int64_t* r9_2 = var_b0
                                            int64_t* i_8 = sx.q(i_6)
                                            int64_t* rax_27 = r9_2
                                            void* rcx_17 = &r9_2[i_8 * 2]
                                            
                                            if (r9_2 != rcx_17)
                                                while (*rax_27 != *(r15_2 + r12_2 + 8))
                                                    rax_27 = &rax_27[2]
                                                    
                                                    if (rax_27 == rcx_17)
                                                        goto label_14097a3e6
                                            
                                            if (r9_2 != rcx_17
                                                    && ((rax_27 - r9_2) s>> 4).d != 0xffffffff)
                                                r14_1 = var_c8
                                            else
                                            label_14097a3e6:
                                                i_6 = i_8.d + 1
                                                var_a8_1.d = i_8.d + 1
                                                
                                                if (i_8.d + 1 s> var_a8_1:4.d)
                                                    sub_1405a4f90(&var_b0)
                                                    r9_2 = var_b0
                                                    i_6 = var_a8_1.d
                                                
                                                r14_1 = var_c8
                                                int64_t rcx_20 = i_8 * 2
                                                r9_2[rcx_20] = *(r15_2 + r12_2 + 8)
                                                void* rax_31 = *(r15_2 + r12_2 + 0x10)
                                                r9_2[rcx_20 + 1] = rax_31
                                                
                                                if (rax_31 != 0)
                                                    *(rax_31 + 8) += 1
                                
                                r12_1 = var_80_1
                                i += 1
                                rax_19 = r13_1
                                r15_2 += 0x50
                                result_2 = result_1
                            while (i s< *(r12_1 + rax_19 + 0x38))
                            
                            rbx_1 = rax_4
                    else
                        void* r15_1 = &rsi[0x47]
                        int64_t* r14_2 = nullptr
                        
                        while (true)
                            void* rsi_1 = *(r14_2 + *r15_1)
                            void* rax_6
                            int64_t rax_7
                            void* rdx_4
                            
                            if (rsi_1 != 0)
                                rax_6 = sub_1409858c0()
                                rdx_4 = *(rsi_1 + 0x10)
                                rax_7 = sx.q(*(rax_6 + 0x38))
                            
                            if (rsi_1 == 0 || rax_7.d s> *(rdx_4 + 0x38)
                                    || *(*(rdx_4 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                                int32_t rdx_8 = *(r15_1 + 8)
                                int32_t rax_15 = rdx_8 - rdi_1 - 1
                                
                                if (rax_15 s>= 1)
                                    rax_15 = 1
                                
                                if (rax_15 != 0)
                                    int64_t rcx_9 = *r15_1
                                    memcpy(rcx_9 + (sx.q(rdi_1) << 3), 
                                        rcx_9 + (sx.q(rdx_8 - rax_15) << 3), rax_15 << 3)
                                    rdx_8 = *(r15_1 + 8)
                                
                                *(r15_1 + 8) = rdx_8 - 1
                                sub_1405c53d0(r15_1)
                                rdi_1 -= 1
                                r14_2 -= 8
                            else
                                int64_t* rcx_5 = *(rsi_1 + 0x300)
                                int64_t rax_8
                                
                                if (rcx_5 != 0)
                                    rax_8 = (*(*rcx_5 + 0x28))(rcx_5)
                                
                                if (rcx_5 == 0 || rax_8.b == 0)
                                    rbx_1.b = 0
                                else
                                    rbx_1.b = 1
                                
                                int64_t* rcx_6 = *(r12_1 + r13_1 + 0x10)
                                
                                if (rcx_6 != 0)
                                    rax_8 = (*(*rcx_6 + 0x28))(rcx_6)
                                
                                if (rcx_6 == 0 || rax_8.b == 0)
                                    rax_8.b = 0
                                else
                                    rax_8.b = 1
                                
                                if (rbx_1.b != rax_8.b)
                                    rax_8.b = 0
                                else
                                    if (rbx_1.b != 0)
                                        int64_t* rcx_7 = *(rsi_1 + 0x300)
                                        rax_8 = (**rcx_7)(rcx_7, *(r12_1 + r13_1 + 0x10))
                                    
                                    if (rbx_1.b != 0 && rax_8.b == 0)
                                        rax_8.b = 0
                                    else
                                        rax_8.b = 1
                                
                                if (rax_8.b != 0)
                                    int32_t i_1 = 0
                                    
                                    if (*(r12_1 + r13_1 + 0x38) s> 0)
                                        int64_t rcx_8 = 0
                                        
                                        do
                                            rcx_8 += 0x50
                                            i_1 += 1
                                            *(*(r12_1 + r13_1 + 0x30) + rcx_8 - 4) = 0
                                        while (i_1 s< *(r12_1 + r13_1 + 0x38))
                                    
                                    break
                            
                            rsi = arg1
                            rdi_1 += 1
                            r14_2 = &r14_2[1]
                            
                            if (rdi_1 s>= rsi[0x48].d)
                                r14_1 = var_c8
                                rbx_1 = rax_4
                                result_2 = result_1
                                goto label_14097a2a2
                        
                        rbx_1 = rax_4
                    
                    r12_1 += 0x50
                    rsi = arg1
                    result = zx.q(arg_20 + 1)
                    r14_1 = var_c8
                    result_2 = result_1
                    arg_20 = result.d
                    var_80_1 = r12_1
                while (result.d s< rbx_1[1].d)
                
                i_7 = i_6
                r9_1 = var_b0
            
            if (rsi[0x56].b != 0 && i_7 s> 0)
                uint64_t i_4 = zx.q(i_7)
                arg_20.q = i_4
                int64_t* r15_3 = r9_1
                uint64_t i_2
                
                do
                    int32_t j = 0
                    
                    if (rbx_1[1].d s> 0)
                        int64_t rsi_4 = 0
                        
                        do
                            int64_t r14_6 = *rax_4
                            int32_t rbx_5 = 0
                            
                            if (*(rsi_4 + r14_6 + 0x38) s> 0)
                                int64_t rdi_8 = 0
                                
                                while (true)
                                    int64_t* rcx_24 = *(*(rsi_4 + r14_6 + 0x30) + rdi_8 + 8)
                                    char rax_38
                                    rax_38, r9_1 = (**rcx_24)(rcx_24, *r15_3)
                                    
                                    if (rax_38 != 0)
                                        break
                                    
                                    rbx_5 += 1
                                    rdi_8 += 0x50
                                    
                                    if (rbx_5 s>= *(rsi_4 + r14_6 + 0x38))
                                        goto label_14097a573
                                
                                break
                            
                        label_14097a573:
                            j += 1
                            rsi_4 += 0x50
                        while (j s< rax_4[1].d)
                        
                        i_4 = arg_20.q
                        rsi = arg1
                    
                    void* r10_1 = rsi[0x49]
                    int64_t* r8_7 = *(r10_1 + 0x68)
                    int64_t* rax_39 = r8_7
                    void* rcx_27 = &r8_7[sx.q(*(r10_1 + 0x70)) * 2]
                    
                    if (r8_7 != rcx_27)
                        do
                            if (*rax_39 == *r15_3)
                                int32_t rax_50 = ((rax_39 - r8_7) s>> 4).d
                                
                                if (rax_50 != 0xffffffff)
                                    r9_1.b = 1
                                    sub_140911e80(r10_1 + 0x68, rax_50, 1, r9_1.b)
                                
                                break
                            
                            rax_39 = &rax_39[2]
                        while (rax_39 != rcx_27)
                    
                    void** const var_78 = &data_142e25968
                    int64_t var_70_1 = *r15_3
                    int64_t* rax_41 = r15_3[1]
                    
                    if (rax_41 != 0)
                        rax_41[1].d += 1
                    
                    var_78 = &data_142e259e0
                    int64_t var_60_1 = 0
                    int64_t var_58_1 = 0
                    result, r9_1 = (*(*rsi + 0x670))(rsi, &var_78)
                    var_78 = &data_142e259e0
                    
                    if (var_60_1 != 0)
                        result, r9_1 = sub_140a74f90(var_60_1)
                    
                    if (rax_41 != 0)
                        rax_41[1].d -= 1
                        
                        if (rax_41[1].d == 1)
                            result, r9_1 = (**rax_41)(rax_41)
                            int32_t temp6_1 = *(rax_41 + 0xc)
                            *(rax_41 + 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                result, r9_1 = (*(*rax_41 + 8))(rax_41, 1)
                    
                    rbx_1 = rax_4
                    r15_3 = &r15_3[2]
                    i_2 = i_4
                    i_4 -= 1
                    arg_20.q = i_4
                while (i_2 != 1)
            
            int32_t i_5 = i_6
            
            if (i_5 != 0)
                void* rdi_10 = &var_b0[1]
                int32_t i_3
                
                do
                    int64_t* rbx_7 = *rdi_10
                    
                    if (rbx_7 != 0)
                        rbx_7[1].d -= 1
                        
                        if (rbx_7[1].d == 1)
                            result = (**rbx_7)(rbx_7)
                            int32_t temp3_1 = *(rbx_7 + 0xc)
                            *(rbx_7 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                result = (*(*rbx_7 + 8))(rbx_7, 1)
                    
                    rdi_10 += 0x10
                    i_3 = i_5
                    i_5 -= 1
                while (i_3 != 1)
            
            int64_t* rsi_5 = var_b0
            
            if (rsi_5 != 0)
                result = sub_140a74f90(rsi_5)
    
    int64_t* var_c0
    
    if (var_c0 != 0)
        result = zx.q(var_c0[1].d)
        var_c0[1].d -= 1
        
        if (result.d == 1)
            result = (**var_c0)(var_c0)
            int32_t rdi_11 = *(var_c0 + 0xc)
            *(var_c0 + 0xc) -= 1
            
            if (rdi_11 == 1)
                return (*(*var_c0 + 8))(var_c0, 1)

return result
