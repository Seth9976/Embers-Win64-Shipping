// 函数: sub_14201bab0
// 地址: 0x14201bab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* rbx = arg1
void* rcx = *arg2
int64_t* rdi = arg2
int32_t r14 = 0
int32_t var_1d8 = 0

if (rcx != 0)
    sub_140f5e500(rcx, *(rbx + 0x38), *(rbx + 0x3c), *(rbx + 0x40), *(rbx + 0x44), *(rbx + 0x48), 
        *(rbx + 0x4c), *(rbx + 0x50))
    int32_t rdx = 0
    int64_t var_1d0 = 0
    int32_t rsi_1 = 0
    int32_t var_1c8_1 = 0
    int32_t var_1c4_1 = 0
    int32_t i_1 = 0
    
    if (*(rbx + 0x30) s> 0)
        int64_t rax_1 = 0
        int128_t zmm6
        int128_t var_48_1 = zmm6
        int128_t zmm7
        int128_t var_58_1 = zmm7
        int128_t zmm8
        int128_t var_68_1 = zmm8
        int128_t zmm9
        int128_t var_78_1 = zmm9
        int128_t zmm10
        int128_t var_88_1 = zmm10
        int128_t zmm11
        int128_t var_98_1 = zmm11
        int128_t zmm12
        int128_t var_a8_1 = zmm12
        int128_t zmm13
        int128_t var_b8_1 = zmm13
        int128_t zmm14
        int128_t var_c8_1 = zmm14
        int128_t zmm15
        int128_t var_d8_1 = zmm15
        int64_t var_1c0_1 = 0
        int32_t i
        
        do
            int64_t* rax_3 = rax_1 * 0x68 + *(rbx + 0x28)
            int64_t* rcx_1 = rax_3[1]
            int64_t* r12_1 = *rax_3
            zmm8 = rax_3[2].d
            zmm9 = *(rax_3 + 0x14)
            zmm10 = rax_3[3].d
            zmm11 = *(rax_3 + 0x1c)
            zmm12 = rax_3[4].d
            zmm13 = *(rax_3 + 0x24)
            zmm14 = rax_3[5].d
            zmm15 = *(rax_3 + 0x2c)
            zmm6 = rax_3[6].d
            zmm7 = *(rax_3 + 0x34)
            int64_t rbx_1 = rax_3[7]
            int64_t rcx_2 = rax_3[8]
            int64_t* rcx_3 = rax_3[9]
            
            if (rcx_3 != 0)
                rcx_3[1].d += 1
            
            int64_t* r13_1 = rax_3[0xc]
            int64_t rcx_4 = rax_3[0xb]
            int64_t rdi_1 = rax_3[0xa]
            
            if (r13_1 != 0)
                r13_1[1].d += 1
            
            if (rsi_1 + 1 s> rdx)
                sub_1409da4e0(&var_1d0)
            
            int64_t r15_1 = sx.q(rsi_1) * 0xd0
            void**** r15_2 = r15_1 + var_1d0
            
            if (r15_1 == neg.q(var_1d0))
                r15_2 = nullptr
            else
                r15_2[3] = 0
                __builtin_memset(r15_2 + 0x4c, 0, 0x14)
                __builtin_memset(r15_2 + 0x64, 0, 0x14)
                memset(r15_2, 0, 0xd0)
                r15_2[0x17].d = 0xffffffff
                r15_2[8].d = 0x3f800000
                *(r15_2 + 0x44) = 0x3f800000
            
            int64_t* var_150
            int128_t var_138
            void**** rcx_9
            int64_t* r12_2
            int32_t r14_2
            int64_t* var_198
            
            if (r12_1 == 0)
                r12_2 = var_198
                rcx_9 = &var_138
                r14_2 = r14 | 8
                var_138 = zx.o(0)
            else
                r14_2 = r14 | 1 | 6
                int128_t var_118 = data_142d3f670
                void*** var_108
                void**** rax_6
                rax_6, zmm6, zmm7, zmm8, zmm9 = sub_142331790(&var_108, r12_1, &var_118, 0, 1)
                r12_2 = rax_6[1]
                var_198 = r12_2
                
                if (r12_2 != 0)
                    r12_2[1].d += 1
                
                void*** var_158 = *rax_6
                var_150 = r12_2
                
                if (r12_2 != 0)
                    r12_2[1].d += 1
                
                rcx_9 = &var_158
            
            if (r15_2 != rcx_9)
                *r15_2 = *rcx_9
                int64_t* rsi_2 = r15_2[1]
                *rcx_9 = nullptr
                int64_t rax_8 = rcx_9[1]
                
                if (rax_8 != rsi_2)
                    rcx_9[1] = 0
                    r15_2[1] = rax_8
                    
                    if (rsi_2 != 0)
                        rsi_2[1].d -= 1
                        
                        if (rsi_2[1].d == 1)
                            (**rsi_2)(rsi_2)
                            int32_t temp8_1 = *(rsi_2 + 0xc)
                            *(rsi_2 + 0xc) -= 1
                            
                            if (temp8_1 == 1)
                                (*(*rsi_2 + 8))(rsi_2, 1)
            
            if ((r14_2.b & 8) != 0)
                int64_t* rsi_3 = var_138:8.q
                r14_2 &= 0xfffffff7
                
                if (rsi_3 != 0)
                    rsi_3[1].d -= 1
                    
                    if (rsi_3[1].d == 1)
                        (**rsi_3)(rsi_3)
                        int32_t temp7_1 = *(rsi_3 + 0xc)
                        *(rsi_3 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*(*rsi_3 + 8))(rsi_3, 1)
            
            if ((r14_2.b & 4) != 0)
                r14_2 &= 0xfffffffb
                
                if (var_150 != 0)
                    var_150[1].d -= 1
                    
                    if (var_150[1].d == 1)
                        (**var_150)(var_150)
                        int32_t temp10_1 = *(var_150 + 0xc)
                        *(var_150 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*(*var_150 + 8))(var_150, 1)
            
            if ((r14_2.b & 2) != 0)
                r14_2 &= 0xfffffffd
                
                if (r12_2 != 0)
                    r12_2[1].d -= 1
                    
                    if (r12_2[1].d == 1)
                        (**r12_2)(r12_2)
                        int32_t temp12_1 = *(r12_2 + 0xc)
                        *(r12_2 + 0xc) -= 1
                        
                        if (temp12_1 == 1)
                            (*(*r12_2 + 8))(r12_2, 1)
            
            if ((r14_2.b & 1) != 0)
                r14_2 &= 0xfffffffe
                int64_t* var_100
                
                if (var_100 != 0)
                    var_100[1].d -= 1
                    
                    if (var_100[1].d == 1)
                        (**var_100)(var_100)
                        int32_t temp13_1 = *(var_100 + 0xc)
                        *(var_100 + 0xc) -= 1
                        
                        if (temp13_1 == 1)
                            (*(*var_100 + 8))(var_100, 1)
            
            int64_t* var_140
            int128_t var_128
            int32_t rax_21
            void**** rcx_22
            int64_t* r12_3
            int64_t* var_188
            
            if (rcx_1 == 0)
                r12_3 = var_188
                rcx_22 = &var_128
                rax_21 = 0x80
                var_128 = zx.o(0)
            else
                int128_t var_f8 = data_142d3f670
                void*** var_e8
                void**** rax_20
                rax_20, zmm6, zmm7, zmm8, zmm9 = sub_142331790(&var_e8, rcx_1, &var_f8, 0, 1)
                r12_3 = rax_20[1]
                var_188 = r12_3
                
                if (r12_3 != 0)
                    r12_3[1].d += 1
                
                void*** var_148 = *rax_20
                var_140 = r12_3
                
                if (r12_3 != 0)
                    r12_3[1].d += 1
                
                rcx_22 = &var_148
                rax_21 = 0x70
            r14 = r14_2 | rax_21
            
            if (&r15_2[2] != rcx_22)
                r15_2[2] = *rcx_22
                int64_t* rsi_6 = r15_2[3]
                *rcx_22 = nullptr
                int64_t rax_23 = rcx_22[1]
                
                if (rax_23 != rsi_6)
                    rcx_22[1] = 0
                    r15_2[3] = rax_23
                    
                    if (rsi_6 != 0)
                        rsi_6[1].d -= 1
                        
                        if (rsi_6[1].d == 1)
                            (**rsi_6)(rsi_6)
                            int32_t temp18_1 = *(rsi_6 + 0xc)
                            *(rsi_6 + 0xc) -= 1
                            
                            if (temp18_1 == 1)
                                (*(*rsi_6 + 8))(rsi_6, 1)
            
            if (r14.b s< 0)
                int64_t* rsi_7 = var_128:8.q
                r14 &= 0xffffff7f
                
                if (rsi_7 != 0)
                    rsi_7[1].d -= 1
                    
                    if (rsi_7[1].d == 1)
                        (**rsi_7)(rsi_7)
                        int32_t temp17_1 = *(rsi_7 + 0xc)
                        *(rsi_7 + 0xc) -= 1
                        
                        if (temp17_1 == 1)
                            (*(*rsi_7 + 8))(rsi_7, 1)
            
            if ((r14.b & 0x40) != 0)
                r14 &= 0xffffffbf
                
                if (var_140 != 0)
                    var_140[1].d -= 1
                    
                    if (var_140[1].d == 1)
                        (**var_140)(var_140)
                        int32_t temp20_1 = *(var_140 + 0xc)
                        *(var_140 + 0xc) -= 1
                        
                        if (temp20_1 == 1)
                            (*(*var_140 + 8))(var_140, 1)
            
            if ((r14.b & 0x20) != 0)
                r14 &= 0xffffffdf
                
                if (r12_3 != 0)
                    r12_3[1].d -= 1
                    
                    if (r12_3[1].d == 1)
                        (**r12_3)(r12_3)
                        int32_t temp22_1 = *(r12_3 + 0xc)
                        *(r12_3 + 0xc) -= 1
                        
                        if (temp22_1 == 1)
                            (*(*r12_3 + 8))(r12_3, 1)
            
            if ((r14.b & 0x10) != 0)
                r14 &= 0xffffffef
                int64_t* var_e0
                
                if (var_e0 != 0)
                    var_e0[1].d -= 1
                    
                    if (var_e0[1].d == 1)
                        (**var_e0)(var_e0)
                        int32_t temp23_1 = *(var_e0 + 0xc)
                        *(var_e0 + 0xc) -= 1
                        
                        if (temp23_1 == 1)
                            (*(*var_e0 + 8))(var_e0, 1)
            
            r15_2[4].d = zmm8.d
            int128_t zmm1_1
            zmm1_1.d = zmm6.d f* zmm6.d
            int128_t zmm0_1
            zmm0_1.d = zmm7.d f* zmm7.d
            *(r15_2 + 0x24) = zmm9.d
            r15_2[5].d = zmm10.d
            zmm1_1.d = zmm1_1.d f+ zmm0_1.d
            *(r15_2 + 0x2c) = zmm11.d
            r15_2[6].d = zmm12.d
            *(r15_2 + 0x34) = zmm13.d
            
            if (not(zmm1_1.d f<= 9.99999944e-11f))
                r15_2[8].d = zmm6.d
                *(r15_2 + 0x44) = zmm7.d
            
            r15_2[7].d = zmm14.d
            *(r15_2 + 0x3c) = zmm15.d
            r15_2[9] = rbx_1
            int64_t var_1b8 = rcx_2
            
            if (rcx_3 != 0)
                rcx_3[1].d += 1
            
            if (&var_1b8 != &r15_2[0xa])
                var_1b8.o = *(r15_2 + 0x50)
                *(r15_2 + 0x50) = var_1b8.o
            
            if (rcx_3 != 0)
                rcx_3[1].d -= 1
                
                if (rcx_3[1].d == 1)
                    (**rcx_3)(rcx_3)
                    int32_t temp25_1 = *(rcx_3 + 0xc)
                    *(rcx_3 + 0xc) -= 1
                    
                    if (temp25_1 == 1)
                        (*(*rcx_3 + 8))(rcx_3, 1)
            
            int64_t var_1a8 = rcx_4
            r15_2[0xc] = rdi_1
            
            if (r13_1 != 0)
                r13_1[1].d += 1
            
            if (&var_1a8 != &r15_2[0xd])
                var_1a8.o = *(r15_2 + 0x68)
                *(r15_2 + 0x68) = var_1a8.o
            
            if (r13_1 != 0)
                r13_1[1].d -= 1
                
                if (r13_1[1].d == 1)
                    (**r13_1)(r13_1)
                    int32_t temp28_1 = *(r13_1 + 0xc)
                    *(r13_1 + 0xc) -= 1
                    
                    if (temp28_1 == 1)
                        (*(*r13_1 + 8))(r13_1, 1)
            
            if (r13_1 != 0)
                r13_1[1].d -= 1
                
                if (r13_1[1].d == 1)
                    (**r13_1)(r13_1)
                    int32_t temp30_1 = *(r13_1 + 0xc)
                    *(r13_1 + 0xc) -= 1
                    
                    if (temp30_1 == 1)
                        (*(*r13_1 + 8))(r13_1, 1)
            
            if (rcx_3 != 0)
                rcx_3[1].d -= 1
                
                if (rcx_3[1].d == 1)
                    (**rcx_3)(rcx_3)
                    int32_t temp31_1 = *(rcx_3 + 0xc)
                    *(rcx_3 + 0xc) -= 1
                    
                    if (temp31_1 == 1)
                        (*(*rcx_3 + 8))(rcx_3, 1)
            
            i = i_1 + 1
            rbx = arg1
            rax_1 = var_1c0_1 + 1
            rsi_1 += 1
            i_1 = i
            var_1c0_1 = rax_1
            rdx = var_1c4_1
        while (i s< *(rbx + 0x30))
        rdi = arg2
    
    sub_14201aba0(*rdi + 0x2a8, &var_1d0)
    result = sub_14201a670(&var_1d0)

int64_t* rbx_4 = rdi[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp1_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_4 + 8))(rbx_4, 1)

return result
