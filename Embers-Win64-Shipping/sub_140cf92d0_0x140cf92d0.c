// 函数: sub_140cf92d0
// 地址: 0x140cf92d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
char rax_2 = sub_140b5b8a0(*(arg2 + 8), 0x1d)
uint64_t result

if ((*(arg2 + 0xc) == 0 & rax_2) == 0)
    result = 0
else
    int32_t rcx_1
    rcx_1.b = sub_140b5b8a0(*(arg2 + 0x2c), 0) == 0
    int64_t* var_100
    int64_t* rax_5
    int64_t rcx_3
    
    if ((*(arg2 + 0x30) != 0 | rcx_1.b) != 0)
        int64_t* rcx_2 = *(arg1 + 0x78)
        rax_5 = (*(*rcx_2 + 0xf8))(rcx_2, &var_100)
        rcx_3 = *(arg2 + 0x2c)
    
    int32_t var_118
    int128_t var_58
    
    if ((*(arg2 + 0x30) != 0 | rcx_1.b) == 0 || rcx_3 == *rax_5)
        void* rdx_26 = *(arg1 + 0x78)
        
        if (rdx_26 == 0 || ((zx.q(*(*(rdx_26 + 8) + 0x10)) u>> 0x14).b & 1) == 0)
            result = 0
        else
            void* rcx_45 = *(rdx_26 + 0x78)
            
            if (rcx_45 == 0)
            label_140cf9813:
                int32_t result_1 = 1
                int32_t rax_50 = *(arg1 + 0x90)
                int64_t* rbx_7 = sx.q(*(arg1 + 0x4c)) + arg4
                int64_t* r15_1 = *(arg1 + 0x78)
                var_58 = *(arg1 + 0x80)
                var_118 = rax_50
                int32_t r12_1 = rbx_7[1].d
                int32_t i = r12_1 - *(rbx_7 + 0x34)
                
                if (r12_1 != *(rbx_7 + 0x34))
                    int32_t rdi_4 = 0
                    
                    if ((r15_1[8] & 0x1040000000) == 0)
                        uint64_t rdx_27 = zx.q(var_58:8.d)
                        int32_t r14_1 = 1
                        int64_t rsi_2 = *rbx_7
                        
                        do
                            if (rdi_4 s>= 0 && rdi_4 s< rbx_7[5].d)
                                void* rax_51 = rbx_7[4]
                                void* rcx_47 = &rbx_7[2]
                                
                                if (rax_51 != 0)
                                    rcx_47 = rax_51
                                
                                int32_t rax_52 = rdi_4
                                
                                if (rdi_4 s< 0)
                                    rax_52 = rdi_4 + 0x1f
                                
                                if ((*(rcx_47 + (sx.q(rax_52 s>> 5) << 2)) & r14_1) != 0)
                                    if ((not.b((r15_1[8] u>> 0x24).b) & 1) != 0)
                                        (*(*r15_1 + 0xe8))(r15_1, sx.q(*(r15_1 + 0x4c)) + rsi_2)
                                        rdx_27 = zx.q(var_58:8.d)
                                    
                                    i -= 1
                            
                            rsi_2 += rdx_27
                            r14_1 = rol.d(r14_1, 1)
                            rdi_4 += 1
                        while (i != 0)
                        
                        rax_50 = var_118
                        result_1 = i + 1
                    
                    rbx_7[1].d = 0
                    
                    if (*(rbx_7 + 0xc) != 0)
                        sub_140ce4fc0(rbx_7, 0, rax_50)
                    
                    rbx_7[6].d = 0xffffffff
                    *(rbx_7 + 0x34) = 0
                    rbx_7[5].d = 0
                    
                    if (*(rbx_7 + 0x2c) != 0)
                        *(rbx_7 + 0x2c) = 0
                        sub_140d0bc80(&rbx_7[2], 0)
                    
                    int64_t rcx_51 = sx.q(rbx_7[9].d)
                    void* rdi_5 = &rbx_7[7]
                    void* rax_58 = *(rdi_5 + 8)
                    
                    if (rcx_51 s> 0)
                        if (rax_58 != 0)
                            rdi_5 = rax_58
                        
                        __builtin_memset(rdi_5, 0xffffffff, rcx_51 << 2)
                
                result = zx.q(result_1)
            else
                int64_t* rcx_46 = *(rcx_45 + 0xb8)
                
                if (rcx_46 == 0)
                    result = 0
                else
                    if ((*(*rcx_46 + 0x110))(rcx_46) == 0)
                        goto label_140cf9813
                    
                    result = 0
    else
        int128_t zmm0 = *(arg1 + 0x80)
        int64_t var_68 = *(arg1 + 0x78)
        void* rax_8 = sx.q(*(arg1 + 0x4c)) + arg4
        int64_t var_110_1 = 0
        int64_t r12
        r12.b = 1
        int32_t rax_9 = *(arg1 + 0x90)
        void* rax_10 = *arg3
        var_58 = zmm0
        int64_t var_f8 = 0
        char var_e8_1 = 0
        int64_t var_e4
        __builtin_memset(&var_e4, 0, 0x30)
        int64_t var_b0_1 = -1
        int64_t var_a8
        __builtin_memset(&var_a8, 0, 0x11)
        int64_t var_94_1 = 0
        int64_t var_8c_1 = 0
        int64_t var_f0_1 = rcx_3
        int32_t var_108 = 0
        int64_t* r9 = *(rax_10 + 8)
        int64_t* rcx_4 = r9[1]
        int32_t* rdx_2 = *rcx_4
        
        if (&rdx_2[1] u> rcx_4[1])
            int32_t* rdx_3 = &var_108
            
            if ((*(r9 + 0x29) & 0x20) != 0)
                sub_140b54070(r9, rdx_3, arg5)
            else
                (*(*r9 + 0x150))(r9, rdx_3, 4)
        else
            var_108 = *rdx_2
            int64_t* rax_13 = r9[1]
            *rax_13 += 4
        
        int32_t rsi_1 = 1
        
        if (var_108 != 0)
            int64_t rax_15 = sub_140a82f30(sx.q(*(arg1 + 0x88)), 0)
            int64_t* r8 = *(arg1 + 0x78)
            var_110_1 = rax_15
            
            if (not(test_bit(zx.q(r8[8].d), 9)))
                (*(*r8 + 0xf0))(r8, rax_15)
            else
                memset(rax_15, 0, sx.q(*(r8 + 0x3c) * r8[7].d))
            
            int64_t* rcx_12 = *(arg1 + 0x78)
            
            if ((*(*rcx_12 + 0x78))(rcx_12, &var_f8, arg3, var_110_1, arg6) != 2)
                r12.b = 0
            else
                int32_t rax_19 = sub_140cfe6e0(&var_68, var_110_1, 0)
                
                if (rax_19 != 0xffffffff)
                    sub_140d0ca40(&var_68, rax_19, 1)
                
                int32_t rbx_1 = 1
                
                if (var_108 s> 1)
                    do
                        int64_t* rcx_15 = *(arg1 + 0x78)
                        (*(*rcx_15 + 0x78))(rcx_15, &var_f8, arg3, var_110_1, arg6)
                        int32_t rax_21 = sub_140cfe6e0(&var_68, var_110_1, 0)
                        
                        if (rax_21 != 0xffffffff)
                            sub_140d0ca40(&var_68, rax_21, 1)
                        
                        rbx_1 += 1
                    while (rbx_1 s< var_108)
        
        void* rax_22 = *arg3
        var_118 = 0
        int64_t* r9_4 = *(rax_22 + 8)
        int64_t* rcx_18 = r9_4[1]
        int32_t* rdx_11 = *rcx_18
        
        if (&rdx_11[1] u> rcx_18[1])
            int32_t* rdx_12 = &var_118
            
            if ((*(r9_4 + 0x29) & 0x20) != 0)
                sub_140b54070(r9_4, rdx_12, arg5)
            else
                (*(*r9_4 + 0x150))(r9_4, rdx_12, 4)
        else
            var_118 = *rdx_11
            int64_t* rax_25 = r9_4[1]
            *rax_25 += 4
        
        char temp2_1 = r12.b
        bool cond:2_1 = temp2_1 != 0
        
        if (temp2_1 != 0)
            if (var_118 != 0)
                if (var_110_1 == 0)
                    int64_t rax_27 = sub_140a82f30(sx.q(*(arg1 + 0x88)), 0)
                    int64_t* r8_4 = *(arg1 + 0x78)
                    var_110_1 = rax_27
                    
                    if (not(test_bit(zx.q(r8_4[8].d), 9)))
                        (*(*r8_4 + 0xf0))(r8_4, rax_27)
                    else
                        memset(rax_27, 0, sx.q(*(r8_4 + 0x3c) * r8_4[7].d))
                
                int64_t* rcx_26 = *(arg1 + 0x78)
                
                if ((*(*rcx_26 + 0x78))(rcx_26, &var_f8, arg3, var_110_1, arg6) != 2)
                    r12.b = 0
                else
                    if (sub_140cfe6e0(&var_68, var_110_1, 0) == 0xffffffff)
                        int32_t rax_32 = sub_140cf15e0(&var_68)
                        int64_t* r10_1 = *(arg1 + 0x78)
                        int64_t rdx_16 = sx.q(*(r10_1 + 0x4c))
                        int64_t rbx_3 = var_110_1 + rdx_16
                        int64_t r11_3 = sx.q(rax_9 * rax_32) + rdx_16 + *rax_8
                        
                        if (r11_3 != rbx_3)
                            if (not(test_bit(zx.q(r10_1[8].d), 0x1e)))
                                (*(*r10_1 + 0xb0))(r10_1, r11_3, rbx_3, zx.q(r10_1[7].d))
                            else
                                memcpy(r11_3, rbx_3, *(r10_1 + 0x3c) * r10_1[7].d)
                    
                    if (var_118 s> 1)
                        do
                            int64_t* rcx_33 = *(arg1 + 0x78)
                            (*(*rcx_33 + 0x78))(rcx_33, &var_f8, arg3, var_110_1, arg6)
                            
                            if (sub_140cfe6e0(&var_68, var_110_1, 0) == 0xffffffff)
                                int32_t rax_40 = sub_140cf15e0(&var_68)
                                int64_t* r10_2 = *(arg1 + 0x78)
                                int64_t rdx_21 = sx.q(*(r10_2 + 0x4c))
                                int64_t rbx_5 = var_110_1 + rdx_21
                                int64_t r11_6 = sx.q(rax_9 * rax_40) + rdx_21 + *rax_8
                                
                                if (r11_6 != rbx_5)
                                    if (not(test_bit(zx.q(r10_2[8].d), 0x1e)))
                                        (*(*r10_2 + 0xb0))(r10_2, r11_6, rbx_5, zx.q(r10_2[7].d))
                                    else
                                        memcpy(r11_6, rbx_5, *(r10_2 + 0x3c) * r10_2[7].d)
                            
                            rsi_1 += 1
                        while (rsi_1 s< var_118)
            
            var_100 = &var_68
            int64_t** var_70_1 = &var_100
            int64_t (* var_78)(int64_t* arg1, int64_t* arg2) = sub_140cf2f70
            sub_140d0c0d0(rax_8, &var_58, &var_78)
            cond:2_1 = r12.b != 0
        
        int64_t rcx_42 = var_110_1
        int32_t r13_1
        r13_1.b = cond:2_1
        
        if (rcx_42 != 0)
            int64_t* rax_46 = *(arg1 + 0x78)
            
            if ((not.b((rax_46[8] u>> 0x24).b) & 1) != 0)
                (*(*rax_46 + 0xe8))(rax_46, rcx_42)
                rcx_42 = var_110_1
            
            sub_140a74f90(rcx_42)
        
        result = zx.q(r13_1 + 1)

__security_check_cookie(rax_1 ^ &var_148)
return result
