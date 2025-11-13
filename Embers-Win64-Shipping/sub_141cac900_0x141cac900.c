// 函数: sub_141cac900
// 地址: 0x141cac900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t* var_e8 = arg2
int64_t* i_2 = arg2
int32_t var_110
int64_t* result

if (*sub_140865c40(arg4, &var_110, arg2) == 0xffffffff)
    int64_t* i = nullptr
    int64_t var_98 = 0
    int32_t var_90_1 = 0
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x1c)
    int32_t var_64_1 = 0
    void* var_58_1 = nullptr
    int32_t var_50_1 = 0
    int32_t var_6c_1 = 0x80
    int32_t var_68_1 = 0xffffffff
    int32_t var_f8
    
    do
    label_141cac9e0:
        int128_t* rbx_1 = *i_2
        int128_t* var_118 = rbx_1
        
        if (var_90_1 != var_64_1)
            void var_60
            void* rcx_5 = &var_60
            int64_t rdx_4 = sx.q(var_50_1 - 1) & sx.q(sub_140b5ead0(rbx_1.d) + var_118:4.d)
            
            if (var_58_1 != 0)
                rcx_5 = var_58_1
            
            int32_t rax_10 = *(rcx_5 + (rdx_4 << 2))
            
            if (rax_10 != 0xffffffff)
                int64_t rdx_5 = var_98
                
                while (true)
                    int64_t rcx_7 = sx.q(rax_10) * 2
                    
                    if (*(rdx_5 + (rcx_7 << 3)) == rbx_1)
                        break
                    
                    rax_10 = *(rdx_5 + (rcx_7 << 3) + 8)
                    
                    if (rax_10 == 0xffffffff)
                        goto label_141caca43
                
                if (rax_10 != 0xffffffff)
                    break
        
    label_141caca43:
        int64_t rbx_2 = *i_2
        sub_14090a150(&var_98, &var_f8)
        int64_t* var_f0
        *var_f0 = rbx_2
        var_f0[1].d = 0xffffffff
        sub_1407ec830(&var_98, &var_110, (rbx_2 u>> 0x20).d + sub_140b5ead0(rbx_2.d), var_f0, 
            var_f8, nullptr)
        int32_t rax_13 = *(arg1 + 0x58)
        int128_t* rbx_4 = *i_2
        var_118 = rbx_4
        
        if (rax_13 == *(arg1 + 0x84))
        label_141cacafa:
            i = i_2
        else
            int32_t rax_15 = sub_140b5ead0(rbx_4.d) + var_118:4.d
            void* r8_3 = arg1 + 0x88
            void* rcx_12 = *(r8_3 + 8)
            
            if (rcx_12 != 0)
                r8_3 = rcx_12
            
            int32_t rax_17 = *(r8_3 + (((sx.q(*(arg1 + 0x98)) - 1) & sx.q(rax_15)) << 2))
            
            if (rax_17 == 0xffffffff)
            label_141cacafa_1:
                i = i_2
            else
                int64_t rdx_11 = *(arg1 + 0x50)
                
                while (true)
                    int64_t rcx_14 = sx.q(rax_17) << 5
                    
                    if (*(rcx_14 + rdx_11) == rbx_4)
                        break
                    
                    rax_17 = *(rcx_14 + rdx_11 + 0x18)
                    
                    if (rax_17 == 0xffffffff)
                        goto label_141cacafa_2
                
                if (rax_17 == 0xffffffff)
                label_141cacafa_2:
                    i = i_2
                else
                    int128_t* rbx_6 = *i_2
                    int32_t rax_18 = *(arg1 + 0x58)
                    var_118 = rbx_6
                    int64_t* rdx_18
                    
                    if (rax_18 == *(arg1 + 0x84))
                    label_141cacc3e:
                        rdx_18 = nullptr
                    else
                        int32_t rax_20 = sub_140b5ead0(rbx_6.d) + var_118:4.d
                        void* r8_5 = arg1 + 0x88
                        void* rcx_24 = *(r8_5 + 8)
                        
                        if (rcx_24 != 0)
                            r8_5 = rcx_24
                        
                        int32_t rax_22 =
                            *(r8_5 + (((sx.q(*(arg1 + 0x98)) - 1) & sx.q(rax_20)) << 2))
                        
                        if (rax_22 == 0xffffffff)
                        label_141cacc3e_1:
                            rdx_18 = nullptr
                        else
                            while (true)
                                rdx_18 = (sx.q(rax_22) << 5) + *(arg1 + 0x50)
                                
                                if (*rdx_18 == rbx_6)
                                    break
                                
                                rax_22 = rdx_18[3].d
                                
                                if (rax_22 == 0xffffffff)
                                    goto label_141cacc3e_2
                            
                            if (rax_22 == 0xffffffff)
                            label_141cacc3e_2:
                                rdx_18 = nullptr
                    
                    int64_t* rbx_7 = rdx_18[1]
                    void* r14_1 = &rbx_7[sx.q(rdx_18[2].d)]
                    
                    if (rbx_7 != r14_1)
                        while (true)
                            void* rdi_2 = *rbx_7
                            int64_t rcx_25 = *(sub_140cdddf0() + 0x18)
                            int64_t* i_1
                            
                            if (*(rdi_2 + 0x20) != rcx_25)
                                i_1 = i_2
                                i = i_1
                            else
                                int64_t** var_d0_1 = &i
                                int64_t* i_4
                                int64_t** var_c0_1 = &i_4
                                i_4 = nullptr
                                int128_t var_b8 = arg3.o
                                int128_t var_a8_1 = arg1.o
                                var_118 = &var_b8
                                sub_141c966c0(&var_118, &i_2[4])
                                sub_141c966c0(&var_118, &i_2[6])
                                sub_141c966c0(&var_118, &i_2[0xc])
                                sub_141c966c0(&var_118, &i_2[0xa])
                                sub_141c966c0(&var_118, &i_2[8])
                                int64_t* i_3 = i_4
                                
                                if (i_3 != 0)
                                    i_2 = i_3
                                    break
                                
                                i_1 = i
                            
                            if (i_1 != 0)
                                goto label_141cacb14
                            
                            rbx_7 = &rbx_7[1]
                            
                            if (rbx_7 == r14_1)
                                goto label_141cac9e0
    while (i == 0)
    
label_141cacb14:
    var_f8.q = &var_e8
    int64_t** var_f0_1 = &i
    sub_140bd29a0(arg4, &var_110, &var_f8, nullptr)
    int64_t* rbx_5 = i
    int32_t var_50_2 = 0
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    var_90_1 = 0
    int32_t var_68_2 = 0xffffffff
    int32_t var_64_2 = 0
    sub_14059a8e0(&var_88, 0)
    int64_t var_78
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    int64_t rcx_20 = var_98
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    result = rbx_5
else
    sub_140865c40(arg4, &var_110, i_2)
    int64_t rax_3 = sx.q(var_110)
    
    if (rax_3.d == 0xffffffff)
        result = *8
    else
        result = *(*arg4 + rax_3 * 0x18 + 8)

__security_check_cookie(rax_1 ^ &var_148)
return result
