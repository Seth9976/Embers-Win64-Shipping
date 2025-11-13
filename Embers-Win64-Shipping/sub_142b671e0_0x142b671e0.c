// 函数: sub_142b671e0
// 地址: 0x142b671e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_158 = -2
void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int32_t* rdi = arg4

if (*arg4 s<= 0 && *(arg1 + 0x28) == 0 && *(arg1 + 0x58) == 0)
    int16_t rax_2 = *(arg2 + 8)
    int32_t rdx_1
    
    if (rax_2 s< 0)
        rdx_1 = *(arg2 + 0xc)
    else
        rdx_1 = sx.d(rax_2) s>> 5
    
    int32_t rbx_1 = 0
    int16_t* rcx
    
    if ((rax_2.b & 0x11) == 0)
        rcx = arg2 + 0xa
        
        if ((rax_2.b & 2) == 0)
            rcx = *(arg2 + 0x18)
    else
        rcx = nullptr
    
    char rax_3 = sub_142a8d900(rcx, rdx_1)
    char rax_5
    
    if (rax_3 != 0)
        int16_t rax_4 = *(arg3 + 8)
        int32_t rdx_3
        
        if (rax_4 s< 0)
            rdx_3 = *(arg3 + 0xc)
        else
            rdx_3 = sx.d(rax_4) s>> 5
        
        int16_t* rcx_1
        
        if ((rax_4.b & 0x11) == 0)
            rcx_1 = arg3 + 0xa
            
            if ((rax_4.b & 2) == 0)
                rcx_1 = *(arg3 + 0x18)
        else
            rcx_1 = nullptr
        
        rax_5 = sub_142a8d900(rcx_1, rdx_3)
    
    if (rax_3 == 0 || rax_5 == 0)
        *rdi = 1
    else
        int16_t var_13c
        void* var_148 = &var_13c:1
        int32_t var_140_1 = 0x28
        var_13c = 0
        int32_t var_110_1 = 0
        int16_t var_fc
        void* _String = &var_fc:1
        int32_t var_100_1 = 0x28
        var_fc = 0
        int32_t var_d0_1 = 0
        sub_142a8cd50(&var_148, arg2, rdi)
        sub_142a8cd50(&_String, arg3, rdi)
        
        if (*rdi s<= 0)
            void* const r15
            r15.b = 0
            int16_t rax_6 = *(arg3 + 8)
            int32_t rax_8
            
            if (rax_6 s< 0)
                rax_8 = *(arg3 + 0xc)
            else
                rax_8 = sx.d(rax_6) s>> 5
            
            int32_t rax_11
            int32_t rsi_1
            
            if (rax_8 s<= 0)
                rsi_1 = 0x2000
                rax_11 = j_sub_142a94e30(0x2000, var_148)
                
                if (rax_11 != 0xffffffff)
                    goto label_142b676b0
                
                rsi_1 = 0x100a
                rax_11 = j_sub_142a94e30(0x100a, var_148)
                
                if (rax_11 != 0xffffffff)
                    goto label_142b676b0
                
                int32_t rax_24 = sub_142a94eb0(var_148)
                rsi_1 = rax_24
                
                if (rax_24 u> 0x40)
                    if (sub_142a94ed0("ANY", var_148) != 0)
                        int32_t rax_26 = sub_142a94ed0("ASCII", var_148)
                        
                        if (rax_26 != 0)
                            rax_11 = 1
                            
                            if (sub_142a94ed0("Assigned", var_148) == 0)
                                rsi_1 = 0x2000
                                r15 = 1
                                goto label_142b676b0
                            
                        labelid_14:
                            *rdi = 1
                        else
                            sub_142aa0550(arg1, 0, rax_26 + 0x7f)
                    else
                        sub_142aa0550(arg1, 0, 0x10ffff)
                else
                    rax_11 = 1
                label_142b676b0:
                    sub_142b66390(arg1, rsi_1, rax_11, rdi)
                    
                    if (r15.b != 0)
                        sub_142a9f070(arg1)
                    
                    if ((*(arg1 + 0x20) & 1) != 0 && *rdi s<= 0)
                        *rdi = 7
            else
                int32_t rax_9
                char* _EndPtr_2
                rax_9, _EndPtr_2 = sub_142a94eb0(var_148)
                rsi_1 = rax_9
                
                if (rax_9 == 0xffffffff)
                    *rdi = 1
                else
                    char* _EndPtr_1
                    
                    if (rsi_1 != 0x1005)
                        if (rsi_1 u<= 0x40 || rax_9 - 0x1000 u<= 0x18 || rsi_1 == 0x2000)
                            goto label_142b67555
                        
                        char* _EndPtr
                        
                        if (rsi_1 == 0x3000)
                            strtod(_String, &_EndPtr)
                            _EndPtr_1 = _EndPtr_2
                            
                            if (*_EndPtr == 0)
                                sub_142b66290(arg1, sub_142b67dd0, &_EndPtr_1, 
                                    sub_142b8b620(0x3000, rdi), rdi)
                            else
                            labelid_14:
                                *rdi = 1
                        else
                            void var_c9
                            char var_c8[0x30]
                            
                            if (rsi_1 == 0x4000)
                                void* _String_2 = _String
                                char i = *_String_2
                                
                                if (i != 0)
                                    int64_t rax_16 = 0
                                    
                                    do
                                        _String_2 += 1
                                        
                                        if (i != 0x20)
                                        label_142b67486:
                                            
                                            if (rax_16 s>= 0x7f)
                                                goto label_142b6751a_2
                                            
                                            var_c8[rax_16] = i
                                            rbx_1 += 1
                                            rax_16 += 1
                                        else if (rax_16 != 0
                                                && (rax_16 s<= 0 || *(&var_c9 + rax_16) != i))
                                            goto label_142b67486
                                        
                                        i = *_String_2
                                    while (i != 0)
                                    
                                    if (rbx_1 s> 0 && var_c8[sx.q(rbx_1 - 1)] == 0x20)
                                        rbx_1 -= 1
                                
                                var_c8[sx.q(rbx_1)] = 0
                                sub_142a4b8d0(&_EndPtr, &var_c8)
                                sub_142b66290(arg1, sub_142b67ed0, &_EndPtr, 
                                    sub_142b8b620(0x4000, rdi), rdi)
                            else if (rsi_1 == 0x4005)
                                void* _String_1 = _String
                                char i_1 = *_String_1
                                
                                if (i_1 != 0)
                                    int64_t rax_12 = 0
                                    
                                    do
                                        _String_1 += 1
                                        
                                        if (i_1 != 0x20)
                                        label_142b673f6:
                                            
                                            if (rax_12 s>= 0x7f)
                                                goto label_142b6751a_2
                                            
                                            var_c8[rax_12] = i_1
                                            rbx_1 += 1
                                            rax_12 += 1
                                        else if (rax_12 != 0
                                                && (rax_12 s<= 0 || *(&var_c9 + rax_12) != i_1))
                                            goto label_142b673f6
                                        
                                        i_1 = *_String_1
                                    while (i_1 != 0)
                                    
                                    if (rbx_1 s> 0 && var_c8[sx.q(rbx_1 - 1)] == 0x20)
                                        rbx_1 -= 1
                                
                                var_c8[sx.q(rbx_1)] = 0
                                int32_t rax_15 = sub_142b65ef0(2, &var_c8, rdi)
                                
                                if (*rdi s> 0)
                                labelid_14:
                                    *rdi = 1
                                else
                                    sub_142a9eda0(arg1)
                                    sub_142a9e7d0(arg1, rax_15)
                            else if (rsi_1 == 0x400b)
                            label_142b6751a:
                                *rdi = 1
                            else if (rsi_1 == 0x7000)
                                rax_11 = j_sub_142a94e30(0x100a, _String)
                                
                                if (rax_11 != 0xffffffff)
                                    goto label_142b676b0
                                
                                *rdi = 1
                            else
                                *rdi = 1
                    else
                        rsi_1 = 0x2000
                    label_142b67555:
                        double zmm0_1
                        rax_11, zmm0_1 = j_sub_142a94e30(rsi_1, _String)
                        
                        if (rax_11 != 0xffffffff)
                            goto label_142b676b0
                        
                        if (rsi_1 == 0x1002 || rsi_1 - 0x1010 u<= 1)
                            strtod(_String, &_EndPtr_1)
                            
                            if (*_EndPtr_1 != 0 || zmm0_1 < 0.0 || 0x406fe00000000000 f< zmm0_1)
                            label_142b6751a_1:
                                *rdi = 1
                            else
                                rax_11 = int.d(zmm0_1)
                                int64_t zmm1 = _mm_cvtepi32_pd(zx.q(rax_11)).q
                                zmm1 f- zmm0_1
                                
                                if (is_unordered.q(zmm1, zmm0_1))
                                label_142b6751a_2:
                                    *rdi = 1
                                else
                                    if (zmm1 f== zmm0_1)
                                        goto label_142b676b0
                                    
                                    *rdi = 1
                        else
                            *rdi = 1
        
        if (var_fc.b != 0)
            sub_142a7dcd0(_String)
        
        if (var_13c.b != 0)
            sub_142a7dcd0(var_148)

__security_check_cookie(rax_1 ^ &var_198)
return arg1
