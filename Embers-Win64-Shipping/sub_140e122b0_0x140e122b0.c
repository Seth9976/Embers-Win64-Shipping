// 函数: sub_140e122b0
// 地址: 0x140e122b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
int64_t* r12 = arg2
arg2[1] = 0

if (*(arg1 - 0x50) != 0)
    void* rax_1 = *(arg1 - 0x48)
    
    if (rax_1 != 0 && *(rax_1 + 8) s> 0)
        void* var_a8 = nullptr
        int64_t var_a0 = 0
        sub_1405a5410(&var_a8, 0xa)
        int64_t* rbx = *(arg1 - 0x58)
        int64_t r14 = 0
        
        if (rbx != 0)
            int32_t rax_2 = rbx[1].d
            
            if (rax_2 != 0)
                rbx[1].d = rax_2 + 1
                rax_2.b = 1
            
            if (rax_2.b == 0)
                rbx = nullptr
            
            if (rbx != 0)
                r14 = *(arg1 - 0x60)
                rbx[1].d += 1
        
        int64_t rsi = sx.q(var_a0.d)
        int32_t i = (rsi + 1).d
        var_a0.d = i
        
        if (i s> 0)
            sub_1405a4f90(&var_a8)
            i = var_a0.d
        
        void* r15 = var_a8
        int64_t rax_4 = rsi * 2
        *(r15 + (rax_4 << 3)) = r14
        *(r15 + (rax_4 << 3) + 8) = rbx
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp1_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx + 8))(rbx, 1)
        
        if (i s> 0)
            uint128_t zmm6
            uint128_t var_38_1 = zmm6
            uint128_t zmm7
            uint128_t var_48_1 = zmm7
            
            do
                int32_t i_3 = i - 1
                int64_t i_4 = sx.q(i_3)
                void* r14_1 = r15 + i_4 * 0x10
                int64_t* rax_9 = (i_4 << 4) + r15
                int64_t* r12_1 = rax_9[1]
                int64_t* r13_1 = *rax_9
                rax_9[1] = 0
                *rax_9 = 0
                int64_t* rbx_1 = *(r14_1 + 8)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp6_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                int32_t rdi_1 = i - i_3
                
                if (rdi_1 != 1)
                    memmove(r14_1, (sx.q(i_3 + 1) << 4) + r15, (rdi_1 - 1) << 4)
                
                i = i_3
                
                if (r13_1 != 0 && (*(*r13_1 + 0x78))(r13_1) == 0)
                    int64_t rax_15 = *r13_1
                    zmm7 = _mm_cvtepi32_ps(zx.o(arg3))
                    zmm6 = _mm_cvtepi32_ps(zx.o(arg4))
                    void var_60
                    int32_t* rax_16 = (*(rax_15 + 0x20))(r13_1, &var_60)
                    
                    if (not(zmm7.d f<= *rax_16) && not(zmm7.d f>= rax_16[2])
                            && not(zmm6.d f<= rax_16[1]) && not(zmm6.d f>= rax_16[3]))
                        int32_t r14_2 = var_a0:4.d
                        
                        if (r14_2 s< 0)
                            if (i_3 != 0)
                                void* rsi_2 = r15 + 8
                                int32_t j
                                
                                do
                                    int64_t* rbx_3 = *rsi_2
                                    
                                    if (rbx_3 != 0)
                                        rbx_3[1].d -= 1
                                        
                                        if (rbx_3[1].d == 1)
                                            (**rbx_3)(rbx_3)
                                            int32_t temp14_1 = *(rbx_3 + 0xc)
                                            *(rbx_3 + 0xc) -= 1
                                            
                                            if (temp14_1 == 1)
                                                (*(*rbx_3 + 8))(rbx_3, 1)
                                    
                                    rsi_2 += 0x10
                                    j = i
                                    i -= 1
                                while (j != 1)
                            
                            i = 0
                            var_a0.d = 0
                            
                            if (r14_2 != 0)
                                sub_1405a5410(&var_a8, 0)
                                i = var_a0.d
                        else
                            if (i_3 != 0)
                                int64_t* rsi_1 = r15 + 8
                                int32_t j_1
                                
                                do
                                    int64_t* rbx_2 = *rsi_1
                                    
                                    if (rbx_2 != 0)
                                        rbx_2[1].d -= 1
                                        
                                        if (rbx_2[1].d == 1)
                                            (**rbx_2)(rbx_2)
                                            int32_t temp15_1 = *(rbx_2 + 0xc)
                                            *(rbx_2 + 0xc) -= 1
                                            
                                            if (temp15_1 == 1)
                                                (*(*rbx_2 + 8))(rbx_2, 1)
                                    
                                    rsi_1 = &rsi_1[2]
                                    j_1 = i
                                    i -= 1
                                while (j_1 != 1)
                            
                            i = 0
                        
                        int64_t* var_88 = r13_1
                        
                        if (r12_1 != 0)
                            r12_1[1].d += 1
                        
                        if (&var_88 != arg2)
                            var_88.o = *arg2
                            *arg2 = var_88.o
                        
                        if (r12_1 != 0)
                            r12_1[1].d -= 1
                            
                            if (r12_1[1].d == 1)
                                (**r12_1)(r12_1)
                                int32_t temp17_1 = *(r12_1 + 0xc)
                                *(r12_1 + 0xc) -= 1
                                
                                if (temp17_1 == 1)
                                    (*(*r12_1 + 8))(r12_1, 1)
                        
                        int32_t rax_25 = (*(*r13_1 + 0x48))(r13_1)
                        int32_t rsi_3 = 0
                        
                        if (rax_25 s> 0)
                            void* r12_2 = var_a8
                            
                            do
                                int64_t r9 = *r13_1
                                void var_70
                                int64_t* rax_26 = (*(r9 + 0x40))(r13_1, &var_70, zx.q(rsi_3), r9)
                                int64_t i_2 = sx.q(i)
                                i = (i_2 + 1).d
                                var_a0.d = i
                                
                                if (i s> var_a0:4.d)
                                    sub_1405a4f90(&var_a8)
                                    i = var_a0.d
                                    r12_2 = var_a8
                                
                                int64_t rcx_21 = i_2 * 2
                                *(r12_2 + (rcx_21 << 3)) = *rax_26
                                *(r12_2 + (rcx_21 << 3) + 8) = rax_26[1]
                                rax_26[1] = 0
                                *rax_26 = 0
                                int64_t* var_68
                                
                                if (var_68 != 0)
                                    var_68[1].d -= 1
                                    
                                    if (var_68[1].d == 1)
                                        (**var_68)(var_68)
                                        int32_t temp19_1 = *(var_68 + 0xc)
                                        *(var_68 + 0xc) -= 1
                                        
                                        if (temp19_1 == 1)
                                            (*(*var_68 + 8))(var_68, 1)
                                
                                rsi_3 += 1
                            while (rsi_3 s< rax_25)
                        
                        r15 = var_a8
                
                if (r12_1 != 0)
                    r12_1[1].d -= 1
                    
                    if (r12_1[1].d == 1)
                        (**r12_1)(r12_1)
                        int32_t temp9_1 = *(r12_1 + 0xc)
                        *(r12_1 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*r12_1 + 8))(r12_1, 1)
            while (i s> 0)
            
            r12 = arg2
        
        if (i != 0)
            void* rsi_4 = r15 + 8
            int32_t i_1
            
            do
                int64_t* rbx_6 = *rsi_4
                
                if (rbx_6 != 0)
                    rbx_6[1].d -= 1
                    
                    if (rbx_6[1].d == 1)
                        (**rbx_6)(rbx_6)
                        int32_t temp7_1 = *(rbx_6 + 0xc)
                        *(rbx_6 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            int64_t r8_3 = *rbx_6
                            (*(r8_3 + 8))(rbx_6, 1, r8_3)
                
                rsi_4 += 0x10
                i_1 = i
                i -= 1
            while (i_1 != 1)
        
        if (r15 != 0)
            sub_140a74f90(r15)
        
        return r12

return arg2
