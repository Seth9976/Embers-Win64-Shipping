// 函数: sub_140cf82f0
// 地址: 0x140cf82f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
uint64_t rbx = zx.q(*(arg2 + 0xc))
int64_t* var_1b8 = arg5
uint64_t result

if ((rbx.d == 0 & sub_140b5b8a0(*(arg2 + 8), 0x1c)) == 0)
    result = 0
else
    int32_t rcx_1
    rcx_1.b = sub_140b5b8a0(*(arg2 + 0x2c), 0) == 0
    int64_t var_1d0
    int64_t rax_7
    
    if ((*(arg2 + 0x30) != 0 | rcx_1.b) != 0)
        int64_t* rcx_2 = *(arg1 + 0x78)
        rax_7 = *(*(*rcx_2 + 0xf8))(rcx_2, &var_1d0)
    
    int64_t rax_11
    int32_t rcx_3
    
    if ((*(arg2 + 0x30) != 0 | rcx_1.b) == 0 || *(arg2 + 0x2c) == rax_7)
        rcx_3.b = sub_140b5b8a0(*(arg2 + 0x34), 0) == 0
        
        if ((*(arg2 + 0x38) != 0 | rcx_3.b) != 0)
            int64_t* rcx_4 = *(arg1 + 0x80)
            rax_11 = *(*(*rcx_4 + 0xf8))(rcx_4, &var_1d0)
    
    int64_t* var_1b0
    int64_t var_78
    int128_t var_60
    int64_t var_50
    int128_t zmm0
    int512_t zmm1
    
    if (((*(arg2 + 0x30) != 0 | rcx_1.b) == 0 || *(arg2 + 0x2c) == rax_7)
            && ((*(arg2 + 0x38) != 0 | rcx_3.b) == 0 || *(arg2 + 0x34) == rax_11))
        void* rdx_49 = *(arg1 + 0x78)
        
        if (rdx_49 == 0 || ((zx.q(*(*(rdx_49 + 8) + 0x10)) u>> 0x14).b & 1) == 0)
            result = 0
        else
            void* rcx_61 = *(rdx_49 + 0x78)
            
            if (rcx_61 == 0)
            label_140cf8d22:
                int32_t rcx_63 = *(arg1 + 0xa0)
                zmm0 = *(arg1 + 0x88)
                void* rdx_51 = sx.q(*(arg1 + 0x4c)) + arg4
                var_78 = *(arg1 + 0x78)
                zmm1.o = zx.o(*(arg1 + 0x98))
                int32_t var_48_2 = rcx_63
                rcx_63.b = not.b(rcx_63.b)
                int64_t var_70_2 = *(arg1 + 0x80)
                var_50 = (zmm1.o).q
                void* var_68_2 = rdx_51
                var_60 = zmm0
                int32_t r8_32 = *(rdx_51 + 8)
                int32_t r8_33
                
                if ((rcx_63.b & 1) != 0)
                    r8_33 = r8_32 - *(rdx_51 + 0x34)
                else
                    r8_33 = r8_32 - *(rdx_51 + 0x24)
                
                if (r8_33 != 0)
                    sub_140cfaf40(&var_78, 0, r8_33)
                    var_1b0 = &var_78
                    int32_t var_1a8_1 = 0
                    sub_140ceec60(&var_78, &var_1b0)
                
                result = 1
            else
                int64_t* rcx_62 = *(rcx_61 + 0xb8)
                
                if (rcx_62 == 0)
                    result = 0
                else
                    if ((*(*rcx_62 + 0x110))(rcx_62) == 0)
                        goto label_140cf8d22
                    
                    result = 0
    else
        char rcx_5 = (*(arg1 + 0xa0)).b
        rbx.b = 1
        zmm0 = *(arg1 + 0x88)
        int64_t* rdx_4 = sx.q(*(arg1 + 0x4c)) + arg4
        var_78 = *(arg1 + 0x78)
        zmm1.o = zx.o(*(arg1 + 0x98))
        int64_t var_70_1 = *(arg1 + 0x80)
        uint64_t rax_14 = *(arg2 + 0x2c)
        uint64_t rax_15 = *(arg2 + 0x34)
        void* rax_16 = *arg3
        var_60 = zmm0
        var_50 = (zmm1.o).q
        var_1d0 = 0
        int64_t var_178 = 0
        char var_168_1 = 0
        int64_t var_164
        __builtin_memset(&var_164, 0, 0x30)
        int64_t var_130_1 = -1
        int64_t var_128
        __builtin_memset(&var_128, 0, 0x11)
        int64_t var_114_1 = 0
        int64_t var_10c_1 = 0
        int64_t var_f8 = 0
        char var_e8_1 = 0
        int64_t var_e4
        __builtin_memset(&var_e4, 0, 0x30)
        int64_t var_b0_1 = -1
        int64_t var_a8
        __builtin_memset(&var_a8, 0, 0x11)
        int64_t var_94_1 = 0
        int64_t var_8c_1 = 0
        int32_t var_1c8 = 0
        int64_t* r9 = *(rax_16 + 8)
        char var_1d8_1 = 1
        int64_t* rcx_6 = r9[1]
        int32_t* rdx_5 = *rcx_6
        
        if (&rdx_5[1] u> rcx_6[1])
            int32_t* rdx_6 = &var_1c8
            
            if ((*(r9 + 0x29) & 0x20) != 0)
                sub_140b54070(r9, rdx_6, zmm1)
            else
                (*(*r9 + 0x150))(r9, rdx_6, 4)
        else
            var_1c8 = *rdx_5
            int64_t* rax_19 = r9[1]
            *rax_19 += 4
        
        int32_t r13_1 = 1
        int64_t* var_1e8
        int32_t var_1c0
        int32_t var_1a8
        void var_198
        int64_t* var_190
        int64_t var_13c
        
        if (var_1c8 != 0)
            int64_t rax_21 = sub_140a82f30(sx.q(*(arg1 + 0x94)), 0)
            int64_t* r8 = *(arg1 + 0x78)
            var_1d0 = rax_21
            
            if (not(test_bit(zx.q(r8[8].d), 9)))
                (*(*r8 + 0xf0))(r8, rax_21)
            else
                memset(rax_21, 0, sx.q(*(r8 + 0x3c) * r8[7].d))
            
            int64_t* rsi_1 = *(arg1 + 0x78)
            int64_t r14_1 = var_1d0
            int64_t* rax_24 = (*(*rsi_1 + 0xf8))(rsi_1, &var_1c0)
            int64_t r10_1 = *rsi_1
            
            if (*rax_24 != rax_14)
                var_1e8 = var_1b8
                
                if ((*(r10_1 + 0x78))(rsi_1, &var_178, arg3, r14_1, var_1e8) == 2)
                    goto label_140cf85d6
                
                rbx.b = 0
                var_1d8_1 = 0
            else
                (*(r10_1 + 0x88))(rsi_1, arg3, 
                    sx.q(*(rsi_1 + 0x4c)) + sx.q(*(rsi_1 + 0x3c) * var_13c:4.d) + r14_1, 0)
            label_140cf85d6:
                var_1c0 = 0
                var_1b0 = &var_78
                var_1a8.q = var_1d0
                int32_t* var_1a0_1 = &var_1c0
                int32_t rax_32 = sub_140ceef40(&var_78, &var_1b0)
                
                if (rax_32 != 0xffffffff)
                    var_1a8 = rax_32
                    var_1b0 = &var_78
                    int32_t var_1a4_1 = 1
                    sub_140ceed90(&var_78, &var_1b0)
                
                int32_t r14_2 = 1
                
                if (var_1c8 s> 1)
                    do
                        int64_t* rsi_2 = *(arg1 + 0x78)
                        var_1c0.q = var_1d0
                        int64_t* rax_35 = (*(*rsi_2 + 0xf8))(rsi_2, &var_198)
                        int64_t r10_2 = *rsi_2
                        
                        if (*rax_35 != rax_14)
                            var_1e8 = var_1b8
                            (*(r10_2 + 0x78))(rsi_2, &var_178, arg3, var_1c0.q, var_1e8)
                        else
                            (*(r10_2 + 0x88))(rsi_2, arg3, 
                                sx.q(*(rsi_2 + 0x4c)) + var_1c0.q
                                    + sx.q(*(rsi_2 + 0x3c) * var_13c:4.d), 
                                0, var_1e8)
                        
                        var_1c0 = 0
                        var_190 = &var_78
                        int64_t var_188_1 = var_1d0
                        int32_t* var_180_1 = &var_1c0
                        int32_t rax_42 = sub_140ceef40(&var_78, &var_190)
                        
                        if (rax_42 != 0xffffffff)
                            var_1a8 = rax_42
                            var_1b0 = &var_78
                            int32_t var_1a4_2 = 1
                            sub_140ceed90(&var_78, &var_1b0)
                        
                        r14_2 += 1
                    while (r14_2 s< var_1c8)
                
                rbx = 1
        
        void* rax_43 = *arg3
        int32_t var_1c4 = 0
        int64_t* r9_4 = *(rax_43 + 8)
        int64_t* rcx_22 = r9_4[1]
        int32_t* rdx_19 = *rcx_22
        
        if (&rdx_19[1] u> rcx_22[1])
            int32_t* rdx_20 = &var_1c4
            
            if ((*(r9_4 + 0x29) & 0x20) != 0)
                sub_140b54070(r9_4, rdx_20, zmm1)
            else
                (*(*r9_4 + 0x150))(r9_4, rdx_20, 4)
        else
            var_1c4 = *rdx_19
            int64_t* rax_46 = r9_4[1]
            *rax_46 += 4
        
        char temp0_1 = rbx.b
        bool cond:2_1 = temp0_1 != 0
        
        if (temp0_1 != 0)
            if (var_1c4 != 0)
                if (var_1d0 == 0)
                    int64_t rax_48 = sub_140a82f30(sx.q(*(arg1 + 0x94)), 0)
                    int64_t* r8_8 = *(arg1 + 0x78)
                    var_1d0 = rax_48
                    
                    if (not(test_bit(zx.q(r8_8[8].d), 9)))
                        (*(*r8_8 + 0xf0))(r8_8, rax_48)
                    else
                        memset(rax_48, 0, sx.q(*(r8_8 + 0x3c) * r8_8[7].d))
                
                int64_t* rsi_3 = *(arg1 + 0x78)
                int64_t r14_3 = var_1d0
                int64_t* rax_51 = (*(*rsi_3 + 0xf8))(rsi_3, &var_198)
                int64_t r10_3 = *rsi_3
                
                if (*rax_51 != rax_14)
                    var_1e8 = var_1b8
                    
                    if ((*(r10_3 + 0x78))(rsi_3, &var_178, arg3, r14_3, var_1e8) == 2)
                        goto label_140cf8854
                    
                    rbx.b = 0
                else
                    (*(r10_3 + 0x88))(rsi_3, arg3, 
                        sx.q(*(rsi_3 + 0x4c)) + sx.q(*(rsi_3 + 0x3c) * var_13c:4.d) + r14_3, 0, 
                        var_1e8)
                label_140cf8854:
                    char var_1d7_1 = 1
                    var_190 = &var_78
                    int64_t var_188_2 = var_1d0
                    int32_t* var_180_2 = &var_1c0
                    var_1c0 = 0
                    int32_t rax_59 = sub_140ceef40(&var_78, &var_190)
                    int32_t rbx_2 = rax_59
                    
                    if (rax_59 == 0xffffffff)
                        int64_t* rdx_26 = &var_50
                        var_1d7_1 = 0
                        int32_t rax_61
                        
                        if ((1 & not.b(rcx_5)) != 0)
                            rax_61 = sub_140cf1c20(rdx_4, rdx_26)
                        else
                            rax_61 = sub_140cf1af0(rdx_4, rdx_26)
                        
                        rbx_2 = rax_61
                        sub_140cf59a0(&var_78, rax_61)
                    
                    void* rsi_5
                    
                    if ((1 & not.b(rcx_5)) != 0)
                        rsi_5 = sx.q(var_50:4.d * rbx_2) + *rdx_4
                    else
                        void* rcx_35 = *rdx_4
                        
                        if ((1 & rcx_35.b) != 0)
                            rcx_35 = (rcx_35 s>> 1) + rdx_4
                        
                        rsi_5 = sx.q(var_50:4.d * rbx_2) + rcx_35
                    
                    int64_t* r10_4 = *(arg1 + 0x78)
                    int64_t rcx_37 = sx.q(*(r10_4 + 0x4c))
                    int64_t rdx_29 = var_1d0 + rcx_37
                    void* r11_1 = rsi_5 + rcx_37
                    
                    if (r11_1 != rdx_29)
                        if (not(test_bit(zx.q(r10_4[8].d), 0x1e)))
                            (*(*r10_4 + 0xb0))(r10_4, r11_1, rdx_29, zx.q(r10_4[7].d), var_1e8)
                        else
                            memcpy(r11_1, rdx_29, *(r10_4 + 0x3c) * r10_4[7].d)
                    
                    int64_t* r14_4 = *(arg1 + 0x80)
                    int64_t* rax_74 = (*(*r14_4 + 0xf8))(r14_4, &var_198)
                    int64_t r10_5 = *r14_4
                    
                    if (*rax_74 != rax_15)
                        var_1e8 = var_1b8
                        
                        if ((*(r10_5 + 0x78))(r14_4, &var_f8, arg3, rsi_5, var_1e8) == 2)
                            goto label_140cf89d4
                        
                        if (var_1d7_1 == 0)
                            int32_t r8_26 = rdx_4[1].d
                            int32_t r8_27
                            
                            if ((1 & not.b(rcx_5)) != 0)
                                r8_27 = r8_26 - *(rdx_4 + 0x34)
                            else
                                r8_27 = r8_26 - *(rdx_4 + 0x24)
                            
                            if (r8_27 != 0)
                                sub_140cfaf40(&var_78, 0, r8_27)
                                var_1a8 = 0
                                var_1b0 = &var_78
                                sub_140ceec60(&var_78, &var_1b0)
                        
                        rbx.b = 0
                    else
                        int64_t var_bc
                        (*(r10_5 + 0x88))(r14_4, arg3, 
                            sx.q(*(r14_4 + 0x4c)) + sx.q(*(r14_4 + 0x3c) * var_bc:4.d) + rsi_5, 0, 
                            var_1e8)
                    label_140cf89d4:
                        
                        if (var_1c4 s> 1)
                            do
                                int64_t* rsi_7 = *(arg1 + 0x78)
                                int64_t r14_5 = var_1d0
                                int64_t* rax_82 = (*(*rsi_7 + 0xf8))(rsi_7, &var_198)
                                int64_t r10_6 = *rsi_7
                                
                                if (*rax_82 != rax_14)
                                    var_1e8 = var_1b8
                                    (*(r10_6 + 0x78))(rsi_7, &var_178, arg3, r14_5, var_1e8)
                                else
                                    (*(r10_6 + 0x88))(rsi_7, arg3, 
                                        sx.q(*(rsi_7 + 0x4c)) + sx.q(*(rsi_7 + 0x3c) * var_13c:4.d)
                                            + r14_5, 
                                        0, var_1e8)
                                
                                var_1c0 = 0
                                var_190 = &var_78
                                int64_t var_188_3 = var_1d0
                                int32_t* var_180_3 = &var_1c0
                                int32_t rax_89 = sub_140ceef40(&var_78, &var_190)
                                int32_t rbx_4 = rax_89
                                
                                if (rax_89 == 0xffffffff)
                                    int64_t* rdx_38 = &var_50
                                    int32_t rax_91
                                    
                                    if ((not.b(rcx_5) & 1) != 0)
                                        rax_91 = sub_140cf1c20(rdx_4, rdx_38)
                                    else
                                        rax_91 = sub_140cf1af0(rdx_4, rdx_38)
                                    
                                    rbx_4 = rax_91
                                    sub_140cf59a0(&var_78, rax_91)
                                
                                void* rsi_9
                                
                                if ((not.b(rcx_5) & 1) != 0)
                                    rsi_9 = sx.q(var_50:4.d * rbx_4) + *rdx_4
                                else
                                    void* rcx_47 = *rdx_4
                                    
                                    if ((rcx_47.b & 1) != 0)
                                        rcx_47 = (rcx_47 s>> 1) + rdx_4
                                    
                                    rsi_9 = sx.q(var_50:4.d * rbx_4) + rcx_47
                                
                                int64_t* r10_7 = *(arg1 + 0x78)
                                int64_t rcx_49 = sx.q(*(r10_7 + 0x4c))
                                int64_t rdx_41 = var_1d0 + rcx_49
                                void* r11_2 = rsi_9 + rcx_49
                                
                                if (r11_2 != rdx_41)
                                    if (not(test_bit(zx.q(r10_7[8].d), 0x1e)))
                                        (*(*r10_7 + 0xb0))(r10_7, r11_2, rdx_41, zx.q(r10_7[7].d), 
                                            var_1e8)
                                    else
                                        memcpy(r11_2, rdx_41, *(r10_7 + 0x3c) * r10_7[7].d)
                                
                                int64_t* r14_6 = *(arg1 + 0x80)
                                int64_t* rax_104 = (*(*r14_6 + 0xf8))(r14_6, &var_1b0)
                                int64_t r10_8 = *r14_6
                                
                                if (*rax_104 != rax_15)
                                    var_1e8 = var_1b8
                                    (*(r10_8 + 0x78))(r14_6, &var_f8, arg3, rsi_9, var_1e8)
                                else
                                    (*(r10_8 + 0x88))(r14_6, arg3, 
                                        sx.q(*(r14_6 + 0x4c)) + sx.q(*(r14_6 + 0x3c) * var_bc:4.d)
                                            + rsi_9, 
                                        0, var_1e8)
                                
                                r13_1 += 1
                            while (r13_1 s< var_1c4)
                        
                        rbx = zx.q(var_1d8_1)
                
                int64_t** r8_28 = &var_1b0
                int32_t* rdx_47 = &var_60:4
                var_1b8 = &var_78
                
                if ((not.b(rcx_5) & 1) != 0)
                    var_1b0 = sub_140cf2f70
                    var_1a8.q = &var_1b8
                    sub_140d0c0d0(rdx_4, rdx_47, r8_28)
                else
                    var_1b0 = sub_140cf2f70
                    var_1a8.q = &var_1b8
                    sub_140d0bee0(rdx_4, rdx_47, r8_28)
            
            cond:2_1 = rbx.b != 0
        
        int64_t rcx_58 = var_1d0
        int32_t r12_1
        r12_1.b = cond:2_1
        
        if (rcx_58 != 0)
            int64_t* rax_113 = *(arg1 + 0x78)
            
            if ((not.b((rax_113[8] u>> 0x24).b) & 1) != 0)
                int64_t r8_31 = *rax_113
                (*(r8_31 + 0xe8))(rax_113, rcx_58, r8_31)
                rcx_58 = var_1d0
            
            sub_140a74f90(rcx_58)
        
        result = zx.q(r12_1 + 1)

__security_check_cookie(rax_1 ^ &var_208)
return result
