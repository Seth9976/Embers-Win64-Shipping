// 函数: sub_140911200
// 地址: 0x140911200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int32_t r13 = 0
void var_58
int64_t* rax
int512_t zmm1
rax, zmm1 = sub_140b58260(&var_58, u"WINDOWS", 1)
sub_140fc6160(rax)
int64_t* rcx_2 = *(arg1 + 0x88)
int32_t arg_18 = 0
void var_1d0
int32_t result

if ((*(*rcx_2 + 0x68))(rcx_2, &arg_8, 1, &var_1d0, 2).b == 0)
label_1409115e4:
    result.b = 0
else
    int64_t* rcx_3 = *(arg1 + 0x88)
    
    if ((*(*rcx_3 + 0x78))(rcx_3, 0, int.q(fconvert.t(10000000.0))) != 0)
        void** const* rcx_33
        
        if (*(arg1 + 0x81) != 0)
        label_1409114fc:
            int64_t* r12_1 = arg_8.q
            
            while (true)
                int32_t r8_3 = *(arg1 + 0xc0)
                int32_t arg_10 = 0
                
                if (r8_3 == 0)
                    int64_t* rcx_26 = *(arg1 + 0x88)
                    
                    if ((*(*rcx_26 + 0x38))(rcx_26, &arg_18, r8_3).b == 0)
                        goto label_140911af6
                    
                    if (arg_18 u< 4)
                        goto label_140911af6
                    
                    void** var_108
                    memset(&var_108, 0, 0x90)
                    sub_140b4c2a0(&var_108)
                    int128_t var_78
                    __builtin_memset(&var_78, 0, 0x18)
                    var_108 = &data_142d5fff0
                    sub_140b55290(&var_108, 1)
                    var_108[0x1b](&var_108, 1)
                    int64_t var_68_1
                    int32_t rax_25 = var_68_1.d
                    
                    if (rax_25 s< 4)
                        bool cond:3_1 = var_68_1:4.d s>= 4
                        var_68_1.d = 4
                        
                        if (not(cond:3_1))
                            sub_1405daba0(&var_78:8)
                    else if (rax_25 s> 4)
                        int32_t rbx_2 = rax_25 - 4
                        
                        if (rbx_2 != 0)
                            int32_t rcx_35 = rax_25 - rbx_2
                            
                            if (rcx_35 != 4)
                                int64_t rcx_37 = var_78:8.q
                                memmove(rcx_37 + 4, sx.q(rbx_2 + 4) + rcx_37, rcx_35 - 4)
                                rax_25 = var_68_1.d
                            
                            var_68_1.d = rax_25 - rbx_2
                            sub_1405dac10(&var_78:8)
                    
                    int64_t* rcx_40 = *(arg1 + 0x88)
                    int64_t rdx_15 = var_78:8.q
                    arg_10 = 0
                    char rax_29 = (*(*rcx_40 + 0x68))(rcx_40, rdx_15, 4, &arg_10, 0)
                    
                    if (rax_29 != 0)
                        *(arg1 + 0x98) += sx.q(arg_10)
                        int64_t* var_100
                        int32_t* rdx_16 = *var_100
                        
                        if (&rdx_16[1] u> var_100[1])
                            void*** rcx_42 = &var_108
                            char var_df
                            
                            if ((var_df & 0x20) != 0)
                                sub_140b54070(rcx_42, arg1 + 0xc0, zmm1)
                            else
                                var_108[0x2a](rcx_42, arg1 + 0xc0, 4)
                        else
                            *(arg1 + 0xc0) = *rdx_16
                            *var_100 += 4
                    
                    if (rax_29 == 0 || *(arg1 + 0xc0) s<= 0)
                        int64_t rcx_67 = var_78:8.q
                        
                        if (rcx_67 != 0)
                            sub_140a74f90(rcx_67)
                        
                        rcx_33 = &var_108
                        break
                    
                    void*** rax_34 = j_sub_140a82f30(0xa8)
                    void*** rdi_1
                    
                    if (rax_34 == 0)
                        rdi_1 = nullptr
                    else
                        rdi_1 = sub_14090d660(rax_34, 1)
                    
                    int64_t* rax_36 = j_sub_140a82f30(0x18)
                    int64_t* rbx_3 = rax_36
                    
                    if (rax_36 == 0)
                        rbx_3 = nullptr
                    else
                        rax_36[1].d = 1
                        *(rax_36 + 0xc) = 1
                        *rbx_3 = &data_142d62ce0
                        rbx_3[2] = rdi_1
                    
                    void*** var_1f0 = rdi_1
                    int64_t* var_1e8 = rbx_3
                    
                    if (arg1 + 0xb0 != &var_1f0)
                        *(arg1 + 0xb0) = rdi_1
                        var_1f0 = nullptr
                        sub_1405aeff0(arg1 + 0xb8, &var_1e8)
                        rbx_3 = var_1e8
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d -= 1
                        
                        if (rbx_3[1].d == 1)
                            (**rbx_3)(rbx_3)
                            int32_t rax_39 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (rax_39 == 1)
                                (*(*rbx_3 + 8))(rbx_3, 1)
                    
                    int32_t rax_41 = *(arg1 + 0xc0)
                    int64_t* rcx_48 = *(arg1 + 0xb0) + 0x98
                    int32_t rdx_20 = rcx_48[1].d
                    
                    if (rax_41 s> rdx_20)
                        rcx_48[1].d = rax_41
                        
                        if (rax_41 s> *(rcx_48 + 0xc))
                            sub_1405daba0(rcx_48)
                    else if (rax_41 s< rdx_20 && rax_41 != rdx_20)
                        rcx_48[1].d = rax_41
                        sub_1405dac10(rcx_48)
                    
                    int64_t rcx_49 = var_78:8.q
                    
                    if (rcx_49 != 0)
                        sub_140a74f90(rcx_49)
                    
                    zmm1 = sub_140b4cb40(&var_108)
                    r8_3 = *(arg1 + 0xc0)
                
                int64_t* rcx_51 = *(arg1 + 0x88)
                void* rax_42 = *(arg1 + 0xb0)
                arg_10 = 0
                
                if ((*(*rcx_51 + 0x68))(rcx_51, 
                        sx.q(*(rax_42 + 0xa0)) - sx.q(r8_3) + *(rax_42 + 0x98), r8_3, &arg_10, 0).b == 0)
                    goto label_1409115e4_1
                
                int64_t rcx_52 = sx.q(arg_10)
                
                if (rcx_52.d s<= 0)
                    goto label_140911af6
                
                *(arg1 + 0x98) += rcx_52
                int32_t temp1_1 = *(arg1 + 0xc0)
                *(arg1 + 0xc0) -= rcx_52.d
                
                if (temp1_1 == rcx_52.d)
                    void*** rax_44 = j_sub_140a82f30(0xb0)
                    void*** rbx_4 = rax_44
                    
                    if (rax_44 == 0)
                        rbx_4 = nullptr
                    else
                        void* rcx_53 = &rbx_4[3]
                        r13 |= 1
                        r12_1 = nullptr
                        *rbx_4 = &data_142e1cf30
                        rbx_4[1] = 0
                        rbx_4[2] = 0
                        *(rcx_53 + 0x10) = 0
                        *(rcx_53 + 0x18) = 0
                        *(rcx_53 + 0x1c) = 0x80
                        void* rax_45 = *(rcx_53 + 0x10)
                        
                        if (rax_45 != 0)
                            rcx_53 = rax_45
                        
                        *rcx_53 = 0
                        *(rcx_53 + 8) = 0
                        rbx_4[7].d = 0xffffffff
                        *(rbx_4 + 0x3c) = 0
                        rbx_4[9] = 0
                        rbx_4[0xa].d = 0
                        rbx_4[0xb] = 0
                        rbx_4[0xc] = 0
                        __builtin_memset(&rbx_4[0xe], 0, 0x18)
                        *(rbx_4 + 0x8c) = 0
                        *(rbx_4 + 0x94) = 0
                        rbx_4[0x15].d = 0xffffffff
                        *(rbx_4 + 0xac) = 0
                    
                    if ((r13.b & 1) != 0)
                        r13 &= 0xfffffffe
                        
                        if (r12_1 != 0)
                            r12_1[1].d -= 1
                            
                            if (r12_1[1].d == 1)
                                (**r12_1)(r12_1)
                                int32_t rax_48 = *(r12_1 + 0xc)
                                *(r12_1 + 0xc) -= 1
                                
                                if (rax_48 == 1)
                                    (*(*r12_1 + 8))(r12_1, 1)
                    
                    char rax_50
                    rax_50, zmm1 = sub_14090ef60(rbx_4, arg1 + 0xb0)
                    
                    if (rax_50 != 0)
                        int64_t* rax_51 = j_sub_140a82f30(0x18)
                        
                        if (rax_51 == 0)
                            rax_51 = nullptr
                        else
                            rax_51[1].d = 1
                            *rax_51 = &data_142e1d5c8
                            *(rax_51 + 0xc) = 1
                            rax_51[2] = rbx_4
                        
                        int64_t* var_1f8_1 = rax_51
                        int64_t* rax_52 = j_sub_140a82f30(0x18)
                        
                        if (rax_52 != 0)
                            *rax_52 = 0
                            rax_52[1] = rbx_4
                            rax_52[2] = var_1f8_1
                            var_1f8_1 = nullptr
                            int64_t var_200_2 = 0
                            int32_t temp0_5 = *(arg1 + 0x40)
                            *(arg1 + 0x40) = rax_52
                            void** rcx_60 = temp0_5
                            *rcx_60
                            *rcx_60 = rax_52
                        
                        if (var_1f8_1 != 0)
                            var_1f8_1[1].d -= 1
                            
                            if (var_1f8_1[1].d == 1)
                                (**var_1f8_1)(var_1f8_1)
                                int32_t rax_56 = *(var_1f8_1 + 0xc)
                                *(var_1f8_1 + 0xc) -= 1
                                
                                if (rax_56 == 1)
                                    (*(*var_1f8_1 + 8))(var_1f8_1, 1)
                    
                    int128_t var_1e0 = zx.o(0)
                    
                    if (arg1 + 0xb0 != &var_1e0)
                        *(arg1 + 0xb0) = 0
                        sub_1405aeff0(arg1 + 0xb8, &var_1e0:8)
                        void* rcx_64 = var_1e0:8.q
                        
                        if (rcx_64 != 0)
                            int32_t rax_58 = *(rcx_64 + 8)
                            *(rcx_64 + 8) -= 1
                            
                            if (rax_58 == 1)
                                int64_t* rbx_6 = var_1e0:8.q
                                (**rbx_6)(rbx_6)
                                int32_t rax_60 = *(rbx_6 + 0xc)
                                *(rbx_6 + 0xc) -= 1
                                
                                if (rax_60 == 1)
                                    int64_t* rcx_66 = var_1e0:8.q
                                    (*(*rcx_66 + 8))(rcx_66, 1)
            
            goto label_1409115df
        
        int64_t* rcx_5 = *(arg1 + 0x88)
        
        if ((*(*rcx_5 + 0x38))(rcx_5, &arg_18).b == 0 || arg_18 u< 0x18)
        label_140911af6:
            result.b = 1
        else
            void** const var_1b8
            memset(&var_1b8, 0, 0x90)
            sub_140b4c2a0(&var_1b8)
            int128_t var_128
            __builtin_memset(&var_128, 0, 0x18)
            var_1b8 = &data_142d5fff0
            sub_140b55290(&var_1b8, 1)
            var_1b8[0x1b](&var_1b8, 1)
            int64_t var_118
            int32_t rax_7 = var_118.d
            
            if (rax_7 s< 0x18)
                bool cond:1_1 = var_118:4.d s>= 0x18
                var_118.d = 0x18
                
                if (not(cond:1_1))
                    sub_1405daba0(&var_128:8)
            else if (rax_7 s> 0x18 && rax_7 != 0x18)
                var_118.d = 0 + 0x18
                sub_1405dac10(&var_128:8)
            
            int64_t* rcx_13 = *(arg1 + 0x88)
            int64_t rdx_4 = var_128:8.q
            int32_t arg_20 = 0
            char rax_10 = (*(*rcx_13 + 0x68))(rcx_13, rdx_4, 0x18, &arg_20, 0)
            int64_t var_218
            int64_t var_210
            
            if (rax_10 != 0)
                *(arg1 + 0x98) += sx.q(arg_20)
                __builtin_memset(&var_218, 0, 0x18)
                int64_t* var_1b0
                int32_t* rdx_5 = *var_1b0
                char var_18f
                
                if (&rdx_5[1] u> var_1b0[1])
                    int32_t* rdx_6 = &var_218
                    void** const* rcx_15 = &var_1b8
                    
                    if ((var_18f & 0x20) != 0)
                        sub_140b54070(rcx_15, rdx_6, zmm1)
                    else
                        var_1b8[0x2a](rcx_15, rdx_6, 4)
                else
                    var_218.d = *rdx_5
                    *var_1b0 += 4
                
                int32_t* rdx_7 = *var_1b0
                
                if (&rdx_7[1] u> var_1b0[1])
                    int32_t* rdx_8 = &var_218:4
                    void** const* rcx_17 = &var_1b8
                    
                    if ((var_18f & 0x20) != 0)
                        sub_140b54070(rcx_17, rdx_8, zmm1)
                    else
                        var_1b8[0x2a](rcx_17, rdx_8, 4)
                else
                    var_218:4.d = *rdx_7
                    *var_1b0 += 4
                
                sub_1409ac860(&var_1b8, &var_210, zmm1)
            
            int64_t var_208
            
            if (rax_10 != 0 && var_218.d == 0x45504943 && var_218:4.d == 1
                    && (var_208:4.d | var_208.d | var_210:4.d | var_210.d) != 0)
                int128_t zmm0_1 = var_210.o
                *(arg1 + 0x84) = 1
                *(arg1 + 0x81) = 1
                *(arg1 + 0x70) = zmm0_1
                void var_50
                *(arg1 + 0x50) = *sub_140b29d90(&var_50)
                EnterCriticalSection(arg1 + 0xc8)
                *(arg1 + 0x28) = 1
                
                if (arg1 != -0xc8)
                    LeaveCriticalSection(arg1 + 0xc8)
                
                sub_140910050(arg1 + 0x18)
                int64_t rcx_24 = var_128:8.q
                
                if (rcx_24 != 0)
                    sub_140a74f90(rcx_24)
                
                zmm1 = sub_140b4cb40(&var_1b8)
                goto label_1409114fc
            
            int64_t rcx_32 = var_128:8.q
            
            if (rcx_32 != 0)
                sub_140a74f90(rcx_32)
            
            rcx_33 = &var_1b8
        label_1409115df:
            sub_140b4cb40(rcx_33)
        label_1409115e4_1:
            result.b = 0
    else
        int64_t* rcx_4 = *(arg1 + 0x88)
        result.b = (*(*rcx_4 + 0x80))(rcx_4) != 2

return result
