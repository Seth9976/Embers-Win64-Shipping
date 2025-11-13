// 函数: sub_141264b20
// 地址: 0x141264b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int64_t temp0 = arg3[2]
int64_t* r15 = arg3

if (temp0 != 0)
    int32_t r12_1 = *(data_143e8ed68 + 4)
    int32_t var_94_1 = r12_1
    int32_t rax_2 = (*(*arg3 + 0x40))(arg3)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(rax_2)
    int32_t rcx_1
    
    if (temp0 == 0)
        rcx_1 = 0x20
    else
        rcx_1 = 0x1f - temp0_1
    
    uint64_t rflags_2
    int32_t temp0_2
    temp0_2, rflags_2 = _bit_scan_reverse(rax_2 - 1)
    int32_t rdx
    
    if (rax_2 == 1)
        rdx = 0x20
    else
        rdx = 0x1f - temp0_2
    
    int64_t* rax_4 = sub_14139bef0(arg1)
    int64_t rcx_6 = r15[2]
    int64_t* rbx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_1 = &rbx_3[1]
    
    if (rdx_1 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x10)
        rbx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_1 = &rbx_3[1]
    
    *(arg1 + 0x30) = rdx_1
    *rbx_3 = rcx_6
    void*** rcx_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_5 = &rcx_10[5]
    
    if (rax_5 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_5 = &rcx_10[5]
    
    *(arg1 + 0x30) = rax_5
    *(arg1 + 0x14) += 1
    **(arg1 + 8) = rcx_10
    *(arg1 + 8) = &rcx_10[1]
    rcx_10[1] = 0
    *rcx_10 = &data_142d549c8
    rcx_10[2].d = 1
    rcx_10[3] = rbx_3
    rcx_10[4].d = 1
    int32_t rax_8 = data_143dbb190
    uint128_t zmm0 = zx.o(data_143dbb188.q)
    int32_t var_d0_1 = rax_8
    int32_t var_c4_1 = rax_8
    uint64_t var_d8_1 = zmm0.q
    uint64_t var_cc_1 = zmm0.q
    uint64_t var_c0_1 = zmm0.q
    int64_t var_b4_1 = 0
    int64_t var_ac_1 = 1
    int32_t var_a4_1 = 0
    int32_t rax_10 = (*(*r15 + 0x48))(r15, 0)
    int64_t rdx_2 = *r15
    result = (*(rdx_2 + 0x40))(r15, rdx_2)
    var_d8_1:4.d = rax_10
    var_d8_1.d = result
    int32_t var_d0_2 = 1
    int32_t i = 0
    var_ac_1.d = 6
    int64_t arg_20
    arg_20.d = 0
    
    if (((0x20 - rdx) & not.d(rcx_1 << 0x1a s>> 0x1f)) + 1 s> 0)
        do
            int32_t i_1 = i
            
            if (r12_1 == 1)
                i_1 = 0
            
            int32_t rcx_18 = i_1 & 0x80000001
            
            if (rcx_18 s< 0)
                rcx_18 = ((rcx_18 - 1) | 0xfffffffe) + 1
            
            int64_t* rbx_9 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rsi_4 = rax_4[sx.q(1 - rcx_18) + 0x24]
            void* rcx_20 = &rbx_9[1]
            int64_t rax_13 = *(rsi_4 + 0x10)
            
            if (rcx_20 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x10)
                rbx_9 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rcx_20 = &rbx_9[1]
            
            *(arg1 + 0x30) = rcx_20
            *rbx_9 = rax_13
            void*** rcx_24 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_14 = &rcx_24[5]
            
            if (rax_14 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_24 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_14 = &rcx_24[5]
            
            *(arg1 + 0x30) = rax_14
            *(arg1 + 0x14) += 1
            **(arg1 + 8) = rcx_24
            *(arg1 + 8) = &rcx_24[1]
            rcx_24[1] = 0
            *rcx_24 = &data_142d549c8
            rcx_24[2].d = 1
            rcx_24[3] = rbx_9
            rcx_24[4].d = 0
            int64_t r12_2 = r15[2]
            int64_t* r15_1 = *(rsi_4 + 0x10)
            
            if (data_143f0f19d == 0)
                int32_t j = 0
                int32_t var_58_1 = 1
                uint128_t var_90_1 = var_d8_1.o
                uint64_t var_60_1 = var_ac_1
                
                do
                    void*** rbx_19 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_41 = &rbx_19[0xc]
                    
                    if (rax_41 u> *(arg1 + 0x38))
                        sub_140b0e3d0(arg1 + 0x30, 0x68)
                        rbx_19 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_41 = &rbx_19[0xc]
                    
                    *(arg1 + 0x30) = rax_41
                    void**** rax_42 = *(arg1 + 8)
                    *(arg1 + 0x14) += 1
                    *rax_42 = rbx_19
                    *(arg1 + 8) = &rbx_19[1]
                    rbx_19[1] = 0
                    *rbx_19 = &data_142da7788
                    *(rbx_19 + 0x10) = var_90_1
                    *(rbx_19 + 0x20) = var_cc_1:4.o
                    *(rbx_19 + 0x30) = rax_8.o
                    rbx_19[8] = var_60_1
                    rbx_19[9].d = 1
                    rbx_19[0xa] = r15_1
                    rbx_19[0xb] = r12_2
                    
                    if ((*(*r15_1 + 8))(r15_1) == 0)
                        int64_t* rcx_39 = rbx_19[0xa]
                        
                        if ((*(*rcx_39 + 0x10))(rcx_39) == 0)
                            int64_t* rcx_40 = rbx_19[0xa]
                            
                            if ((*(*rcx_40 + 0x18))(rcx_40) == 0)
                                int64_t* rcx_41 = rbx_19[0xa]
                                (*(*rcx_41 + 0x20))(rcx_41)
                    
                    int64_t* rcx_42 = rbx_19[0xb]
                    
                    if ((*(*rcx_42 + 8))(rcx_42) == 0)
                        int64_t* rcx_43 = rbx_19[0xb]
                        
                        if ((*(*rcx_43 + 0x10))(rcx_43) == 0)
                            int64_t* rcx_44 = rbx_19[0xb]
                            
                            if ((*(*rcx_44 + 0x18))(rcx_44) == 0)
                                int64_t* rcx_45 = rbx_19[0xb]
                                (*(*rcx_45 + 0x20))(rcx_45)
                    
                    var_60_1.d += 1
                    int32_t var_5c = var_5c + 1
                    int32_t temp6_1
                    int32_t temp7_1
                    temp6_1:temp7_1 = sx.q(var_90_1.d)
                    int32_t rax_61 = (temp7_1 - temp6_1) s>> 1
                    
                    if (rax_61 s<= 1)
                        rax_61 = 1
                    
                    var_90_1.d = rax_61
                    int32_t temp8_1
                    int32_t temp9_1
                    temp8_1:temp9_1 = sx.q(var_90_1:4.d)
                    int32_t rax_65 = (temp9_1 - temp8_1) s>> 1
                    
                    if (rax_65 s<= 1)
                        rax_65 = 1
                    
                    j += 1
                    var_90_1:4.d = rax_65
                while (j u< 1)
                
                i = arg_20.d
            else
                void*** rbx_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_17 = &rbx_14[0xc]
                
                if (rax_17 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, 0x68)
                    rbx_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_17 = &rbx_14[0xc]
                
                *(arg1 + 0x30) = rax_17
                void** rax_18 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_18 = rbx_14
                *(arg1 + 8) = &rbx_14[1]
                rbx_14[1] = 0
                *rbx_14 = &data_142da7788
                *(rbx_14 + 0x10) = var_d8_1.o
                *(rbx_14 + 0x20) = var_cc_1:4.o
                *(rbx_14 + 0x30) = rax_8.o
                rbx_14[8] = var_ac_1
                rbx_14[9].d = 1
                rbx_14[0xa] = r15_1
                rbx_14[0xb] = r12_2
                
                if ((*(*r15_1 + 8))(r15_1) == 0)
                    int64_t* rcx_30 = rbx_14[0xa]
                    
                    if ((*(*rcx_30 + 0x10))(rcx_30) == 0)
                        int64_t* rcx_31 = rbx_14[0xa]
                        
                        if ((*(*rcx_31 + 0x18))(rcx_31) == 0)
                            int64_t* rcx_32 = rbx_14[0xa]
                            (*(*rcx_32 + 0x20))(rcx_32)
                
                int64_t* rcx_33 = rbx_14[0xb]
                
                if ((*(*rcx_33 + 8))(rcx_33) == 0)
                    int64_t* rcx_34 = rbx_14[0xb]
                    
                    if ((*(*rcx_34 + 0x10))(rcx_34) == 0)
                        int64_t* rcx_35 = rbx_14[0xb]
                        
                        if ((*(*rcx_35 + 0x18))(rcx_35) == 0)
                            int64_t* rcx_36 = rbx_14[0xb]
                            (*(*rcx_36 + 0x20))(rcx_36)
            
            var_ac_1:4.d += 1
            var_a4_1 += 1
            r15 = arg3
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(var_d8_1.d)
            r12_1 = var_94_1
            int32_t rax_37 = (temp3_1 - temp2_1) s>> 1
            
            if (rax_37 s<= 1)
                rax_37 = 1
            
            var_d8_1.d = rax_37
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(var_d8_1:4.d)
            result = (temp5_1 - temp4_1) s>> 1
            
            if (result s<= 1)
                result = 1
            
            i += 1
            var_d8_1:4.d = result
            arg_20.d = i
        while (i s< ((0x20 - rdx) & not.d(rcx_1 << 0x1a s>> 0x1f)) + 1)

return result
