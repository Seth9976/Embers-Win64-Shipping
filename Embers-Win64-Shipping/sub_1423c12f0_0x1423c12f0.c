// 函数: sub_1423c12f0
// 地址: 0x1423c12f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg2
int512_t zmm2
double zmm6_1[0x2]
double zmm7_1[0x2]
int128_t zmm8
zmm2, zmm6_1, zmm7_1, zmm8 =
    sub_1423bc680(*(rbx + 0x470), arg3, arg4, arg5, arg6, (*(arg2 + 0x520)).d, (*(arg2 + 0x524)).d)
int32_t rdi = 0
int32_t var_e8 = 0
int32_t result = sub_141abb820(rbx)

if (result s> 0)
    int128_t var_58_1 = zmm8
    
    do
        void* rax = sub_142436b10(rbx, rdi)
        
        if ((*(rax + 0x1f4) & 0x20) != 0)
            void* rsi_1 = *(rax + 0x138)
            int32_t rcx_3 = 0
            int32_t r8_1 = 0
            int32_t var_d0_1 = 0
            int32_t var_cc_1 = 1
            int32_t var_c0_1 = 0xffffffff
            int64_t var_bc_1 = 0
            int32_t r11_1 = *(rsi_1 + 0x30)
            void* r9_1 = rsi_1 + 0x18
            void* var_c8_1 = r9_1
            
            if (r11_1 != 0)
                void* rax_1 = *(r9_1 + 0x10)
                
                if (rax_1 != 0)
                    r9_1 = rax_1
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(r11_1 - 1)
                int32_t rdx_4 = *r9_1
                
                if (rdx_4 != 0)
                label_1423c142b:
                    int32_t rax_8 = neg.d(rdx_4) & rdx_4
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
                    int32_t var_cc_2 = rax_8
                    int32_t rax_9
                    
                    if (rax_8 == 0)
                        rax_9 = 0x20
                    else
                        rax_9 = 0x1f - temp0_2
                    
                    var_bc_1.d = r8_1 - rax_9 + 0x1f
                    
                    if (r8_1 - rax_9 + 0x1f s> r11_1)
                        var_bc_1.d = r11_1
                else
                    while (true)
                        int64_t rdx_5 = sx.q(rcx_3)
                        r8_1 += 0x20
                        rcx_3 += 1
                        var_bc_1:4.d = r8_1
                        var_d0_1 = rcx_3
                        
                        if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                        int32_t var_c0_2 = 0xffffffff
                        
                        if (rdx_4 != 0)
                            goto label_1423c142b
                    
                    var_bc_1.d = r11_1
            
            zmm2.o = 0xffffffff
            void* var_88_1 = rsi_1 + 8
            int128_t var_68_1 = 0xffffffff
            double var_78_1[0x2] = var_d0_1.o
            double var_b0[0x2] = (rsi_1 + 8).o
            int64_t var_90_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
            
            if (0 s< r11_1)
                int32_t i = var_78_1[1]:4.d
                
                do
                    int64_t* rcx_6 = *(*var_b0[0] + sx.q(i) * 0x10)
                    int64_t var_e0
                    (*(*rcx_6 + 0x18))(rcx_6, &var_e0, zx.q(arg5))
                    int32_t j_5 = arg3[1].d
                    int32_t r9_2 = 0
                    int64_t r10_1 = *arg3
                    int32_t j = j_5
                    int32_t rcx_7 = var_e0.d
                    int32_t rbx_2 = var_e0:4.d
                    
                    if (j_5 s> 0)
                        do
                            int32_t r8_5 = j & 0x80000001
                            
                            if (r8_5 s< 0)
                                r8_5 = ((r8_5 - 1) | 0xfffffffe) + 1
                            
                            int32_t temp4_1
                            int32_t temp5_1
                            temp4_1:temp5_1 = sx.q(j)
                            int32_t j_2 = (temp5_1 - temp4_1) s>> 1
                            j = j_2
                            int32_t rax_16 = j_2 + r9_2
                            int64_t r8_8 = sx.q(rax_16) * 3
                            int32_t rax_18 = *(r10_1 + (r8_8 << 2))
                            int32_t rax_19 = rax_18 - rcx_7
                            
                            if (rax_18 == rcx_7)
                                rax_19 = *(r10_1 + (r8_8 << 2) + 4) - rbx_2
                            
                            if (rax_19 s< 0)
                                r9_2 = rax_16 + r8_5
                        while (j s> 0)
                    
                    void* rax_23
                    
                    if (r9_2 s>= j_5)
                        rax_23 = sub_1423b86a0(arg3, &var_e0)
                    else
                        int64_t rdx_10 = sx.q(r9_2) * 3
                        int32_t rcx_8 = rcx_7 - *(r10_1 + (rdx_10 << 2))
                        
                        if (rcx_7 == *(r10_1 + (rdx_10 << 2)))
                            rcx_8 = rbx_2 - *(r10_1 + (rdx_10 << 2) + 4)
                        
                        if (rcx_8 s< 0 || r9_2 == 0xffffffff)
                            rax_23 = sub_1423b86a0(arg3, &var_e0)
                        else
                            rax_23 = r10_1 + 8 + (rdx_10 << 2)
                            
                            if (rax_23 == 0)
                                rax_23 = sub_1423b86a0(arg3, &var_e0)
                    
                    *rax_23 += 1
                    var_78_1[1].d &= not.d(var_b0[1]:4.d)
                    sub_14059bdd0(&var_b0[1])
                    i = var_78_1[1]:4.d
                while (i s< *(var_78_1[0] i+ 0x18))
                
                rdi = var_e8
            
            *arg4 += *(rsi_1 + 0x10) - *(rsi_1 + 0x3c)
            int64_t* i_1 = *(rsi_1 + 0x58)
            
            if (i_1 != 0)
                do
                    void* rax_29
                    double zmm0_1[0x2]
                    double zmm1_1[0x2]
                    
                    if (arg6 != 0)
                        if ((*(i_1 + 0xa) & 1) == 0)
                            zmm1_1 = zmm6_1
                        else
                            zmm1_1 = zmm7_1
                        
                        rax_29 = i_1[4]
                        
                        if (rax_29 == 0)
                            zmm0_1 = 0xbf800000
                        else
                            zmm0_1 = *(rax_29 + 0x24)
                    
                    if (arg6 == 0 || zmm0_1[0].d f== zmm1_1[0].d)
                        int64_t var_d8
                        (*(*i_1 + 0x18))(i_1, &var_d8, zx.q(arg5))
                        int32_t j_4 = arg3[1].d
                        int32_t r9_3 = 0
                        int64_t r10_2 = *arg3
                        int32_t j_1 = j_4
                        int32_t rcx_12 = var_d8.d
                        int32_t r11_3 = var_d8:4.d
                        
                        if (j_4 s> 0)
                            do
                                int32_t r8_11 = j_1 & 0x80000001
                                
                                if (r8_11 s< 0)
                                    r8_11 = ((r8_11 - 1) | 0xfffffffe) + 1
                                
                                int32_t temp9_1
                                int32_t temp10_1
                                temp9_1:temp10_1 = sx.q(j_1)
                                int32_t j_3 = (temp10_1 - temp9_1) s>> 1
                                j_1 = j_3
                                int32_t rax_34 = j_3 + r9_3
                                int64_t r8_14 = sx.q(rax_34) * 3
                                int32_t rax_36 = *(r10_2 + (r8_14 << 2))
                                int32_t rax_37 = rax_36 - rcx_12
                                
                                if (rax_36 == rcx_12)
                                    rax_37 = *(r10_2 + (r8_14 << 2) + 4) - r11_3
                                
                                if (rax_37 s< 0)
                                    r9_3 = rax_34 + r8_11
                            while (j_1 s> 0)
                        
                        void* rax_41
                        
                        if (r9_3 s>= j_4)
                            rax_41 = sub_1423b86a0(arg3, &var_d8)
                        else
                            int64_t rdx_14 = sx.q(r9_3) * 3
                            int32_t rcx_13 = rcx_12 - *(r10_2 + (rdx_14 << 2))
                            
                            if (rcx_12 == *(r10_2 + (rdx_14 << 2)))
                                rcx_13 = r11_3 - *(r10_2 + (rdx_14 << 2) + 4)
                            
                            if (rcx_13 s< 0 || r9_3 == 0xffffffff)
                                rax_41 = sub_1423b86a0(arg3, &var_d8)
                            else
                                rax_41 = r10_2 + 8 + (rdx_14 << 2)
                                
                                if (rax_41 == 0)
                                    rax_41 = sub_1423b86a0(arg3, &var_d8)
                        
                        *rax_41 += 1
                        i_1 = *(i_1[4] + 0x18)
                        *arg4 += 1
                    else
                        i_1 = *(rax_29 + 0x18)
                while (i_1 != 0)
                
                rdi = var_e8
            
            rbx = arg2
        
        rdi += 1
        var_e8 = rdi
        result = sub_141abb820(rbx)
    while (rdi s< result)

return result
