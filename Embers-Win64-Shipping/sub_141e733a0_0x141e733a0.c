// 函数: sub_141e733a0
// 地址: 0x141e733a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_7f8
int64_t rax_1 = __security_cookie ^ &var_7f8
char rax_2
void* rdx
rax_2, rdx = sub_140a80ea0()
int32_t* result

if (rax_2 != 0)
    int64_t* r15_1 = *(arg2 + 0x18)
    void* rax_5
    int64_t rax_6
    
    if (r15_1 != 0 && (*(arg1 + 0x352) & 0x20) == 0 && r15_1 != 0)
        rax_5 = sub_1425a2740()
        rdx = r15_1[2]
        rax_6 = sx.q(*(rax_5 + 0x38))
    
    if (r15_1 != 0 && ((*(arg1 + 0x352) & 0x20) != 0 || r15_1 == 0 || rax_6.d s> *(rdx + 0x38)
            || *(*(rdx + 0x30) + (rax_6 << 3)) != rax_5 + 0x30))
        int64_t rax_8 = *r15_1
        float zmm0[0x4] = zx.o(0)
        float temp0_1[0x4] = _mm_max_ss(data_143a2d480[0], zmm0[0])
        (*(rax_8 + 0x288))(r15_1)
        int64_t var_7a8
        
        if (zmm0[0] > temp0_1[0])
        label_141e73626:
            void* rax_18
            int32_t zmm0_1
            rax_18, zmm0_1 = sub_1425a4180()
            void* rdx_8 = r15_1[2]
            uint64_t rax_19 = sx.q(*(rax_18 + 0x38))
            int64_t var_7c0
            int32_t var_7b8
            
            if (rax_19.d s> *(rdx_8 + 0x38))
            label_141e736b5:
                void* r8_1
                
                if (arg3 != 0)
                label_141e73763:
                    r8_1.b = arg3 != 0
                    int32_t zmm0_2
                    result, zmm0_2 = sub_14235dfd0(arg1 + 0x5c8, arg2, r8_1.b)
                    int32_t* result_1 = result
                    
                    if (result != 0)
                        int64_t r9_1 = sx.q(*(arg1 + 0x28))
                        void* rax_26
                        
                        if (r15_1[8].d == *(r15_1 + 0x6c))
                        labelid_44:
                            rax_26, zmm0_2 = sub_141e6d960(&r15_1[7], arg1 + 0x28)
                        else
                            void* rcx_33 = r15_1[0xf]
                            void* r8_2 = &r15_1[0xe]
                            
                            if (rcx_33 != 0)
                                r8_2 = rcx_33
                            
                            int32_t rax_25 = *(r8_2 + (((sx.q(r15_1[0x10].d) - 1) & r9_1) << 2))
                            
                            if (rax_25 == 0xffffffff)
                            label_141e73884:
                                rax_26, zmm0_2 = sub_141e6d960(&r15_1[7], arg1 + 0x28)
                            else
                                int32_t* rdx_24
                                
                                while (true)
                                    rdx_24 = (sx.q(rax_25) << 4) + r15_1[7]
                                    
                                    if (*rdx_24 == r9_1.d)
                                        break
                                    
                                    rax_25 = rdx_24[2]
                                    
                                    if (rax_25 == 0xffffffff)
                                        goto label_141e73884_2
                                
                                if (rax_25 == 0xffffffff || rdx_24 == 0)
                                label_141e73884_1:
                                    rax_26, zmm0_2 = sub_141e6d960(&r15_1[7], arg1 + 0x28)
                                else
                                    rax_26 = &rdx_24[1]
                                    
                                    if (rax_26 == 0)
                                    label_141e73884_2:
                                        rax_26, zmm0_2 = sub_141e6d960(&r15_1[7], arg1 + 0x28)
                        
                        *rax_26 += 1
                        
                        if (*(arg1 + 0x60) != 0)
                            rax_26 = (*(*result_1 + 8))(result_1)
                            
                            if (rax_26 != 0)
                                int64_t* rcx_36 = *(arg1 + 0x60)
                                int64_t r9_2 = *rcx_36
                                (*(r9_2 + 0x18))(rcx_36, result_1, rax_26, r9_2)
                        
                        int64_t* rcx_37 = *(result_1 + 0x18)
                        
                        if (rcx_37 != 0)
                            rax_26 = sub_14236bbe0(rcx_37, zmm0_2)
                        
                        if (rcx_37 == 0 || rax_26.b == 0)
                            rax_26.b = 0
                        else
                            rax_26.b = 1
                        
                        if (rax_26.b == 0)
                            *(arg1 + 0x7a0) += 1
                        
                        *(result_1 + 0x183) |= 8
                        
                        if (arg3 != 0)
                            void* rbx_2 = *(arg3 + 0x10)
                            sub_141e744f0(arg1, rbx_2)
                            sub_141dbcc30(rbx_2)
                        
                        int64_t rsi_1 = sx.q(*(arg1 + 0x380))
                        result = zx.q((rsi_1 + 1).d)
                        *(arg1 + 0x380) = result.d
                        
                        if (result.d s> *(arg1 + 0x384))
                            result = sub_1405a4d70(arg1 + 0x378)
                        
                        *(*(arg1 + 0x378) + (rsi_1 << 3)) = result_1
                        int64_t rsi_2 = *(result_1 + 0x28)
                        
                        if (rsi_2 != 0)
                            sub_1405b3620(arg1 + 0x4c8, &var_7c0)
                            int64_t* r9_3 = var_7b8.q
                            char* var_7d0_1 = nullptr
                            int32_t rax_30 = var_7c0.d
                            *r9_3 = rsi_2
                            r9_3[1] = result_1
                            r9_3[2].d = 0xffffffff
                            result = sub_14078adb0(arg1 + 0x4c8, &var_7a8, 
                                (rsi_2 u>> 0x20).d * 0x17 + rsi_2.d, r9_3, rax_30, var_7d0_1)
                    else if (arg3 == 0)
                        int64_t* rcx_28 = *(arg2 + 0x18)
                        var_7c0 = 0
                        int32_t var_7b8_1 = 0
                        
                        if (*(rcx_28 + 0x31) != 0 && data_143a2d44c != 0
                                && (*(arg2 + 0x182) & 8) == 0)
                            if (rcx_28 != 0)
                                result = sub_14236bbe0(rcx_28, zmm0_2)
                            
                            if (rcx_28 == 0 || result.b == 0)
                                result.b = 0
                            else
                                result.b = 1
                        
                        if (*(rcx_28 + 0x31) == 0 || data_143a2d44c == 0
                                || (*(arg2 + 0x182) & 8) != 0 || result.b == 0
                                || *(arg2 + 0x185) != 0 || (*(arg2 + 0x183) & 0x10) != 0)
                            result = sub_141eefcf0(*(arg2 + 0x28), 1)
                        else
                            void*** var_7b0_3 = sub_141dbe4e0(arg2, arg1)
                            sub_141e76210(&var_7c0)
                            result = sub_141e74a30(arg1, &var_7c0)
                else
                    int64_t* rcx_22 = *(arg2 + 0x18)
                    var_7c0 = 0
                    var_7b8 = 0
                    int64_t var_7b0_1 = 0
                    
                    if (*(rcx_22 + 0x31) == 0 || data_143a2d44c == 0 || (*(arg2 + 0x182) & 8) != 0)
                        goto label_141e73763
                    
                    if (rcx_22 != 0)
                        rax_19, r8_1 = sub_14236bbe0(rcx_22, zmm0_1)
                    
                    if (rcx_22 == 0 || rax_19.b == 0)
                        rax_19.b = 0
                    else
                        rax_19.b = 1
                    
                    if (rax_19.b == 0 || *(arg2 + 0x185) != 0 || (*(arg2 + 0x183) & 0x10) != 0)
                        goto label_141e73763
                    
                    char rax_21
                    rax_21, r8_1 = sub_141e808a0(arg2, arg1)
                    
                    if (rax_21 != 0)
                        goto label_141e73763
                    
                    void*** var_7b0_2 = sub_141dbe4e0(arg2, arg1)
                    sub_141e76210(&var_7c0)
                    result = sub_141e74a30(arg1, &var_7c0)
            else
                if (*(*(rdx_8 + 0x30) + (rax_19 << 3)) != rax_18 + 0x30)
                    goto label_141e736b5
                
                rax_19.b = *(r15_1 + 0x16d) & 3
                
                if (rax_19.b != 3)
                    goto label_141e736b5
                
                var_7a8 = r15_1[3]
                var_7c0 = 0
                var_7b8.q = 0
                sub_140b63e00(&var_7a8, &var_7c0)
                
                if (arg3 == 0)
                    result = sub_141eefcf0(*(arg2 + 0x28), 1)
                else
                    result = sub_141e744f0(arg1, *(arg3 + 0x10))
                
                int64_t rcx_21 = var_7c0
                
                if (rcx_21 != 0)
                    result = sub_140a74f90(rcx_21)
        else
            int64_t* rcx_10 = *(arg2 + 0x18)
            
            if ((*(*rcx_10 + 0x270))(rcx_10) != 0)
                goto label_141e73626
            
            char rax_12
            
            if ((*(arg1 + 0x370) & 2) != 0)
                int64_t* rcx_11 = *(arg2 + 0x18)
                rax_12 = (*(*rcx_11 + 0x268))(rcx_11)
            
            if ((*(arg1 + 0x370) & 2) != 0 && (rax_12 != 0 || (*(arg2 + 0x181) & 0xc) == 0xc))
                goto label_141e73626
            
            int64_t* rcx_12 = *(arg2 + 0x18)
            char rax_15 = (*(*rcx_12 + 0x290))(rcx_12)
            
            if (rax_15 != 0)
                goto label_141e73626
            
            if (1f f!= *(arg2 + 0x470) || not(1f f== *(arg2 + 0x474)))
                rax_15 = 1
            
            if ((*(arg2 + 0x180) & 4) == 0 || (*(arg2 + 0x328) & 1) == 0 || rax_15 != 0)
                goto label_141e73626
            
            void* rax_16 = sub_141e7dd10(arg1)
            
            if (1f f!= *(rax_16 + 8) || 1f f!= *(rax_16 + 0xc))
                goto label_141e73626
            
            float zmm1[0x4] = *(arg2 + 0x230)
            int128_t zmm2
            zmm2.d = (*(arg2 + 0x25c)).d f* *(arg2 + 0x210)
            float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            var_7a8.d = zmm1[0]
            float var_7a0_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
            var_7a8:4.d = temp0_2[0]
            
            if (sub_141e81570(arg1, &var_7a8, zmm2) != 0)
                goto label_141e73626
            
            if (arg3 == 0)
                result = sub_141eefcf0(*(arg2 + 0x28), 1)
            else
                result = sub_141e744f0(arg1, *(arg3 + 0x10))
    else if (arg3 == 0)
        rdx.b = 1
        result = sub_141eefcf0(*(arg2 + 0x28), rdx.b)
    else
        result = sub_141e744f0(arg1, *(arg3 + 0x10))
else
    void** var_748
    sub_141db5dc0(&var_748, arg2)
    void*** rax_3 = sub_140a82f30(0x710, 0x10)
    *rax_3 = &data_143251888
    rax_3[2] = arg1
    sub_141db5dc0(&rax_3[4], &var_748)
    rax_3[0xe0] = arg3
    *rax_3 = &data_1432518a8
    int64_t (* var_798)(int64_t* arg1)
    int64_t (* rax_4)(int64_t* arg1) = var_798
    
    if (rax_3 != -0x10)
        rax_4 = sub_141e763b0
    
    void*** var_788_1 = rax_3
    var_798 = rax_4
    char var_7c8
    sub_141e85cb0(&var_798, var_7c8)
    result = sub_141db7fa0(&var_748)

__security_check_cookie(rax_1 ^ &var_7f8)
return result
