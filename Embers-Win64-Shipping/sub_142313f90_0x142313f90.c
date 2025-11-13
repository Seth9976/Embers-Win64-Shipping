// 函数: sub_142313f90
// 地址: 0x142313f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
void* r13 = arg1
int64_t* rcx = *(arg1 + 0x158)
void* result = (*(*rcx + 0x90))(rcx)

if (result != 0)
    int64_t* rcx_1 = *(r13 + 0x158)
    result = (*(*rcx_1 + 0x90))(rcx_1)
    
    if (*(result + 8) != 0xffffffff)
        int64_t* rcx_2 = *(r13 + 0x158)
        result = (*(*rcx_2 + 0x90))(rcx_2)
        
        if (*(result + 0x30) != 0)
            int64_t* rcx_3 = *(r13 + 0x158)
            int32_t rdi_1 = 0
            void* var_190 = nullptr
            int64_t var_188_1 = 0
            int32_t var_17c_1 = 0
            int64_t var_178 = 0
            int32_t var_170_1 = 0
            int64_t var_168 = 0
            char var_17f_1 = 0xff
            int64_t rax_6 = (*(*rcx_3 + 0x90))(rcx_3)
            int64_t* rcx_4 = *(r13 + 0x158)
            int64_t var_198 = rax_6
            int64_t r14_1 = sx.q((*(*rcx_4 + 0x60))(rcx_4))
            int64_t* rcx_6 = *(r13 + 0x158)
            int64_t* rsi_3 = (r14_1 << 4) + *(r13 + 0x188)
            int64_t* r15_1 = *(**(r13 + 0x160) + (r14_1 << 3))
            int64_t rdx_1 = *rcx_6
            (*(rdx_1 + 0x90))(rcx_6, rdx_1)
            int64_t* rcx_7 = *(r13 + 0x158)
            
            if (rsi_3[1].d == *((*(*rcx_7 + 0x90))(rcx_7) + 0x58))
                while (true)
                    void* rax_11
                    
                    if (rdi_1 s>= r15_1[1].d || rdi_1 s< 0 || rdi_1 s>= rsi_3[1].d)
                        rax_11.b = 0
                    else
                        rax_11.b = 1
                    
                    if (rax_11.b == 0)
                        break
                    
                    int64_t rbx_2 = *rsi_3
                    void var_e8
                    sub_14081a190(&var_e8)
                    sub_14230c3a0(r13, *(arg2 + 8), r15_1, r14_1.d, rdi_1, 
                        (sx.q(rdi_1) << 4) + rbx_2, &var_e8)
                    int64_t rbx_3 = sx.q(var_188_1.d)
                    int32_t rax_15 = (rbx_3 + 1).d
                    var_188_1.d = rax_15
                    
                    if (rax_15 s> var_188_1:4.d)
                        sub_140775640(&var_190)
                    
                    sub_140819f30(rbx_3 * 0xa0 + var_190, &var_e8)
                    int64_t var_80
                    
                    if (var_80 != 0)
                        sub_140a74f90(var_80)
                    
                    rdi_1 += 1
                
                int64_t rbx_4 = sx.q(var_170_1)
                int32_t rax_17 = (rbx_4 + 1).d
                var_170_1 = rax_17
                int64_t rax_18
                int64_t rcx_17
                int128_t zmm1
                
                if ((*(r13 + 0x178) & 1) == 0)
                    if (rax_17 s> 0)
                        sub_1405c4fe0(&var_178)
                    
                    rax_18 = var_178
                    rcx_17 = rbx_4 << 6
                    *(rcx_17 + rax_18) = *(r13 + 0x80)
                    *(rcx_17 + rax_18 + 0x10) = *(r13 + 0x90)
                    *(rcx_17 + rax_18 + 0x20) = *(r13 + 0xa0)
                    zmm1 = *(r13 + 0xb0)
                else
                    if (rax_17 s> 0)
                        sub_1405c4fe0(&var_178)
                    
                    rax_18 = var_178
                    rcx_17 = rbx_4 << 6
                    *(rcx_17 + rax_18) = data_14399f6e0
                    *(rcx_17 + rax_18 + 0x10) = data_14399f6f0
                    *(rcx_17 + rax_18 + 0x20) = data_14399f700
                    zmm1 = data_14399f710
                
                *(rcx_17 + rax_18 + 0x30) = zmm1
                
                if ((*(r13 + 0x178) & 1) != 0)
                    int32_t rax_19 = r15_1[1].d
                    int64_t* var_1a8 = nullptr
                    int32_t i_4 = 0
                    int32_t i_7 = 0
                    int64_t* r14_2 = nullptr
                    int32_t var_19c_1 = 0
                    
                    if (rax_19 s> 0)
                        sub_1405a51b0(&var_1a8, rax_19)
                        rax_19 = r15_1[1].d
                        i_4 = i_7
                        r14_2 = var_1a8
                    
                    void* rdi_2 = *r15_1
                    void* rax_22 = sx.q(rax_19) * 0xe8 + rdi_2
                    
                    if (rdi_2 != rax_22)
                        do
                            int32_t r12_1 = *(rdi_2 + 8)
                            int32_t temp0_1
                            int32_t temp1_1
                            temp0_1:temp1_1 = mulu.dp.d(0xaaaaaaab, *(rdi_2 + 4))
                            int64_t i_9 = sx.q(i_4)
                            int64_t var_118 = 0
                            uint32_t rsi_5 = temp0_1 u>> 1
                            bool cond:1_1 = *(rdi_2 + 0xe0) == 0
                            i_4 = (i_9 + 1).d
                            int64_t var_110_1 = 3
                            int32_t var_108_1 = 0xc
                            int16_t var_fc_1 = 0x100
                            uint32_t var_104_1 = rsi_5
                            int32_t var_100_1 = r12_1
                            i_7 = i_4
                            
                            if (i_4 s> var_19c_1)
                                sub_1405c4e40(&var_1a8)
                                i_4 = i_7
                                r14_2 = var_1a8
                            
                            int64_t* rax_26 = &r14_2[i_9 * 4]
                            *rax_26 = 0
                            *(rax_26 + 0x1e) = cond:1_1
                            rax_26[1] = 3
                            rax_26[2].d = 0xc
                            *(rax_26 + 0x14) = rsi_5
                            rax_26[3].d = r12_1
                            *(rax_26 + 0x1c) = 0x100
                            sub_1405d1550(&var_118)
                            rdi_2 += 0xe8
                        while (rdi_2 != rax_22)
                        
                        r13 = arg1
                    
                    int64_t* rcx_24 = *(r13 + 0x158)
                    void* rax_28 = (*(*rcx_24 + 0x90))(rcx_24)
                    void* rdi_3 = *(rax_28 + 0x50)
                    
                    if ((rdi_3.b & 1) != 0)
                        rdi_3 = (rdi_3 s>> 1) + rax_28 + 0x50
                    
                    int32_t i_6 = *(rax_28 + 0x58)
                    
                    if (i_6 != 0)
                        int32_t i
                        
                        do
                            sub_1405d1550(rdi_3)
                            rdi_3 += 0x20
                            i = i_6
                            i_6 -= 1
                        while (i != 1)
                    
                    int32_t r8_1 = *(rax_28 + 0x5c)
                    *(rax_28 + 0x58) = i_4
                    
                    if (i_4 != 0 || r8_1 != 0)
                        sub_1405e3e00(rax_28 + 0x50, i_4, r8_1)
                        void* rdx_11 = *(rax_28 + 0x50)
                        
                        if ((rdx_11.b & 1) != 0)
                            rdx_11 = (rdx_11 s>> 1) + rax_28 + 0x50
                        
                        if (i_4 != 0)
                            void* rcx_27 = r14_2 + 0xc
                            void* rdx_13 = rdx_11 + 0xc
                            int32_t i_1
                            
                            do
                                void* rax_29 = *(rcx_27 - 0xc)
                                *(rdx_13 - 0xc) = rax_29
                                
                                if (rax_29 != 0)
                                    *(rax_29 + 8) += 1
                                
                                *(rdx_13 - 4) = *(rcx_27 - 4)
                                *rdx_13 = *rcx_27
                                *(rdx_13 + 4) = *(rcx_27 + 4)
                                *(rdx_13 + 8) = *(rcx_27 + 8)
                                *(rdx_13 + 0xc) = *(rcx_27 + 0xc)
                                *(rdx_13 + 0x10) = *(rcx_27 + 0x10)
                                *(rdx_13 + 0x11) = *(rcx_27 + 0x11)
                                char rax_37 = *(rcx_27 + 0x12)
                                rcx_27 += 0x20
                                *(rdx_13 + 0x12) = rax_37
                                rdx_13 += 0x20
                                i_1 = i_4
                                i_4 -= 1
                            while (i_1 != 1)
                            i_4 = i_7
                            r14_2 = var_1a8
                    else
                        *(rax_28 + 0x5c) = i_4
                    
                    int32_t i_5 = var_188_1.d
                    int64_t r12_2 = 0
                    void* rdi_5 = var_190
                    int64_t var_148 = 0
                    int32_t i_8 = i_5
                    int32_t rdi_6
                    
                    if (i_5 != 0)
                        sub_14083a0c0(&var_148, i_5, 0)
                        r12_2 = var_148
                        void* r15_3 = r12_2 - rdi_5
                        int32_t i_2
                        
                        do
                            sub_140819f30(r15_3 + rdi_5, rdi_5)
                            rdi_5 += 0xa0
                            i_2 = i_5
                            i_5 -= 1
                        while (i_2 != 1)
                        int32_t var_13c
                        rdi_6 = var_13c
                        i_5 = i_8
                    else
                        rdi_6 = 0
                    
                    int64_t* rcx_30 = *(r13 + 0x158)
                    char var_138_1 = 0
                    uint64_t rax_39 = zx.q(*(r15_1 + 0xec))
                    int64_t* var_160_1
                    var_160_1.d = rax_39.d
                    int32_t var_134_1 = rax_39.d
                    uint32_t rax_41 = (rax_39 * 3).d << 2
                    void* var_158
                    var_158.d = rax_41
                    uint32_t var_130_1 = rax_41
                    void* rax_43 = (*(*rcx_30 + 0x90))(rcx_30)
                    int64_t* rcx_31 = *(r13 + 0x158)
                    int32_t rax_44 = *(rax_43 + 0x48)
                    int32_t var_12c_1 = rax_44
                    int64_t rax_46 = (*(*rcx_31 + 0x90))(rcx_31)
                    int64_t* rcx_32 = *(r13 + 0x158)
                    int64_t rdx_16 = *rcx_32
                    int64_t rax_47 = (*(rdx_16 + 0x98))(rcx_32, rdx_16)
                    int64_t r13_2 = sx.q(*(arg2 + 0x30))
                    int32_t rcx_33 = (r13_2 + 1).d
                    *(arg2 + 0x30) = rcx_33
                    
                    if (rcx_33 s> *(arg2 + 0x34))
                        sub_1405c4f50(arg2 + 0x28)
                    
                    var_148 = 0
                    i_8.q = 0
                    int64_t* rcx_38 = r13_2 * 0x30 + *(arg2 + 0x28)
                    *rcx_38 = r12_2
                    rcx_38[1].d = i_5
                    *(rcx_38 + 0xc) = rdi_6
                    rcx_38[2].b = 0
                    *(rcx_38 + 0x14) = var_160_1.d
                    rcx_38[3].d = var_158.d
                    *(rcx_38 + 0x1c) = rax_44
                    rcx_38[4] = rax_46
                    rcx_38[5] = rax_47
                    sub_14081c7d0(&var_148)
                    int64_t* rdi_7 = r14_2
                    
                    if (i_4 != 0)
                        int32_t i_3
                        
                        do
                            sub_1405d1550(rdi_7)
                            rdi_7 = &rdi_7[4]
                            i_3 = i_4
                            i_4 -= 1
                        while (i_3 != 1)
                    
                    if (r14_2 != 0)
                        sub_140a74f90(r14_2)
                
                sub_1422926f0(&var_198)
                int64_t rbx_5 = sx.q(arg3[1].d)
                int32_t rax_53 = (rbx_5 + 1).d
                arg3[1].d = rax_53
                
                if (rax_53 s> *(arg3 + 0xc))
                    sub_1407c3b60(arg3)
                
                sub_14081b0c0(rbx_5 * 0x38 + *arg3, &var_198)
            
            sub_1405ec8a0(&var_168)
            int64_t rcx_47 = var_178
            
            if (rcx_47 != 0)
                sub_140a74f90(rcx_47)
            
            result = sub_14081c7d0(&var_190)

__security_check_cookie(rax_1 ^ &var_1e8)
return result
