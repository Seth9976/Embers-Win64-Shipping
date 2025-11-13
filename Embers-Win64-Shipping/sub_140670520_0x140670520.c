// 函数: sub_140670520
// 地址: 0x140670520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i_2 = arg3
int64_t* i_5 = arg3
int64_t* i_6 = arg1
sub_1406797b0(arg1)
int64_t* rcx = *i_5

if (rcx != 0)
    i_6[0x33].d = (*(*rcx + 0x40))(rcx)

if (arg4 != 0)
    int64_t* rcx_1 = *i_5
    
    if (rcx_1 != 0)
        int64_t* var_d8
        (*(*rcx_1 + 0x18))(rcx_1, &var_d8)
        int64_t* r12_1 = var_d8
        int16_t* const rbx_1 = &data_142d40450
        int32_t i_4
        void* rax_6 = &r12_1[sx.q(i_4) * 2]
        int64_t* var_e0_1 = r12_1
        int64_t r13_1 = -1
        int64_t var_148
        void*** var_138
        int64_t var_f8
        
        if (r12_1 != rax_6)
            do
                int32_t rbx_2 = r12_1[1].d
                int64_t rdi_1 = *r12_1
                int16_t* var_108 = nullptr
                int32_t var_fc
                
                if (rbx_2 != 0)
                    sub_1405a4c70(&var_108, rbx_2, 0)
                    memcpy(var_108, rdi_1, rbx_2 * 2)
                else
                    __builtin_memset(&var_fc, 0, 0x14)
                int64_t rsi_1 = 0
                void*** rdi_2 = nullptr
                var_138 = nullptr
                int16_t* var_118 = nullptr
                int64_t var_130_1 = 0
                int32_t var_110_1 = 0
                sub_1405947f0(&var_118, 3)
                int32_t r14 = var_110_1 + 3
                
                if (r14 s> 0)
                    sub_140594770(&var_118)
                
                UnDecorator::getReferenceType(var_118, &data_142d85f5c, 6)
                int16_t* const rdx_4 = &data_142d40450
                
                if (r14 != 0)
                    rdx_4 = var_118
                
                int32_t rax_7 = sub_140a23cf0(&var_108, rdx_4, 1, 0, 0xffffffff)
                
                if (rax_7 s>= 0)
                    int32_t r8_2 = rbx_2
                    int64_t var_140
                    int32_t rbx_3
                    int32_t rdi_3
                    int32_t arg_20
                    int16_t* r12_2
                    int32_t r15
                    
                    if (r8_2 == 0)
                        r12_2 = &data_142d40450
                        rbx_3 = 0
                        var_148 = 0
                        var_140.d = 0
                        rsi_1 = 0
                        rdi_3 = 0
                        var_140:4.d = 0
                        r15 = 0
                        arg_20 = 0
                    label_14067072c:
                        
                        if (*r12_2 != 0 && r15 s> 0)
                            sub_1405947f0(&var_148, r15 + 1)
                            rdi_3 = var_140:4.d
                            rbx_3 = var_140.d + 1 + arg_20
                            var_140.d = rbx_3
                            
                            if (rbx_3 s> rdi_3)
                                sub_140594770(&var_148)
                                rdi_3 = var_140:4.d
                                rbx_3 = var_140.d
                            
                            rsi_1 = var_148
                            UnDecorator::getReferenceType(rsi_1, r12_2, r15 * 2)
                            *(rsi_1 + (sx.q(rbx_3) << 1) - 2) = 0
                            r8_2 = rbx_2
                    else
                        r12_2 = var_108
                        r15 = r8_2 - 1
                        
                        if (rax_7 s< r15)
                            r15 = rax_7
                        
                        arg_20 = r15
                        rbx_3 = 0
                        var_140.d = 0
                        rsi_1 = 0
                        var_148 = 0
                        rdi_3 = 0
                        var_140:4.d = 0
                        
                        if (r12_2 != 0)
                            goto label_14067072c
                    var_f8 = rsi_1
                    var_148 = 0
                    int64_t var_f0_1
                    var_f0_1.d = rbx_3
                    var_f0_1:4.d = rdi_3
                    var_140 = 0
                    int32_t r14_1
                    
                    if (r14 == 0)
                        r14_1 = 0
                    else
                        r14_1 = r14 - 1
                    
                    int32_t rax_9 = rax_7 + r14_1
                    int32_t rbx_5 = r8_2 - 1
                    
                    if (r8_2 == 0)
                        rbx_5 = 0
                    
                    int32_t rcx_11
                    
                    if (rax_9 s>= 0)
                        rcx_11 = rbx_5
                        
                        if (rax_9 s< rbx_5)
                            rcx_11 = rax_9
                    else
                        rcx_11 = 0
                    
                    int64_t r9 = sx.q(rcx_11)
                    
                    if (sx.q(rax_9) + 0x7fffffff s< r9)
                        rbx_5 = rcx_11
                    else if (sx.q(rax_9) + 0x7fffffff s< sx.q(rbx_5))
                        rbx_5 = rax_9 + 0x7fffffff
                    
                    void*** var_128 = nullptr
                    int16_t* rax_11 = &data_142d40450
                    int64_t var_120_1 = 0
                    
                    if (r8_2 != 0)
                        rax_11 = var_108
                    
                    rdi_2 = nullptr
                    rbx_2 = rbx_5 - rcx_11
                    int32_t r14_2 = 0
                    int32_t r15_1 = 0
                    void* r12_3 = &rax_11[r9]
                    
                    if (r12_3 != 0 && *r12_3 != 0 && rbx_2 s> 0)
                        sub_1405947f0(&var_128, rbx_2 + 1)
                        r15_1 = var_120_1:4.d
                        r14_2 = var_120_1.d + 1 + rbx_2
                        var_120_1.d = r14_2
                        
                        if (r14_2 s> r15_1)
                            sub_140594770(&var_128)
                            r15_1 = var_120_1:4.d
                            r14_2 = var_120_1.d
                        
                        rdi_2 = var_128
                        UnDecorator::getReferenceType(rdi_2, r12_3, rbx_2 * 2)
                        *(rdi_2 + (sx.q(r14_2) << 1) - 2) = 0
                    
                    r12_1 = var_e0_1
                    rbx_2.b = 1
                    var_130_1:4.d = r15_1
                    i_6 = arg1
                    var_128 = nullptr
                    int64_t var_120_2 = 0
                    var_138 = rdi_2
                    var_130_1.d = r14_2
                else
                    rbx_2.b = 0
                
                int16_t* rcx_15 = var_118
                
                if (rcx_15 != 0)
                    sub_140a74f90(rcx_15)
                
                if (rbx_2.b != 0)
                    sub_1406253f0(&i_6[0x29], &var_f8, &var_138)
                    rsi_1 = var_f8
                    rdi_2 = var_138
                
                if (rdi_2 != 0)
                    sub_140a74f90(rdi_2)
                
                if (rsi_1 != 0)
                    sub_140a74f90(rsi_1)
                
                int16_t* rcx_19 = var_108
                
                if (rcx_19 != 0)
                    sub_140a74f90(rcx_19)
                
                r12_1 = &r12_1[2]
                var_e0_1 = r12_1
            while (r12_1 != rax_6)
            
            i_5 = i_2
            rbx_1 = &data_142d40450
        
        int64_t rax_13 = sub_14066eb50(i_6)
        int64_t* rcx_21 = *i_5
        int64_t r8_8 = *rcx_21
        int64_t (* var_b8)(int64_t* arg1)
        
        if (*(rax_13 + 0x29) == 0)
            int16_t** rax_20 = (*(r8_8 + 0x48))(rcx_21, &var_f8, r8_8)
            int64_t rsi_3 = 0
            int32_t rdx_19 = 0
            int32_t rcx_30 = 0
            var_148 = 0
            int64_t var_140_1 = 0
            
            if (rax_20[1].d != 0)
                rbx_1 = *rax_20
            
            if ((rax_20[1].d == 0 || rbx_1 != 0) && *rbx_1 != 0)
                do
                    r13_1 += 1
                while (rbx_1[r13_1] != 0)
                
                if (r13_1.d + 1 s> 0)
                    sub_1405947f0(&var_148, r13_1.d + 1)
                    rcx_30 = var_140_1:4.d
                    rdx_19 = var_140_1.d
                    rsi_3 = var_148
                
                int32_t rax_21 = rdx_19 + r13_1.d + 1
                var_140_1.d = rax_21
                
                if (rax_21 s> rcx_30)
                    sub_140594770(&var_148)
                    rsi_3 = var_148
                
                UnDecorator::getReferenceType(rsi_3, rbx_1, (r13_1.d + 1) * 2)
            
            void*** rax_22 = j_sub_140a82f30(0x88)
            void*** rbx_10
            
            if (rax_22 == 0)
                rbx_10 = nullptr
            else
                void*** rax_23 = sub_1406695d0(rax_22, &var_148)
                rsi_3 = var_148
                rbx_10 = rax_23
            
            void*** rax_24 = j_sub_140a82f30(0x18)
            
            if (rax_24 != 0)
                rax_24[1].d = 1
                *rax_24 = &data_142d83c20
                *(rax_24 + 0xc) = 1
                rax_24[2] = rbx_10
            
            var_138 = rbx_10
            void*** r14_4 = var_138
            
            if (rax_24 != 0)
                rax_24[1].d += 1
                
                if (rax_24 != 0)
                    rax_24[1].d -= 1
                    
                    if (rax_24[1].d == 1)
                        (**rax_24)(rax_24)
                        int32_t temp6_1 = *(rax_24 + 0xc)
                        *(rax_24 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*rax_24)[1](rax_24, 1)
            
            if (rsi_3 != 0)
                sub_140a74f90(rsi_3)
            
            int64_t rcx_38 = var_f8
            
            if (rcx_38 != 0)
                sub_140a74f90(rcx_38)
            
            var_138.o = zx.o(0)
            
            if (sub_140665cf0(r14_4, &var_138, 0) == 0)
                i_5 = i_2
            else
                if (rax_24 != 0)
                    rax_24[1].d += 2
                
                void* rdx_24 = i_6[0x1d]
                
                if (var_138 == 0)
                    sub_140679620(rdx_24)
                else
                    var_138.o = var_138.o
                    
                    if (rax_24 != 0)
                        rax_24[1].d += 1
                    
                    void*** rcx_40 = *(rdx_24 + 0x28)
                    int64_t* rsi_4 = *(rdx_24 + 0x30)
                    *(rdx_24 + 0x28) = var_138
                    *(rdx_24 + 0x30) = rax_24
                    var_138 = rcx_40
                    
                    if (rsi_4 != 0)
                        rsi_4[1].d -= 1
                        
                        if (rsi_4[1].d == 1)
                            (**rsi_4)(rsi_4)
                            int32_t temp16_1 = *(rsi_4 + 0xc)
                            *(rsi_4 + 0xc) -= 1
                            
                            if (temp16_1 == 1)
                                (*(*rsi_4 + 8))(rsi_4, 1)
                
                if (rax_24 != 0)
                    rax_24[1].d -= 1
                    
                    if (rax_24[1].d == 1)
                        (**rax_24)(rax_24)
                        int32_t temp15_1 = *(rax_24 + 0xc)
                        *(rax_24 + 0xc) -= 1
                        
                        if (temp15_1 == 1)
                            (*rax_24)[1](rax_24, 1)
                    
                    rax_24[1].d -= 1
                    
                    if (rax_24[1].d == 1)
                        (**rax_24)(rax_24)
                        int32_t temp17_1 = *(rax_24 + 0xc)
                        *(rax_24 + 0xc) -= 1
                        
                        if (temp17_1 == 1)
                            (*rax_24)[1](rax_24, 1)
                
                i_5 = i_2
                int64_t* rcx_48 = *i_5
                i_6[0x11].d = (*(*rcx_48 + 0x28))(rcx_48)
            
            if (rax_24 != 0)
                rax_24[1].d -= 1
                
                if (rax_24[1].d == 1)
                    (**rax_24)(rax_24)
                    int32_t temp10_1 = *(rax_24 + 0xc)
                    *(rax_24 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*rax_24)[1](rax_24, 1)
            
            if (rax_24 != 0)
                rax_24[1].d -= 1
                
                if (rax_24[1].d == 1)
                    (**rax_24)(rax_24)
                    int32_t temp11_1 = *(rax_24 + 0xc)
                    *(rax_24 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*rax_24)[1](rax_24, 1)
        else
            int64_t** rax_14 = (*(r8_8 + 0x30))(rcx_21)
            void* rsi_2 = i_6[0x1d]
            int64_t* i = *rax_14
            int64_t rbx_6 = sx.q(rax_14[1].d)
            i_2 = i
            sub_140669460(&var_b8)
            
            for (void* rbx_7 = rbx_6 + i; i u< rbx_7; i = i_2)
                if (sub_140672d50(&var_b8, sub_14060e800(&i_2, rbx_7.d - i.d)) == 0)
                    break
            
            int64_t var_98
            
            if (var_98 == 0)
                sub_140679620(rsi_2)
            else
                void* var_90
                
                if (var_90 != 0)
                    *(var_90 + 8) += 1
                
                int64_t* rbx_8 = *(rsi_2 + 0x30)
                void*** rax_17 = *(rsi_2 + 0x28)
                *(rsi_2 + 0x28) = var_98
                var_138 = rax_17
                *(rsi_2 + 0x30) = var_90
                
                if (rbx_8 != 0)
                    rbx_8[1].d -= 1
                    
                    if (rbx_8[1].d == 1)
                        (**rbx_8)(rbx_8)
                        int32_t temp4_1 = *(rbx_8 + 0xc)
                        *(rbx_8 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rbx_8 + 8))(rbx_8, 1)
            
            sub_140669f90(&var_b8)
            int32_t var_58
            i_6[0x11].d = var_58
        
        if (i_6[0x11].d s<= 0)
            i_6[0x14].b = 0
            int64_t* rcx_53 = *i_5
            sub_140597da0(&i_6[0x12], (*(*rcx_53 + 0x48))(rcx_53, &var_138))
            void*** rcx_55 = var_138
            
            if (rcx_55 != 0)
                sub_140a74f90(rcx_55)
            
            i_6[0x11].d = *(i_6 + 0x9c) * 2
        else
            i_6[0x14].b = 1
        
        int64_t var_a8_1 = 0
        void** const var_98_1 = &data_142d83c70
        int64_t* i_7 = i_6
        var_b8 = sub_14066b5e0
        sub_140a20e40(2, &var_b8)
        int64_t* rcx_56 = i_6[0x15]
        
        if (rcx_56 != 0)
            i_6[0x15] = 0
            (*(*rcx_56 + 0x20))(rcx_56, &i_6[0x1d])
        
        int32_t i_3 = i_4
        int64_t* rbx_13 = var_d8
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                int64_t rcx_57 = *rbx_13
                
                if (rcx_57 != 0)
                    sub_140a74f90(rcx_57)
                
                rbx_13 = &rbx_13[2]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            rbx_13 = var_d8
        
        if (rbx_13 != 0)
            sub_140a74f90(rbx_13)
        
        sub_140669d70(arg2)
        return sub_140669db0(i_5)

i_2 = i_6
sub_1405a9f90(&i_6[7], &i_2)
int32_t result = sub_14066b520(&i_6[0xc], i_6)
int64_t* rbx_14 = *(arg2 + 8)

if (rbx_14 != 0)
    rbx_14[1].d -= 1
    
    if (rbx_14[1].d == 1)
        result = (**rbx_14)(rbx_14)
        int32_t temp2_1 = *(rbx_14 + 0xc)
        *(rbx_14 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_14 + 8))(rbx_14, 1)

int64_t* rbx_15 = i_5[1]

if (rbx_15 != 0)
    result = rbx_15[1].d
    rbx_15[1].d -= 1
    
    if (result == 1)
        result = (**rbx_15)(rbx_15)
        int32_t r13_3 = *(rbx_15 + 0xc)
        *(rbx_15 + 0xc) -= 1
        
        if (r13_3 == 1)
            return (*(*rbx_15 + 8))(rbx_15, zx.q(r13_3))

return result
