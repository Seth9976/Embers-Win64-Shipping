// 函数: sub_140cd55f0
// 地址: 0x140cd55f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = *(*arg1 + 8)
int64_t rax_2

if ((r12[5].b & 1) != 0)
    rax_2 = (*(*r12 + 0x28))(r12)

if ((r12[5].b & 1) == 0 || rax_2 s>= 0x20)
    int64_t* r9_1 = *(*arg1 + 8)
    int64_t* rcx_1 = r9_1[1]
    int32_t* rdx = *rcx_1
    
    if (&rdx[1] u<= rcx_1[1])
        *arg2 = *rdx
        int64_t* rax_6 = r9_1[1]
        *rax_6 += 4
    else if ((*(r9_1 + 0x29) & 0x20) != 0)
        sub_140b54070(r9_1, arg2, arg3)
    else
        (*(*r9_1 + 0x150))(r9_1, arg2, 4)

uint64_t result = zx.q(*arg2)

if (result.d == 0x9e2a83c1)
label_140cd569f:
    void* rax_9 = *arg1
    int32_t result_1 = 0xfffffff9
    int64_t* r9_2 = *(rax_9 + 8)
    int64_t* rcx_3 = r9_2[1]
    int32_t* rdx_2 = *rcx_3
    
    if (&rdx_2[1] u> rcx_3[1])
        int32_t* rdx_3 = &result_1
        
        if ((*(r9_2 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_2, rdx_3, arg3)
        else
            (*(*r9_2 + 0x150))(r9_2, rdx_3, 4)
    else
        result_1 = *rdx_2
        int64_t* rax_12 = r9_2[1]
        *rax_12 += 4
    
    int64_t var_68
    int32_t arg_8
    
    if ((r12[5].b & 1) == 0)
        void* r9_6 = *arg1
        
        if (arg2[0x3a].b == 0)
            arg_8 = 0x360
            int64_t* r9_10 = *(r9_6 + 8)
            int64_t* rcx_24 = r9_10[1]
            int32_t* rdx_18 = *rcx_24
            
            if (&rdx_18[1] u> rcx_24[1])
                int32_t* rdx_19 = &arg_8
                
                if ((*(r9_10 + 0x29) & 0x20) != 0)
                    sub_140b54070(r9_10, rdx_19, arg3)
                else
                    (*(*r9_10 + 0x150))(r9_10, rdx_19, 4)
            else
                arg_8 = *rdx_18
                int64_t* rax_48 = r9_10[1]
                *rax_48 += 4
            
            int64_t* r9_11 = *(*arg1 + 8)
            int64_t* rcx_26 = r9_11[1]
            int32_t* r8_2 = *rcx_26
            
            if (&r8_2[1] u<= rcx_26[1])
                arg2[1] = *r8_2
                int64_t* rax_53 = r9_11[1]
                *rax_53 += 4
            else if ((*(r9_11 + 0x29) & 0x20) != 0)
                sub_140b54070(r9_11, &arg2[1], arg3)
            else
                (*(*r9_11 + 0x150))(r9_11, &arg2[1], 4)
            
            int64_t* r9_12 = *(*arg1 + 8)
            int64_t* rcx_28 = r9_12[1]
            int32_t* r8_3 = *rcx_28
            
            if (&r8_3[1] u<= rcx_28[1])
                arg2[2] = *r8_3
                int64_t* rax_58 = r9_12[1]
                *rax_58 += 4
            else if ((*(r9_12 + 0x29) & 0x20) != 0)
                sub_140b54070(r9_12, &arg2[2], arg3)
            else
                (*(*r9_12 + 0x150))(r9_12, &arg2[2], 4)
            
            arg3 = sub_140b534e0(&arg2[4], arg1, 3, arg3)
        else
            arg_8 = 0
            int64_t* r9_7 = *(r9_6 + 8)
            int64_t* rcx_16 = r9_7[1]
            int32_t* rdx_11 = *rcx_16
            
            if (&rdx_11[1] u> rcx_16[1])
                int32_t* rdx_12 = &arg_8
                
                if ((*(r9_7 + 0x29) & 0x20) != 0)
                    sub_140b54070(r9_7, rdx_12, arg3)
                else
                    (*(*r9_7 + 0x150))(r9_7, rdx_12, 4)
            else
                arg_8 = *rdx_11
                int64_t* rax_34 = r9_7[1]
                *rax_34 += 4
            
            int64_t* r9_8 = *(*arg1 + 8)
            int64_t* rcx_18 = r9_8[1]
            int32_t* rdx_13 = *rcx_18
            
            if (&rdx_13[1] u> rcx_18[1])
                int32_t* rdx_14 = &arg_8
                
                if ((*(r9_8 + 0x29) & 0x20) != 0)
                    sub_140b54070(r9_8, rdx_14, arg3)
                else
                    (*(*r9_8 + 0x150))(r9_8, rdx_14, 4)
            else
                arg_8 = *rdx_13
                int64_t* rax_39 = r9_8[1]
                *rax_39 += 4
            
            int64_t* r9_9 = *(*arg1 + 8)
            int64_t* rcx_20 = r9_9[1]
            int32_t* rdx_15 = *rcx_20
            
            if (&rdx_15[1] u> rcx_20[1])
                int32_t* rdx_16 = &arg_8
                
                if ((*(r9_9 + 0x29) & 0x20) != 0)
                    sub_140b54070(r9_9, rdx_16, arg3)
                else
                    (*(*r9_9 + 0x150))(r9_9, rdx_16, 4)
            else
                arg_8 = *rdx_15
                int64_t* rax_44 = r9_9[1]
                *rax_44 += 4
            
            var_68 = 0
            int64_t var_60_1 = 0
            arg3 = sub_140b534e0(&var_68, arg1, 3, arg3)
            int64_t rcx_23 = var_68
            
            if (rcx_23 != 0)
                arg3 = sub_140a74f90(rcx_23)
        
        goto label_140cd5b01
    
    result = zx.q(result_1)
    int64_t var_58
    
    if (result.d s>= 0)
        *(arg2 + 4) = 0
    label_140cd5b01:
        int64_t* r9_13 = *(*arg1 + 8)
        int64_t* rcx_31 = r9_13[1]
        int32_t* r8_4 = *rcx_31
        
        if (&r8_4[1] u<= rcx_31[1])
            arg2[8] = *r8_4
            int64_t* rax_63 = r9_13[1]
            *rax_63 += 4
        else if ((*(r9_13 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_13, &arg2[8], arg3)
        else
            (*(*r9_13 + 0x150))(r9_13, &arg2[8], 4)
        
        int512_t zmm1 = sub_140a1d9d0(*(*arg1 + 8), &arg2[0xa], arg3)
        int64_t* r9_14 = *(*arg1 + 8)
        int64_t* rcx_35 = r9_14[1]
        int32_t* rdx_25 = *rcx_35
        
        if (&rdx_25[1] u<= rcx_35[1])
            arg2[9] = *rdx_25
            int64_t* rax_68 = r9_14[1]
            *rax_68 += 4
        else if ((*(r9_14 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_14, &arg2[9], zmm1)
        else
            (*(*r9_14 + 0x150))(r9_14, &arg2[9], 4)
        
        if (arg2[9] s< 0)
            rdx_25.b = 1
            (*(*r12 + 0x60))(r12, rdx_25)
        
        int64_t* r9_15 = *(*arg1 + 8)
        int64_t* rcx_38 = r9_15[1]
        int32_t* r8_5 = *rcx_38
        
        if (&r8_5[1] u<= rcx_38[1])
            arg2[0xe] = *r8_5
            int64_t* rax_74 = r9_15[1]
            *rax_74 += 4
        else if ((*(r9_15 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_15, &arg2[0xe], zmm1)
        else
            (*(*r9_15 + 0x150))(r9_15, &arg2[0xe], 4)
        
        int64_t* r9_16 = *(*arg1 + 8)
        int64_t* rcx_40 = r9_16[1]
        int32_t* rdx_28 = *rcx_40
        
        if (&rdx_28[1] u<= rcx_40[1])
            arg2[0xf] = *rdx_28
            int64_t* rax_79 = r9_16[1]
            *rax_79 += 4
        else if ((*(r9_16 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_16, &arg2[0xf], zmm1)
        else
            (*(*r9_16 + 0x150))(r9_16, &arg2[0xf], 4)
        
        if ((*(r12 + 0x2b) & 2) == 0 && ((r12[5].b & 2) != 0 || arg2[1] s>= 0x204))
            zmm1 = sub_140a1d9d0(*(*arg1 + 8), &arg2[0x10], zmm1)
        
        if (arg2[1] s>= 0x1cb)
            int64_t* r9_17 = *(*arg1 + 8)
            int64_t* rcx_44 = r9_17[1]
            int32_t* r8_6 = *rcx_44
            
            if (&r8_6[1] u<= rcx_44[1])
                arg2[0x14] = *r8_6
                int64_t* rax_84 = r9_17[1]
                *rax_84 += 4
            else if ((*(r9_17 + 0x29) & 0x20) != 0)
                sub_140b54070(r9_17, &arg2[0x14], zmm1)
            else
                (*(*r9_17 + 0x150))(r9_17, &arg2[0x14], 4)
            
            int64_t* r9_18 = *(*arg1 + 8)
            int64_t* rcx_46 = r9_18[1]
            int32_t* rdx_32 = *rcx_46
            
            if (&rdx_32[1] u<= rcx_46[1])
                arg2[0x15] = *rdx_32
                int64_t* rax_89 = r9_18[1]
                *rax_89 += 4
            else if ((*(r9_18 + 0x29) & 0x20) != 0)
                sub_140b54070(r9_18, &arg2[0x15], zmm1)
            else
                (*(*r9_18 + 0x150))(r9_18, &arg2[0x15], 4)
        
        int64_t* r9_19 = *(*arg1 + 8)
        int64_t* rcx_48 = r9_19[1]
        int32_t* r8_7 = *rcx_48
        
        if (&r8_7[1] u<= rcx_48[1])
            arg2[0x16] = *r8_7
            int64_t* rax_94 = r9_19[1]
            *rax_94 += 4
        else if ((*(r9_19 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_19, &arg2[0x16], zmm1)
        else
            (*(*r9_19 + 0x150))(r9_19, &arg2[0x16], 4)
        
        int64_t* r9_20 = *(*arg1 + 8)
        int64_t* rcx_50 = r9_20[1]
        int32_t* rdx_35 = *rcx_50
        
        if (&rdx_35[1] u<= rcx_50[1])
            arg2[0x17] = *rdx_35
            int64_t* rax_99 = r9_20[1]
            *rax_99 += 4
        else if ((*(r9_20 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_20, &arg2[0x17], zmm1)
        else
            (*(*r9_20 + 0x150))(r9_20, &arg2[0x17], 4)
        
        int64_t* r9_21 = *(*arg1 + 8)
        int64_t* rcx_52 = r9_21[1]
        int32_t* r8_8 = *rcx_52
        
        if (&r8_8[1] u<= rcx_52[1])
            arg2[0x18] = *r8_8
            int64_t* rax_104 = r9_21[1]
            *rax_104 += 4
        else if ((*(r9_21 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_21, &arg2[0x18], zmm1)
        else
            (*(*r9_21 + 0x150))(r9_21, &arg2[0x18], 4)
        
        int64_t* r9_22 = *(*arg1 + 8)
        int64_t* rcx_54 = r9_22[1]
        int32_t* rdx_38 = *rcx_54
        
        if (&rdx_38[1] u<= rcx_54[1])
            arg2[0x19] = *rdx_38
            int64_t* rax_109 = r9_22[1]
            *rax_109 += 4
        else if ((*(r9_22 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_22, &arg2[0x19], zmm1)
        else
            (*(*r9_22 + 0x150))(r9_22, &arg2[0x19], 4)
        
        sub_1408e7400(*arg1, &arg2[0x1a], zmm1)
        result = zx.q(r12[5].b)
        
        if ((result.b & 1) == 0)
        label_140cd5e7c:
            
            if ((result.b & 2) != 0 || arg2[1] s>= 0x180)
                sub_1408e7400(*arg1, &arg2[0x1b], zmm1)
                sub_1408e7400(*arg1, &arg2[0x1c], zmm1)
                result = zx.q(r12[5].b)
            
            if ((result.b & 2) != 0 || arg2[1] s>= 0x1fe)
                sub_1408e7400(*arg1, &arg2[0x1d], zmm1)
            
            sub_1408e7400(*arg1, &arg2[0x1e], zmm1)
            sub_140b0c350(arg1, &arg2[0x1f], zmm1)
            
            if (((r12[5].b & 2) != 0 || arg2[1] s>= 0x206) && (*(r12 + 0x2b) & 2) == 0)
                __builtin_memset(&var_68, 0, 0x20)
                sub_140b0c350(arg1, &var_68, zmm1)
                sub_140b0c350(arg1, &var_58, zmm1)
            
            void* rcx_65 = *arg1
            int32_t arg_10 = arg2[0x26]
            int512_t zmm0_1 = sub_1408e7400(rcx_65, &arg_10, zmm1)
            int32_t r15_2 = arg_10
            
            if ((r12[5].b & 1) != 0 && r15_2 s> 0)
                arg2[0x26] = 0
                
                if (r15_2 s> arg2[0x27])
                    sub_1405c5570(&arg2[0x24], r15_2)
                    r15_2 = arg_10
                
                int64_t r13_1 = sx.q(arg2[0x26])
                int32_t rax_112 = r15_2 + r13_1.d
                arg2[0x26] = rax_112
                
                if (rax_112 s> arg2[0x27])
                    sub_1405a4d70(&arg2[0x24])
                
                zmm0_1 = memset(*(arg2 + 0x90) + (r13_1 << 3), 0, sx.q(r15_2) << 3)
                r15_2 = arg_10
            
            int32_t rdi_3 = 0
            
            if (r15_2 s> 0)
                do
                    result, zmm0_1 =
                        sub_140cce300(*(arg2 + 0x90) + (sx.q(rdi_3) << 3), arg1, zmm0_1, zmm1, arg2)
                    
                    if ((r12[5].b & 1) != 0 && (*(r12 + 0x29) & 1) != 0)
                        return result
                    
                    rdi_3 += 1
                while (rdi_3 s< arg_10)
            
            int64_t var_50
            int64_t rcx_74
            
            if (arg2[1] s< 0x150)
                void* rcx_75 = *arg1
                arg_8 = 0
                sub_1408e7400(rcx_75, &arg_8, zmm1)
                
                if ((r12[5].b & 1) != 0)
                    int32_t rax_117 = arg_8
                    
                    if (rax_117 != 0)
                        var_58 = 0
                        var_50 = 0
                        sub_140b27a40(&arg2[0x28], 4, 0, 0, rax_117, &var_58)
                        rcx_74 = var_58
                    label_140cd6086:
                        
                        if (rcx_74 != 0)
                            zmm1 = sub_140a74f90(rcx_74)
            else
                char rax_116
                
                if (r12[0xe] == 0 && (r12[5].b & 2) != 0)
                    void* rax_115
                    rax_115, zmm1 = j_sub_140b17d00()
                    rax_116 = sub_140b1b930(rax_115)
                
                if (r12[0xe] != 0 || ((r12[5].b & 2) != 0 && rax_116 == 0))
                    var_58.d = 0
                    var_58:4.w = 0
                    var_50.d = 0
                    int64_t var_48_1 = 0
                    int64_t var_40_1 = 0
                    zmm1 = sub_140b0c4d0(arg1, &var_58, zmm1)
                    rcx_74 = var_48_1
                    goto label_140cd6086
                
                zmm1 = sub_140b0c4d0(arg1, &arg2[0x28], zmm1)
            
            if (arg2[1] s>= 0x1bc)
                char rax_119
                
                if (r12[0xe] == 0 && (r12[5].b & 2) != 0)
                    void* rax_118
                    rax_118, zmm1 = j_sub_140b17d00()
                    rax_119 = sub_140b1b930(rax_118)
                
                if (r12[0xe] != 0 || ((r12[5].b & 2) != 0 && rax_119 == 0))
                    var_58.d = 0
                    var_58:4.w = 0
                    var_50.d = 0
                    int64_t var_48_2 = 0
                    int64_t var_40_2 = 0
                    zmm1 = sub_140b0c4d0(arg1, &var_58, zmm1)
                    
                    if (var_48_2 != 0)
                        zmm1 = sub_140a74f90(var_48_2)
                else
                    zmm1 = sub_140b0c4d0(arg1, &arg2[0x30], zmm1)
            else if ((r12[5].b & 1) != 0)
                *(arg2 + 0xc0) = *(arg2 + 0xa0)
                arg2[0x32] = arg2[0x2a]
                sub_140597df0(&arg2[0x34], &arg2[0x2c])
            
            sub_1408e7400(*arg1, &arg2[0x38], zmm1)
            result = sub_140b03090(arg2[0x38])
            
            if (result.b != 0)
                void* rax_121 = *arg1
                int64_t var_88 = 0
                int32_t var_80_1 = 0
                arg_8 = 0
                int64_t* r9_23 = *(rax_121 + 8)
                int64_t* rcx_84 = r9_23[1]
                int32_t* rdx_59 = *rcx_84
                
                if (&rdx_59[1] u> rcx_84[1])
                    int32_t* rdx_60 = &arg_8
                    
                    if ((*(r9_23 + 0x29) & 0x20) != 0)
                        sub_140b54070(r9_23, rdx_60, zmm1)
                    else
                        (*(*r9_23 + 0x150))(r9_23, rdx_60, 4)
                else
                    arg_8 = *rdx_59
                    int64_t* rax_124 = r9_23[1]
                    *rax_124 += 4
                
                result = *arg1
                
                if ((*(*(result + 8) + 0x28) & 1) != 0)
                    result = sub_140ce9e20(&var_88, arg_8, 1)
                
                int32_t rdi_4 = 0
                
                if (arg_8 s> 0)
                    do
                        result = sub_140caec20(arg1, (sx.q(rdi_4) << 4) + var_88, zmm1)
                        rdi_4 += 1
                    while (rdi_4 s< arg_8)
                
                if (var_80_1 == 0)
                    sub_1408e7400(*arg1, &arg2[0x39], zmm1)
                    void* rax_126 = *arg1
                    int64_t var_78 = 0
                    int64_t var_70_1 = 0
                    arg_8 = 0
                    int64_t* r9_24 = *(rax_126 + 8)
                    int64_t* rcx_90 = r9_24[1]
                    int32_t* rdx_66 = *rcx_90
                    
                    if (&rdx_66[1] u> rcx_90[1])
                        int32_t* rdx_67 = &arg_8
                        
                        if ((*(r9_24 + 0x29) & 0x20) != 0)
                            sub_140b54070(r9_24, rdx_67, zmm1)
                        else
                            (*(*r9_24 + 0x150))(r9_24, rdx_67, 4)
                    else
                        arg_8 = *rdx_66
                        int64_t* rax_129 = r9_24[1]
                        *rax_129 += 4
                    
                    void* rcx_93 = *arg1
                    
                    if ((*(*(rcx_93 + 8) + 0x28) & 1) != 0)
                        zmm1 = sub_140ce9ea0(&var_78, arg_8, 1)
                        rcx_93 = *arg1
                    
                    int32_t rdi_5 = 0
                    
                    if (arg_8 s> 0)
                        do
                            zmm1 = sub_140a1d9d0(*(*arg1 + 8), (sx.q(rdi_5) << 4) + var_78, zmm1)
                            rdi_5 += 1
                        while (rdi_5 s< arg_8)
                        
                        rcx_93 = *arg1
                    
                    if (result_1 s> 0xfffffff9)
                        arg_8 = 0
                        sub_1408e7400(rcx_93, &arg_8, zmm1)
                        rcx_93 = *arg1
                    
                    sub_1408e7400(rcx_93, &arg2[0x3b], zmm1)
                    sub_140ac1b60(*arg1, &arg2[0x3c], zmm1)
                    int32_t rax_132 = arg2[1]
                    
                    if (rax_132 s>= 0xe0)
                        sub_1408e7400(*arg1, &arg2[0x3e], zmm1)
                        rax_132 = arg2[1]
                    
                    if (rax_132 s>= 0x146)
                        arg_8 = arg2[0x42]
                        int64_t* r9_25 = *(*arg1 + 8)
                        int64_t* rcx_98 = r9_25[1]
                        int32_t* rdx_76 = *rcx_98
                        
                        if (&rdx_76[1] u> rcx_98[1])
                            int32_t* rdx_77 = &arg_8
                            
                            if ((*(r9_25 + 0x29) & 0x20) != 0)
                                sub_140b54070(r9_25, rdx_77, zmm1)
                            else
                                (*(*r9_25 + 0x150))(r9_25, rdx_77, 4)
                        else
                            arg_8 = *rdx_76
                            int64_t* rax_137 = r9_25[1]
                            *rax_137 += 4
                        
                        if ((*(*(*arg1 + 8) + 0x28) & 1) != 0)
                            sub_140908f20(&arg2[0x40], arg_8, 1)
                        
                        int32_t rdi_6 = 0
                        
                        if (arg_8 s> 0)
                            do
                                sub_1408e7400(*arg1, *(arg2 + 0x100) + (sx.q(rdi_6) << 2), zmm1)
                                rdi_6 += 1
                            while (rdi_6 s< arg_8)
                    else if (rax_132 s>= 0x116 && (r12[5].b & 1) != 0)
                        void* rcx_104 = *arg1
                        arg_8 = 0xffffffff
                        sub_1408e7400(rcx_104, &arg_8, zmm1)
                        int32_t rdx_81 = arg_8
                        
                        if (rdx_81 s>= 0)
                            int64_t r15_3 = sx.q(arg2[0x42])
                            int32_t rax_141 = (r15_3 + 1).d
                            arg2[0x42] = rax_141
                            
                            if (rax_141 s> arg2[0x43])
                                sub_1405a4cf0(&arg2[0x40])
                                rdx_81 = arg_8
                            
                            *(*(arg2 + 0x100) + (r15_3 << 2)) = rdx_81
                    
                    if ((r12[5].b & 2) != 0 || arg2[1] s>= 0x1fb)
                        sub_1408e7400(*arg1, &arg2[0x44], zmm1)
                        sub_1408e7400(*arg1, &arg2[0x45], zmm1)
                    else
                        arg2[0x44] = 0xffffffff
                        arg2[0x45] = 0
                    
                    result = sub_140597000(&var_78)
                else
                    arg2[1] = 0xd5
                
                int64_t rcx_109 = var_88
                
                if (rcx_109 != 0)
                    return sub_140a74f90(rcx_109)
            else
                arg2[1] = 0xd5
        else
            int32_t rcx_57 = arg2[1]
            
            if (rcx_57 s>= 0xd6 && rcx_57 s<= 0x206)
                goto label_140cd5e7c
    else
        if (result.d s>= 0xfffffff9)
            if (result.d != 0xfffffffc)
                void* rax_14 = *arg1
                arg_8 = 0
                int64_t* r9_3 = *(rax_14 + 8)
                int64_t* rcx_5 = r9_3[1]
                int32_t* rdx_4 = *rcx_5
                
                if (&rdx_4[1] u> rcx_5[1])
                    int32_t* rdx_5 = &arg_8
                    
                    if ((*(r9_3 + 0x29) & 0x20) != 0)
                        sub_140b54070(r9_3, rdx_5, arg3)
                    else
                        (*(*r9_3 + 0x150))(r9_3, rdx_5, 4)
                else
                    arg_8 = *rdx_4
                    int64_t* rax_17 = r9_3[1]
                    *rax_17 += 4
            
            int64_t* r9_4 = *(*arg1 + 8)
            int64_t* rcx_7 = r9_4[1]
            int32_t* rdx_6 = *rcx_7
            
            if (&rdx_6[1] u<= rcx_7[1])
                arg2[1] = *rdx_6
                int64_t* rax_22 = r9_4[1]
                *rax_22 += 4
            else if ((*(r9_4 + 0x29) & 0x20) != 0)
                sub_140b54070(r9_4, &arg2[1], arg3)
            else
                (*(*r9_4 + 0x150))(r9_4, &arg2[1], 4)
            
            int64_t* r9_5 = *(*arg1 + 8)
            int64_t* rcx_9 = r9_5[1]
            int32_t* rdx_8 = *rcx_9
            
            if (&rdx_8[1] u<= rcx_9[1])
                arg2[2] = *rdx_8
                int64_t* rax_27 = r9_5[1]
                *rax_27 += 4
            else if ((*(r9_5 + 0x29) & 0x20) != 0)
                sub_140b54070(r9_5, &arg2[2], arg3)
            else
                (*(*r9_5 + 0x150))(r9_5, &arg2[2], 4)
            
            int32_t result_2 = result_1
            
            if (result_2 s<= 0xfffffffe)
                int32_t r8_1 = 0
                
                if (result_2 == 0xfffffffe)
                    r8_1 = 2
                else if (result_2 s>= 0xfffffffe)
                    if (result_2 s< 0xfffffffb)
                        r8_1 = 3
                else if (result_2 s< 0xfffffffb)
                    r8_1 = 3
                else
                    r8_1 = 1
                
                arg3 = sub_140b534e0(&arg2[4], arg1, r8_1, arg3)
            
            if (arg2[1] == 0 && arg2[2] == 0)
                arg2[0x3a].b = 1
                arg2[1] = 0x206
                arg2[2] = 0
                int64_t* rax_29
                rax_29, arg3 = sub_140b509c0(&var_58)
                
                if (&arg2[4] != rax_29)
                    int64_t rcx_13 = *(arg2 + 0x10)
                    
                    if (rcx_13 != 0)
                        arg3 = sub_140a74f90(rcx_13)
                    
                    *(arg2 + 0x10) = *rax_29
                    *rax_29 = 0
                    arg2[6] = rax_29[1].d
                    arg2[7] = *(rax_29 + 0xc)
                    rax_29[1] = 0
                
                int64_t rcx_15 = var_58
                
                if (rcx_15 != 0)
                    arg3 = sub_140a74f90(rcx_15)
            
            goto label_140cd5b01
        
        *(arg2 + 4) = 0
else if (result.d == 0xc1832a9e)
    *arg2 = 0x9e2a83c1
    char rax_8 = *(r12 + 0x29)
    
    if ((rax_8 & 0x20) == 0)
        rax_8 |= 0x20
    else
        rax_8 &= 0xdf
    
    *(r12 + 0x29) = rax_8
    goto label_140cd569f

return result
