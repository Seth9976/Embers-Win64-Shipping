// 函数: sub_141f92500
// 地址: 0x141f92500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_18 = arg3
char* r12 = arg3
int64_t* rcx = *(*(arg1 + 0x28) + 0x58)
bool rax_2 = (*(*rcx + 0x368))(rcx)
int64_t rsi
rsi.b = 0
*r12 = 0

if ((*(arg2 + 0x29) & 1) == 0)
    int64_t r9 = arg2[0x15]
    
    if (r9 s< arg2[0x14])
        bool cond:0_1 = (*(sx.q((r9 s>> 3).d) + arg2[0x12]) & 1 << (r9.b & 7)) != 0
        arg2[0x15] = r9 + 1
        rsi.b = cond:0_1
    else
        sub_140b55370(arg2)

*arg4 = rsi.b
char r9_1 = *(arg2 + 0x29)

if ((1 & r9_1) == 0)
    int64_t r10_1 = arg2[0x15]
    rsi.b = 0
    
    if (r10_1 s< arg2[0x14])
        bool cond:1_1 = (*(sx.q((r10_1 s>> 3).d) + arg2[0x12]) & 1 << (r10_1.b & 7)) != 0
        arg2[0x15] = r10_1 + 1
        rsi.b = cond:1_1
    else
        sub_140b55370(arg2)
        r9_1 = *(arg2 + 0x29)
    
    if ((1 & r9_1) == 0)
        if (rsi.b != 0)
            return *(arg1 + 0x70)
        
        void* rsi_1 = nullptr
        int32_t arg_8 = 0
        void* result = nullptr
        int64_t rax_10 = sub_140d41340()
        int64_t* rcx_10 = *(*(arg1 + 0x28) + 0x68)
        (*(*rcx_10 + 0x268))(rcx_10, arg2, rax_10, &result, &arg_8)
        char rax_11 = *(arg2 + 0x29)
        
        if ((1 & rax_11) == 0)
            if ((*(*arg2 + 0x30))(arg2) != 0)
                *(arg2 + 0x29) |= 1
            else
                void* result_5 = result
                
                if (result_5 == 0)
                label_141f926bd:
                    
                    if (rax_2 == 0)
                    label_141f926ce:
                        char r8_4 = *(arg2 + 0x29)
                        result_5.b = 0
                        
                        if ((1 & r8_4) == 0)
                            int64_t r9_3 = arg2[0x15]
                            
                            if (r9_3 s< arg2[0x14])
                                bool cond:2_1 =
                                    (*(sx.q((r9_3 s>> 3).d) + arg2[0x12]) & 1 << (r9_3.b & 7)) != 0
                                arg2[0x15] = r9_3 + 1
                                result_5.b = cond:2_1
                            else
                                sub_140b55370(arg2)
                                r8_4 = *(arg2 + 0x29)
                        
                        if ((r8_4 & 1) == 0)
                            if (result_5.b == 0)
                                int32_t arg_10 = 0
                                int64_t* var_50 = nullptr
                                int64_t rax_21 = sub_140d41340()
                                int64_t* rcx_19 = *(*(arg1 + 0x28) + 0x68)
                                (*(*rcx_19 + 0x268))(rcx_19, arg2, rax_21, &var_50, &arg_10)
                                
                                if (arg_10 u> 0)
                                    int64_t* rdi_3 = var_50
                                    void* rax_37
                                    int64_t rax_38
                                    void* rdx_14
                                    
                                    if (rdi_3 != 0)
                                        rax_37 = sub_140bdf2e0()
                                        rdx_14 = rdi_3[2]
                                        rax_38 = sx.q(*(rax_37 + 0x38))
                                    
                                    if (rdi_3 == 0 || rax_38.d s> *(rdx_14 + 0x38)
                                            || *(*(rdx_14 + 0x30) + (rax_38 << 3))
                                            != rax_37 + 0x30)
                                        if (result != 0)
                                            return result
                                        
                                        if (((*(*(arg1 + 0x28) + 0xa4) u>> 1).b & 1) == 0)
                                            *(arg2 + 0x29) |= 1
                                    else if (rdi_3 == sub_140d41340())
                                        *(arg2 + 0x29) |= 1
                                    else
                                        void* rax_41 = sub_142452380()
                                        int64_t rax_42
                                        
                                        if (rax_41 != 0)
                                            rax_42 = sx.q(*(rax_41 + 0x38))
                                        
                                        if (rax_41 == 0 || rax_42.d s> rdi_3[7].d
                                                || *(rdi_3[6] + (rax_42 << 3)) != rax_41 + 0x30)
                                            if (result != 0)
                                                return result
                                            
                                            void* rbx_2 = *(arg1 + 0x70)
                                            arg_18 = nullptr
                                            
                                            if ((sub_140b5b8a0(0, 0) & 1) != 0)
                                                sub_140d19010(rbx_2, 
                                                    NewObject with empty name can't be used to create "
                                                "default subobjects (inside of UObject derived class "
                                                "constructor) as it produces incon")
                                            
                                            int32_t* var_88_2
                                            var_88_2.d = 0
                                            void* result_1 = sub_140d2dfc0(rdi_3, rbx_2, arg_18, 0, 
                                                var_88_2.d, 0, 0, 0, 0)
                                            int64_t* rcx_36 = *(arg1 + 0x70)
                                            result = result_1
                                            int64_t r8_11 = *rcx_36
                                            (*(r8_11 + 0x2b0))(rcx_36, result_1, r8_11)
                                            sub_142173190(*(*(*(arg1 + 0x28) + 0x58) + 0x150), 
                                                &arg_8, result)
                                            int64_t rdi_4 = sx.q(*(arg1 + 0x168))
                                            int32_t rax_46 = (rdi_4 + 1).d
                                            *(arg1 + 0x168) = rax_46
                                            
                                            if (rax_46 s> *(arg1 + 0x16c))
                                                sub_1405a4d70(arg1 + 0x160)
                                            
                                            *(*(arg1 + 0x160) + (rdi_4 << 3)) = result
                                            
                                            if (arg_8 u<= 0)
                                                return result
                                            
                                            sub_141f77ab0(
                                                *(*(*(arg1 + 0x28) + 0x58) + 0x150) + 0xa8, 
                                                &arg_18, &arg_8, nullptr)
                                            return result
                                        
                                        *(arg2 + 0x29) |= 1
                                else
                                    void* result_3 = result
                                    
                                    if (result_3 != 0)
                                        sub_141f8eb10(arg1, result_3)
                                        int64_t rcx_21 = sx.q(*(arg1 + 0x168))
                                        void* result_4 = result
                                        
                                        if (rcx_21.d != 0)
                                            int32_t r9_5 = 0
                                            int32_t arg_20 = 0
                                            int32_t rdi_2 = 0
                                            int64_t rbx_1 = 0
                                            bool r15 = **(arg1 + 0x160) != result_4
                                            
                                            do
                                                int64_t r10_4 = sx.q(rdi_2)
                                                rbx_1 += 1
                                                rdi_2 += 1
                                                
                                                if (rbx_1 s< rcx_21)
                                                    int64_t rcx_22 = *(arg1 + 0x160) + (rbx_1 << 3)
                                                    
                                                    do
                                                        int32_t rax_24
                                                        rax_24.b = *rcx_22 != result_4
                                                        
                                                        if (zx.d(r15) != rax_24)
                                                            break
                                                        
                                                        rdi_2 += 1
                                                        rbx_1 += 1
                                                        rcx_22 += 8
                                                    while (rbx_1 s< rcx_21)
                                                
                                                int32_t r12_2 = rdi_2 - r10_4.d
                                                
                                                if (r15 != 0)
                                                    if (r9_5 != r10_4.d)
                                                        int64_t rcx_23 = *(arg1 + 0x160)
                                                        memmove(rcx_23 + (sx.q(r9_5) << 3), 
                                                            rcx_23 + (r10_4 << 3), r12_2 << 3)
                                                        result_4 = result
                                                        r9_5 = arg_20
                                                    
                                                    r9_5 += r12_2
                                                    arg_20 = r9_5
                                                
                                                r15 ^= 1
                                            while (rbx_1 s< rcx_21)
                                            
                                            r12 = arg_18
                                            *(arg1 + 0x168) = r9_5
                                        
                                        void* rax_26 = *(arg1 + 0x28)
                                        
                                        if (rax_26 != 0)
                                            void* rcx_25 = *(rax_26 + 0x58)
                                            
                                            if (rcx_25 != 0)
                                                sub_141f96210(rcx_25 + 0x3c8, result_4)
                                        
                                        int64_t* rcx_27 = *(arg1 + 0x70)
                                        (*(*rcx_27 + 0x2b8))(rcx_27)
                                        void* result_2 = result
                                        (*(*result_2 + 0x1f0))(result_2)
                                        int32_t rax_30 = *(result + 0xc)
                                        
                                        if (rax_30 s< data_143e1d9b4)
                                            int16_t temp0_1
                                            int32_t temp1_1
                                            temp0_1:temp1_1 = sx.q(rax_30)
                                            uint32_t rdx_12 = zx.d(temp0_1)
                                            int32_t rax_32 = temp1_1 + rdx_12
                                            rsi_1 = *(data_143e1d9a0 + (sx.q(rax_32 s>> 0x10) << 3))
                                                + sx.q(zx.d(rax_32.w) - rdx_12) * 0x18
                                        
                                        *(rsi_1 + 8) |= 0x20000000
                                    
                                    *r12 = 1
                            else if (result != 0)
                                return result
                    else
                        if (result != 0)
                            return result
                        
                        *(arg2 + 0x29) |= 1
                else
                    void* rax_14 = sub_142452380()
                    void* rdx_5 = *(result_5 + 0x10)
                    int64_t rax_15 = sx.q(*(rax_14 + 0x38))
                    
                    if (rax_15.d s> *(rdx_5 + 0x38)
                            || *(*(rdx_5 + 0x30) + (rax_15 << 3)) != rax_14 + 0x30)
                        if (sub_140d23d40(result, *(arg1 + 0x70)) != 0)
                            goto label_141f926bd
                        
                        if (rax_2 == 0)
                            goto label_141f926ce
                        
                        *(arg2 + 0x29) |= 1
                    else
                        *(arg2 + 0x29) |= 1
        else
            *(arg2 + 0x29) = rax_11 | 1

return nullptr
