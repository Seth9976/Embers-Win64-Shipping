// 函数: sub_140efd710
// 地址: 0x140efd710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = *(arg1 + 0x28)
void* r13 = arg1
int64_t* var_160 = r15
uint64_t result = &r15[sx.q(*(arg1 + 0x30)) * 0xb]
uint64_t result_2 = result

if (r15 != result)
    int128_t zmm6
    int128_t var_58_1 = zmm6
    int128_t zmm7
    int128_t var_68_1 = zmm7
    int128_t zmm8
    int128_t var_78_1 = zmm8
    int128_t zmm9
    int128_t var_88_1 = zmm9
    
    do
        int32_t i_4 = r15[3].d
        void* r12_1 = &r15[2]
        
        if (i_4 != 0)
            int64_t* rdi_2 = *r12_1 + 0x10
            int32_t i
            
            do
                int64_t* rbx_1 = *rdi_2
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp2_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                rdi_2 = &rdi_2[3]
                i = i_4
                i_4 -= 1
            while (i != 1)
        
        bool cond:0_1 = *(r12_1 + 0xc) == 0
        *(r12_1 + 8) = 0
        
        if (not(cond:0_1))
            sub_1405a5130(r12_1, 0)
        
        int32_t i_5 = r15[5].d
        int64_t* r14_1 = &r15[4]
        
        if (i_5 != 0)
            int64_t* rdi_4 = *r14_1 + 0x10
            int32_t i_1
            
            do
                int64_t* rbx_2 = *rdi_4
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp5_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                rdi_4 = &rdi_4[3]
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
        
        r14_1[1].d = 0
        
        if (*(r14_1 + 0xc) != 0)
            sub_1405a5130(r14_1, 0)
        
        void* rdi_6 = sx.q(*(r15 + 0x54)) * 0x70 + *(r13 + 0x18)
        int64_t* rbx_3 = *(rdi_6 + 0x18)
        int64_t rdx_1 = *(rdi_6 + 0x10)
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        char rcx_6 = *(rdi_6 + 0x20)
        char var_1a0 = *(r13 + 0x89)
        char var_19f_1 = rcx_6
        int64_t var_198_1 = rdx_1
        int64_t* var_190_1 = rbx_3
        
        if (rbx_3 != 0)
            int32_t rax_8 = rbx_3[1].d
            rbx_3[1].d = rax_8
            
            if (rax_8 == 0)
                (**rbx_3)(rbx_3)
                int32_t temp6_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
            
            rbx_3 = var_190_1
        
        int32_t* rsi_1 = *(rdi_6 + 0x58)
        result = &rsi_1[sx.q(*(rdi_6 + 0x60)) * 8]
        int32_t* var_168_1 = rsi_1
        uint64_t result_1 = result
        
        if (rsi_1 != result)
            do
                result = zx.q(*(r15 + 0x54))
                
                if (*rsi_1 == result.d)
                    int32_t rax_13 = rsi_1[1]
                    int32_t rdx_2 = r15[9].d
                    int32_t rcx_9 = rsi_1[2]
                    int32_t r9_1 = *(r15 + 0x4c)
                    
                    if (rdx_2 s>= rax_13)
                        rax_13 = rdx_2
                    
                    if (r9_1 s<= rcx_9)
                        rcx_9 = r9_1
                    
                    int32_t var_16c_1 = rcx_9
                    int64_t var_1b0
                    int64_t rax_14
                    
                    if (rcx_9 s> rax_13)
                        rax_14 = rax_13.q
                        var_1b0 = rax_14
                    else
                        rax_14 = 0
                        var_1b0 = 0
                    
                    int32_t r8_1 = var_1b0.d
                    result = rax_14 u>> 0x20
                    
                    if (result.d - r8_1 s> 0)
                    label_140efd946:
                        int64_t* rbx_4 = *(rsi_1 + 0x18)
                        int64_t rax_15 = *(rsi_1 + 0x10)
                        int64_t var_1c8
                        __builtin_memset(&var_1c8, 0, 0x18)
                        
                        if (rbx_4 != 0)
                            rbx_4[1].d += 1
                        
                        int128_t var_1c0_1
                        int64_t* rdi_7 = var_1c0_1:8.q
                        var_1c0_1.q = rax_15
                        
                        if (rbx_4 != rdi_7)
                            var_1c0_1:8.q = rbx_4
                            
                            if (rdi_7 != 0)
                                rdi_7[1].d -= 1
                                
                                if (rdi_7[1].d == 1)
                                    (**rdi_7)(rdi_7)
                                    int32_t temp12_1 = *(rdi_7 + 0xc)
                                    *(rdi_7 + 0xc) -= 1
                                    
                                    if (temp12_1 == 1)
                                        (*(*rdi_7 + 8))(rdi_7, 1)
                        else if (rbx_4 != 0)
                            rbx_4[1].d -= 1
                            
                            if (rbx_4[1].d == 1)
                                (**rbx_4)(rbx_4)
                                int32_t temp11_1 = *(rbx_4 + 0xc)
                                *(rbx_4 + 0xc) -= 1
                                
                                if (temp11_1 == 1)
                                    (*(*rbx_4 + 8))(rbx_4, 1)
                        
                        zmm9 = var_1c8.d
                        rbx_4.b = 0
                        int64_t* var_138_1 = &var_1c8
                        int32_t i_2 = 0
                        char arg_10 = 0
                        int32_t* var_148 = rsi_1
                        int64_t* var_130_1 = &var_1b0
                        int64_t* var_140_1 = r15
                        int32_t i_3 = 0
                        
                        if (r15[1].d s> 0)
                            int64_t* r14_2 = nullptr
                            
                            do
                                int64_t r12_2 = *r15
                                int64_t* rcx_15 = *(r14_2 + r12_2)
                                int64_t var_1a8
                                (*(*rcx_15 + 0x10))(rcx_15, &var_1a8)
                                int64_t* rcx_16 = *(r14_2 + r12_2)
                                int64_t* var_180
                                (*(*rcx_16 + 8))(rcx_16, &var_180)
                                int64_t* rcx_17 = *(r14_2 + r12_2)
                                zmm8 = zmm9
                                void var_128
                                int32_t* rax_22 = (*(*rcx_17 + 0x18))(rcx_17, &var_128)
                                int32_t r8_2 = var_1b0.d
                                int32_t rdx_6 = r8_2
                                int32_t r9_2 = var_1b0:4.d
                                int32_t rcx_18 = r9_2
                                zmm9.d = zmm9.d f+ *rax_22
                                int32_t rax_23 = var_1a8.d
                                
                                if (rax_23 s>= r8_2)
                                    rdx_6 = rax_23
                                
                                int32_t var_1a4
                                
                                if (var_1a4 s<= r9_2)
                                    rcx_18 = var_1a4
                                
                                int32_t rsi_2 = 0
                                
                                if (rcx_18 s> rdx_6)
                                    rsi_2 = rcx_18
                                
                                int32_t r15_1 = 0
                                
                                if (rcx_18 s> rdx_6)
                                    r15_1 = rdx_6
                                
                                int32_t rdx_8 = rsi_2 - r15_1
                                
                                if (rdx_8 s> 0 || (r15_1 == r8_2 && rsi_2 == r9_2))
                                    rcx_18.b = 1
                                else
                                    rcx_18.b = 0
                                
                                if (r15_1 != rax_23 || rsi_2 != var_1a4)
                                    rax_23.b = 0
                                else
                                    rax_23.b = 1
                                
                                if (rcx_18.b == 0)
                                    sub_140ee4d40(&var_148)
                                    var_1c8.d = zmm9.d
                                    var_1c8:4.d = 0
                                else
                                    void var_e0
                                    int64_t* var_d0
                                    int128_t zmm0
                                    
                                    if (rbx_4.b != 0)
                                        zmm0.d = var_1c8:4.d.d f+ var_1c8.d
                                        r13.b = zmm0.d f>= zmm8.d
                                        
                                        if (rax_23.b == 0)
                                            int64_t* rdi_9 = *(r14_2 + r12_2)
                                            zmm6 = zx.o(0)
                                            void* rax_36 = (*(*rdi_9 + 0x20))(rdi_9, &var_e0)
                                            int64_t r8_6 = *rdi_9
                                            void var_c0
                                            void* rax_37 = (*(r8_6 + 0x20))(rdi_9, &var_c0, r8_6)
                                            char rdi_10 = *(rax_36 + 0x18)
                                            char arg_18 = *(rax_37 + 1)
                                            
                                            if (var_d0 != 0)
                                                var_d0[1].d -= 1
                                                
                                                if (var_d0[1].d == 1)
                                                    (**var_d0)(var_d0)
                                                    int32_t temp20_1 = *(var_d0 + 0xc)
                                                    *(var_d0 + 0xc) -= 1
                                                    
                                                    if (temp20_1 == 1)
                                                        (*(*var_d0 + 8))(var_d0, 1)
                                            
                                            int64_t* var_b0
                                            
                                            if (var_b0 != 0)
                                                var_b0[1].d -= 1
                                                
                                                if (var_b0[1].d == 1)
                                                    (**var_b0)(var_b0)
                                                    int32_t temp22_1 = *(var_b0 + 0xc)
                                                    *(var_b0 + 0xc) -= 1
                                                    
                                                    if (temp22_1 == 1)
                                                        (*(*var_b0 + 8))(var_b0, 1)
                                            
                                            void* rbx_10
                                            
                                            if (rdi_10 == arg_18)
                                                rbx_10 = arg1
                                            else
                                                int64_t* rcx_32 = *(r14_2 + r12_2)
                                                char rdi_11 =
                                                    *((*(*rcx_32 + 0x20))(rcx_32, &var_c0) + 0x18)
                                                
                                                if (var_b0 != 0)
                                                    var_b0[1].d -= 1
                                                    
                                                    if (var_b0[1].d == 1)
                                                        (**var_b0)(var_b0)
                                                        int32_t temp24_1 = *(var_b0 + 0xc)
                                                        *(var_b0 + 0xc) -= 1
                                                        
                                                        if (temp24_1 == 1)
                                                            (*(*var_b0 + 8))(var_b0, 1)
                                                
                                                rbx_10 = arg1
                                                int64_t* rcx_35 = var_180
                                                char* var_1d0_3 = &var_1a0
                                                int64_t rax_47 = *rcx_35
                                                int32_t var_1d8_3 = (*(rbx_10 + 0x8c)).d
                                                void var_f0
                                                void var_f8
                                                
                                                if (rdi_11 != 0)
                                                    zmm6 = *(*(rax_47 + 0x28))(rcx_35, &var_f0, 
                                                        zx.q(rsi_2), zx.q(var_1a4), var_1d8_3, 
                                                        var_1d0_3)
                                                else
                                                    zmm6 = *(*(rax_47 + 0x28))(rcx_35, &var_f8, 
                                                        zx.q(var_1a8.d), zx.q(r15_1), var_1d8_3, 
                                                        var_1d0_3)
                                            
                                            zmm7 = zx.o(0)
                                            
                                            if (rdx_8 s> 0)
                                                int64_t* rcx_36 = var_180
                                                void var_e8
                                                zmm7 = *(*(*rcx_36 + 0x28))(rcx_36, &var_e8, 
                                                    zx.q(r15_1), zx.q(rsi_2), (*(rbx_10 + 0x8c)).d, 
                                                    &var_1a0)
                                            
                                            uint64_t rax_38
                                            
                                            if (zmm6.d f!= 0f)
                                                rax_38.b = 0
                                            else
                                                rax_38.b = 1
                                            
                                            if (r13.b == 0 || rax_38.b == 0)
                                                sub_140ee4d40(&var_148)
                                                r13 = arg1
                                                zmm6.d = zmm6.d f+ zmm8.d
                                                i_2 = i_3
                                                var_1c8:4.d = zmm7.d
                                                var_1c8.d = zmm6.d
                                            else
                                                zmm0.d = var_1c8:4.d.d f+ zmm7.d
                                                var_1c8:4.d = zmm0.d
                                                sub_140ee4d40(&var_148)
                                                r13 = arg1
                                                i_2 = i_3
                                                var_1c8.d = zmm9.d
                                                var_1c8:4.d = 0
                                        else
                                            void* rdx_13
                                            void var_108
                                            
                                            if (r13.b == 0)
                                                sub_140ee4d40(&var_148)
                                                void var_100
                                                rdx_13 = &var_100
                                                var_1c8.d = zmm8.d
                                                var_1c8:4.d = 0
                                            else
                                                rdx_13 = &var_108
                                            int64_t* rcx_24 = *(r14_2 + r12_2)
                                            int32_t* rax_34 = (*(*rcx_24 + 0x18))(rcx_24, rdx_13)
                                            r13 = arg1
                                            zmm0.d = var_1c8:4.d.d f+ *rax_34
                                            var_1c8:4.d = zmm0.d
                                    else
                                        var_1c8.d = zmm8.d
                                        arg_10 = 1
                                        
                                        if (rdx_8 s> 0)
                                            int64_t* rcx_19 = var_180
                                            void var_120
                                            int32_t* rax_25 = (*(*rcx_19 + 0x28))(rcx_19, &var_120, 
                                                zx.q(r15_1), zx.q(rsi_2), (*(r13 + 0x8c)).d, 
                                                &var_1a0)
                                            zmm0.d = var_1c8:4.d.d f+ *rax_25
                                            var_1c8:4.d = zmm0.d
                                            int64_t* rcx_20 = *(r14_2 + r12_2)
                                            char rdi_8 =
                                                *((*(*rcx_20 + 0x20))(rcx_20, &var_e0) + 0x18)
                                            
                                            if (var_d0 != 0)
                                                var_d0[1].d -= 1
                                                
                                                if (var_d0[1].d == 1)
                                                    (**var_d0)(var_d0)
                                                    int32_t temp21_1 = *(var_d0 + 0xc)
                                                    *(var_d0 + 0xc) -= 1
                                                    
                                                    if (temp21_1 == 1)
                                                        (*(*var_d0 + 8))(var_d0, 1)
                                            
                                            int64_t* rcx_23 = var_180
                                            char* var_1d0_2 = &var_1a0
                                            int32_t var_1d8_2 = (*(r13 + 0x8c)).d
                                            int64_t rax_30 = *rcx_23
                                            
                                            if (rdi_8 != 0)
                                                void var_110
                                                int32_t* rax_32 = (*(rax_30 + 0x28))(rcx_23, 
                                                    &var_110, zx.q(rsi_2), zx.q(var_1a4), 
                                                    var_1d8_2, var_1d0_2)
                                                i_2 = i_3
                                                zmm0.d = var_1c8.d.d f+ *rax_32
                                                var_1c8.d = zmm0.d
                                            else
                                                void var_118
                                                int32_t* rax_31 = (*(rax_30 + 0x28))(rcx_23, 
                                                    &var_118, zx.q(var_1a8.d), zx.q(r15_1), 
                                                    var_1d8_2, var_1d0_2)
                                                i_2 = i_3
                                                zmm0.d = var_1c8.d.d f+ *rax_31
                                                var_1c8.d = zmm0.d
                                
                                int64_t* var_178
                                
                                if (var_178 != 0)
                                    var_178[1].d -= 1
                                    
                                    if (var_178[1].d == 1)
                                        (**var_178)(var_178)
                                        int32_t temp18_1 = *(var_178 + 0xc)
                                        *(var_178 + 0xc) -= 1
                                        
                                        if (temp18_1 == 1)
                                            (*(*var_178 + 8))(var_178, 1)
                                
                                r15 = var_160
                                i_2 += 1
                                rbx_4 = zx.q(arg_10)
                                r14_2 = &r14_2[2]
                                i_3 = i_2
                            while (i_2 s< r15[1].d)
                            
                            rsi_1 = var_168_1
                            r14_1 = &r15[4]
                            r12_1 = &r15[2]
                        
                        result = zx.q(var_1b0:4.d - var_1b0.d)
                        
                        if (result.d s<= 0 || not(var_1c8:4.d.d f<= 0f))
                            int64_t rcx_44
                            int64_t rbx_12
                            
                            if (rsi_1[3] s>= 0)
                                rbx_12 = sx.q(r14_1[1].d)
                                int32_t rax_53 = (rbx_12 + 1).d
                                r14_1[1].d = rax_53
                                
                                if (rax_53 s> *(r14_1 + 0xc))
                                    sub_1405a4df0(r14_1)
                                
                                rcx_44 = *r14_1
                            else
                                rbx_12 = sx.q(*(r12_1 + 8))
                                int32_t rax_52 = (rbx_12 + 1).d
                                *(r12_1 + 8) = rax_52
                                
                                if (rax_52 s> *(r12_1 + 0xc))
                                    sub_1405a4df0(r12_1)
                                
                                rcx_44 = *r12_1
                            
                            int64_t rdx_22 = rbx_12 * 3
                            *(rcx_44 + (rdx_22 << 3)) = var_1c8.d.d
                            *(rcx_44 + (rdx_22 << 3) + 4) = var_1c8:4.d
                            *(rcx_44 + (rdx_22 << 3) + 8) = var_1c0_1.q
                            result = var_1c0_1:8.q
                            *(rcx_44 + (rdx_22 << 3) + 0x10) = result
                            
                            if (result != 0)
                                result = var_1c0_1:8.q
                                *(result + 8) += 1
                        
                        int64_t* rbx_13 = var_1c0_1:8.q
                        
                        if (rbx_13 != 0)
                            rbx_13[1].d -= 1
                            
                            if (rbx_13[1].d == 1)
                                result = (**rbx_13)(rbx_13)
                                int32_t temp14_1 = *(rbx_13 + 0xc)
                                *(rbx_13 + 0xc) -= 1
                                
                                if (temp14_1 == 1)
                                    result = (*(*rbx_13 + 8))(rbx_13, 1)
                    else if (r8_1 == rdx_2 && result.d == r9_1)
                        goto label_140efd946
                
                rsi_1 = &rsi_1[8]
                var_168_1 = rsi_1
            while (rsi_1 != result_1)
            
            rbx_3 = var_190_1
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                result = (**rbx_3)(rbx_3)
                int32_t temp8_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    result = (*(*rbx_3 + 8))(rbx_3, 1)
        
        r15 = &r15[0xb]
        var_160 = r15
    while (r15 != result_2)

return result
