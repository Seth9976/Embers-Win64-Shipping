// 函数: sub_1426931b0
// 地址: 0x1426931b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int32_t* result = __security_cookie ^ &var_258
int32_t* result_3 = result
int64_t* r13 = nullptr
int32_t rbx = arg3
int64_t* r12 = arg1
void* rcx = arg1[1]
int32_t var_20c = rbx

if ((arg2[5].b & 1) != 0)
    if (rcx != 0)
        sub_142609270(rcx)
    
    r12[1] = 0
    arg4 = sub_142679620(&r12[2], 0)
    r12[1] = sub_1426075d0()
    goto label_142693222

if (rcx != 0)
label_142693222:
    bool cond:1_1 = (arg2[5].b & 2) == 0
    uint64_t r15_1 = 0
    int32_t var_224 = 0
    uint64_t var_208
    __builtin_memset(&var_208, 0, 0x18)
    uint64_t var_200
    int64_t var_1f8_1
    uint128_t zmm6
    
    if (not(cond:1_1))
        int32_t rax_2 = sub_1405f8990(r12[1])
        
        if (rax_2 s> 0)
            sub_1405dadb0(&var_200, rax_2)
            r15_1 = var_200
            var_208 = r15_1
        
        int64_t* rcx_4 = *r12
        
        if ((*(*rcx_4 + 0x650))(rcx_4) == 0 || data_143de5426 != 0)
            void* r14_1 = r12[1]
            int32_t rbx_1 = 0
            
            if (sub_1405f8990(r14_1) s> 0)
                int32_t rax_10
                
                do
                    void* rax_8 = sub_142610d00(r14_1, rbx_1)
                    
                    if (rax_8 != 0 && *(rax_8 + 8) != 0 && *(rax_8 + 0x60) s> 0)
                        int64_t rsi_1 = sx.q(var_1f8_1.d)
                        int32_t rax_9 = (rsi_1 + 1).d
                        var_1f8_1.d = rax_9
                        
                        if (rax_9 s> var_1f8_1:4.d)
                            sub_1405a4cf0(&var_200)
                            r15_1 = var_200
                        
                        *(r15_1 + (rsi_1 << 2)) = rbx_1
                    
                    rbx_1 += 1
                    rax_10 = sub_1405f8990(r14_1)
                while (rbx_1 s< rax_10)
                var_208 = r15_1
            
            rbx = var_20c
        else
            int64_t rax_5 = sub_141dc9840(*r12)
            int64_t var_128
            arg4, zmm6 = sub_1426865b0(r12, sub_142659580(*r12, &var_128, rax_5), &var_200)
            int64_t rcx_8 = var_128
            
            if (rcx_8 != 0)
                arg4 = sub_140a74f90(rcx_8)
            
            r15_1 = var_200
            var_208 = r15_1
        
        var_224 = var_1f8_1.d
    
    int64_t* rcx_13 = arg2[1]
    int32_t* rdx_5 = *rcx_13
    
    if (&rdx_5[1] u> rcx_13[1])
        int32_t* rdx_6 = &var_224
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_6, arg4)
        else
            (*(*arg2 + 0x150))(arg2, rdx_6, 4)
    else
        var_224 = *rdx_5
        *rcx_13 += 4
    
    int128_t* rax_15 = sub_1405e25d0(r12[1])
    int64_t* rcx_16 = arg2[1]
    int128_t var_88 = *rax_15
    arg4.o = zx.o(rax_15[1].q)
    int64_t var_78 = (arg4.o).q
    int32_t var_70 = *(rax_15 + 0x18)
    int32_t* rdx_7 = *rcx_16
    
    if (&rdx_7[1] u> rcx_16[1])
        int32_t* rdx_8 = &var_88
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_8, arg4)
        else
            (*(*arg2 + 0x150))(arg2, rdx_8, 4)
    else
        var_88.d = *rdx_7
        *rcx_16 += 4
    
    int64_t* rcx_18 = arg2[1]
    int32_t* rdx_9 = *rcx_18
    
    if (&rdx_9[1] u> rcx_18[1])
        int32_t* rdx_10 = &var_88:4
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_10, arg4)
        else
            (*(*arg2 + 0x150))(arg2, rdx_10, 4)
    else
        var_88:4.d = *rdx_9
        *rcx_18 += 4
    
    int64_t* rcx_20 = arg2[1]
    int32_t* rdx_11 = *rcx_20
    
    if (&rdx_11[1] u> rcx_20[1])
        int32_t* rdx_12 = &var_88:8
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_12, arg4)
        else
            (*(*arg2 + 0x150))(arg2, rdx_12, 4)
    else
        var_88:8.d = *rdx_11
        *rcx_20 += 4
    
    int64_t* rcx_22 = arg2[1]
    int32_t* rdx_13 = *rcx_22
    
    if (&rdx_13[1] u> rcx_22[1])
        int32_t* rdx_14 = &var_88:0xc
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_14, arg4)
        else
            (*(*arg2 + 0x150))(arg2, rdx_14, 4)
    else
        var_88:0xc.d = *rdx_13
        *rcx_22 += 4
    
    int64_t* rcx_24 = arg2[1]
    int32_t* rdx_15 = *rcx_24
    
    if (&rdx_15[1] u> rcx_24[1])
        int64_t* rdx_16 = &var_78
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_16, arg4)
        else
            (*(*arg2 + 0x150))(arg2, rdx_16, 4)
    else
        var_78.d = *rdx_15
        *rcx_24 += 4
    
    int64_t* rcx_26 = arg2[1]
    int32_t* rdx_17 = *rcx_26
    
    if (&rdx_17[1] u> rcx_26[1])
        void* rdx_18 = &var_78:4
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_18, arg4)
        else
            (*(*arg2 + 0x150))(arg2, rdx_18, 4)
    else
        var_78:4.d = *rdx_17
        *rcx_26 += 4
    
    int64_t* rcx_28 = arg2[1]
    int32_t* rdx_19 = *rcx_28
    
    if (&rdx_19[1] u> rcx_28[1])
        int32_t* rdx_20 = &var_70
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_20, arg4)
        else
            (*(*arg2 + 0x150))(arg2, rdx_20, 4)
    else
        var_70 = *rdx_19
        *rcx_28 += 4
    
    result = zx.q(arg2[5].b)
    int32_t var_238
    int64_t var_1c8
    
    if ((result.b & 1) != 0)
        void* rax_38 = *r12
        int128_t* rcx_30 = r12[1]
        int32_t zmm2 = *(rax_38 + 0x414)
        int128_t zmm0
        zmm0.d = (*(rax_38 + 0x410)).d f/ zmm2
        arg4.o = zx.o(int.d(zmm0.d))
        arg4.o = _mm_cvtepi32_ps(arg4.o)
        arg4.d = arg4.d f* zmm2
        
        if (arg4.d f== var_88:0xc.d)
            int512_t zmm1_1
            result, zmm1_1 = sub_142611820(rcx_30, &var_88)
            int32_t r14_2 = 0
            
            if (var_224 s> 0)
                do
                    int64_t* rcx_44 = arg2[1]
                    int64_t var_1f0 = -1
                    int32_t var_21c = r13.d
                    int64_t* rdx_30 = *rcx_44
                    
                    if (&rdx_30[1] u> rcx_44[1])
                        int64_t* rdx_31 = &var_1f0
                        
                        if ((*(arg2 + 0x29) & 0x20) != 0)
                            sub_140b540d0(arg2, rdx_31, zmm1_1)
                        else
                            (*(*arg2 + 0x150))(arg2, rdx_31, 8)
                    else
                        var_1f0 = *rdx_30
                        *rcx_44 += 8
                    
                    int64_t* rcx_46 = arg2[1]
                    int32_t* rdx_32 = *rcx_46
                    
                    if (&rdx_32[1] u> rcx_46[1])
                        int32_t* rdx_33 = &var_21c
                        
                        if ((*(arg2 + 0x29) & 0x20) != 0)
                            result = sub_140b54070(arg2, rdx_33, zmm1_1)
                        else
                            result = (*(*arg2 + 0x150))(arg2, rdx_33, 4)
                    else
                        result = zx.q(*rdx_32)
                        var_21c = result.d
                        *rcx_46 += 4
                    
                    if (var_1f0 != -1 && var_21c != r13.d)
                        int64_t* var_1b0 = r13
                        var_21c = r13.d
                        int64_t* var_230
                        result =
                            sub_142694420(arg2, zx.q(rbx), &var_1b0, &var_21c, var_238, var_230)
                        int64_t* rsi_3 = var_1b0
                        
                        if (rsi_3 != 0)
                            var_230 = r13
                            var_238.q = var_1f0
                            result, r12, r13, r14_2, zmm1_1 =
                                sub_142602d30(r12[1], rsi_3, var_21c, 1, var_238, var_230)
                            
                            if (arg2[8].d s>= 0x1ad)
                                int32_t zmm0_2 = (arg2[9]).d
                                
                                if (zmm0_2.w == 4)
                                    result = zx.q(zmm0_2) u>> 0x10
                                
                                if (zmm0_2.w != 4 || result.w != 7)
                                    int64_t* rcx_50 = arg2[1]
                                    int64_t* rbx_3 = r13
                                    int32_t result_1 = r13.d
                                    int32_t* rdx_36 = *rcx_50
                                    
                                    if (&rdx_36[1] u> rcx_50[1])
                                        int32_t* rdx_37 = &result_1
                                        
                                        if ((*(arg2 + 0x29) & 0x20) != 0)
                                            sub_140b54070(arg2, rdx_37, zmm1_1)
                                        else
                                            (*(*arg2 + 0x150))(arg2, rdx_37, 4)
                                    else
                                        result_1 = *rdx_36
                                        *rcx_50 += 4
                                    
                                    result = zx.q(result_1)
                                    
                                    if (result.d s> 0)
                                        if ((arg2[5].b & 1) != 0)
                                            int64_t* rax_61 = j_sub_1426075c0(zx.q(result.d), 0)
                                            rbx_3 = rax_61
                                            memset(rax_61, 0, sx.q(result_1))
                                            result = zx.q(result_1)
                                        
                                        int64_t r9_4 = *arg2
                                        (*(r9_4 + 0x150))(arg2, rbx_3, sx.q(result.d), r9_4)
                                        result = zx.q(result_1)
                                        
                                        if (result.d s> 0)
                                            float var_a8[0x2][0x4]
                                            float (* rax_62)[0x4] =
                                                sub_142690bc0(&var_a8, rsi_3 + 0x54, &rsi_3[0xc])
                                            int32_t r9_5 = rsi_3[2].d
                                            int32_t result_5 = result_1
                                            int64_t zmm1_2 = rax_62[1][0].q
                                            float var_130_1 = (*rax_62)[6]
                                            float var_148[0x4]
                                            var_238.q = &var_148
                                            var_148 = *rax_62
                                            int64_t var_138_1 = zmm1_2
                                            void var_118
                                            var_238.q = sub_1426701c0(&var_118, rbx_3, result_5, 
                                                r9_5, var_238)
                                            result, zmm1_1 = sub_142673f90(r12, rsi_3[1].d, 
                                                *(rsi_3 + 0xc), rsi_3[2].d, var_238)
                                            int64_t* var_e8
                                            
                                            if (var_e8 != 0)
                                                result = nullptr
                                                
                                                if (0 == var_e8[1].d)
                                                    var_e8[1].d = r13.d
                                                else
                                                    result = zx.q(var_e8[1].d)
                                                
                                                if (var_e8 != 0)
                                                    result = zx.q(var_e8[1].d)
                                                    var_e8[1].d -= 1
                                                    
                                                    if (result.d == 1)
                                                        (**var_e8)(var_e8)
                                                        result = zx.q(*(var_e8 + 0xc))
                                                        *(var_e8 + 0xc) -= 1
                                                        
                                                        if (result.d == 1)
                                                            result = (*(*var_e8 + 8))(var_e8, 1)
                    
                    rbx = var_20c
                    r14_2 += 1
                while (r14_2 s< var_224)
                
                r15_1 = var_200
        else
            if (rcx_30 != 0)
                sub_142609270(rcx_30)
            
            r12[1] = 0
            int512_t zmm1
            result, zmm1 = sub_142679620(&r12[2], 0)
            int32_t rsi_2 = 0
            
            if (var_224 s> 0)
                do
                    int64_t* rcx_32 = arg2[1]
                    int64_t var_1d8 = -1
                    int32_t var_214 = 0
                    int64_t* rdx_21 = *rcx_32
                    
                    if (&rdx_21[1] u> rcx_32[1])
                        int64_t* rdx_22 = &var_1d8
                        
                        if ((*(arg2 + 0x29) & 0x20) != 0)
                            sub_140b540d0(arg2, rdx_22, zmm1)
                        else
                            (*(*arg2 + 0x150))(arg2, rdx_22, 8)
                    else
                        var_1d8 = *rdx_21
                        *rcx_32 += 8
                    
                    int64_t* rcx_34 = arg2[1]
                    int32_t* rdx_23 = *rcx_34
                    
                    if (&rdx_23[1] u> rcx_34[1])
                        int32_t* rdx_24 = &var_214
                        
                        if ((*(arg2 + 0x29) & 0x20) != 0)
                            result = sub_140b54070(arg2, rdx_24, zmm1)
                        else
                            result = (*(*arg2 + 0x150))(arg2, rdx_24, 4)
                    else
                        result = zx.q(*rdx_23)
                        var_214 = result.d
                        *rcx_34 += 4
                    
                    if (var_1d8 != -1 && var_214 != 0)
                        int64_t var_1b8 = 0
                        var_214 = 0
                        result = sub_142694420(arg2, zx.q(var_20c), &var_1b8, &var_214)
                        int64_t rcx_37 = var_1b8
                        
                        if (rcx_37 != 0)
                            result = sub_142609160(rcx_37)
                            
                            if (arg2[8].d s>= 0x1ad)
                                int64_t zmm0_1 = arg2[9]
                                
                                if (zmm0_1.w == 4)
                                    var_1c8 = zmm0_1
                                    result = zx.q(var_1c8.d) u>> 0x10
                                
                                if (zmm0_1.w != 4 || result.w != 7)
                                    int64_t* rcx_38 = arg2[1]
                                    int64_t rbx_2 = 0
                                    int32_t var_210 = 0
                                    int32_t* rdx_26 = *rcx_38
                                    
                                    if (&rdx_26[1] u> rcx_38[1])
                                        int32_t* rdx_27 = &var_210
                                        
                                        if ((*(arg2 + 0x29) & 0x20) != 0)
                                            sub_140b54070(arg2, rdx_27, zmm1)
                                        else
                                            (*(*arg2 + 0x150))(arg2, rdx_27, 4)
                                    else
                                        var_210 = *rdx_26
                                        *rcx_38 += 4
                                    
                                    int32_t rax_50 = var_210
                                    
                                    if (rax_50 s> 0)
                                        if ((arg2[5].b & 1) != 0)
                                            int64_t rax_49 = j_sub_1426075c0(zx.q(rax_50), 0)
                                            rbx_2 = rax_49
                                            memset(rax_49, 0, sx.q(var_210))
                                            rax_50 = var_210
                                        
                                        int64_t r9_2 = *arg2
                                        (*(r9_2 + 0x150))(arg2, rbx_2, sx.q(rax_50), r9_2)
                                    
                                    result = sub_142609160(rbx_2)
                    
                    rsi_2 += 1
                while (rsi_2 s< var_224)
                
                r15_1 = var_208
    else if ((result.b & 2) != 0)
        int64_t* rcx_61 = *r12
        result = (*(*rcx_61 + 0x648))(rcx_61)
        int64_t r14_3 = 0
        void* rbx_5 = r12[1]
        char var_220_1 = result.b
        void* var_1e8_3 = rbx_5
        int64_t rdx_42 = r15_1 + (sx.q(var_1f8_1.d) << 2)
        uint64_t r13_4 = (rdx_42 - r15_1 + 3) u>> 2
        
        if (r15_1 u> rdx_42)
            r13_4 = 0
        
        if (r13_4 != 0)
            uint128_t var_48_1 = zmm6
            
            do
                int32_t* rax_68 = sub_142610d00(rbx_5, *r15_1)
                int64_t rax_69 = sub_14260f690(rbx_5, rax_68)
                int64_t* rdx_45 = arg2[1]
                int64_t var_1d0 = rax_69
                var_208.d = rax_68[0x18]
                int64_t* r8_11 = *rdx_45
                
                if (&r8_11[1] u> rdx_45[1])
                    int64_t* rdx_46 = &var_1d0
                    
                    if ((*(arg2 + 0x29) & 0x20) != 0)
                        sub_140b540d0(arg2, rdx_46, arg4)
                    else
                        (*(*arg2 + 0x150))(arg2, rdx_46, 8)
                else
                    var_1d0 = *r8_11
                    *rdx_45 += 8
                
                int64_t* rcx_69 = arg2[1]
                int32_t* rdx_47 = *rcx_69
                
                if (&rdx_47[1] u> rcx_69[1])
                    uint64_t* rdx_48 = &var_208
                    
                    if ((*(arg2 + 0x29) & 0x20) != 0)
                        sub_140b54070(arg2, rdx_48, arg4)
                    else
                        (*(*arg2 + 0x150))(arg2, rdx_48, 4)
                else
                    var_208.d = *rdx_47
                    *rcx_69 += 4
                
                var_1c8 = *(rax_68 + 0x58)
                sub_142694420(arg2, zx.q(var_20c), &var_1c8, &var_208, var_238)
                zmm6 = zx.o(0)
                int64_t rbx_6 = 0
                int32_t var_198_1 = 0
                int32_t var_178_1 = 0
                uint128_t var_170_1 = zmm6
                int32_t result_2 = 0
                
                if (var_220_1 != 0)
                    void* rcx_72 = *(rax_68 + 8)
                    var_238 = *(rcx_72 + 0x10)
                    void var_e0
                    int32_t* rax_76
                    rax_76, arg4 = sub_142688aa0(r12, &var_e0, *(rcx_72 + 8), *(rcx_72 + 0xc))
                    int32_t var_198_2 = *rax_76
                    arg4.o = zx.o(*(rax_76 + 0x14))
                    int32_t var_17c_1 = rax_76[7]
                    int32_t result_4 = rax_76[8]
                    int64_t* rcx_77 = *(rax_76 + 0x30)
                    int64_t var_184_1 = (arg4.o).q
                    uint128_t var_194_1 = *(rax_76 + 4)
                    
                    if (rcx_77 != 0)
                        rcx_77[1].d += 1
                        zmm6 = var_170_1
                    
                    uint128_t zmm0_4 = (*(rax_76 + 0x28)).o
                    int64_t var_1a8_1
                    var_1a8_1.o = zmm6
                    void* rcx_78 = _mm_bsrli_si128(zmm6, 8).q
                    uint128_t var_68_1 = zmm0_4
                    var_170_1 = zmm0_4
                    
                    if (rcx_78 != 0)
                        int32_t rax_77 = *(rcx_78 + 8)
                        *(rcx_78 + 8) -= 1
                        
                        if (rax_77 == 1)
                            (**rcx_77)(rcx_77)
                            int32_t rax_79 = *(rcx_77 + 0xc)
                            *(rcx_77 + 0xc) -= 1
                            
                            if (rax_79 == 1)
                                (*(*rcx_77 + 8))(rcx_77, 1)
                    
                    int64_t* var_b0
                    
                    if (var_b0 != 0)
                        if (0 == var_b0[1].d)
                            var_b0[1].d = 0
                        else
                            var_b0[1].d
                        
                        if (var_b0 != 0)
                            var_b0[1].d -= 1
                            
                            if (var_b0[1].d == 1)
                                (**var_b0)(var_b0)
                                int32_t rax_84 = *(var_b0 + 0xc)
                                *(var_b0 + 0xc) -= 1
                                
                                if (rax_84 == 1)
                                    (*(*var_b0 + 8))(var_b0, 1)
                    
                    int64_t* rbx_9 = var_170_1.q
                    
                    if (rbx_9 == 0)
                        rbx_6 = 0
                    else
                        rbx_6 = *rbx_9
                    
                    result_2 = result_4
                
                int64_t* rcx_84 = arg2[1]
                int32_t* rdx_51 = *rcx_84
                
                if (&rdx_51[1] u> rcx_84[1])
                    int32_t* rdx_52 = &result_2
                    
                    if ((*(arg2 + 0x29) & 0x20) != 0)
                        sub_140b54070(arg2, rdx_52, arg4)
                    else
                        (*(*arg2 + 0x150))(arg2, rdx_52, 4)
                else
                    result_2 = *rdx_51
                    *rcx_84 += 4
                
                result = zx.q(result_2)
                
                if (result.d s> 0)
                    if ((arg2[5].b & 1) != 0)
                        int64_t rax_90 = j_sub_1426075c0(zx.q(result.d), 0)
                        rbx_6 = rax_90
                        memset(rax_90, 0, sx.q(result_2))
                        result = zx.q(result_2)
                    
                    int64_t r9_9 = *arg2
                    result = (*(r9_9 + 0x150))(arg2, rbx_6, sx.q(result.d), r9_9, var_238)
                
                void* rcx_89 = var_170_1:8.q
                
                if (rcx_89 != 0)
                    if (0 == *(rcx_89 + 8))
                        *(rcx_89 + 8) = 0
                    else
                        *(rcx_89 + 8)
                    
                    result = zx.q(*(rcx_89 + 8))
                    *(rcx_89 + 8) -= 1
                    
                    if (result.d == 1)
                        int64_t* rbx_10 = var_170_1:8.q
                        (**rbx_10)(rbx_10, 0)
                        result = zx.q(*(rbx_10 + 0xc))
                        *(rbx_10 + 0xc) -= 1
                        
                        if (result.d == 1)
                            int64_t* rcx_91 = var_170_1:8.q
                            result = (*(*rcx_91 + 8))(rcx_91, 1)
                
                rbx_5 = var_1e8_3
                r15_1 += 4
                r14_3 += 1
            while (r14_3 != r13_4)
            
            r15_1 = var_200
    
    if (r15_1 != 0)
        result = sub_140a74f90(r15_1)

__security_check_cookie(result_3 ^ &var_258)
return result
