// 函数: sub_141acad10
// 地址: 0x141acad10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1c) = 0xffffffff
int32_t rdi = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 0xffffffff
*(arg1 + 0x28) = 0
*(arg1 + 0x34) = 0xffffffff
*(arg1 + 0x38) = 0
sub_140908eb0(arg1 + 0x40)
void* r12 = arg1 + 0x90
int32_t* result = sub_1409d9b90(r12)

if (arg3 != 0 && arg2 != 0)
    void* rsi_1 = *(arg2 + 0x430)
    
    if (rsi_1 != 0)
        int32_t rax = *(arg2 + 0xc)
        int32_t r8 = data_143e1d9b4
        int64_t r9_1 = data_143e1d9a0
        void* const rax_6
        
        if (rax s>= r8)
            rax_6 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax)
            uint32_t rdx_1 = zx.d(temp0_1)
            int32_t rax_2 = temp1_1 + rdx_1
            rax_6 = *(r9_1 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q((rax_2 & 0xffff) - rdx_1) * 0x18
        
        result = zx.q(*(rax_6 + 8) u>> 0x1d)
        
        if ((result.b & 1) == 0)
            int32_t rax_8 = *(rsi_1 + 0xc)
            void* rbp_1 = *(arg3 + 0x430)
            void* const rax_14
            
            if (rax_8 s>= r8)
                rax_14 = nullptr
            else
                int16_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(rax_8)
                uint32_t rdx_4 = zx.d(temp2_1)
                int32_t rax_10 = temp3_1 + rdx_4
                rax_14 =
                    *(r9_1 + (sx.q(rax_10 s>> 0x10) << 3)) + sx.q((rax_10 & 0xffff) - rdx_4) * 0x18
            
            result = zx.q(*(rax_14 + 8) u>> 0x1d)
            
            if ((result.b & 1) == 0)
                result = zx.q(*(rsi_1 + 8) u>> 0xc)
                
                if ((result.b & 1) == 0 && rbp_1 != 0)
                    int32_t rax_17 = *(rbp_1 + 0xc)
                    void* const rax_23
                    
                    if (rax_17 s>= r8)
                        rax_23 = nullptr
                    else
                        int16_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(rax_17)
                        uint32_t rdx_7 = zx.d(temp4_1)
                        int32_t rax_19 = temp5_1 + rdx_7
                        rax_23 = *(r9_1 + (sx.q(rax_19 s>> 0x10) << 3))
                            + sx.q((rax_19 & 0xffff) - rdx_7) * 0x18
                    
                    result = zx.q(*(rax_23 + 8) u>> 0x1d)
                    
                    if ((result.b & 1) == 0)
                        result = zx.q(*(rbp_1 + 8) u>> 0xc)
                        
                        if ((result.b & 1) == 0)
                            sub_140d3a3a0(arg1 + 0x1c, arg2)
                            sub_140d3a3a0(arg1 + 0x24, rsi_1)
                            result = sub_140d3a3a0(arg1 + 0x34, rbp_1)
                            int32_t var_48
                            int32_t arg_8
                            int64_t arg_18
                            int32_t* var_40
                            
                            if (rsi_1 != rbp_1)
                                int32_t i = 0
                                
                                if (*(rbp_1 + 0x1b0) s> 0)
                                    do
                                        arg_18 = *(*(rbp_1 + 0x1a8) + sx.q(i) * 0xc)
                                        int32_t rax_29 = sub_14078ee20(rsi_1 + 0x188, &arg_18)
                                        sub_14090a150(arg1 + 0x40, &var_48)
                                        int32_t rax_30 = var_48
                                        *var_40 = i
                                        var_40[1] = rax_29
                                        var_40[2] = 0xffffffff
                                        result = sub_140908a30(arg1 + 0x40, &arg_8, i, var_40, 
                                            rax_30, nullptr)
                                        i += 1
                                    while (i s< *(rbp_1 + 0x1b0))
                                    
                                    r12 = arg1 + 0x90
                            else
                                int32_t i_1 = 0
                                
                                if (*(rsi_1 + 0x1b0) s> 0)
                                    do
                                        sub_14090a150(arg1 + 0x40, &var_48)
                                        int32_t rax_26 = var_48
                                        *var_40 = i_1
                                        var_40[1] = i_1
                                        var_40[2] = 0xffffffff
                                        result = sub_140908a30(arg1 + 0x40, &arg_8, i_1, var_40, 
                                            rax_26, nullptr)
                                        i_1 += 1
                                    while (i_1 s< *(rsi_1 + 0x1b0))
                            
                            if (*(arg1 + 0x19) != 0)
                                void* rcx_25 = *(rsi_1 + 0x60)
                                void* rsi_2 = *(rbp_1 + 0x60)
                                
                                if (rcx_25 != 0 && rsi_2 != 0)
                                    int64_t* rax_31 = sub_141e433d0(rcx_25, &data_143f398c8)
                                    int64_t* rax_32 = sub_141e433d0(rsi_2, &data_143f398c8)
                                    var_48.q = 0
                                    int32_t var_40_1 = 0
                                    result = operator new[]<8>(rax_31, &var_48)
                                    
                                    if (var_40_1 s> 0)
                                        do
                                            int64_t rbx_3 = sx.q(rdi) << 3
                                            result = sub_141e5dd10(rax_32, var_48.q + rbx_3)
                                            int16_t rsi_3 = result.w
                                            
                                            if (result.w != 0xffff)
                                                arg_18 = var_48.q + rbx_3
                                                sub_141a87e10(r12, &arg_8, &arg_18, nullptr)
                                                result = *r12
                                                result[sx.q(arg_8) * 5 + 2].w = rsi_3
                                            
                                            rdi += 1
                                        while (rdi s< var_40_1)
                                    
                                    int64_t rcx_32 = var_48.q
                                    
                                    if (rcx_32 != 0)
                                        return sub_140a74f90(rcx_32)

return result
